#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0077[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 8, 0, 0, 0, 0, 0, 9,
    0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0,
    0, 0, 0, 13, 0, 14, 0, 15, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0,
    0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 27, 0, 0, 28, 0, 29, 30, 0, 0, 31, 0, 32, 0, 33, 0, 0,
    34, 0, 35, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 39, 0, 0, 40, 0, 41, 42, 0, 43, 0, 0, 44, 0, 45, 0,
    0, 46, 0, 0, 47, 0, 0, 48, 49, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0,
    55, 0, 0, 0, 56, 0, 0, 57, 0, 0, 58, 0, 0, 59, 0, 0, 60, 0, 0, 61, 0, 62, 63, 0, 0, 64, 0, 0, 0, 0, 0, 65,
    0, 0, 66, 0, 67, 0, 0, 68, 0, 0, 69, 0, 70, 0, 0, 0, 71, 0, 0, 72, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0,
    0, 0, 76, 0, 0, 77, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 81, 0, 82, 0, 0, 83, 0, 0, 84, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 91, 0, 92, 0, 0, 93, 0, 94, 0, 95, 0, 96, 0, 0, 0,
    97, 0, 98, 0, 0, 0, 99, 0, 100, 0, 0, 0, 101, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0,
    0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 109, 0, 110, 0, 111, 0, 112, 0, 113, 0, 114, 0, 115, 0,
    0, 0, 116, 0, 0, 0, 0, 117, 0, 118, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 122, 0, 123, 0, 0, 0, 124, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 127, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0,
    0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 137, 0, 138, 0, 139, 0, 140,
    0, 141, 0, 142, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 152, 0, 153, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 156,
    0, 157, 0, 0, 0, 0, 0, 0, 158, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0,
    164, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 177, 0, 178, 0, 179, 0, 0, 0, 0, 0, 0, 180, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 187, 0, 0,
    0, 0, 0, 0, 188, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 0, 0, 0, 0, 0, 194,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 199, 0, 200,
    0, 201, 0, 202, 0, 203, 0, 204, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 208, 0, 0, 0, 0,
    209, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 214, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 217, 0, 0, 0, 218, 0, 0, 219,
    0, 220, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 224, 0, 225, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0,
    0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 233, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0,
    236, 0, 237, 0, 238, 0, 0, 0, 239, 0, 240, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 246, 0, 0,
    0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 251,
    0, 252, 0, 253, 0, 254, 0, 255, 0, 256, 0, 257, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 260, 0, 261, 0, 262, 0, 0, 0, 0, 263, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 270, 0, 271, 0, 0, 0, 0, 272, 273, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 277, 0, 278, 0, 279, 0, 0, 280, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 283, 0, 284, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    287, 0, 288, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 291, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 296, 0, 297, 0, 298, 0, 0, 299, 0, 0, 300, 0, 0, 301, 0, 302,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0,
    0, 0, 306, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 314, 0, 315, 0, 316, 0, 0, 317, 0, 0, 318, 0, 0, 319, 0, 320, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    323, 0, 324, 0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 327, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0,
    0, 0, 0, 0, 332, 0, 333, 0, 334, 0, 335, 0, 0, 336, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 341, 0, 342, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0,
    0, 0, 344, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 350, 351, 0, 0, 352, 0, 353, 0, 0, 0, 0, 0, 354,
    0, 355, 356, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359,
    0, 0, 0, 0, 0, 360, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 363, 0, 0, 364, 0, 365, 0, 0, 0, 0, 0, 366, 0, 367,
    0, 0, 0, 368, 0, 369, 0, 370, 0, 371, 0, 372, 0, 0, 0, 0, 0, 0, 373, 0, 374, 0, 0, 375, 0, 0, 0, 0, 0, 0, 376, 0,
    0, 0, 0, 0, 377, 0, 0, 378, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 381, 0, 382, 0, 383, 0, 0, 384, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 387, 0, 388, 0, 389, 0, 0, 0, 390, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 393, 0, 394, 0, 395, 0,
    0, 0, 396, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 399, 400, 0, 0, 401, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0,
    0, 0, 0, 0, 0, 404, 0, 405, 0, 0, 406, 0, 0, 407, 408, 0, 409, 0, 410, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0,
    0, 413, 0, 414, 0, 0, 415, 0, 0, 416, 417, 0, 418, 0, 419, 420, 0, 0, 421, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0,
    0, 0, 424, 0, 425, 0, 0, 426, 0, 0, 427, 428, 0, 429, 0, 430, 0, 431, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0,
    434, 0, 0, 435, 0, 0, 436, 437, 0, 438, 0, 439, 440, 0, 441, 0, 442, 0, 0, 0, 0, 0, 443, 0, 0, 0, 444, 0, 445, 0, 446, 0,
    447, 0, 0, 448, 0, 0, 449, 0, 0, 450, 0, 451, 0, 0, 0, 452, 0, 0, 0, 453, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    455, 0, 456, 0, 457, 0, 0, 0, 458, 459, 0, 460, 0, 0, 0, 0, 461, 0, 462, 0, 0, 0, 463, 0, 464, 0, 465, 0, 466, 0, 0, 467,
    0, 0, 468, 0, 0, 469, 0, 470, 0, 0, 0, 471, 0, 0, 0, 472, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    474, 475, 0, 0, 0, 476, 0, 0, 0, 477, 0, 478, 0, 479, 0, 0, 0, 480, 481, 0, 482, 0, 0, 483, 0, 484, 0, 485, 0, 486, 0, 487,
    0, 0, 0, 488, 0, 489, 0, 490, 0, 491, 0, 0, 0, 0, 492, 0, 0, 493, 0, 0, 0, 0, 494, 0, 0, 495, 0, 496, 0, 0, 0, 497,
    0, 0, 0, 498, 0, 0, 0, 0, 499, 0, 0, 0, 500, 0, 0, 501, 0, 502, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0,
    504, 0, 0, 505, 0, 0, 0, 0, 0, 0, 506, 0, 0, 507, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 510, 0, 0, 0, 0, 511, 0, 512, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 515, 0, 516, 0, 517,
    0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 522, 0,
    0, 0, 0, 523, 0, 0, 524, 0, 0, 525, 0, 0, 526, 0, 0, 527, 0, 0, 528, 0, 0, 529, 0, 0, 530, 0, 0, 531, 0, 0, 532, 0,
    0, 533, 0, 0, 534, 0, 0, 535, 0, 0, 536, 0, 0, 537, 0, 0, 538, 0, 0, 539, 0, 0, 540, 0, 0, 541, 0, 0, 542, 0, 0, 543,
    0, 0, 544, 0, 545, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 552, 0, 553, 554, 0, 0, 555, 0, 0, 0, 0, 0, 556, 0, 557, 0, 0, 0, 558,
    0, 0, 0, 559, 0, 0, 0, 560, 0, 0, 561, 0, 0, 0, 562, 0, 563, 0, 0, 564, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    566, 0, 567, 0, 568, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 570, 0, 0, 571, 0, 0, 0, 0, 572, 0, 0, 0, 0, 573, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 576, 0, 577, 0, 0, 578, 0, 579,
    580, 0, 0, 0, 0, 581, 0, 582, 0, 0, 583, 0, 0, 0, 584, 0, 585, 586, 0, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 0, 590, 0, 591,
    592, 0, 0, 593, 0, 0, 594, 0, 0, 595, 0, 0, 0, 0, 0, 596, 0, 597, 0, 0, 0, 598, 0, 0, 0, 0, 599, 0, 600, 0, 601, 0,
    0, 0, 0, 0, 0, 602, 0, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 607, 0, 608, 0,
    609, 0, 0, 610, 0, 0, 611, 0, 0, 0, 612, 613, 0, 0, 0, 614, 0, 0, 615, 0, 616, 0, 0, 617, 0, 618, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 0, 0, 0, 621, 0, 622, 623, 0,
    0, 0, 0, 624, 0, 625, 0, 626, 0, 0, 627, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 631, 0, 0, 632, 0, 633, 0, 634, 0, 0, 635, 0, 636, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 638, 0, 639, 0, 640, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 641, 0, 0, 0, 0, 0, 642,
    0, 643, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 649, 0, 0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 651, 0, 652, 0, 653, 0,
    654, 0, 655, 0, 656, 0, 657, 658, 0, 659, 0, 0, 0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 662, 0, 0, 0, 0, 0, 663, 0, 0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 0, 665, 0, 666, 0, 667,
    0, 668, 0, 669, 0, 670, 0, 671, 672, 0, 673, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 674, 0, 675, 0, 0, 0, 0, 676, 0, 0, 0, 677, 0, 0, 0,
    678, 0, 0, 0, 0, 679, 0, 0, 0, 680, 0, 0, 0, 681, 0, 0, 0, 0, 0, 0, 0, 0, 682, 0, 0, 0, 683, 0, 684, 0, 0, 0,
    685, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 686, 687, 0, 0, 688, 0, 0, 689, 690, 0, 0, 0, 0, 691, 0, 0, 0, 0, 0, 692, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 693, 0, 0, 694, 0, 695, 0, 0, 0, 696, 0, 0, 0, 0, 0, 697, 0, 0,
    0, 0, 0, 698, 0, 699, 0, 0, 0, 0, 0, 0, 700, 0, 0, 0, 0, 0, 0, 0, 0, 0, 701, 0, 0, 0, 702, 0, 0, 0, 0, 0,
    0, 0, 703, 0, 0, 0, 704, 0, 705, 0, 706, 0, 707, 0, 0, 0, 0, 0, 0, 708, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 709,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 710, 0, 0, 0, 711, 0, 0, 0, 712, 0, 0, 0, 0, 0, 713, 0,
    714, 0, 715, 0, 716, 0, 717, 0, 718, 0, 0, 0, 0, 0, 0, 719, 0, 720, 0, 721, 0, 0, 0, 0, 0, 722, 0, 723, 0, 0, 724, 0,
    0, 0, 0, 0, 0, 0, 725, 0, 0, 726, 0, 0, 727, 0, 0, 728, 0, 729, 730, 0, 731, 0, 732, 0, 0, 0, 0, 0, 0, 0, 0, 733,
    0, 0, 0, 0, 0, 0, 734, 0, 735, 0, 0, 736, 0, 0, 737, 0, 0, 738, 0, 0, 739, 0, 740, 741, 0, 742, 0, 743, 0, 0, 0, 0,
    0, 0, 0, 0, 744, 0, 0, 0, 0, 0, 0, 745, 0, 746, 0, 0, 747, 0, 0, 748, 0, 0, 749, 0, 750, 751, 0, 752, 0, 753, 0, 0,
    0, 0, 0, 754, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 755, 0, 0, 0, 0, 756, 0, 0, 0, 0, 0, 757, 0, 758, 759, 0, 760, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 761, 0, 0, 0, 0, 0, 762, 0, 0, 0, 0, 763,
    0, 0, 0, 764, 0, 0, 0, 0, 0, 765, 0, 0, 766, 0, 0, 767, 0, 768, 769, 0, 0, 0, 770, 0, 0, 0, 771, 0, 0, 0, 0, 0,
    0, 0, 0, 772, 0, 0, 773, 0, 0, 0, 0, 0, 0, 0, 0, 774, 0, 0, 0, 775, 0, 0, 0, 0, 0, 0, 776, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 777, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 778, 0, 0, 0, 779, 0, 0, 0, 780, 0, 781, 0,
    782, 783, 0, 0, 0, 784, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 785, 0, 0, 786, 0, 787, 0, 0, 788, 789, 0,
    0, 0, 790, 0, 0, 0, 0, 0, 0, 0, 0, 0, 791, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 792, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 793, 0, 794, 0, 795, 0, 796, 0, 0, 0, 0, 0, 0, 797, 0, 798, 0, 799, 0, 0, 0, 0, 0, 0, 0, 800, 0, 801,
};
void recomp_unit_0077_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08938000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0077[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08938000;
    case 2u: goto L_08938060;
    case 3u: goto L_08938078;
    case 4u: goto L_089380AC;
    case 5u: goto L_089380B8;
    case 6u: goto L_089380C0;
    case 7u: goto L_089380E0;
    case 8u: goto L_089380E4;
    case 9u: goto L_089380FC;
    case 10u: goto L_0893811C;
    case 11u: goto L_08938164;
    case 12u: goto L_08938178;
    case 13u: goto L_0893818C;
    case 14u: goto L_08938194;
    case 15u: goto L_0893819C;
    case 16u: goto L_089381B4;
    case 17u: goto L_089381BC;
    case 18u: goto L_089381C8;
    case 19u: goto L_089381FC;
    case 20u: goto L_08938244;
    case 21u: goto L_08938254;
    case 22u: goto L_08938260;
    case 23u: goto L_08938274;
    case 24u: goto L_08938284;
    case 25u: goto L_089382A4;
    case 26u: goto L_089382B4;
    case 27u: goto L_089382C0;
    case 28u: goto L_089382CC;
    case 29u: goto L_089382D4;
    case 30u: goto L_089382D8;
    case 31u: goto L_089382E4;
    case 32u: goto L_089382EC;
    case 33u: goto L_089382F4;
    case 34u: goto L_08938300;
    case 35u: goto L_08938308;
    case 36u: goto L_08938310;
    case 37u: goto L_08938328;
    case 38u: goto L_08938338;
    case 39u: goto L_08938344;
    case 40u: goto L_08938350;
    case 41u: goto L_08938358;
    case 42u: goto L_0893835C;
    case 43u: goto L_08938364;
    case 44u: goto L_08938370;
    case 45u: goto L_08938378;
    case 46u: goto L_08938384;
    case 47u: goto L_08938390;
    case 48u: goto L_0893839C;
    case 49u: goto L_089383A0;
    case 50u: goto L_089383B0;
    case 51u: goto L_089383BC;
    case 52u: goto L_089383D0;
    case 53u: goto L_089383DC;
    case 54u: goto L_089383EC;
    case 55u: goto L_08938400;
    case 56u: goto L_08938410;
    case 57u: goto L_0893841C;
    case 58u: goto L_08938428;
    case 59u: goto L_08938434;
    case 60u: goto L_08938440;
    case 61u: goto L_0893844C;
    case 62u: goto L_08938454;
    case 63u: goto L_08938458;
    case 64u: goto L_08938464;
    case 65u: goto L_0893847C;
    case 66u: goto L_08938488;
    case 67u: goto L_08938490;
    case 68u: goto L_0893849C;
    case 69u: goto L_089384A8;
    case 70u: goto L_089384B0;
    case 71u: goto L_089384C0;
    case 72u: goto L_089384CC;
    case 73u: goto L_089384D4;
    case 74u: goto L_089384E4;
    case 75u: goto L_089384F8;
    case 76u: goto L_08938508;
    case 77u: goto L_08938514;
    case 78u: goto L_08938520;
    case 79u: goto L_08938538;
    case 80u: goto L_08938544;
    case 81u: goto L_08938550;
    case 82u: goto L_08938558;
    case 83u: goto L_08938564;
    case 84u: goto L_08938570;
    case 85u: goto L_089385A0;
    case 86u: goto L_089385C8;
    case 87u: goto L_089385D4;
    case 88u: goto L_08938600;
    case 89u: goto L_08938628;
    case 90u: goto L_0893863C;
    case 91u: goto L_08938644;
    case 92u: goto L_0893864C;
    case 93u: goto L_08938658;
    case 94u: goto L_08938660;
    case 95u: goto L_08938668;
    case 96u: goto L_08938670;
    case 97u: goto L_08938680;
    case 98u: goto L_08938688;
    case 99u: goto L_08938698;
    case 100u: goto L_089386A0;
    case 101u: goto L_089386B0;
    case 102u: goto L_089386B8;
    case 103u: goto L_089386D8;
    case 104u: goto L_089386EC;
    case 105u: goto L_08938704;
    case 106u: goto L_08938718;
    case 107u: goto L_08938738;
    case 108u: goto L_08938740;
    case 109u: goto L_08938748;
    case 110u: goto L_08938750;
    case 111u: goto L_08938758;
    case 112u: goto L_08938760;
    case 113u: goto L_08938768;
    case 114u: goto L_08938770;
    case 115u: goto L_08938778;
    case 116u: goto L_08938788;
    case 117u: goto L_0893879C;
    case 118u: goto L_089387A4;
    case 119u: goto L_089387AC;
    case 120u: goto L_089387BC;
    case 121u: goto L_089387D0;
    case 122u: goto L_089387D8;
    case 123u: goto L_089387E0;
    case 124u: goto L_089387F0;
    case 125u: goto L_08938820;
    case 126u: goto L_08938828;
    case 127u: goto L_08938830;
    case 128u: goto L_0893883C;
    case 129u: goto L_0893884C;
    case 130u: goto L_089388BC;
    case 131u: goto L_089388D8;
    case 132u: goto L_089388F4;
    case 133u: goto L_08938910;
    case 134u: goto L_0893892C;
    case 135u: goto L_08938948;
    case 136u: goto L_0893895C;
    case 137u: goto L_08938964;
    case 138u: goto L_0893896C;
    case 139u: goto L_08938974;
    case 140u: goto L_0893897C;
    case 141u: goto L_08938984;
    case 142u: goto L_0893898C;
    case 143u: goto L_08938994;
    case 144u: goto L_089389A4;
    case 145u: goto L_089389D8;
    case 146u: goto L_089389EC;
    case 147u: goto L_08938A1C;
    case 148u: goto L_08938A4C;
    case 149u: goto L_08938A7C;
    case 150u: goto L_08938AAC;
    case 151u: goto L_08938AB4;
    case 152u: goto L_08938ABC;
    case 153u: goto L_08938AC4;
    case 154u: goto L_08938ACC;
    case 155u: goto L_08938AF4;
    case 156u: goto L_08938AFC;
    case 157u: goto L_08938B04;
    case 158u: goto L_08938B20;
    case 159u: goto L_08938B24;
    case 160u: goto L_08938B58;
    case 161u: goto L_08938BAC;
    case 162u: goto L_08938BC8;
    case 163u: goto L_08938BE4;
    case 164u: goto L_08938C00;
    case 165u: goto L_08938C04;
    case 166u: goto L_08938C30;
    case 167u: goto L_08938C38;
    case 168u: goto L_08938C40;
    case 169u: goto L_08938C50;
    case 170u: goto L_08938C84;
    case 171u: goto L_08938C98;
    case 172u: goto L_08938CC8;
    case 173u: goto L_08938CF8;
    case 174u: goto L_08938D28;
    case 175u: goto L_08938D58;
    case 176u: goto L_08938D60;
    case 177u: goto L_08938D88;
    case 178u: goto L_08938D90;
    case 179u: goto L_08938D98;
    case 180u: goto L_08938DB4;
    case 181u: goto L_08938DB8;
    case 182u: goto L_08938DEC;
    case 183u: goto L_08938E2C;
    case 184u: goto L_08938E48;
    case 185u: goto L_08938E50;
    case 186u: goto L_08938E6C;
    case 187u: goto L_08938E74;
    case 188u: goto L_08938E90;
    case 189u: goto L_08938E98;
    case 190u: goto L_08938EB4;
    case 191u: goto L_08938EBC;
    case 192u: goto L_08938ED8;
    case 193u: goto L_08938EE0;
    case 194u: goto L_08938EFC;
    case 195u: goto L_08938F3C;
    case 196u: goto L_08938F44;
    case 197u: goto L_08938F60;
    case 198u: goto L_08938F6C;
    case 199u: goto L_08938F74;
    case 200u: goto L_08938F7C;
    case 201u: goto L_08938F84;
    case 202u: goto L_08938F8C;
    case 203u: goto L_08938F94;
    case 204u: goto L_08938F9C;
    case 205u: goto L_08938FA4;
    case 206u: goto L_08938FB4;
    case 207u: goto L_08938FE0;
    case 208u: goto L_08938FEC;
    case 209u: goto L_08939000;
    case 210u: goto L_0893900C;
    case 211u: goto L_0893903C;
    case 212u: goto L_08939058;
    case 213u: goto L_0893906C;
    case 214u: goto L_08939074;
    case 215u: goto L_089390A8;
    case 216u: goto L_089390D8;
    case 217u: goto L_089390E0;
    case 218u: goto L_089390F0;
    case 219u: goto L_089390FC;
    case 220u: goto L_08939104;
    case 221u: goto L_0893910C;
    case 222u: goto L_08939128;
    case 223u: goto L_08939138;
    case 224u: goto L_08939144;
    case 225u: goto L_0893914C;
    case 226u: goto L_08939150;
    case 227u: goto L_08939180;
    case 228u: goto L_089391F8;
    case 229u: goto L_0893920C;
    case 230u: goto L_08939220;
    case 231u: goto L_08939228;
    case 232u: goto L_08939244;
    case 233u: goto L_0893924C;
    case 234u: goto L_08939250;
    case 235u: goto L_08939268;
    case 236u: goto L_08939280;
    case 237u: goto L_08939288;
    case 238u: goto L_08939290;
    case 239u: goto L_089392A0;
    case 240u: goto L_089392A8;
    case 241u: goto L_089392B0;
    case 242u: goto L_089392C0;
    case 243u: goto L_089392D4;
    case 244u: goto L_0893933C;
    case 245u: goto L_08939358;
    case 246u: goto L_08939374;
    case 247u: goto L_08939390;
    case 248u: goto L_089393AC;
    case 249u: goto L_089393C8;
    case 250u: goto L_089393F4;
    case 251u: goto L_089393FC;
    case 252u: goto L_08939404;
    case 253u: goto L_0893940C;
    case 254u: goto L_08939414;
    case 255u: goto L_0893941C;
    case 256u: goto L_08939424;
    case 257u: goto L_0893942C;
    case 258u: goto L_08939438;
    case 259u: goto L_08939468;
    case 260u: goto L_08939490;
    case 261u: goto L_08939498;
    case 262u: goto L_089394A0;
    case 263u: goto L_089394B4;
    case 264u: goto L_089394B8;
    case 265u: goto L_089394E4;
    case 266u: goto L_08939548;
    case 267u: goto L_08939558;
    case 268u: goto L_08939588;
    case 269u: goto L_089395B4;
    case 270u: goto L_089395BC;
    case 271u: goto L_089395C4;
    case 272u: goto L_089395D8;
    case 273u: goto L_089395DC;
    case 274u: goto L_0893960C;
    case 275u: goto L_0893965C;
    case 276u: goto L_0893968C;
    case 277u: goto L_089396A8;
    case 278u: goto L_089396B0;
    case 279u: goto L_089396B8;
    case 280u: goto L_089396C4;
    case 281u: goto L_089396D0;
    case 282u: goto L_089396E4;
    case 283u: goto L_089396F0;
    case 284u: goto L_089396F8;
    case 285u: goto L_08939728;
    case 286u: goto L_08939758;
    case 287u: goto L_08939780;
    case 288u: goto L_08939788;
    case 289u: goto L_08939790;
    case 290u: goto L_089397A4;
    case 291u: goto L_089397C4;
    case 292u: goto L_089397C8;
    case 293u: goto L_089397F8;
    case 294u: goto L_08939854;
    case 295u: goto L_089398A0;
    case 296u: goto L_089398C0;
    case 297u: goto L_089398C8;
    case 298u: goto L_089398D0;
    case 299u: goto L_089398DC;
    case 300u: goto L_089398E8;
    case 301u: goto L_089398F4;
    case 302u: goto L_089398FC;
    case 303u: goto L_0893992C;
    case 304u: goto L_08939930;
    case 305u: goto L_08939964;
    case 306u: goto L_08939988;
    case 307u: goto L_08939990;
    case 308u: goto L_08939A40;
    case 309u: goto L_08939A54;
    case 310u: goto L_08939A78;
    case 311u: goto L_08939AB4;
    case 312u: goto L_08939B04;
    case 313u: goto L_08939B20;
    case 314u: goto L_08939B3C;
    case 315u: goto L_08939B44;
    case 316u: goto L_08939B4C;
    case 317u: goto L_08939B58;
    case 318u: goto L_08939B64;
    case 319u: goto L_08939B70;
    case 320u: goto L_08939B78;
    case 321u: goto L_08939BA8;
    case 322u: goto L_08939BD8;
    case 323u: goto L_08939C00;
    case 324u: goto L_08939C08;
    case 325u: goto L_08939C10;
    case 326u: goto L_08939C24;
    case 327u: goto L_08939C44;
    case 328u: goto L_08939C48;
    case 329u: goto L_08939C78;
    case 330u: goto L_08939CC4;
    case 331u: goto L_08939CF4;
    case 332u: goto L_08939D10;
    case 333u: goto L_08939D18;
    case 334u: goto L_08939D20;
    case 335u: goto L_08939D28;
    case 336u: goto L_08939D34;
    case 337u: goto L_08939D3C;
    case 338u: goto L_08939D6C;
    case 339u: goto L_08939D9C;
    case 340u: goto L_08939DC4;
    case 341u: goto L_08939DCC;
    case 342u: goto L_08939DD4;
    case 343u: goto L_08939DE8;
    case 344u: goto L_08939E08;
    case 345u: goto L_08939E0C;
    case 346u: goto L_08939E3C;
    case 347u: goto L_08939E88;
    case 348u: goto L_08939EAC;
    case 349u: goto L_08939EC4;
    case 350u: goto L_08939ECC;
    case 351u: goto L_08939ED0;
    case 352u: goto L_08939EDC;
    case 353u: goto L_08939EE4;
    case 354u: goto L_08939EFC;
    case 355u: goto L_08939F04;
    case 356u: goto L_08939F08;
    case 357u: goto L_08939F1C;
    case 358u: goto L_08939F4C;
    case 359u: goto L_08939F7C;
    case 360u: goto L_08939F94;
    case 361u: goto L_08939F9C;
    case 362u: goto L_08939FC0;
    case 363u: goto L_08939FC8;
    case 364u: goto L_08939FD4;
    case 365u: goto L_08939FDC;
    case 366u: goto L_08939FF4;
    case 367u: goto L_08939FFC;
    case 368u: goto L_0893A00C;
    case 369u: goto L_0893A014;
    case 370u: goto L_0893A01C;
    case 371u: goto L_0893A024;
    case 372u: goto L_0893A02C;
    case 373u: goto L_0893A048;
    case 374u: goto L_0893A050;
    case 375u: goto L_0893A05C;
    case 376u: goto L_0893A078;
    case 377u: goto L_0893A090;
    case 378u: goto L_0893A09C;
    case 379u: goto L_0893A0B8;
    case 380u: goto L_0893A128;
    case 381u: goto L_0893A12C;
    case 382u: goto L_0893A134;
    case 383u: goto L_0893A13C;
    case 384u: goto L_0893A148;
    case 385u: goto L_0893A164;
    case 386u: goto L_0893A1D4;
    case 387u: goto L_0893A1D8;
    case 388u: goto L_0893A1E0;
    case 389u: goto L_0893A1E8;
    case 390u: goto L_0893A1F8;
    case 391u: goto L_0893A2B4;
    case 392u: goto L_0893A2CC;
    case 393u: goto L_0893A2E8;
    case 394u: goto L_0893A2F0;
    case 395u: goto L_0893A2F8;
    case 396u: goto L_0893A308;
    case 397u: goto L_0893A310;
    case 398u: goto L_0893A338;
    case 399u: goto L_0893A344;
    case 400u: goto L_0893A348;
    case 401u: goto L_0893A354;
    case 402u: goto L_0893A360;
    case 403u: goto L_0893A370;
    case 404u: goto L_0893A394;
    case 405u: goto L_0893A39C;
    case 406u: goto L_0893A3A8;
    case 407u: goto L_0893A3B4;
    case 408u: goto L_0893A3B8;
    case 409u: goto L_0893A3C0;
    case 410u: goto L_0893A3C8;
    case 411u: goto L_0893A3D0;
    case 412u: goto L_0893A3E0;
    case 413u: goto L_0893A404;
    case 414u: goto L_0893A40C;
    case 415u: goto L_0893A418;
    case 416u: goto L_0893A424;
    case 417u: goto L_0893A428;
    case 418u: goto L_0893A430;
    case 419u: goto L_0893A438;
    case 420u: goto L_0893A43C;
    case 421u: goto L_0893A448;
    case 422u: goto L_0893A454;
    case 423u: goto L_0893A464;
    case 424u: goto L_0893A488;
    case 425u: goto L_0893A490;
    case 426u: goto L_0893A49C;
    case 427u: goto L_0893A4A8;
    case 428u: goto L_0893A4AC;
    case 429u: goto L_0893A4B4;
    case 430u: goto L_0893A4BC;
    case 431u: goto L_0893A4C4;
    case 432u: goto L_0893A4D4;
    case 433u: goto L_0893A4F8;
    case 434u: goto L_0893A500;
    case 435u: goto L_0893A50C;
    case 436u: goto L_0893A518;
    case 437u: goto L_0893A51C;
    case 438u: goto L_0893A524;
    case 439u: goto L_0893A52C;
    case 440u: goto L_0893A530;
    case 441u: goto L_0893A538;
    case 442u: goto L_0893A540;
    case 443u: goto L_0893A558;
    case 444u: goto L_0893A568;
    case 445u: goto L_0893A570;
    case 446u: goto L_0893A578;
    case 447u: goto L_0893A580;
    case 448u: goto L_0893A58C;
    case 449u: goto L_0893A598;
    case 450u: goto L_0893A5A4;
    case 451u: goto L_0893A5AC;
    case 452u: goto L_0893A5BC;
    case 453u: goto L_0893A5CC;
    case 454u: goto L_0893A5D8;
    case 455u: goto L_0893A600;
    case 456u: goto L_0893A608;
    case 457u: goto L_0893A610;
    case 458u: goto L_0893A620;
    case 459u: goto L_0893A624;
    case 460u: goto L_0893A62C;
    case 461u: goto L_0893A640;
    case 462u: goto L_0893A648;
    case 463u: goto L_0893A658;
    case 464u: goto L_0893A660;
    case 465u: goto L_0893A668;
    case 466u: goto L_0893A670;
    case 467u: goto L_0893A67C;
    case 468u: goto L_0893A688;
    case 469u: goto L_0893A694;
    case 470u: goto L_0893A69C;
    case 471u: goto L_0893A6AC;
    case 472u: goto L_0893A6BC;
    case 473u: goto L_0893A6C8;
    case 474u: goto L_0893A700;
    case 475u: goto L_0893A704;
    case 476u: goto L_0893A714;
    case 477u: goto L_0893A724;
    case 478u: goto L_0893A72C;
    case 479u: goto L_0893A734;
    case 480u: goto L_0893A744;
    case 481u: goto L_0893A748;
    case 482u: goto L_0893A750;
    case 483u: goto L_0893A75C;
    case 484u: goto L_0893A764;
    case 485u: goto L_0893A76C;
    case 486u: goto L_0893A774;
    case 487u: goto L_0893A77C;
    case 488u: goto L_0893A78C;
    case 489u: goto L_0893A794;
    case 490u: goto L_0893A79C;
    case 491u: goto L_0893A7A4;
    case 492u: goto L_0893A7B8;
    case 493u: goto L_0893A7C4;
    case 494u: goto L_0893A7D8;
    case 495u: goto L_0893A7E4;
    case 496u: goto L_0893A7EC;
    case 497u: goto L_0893A7FC;
    case 498u: goto L_0893A80C;
    case 499u: goto L_0893A820;
    case 500u: goto L_0893A830;
    case 501u: goto L_0893A83C;
    case 502u: goto L_0893A844;
    case 503u: goto L_0893A864;
    case 504u: goto L_0893A880;
    case 505u: goto L_0893A88C;
    case 506u: goto L_0893A8A8;
    case 507u: goto L_0893A8B4;
    case 508u: goto L_0893A8C0;
    case 509u: goto L_0893A940;
    case 510u: goto L_0893A954;
    case 511u: goto L_0893A968;
    case 512u: goto L_0893A970;
    case 513u: goto L_0893A9B4;
    case 514u: goto L_0893A9D8;
    case 515u: goto L_0893A9EC;
    case 516u: goto L_0893A9F4;
    case 517u: goto L_0893A9FC;
    case 518u: goto L_0893AA04;
    case 519u: goto L_0893AA30;
    case 520u: goto L_0893AA40;
    case 521u: goto L_0893AA68;
    case 522u: goto L_0893AA78;
    case 523u: goto L_0893AA8C;
    case 524u: goto L_0893AA98;
    case 525u: goto L_0893AAA4;
    case 526u: goto L_0893AAB0;
    case 527u: goto L_0893AABC;
    case 528u: goto L_0893AAC8;
    case 529u: goto L_0893AAD4;
    case 530u: goto L_0893AAE0;
    case 531u: goto L_0893AAEC;
    case 532u: goto L_0893AAF8;
    case 533u: goto L_0893AB04;
    case 534u: goto L_0893AB10;
    case 535u: goto L_0893AB1C;
    case 536u: goto L_0893AB28;
    case 537u: goto L_0893AB34;
    case 538u: goto L_0893AB40;
    case 539u: goto L_0893AB4C;
    case 540u: goto L_0893AB58;
    case 541u: goto L_0893AB64;
    case 542u: goto L_0893AB70;
    case 543u: goto L_0893AB7C;
    case 544u: goto L_0893AB88;
    case 545u: goto L_0893AB90;
    case 546u: goto L_0893AB98;
    case 547u: goto L_0893ABD0;
    case 548u: goto L_0893AC18;
    case 549u: goto L_0893AC2C;
    case 550u: goto L_0893AC4C;
    case 551u: goto L_0893AC9C;
    case 552u: goto L_0893ACB4;
    case 553u: goto L_0893ACBC;
    case 554u: goto L_0893ACC0;
    case 555u: goto L_0893ACCC;
    case 556u: goto L_0893ACE4;
    case 557u: goto L_0893ACEC;
    case 558u: goto L_0893ACFC;
    case 559u: goto L_0893AD0C;
    case 560u: goto L_0893AD1C;
    case 561u: goto L_0893AD28;
    case 562u: goto L_0893AD38;
    case 563u: goto L_0893AD40;
    case 564u: goto L_0893AD4C;
    case 565u: goto L_0893AD58;
    case 566u: goto L_0893AD80;
    case 567u: goto L_0893AD88;
    case 568u: goto L_0893AD90;
    case 569u: goto L_0893ADAC;
    case 570u: goto L_0893ADC0;
    case 571u: goto L_0893ADCC;
    case 572u: goto L_0893ADE0;
    case 573u: goto L_0893ADF4;
    case 574u: goto L_0893AE28;
    case 575u: goto L_0893AE54;
    case 576u: goto L_0893AE60;
    case 577u: goto L_0893AE68;
    case 578u: goto L_0893AE74;
    case 579u: goto L_0893AE7C;
    case 580u: goto L_0893AE80;
    case 581u: goto L_0893AE94;
    case 582u: goto L_0893AE9C;
    case 583u: goto L_0893AEA8;
    case 584u: goto L_0893AEB8;
    case 585u: goto L_0893AEC0;
    case 586u: goto L_0893AEC4;
    case 587u: goto L_0893AEE0;
    case 588u: goto L_0893AF28;
    case 589u: goto L_0893AF5C;
    case 590u: goto L_0893AF74;
    case 591u: goto L_0893AF7C;
    case 592u: goto L_0893AF80;
    case 593u: goto L_0893AF8C;
    case 594u: goto L_0893AF98;
    case 595u: goto L_0893AFA4;
    case 596u: goto L_0893AFBC;
    case 597u: goto L_0893AFC4;
    case 598u: goto L_0893AFD4;
    case 599u: goto L_0893AFE8;
    case 600u: goto L_0893AFF0;
    case 601u: goto L_0893AFF8;
    case 602u: goto L_0893B014;
    case 603u: goto L_0893B020;
    case 604u: goto L_0893B054;
    case 605u: goto L_0893B0A0;
    case 606u: goto L_0893B0D0;
    case 607u: goto L_0893B0F0;
    case 608u: goto L_0893B0F8;
    case 609u: goto L_0893B100;
    case 610u: goto L_0893B10C;
    case 611u: goto L_0893B118;
    case 612u: goto L_0893B128;
    case 613u: goto L_0893B12C;
    case 614u: goto L_0893B13C;
    case 615u: goto L_0893B148;
    case 616u: goto L_0893B150;
    case 617u: goto L_0893B15C;
    case 618u: goto L_0893B164;
    case 619u: goto L_0893B194;
    case 620u: goto L_0893B1C4;
    case 621u: goto L_0893B1EC;
    case 622u: goto L_0893B1F4;
    case 623u: goto L_0893B1F8;
    case 624u: goto L_0893B20C;
    case 625u: goto L_0893B214;
    case 626u: goto L_0893B21C;
    case 627u: goto L_0893B228;
    case 628u: goto L_0893B244;
    case 629u: goto L_0893B260;
    case 630u: goto L_0893B290;
    case 631u: goto L_0893B2AC;
    case 632u: goto L_0893B2B8;
    case 633u: goto L_0893B2C0;
    case 634u: goto L_0893B2C8;
    case 635u: goto L_0893B2D4;
    case 636u: goto L_0893B2DC;
    case 637u: goto L_0893B394;
    case 638u: goto L_0893B3A8;
    case 639u: goto L_0893B3B0;
    case 640u: goto L_0893B3B8;
    case 641u: goto L_0893B3E4;
    case 642u: goto L_0893B3FC;
    case 643u: goto L_0893B404;
    case 644u: goto L_0893B41C;
    case 645u: goto L_0893B430;
    case 646u: goto L_0893B448;
    case 647u: goto L_0893B45C;
    case 648u: goto L_0893B49C;
    case 649u: goto L_0893B4B0;
    case 650u: goto L_0893B4D4;
    case 651u: goto L_0893B4E8;
    case 652u: goto L_0893B4F0;
    case 653u: goto L_0893B4F8;
    case 654u: goto L_0893B500;
    case 655u: goto L_0893B508;
    case 656u: goto L_0893B510;
    case 657u: goto L_0893B518;
    case 658u: goto L_0893B51C;
    case 659u: goto L_0893B524;
    case 660u: goto L_0893B540;
    case 661u: goto L_0893B558;
    case 662u: goto L_0893B598;
    case 663u: goto L_0893B5B0;
    case 664u: goto L_0893B5D4;
    case 665u: goto L_0893B5EC;
    case 666u: goto L_0893B5F4;
    case 667u: goto L_0893B5FC;
    case 668u: goto L_0893B604;
    case 669u: goto L_0893B60C;
    case 670u: goto L_0893B614;
    case 671u: goto L_0893B61C;
    case 672u: goto L_0893B620;
    case 673u: goto L_0893B628;
    case 674u: goto L_0893B6C4;
    case 675u: goto L_0893B6CC;
    case 676u: goto L_0893B6E0;
    case 677u: goto L_0893B6F0;
    case 678u: goto L_0893B700;
    case 679u: goto L_0893B714;
    case 680u: goto L_0893B724;
    case 681u: goto L_0893B734;
    case 682u: goto L_0893B758;
    case 683u: goto L_0893B768;
    case 684u: goto L_0893B770;
    case 685u: goto L_0893B780;
    case 686u: goto L_0893B7AC;
    case 687u: goto L_0893B7B0;
    case 688u: goto L_0893B7BC;
    case 689u: goto L_0893B7C8;
    case 690u: goto L_0893B7CC;
    case 691u: goto L_0893B7E0;
    case 692u: goto L_0893B7F8;
    case 693u: goto L_0893B838;
    case 694u: goto L_0893B844;
    case 695u: goto L_0893B84C;
    case 696u: goto L_0893B85C;
    case 697u: goto L_0893B874;
    case 698u: goto L_0893B88C;
    case 699u: goto L_0893B894;
    case 700u: goto L_0893B8B0;
    case 701u: goto L_0893B8D8;
    case 702u: goto L_0893B8E8;
    case 703u: goto L_0893B908;
    case 704u: goto L_0893B918;
    case 705u: goto L_0893B920;
    case 706u: goto L_0893B928;
    case 707u: goto L_0893B930;
    case 708u: goto L_0893B94C;
    case 709u: goto L_0893B97C;
    case 710u: goto L_0893B9C0;
    case 711u: goto L_0893B9D0;
    case 712u: goto L_0893B9E0;
    case 713u: goto L_0893B9F8;
    case 714u: goto L_0893BA00;
    case 715u: goto L_0893BA08;
    case 716u: goto L_0893BA10;
    case 717u: goto L_0893BA18;
    case 718u: goto L_0893BA20;
    case 719u: goto L_0893BA3C;
    case 720u: goto L_0893BA44;
    case 721u: goto L_0893BA4C;
    case 722u: goto L_0893BA64;
    case 723u: goto L_0893BA6C;
    case 724u: goto L_0893BA78;
    case 725u: goto L_0893BA98;
    case 726u: goto L_0893BAA4;
    case 727u: goto L_0893BAB0;
    case 728u: goto L_0893BABC;
    case 729u: goto L_0893BAC4;
    case 730u: goto L_0893BAC8;
    case 731u: goto L_0893BAD0;
    case 732u: goto L_0893BAD8;
    case 733u: goto L_0893BAFC;
    case 734u: goto L_0893BB18;
    case 735u: goto L_0893BB20;
    case 736u: goto L_0893BB2C;
    case 737u: goto L_0893BB38;
    case 738u: goto L_0893BB44;
    case 739u: goto L_0893BB50;
    case 740u: goto L_0893BB58;
    case 741u: goto L_0893BB5C;
    case 742u: goto L_0893BB64;
    case 743u: goto L_0893BB6C;
    case 744u: goto L_0893BB90;
    case 745u: goto L_0893BBAC;
    case 746u: goto L_0893BBB4;
    case 747u: goto L_0893BBC0;
    case 748u: goto L_0893BBCC;
    case 749u: goto L_0893BBD8;
    case 750u: goto L_0893BBE0;
    case 751u: goto L_0893BBE4;
    case 752u: goto L_0893BBEC;
    case 753u: goto L_0893BBF4;
    case 754u: goto L_0893BC0C;
    case 755u: goto L_0893BC38;
    case 756u: goto L_0893BC4C;
    case 757u: goto L_0893BC64;
    case 758u: goto L_0893BC6C;
    case 759u: goto L_0893BC70;
    case 760u: goto L_0893BC78;
    case 761u: goto L_0893BCD0;
    case 762u: goto L_0893BCE8;
    case 763u: goto L_0893BCFC;
    case 764u: goto L_0893BD0C;
    case 765u: goto L_0893BD24;
    case 766u: goto L_0893BD30;
    case 767u: goto L_0893BD3C;
    case 768u: goto L_0893BD44;
    case 769u: goto L_0893BD48;
    case 770u: goto L_0893BD58;
    case 771u: goto L_0893BD68;
    case 772u: goto L_0893BD8C;
    case 773u: goto L_0893BD98;
    case 774u: goto L_0893BDBC;
    case 775u: goto L_0893BDCC;
    case 776u: goto L_0893BDE8;
    case 777u: goto L_0893BE18;
    case 778u: goto L_0893BE50;
    case 779u: goto L_0893BE60;
    case 780u: goto L_0893BE70;
    case 781u: goto L_0893BE78;
    case 782u: goto L_0893BE80;
    case 783u: goto L_0893BE84;
    case 784u: goto L_0893BE94;
    case 785u: goto L_0893BED4;
    case 786u: goto L_0893BEE0;
    case 787u: goto L_0893BEE8;
    case 788u: goto L_0893BEF4;
    case 789u: goto L_0893BEF8;
    case 790u: goto L_0893BF08;
    case 791u: goto L_0893BF30;
    case 792u: goto L_0893BF60;
    case 793u: goto L_0893BF90;
    case 794u: goto L_0893BF98;
    case 795u: goto L_0893BFA0;
    case 796u: goto L_0893BFA8;
    case 797u: goto L_0893BFC4;
    case 798u: goto L_0893BFCC;
    case 799u: goto L_0893BFD4;
    case 800u: goto L_0893BFF4;
    case 801u: goto L_0893BFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08938000:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08938060;
L_08938060:
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
L_08938078:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (2276u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(-30104));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-30104)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089380FC;
      }
      goto L_089380AC;
    }
L_089380AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089380E4;
      }
      goto L_089380B8;
    }
L_089380B8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089380E4;
      }
      goto L_089380C0;
    }
L_089380C0:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089380E0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089380E0u) goto L_089380E0;
    return;
L_089380E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_089380E4;
L_089380E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-30104)));
    ctx.gpr[6] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089380AC;
      }
      goto L_089380FC;
    }
L_089380FC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893811C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[4] = (2276u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30104)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30104));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    ctx.gpr[31] = (0x08938164u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30312));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 422u, 0x08B01B9Cu>(ctx, &aot_mem) && ctx.pc == 0x08938164u) goto L_08938164;
    return;
L_08938164:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[17];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
      if (branch_taken) {
          goto L_089381C8;
      }
      goto L_08938178;
    }
L_08938178:
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(34))))));
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[23] = (ctx.gpr[21] << 3u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_0893818C;
L_0893818C:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_0893819C;
      }
      goto L_08938194;
    }
L_08938194:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_089381B4;
      }
      goto L_0893819C;
    }
L_0893819C:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[23]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    goto L_089381B4;
L_089381B4:
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089381BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089381BCu) goto L_089381BC;
    return;
L_089381BC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    if (ctx.gpr[16] != ctx.gpr[17]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_0893818C;
    }
    goto L_089381C8;
L_089381C8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089381FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[30]);
    ctx.gpr[30] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(30112));
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    ctx.gpr[31] = (0x08938244u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08938244u) goto L_08938244;
    return;
L_08938244:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08938254u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x08938254u) goto L_08938254;
    return;
L_08938254:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08938260u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 334u, 0x08B01610u>(ctx, &aot_mem) && ctx.pc == 0x08938260u) goto L_08938260;
    return;
L_08938260:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[23] = (2230u << 16u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[23];
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08938284;
      }
      goto L_08938274;
    }
L_08938274:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08938284u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08938284u) goto L_08938284;
    return;
L_08938284:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08938308;
      }
      goto L_089382A4;
    }
L_089382A4:
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089382E4;
      }
      goto L_089382B4;
    }
L_089382B4:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089382C0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x089382C0u) goto L_089382C0;
    return;
L_089382C0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089382D8;
      }
      goto L_089382CC;
    }
L_089382CC:
    ctx.gpr[31] = (0x089382D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x089382D4u) goto L_089382D4;
    return;
L_089382D4:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089382D8;
L_089382D8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_089382E4;
L_089382E4:
    ctx.gpr[31] = (0x089382ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x089382ECu) goto L_089382EC;
    return;
L_089382EC:
    ctx.gpr[31] = (0x089382F4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 293u, 0x08913158u>(ctx, &aot_mem) && ctx.pc == 0x089382F4u) goto L_089382F4;
    return;
L_089382F4:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08938300u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFB6BCu>(ctx, &aot_mem) && ctx.pc == 0x08938300u) goto L_08938300;
    return;
L_08938300:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08938570;
      }
      goto L_08938308;
    }
L_08938308:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
      if (branch_taken) {
          goto L_089383A0;
      }
      goto L_08938310;
    }
L_08938310:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.gpr[31] = (0x08938328u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 347u, 0x08B0169Cu>(ctx, &aot_mem) && ctx.pc == 0x08938328u) goto L_08938328;
    return;
L_08938328:
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24700)));
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
        goto L_08938364;
    }
    goto L_08938338;
L_08938338:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08938344u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08938344u) goto L_08938344;
    return;
L_08938344:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893835C;
      }
      goto L_08938350;
    }
L_08938350:
    ctx.gpr[31] = (0x08938358u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08938358u) goto L_08938358;
    return;
L_08938358:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    goto L_0893835C;
L_0893835C:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_08938364;
L_08938364:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    ctx.gpr[31] = (0x08938370u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08938370u) goto L_08938370;
    return;
L_08938370:
    ctx.gpr[31] = (0x08938378u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 293u, 0x08913158u>(ctx, &aot_mem) && ctx.pc == 0x08938378u) goto L_08938378;
    return;
L_08938378:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08938384u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFB6BCu>(ctx, &aot_mem) && ctx.pc == 0x08938384u) goto L_08938384;
    return;
L_08938384:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[23];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_0893839C;
      }
      goto L_08938390;
    }
L_08938390:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0893839Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x0893839Cu) goto L_0893839C;
    return;
L_0893839C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    goto L_089383A0;
L_089383A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[20] = (2232u << 16u);
      if (branch_taken) {
          goto L_08938570;
      }
      goto L_089383B0;
    }
L_089383B0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(5696));
    ctx.gpr[22] = (2227u << 16u);
    goto L_089383BC;
L_089383BC:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u | 84u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089383DC;
      }
      goto L_089383D0;
    }
L_089383D0:
    ctx.gpr[6] = (0u | 116u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089384C0;
      }
      goto L_089383DC;
    }
L_089383DC:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x089383ECu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x089383ECu) goto L_089383EC;
    return;
L_089383EC:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08938400u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x08938400u) goto L_08938400;
    return;
L_08938400:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08938410u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 336u, 0x08B0162Cu>(ctx, &aot_mem) && ctx.pc == 0x08938410u) goto L_08938410;
    return;
L_08938410:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[23];
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08938428;
      }
      goto L_0893841C;
    }
L_0893841C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08938428u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08938428u) goto L_08938428;
    return;
L_08938428:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24700)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24700)));
        goto L_08938464;
    }
    goto L_08938434;
L_08938434:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08938440u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08938440u) goto L_08938440;
    return;
L_08938440:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938458;
      }
      goto L_0893844C;
    }
L_0893844C:
    ctx.gpr[31] = (0x08938454u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08938454u) goto L_08938454;
    return;
L_08938454:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08938458;
L_08938458:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24700)));
    goto L_08938464;
L_08938464:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(73));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0893847Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 347u, 0x08B0169Cu>(ctx, &aot_mem) && ctx.pc == 0x0893847Cu) goto L_0893847C;
    return;
L_0893847C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x08938488u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08938488u) goto L_08938488;
    return;
L_08938488:
    ctx.gpr[31] = (0x08938490u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 293u, 0x08913158u>(ctx, &aot_mem) && ctx.pc == 0x08938490u) goto L_08938490;
    return;
L_08938490:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0893849Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFB6BCu>(ctx, &aot_mem) && ctx.pc == 0x0893849Cu) goto L_0893849C;
    return;
L_0893849C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[23];
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_089384B0;
      }
      goto L_089384A8;
    }
L_089384A8:
    ctx.gpr[31] = (0x089384B0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x089384B0u) goto L_089384B0;
    return;
L_089384B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08938564;
      }
      goto L_089384C0;
    }
L_089384C0:
    ctx.gpr[6] = (0u | 83u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 115u);
      if (branch_taken) {
          goto L_089384D4;
      }
      goto L_089384CC;
    }
L_089384CC:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08938564;
      }
      goto L_089384D4;
    }
L_089384D4:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x089384E4u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x089384E4u) goto L_089384E4;
    return;
L_089384E4:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x089384F8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x089384F8u) goto L_089384F8;
    return;
L_089384F8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08938508u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 336u, 0x08B0162Cu>(ctx, &aot_mem) && ctx.pc == 0x08938508u) goto L_08938508;
    return;
L_08938508:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[23];
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08938520;
      }
      goto L_08938514;
    }
L_08938514:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08938520u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08938520u) goto L_08938520;
    return;
L_08938520:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(74));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08938538u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 347u, 0x08B0169Cu>(ctx, &aot_mem) && ctx.pc == 0x08938538u) goto L_08938538;
    return;
L_08938538:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x08938544u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFB6BCu>(ctx, &aot_mem) && ctx.pc == 0x08938544u) goto L_08938544;
    return;
L_08938544:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[23];
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08938558;
      }
      goto L_08938550;
    }
L_08938550:
    ctx.gpr[31] = (0x08938558u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08938558u) goto L_08938558;
    return;
L_08938558:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_08938564;
L_08938564:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089383BC;
      }
      goto L_08938570;
    }
L_08938570:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089385A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2276u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30104));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-30104), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089385C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30304));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x089385C8u) goto L_089385C8;
    return;
L_089385C8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089385D4:
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
L_08938600:
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
L_08938628:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0893863Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893863Cu) goto L_0893863C;
    return;
L_0893863C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938660;
      }
      goto L_08938644;
    }
L_08938644:
    ctx.gpr[31] = (0x0893864Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893864Cu) goto L_0893864C;
    return;
L_0893864C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08938668;
      }
      goto L_08938658;
    }
L_08938658:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08938680;
      }
      goto L_08938660;
    }
L_08938660:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0893883C;
      }
      goto L_08938668;
    }
L_08938668:
    ctx.gpr[31] = (0x08938670u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08938670u) goto L_08938670;
    return;
L_08938670:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08938770;
      }
      goto L_08938680;
    }
L_08938680:
    ctx.gpr[31] = (0x08938688u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08938688u) goto L_08938688;
    return;
L_08938688:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08938768;
      }
      goto L_08938698;
    }
L_08938698:
    ctx.gpr[31] = (0x089386A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089386A0u) goto L_089386A0;
    return;
L_089386A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08938760;
      }
      goto L_089386B0;
    }
L_089386B0:
    ctx.gpr[31] = (0x089386B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x089386B8u) goto L_089386B8;
    return;
L_089386B8:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08938758;
      }
      goto L_089386D8;
    }
L_089386D8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08938750;
      }
      goto L_089386EC;
    }
L_089386EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08938748;
      }
      goto L_08938704;
    }
L_08938704:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08938740;
      }
      goto L_08938718;
    }
L_08938718:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(112)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08938778;
      }
      goto L_08938738;
    }
L_08938738:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08938778;
      }
      goto L_08938740;
    }
L_08938740:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0893883C;
      }
      goto L_08938748;
    }
L_08938748:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0893883C;
      }
      goto L_08938750;
    }
L_08938750:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0893883C;
      }
      goto L_08938758;
    }
L_08938758:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0893883C;
      }
      goto L_08938760;
    }
L_08938760:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0893883C;
      }
      goto L_08938768;
    }
L_08938768:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0893883C;
      }
      goto L_08938770;
    }
L_08938770:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0893883C;
      }
      goto L_08938778;
    }
L_08938778:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089387A4;
      }
      goto L_08938788;
    }
L_08938788:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(116)));
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089387AC;
      }
      goto L_0893879C;
    }
L_0893879C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_089387AC;
      }
      goto L_089387A4;
    }
L_089387A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0893883C;
      }
      goto L_089387AC;
    }
L_089387AC:
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089387D8;
      }
      goto L_089387BC;
    }
L_089387BC:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(120)));
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089387E0;
      }
      goto L_089387D0;
    }
L_089387D0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_089387E0;
      }
      goto L_089387D8;
    }
L_089387D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0893883C;
      }
      goto L_089387E0;
    }
L_089387E0:
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08938828;
      }
      goto L_089387F0;
    }
L_089387F0:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (14545u << 16u);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 46871u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08938830;
      }
      goto L_08938820;
    }
L_08938820:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0893883C;
      }
      goto L_08938828;
    }
L_08938828:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0893883C;
      }
      goto L_08938830;
    }
L_08938830:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0893883Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_0893884C;
L_0893883C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893884C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0893898C;
      }
      goto L_089388BC;
    }
L_089388BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08938984;
      }
      goto L_089388D8;
    }
L_089388D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893897C;
      }
      goto L_089388F4;
    }
L_089388F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08938974;
      }
      goto L_08938910;
    }
L_08938910:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893896C;
      }
      goto L_0893892C;
    }
L_0893892C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08938964;
      }
      goto L_08938948;
    }
L_08938948:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08938994;
      }
      goto L_0893895C;
    }
L_0893895C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08938B20;
      }
      goto L_08938964;
    }
L_08938964:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08938B24;
      }
      goto L_0893896C;
    }
L_0893896C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08938B24;
      }
      goto L_08938974;
    }
L_08938974:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08938B24;
      }
      goto L_0893897C;
    }
L_0893897C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08938B24;
      }
      goto L_08938984;
    }
L_08938984:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08938B24;
      }
      goto L_0893898C;
    }
L_0893898C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08938B24;
      }
      goto L_08938994;
    }
L_08938994:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[23] = (0u | 12u);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    goto L_089389A4;
L_089389A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[19] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089389D8u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    goto L_08938600;
L_089389D8:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08938ACC;
      }
      goto L_089389EC;
    }
L_089389EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[19] << 5u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08938AC4;
      }
      goto L_08938A1C;
    }
L_08938A1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[19] << 5u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08938ABC;
      }
      goto L_08938A4C;
    }
L_08938A4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[19] << 5u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08938AB4;
      }
      goto L_08938A7C;
    }
L_08938A7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[19] << 5u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08938B04;
      }
      goto L_08938AAC;
    }
L_08938AAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08938B24;
      }
      goto L_08938AB4;
    }
L_08938AB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08938B24;
      }
      goto L_08938ABC;
    }
L_08938ABC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08938B24;
      }
      goto L_08938AC4;
    }
L_08938AC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08938B24;
      }
      goto L_08938ACC;
    }
L_08938ACC:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[19] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08938AF4u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    goto L_0893B524;
L_08938AF4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08938B04;
      }
      goto L_08938AFC;
    }
L_08938AFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08938B24;
      }
      goto L_08938B04;
    }
L_08938B04:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089389A4;
      }
      goto L_08938B20;
    }
L_08938B20:
    ctx.gpr[2] = (0u | 1u);
    goto L_08938B24;
L_08938B24:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
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
L_08938B58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[18]);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08938C00;
      }
      goto L_08938BAC;
    }
L_08938BAC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
        goto L_08938C04;
    }
    goto L_08938BC8;
L_08938BC8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
        goto L_08938C04;
    }
    goto L_08938BE4;
L_08938BE4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08938C38;
      }
      goto L_08938C00;
    }
L_08938C00:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    goto L_08938C04;
L_08938C04:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08938C40;
      }
      goto L_08938C30;
    }
L_08938C30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08938DB4;
      }
      goto L_08938C38;
    }
L_08938C38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08938DB8;
      }
      goto L_08938C40;
    }
L_08938C40:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[23] = (0u | 12u);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    goto L_08938C50;
L_08938C50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[19] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08938C84u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    goto L_08938600;
L_08938C84:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08938D60;
      }
      goto L_08938C98;
    }
L_08938C98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[19] << 5u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08938D98;
      }
      goto L_08938CC8;
    }
L_08938CC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[19] << 5u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08938D98;
      }
      goto L_08938CF8;
    }
L_08938CF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[19] << 5u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08938D98;
      }
      goto L_08938D28;
    }
L_08938D28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[19] << 5u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08938D98;
      }
      goto L_08938D58;
    }
L_08938D58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08938DB8;
      }
      goto L_08938D60;
    }
L_08938D60:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[19] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08938D88u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    goto L_0893B524;
L_08938D88:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938D98;
      }
      goto L_08938D90;
    }
L_08938D90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08938DB8;
      }
      goto L_08938D98;
    }
L_08938D98:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08938C50;
      }
      goto L_08938DB4;
    }
L_08938DB4:
    ctx.gpr[2] = (0u | 1u);
    goto L_08938DB8;
L_08938DB8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
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
L_08938DEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[18]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[31]);
    ctx.gpr[31] = (0x08938E2Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 111u, 0x08A34AF8u>(ctx, &aot_mem) && ctx.pc == 0x08938E2Cu) goto L_08938E2C;
    return;
L_08938E2C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[20];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08938F9C;
      }
      goto L_08938E48;
    }
L_08938E48:
    ctx.gpr[31] = (0x08938E50u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 111u, 0x08A34AF8u>(ctx, &aot_mem) && ctx.pc == 0x08938E50u) goto L_08938E50;
    return;
L_08938E50:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08938F94;
      }
      goto L_08938E6C;
    }
L_08938E6C:
    ctx.gpr[31] = (0x08938E74u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 111u, 0x08A34AF8u>(ctx, &aot_mem) && ctx.pc == 0x08938E74u) goto L_08938E74;
    return;
L_08938E74:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08938F8C;
      }
      goto L_08938E90;
    }
L_08938E90:
    ctx.gpr[31] = (0x08938E98u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 111u, 0x08A34AF8u>(ctx, &aot_mem) && ctx.pc == 0x08938E98u) goto L_08938E98;
    return;
L_08938E98:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08938F84;
      }
      goto L_08938EB4;
    }
L_08938EB4:
    ctx.gpr[31] = (0x08938EBCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 111u, 0x08A34AF8u>(ctx, &aot_mem) && ctx.pc == 0x08938EBCu) goto L_08938EBC;
    return;
L_08938EBC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08938F7C;
      }
      goto L_08938ED8;
    }
L_08938ED8:
    ctx.gpr[31] = (0x08938EE0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 111u, 0x08A34AF8u>(ctx, &aot_mem) && ctx.pc == 0x08938EE0u) goto L_08938EE0;
    return;
L_08938EE0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08938F74;
      }
      goto L_08938EFC;
    }
L_08938EFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[19] = (2232u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (2229u << 16u);
      if (branch_taken) {
          goto L_08938FA4;
      }
      goto L_08938F3C;
    }
L_08938F3C:
    ctx.gpr[31] = (0x08938F44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08938F44u) goto L_08938F44;
    return;
L_08938F44:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08938F60u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08938F60u) goto L_08938F60;
    return;
L_08938F60:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08938F6Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 519u, 0x08A0695Cu>(ctx, &aot_mem) && ctx.pc == 0x08938F6Cu) goto L_08938F6C;
    return;
L_08938F6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08938FEC;
      }
      goto L_08938F74;
    }
L_08938F74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08939150;
      }
      goto L_08938F7C;
    }
L_08938F7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08939150;
      }
      goto L_08938F84;
    }
L_08938F84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08939150;
      }
      goto L_08938F8C;
    }
L_08938F8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08939150;
      }
      goto L_08938F94;
    }
L_08938F94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08939150;
      }
      goto L_08938F9C;
    }
L_08938F9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08939150;
      }
      goto L_08938FA4;
    }
L_08938FA4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08938FB4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x08938FB4u) goto L_08938FB4;
    return;
L_08938FB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08938FE0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x08938FE0u) goto L_08938FE0;
    return;
L_08938FE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (0x08938FECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 519u, 0x08A0695Cu>(ctx, &aot_mem) && ctx.pc == 0x08938FECu) goto L_08938FEC;
    return;
L_08938FEC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_08939058;
      }
      goto L_08939000;
    }
L_08939000:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[21] = (0u | 0u);
    goto L_0893900C;
L_0893900C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0893903Cu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    goto L_08938600;
L_0893903C:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0893900C;
      }
      goto L_08939058;
    }
L_08939058:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
      if (branch_taken) {
          goto L_08939128;
      }
      goto L_0893906C;
    }
L_0893906C:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08939074;
L_08939074:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[20] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089390A8u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    goto L_08938600;
L_089390A8:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[20] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089390D8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    goto L_0893B524;
L_089390D8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893910C;
      }
      goto L_089390E0;
    }
L_089390E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939104;
      }
      goto L_089390F0;
    }
L_089390F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939104;
      }
      goto L_089390FC;
    }
L_089390FC:
    ctx.gpr[31] = (0x08939104u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08939104u) goto L_08939104;
    return;
L_08939104:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08939150;
      }
      goto L_0893910C;
    }
L_0893910C:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08939074;
      }
      goto L_08939128;
    }
L_08939128:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893914C;
      }
      goto L_08939138;
    }
L_08939138:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893914C;
      }
      goto L_08939144;
    }
L_08939144:
    ctx.gpr[31] = (0x0893914Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x0893914Cu) goto L_0893914C;
    return;
L_0893914C:
    ctx.gpr[2] = (0u | 1u);
    goto L_08939150;
L_08939150:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08939180:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[7] = (0u | 16u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[31]);
    ctx.gpr[31] = (0x089391F8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 314u, 0x088C1F78u>(ctx, &aot_mem) && ctx.pc == 0x089391F8u) goto L_089391F8;
    return;
L_089391F8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939244;
      }
      goto L_0893920C;
    }
L_0893920C:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (0x08939220u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089392D4;
L_08939220:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893924C;
      }
      goto L_08939228;
    }
L_08939228:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893920C;
      }
      goto L_08939244;
    }
L_08939244:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08939250;
      }
      goto L_0893924C;
    }
L_0893924C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08939250;
L_08939250:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08939268:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08939280u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08939280u) goto L_08939280;
    return;
L_08939280:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089392A8;
      }
      goto L_08939288;
    }
L_08939288:
    ctx.gpr[31] = (0x08939290u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08939290u) goto L_08939290;
    return;
L_08939290:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089392A0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08938B58;
L_089392A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089392C0;
      }
      goto L_089392A8;
    }
L_089392A8:
    ctx.gpr[31] = (0x089392B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089392B0u) goto L_089392B0;
    return;
L_089392B0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089392C0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08938B58;
L_089392C0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089392D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[18] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-11332)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08939424;
      }
      goto L_0893933C;
    }
L_0893933C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893941C;
      }
      goto L_08939358;
    }
L_08939358:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08939414;
      }
      goto L_08939374;
    }
L_08939374:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893940C;
      }
      goto L_08939390;
    }
L_08939390:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08939404;
      }
      goto L_089393AC;
    }
L_089393AC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089393FC;
      }
      goto L_089393C8;
    }
L_089393C8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0893942C;
      }
      goto L_089393F4;
    }
L_089393F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089394B4;
      }
      goto L_089393FC;
    }
L_089393FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089394B8;
      }
      goto L_08939404;
    }
L_08939404:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089394B8;
      }
      goto L_0893940C;
    }
L_0893940C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089394B8;
      }
      goto L_08939414;
    }
L_08939414:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089394B8;
      }
      goto L_0893941C;
    }
L_0893941C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089394B8;
      }
      goto L_08939424;
    }
L_08939424:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089394B8;
      }
      goto L_0893942C;
    }
L_0893942C:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[21] = (0u | 0u);
    goto L_08939438;
L_08939438:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08939468u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    goto L_08938600;
L_08939468:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08939490u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_0893B524;
L_08939490:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089394A0;
      }
      goto L_08939498;
    }
L_08939498:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089394B8;
      }
      goto L_089394A0;
    }
L_089394A0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08939438;
      }
      goto L_089394B4;
    }
L_089394B4:
    ctx.gpr[2] = (0u | 0u);
    goto L_089394B8;
L_089394B8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089394E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[23]);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(48))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[22]);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089395D8;
      }
      goto L_08939548;
    }
L_08939548:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[20] = (0u | 0u);
    goto L_08939558;
L_08939558:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08939588u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_08938600;
L_08939588:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089395B4u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    goto L_0893B524;
L_089395B4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089395C4;
      }
      goto L_089395BC;
    }
L_089395BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089395DC;
      }
      goto L_089395C4;
    }
L_089395C4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08939558;
      }
      goto L_089395D8;
    }
L_089395D8:
    ctx.gpr[2] = (0u | 0u);
    goto L_089395DC;
L_089395DC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893960C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-15040)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[6]);
    ctx.gpr[30] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089397C4;
      }
      goto L_0893965C;
    }
L_0893965C:
    ctx.gpr[4] = (ctx.gpr[30] << 5u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    goto L_0893968C;
L_0893968C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[30]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
        goto L_089396B0;
    }
    goto L_089396A8;
L_089396A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089396B8;
      }
      goto L_089396B0;
    }
L_089396B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_089396B8;
L_089396B8:
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089397A4;
      }
      goto L_089396C4;
    }
L_089396C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089397A4;
      }
      goto L_089396D0;
    }
L_089396D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 80u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089397A4;
      }
      goto L_089396E4;
    }
L_089396E4:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089396F0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_089392D4;
L_089396F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089397A4;
      }
      goto L_089396F8;
    }
L_089396F8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_089397A4;
      }
      goto L_08939728;
    }
L_08939728:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08939758u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    goto L_08938600;
L_08939758:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08939780u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_0893B524;
L_08939780:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939790;
      }
      goto L_08939788;
    }
L_08939788:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089397C8;
      }
      goto L_08939790;
    }
L_08939790:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08939728;
      }
      goto L_089397A4;
    }
L_089397A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.gpr[30] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1760));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[30]);
      if (branch_taken) {
          goto L_0893968C;
      }
      goto L_089397C4;
    }
L_089397C4:
    ctx.gpr[2] = (0u | 0u);
    goto L_089397C8;
L_089397C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089397F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-15040)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08939A78;
      }
      goto L_08939854;
    }
L_08939854:
    ctx.gpr[4] = (ctx.gpr[6] << 5u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[4]);
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (16128u << 16u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    goto L_089398A0;
L_089398A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
        goto L_089398C8;
    }
    goto L_089398C0;
L_089398C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089398D0;
      }
      goto L_089398C8;
    }
L_089398C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_089398D0;
L_089398D0:
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939A54;
      }
      goto L_089398DC;
    }
L_089398DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08939A54;
      }
      goto L_089398E8;
    }
L_089398E8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089398F4u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    goto L_089392D4;
L_089398F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939A54;
      }
      goto L_089398FC;
    }
L_089398FC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[23] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08939A54;
      }
      goto L_0893992C;
    }
L_0893992C:
    ctx.gpr[18] = (ctx.gpr[23] + static_cast<std::uint32_t>(112));
    goto L_08939930;
L_08939930:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[16] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08939964u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    goto L_08938600;
L_08939964:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08939988u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_0893B524;
L_08939988:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08939A40;
      }
      goto L_08939990;
    }
L_08939990:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(92)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(104)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(48))))));
    goto L_08939A40;
L_08939A40:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08939930;
      }
      goto L_08939A54;
    }
L_08939A54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1760));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[6]);
      if (branch_taken) {
          goto L_089398A0;
      }
      goto L_08939A78;
    }
L_08939A78:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08939AB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-15044)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[6]);
    ctx.gpr[30] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08939C44;
      }
      goto L_08939B04;
    }
L_08939B04:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(3248));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[30])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    goto L_08939B20;
L_08939B20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[30]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
        goto L_08939B44;
    }
    goto L_08939B3C;
L_08939B3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08939B4C;
      }
      goto L_08939B44;
    }
L_08939B44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08939B4C;
L_08939B4C:
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939C24;
      }
      goto L_08939B58;
    }
L_08939B58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08939C24;
      }
      goto L_08939B64;
    }
L_08939B64:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08939B70u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_089392D4;
L_08939B70:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939C24;
      }
      goto L_08939B78;
    }
L_08939B78:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08939C24;
      }
      goto L_08939BA8;
    }
L_08939BA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08939BD8u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    goto L_08938600;
L_08939BD8:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08939C00u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_0893B524;
L_08939C00:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939C10;
      }
      goto L_08939C08;
    }
L_08939C08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08939C48;
      }
      goto L_08939C10;
    }
L_08939C10:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08939BA8;
      }
      goto L_08939C24;
    }
L_08939C24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.gpr[30] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3248));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[30]);
      if (branch_taken) {
          goto L_08939B20;
      }
      goto L_08939C44;
    }
L_08939C44:
    ctx.gpr[2] = (0u | 0u);
    goto L_08939C48;
L_08939C48:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08939C78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15040)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[22]);
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[30] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[30]);
      if (branch_taken) {
          goto L_08939E08;
      }
      goto L_08939CC4;
    }
L_08939CC4:
    ctx.gpr[4] = (ctx.gpr[30] << 5u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    goto L_08939CF4;
L_08939CF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[30]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
        goto L_08939D18;
    }
    goto L_08939D10;
L_08939D10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08939D20;
      }
      goto L_08939D18;
    }
L_08939D18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[20]);
    goto L_08939D20;
L_08939D20:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939DE8;
      }
      goto L_08939D28;
    }
L_08939D28:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08939D34u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_089392D4;
L_08939D34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939DE8;
      }
      goto L_08939D3C;
    }
L_08939D3C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08939DE8;
      }
      goto L_08939D6C;
    }
L_08939D6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08939D9Cu);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    goto L_08938600;
L_08939D9C:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08939DC4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_0893B524;
L_08939DC4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08939DD4;
      }
      goto L_08939DCC;
    }
L_08939DCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08939E0C;
      }
      goto L_08939DD4;
    }
L_08939DD4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08939D6C;
      }
      goto L_08939DE8;
    }
L_08939DE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.gpr[30] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1760));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[30]);
      if (branch_taken) {
          goto L_08939CF4;
      }
      goto L_08939E08;
    }
L_08939E08:
    ctx.gpr[2] = (0u | 0u);
    goto L_08939E0C;
L_08939E0C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08939E3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[6] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[21] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08939F1C;
      }
      goto L_08939E88;
    }
L_08939E88:
    ctx.gpr[4] = (ctx.gpr[21] << 5u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[22] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[4]);
    goto L_08939EAC;
L_08939EAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08939ECC;
    }
    goto L_08939EC4;
L_08939EC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08939ED0;
      }
      goto L_08939ECC;
    }
L_08939ECC:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    goto L_08939ED0;
L_08939ED0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939F08;
      }
      goto L_08939EDC;
    }
L_08939EDC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08939F08;
      }
      goto L_08939EE4;
    }
L_08939EE4:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08939EFCu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    goto L_0893B430;
L_08939EFC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939F08;
      }
      goto L_08939F04;
    }
L_08939F04:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08939F08;
L_08939F08:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[21] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (ctx.gpr[21] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1760));
      if (branch_taken) {
          goto L_08939EAC;
      }
      goto L_08939F1C;
    }
L_08939F1C:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08939F4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15040)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0893A05C;
      }
      goto L_08939F7C;
    }
L_08939F7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] << 5u);
      if (branch_taken) {
          goto L_08939F9C;
      }
      goto L_08939F94;
    }
L_08939F94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08939FC0;
      }
      goto L_08939F9C;
    }
L_08939F9C:
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    goto L_08939FC0;
L_08939FC0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A050;
      }
      goto L_08939FC8;
    }
L_08939FC8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08939FD4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_089392D4;
L_08939FD4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A050;
      }
      goto L_08939FDC;
    }
L_08939FDC:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x08939FF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0893B430;
L_08939FF4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893A050;
      }
      goto L_08939FFC;
    }
L_08939FFC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893A050;
      }
      goto L_0893A00C;
    }
L_0893A00C:
    ctx.gpr[31] = (0x0893A014u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 540u, 0x0889EAF0u>(ctx, &aot_mem) && ctx.pc == 0x0893A014u) goto L_0893A014;
    return;
L_0893A014:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A050;
      }
      goto L_0893A01C;
    }
L_0893A01C:
    ctx.gpr[31] = (0x0893A024u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C0528u>(ctx, &aot_mem) && ctx.pc == 0x0893A024u) goto L_0893A024;
    return;
L_0893A024:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A048;
      }
      goto L_0893A02C;
    }
L_0893A02C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0893A048u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893A048u) goto L_0893A048;
    return;
L_0893A048:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A05C;
      }
      goto L_0893A050;
    }
L_0893A050:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08939F7C;
      }
      goto L_0893A05C;
    }
L_0893A05C:
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
L_0893A078:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0893A090u);
    ctx.gpr[5] = (0u | 0u);
    goto L_0893A310;
L_0893A090:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A13C;
      }
      goto L_0893A09C;
    }
L_0893A09C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0893A12C;
      }
      goto L_0893A0B8;
    }
L_0893A0B8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (16281u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[31] = (0x0893A128u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_0893A1F8;
L_0893A128:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_0893A12C;
L_0893A12C:
    ctx.gpr[31] = (0x0893A134u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x0893A134u) goto L_0893A134;
    return;
L_0893A134:
    ctx.gpr[31] = (0x0893A13Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F788u>(ctx, &aot_mem) && ctx.pc == 0x0893A13Cu) goto L_0893A13C;
    return;
L_0893A13C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A1E8;
      }
      goto L_0893A148;
    }
L_0893A148:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0893A1D8;
      }
      goto L_0893A164;
    }
L_0893A164:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (16281u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(132)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(136)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[31] = (0x0893A1D4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_0893A1F8;
L_0893A1D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_0893A1D8;
L_0893A1D8:
    ctx.gpr[31] = (0x0893A1E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x0893A1E0u) goto L_0893A1E0;
    return;
L_0893A1E0:
    ctx.gpr[31] = (0x0893A1E8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F788u>(ctx, &aot_mem) && ctx.pc == 0x0893A1E8u) goto L_0893A1E8;
    return;
L_0893A1E8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893A1F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (49097u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
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
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
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
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893A2B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0893A2CCu);
    ctx.gpr[5] = (0u | 0u);
    goto L_0893A310;
L_0893A2CC:
    ctx.gpr[5] = (16585u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x0893A2E8u);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 483u, 0x08A05E28u>(ctx, &aot_mem) && ctx.pc == 0x0893A2E8u) goto L_0893A2E8;
    return;
L_0893A2E8:
    ctx.gpr[31] = (0x0893A2F0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x0893A2F0u) goto L_0893A2F0;
    return;
L_0893A2F0:
    ctx.gpr[31] = (0x0893A2F8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F788u>(ctx, &aot_mem) && ctx.pc == 0x0893A2F8u) goto L_0893A2F8;
    return;
L_0893A2F8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893A308:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893A310:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0893A344;
      }
      goto L_0893A338;
    }
L_0893A338:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A348;
      }
      goto L_0893A344;
    }
L_0893A344:
    ctx.gpr[17] = (0u | 1u);
    goto L_0893A348;
L_0893A348:
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0893A43C;
      }
      goto L_0893A354;
    }
L_0893A354:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(22)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A3D0;
      }
      goto L_0893A360;
    }
L_0893A360:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (2229u << 16u);
    ctx.gpr[31] = (0x0893A370u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-15024)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 476u, 0x08AFE048u>(ctx, &aot_mem) && ctx.pc == 0x0893A370u) goto L_0893A370;
    return;
L_0893A370:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-15024)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A39C;
      }
      goto L_0893A394;
    }
L_0893A394:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_0893A43C;
      }
      goto L_0893A39C;
    }
L_0893A39C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x0893A3A8u);
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 424u, 0x08B01BC8u>(ctx, &aot_mem) && ctx.pc == 0x0893A3A8u) goto L_0893A3A8;
    return;
L_0893A3A8:
    ctx.gpr[5] = (ctx.gpr[2] & 127u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[5];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0893A3B8;
      }
      goto L_0893A3B4;
    }
L_0893A3B4:
    ctx.gpr[17] = (0u | 1u);
    goto L_0893A3B8;
L_0893A3B8:
    ctx.gpr[31] = (0x0893A3C0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 433u, 0x08941F70u>(ctx, &aot_mem) && ctx.pc == 0x0893A3C0u) goto L_0893A3C0;
    return;
L_0893A3C0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893A43C;
      }
      goto L_0893A3C8;
    }
L_0893A3C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_0893A43C;
      }
      goto L_0893A3D0;
    }
L_0893A3D0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (2229u << 16u);
    ctx.gpr[31] = (0x0893A3E0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-15028)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 473u, 0x08AFDFF4u>(ctx, &aot_mem) && ctx.pc == 0x0893A3E0u) goto L_0893A3E0;
    return;
L_0893A3E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-15028)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A40C;
      }
      goto L_0893A404;
    }
L_0893A404:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_0893A43C;
      }
      goto L_0893A40C;
    }
L_0893A40C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x0893A418u);
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 797u, 0x08AFB66Cu>(ctx, &aot_mem) && ctx.pc == 0x0893A418u) goto L_0893A418;
    return;
L_0893A418:
    ctx.gpr[5] = (ctx.gpr[2] & 127u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[5];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0893A428;
      }
      goto L_0893A424;
    }
L_0893A424:
    ctx.gpr[17] = (0u | 1u);
    goto L_0893A428;
L_0893A428:
    ctx.gpr[31] = (0x0893A430u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 433u, 0x08941F70u>(ctx, &aot_mem) && ctx.pc == 0x0893A430u) goto L_0893A430;
    return;
L_0893A430:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893A43C;
      }
      goto L_0893A438;
    }
L_0893A438:
    ctx.gpr[17] = (0u | 1u);
    goto L_0893A43C;
L_0893A43C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A530;
      }
      goto L_0893A448;
    }
L_0893A448:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A4C4;
      }
      goto L_0893A454;
    }
L_0893A454:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (2229u << 16u);
    ctx.gpr[31] = (0x0893A464u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-15024)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 476u, 0x08AFE048u>(ctx, &aot_mem) && ctx.pc == 0x0893A464u) goto L_0893A464;
    return;
L_0893A464:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-15024)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A490;
      }
      goto L_0893A488;
    }
L_0893A488:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_0893A530;
      }
      goto L_0893A490;
    }
L_0893A490:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x0893A49Cu);
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21)));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 424u, 0x08B01BC8u>(ctx, &aot_mem) && ctx.pc == 0x0893A49Cu) goto L_0893A49C;
    return;
L_0893A49C:
    ctx.gpr[5] = (ctx.gpr[2] & 127u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[5];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0893A4AC;
      }
      goto L_0893A4A8;
    }
L_0893A4A8:
    ctx.gpr[17] = (0u | 1u);
    goto L_0893A4AC;
L_0893A4AC:
    ctx.gpr[31] = (0x0893A4B4u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 433u, 0x08941F70u>(ctx, &aot_mem) && ctx.pc == 0x0893A4B4u) goto L_0893A4B4;
    return;
L_0893A4B4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893A530;
      }
      goto L_0893A4BC;
    }
L_0893A4BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_0893A530;
      }
      goto L_0893A4C4;
    }
L_0893A4C4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (2229u << 16u);
    ctx.gpr[31] = (0x0893A4D4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-15028)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 473u, 0x08AFDFF4u>(ctx, &aot_mem) && ctx.pc == 0x0893A4D4u) goto L_0893A4D4;
    return;
L_0893A4D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-15028)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A500;
      }
      goto L_0893A4F8;
    }
L_0893A4F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_0893A530;
      }
      goto L_0893A500;
    }
L_0893A500:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x0893A50Cu);
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 797u, 0x08AFB66Cu>(ctx, &aot_mem) && ctx.pc == 0x0893A50Cu) goto L_0893A50C;
    return;
L_0893A50C:
    ctx.gpr[5] = (ctx.gpr[2] & 127u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[5];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0893A51C;
      }
      goto L_0893A518;
    }
L_0893A518:
    ctx.gpr[17] = (0u | 1u);
    goto L_0893A51C;
L_0893A51C:
    ctx.gpr[31] = (0x0893A524u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 433u, 0x08941F70u>(ctx, &aot_mem) && ctx.pc == 0x0893A524u) goto L_0893A524;
    return;
L_0893A524:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893A530;
      }
      goto L_0893A52C;
    }
L_0893A52C:
    ctx.gpr[17] = (0u | 1u);
    goto L_0893A530;
L_0893A530:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A540;
      }
      goto L_0893A538;
    }
L_0893A538:
    ctx.gpr[31] = (0x0893A540u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 351u, 0x08941770u>(ctx, &aot_mem) && ctx.pc == 0x0893A540u) goto L_0893A540;
    return;
L_0893A540:
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
L_0893A558:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 10u);
      if (branch_taken) {
          goto L_0893A5A4;
      }
      goto L_0893A568;
    }
L_0893A568:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 9u);
      if (branch_taken) {
          goto L_0893A598;
      }
      goto L_0893A570;
    }
L_0893A570:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 8u);
      if (branch_taken) {
          goto L_0893A58C;
      }
      goto L_0893A578;
    }
L_0893A578:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0893A5AC;
      }
      goto L_0893A580;
    }
L_0893A580:
    ctx.gpr[8] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 16u);
      if (branch_taken) {
          goto L_0893A5AC;
      }
      goto L_0893A58C;
    }
L_0893A58C:
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_0893A5AC;
      }
      goto L_0893A598;
    }
L_0893A598:
    ctx.gpr[8] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_0893A5AC;
      }
      goto L_0893A5A4;
    }
L_0893A5A4:
    ctx.gpr[8] = (0u | 3u);
    ctx.gpr[7] = (0u | 0u);
    goto L_0893A5AC;
L_0893A5AC:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] << 4u);
      if (branch_taken) {
          goto L_0893A620;
      }
      goto L_0893A5BC;
    }
L_0893A5BC:
    ctx.gpr[9] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-30252));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[9]);
    goto L_0893A5CC;
L_0893A5CC:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893A610;
      }
      goto L_0893A5D8;
    }
L_0893A5D8:
    ctx.gpr[5] = (2276u << 16u);
    ctx.gpr[4] = (ctx.gpr[8] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30088));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] << (ctx.gpr[6] & 31u));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A608;
      }
      goto L_0893A600;
    }
L_0893A600:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0893A624;
      }
      goto L_0893A608;
    }
L_0893A608:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0893A624;
      }
      goto L_0893A610;
    }
L_0893A610:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0893A5CC;
      }
      goto L_0893A620;
    }
L_0893A620:
    ctx.gpr[2] = (0u | 0u);
    goto L_0893A624;
L_0893A624:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893A62C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_0893A640;
    }
    goto L_0893A640;
L_0893A640:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893A648:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 10u);
      if (branch_taken) {
          goto L_0893A694;
      }
      goto L_0893A658;
    }
L_0893A658:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 9u);
      if (branch_taken) {
          goto L_0893A688;
      }
      goto L_0893A660;
    }
L_0893A660:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 8u);
      if (branch_taken) {
          goto L_0893A67C;
      }
      goto L_0893A668;
    }
L_0893A668:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0893A69C;
      }
      goto L_0893A670;
    }
L_0893A670:
    ctx.gpr[7] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 16u);
      if (branch_taken) {
          goto L_0893A69C;
      }
      goto L_0893A67C;
    }
L_0893A67C:
    ctx.gpr[7] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0893A69C;
      }
      goto L_0893A688;
    }
L_0893A688:
    ctx.gpr[7] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0893A69C;
      }
      goto L_0893A694;
    }
L_0893A694:
    ctx.gpr[7] = (0u | 3u);
    ctx.gpr[4] = (0u | 0u);
    goto L_0893A69C;
L_0893A69C:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[7] << 4u);
      if (branch_taken) {
          goto L_0893A744;
      }
      goto L_0893A6AC;
    }
L_0893A6AC:
    ctx.gpr[9] = (2228u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-30252));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    goto L_0893A6BC;
L_0893A6BC:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893A734;
      }
      goto L_0893A6C8;
    }
L_0893A6C8:
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (2276u << 16u);
    ctx.gpr[6] = (ctx.gpr[7] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30088));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[8] = (ctx.gpr[5] << (ctx.gpr[8] & 31u));
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[7] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A724;
      }
      goto L_0893A700;
    }
L_0893A700:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_0893A704;
L_0893A704:
    ctx.gpr[8] = (ctx.gpr[5] << (ctx.gpr[7] & 31u));
    ctx.gpr[8] = (ctx.gpr[6] & ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A72C;
      }
      goto L_0893A714;
    }
L_0893A714:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[7] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893A704;
      }
      goto L_0893A724;
    }
L_0893A724:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0893A748;
      }
      goto L_0893A72C;
    }
L_0893A72C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0893A748;
      }
      goto L_0893A734;
    }
L_0893A734:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0893A6BC;
      }
      goto L_0893A744;
    }
L_0893A744:
    ctx.gpr[2] = (0u | 0u);
    goto L_0893A748;
L_0893A748:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893A750:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (0u | 2u);
      if (branch_taken) {
          goto L_0893A76C;
      }
      goto L_0893A75C;
    }
L_0893A75C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 5u);
      if (branch_taken) {
          goto L_0893A76C;
      }
      goto L_0893A764;
    }
L_0893A764:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0893A774;
      }
      goto L_0893A76C;
    }
L_0893A76C:
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_0893A774;
L_0893A774:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893A77C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 3u);
      if (branch_taken) {
          goto L_0893A794;
      }
      goto L_0893A78C;
    }
L_0893A78C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0893A79C;
      }
      goto L_0893A794;
    }
L_0893A794:
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_0893A79C;
L_0893A79C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893A7A4:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_0893A7C4;
      }
      goto L_0893A7B8;
    }
L_0893A7B8:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_0893A7EC;
      }
      goto L_0893A7C4;
    }
L_0893A7C4:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893A7E4;
      }
      goto L_0893A7D8;
    }
L_0893A7D8:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_0893A7EC;
      }
      goto L_0893A7E4;
    }
L_0893A7E4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_0893A7EC;
L_0893A7EC:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893A80C;
      }
      goto L_0893A7FC;
    }
L_0893A7FC:
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[0];
      if (branch_taken) {
          goto L_0893A83C;
      }
      goto L_0893A80C;
    }
L_0893A80C:
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893A830;
      }
      goto L_0893A820;
    }
L_0893A820:
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[0];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[0];
      if (branch_taken) {
          goto L_0893A83C;
      }
      goto L_0893A830;
    }
L_0893A830:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[0];
    goto L_0893A83C;
L_0893A83C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893A844:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (19224u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 38528u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_0893A880;
      }
      goto L_0893A864;
    }
L_0893A864:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[12];
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[13];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[17];
    goto L_0893A880;
L_0893A880:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A8A8;
      }
      goto L_0893A88C;
    }
L_0893A88C:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[12];
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[13];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[17];
    goto L_0893A8A8;
L_0893A8A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893A940;
      }
      goto L_0893A8B4;
    }
L_0893A8B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893A940;
      }
      goto L_0893A8C0;
    }
L_0893A8C0:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[17];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[19];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[0] + ctx.fpr[2];
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[19];
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = ctx.fpr[17] - ctx.fpr[13];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[12] + ctx.fpr[13];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    goto L_0893A940;
L_0893A940:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
        goto L_0893A954;
    }
    goto L_0893A954;
L_0893A954:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0893A968;
    }
    goto L_0893A968;
L_0893A968:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893A970:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0893AB98;
      }
      goto L_0893A9B4;
    }
L_0893A9B4:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (2228u << 16u);
    ctx.gpr[22] = (2229u << 16u);
    ctx.gpr[23] = (2229u << 16u);
    goto L_0893A9D8;
L_0893A9D8:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(20976)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0893AB90;
      }
      goto L_0893A9EC;
    }
L_0893A9EC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0893AB90;
      }
      goto L_0893A9F4;
    }
L_0893A9F4:
    ctx.gpr[31] = (0x0893A9FCu);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(88))))));
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 433u, 0x08941F70u>(ctx, &aot_mem) && ctx.pc == 0x0893A9FCu) goto L_0893A9FC;
    return;
L_0893A9FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893AB90;
      }
      goto L_0893AA04;
    }
L_0893AA04:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_0893AA30;
    }
    goto L_0893AA30;
L_0893AA30:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893AB90;
      }
      goto L_0893AA40;
    }
L_0893AA40:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_0893AA68;
    }
    goto L_0893AA68;
L_0893AA68:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893AB90;
      }
      goto L_0893AA78;
    }
L_0893AA78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(208)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0893AAC8;
      }
      goto L_0893AA8C;
    }
L_0893AA8C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_0893AAB0;
      }
      goto L_0893AA98;
    }
L_0893AA98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-15024)));
    ctx.gpr[31] = (0x0893AAA4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 424u, 0x08B01BC8u>(ctx, &aot_mem) && ctx.pc == 0x0893AAA4u) goto L_0893AAA4;
    return;
L_0893AAA4:
    ctx.gpr[4] = (ctx.gpr[2] & 127u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0893AB90;
      }
      goto L_0893AAB0;
    }
L_0893AAB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-15028)));
    ctx.gpr[31] = (0x0893AABCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 797u, 0x08AFB66Cu>(ctx, &aot_mem) && ctx.pc == 0x0893AABCu) goto L_0893AABC;
    return;
L_0893AABC:
    ctx.gpr[4] = (ctx.gpr[2] & 127u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0893AB90;
      }
      goto L_0893AAC8;
    }
L_0893AAC8:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(210)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893AB10;
      }
      goto L_0893AAD4;
    }
L_0893AAD4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_0893AAF8;
      }
      goto L_0893AAE0;
    }
L_0893AAE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-15024)));
    ctx.gpr[31] = (0x0893AAECu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 424u, 0x08B01BC8u>(ctx, &aot_mem) && ctx.pc == 0x0893AAECu) goto L_0893AAEC;
    return;
L_0893AAEC:
    ctx.gpr[4] = (ctx.gpr[2] & 127u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0893AB90;
      }
      goto L_0893AAF8;
    }
L_0893AAF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-15028)));
    ctx.gpr[31] = (0x0893AB04u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 797u, 0x08AFB66Cu>(ctx, &aot_mem) && ctx.pc == 0x0893AB04u) goto L_0893AB04;
    return;
L_0893AB04:
    ctx.gpr[4] = (ctx.gpr[2] & 127u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0893AB90;
      }
      goto L_0893AB10;
    }
L_0893AB10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893AB58;
      }
      goto L_0893AB1C;
    }
L_0893AB1C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_0893AB40;
      }
      goto L_0893AB28;
    }
L_0893AB28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-15024)));
    ctx.gpr[31] = (0x0893AB34u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 424u, 0x08B01BC8u>(ctx, &aot_mem) && ctx.pc == 0x0893AB34u) goto L_0893AB34;
    return;
L_0893AB34:
    ctx.gpr[4] = (ctx.gpr[2] & 127u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0893AB90;
      }
      goto L_0893AB40;
    }
L_0893AB40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-15028)));
    ctx.gpr[31] = (0x0893AB4Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 797u, 0x08AFB66Cu>(ctx, &aot_mem) && ctx.pc == 0x0893AB4Cu) goto L_0893AB4C;
    return;
L_0893AB4C:
    ctx.gpr[4] = (ctx.gpr[2] & 127u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0893AB90;
      }
      goto L_0893AB58;
    }
L_0893AB58:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_0893AB7C;
      }
      goto L_0893AB64;
    }
L_0893AB64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-15024)));
    ctx.gpr[31] = (0x0893AB70u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 424u, 0x08B01BC8u>(ctx, &aot_mem) && ctx.pc == 0x0893AB70u) goto L_0893AB70;
    return;
L_0893AB70:
    ctx.gpr[4] = (ctx.gpr[2] & 127u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0893AB90;
      }
      goto L_0893AB7C;
    }
L_0893AB7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-15028)));
    ctx.gpr[31] = (0x0893AB88u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 797u, 0x08AFB66Cu>(ctx, &aot_mem) && ctx.pc == 0x0893AB88u) goto L_0893AB88;
    return;
L_0893AB88:
    ctx.gpr[4] = (ctx.gpr[2] & 127u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0893AB90;
L_0893AB90:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893A9D8;
      }
      goto L_0893AB98;
    }
L_0893AB98:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893ABD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    goto L_0893AC18;
L_0893AC18:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_0893AC18;
      }
      goto L_0893AC2C;
    }
L_0893AC2C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0893ADC0;
      }
      goto L_0893AC4C;
    }
L_0893AC4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[7]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[19] << 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 1u);
    ctx.gpr[21] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[7] + ctx.gpr[20]);
    goto L_0893AC9C;
L_0893AC9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
        goto L_0893ACBC;
    }
    goto L_0893ACB4;
L_0893ACB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0893ACC0;
      }
      goto L_0893ACBC;
    }
L_0893ACBC:
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[21]);
    goto L_0893ACC0;
L_0893ACC0:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893ADAC;
      }
      goto L_0893ACCC;
    }
L_0893ACCC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x0893ACE4u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    goto L_0893B430;
L_0893ACE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893ADAC;
      }
      goto L_0893ACEC;
    }
L_0893ACEC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893AD0C;
      }
      goto L_0893ACFC;
    }
L_0893ACFC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893ADAC;
      }
      goto L_0893AD0C;
    }
L_0893AD0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (0u | 4u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
        goto L_0893AD1C;
    }
    goto L_0893AD1C;
L_0893AD1C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
        goto L_0893AD58;
    }
    goto L_0893AD28;
L_0893AD28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0893AD38u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089394E4;
L_0893AD38:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
        goto L_0893AD58;
    }
    goto L_0893AD40;
L_0893AD40:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0893AD4Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 171u, 0x0893CE18u>(ctx, &aot_mem) && ctx.pc == 0x0893AD4Cu) goto L_0893AD4C;
    return;
L_0893AD4C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(44));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_0893AD58;
L_0893AD58:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0893AD80u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 452u, 0x089D7054u>(ctx, &aot_mem) && ctx.pc == 0x0893AD80u) goto L_0893AD80;
    return;
L_0893AD80:
    ctx.gpr[31] = (0x0893AD88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C0528u>(ctx, &aot_mem) && ctx.pc == 0x0893AD88u) goto L_0893AD88;
    return;
L_0893AD88:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893ADAC;
      }
      goto L_0893AD90;
    }
L_0893AD90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0893ADACu);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893ADACu) goto L_0893ADAC;
    return;
L_0893ADAC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (ctx.gpr[30] + static_cast<std::uint32_t>(-1));
    ctx.gpr[30] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1760));
      if (branch_taken) {
          goto L_0893AC9C;
      }
      goto L_0893ADC0;
    }
L_0893ADC0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] << 4u);
      if (branch_taken) {
          goto L_0893ADF4;
      }
      goto L_0893ADCC;
    }
L_0893ADCC:
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_0893ADE0;
L_0893ADE0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_0893ADE0;
      }
      goto L_0893ADF4;
    }
L_0893ADF4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893AE28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    goto L_0893AE54;
L_0893AE54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893AE80;
      }
      goto L_0893AE60;
    }
L_0893AE60:
    ctx.gpr[31] = (0x0893AE68u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 202u, 0x0893D044u>(ctx, &aot_mem) && ctx.pc == 0x0893AE68u) goto L_0893AE68;
    return;
L_0893AE68:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893AE80;
      }
      goto L_0893AE74;
    }
L_0893AE74:
    ctx.gpr[31] = (0x0893AE7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x0893AE7Cu) goto L_0893AE7C;
    return;
L_0893AE7C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    goto L_0893AE80;
L_0893AE80:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(44));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_0893AE54;
      }
      goto L_0893AE94;
    }
L_0893AE94:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    goto L_0893AE9C;
L_0893AE9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893AEC0;
      }
      goto L_0893AEA8;
    }
L_0893AEA8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_0893AE9C;
      }
      goto L_0893AEB8;
    }
L_0893AEB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0893AEC4;
      }
      goto L_0893AEC0;
    }
L_0893AEC0:
    ctx.gpr[2] = (0u | 0u);
    goto L_0893AEC4;
L_0893AEC4:
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
L_0893AEE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[30]);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15040)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0893B020;
      }
      goto L_0893AF28;
    }
L_0893AF28:
    ctx.gpr[4] = (ctx.gpr[23] << 5u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[21] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (16128u << 16u);
    ctx.gpr[19] = (0u | 5u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (0u | 80u);
    goto L_0893AF5C;
L_0893AF5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
        goto L_0893AF7C;
    }
    goto L_0893AF74;
L_0893AF74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_0893AF80;
      }
      goto L_0893AF7C;
    }
L_0893AF7C:
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[21]);
    goto L_0893AF80;
L_0893AF80:
    ctx.gpr[20] = (ctx.gpr[22] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B014;
      }
      goto L_0893AF8C;
    }
L_0893AF8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893AFA4;
      }
      goto L_0893AF98;
    }
L_0893AF98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0893B014;
      }
      goto L_0893AFA4;
    }
L_0893AFA4:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0893AFBCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_0893B430;
L_0893AFBC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B014;
      }
      goto L_0893AFC4;
    }
L_0893AFC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0893AFE8;
      }
      goto L_0893AFD4;
    }
L_0893AFD4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893B014;
      }
      goto L_0893AFE8;
    }
L_0893AFE8:
    ctx.gpr[31] = (0x0893AFF0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C0528u>(ctx, &aot_mem) && ctx.pc == 0x0893AFF0u) goto L_0893AFF0;
    return;
L_0893AFF0:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B014;
      }
      goto L_0893AFF8;
    }
L_0893AFF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0893B014u);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893B014u) goto L_0893B014;
    return;
L_0893B014:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[23] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1760));
      if (branch_taken) {
          goto L_0893AF5C;
      }
      goto L_0893B020;
    }
L_0893B020:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893B054:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15040)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
      if (branch_taken) {
          goto L_0893B260;
      }
      goto L_0893B0A0;
    }
L_0893B0A0:
    ctx.gpr[6] = (0u - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_0893B0D0;
L_0893B0D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
        goto L_0893B0F8;
    }
    goto L_0893B0F0;
L_0893B0F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0893B100;
      }
      goto L_0893B0F8;
    }
L_0893B0F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_0893B100;
L_0893B100:
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0893B244;
      }
      goto L_0893B10C;
    }
L_0893B10C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(836)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
        goto L_0893B12C;
    }
    goto L_0893B118;
L_0893B118:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893B244;
      }
      goto L_0893B128;
    }
L_0893B128:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    goto L_0893B12C;
L_0893B12C:
    ctx.gpr[5] = (0u | 80u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893B244;
      }
      goto L_0893B13C;
    }
L_0893B13C:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0893B148u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    goto L_089392D4;
L_0893B148:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B244;
      }
      goto L_0893B150;
    }
L_0893B150:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_0893B164;
      }
      goto L_0893B15C;
    }
L_0893B15C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_0893B20C;
      }
      goto L_0893B164;
    }
L_0893B164:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_0893B20C;
      }
      goto L_0893B194;
    }
L_0893B194:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0893B1C4u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    goto L_08938600;
L_0893B1C4:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0893B1ECu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_0893B524;
L_0893B1EC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893B1F8;
      }
      goto L_0893B1F4;
    }
L_0893B1F4:
    ctx.gpr[20] = (0u | 1u);
    goto L_0893B1F8;
L_0893B1F8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0893B194;
      }
      goto L_0893B20C;
    }
L_0893B20C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B244;
      }
      goto L_0893B214;
    }
L_0893B214:
    ctx.gpr[31] = (0x0893B21Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C0528u>(ctx, &aot_mem) && ctx.pc == 0x0893B21Cu) goto L_0893B21C;
    return;
L_0893B21C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B244;
      }
      goto L_0893B228;
    }
L_0893B228:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0893B244u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893B244u) goto L_0893B244;
    return;
L_0893B244:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1760));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0893B0D0;
      }
      goto L_0893B260;
    }
L_0893B260:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893B290:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[31]);
    ctx.gpr[31] = (0x0893B2ACu);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893B2ACu) goto L_0893B2AC;
    return;
L_0893B2AC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0893B2B8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_0893960C;
L_0893B2B8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893B3B0;
      }
      goto L_0893B2C0;
    }
L_0893B2C0:
    ctx.gpr[31] = (0x0893B2C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0893B2C8u) goto L_0893B2C8;
    return;
L_0893B2C8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0893B2D4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08939AB4;
L_0893B2D4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893B3A8;
      }
      goto L_0893B2DC;
    }
L_0893B2DC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[18];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893B3B8;
      }
      goto L_0893B394;
    }
L_0893B394:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0893B3E4;
      }
      goto L_0893B3A8;
    }
L_0893B3A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B41C;
      }
      goto L_0893B3B0;
    }
L_0893B3B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B41C;
      }
      goto L_0893B3B8;
    }
L_0893B3B8:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[14];
    ctx.fpr[12] = ctx.fpr[17] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0893B3E4;
L_0893B3E4:
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0893B3FCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0893884C;
L_0893B3FC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893B41C;
      }
      goto L_0893B404;
    }
L_0893B404:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_0893B41C;
L_0893B41C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893B430:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893B510;
      }
      goto L_0893B448;
    }
L_0893B448:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893B508;
      }
      goto L_0893B45C;
    }
L_0893B45C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[17];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893B500;
      }
      goto L_0893B49C;
    }
L_0893B49C:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893B4F8;
      }
      goto L_0893B4B0;
    }
L_0893B4B0:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893B4F0;
      }
      goto L_0893B4D4;
    }
L_0893B4D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893B518;
      }
      goto L_0893B4E8;
    }
L_0893B4E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0893B51C;
      }
      goto L_0893B4F0;
    }
L_0893B4F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0893B51C;
      }
      goto L_0893B4F8;
    }
L_0893B4F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0893B51C;
      }
      goto L_0893B500;
    }
L_0893B500:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0893B51C;
      }
      goto L_0893B508;
    }
L_0893B508:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0893B51C;
      }
      goto L_0893B510;
    }
L_0893B510:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0893B51C;
      }
      goto L_0893B518;
    }
L_0893B518:
    ctx.gpr[2] = (0u | 1u);
    goto L_0893B51C;
L_0893B51C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893B524:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893B614;
      }
      goto L_0893B540;
    }
L_0893B540:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893B60C;
      }
      goto L_0893B558;
    }
L_0893B558:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[13];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[16];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[18];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893B604;
      }
      goto L_0893B598;
    }
L_0893B598:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893B5FC;
      }
      goto L_0893B5B0;
    }
L_0893B5B0:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893B5F4;
      }
      goto L_0893B5D4;
    }
L_0893B5D4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893B61C;
      }
      goto L_0893B5EC;
    }
L_0893B5EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0893B620;
      }
      goto L_0893B5F4;
    }
L_0893B5F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0893B620;
      }
      goto L_0893B5FC;
    }
L_0893B5FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0893B620;
      }
      goto L_0893B604;
    }
L_0893B604:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0893B620;
      }
      goto L_0893B60C;
    }
L_0893B60C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0893B620;
      }
      goto L_0893B614;
    }
L_0893B614:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0893B620;
      }
      goto L_0893B61C;
    }
L_0893B61C:
    ctx.gpr[2] = (0u | 1u);
    goto L_0893B620;
L_0893B620:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893B628:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-7827));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6720), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6612), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6616), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6592), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6591), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6588), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6584), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6580), 0u);
    ctx.gpr[4] = (2276u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-30088), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30088));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6576), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6568), 0u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6564), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2276u << 16u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30072));
    goto L_0893B6C4;
L_0893B6C4:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[5]);
    goto L_0893B6CC;
L_0893B6CC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(176));
      if (branch_taken) {
          goto L_0893B6CC;
      }
      goto L_0893B6E0;
    }
L_0893B6E0:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[8]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_0893B6C4;
      }
      goto L_0893B6F0;
    }
L_0893B6F0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[31] = (0x0893B700u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 95u, 0x08864708u>(ctx, &aot_mem) && ctx.pc == 0x0893B700u) goto L_0893B700;
    return;
L_0893B700:
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29992), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0893B724;
      }
      goto L_0893B714;
    }
L_0893B714:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0893B724u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 99u, 0x08864748u>(ctx, &aot_mem) && ctx.pc == 0x0893B724u) goto L_0893B724;
    return;
L_0893B724:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893B734:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6720), 0u);
    ctx.gpr[16] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-29992)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0893B770;
      }
      goto L_0893B758;
    }
L_0893B758:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0893B768u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 97u, 0x08864728u>(ctx, &aot_mem) && ctx.pc == 0x0893B768u) goto L_0893B768;
    return;
L_0893B768:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-29992), ctx.gpr[4]);
    goto L_0893B770;
L_0893B770:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893B780:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-6720)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (2275u << 16u);
      if (branch_taken) {
          goto L_0893B7E0;
      }
      goto L_0893B7AC;
    }
L_0893B7AC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(11856));
    goto L_0893B7B0;
L_0893B7B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893B7CC;
      }
      goto L_0893B7BC;
    }
L_0893B7BC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0893B7C8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 398u, 0x08941B68u>(ctx, &aot_mem) && ctx.pc == 0x0893B7C8u) goto L_0893B7C8;
    return;
L_0893B7C8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_0893B7CC;
L_0893B7CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-6720)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(224));
      if (branch_taken) {
          goto L_0893B7B0;
      }
      goto L_0893B7E0;
    }
L_0893B7E0:
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
L_0893B7F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[16] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6572), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(13216));
    ctx.gpr[17] = (2275u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2368), 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(11856));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2372), 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    goto L_0893B838;
L_0893B838:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B84C;
      }
      goto L_0893B844;
    }
L_0893B844:
    ctx.gpr[31] = (0x0893B84Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 264u, 0x0893D480u>(ctx, &aot_mem) && ctx.pc == 0x0893B84Cu) goto L_0893B84C;
    return;
L_0893B84C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(224));
      if (branch_taken) {
          goto L_0893B838;
      }
      goto L_0893B85C;
    }
L_0893B85C:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[5] = (ctx.gpr[5] & 15u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0893B930;
      }
      goto L_0893B874;
    }
L_0893B874:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29988)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-29988), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0893B894;
      }
      goto L_0893B88C;
    }
L_0893B88C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-29988), 0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_0893B894;
L_0893B894:
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0893B930;
      }
      goto L_0893B8B0;
    }
L_0893B8B0:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
        goto L_0893B8D8;
    }
    goto L_0893B8D8;
L_0893B8D8:
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893B918;
      }
      goto L_0893B8E8;
    }
L_0893B8E8:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[15]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
        goto L_0893B908;
    }
    goto L_0893B908;
L_0893B908:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893B928;
      }
      goto L_0893B918;
    }
L_0893B918:
    ctx.gpr[31] = (0x0893B920u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0893AEE0;
L_0893B920:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B930;
      }
      goto L_0893B928;
    }
L_0893B928:
    ctx.gpr[31] = (0x0893B930u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0893B054;
L_0893B930:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893B94C:
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[7] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[7] = (2275u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(11856));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893B97C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6616)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_0893BC0C;
      }
      goto L_0893B9C0;
    }
L_0893B9C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6612)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893BC0C;
      }
      goto L_0893B9D0;
    }
L_0893B9D0:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[31] = (0x0893B9E0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6563), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 194u, 0x08A54DCCu>(ctx, &aot_mem) && ctx.pc == 0x0893B9E0u) goto L_0893B9E0;
    return;
L_0893B9E0:
    ctx.gpr[4] = (16181u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16128u << 16u);
    ctx.gpr[31] = (0x0893B9F8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x0893B9F8u) goto L_0893B9F8;
    return;
L_0893B9F8:
    ctx.gpr[31] = (0x0893BA00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55030u>(ctx, &aot_mem) && ctx.pc == 0x0893BA00u) goto L_0893BA00;
    return;
L_0893BA00:
    ctx.gpr[31] = (0x0893BA08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54EB8u>(ctx, &aot_mem) && ctx.pc == 0x0893BA08u) goto L_0893BA08;
    return;
L_0893BA08:
    ctx.gpr[31] = (0x0893BA10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A54FD0u>(ctx, &aot_mem) && ctx.pc == 0x0893BA10u) goto L_0893BA10;
    return;
L_0893BA10:
    ctx.gpr[31] = (0x0893BA18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54ECCu>(ctx, &aot_mem) && ctx.pc == 0x0893BA18u) goto L_0893BA18;
    return;
L_0893BA18:
    ctx.gpr[31] = (0x0893BA20u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x0893BA20u) goto L_0893BA20;
    return;
L_0893BA20:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 27u);
    ctx.gpr[6] = (0u | 89u);
    ctx.gpr[7] = (0u | 130u);
    ctx.gpr[31] = (0x0893BA3Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0893BA3Cu) goto L_0893BA3C;
    return;
L_0893BA3C:
    ctx.gpr[31] = (0x0893BA44u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x0893BA44u) goto L_0893BA44;
    return;
L_0893BA44:
    ctx.gpr[31] = (0x0893BA4Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x0893BA4Cu) goto L_0893BA4C;
    return;
L_0893BA4C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0893BA64u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0893BA64u) goto L_0893BA64;
    return;
L_0893BA64:
    ctx.gpr[31] = (0x0893BA6Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A550ACu>(ctx, &aot_mem) && ctx.pc == 0x0893BA6Cu) goto L_0893BA6C;
    return;
L_0893BA6C:
    ctx.gpr[4] = (17379u << 16u);
    ctx.gpr[31] = (0x0893BA78u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A54FACu>(ctx, &aot_mem) && ctx.pc == 0x0893BA78u) goto L_0893BA78;
    return;
L_0893BA78:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6596)));
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-6608));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[21] = (2230u << 16u);
      if (branch_taken) {
          goto L_0893BB20;
      }
      goto L_0893BA98;
    }
L_0893BA98:
    ctx.gpr[22] = (2269u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-5136));
      if (branch_taken) {
          goto L_0893BAD0;
      }
      goto L_0893BAA4;
    }
L_0893BAA4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0893BAB0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0893BAB0u) goto L_0893BAB0;
    return;
L_0893BAB0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893BAC8;
      }
      goto L_0893BABC;
    }
L_0893BABC:
    ctx.gpr[31] = (0x0893BAC4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0893BAC4u) goto L_0893BAC4;
    return;
L_0893BAC4:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0893BAC8;
L_0893BAC8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_0893BAD0;
L_0893BAD0:
    ctx.gpr[31] = (0x0893BAD8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0893BAD8u) goto L_0893BAD8;
    return;
L_0893BAD8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-6600)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6596)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0893BAFCu);
    ctx.gpr[11] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 517u, 0x0887B1ACu>(ctx, &aot_mem) && ctx.pc == 0x0893BAFCu) goto L_0893BAFC;
    return;
L_0893BAFC:
    ctx.gpr[6] = (17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (17164u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0893BB18u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0893BB18u) goto L_0893BB18;
    return;
L_0893BB18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893BC0C;
      }
      goto L_0893BB20;
    }
L_0893BB20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-6600)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0893BBB4;
      }
      goto L_0893BB2C;
    }
L_0893BB2C:
    ctx.gpr[16] = (2269u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-5136));
      if (branch_taken) {
          goto L_0893BB64;
      }
      goto L_0893BB38;
    }
L_0893BB38:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0893BB44u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0893BB44u) goto L_0893BB44;
    return;
L_0893BB44:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893BB5C;
      }
      goto L_0893BB50;
    }
L_0893BB50:
    ctx.gpr[31] = (0x0893BB58u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0893BB58u) goto L_0893BB58;
    return;
L_0893BB58:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0893BB5C;
L_0893BB5C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_0893BB64;
L_0893BB64:
    ctx.gpr[31] = (0x0893BB6Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0893BB6Cu) goto L_0893BB6C;
    return;
L_0893BB6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-6600)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0893BB90u);
    ctx.gpr[11] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 517u, 0x0887B1ACu>(ctx, &aot_mem) && ctx.pc == 0x0893BB90u) goto L_0893BB90;
    return;
L_0893BB90:
    ctx.gpr[6] = (17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (17164u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0893BBACu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0893BBACu) goto L_0893BBAC;
    return;
L_0893BBAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893BC0C;
      }
      goto L_0893BBB4;
    }
L_0893BBB4:
    ctx.gpr[5] = (17264u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_0893BBEC;
      }
      goto L_0893BBC0;
    }
L_0893BBC0:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0893BBCCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0893BBCCu) goto L_0893BBCC;
    return;
L_0893BBCC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893BBE4;
      }
      goto L_0893BBD8;
    }
L_0893BBD8:
    ctx.gpr[31] = (0x0893BBE0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0893BBE0u) goto L_0893BBE0;
    return;
L_0893BBE0:
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
    goto L_0893BBE4;
L_0893BBE4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0893BBEC;
L_0893BBEC:
    ctx.gpr[31] = (0x0893BBF4u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0893BBF4u) goto L_0893BBF4;
    return;
L_0893BBF4:
    ctx.gpr[6] = (17194u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x0893BC0Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0893BC0Cu) goto L_0893BC0C;
    return;
L_0893BC0C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893BC38:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-138));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(28) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893BC6C;
      }
      goto L_0893BC4C;
    }
L_0893BC4C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(30416)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893BC64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0893BC70;
      }
      goto L_0893BC6C;
    }
L_0893BC6C:
    ctx.gpr[2] = (0u | 1u);
    goto L_0893BC70;
L_0893BC70:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893BC78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[30]);
    ctx.gpr[23] = (2230u << 16u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[30] = (ctx.gpr[7] << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-6608));
    ctx.gpr[17] = (ctx.gpr[6] & 65535u);
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[30]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    ctx.gpr[31] = (0x0893BCD0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 404u, 0x08AED66Cu>(ctx, &aot_mem) && ctx.pc == 0x0893BCD0u) goto L_0893BCD0;
    return;
L_0893BCD0:
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    ctx.gpr[22] = (2230u << 16u);
    ctx.gpr[20] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[19] = (2230u << 16u);
      if (branch_taken) {
          goto L_0893BD0C;
      }
      goto L_0893BCE8;
    }
L_0893BCE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-6616)));
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893BD0C;
      }
      goto L_0893BCFC;
    }
L_0893BCFC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-6612)));
    ctx.gpr[6] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893BDBC;
      }
      goto L_0893BD0C;
    }
L_0893BD0C:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(ctx.gpr[9]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
        goto L_0893BD58;
    }
    goto L_0893BD24;
L_0893BD24:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0893BD30u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0893BD30u) goto L_0893BD30;
    return;
L_0893BD30:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893BD48;
      }
      goto L_0893BD3C;
    }
L_0893BD3C:
    ctx.gpr[31] = (0x0893BD44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0893BD44u) goto L_0893BD44;
    return;
L_0893BD44:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0893BD48;
L_0893BD48:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    goto L_0893BD58;
L_0893BD58:
    ctx.gpr[16] = (ctx.gpr[9] | 0u);
    ctx.gpr[17] = (ctx.gpr[8] | 0u);
    ctx.gpr[31] = (0x0893BD68u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0893BD68u) goto L_0893BD68;
    return;
L_0893BD68:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0893BD8Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 495u, 0x0887AFFCu>(ctx, &aot_mem) && ctx.pc == 0x0893BD8Cu) goto L_0893BD8C;
    return;
L_0893BD8C:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0893BD98u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 411u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x0893BD98u) goto L_0893BD98;
    return;
L_0893BD98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-6616), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-6612), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6600), ctx.gpr[16]);
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6596), ctx.gpr[30]);
      if (branch_taken) {
          goto L_0893BDE8;
      }
      goto L_0893BDBC;
    }
L_0893BDBC:
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(501) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-500));
      if (branch_taken) {
          goto L_0893BDE8;
      }
      goto L_0893BDCC;
    }
L_0893BDCC:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-6616), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-6612), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6600), ctx.gpr[9]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6596), ctx.gpr[30]);
    goto L_0893BDE8;
L_0893BDE8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893BE18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11856));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_0893BE78;
      }
      goto L_0893BE50;
    }
L_0893BE50:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(156));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(156), ctx.gpr[4]);
    ctx.gpr[31] = (0x0893BE60u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x0893BE60u) goto L_0893BE60;
    return;
L_0893BE60:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893BE80;
      }
      goto L_0893BE70;
    }
L_0893BE70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893BE84;
      }
      goto L_0893BE78;
    }
L_0893BE78:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(156), 0u);
      if (branch_taken) {
          goto L_0893BE84;
      }
      goto L_0893BE80;
    }
L_0893BE80:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    goto L_0893BE84;
L_0893BE84:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893BE94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11856));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(214), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(212), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0893BEF8;
      }
      goto L_0893BED4;
    }
L_0893BED4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893BEF4;
      }
      goto L_0893BEE0;
    }
L_0893BEE0:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_0893BEF4;
      }
      goto L_0893BEE8;
    }
L_0893BEE8:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0893BEF4u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x0893BEF4u) goto L_0893BEF4;
    return;
L_0893BEF4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), 0u);
    goto L_0893BEF8;
L_0893BEF8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893BF08:
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11856));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893BF30:
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11856));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.gpr[2] = (ctx.gpr[4] ^ 5u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893BF60:
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (2275u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11856));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 10u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 4u, 0x0893C034u>(ctx, &aot_mem); return;
      }
      goto L_0893BF90;
    }
L_0893BF90:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 9u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 1u, 0x0893C004u>(ctx, &aot_mem); return;
      }
      goto L_0893BF98;
    }
L_0893BF98:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 8u);
      if (branch_taken) {
          goto L_0893BFD4;
      }
      goto L_0893BFA0;
    }
L_0893BFA0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 7u, 0x0893C064u>(ctx, &aot_mem); return;
      }
      goto L_0893BFA8;
    }
L_0893BFA8:
    ctx.gpr[6] = (2276u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-30088)));
    ctx.gpr[4] = (ctx.gpr[4] << (ctx.gpr[5] & 31u));
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893BFCC;
      }
      goto L_0893BFC4;
    }
L_0893BFC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 7u, 0x0893C064u>(ctx, &aot_mem); return;
      }
      goto L_0893BFCC;
    }
L_0893BFCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 8u, 0x0893C068u>(ctx, &aot_mem); return;
      }
      goto L_0893BFD4;
    }
L_0893BFD4:
    ctx.gpr[4] = (2276u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30088));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[6] << (ctx.gpr[5] & 31u));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893BFFC;
      }
      goto L_0893BFF4;
    }
L_0893BFF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 7u, 0x0893C064u>(ctx, &aot_mem); return;
      }
      goto L_0893BFFC;
    }
L_0893BFFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 8u, 0x0893C068u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 1u, 0x0893C004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0077(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0077_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_77(Runtime &runtime) {
    runtime.register_generated_unit(77u, 0x08938000u, 16384u, &recomp_unit_0077, &recomp_unit_0077_entry);
    runtime.register_function(0x08938000u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938060u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938078u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089380ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089380B8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089380C0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089380E0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089380E4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089380FCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893811Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938164u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938178u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893818Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938194u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893819Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089381B4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089381BCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089381C8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089381FCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938244u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938254u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938260u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938274u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938284u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089382A4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089382B4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089382C0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089382CCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089382D4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089382D8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089382E4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089382ECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089382F4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938300u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938308u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938310u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938328u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938338u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938344u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938350u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938358u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893835Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938364u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938370u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938378u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938384u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938390u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893839Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089383A0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089383B0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089383BCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089383D0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089383DCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089383ECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938400u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938410u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893841Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938428u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938434u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938440u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893844Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938454u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938458u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938464u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893847Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938488u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938490u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893849Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089384A8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089384B0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089384C0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089384CCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089384D4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089384E4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089384F8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938508u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938514u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938520u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938538u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938544u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938550u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938558u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938564u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938570u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089385A0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089385C8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089385D4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938600u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938628u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893863Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938644u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893864Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938658u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938660u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938668u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938670u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938680u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938688u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938698u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089386A0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089386B0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089386B8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089386D8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089386ECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938704u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938718u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938738u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938740u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938748u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938750u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938758u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938760u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938768u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938770u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938778u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938788u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893879Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089387A4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089387ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089387BCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089387D0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089387D8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089387E0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089387F0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938820u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938828u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938830u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893883Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893884Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089388BCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089388D8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089388F4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938910u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893892Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938948u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893895Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938964u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893896Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938974u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893897Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938984u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893898Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938994u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089389A4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089389D8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089389ECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A1Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A4Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A7Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938AACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938AB4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938ABCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938AC4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938ACCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938AF4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938AFCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938B04u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938B20u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938B24u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938B58u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938BACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938BC8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938BE4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C00u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C04u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C30u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C38u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C40u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C50u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C84u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C98u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938CC8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938CF8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938D28u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938D58u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938D60u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938D88u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938D90u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938D98u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938DB4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938DB8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938DECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E2Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E48u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E50u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E6Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E74u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E90u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E98u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938EB4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938EBCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938ED8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938EE0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938EFCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938F3Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938F44u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938F60u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938F6Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938F74u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938F7Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938F84u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938F8Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938F94u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938F9Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938FA4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938FB4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938FE0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938FECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939000u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893900Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893903Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939058u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893906Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939074u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089390A8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089390D8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089390E0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089390F0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089390FCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939104u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893910Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939128u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939138u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939144u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893914Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939150u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939180u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089391F8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893920Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939220u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939228u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939244u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893924Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939250u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939268u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939280u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939288u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939290u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089392A0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089392A8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089392B0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089392C0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089392D4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893933Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939358u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939374u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939390u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089393ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089393C8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089393F4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089393FCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939404u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893940Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939414u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893941Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939424u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893942Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939438u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939468u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939490u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939498u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089394A0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089394B4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089394B8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089394E4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939548u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939558u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939588u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089395B4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089395BCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089395C4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089395D8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089395DCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893960Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893965Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893968Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089396A8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089396B0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089396B8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089396C4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089396D0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089396E4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089396F0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089396F8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939728u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939758u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939780u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939788u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939790u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089397A4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089397C4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089397C8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089397F8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939854u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089398A0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089398C0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089398C8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089398D0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089398DCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089398E8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089398F4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089398FCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893992Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939930u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939964u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939988u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939990u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939A40u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939A54u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939A78u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939AB4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939B04u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939B20u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939B3Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939B44u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939B4Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939B58u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939B64u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939B70u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939B78u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939BA8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939BD8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939C00u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939C08u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939C10u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939C24u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939C44u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939C48u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939C78u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939CC4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939CF4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939D10u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939D18u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939D20u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939D28u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939D34u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939D3Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939D6Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939D9Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939DC4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939DCCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939DD4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939DE8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939E08u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939E0Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939E3Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939E88u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939EACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939EC4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939ECCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939ED0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939EDCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939EE4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939EFCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939F04u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939F08u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939F1Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939F4Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939F7Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939F94u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939F9Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939FC0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939FC8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939FD4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939FDCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939FF4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939FFCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A00Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A014u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A01Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A024u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A02Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A048u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A050u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A05Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A078u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A090u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A09Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A0B8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A128u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A12Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A134u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A13Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A148u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A164u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A1D4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A1D8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A1E0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A1E8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A1F8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A2B4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A2CCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A2E8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A2F0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A2F8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A308u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A310u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A338u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A344u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A348u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A354u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A360u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A370u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A394u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A39Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A3A8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A3B4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A3B8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A3C0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A3C8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A3D0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A3E0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A404u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A40Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A418u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A424u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A428u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A430u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A438u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A43Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A448u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A454u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A464u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A488u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A490u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A49Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A4A8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A4ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A4B4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A4BCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A4C4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A4D4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A4F8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A500u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A50Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A518u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A51Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A524u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A52Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A530u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A538u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A540u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A558u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A568u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A570u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A578u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A580u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A58Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A598u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A5A4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A5ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A5BCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A5CCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A5D8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A600u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A608u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A610u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A620u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A624u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A62Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A640u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A648u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A658u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A660u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A668u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A670u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A67Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A688u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A694u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A69Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A6ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A6BCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A6C8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A700u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A704u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A714u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A724u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A72Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A734u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A744u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A748u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A750u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A75Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A764u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A76Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A774u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A77Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A78Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A794u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A79Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A7A4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A7B8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A7C4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A7D8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A7E4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A7ECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A7FCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A80Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A820u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A830u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A83Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A844u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A864u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A880u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A88Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A8A8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A8B4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A8C0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A940u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A954u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A968u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A970u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A9B4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A9D8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A9ECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A9F4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A9FCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AA04u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AA30u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AA40u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AA68u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AA78u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AA8Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AA98u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AAA4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AAB0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AABCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AAC8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AAD4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AAE0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AAECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AAF8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AB04u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AB10u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AB1Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AB28u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AB34u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AB40u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AB4Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AB58u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AB64u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AB70u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AB7Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AB88u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AB90u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AB98u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ABD0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AC18u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AC2Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AC4Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AC9Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ACB4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ACBCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ACC0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ACCCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ACE4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ACECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ACFCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AD0Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AD1Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AD28u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AD38u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AD40u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AD4Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AD58u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AD80u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AD88u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AD90u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ADACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ADC0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ADCCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ADE0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ADF4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AE28u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AE54u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AE60u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AE68u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AE74u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AE7Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AE80u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AE94u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AE9Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AEA8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AEB8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AEC0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AEC4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AEE0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AF28u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AF5Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AF74u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AF7Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AF80u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AF8Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AF98u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AFA4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AFBCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AFC4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AFD4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AFE8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AFF0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AFF8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B014u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B020u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B054u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B0A0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B0D0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B0F0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B0F8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B100u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B10Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B118u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B128u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B12Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B13Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B148u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B150u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B15Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B164u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B194u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B1C4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B1ECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B1F4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B1F8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B20Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B214u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B21Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B228u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B244u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B260u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B290u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B2ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B2B8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B2C0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B2C8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B2D4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B2DCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B394u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B3A8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B3B0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B3B8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B3E4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B3FCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B404u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B41Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B430u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B448u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B45Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B49Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B4B0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B4D4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B4E8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B4F0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B4F8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B500u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B508u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B510u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B518u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B51Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B524u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B540u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B558u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B598u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B5B0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B5D4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B5ECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B5F4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B5FCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B604u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B60Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B614u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B61Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B620u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B628u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B6C4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B6CCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B6E0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B6F0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B700u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B714u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B724u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B734u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B758u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B768u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B770u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B780u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B7ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B7B0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B7BCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B7C8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B7CCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B7E0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B7F8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B838u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B844u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B84Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B85Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B874u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B88Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B894u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B8B0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B8D8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B8E8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B908u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B918u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B920u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B928u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B930u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B94Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B97Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B9C0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B9D0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B9E0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B9F8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BA00u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BA08u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BA10u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BA18u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BA20u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BA3Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BA44u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BA4Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BA64u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BA6Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BA78u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BA98u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BAA4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BAB0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BABCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BAC4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BAC8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BAD0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BAD8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BAFCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BB18u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BB20u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BB2Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BB38u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BB44u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BB50u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BB58u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BB5Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BB64u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BB6Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BB90u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BBACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BBB4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BBC0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BBCCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BBD8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BBE0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BBE4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BBECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BBF4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BC0Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BC38u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BC4Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BC64u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BC6Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BC70u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BC78u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BCD0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BCE8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BCFCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BD0Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BD24u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BD30u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BD3Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BD44u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BD48u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BD58u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BD68u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BD8Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BD98u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BDBCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BDCCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BDE8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BE18u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BE50u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BE60u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BE70u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BE78u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BE80u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BE84u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BE94u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BED4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BEE0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BEE8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BEF4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BEF8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BF08u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BF30u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BF60u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BF90u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BF98u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BFA0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BFA8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BFC4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BFCCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BFD4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BFF4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BFFCu, &recomp_unit_0077, "recomp_unit_0077");
}
} // namespace psprecomp
