#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0098[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0,
    0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0,
    10, 0, 0, 11, 0, 0, 0, 12, 0, 0, 13, 0, 0, 14, 0, 15, 16, 0, 0, 17, 0, 0, 18, 0, 0, 0, 19, 0, 20, 0, 21, 0,
    0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 26, 0, 0,
    27, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 32, 0, 0, 0, 33, 0, 0, 34, 0, 35, 0, 0, 36, 0,
    0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 40, 0, 41, 0, 42, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 0, 45,
    0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0,
    0, 0, 50, 0, 51, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 55, 0, 0, 0, 56, 0, 0, 0, 57, 58, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0,
    0, 62, 0, 0, 63, 0, 64, 0, 65, 0, 66, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 69, 0, 70, 0, 71, 72, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 75, 0, 76, 77, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 79, 0, 0, 80, 0, 81, 0, 82,
    0, 83, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 87, 0, 88, 0, 89, 90, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 91, 0, 92, 0, 93, 0, 94, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 99, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0,
    0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 106, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 111, 0,
    0, 112, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 115, 0, 0, 116, 0, 117, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 121, 0,
    122, 0, 123, 0, 124, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 130, 0,
    0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 135, 0, 0, 0, 136, 0, 137, 0, 0,
    0, 0, 0, 0, 0, 0, 138, 0, 139, 0, 140, 0, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 145,
    0, 0, 146, 0, 147, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 150, 0, 151, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0,
    0, 161, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 165, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    168, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 172, 0, 0, 0, 0, 0,
    0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0,
    178, 0, 0, 0, 0, 179, 0, 180, 0, 181, 0, 182, 0, 183, 0, 184, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 187, 188, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 195, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0,
    0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0,
    215, 0, 0, 0, 216, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 223, 0, 224, 0, 225, 0,
    0, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 228, 0, 0, 0, 0, 0, 0, 229, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 232, 0, 233,
    0, 0, 234, 0, 235, 0, 236, 0, 237, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 240, 0, 0, 0, 0, 0, 241, 0,
    242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 244, 0, 0, 245, 0, 246, 0, 247, 0, 0, 0,
    248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 251, 0, 252, 0, 253, 0, 0, 0, 254, 0, 0,
    0, 0, 0, 0, 255, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 258, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261,
    0, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 267, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 281, 0, 0, 0, 0,
    0, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 285, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 288, 0,
    0, 0, 0, 0, 289, 0, 290, 0, 0, 0, 291, 0, 0, 292, 0, 0, 293, 0, 294, 295, 0, 296, 0, 0, 0, 0, 297, 0, 298, 0, 0, 299,
    0, 0, 300, 0, 0, 301, 0, 0, 302, 0, 303, 304, 0, 305, 0, 0, 0, 0, 306, 0, 307, 0, 0, 308, 0, 0, 309, 0, 0, 310, 0, 0,
    311, 0, 312, 313, 0, 314, 0, 0, 0, 0, 315, 0, 316, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 319, 0, 320, 0, 321, 0, 0, 322, 0,
    323, 0, 324, 0, 0, 325, 0, 326, 0, 0, 0, 0, 0, 327, 0, 328, 0, 0, 0, 0, 329, 0, 0, 330, 0, 331, 0, 0, 0, 0, 0, 332,
    0, 333, 0, 0, 0, 0, 334, 0, 0, 335, 0, 0, 0, 0, 0, 0, 336, 0, 337, 0, 0, 338, 0, 0, 0, 0, 339, 0, 340, 0, 0, 0,
    0, 0, 0, 341, 0, 342, 0, 343, 0, 344, 0, 0, 345, 0, 0, 0, 0, 346, 0, 347, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0,
    350, 0, 0, 0, 0, 0, 351, 0, 352, 0, 0, 0, 0, 0, 353, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 356, 0,
    0, 357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 360, 0, 0, 0, 361, 0, 0, 362,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 366, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0,
    369, 0, 370, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 372, 0, 373, 0, 0, 0, 0, 0, 0, 374, 0, 375, 0, 376, 0, 377,
    0, 378, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 383, 0, 384,
    0, 385, 0, 386, 0, 387, 0, 0, 0, 0, 0, 388, 0, 389, 0, 390, 0, 0, 0, 0, 0, 391, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0,
    393, 0, 394, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 399, 0, 400, 0, 401, 0, 402, 0, 403, 0, 404, 0, 405, 0, 0, 406, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 408,
    0, 409, 0, 0, 0, 0, 0, 0, 410, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0,
    0, 416, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 421, 0, 0, 422, 0, 0, 0, 0,
    0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 428, 0, 0, 429, 0, 0, 430, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 433,
    0, 0, 0, 0, 0, 0, 0, 434, 0, 435, 0, 436, 0, 0, 0, 0, 0, 437, 0, 438, 0, 0, 0, 0, 0, 439, 0, 440, 0, 0, 0, 0,
    0, 0, 0, 441, 0, 442, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 445, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 447, 0, 0, 0, 448, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 451, 0, 0, 452, 0,
    0, 453, 0, 0, 454, 0, 0, 455, 0, 0, 456, 0, 0, 0, 0, 457, 0, 0, 0, 458, 0, 0, 459, 0, 460, 0, 0, 0, 461, 0, 462, 0,
    463, 0, 464, 0, 0, 0, 0, 465, 0, 0, 0, 0, 466, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468,
    0, 0, 0, 469, 0, 470, 0, 0, 471, 0, 0, 0, 472, 0, 473, 0, 474, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 478, 0, 0, 479, 0, 0,
    0, 480, 0, 0, 0, 481, 0, 482, 0, 483, 0, 0, 0, 484, 0, 0, 0, 485, 0, 0, 0, 486, 0, 0, 487, 0, 0, 0, 488, 0, 0, 489,
    0, 490, 0, 491, 0, 0, 0, 0, 0, 0, 492, 0, 493, 0, 494, 0, 495, 0, 496, 0, 497, 0, 0, 0, 0, 0, 498, 0, 499, 0, 0, 0,
    0, 500, 0, 0, 0, 0, 0, 0, 501, 0, 0, 502, 0, 0, 503, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 505, 0, 506, 0, 0,
    0, 0, 0, 0, 0, 507, 0, 508, 0, 0, 0, 509, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 512, 0, 513, 0, 0, 0, 0, 0,
    514, 0, 515, 0, 0, 0, 0, 0, 0, 516, 0, 0, 517, 0, 0, 518, 0, 0, 519, 0, 520, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 522,
    0, 523, 0, 524, 0, 0, 525, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 528, 0, 0, 529, 0, 0, 0, 0, 0,
    0, 0, 530, 0, 0, 531, 0, 532, 0, 0, 0, 533, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    536, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 538, 0, 0, 539, 0, 540, 0, 541, 0, 542, 543, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 544, 0, 545, 0, 546, 0, 547, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 550, 0, 551, 0, 552, 553,
    0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 555, 0, 0, 556, 0, 557, 0, 558, 0, 559, 560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    561, 0, 0, 0, 562, 0, 563, 0, 564, 0, 565, 566, 0, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 568, 0, 569, 0, 570, 571, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 573, 0, 0,
    0, 0, 574, 0, 0, 0, 575, 576, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 579,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 581, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 583, 0, 0, 0, 0, 584, 0, 0, 0, 0, 585, 0, 0, 0, 0, 586, 0, 587, 0, 588, 0, 0, 0, 0, 0, 0, 589, 0, 590, 0,
    591, 0, 0, 592, 0, 593, 0, 594, 0, 0, 0, 0, 0, 0, 0, 595, 0, 596, 0, 0, 0, 0, 0, 597, 0, 598, 0, 0, 599, 0, 0, 600,
    0, 0, 601, 0, 0, 0, 602, 0, 603, 0, 604, 0, 0, 0, 0, 605, 0, 606, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 607, 0, 608, 0, 0, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 610, 0, 0, 0, 611, 0, 0, 0, 0, 612, 0, 613, 0, 614,
    0, 0, 0, 0, 0, 0, 615, 0, 616, 0, 617, 0, 0, 618, 0, 619, 0, 620, 0, 0, 0, 0, 0, 0, 0, 621, 0, 622, 0, 0, 0, 0,
    0, 623, 0, 624, 0, 0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    627, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 630, 0, 0, 631,
    0, 0, 0, 632, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0, 634, 0, 0, 0, 0, 635, 0, 636, 0, 637, 0, 0, 0, 0, 0, 0, 0, 638,
    0, 639, 0, 640, 0, 641, 0, 0, 0, 0, 0, 0, 0, 642, 0, 0, 0, 0, 0, 0, 0, 0, 0, 643, 0, 0, 644, 0, 0, 0, 645, 0,
    0, 0, 0, 646, 0, 647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 649,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 651, 0, 0, 652, 0, 653, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 654, 0, 0, 655, 0, 0, 0, 0, 0, 0, 0, 656, 0, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 658, 0, 0, 0, 659,
    0, 660, 0, 661, 0, 0, 0, 0, 0, 0, 662, 0, 663, 0, 664, 0, 0, 665, 0, 666, 0, 667, 0, 0, 0, 0, 0, 0, 0, 668, 0, 669,
    0, 0, 0, 0, 0, 670, 0, 671, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    672, 0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 675, 0, 676, 0, 677,
    0, 678, 0, 679, 0, 680, 0, 681, 0, 0, 682, 0, 0, 0, 683, 0, 0, 0, 0, 0, 0, 684, 0, 685, 0, 0, 0, 0, 0, 0, 686, 687,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 689, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 690, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 691, 0, 0, 692, 0, 0, 693, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 694, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 695, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 696, 0, 0, 697, 0, 0, 698, 0, 0, 0, 0, 0, 0, 0, 0, 699, 0, 0, 0, 0, 0,
    700, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 701, 0, 0, 0, 0, 0, 0, 0, 702, 0, 0, 703, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 704, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 706,
    0, 0, 707, 0, 0, 708, 0, 0, 0, 709, 0, 0, 0, 0, 0, 0, 0, 710, 0, 0, 0, 0, 0, 0, 0, 0, 711, 0, 0, 0, 0, 0,
    0, 0, 712, 0, 713, 0, 714, 0, 0, 0, 0, 0, 715, 0, 716, 0, 0, 0, 0, 0, 717, 0, 718, 0, 0, 0, 0, 0, 0, 0, 719, 0,
    720, 0, 0, 0, 721, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 722, 0, 0, 0, 0, 0, 0, 723, 0, 724, 0, 725, 0, 0, 0, 0,
    0, 0, 726, 0, 0, 727, 0, 728, 0, 729, 0, 0, 0, 0, 0, 0, 730, 0, 0, 0, 0, 0, 0, 731, 0, 0, 0, 0, 0, 732, 0, 733,
    0, 0, 734, 0, 735, 0, 736, 0, 737, 0, 738, 0, 739, 740, 0, 741, 0, 742, 0, 743, 0, 0, 0, 0, 0, 0, 0, 0, 744, 0, 745, 0,
    746, 0, 0, 747, 0, 748, 0, 749, 0, 0, 0, 0, 0, 750, 0, 0, 0, 0, 0, 751, 0, 0, 0, 0, 0, 0, 0, 752, 0, 0, 0, 0,
    0, 753, 0, 0, 0, 0, 754, 0, 0, 755, 0, 0, 0, 0, 0, 756, 0, 0, 0, 0, 0, 757, 0, 0, 0, 0, 0, 0, 0, 758, 0, 0,
    0, 0, 0, 759, 0, 0, 0, 760, 0, 0, 761, 0, 0, 0, 0, 0, 0, 0, 0, 762, 0, 763, 0, 0, 0, 0, 0, 764, 0, 0, 0, 0,
    0, 765, 0, 0, 0, 0, 0, 0, 0, 766, 0, 0, 767, 0, 768, 0, 769, 0, 0, 0, 0, 0, 0, 770, 0, 771, 0, 772, 0, 773, 0, 0,
    0, 0, 0, 0, 774, 0, 0, 0, 0, 0, 0, 775, 0, 0, 0, 0, 0, 776, 0, 0, 0, 777, 778, 0, 0, 0, 779, 780, 0, 781, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 782, 0, 783, 0, 0, 0, 0, 0, 0, 784, 0, 0, 0,
    0, 0, 785, 0, 786, 0, 787, 0, 788, 0, 789, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 790, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 791, 792, 0, 0, 0, 793, 0, 794, 0, 0, 0, 795, 0, 796, 0, 797, 0, 0, 0, 798, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 799, 0, 0, 0, 800, 801, 0, 802, 0, 0, 0, 803, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 804, 0, 0, 0, 0, 0, 0, 0, 805, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 806, 0, 0, 807, 0, 0, 808, 0, 809, 810, 0, 811,
};
void recomp_unit_0098_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0898C000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0098[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0898C000;
    case 2u: goto L_0898C018;
    case 3u: goto L_0898C03C;
    case 4u: goto L_0898C04C;
    case 5u: goto L_0898C070;
    case 6u: goto L_0898C08C;
    case 7u: goto L_0898C09C;
    case 8u: goto L_0898C0D4;
    case 9u: goto L_0898C0F0;
    case 10u: goto L_0898C100;
    case 11u: goto L_0898C10C;
    case 12u: goto L_0898C11C;
    case 13u: goto L_0898C128;
    case 14u: goto L_0898C134;
    case 15u: goto L_0898C13C;
    case 16u: goto L_0898C140;
    case 17u: goto L_0898C14C;
    case 18u: goto L_0898C158;
    case 19u: goto L_0898C168;
    case 20u: goto L_0898C170;
    case 21u: goto L_0898C178;
    case 22u: goto L_0898C194;
    case 23u: goto L_0898C19C;
    case 24u: goto L_0898C1D8;
    case 25u: goto L_0898C1E0;
    case 26u: goto L_0898C1F4;
    case 27u: goto L_0898C200;
    case 28u: goto L_0898C20C;
    case 29u: goto L_0898C21C;
    case 30u: goto L_0898C230;
    case 31u: goto L_0898C244;
    case 32u: goto L_0898C248;
    case 33u: goto L_0898C258;
    case 34u: goto L_0898C264;
    case 35u: goto L_0898C26C;
    case 36u: goto L_0898C278;
    case 37u: goto L_0898C284;
    case 38u: goto L_0898C29C;
    case 39u: goto L_0898C2AC;
    case 40u: goto L_0898C2BC;
    case 41u: goto L_0898C2C4;
    case 42u: goto L_0898C2CC;
    case 43u: goto L_0898C2D8;
    case 44u: goto L_0898C2E0;
    case 45u: goto L_0898C2FC;
    case 46u: goto L_0898C318;
    case 47u: goto L_0898C334;
    case 48u: goto L_0898C350;
    case 49u: goto L_0898C36C;
    case 50u: goto L_0898C388;
    case 51u: goto L_0898C390;
    case 52u: goto L_0898C398;
    case 53u: goto L_0898C3AC;
    case 54u: goto L_0898C3BC;
    case 55u: goto L_0898C3C4;
    case 56u: goto L_0898C3D4;
    case 57u: goto L_0898C3E4;
    case 58u: goto L_0898C3E8;
    case 59u: goto L_0898C410;
    case 60u: goto L_0898C438;
    case 61u: goto L_0898C46C;
    case 62u: goto L_0898C484;
    case 63u: goto L_0898C490;
    case 64u: goto L_0898C498;
    case 65u: goto L_0898C4A0;
    case 66u: goto L_0898C4A8;
    case 67u: goto L_0898C4AC;
    case 68u: goto L_0898C4D4;
    case 69u: goto L_0898C4DC;
    case 70u: goto L_0898C4E4;
    case 71u: goto L_0898C4EC;
    case 72u: goto L_0898C4F0;
    case 73u: goto L_0898C518;
    case 74u: goto L_0898C520;
    case 75u: goto L_0898C528;
    case 76u: goto L_0898C530;
    case 77u: goto L_0898C534;
    case 78u: goto L_0898C558;
    case 79u: goto L_0898C560;
    case 80u: goto L_0898C56C;
    case 81u: goto L_0898C574;
    case 82u: goto L_0898C57C;
    case 83u: goto L_0898C584;
    case 84u: goto L_0898C588;
    case 85u: goto L_0898C5B8;
    case 86u: goto L_0898C5C8;
    case 87u: goto L_0898C5D0;
    case 88u: goto L_0898C5D8;
    case 89u: goto L_0898C5E0;
    case 90u: goto L_0898C5E4;
    case 91u: goto L_0898C60C;
    case 92u: goto L_0898C614;
    case 93u: goto L_0898C61C;
    case 94u: goto L_0898C624;
    case 95u: goto L_0898C628;
    case 96u: goto L_0898C654;
    case 97u: goto L_0898C69C;
    case 98u: goto L_0898C6B0;
    case 99u: goto L_0898C6C0;
    case 100u: goto L_0898C6C4;
    case 101u: goto L_0898C6E4;
    case 102u: goto L_0898C704;
    case 103u: goto L_0898C724;
    case 104u: goto L_0898C754;
    case 105u: goto L_0898C768;
    case 106u: goto L_0898C770;
    case 107u: goto L_0898C7B0;
    case 108u: goto L_0898C7C4;
    case 109u: goto L_0898C7D8;
    case 110u: goto L_0898C7E8;
    case 111u: goto L_0898C7F8;
    case 112u: goto L_0898C804;
    case 113u: goto L_0898C814;
    case 114u: goto L_0898C820;
    case 115u: goto L_0898C830;
    case 116u: goto L_0898C83C;
    case 117u: goto L_0898C844;
    case 118u: goto L_0898C84C;
    case 119u: goto L_0898C868;
    case 120u: goto L_0898C870;
    case 121u: goto L_0898C878;
    case 122u: goto L_0898C880;
    case 123u: goto L_0898C888;
    case 124u: goto L_0898C890;
    case 125u: goto L_0898C8A8;
    case 126u: goto L_0898C8B0;
    case 127u: goto L_0898C8C4;
    case 128u: goto L_0898C8E0;
    case 129u: goto L_0898C8EC;
    case 130u: goto L_0898C8F8;
    case 131u: goto L_0898C914;
    case 132u: goto L_0898C92C;
    case 133u: goto L_0898C934;
    case 134u: goto L_0898C954;
    case 135u: goto L_0898C95C;
    case 136u: goto L_0898C96C;
    case 137u: goto L_0898C974;
    case 138u: goto L_0898C998;
    case 139u: goto L_0898C9A0;
    case 140u: goto L_0898C9A8;
    case 141u: goto L_0898C9C0;
    case 142u: goto L_0898C9C8;
    case 143u: goto L_0898C9E4;
    case 144u: goto L_0898C9F0;
    case 145u: goto L_0898C9FC;
    case 146u: goto L_0898CA08;
    case 147u: goto L_0898CA10;
    case 148u: goto L_0898CA18;
    case 149u: goto L_0898CA3C;
    case 150u: goto L_0898CA44;
    case 151u: goto L_0898CA4C;
    case 152u: goto L_0898CA58;
    case 153u: goto L_0898CA60;
    case 154u: goto L_0898CA94;
    case 155u: goto L_0898CA9C;
    case 156u: goto L_0898CAA8;
    case 157u: goto L_0898CAC8;
    case 158u: goto L_0898CAD4;
    case 159u: goto L_0898CADC;
    case 160u: goto L_0898CAEC;
    case 161u: goto L_0898CB04;
    case 162u: goto L_0898CB0C;
    case 163u: goto L_0898CB20;
    case 164u: goto L_0898CB30;
    case 165u: goto L_0898CB38;
    case 166u: goto L_0898CB40;
    case 167u: goto L_0898CB48;
    case 168u: goto L_0898CB80;
    case 169u: goto L_0898CB88;
    case 170u: goto L_0898CBCC;
    case 171u: goto L_0898CBE0;
    case 172u: goto L_0898CBE8;
    case 173u: goto L_0898CC04;
    case 174u: goto L_0898CC20;
    case 175u: goto L_0898CC3C;
    case 176u: goto L_0898CC54;
    case 177u: goto L_0898CC6C;
    case 178u: goto L_0898CC80;
    case 179u: goto L_0898CC94;
    case 180u: goto L_0898CC9C;
    case 181u: goto L_0898CCA4;
    case 182u: goto L_0898CCAC;
    case 183u: goto L_0898CCB4;
    case 184u: goto L_0898CCBC;
    case 185u: goto L_0898CCC4;
    case 186u: goto L_0898CCD8;
    case 187u: goto L_0898CCE8;
    case 188u: goto L_0898CCEC;
    case 189u: goto L_0898CD24;
    case 190u: goto L_0898CD50;
    case 191u: goto L_0898CD8C;
    case 192u: goto L_0898CDB4;
    case 193u: goto L_0898CDC8;
    case 194u: goto L_0898CDF0;
    case 195u: goto L_0898CDF8;
    case 196u: goto L_0898CE34;
    case 197u: goto L_0898CE60;
    case 198u: goto L_0898CE9C;
    case 199u: goto L_0898CEC4;
    case 200u: goto L_0898CED8;
    case 201u: goto L_0898CEE8;
    case 202u: goto L_0898CF04;
    case 203u: goto L_0898CF2C;
    case 204u: goto L_0898CF64;
    case 205u: goto L_0898CF90;
    case 206u: goto L_0898CFCC;
    case 207u: goto L_0898CFF4;
    case 208u: goto L_0898D020;
    case 209u: goto L_0898D04C;
    case 210u: goto L_0898D06C;
    case 211u: goto L_0898D0A0;
    case 212u: goto L_0898D0AC;
    case 213u: goto L_0898D0D4;
    case 214u: goto L_0898D0EC;
    case 215u: goto L_0898D100;
    case 216u: goto L_0898D110;
    case 217u: goto L_0898D114;
    case 218u: goto L_0898D14C;
    case 219u: goto L_0898D178;
    case 220u: goto L_0898D1B4;
    case 221u: goto L_0898D1D0;
    case 222u: goto L_0898D1E0;
    case 223u: goto L_0898D1E8;
    case 224u: goto L_0898D1F0;
    case 225u: goto L_0898D1F8;
    case 226u: goto L_0898D208;
    case 227u: goto L_0898D224;
    case 228u: goto L_0898D22C;
    case 229u: goto L_0898D248;
    case 230u: goto L_0898D250;
    case 231u: goto L_0898D26C;
    case 232u: goto L_0898D274;
    case 233u: goto L_0898D27C;
    case 234u: goto L_0898D288;
    case 235u: goto L_0898D290;
    case 236u: goto L_0898D298;
    case 237u: goto L_0898D2A0;
    case 238u: goto L_0898D2A8;
    case 239u: goto L_0898D2D8;
    case 240u: goto L_0898D2E0;
    case 241u: goto L_0898D2F8;
    case 242u: goto L_0898D300;
    case 243u: goto L_0898D348;
    case 244u: goto L_0898D354;
    case 245u: goto L_0898D360;
    case 246u: goto L_0898D368;
    case 247u: goto L_0898D370;
    case 248u: goto L_0898D380;
    case 249u: goto L_0898D39C;
    case 250u: goto L_0898D3CC;
    case 251u: goto L_0898D3D4;
    case 252u: goto L_0898D3DC;
    case 253u: goto L_0898D3E4;
    case 254u: goto L_0898D3F4;
    case 255u: goto L_0898D410;
    case 256u: goto L_0898D418;
    case 257u: goto L_0898D434;
    case 258u: goto L_0898D43C;
    case 259u: goto L_0898D444;
    case 260u: goto L_0898D454;
    case 261u: goto L_0898D47C;
    case 262u: goto L_0898D484;
    case 263u: goto L_0898D4A4;
    case 264u: goto L_0898D4E0;
    case 265u: goto L_0898D50C;
    case 266u: goto L_0898D548;
    case 267u: goto L_0898D554;
    case 268u: goto L_0898D560;
    case 269u: goto L_0898D5B4;
    case 270u: goto L_0898D5E0;
    case 271u: goto L_0898D61C;
    case 272u: goto L_0898D628;
    case 273u: goto L_0898D634;
    case 274u: goto L_0898D664;
    case 275u: goto L_0898D678;
    case 276u: goto L_0898D6A0;
    case 277u: goto L_0898D6F0;
    case 278u: goto L_0898D71C;
    case 279u: goto L_0898D754;
    case 280u: goto L_0898D760;
    case 281u: goto L_0898D76C;
    case 282u: goto L_0898D788;
    case 283u: goto L_0898D7A4;
    case 284u: goto L_0898D7B8;
    case 285u: goto L_0898D7C0;
    case 286u: goto L_0898D7C8;
    case 287u: goto L_0898D7F0;
    case 288u: goto L_0898D7F8;
    case 289u: goto L_0898D810;
    case 290u: goto L_0898D818;
    case 291u: goto L_0898D828;
    case 292u: goto L_0898D834;
    case 293u: goto L_0898D840;
    case 294u: goto L_0898D848;
    case 295u: goto L_0898D84C;
    case 296u: goto L_0898D854;
    case 297u: goto L_0898D868;
    case 298u: goto L_0898D870;
    case 299u: goto L_0898D87C;
    case 300u: goto L_0898D888;
    case 301u: goto L_0898D894;
    case 302u: goto L_0898D8A0;
    case 303u: goto L_0898D8A8;
    case 304u: goto L_0898D8AC;
    case 305u: goto L_0898D8B4;
    case 306u: goto L_0898D8C8;
    case 307u: goto L_0898D8D0;
    case 308u: goto L_0898D8DC;
    case 309u: goto L_0898D8E8;
    case 310u: goto L_0898D8F4;
    case 311u: goto L_0898D900;
    case 312u: goto L_0898D908;
    case 313u: goto L_0898D90C;
    case 314u: goto L_0898D914;
    case 315u: goto L_0898D928;
    case 316u: goto L_0898D930;
    case 317u: goto L_0898D93C;
    case 318u: goto L_0898D950;
    case 319u: goto L_0898D95C;
    case 320u: goto L_0898D964;
    case 321u: goto L_0898D96C;
    case 322u: goto L_0898D978;
    case 323u: goto L_0898D980;
    case 324u: goto L_0898D988;
    case 325u: goto L_0898D994;
    case 326u: goto L_0898D99C;
    case 327u: goto L_0898D9B4;
    case 328u: goto L_0898D9BC;
    case 329u: goto L_0898D9D0;
    case 330u: goto L_0898D9DC;
    case 331u: goto L_0898D9E4;
    case 332u: goto L_0898D9FC;
    case 333u: goto L_0898DA04;
    case 334u: goto L_0898DA18;
    case 335u: goto L_0898DA24;
    case 336u: goto L_0898DA40;
    case 337u: goto L_0898DA48;
    case 338u: goto L_0898DA54;
    case 339u: goto L_0898DA68;
    case 340u: goto L_0898DA70;
    case 341u: goto L_0898DA8C;
    case 342u: goto L_0898DA94;
    case 343u: goto L_0898DA9C;
    case 344u: goto L_0898DAA4;
    case 345u: goto L_0898DAB0;
    case 346u: goto L_0898DAC4;
    case 347u: goto L_0898DACC;
    case 348u: goto L_0898DAD4;
    case 349u: goto L_0898DAF8;
    case 350u: goto L_0898DB00;
    case 351u: goto L_0898DB18;
    case 352u: goto L_0898DB20;
    case 353u: goto L_0898DB38;
    case 354u: goto L_0898DB44;
    case 355u: goto L_0898DB64;
    case 356u: goto L_0898DB78;
    case 357u: goto L_0898DB84;
    case 358u: goto L_0898DBA4;
    case 359u: goto L_0898DBD8;
    case 360u: goto L_0898DBE0;
    case 361u: goto L_0898DBF0;
    case 362u: goto L_0898DBFC;
    case 363u: goto L_0898DC3C;
    case 364u: goto L_0898DC68;
    case 365u: goto L_0898DCA0;
    case 366u: goto L_0898DCAC;
    case 367u: goto L_0898DCB8;
    case 368u: goto L_0898DCEC;
    case 369u: goto L_0898DD00;
    case 370u: goto L_0898DD08;
    case 371u: goto L_0898DD24;
    case 372u: goto L_0898DD40;
    case 373u: goto L_0898DD48;
    case 374u: goto L_0898DD64;
    case 375u: goto L_0898DD6C;
    case 376u: goto L_0898DD74;
    case 377u: goto L_0898DD7C;
    case 378u: goto L_0898DD84;
    case 379u: goto L_0898DD8C;
    case 380u: goto L_0898DDB8;
    case 381u: goto L_0898DDC4;
    case 382u: goto L_0898DDEC;
    case 383u: goto L_0898DDF4;
    case 384u: goto L_0898DDFC;
    case 385u: goto L_0898DE04;
    case 386u: goto L_0898DE0C;
    case 387u: goto L_0898DE14;
    case 388u: goto L_0898DE2C;
    case 389u: goto L_0898DE34;
    case 390u: goto L_0898DE3C;
    case 391u: goto L_0898DE54;
    case 392u: goto L_0898DE5C;
    case 393u: goto L_0898DE80;
    case 394u: goto L_0898DE88;
    case 395u: goto L_0898DE98;
    case 396u: goto L_0898DEAC;
    case 397u: goto L_0898DEBC;
    case 398u: goto L_0898DEDC;
    case 399u: goto L_0898DF14;
    case 400u: goto L_0898DF1C;
    case 401u: goto L_0898DF24;
    case 402u: goto L_0898DF2C;
    case 403u: goto L_0898DF34;
    case 404u: goto L_0898DF3C;
    case 405u: goto L_0898DF44;
    case 406u: goto L_0898DF50;
    case 407u: goto L_0898DF60;
    case 408u: goto L_0898DF7C;
    case 409u: goto L_0898DF84;
    case 410u: goto L_0898DFA0;
    case 411u: goto L_0898DFA4;
    case 412u: goto L_0898DFD0;
    case 413u: goto L_0898E014;
    case 414u: goto L_0898E040;
    case 415u: goto L_0898E078;
    case 416u: goto L_0898E084;
    case 417u: goto L_0898E090;
    case 418u: goto L_0898E0EC;
    case 419u: goto L_0898E118;
    case 420u: goto L_0898E154;
    case 421u: goto L_0898E160;
    case 422u: goto L_0898E16C;
    case 423u: goto L_0898E190;
    case 424u: goto L_0898E1A8;
    case 425u: goto L_0898E1D4;
    case 426u: goto L_0898E22C;
    case 427u: goto L_0898E258;
    case 428u: goto L_0898E290;
    case 429u: goto L_0898E29C;
    case 430u: goto L_0898E2A8;
    case 431u: goto L_0898E2B8;
    case 432u: goto L_0898E2D8;
    case 433u: goto L_0898E2FC;
    case 434u: goto L_0898E31C;
    case 435u: goto L_0898E324;
    case 436u: goto L_0898E32C;
    case 437u: goto L_0898E344;
    case 438u: goto L_0898E34C;
    case 439u: goto L_0898E364;
    case 440u: goto L_0898E36C;
    case 441u: goto L_0898E38C;
    case 442u: goto L_0898E394;
    case 443u: goto L_0898E3A4;
    case 444u: goto L_0898E3B4;
    case 445u: goto L_0898E3C0;
    case 446u: goto L_0898E3CC;
    case 447u: goto L_0898E404;
    case 448u: goto L_0898E414;
    case 449u: goto L_0898E420;
    case 450u: goto L_0898E460;
    case 451u: goto L_0898E46C;
    case 452u: goto L_0898E478;
    case 453u: goto L_0898E484;
    case 454u: goto L_0898E490;
    case 455u: goto L_0898E49C;
    case 456u: goto L_0898E4A8;
    case 457u: goto L_0898E4BC;
    case 458u: goto L_0898E4CC;
    case 459u: goto L_0898E4D8;
    case 460u: goto L_0898E4E0;
    case 461u: goto L_0898E4F0;
    case 462u: goto L_0898E4F8;
    case 463u: goto L_0898E500;
    case 464u: goto L_0898E508;
    case 465u: goto L_0898E51C;
    case 466u: goto L_0898E530;
    case 467u: goto L_0898E540;
    case 468u: goto L_0898E57C;
    case 469u: goto L_0898E58C;
    case 470u: goto L_0898E594;
    case 471u: goto L_0898E5A0;
    case 472u: goto L_0898E5B0;
    case 473u: goto L_0898E5B8;
    case 474u: goto L_0898E5C0;
    case 475u: goto L_0898E5DC;
    case 476u: goto L_0898E624;
    case 477u: goto L_0898E65C;
    case 478u: goto L_0898E668;
    case 479u: goto L_0898E674;
    case 480u: goto L_0898E684;
    case 481u: goto L_0898E694;
    case 482u: goto L_0898E69C;
    case 483u: goto L_0898E6A4;
    case 484u: goto L_0898E6B4;
    case 485u: goto L_0898E6C4;
    case 486u: goto L_0898E6D4;
    case 487u: goto L_0898E6E0;
    case 488u: goto L_0898E6F0;
    case 489u: goto L_0898E6FC;
    case 490u: goto L_0898E704;
    case 491u: goto L_0898E70C;
    case 492u: goto L_0898E728;
    case 493u: goto L_0898E730;
    case 494u: goto L_0898E738;
    case 495u: goto L_0898E740;
    case 496u: goto L_0898E748;
    case 497u: goto L_0898E750;
    case 498u: goto L_0898E768;
    case 499u: goto L_0898E770;
    case 500u: goto L_0898E784;
    case 501u: goto L_0898E7A0;
    case 502u: goto L_0898E7AC;
    case 503u: goto L_0898E7B8;
    case 504u: goto L_0898E7D4;
    case 505u: goto L_0898E7EC;
    case 506u: goto L_0898E7F4;
    case 507u: goto L_0898E814;
    case 508u: goto L_0898E81C;
    case 509u: goto L_0898E82C;
    case 510u: goto L_0898E834;
    case 511u: goto L_0898E858;
    case 512u: goto L_0898E860;
    case 513u: goto L_0898E868;
    case 514u: goto L_0898E880;
    case 515u: goto L_0898E888;
    case 516u: goto L_0898E8A4;
    case 517u: goto L_0898E8B0;
    case 518u: goto L_0898E8BC;
    case 519u: goto L_0898E8C8;
    case 520u: goto L_0898E8D0;
    case 521u: goto L_0898E8D8;
    case 522u: goto L_0898E8FC;
    case 523u: goto L_0898E904;
    case 524u: goto L_0898E90C;
    case 525u: goto L_0898E918;
    case 526u: goto L_0898E920;
    case 527u: goto L_0898E954;
    case 528u: goto L_0898E95C;
    case 529u: goto L_0898E968;
    case 530u: goto L_0898E988;
    case 531u: goto L_0898E994;
    case 532u: goto L_0898E99C;
    case 533u: goto L_0898E9AC;
    case 534u: goto L_0898E9B0;
    case 535u: goto L_0898E9D8;
    case 536u: goto L_0898EA00;
    case 537u: goto L_0898EA34;
    case 538u: goto L_0898EA4C;
    case 539u: goto L_0898EA58;
    case 540u: goto L_0898EA60;
    case 541u: goto L_0898EA68;
    case 542u: goto L_0898EA70;
    case 543u: goto L_0898EA74;
    case 544u: goto L_0898EA9C;
    case 545u: goto L_0898EAA4;
    case 546u: goto L_0898EAAC;
    case 547u: goto L_0898EAB4;
    case 548u: goto L_0898EAB8;
    case 549u: goto L_0898EAE0;
    case 550u: goto L_0898EAE8;
    case 551u: goto L_0898EAF0;
    case 552u: goto L_0898EAF8;
    case 553u: goto L_0898EAFC;
    case 554u: goto L_0898EB20;
    case 555u: goto L_0898EB28;
    case 556u: goto L_0898EB34;
    case 557u: goto L_0898EB3C;
    case 558u: goto L_0898EB44;
    case 559u: goto L_0898EB4C;
    case 560u: goto L_0898EB50;
    case 561u: goto L_0898EB80;
    case 562u: goto L_0898EB90;
    case 563u: goto L_0898EB98;
    case 564u: goto L_0898EBA0;
    case 565u: goto L_0898EBA8;
    case 566u: goto L_0898EBAC;
    case 567u: goto L_0898EBD4;
    case 568u: goto L_0898EBDC;
    case 569u: goto L_0898EBE4;
    case 570u: goto L_0898EBEC;
    case 571u: goto L_0898EBF0;
    case 572u: goto L_0898EC1C;
    case 573u: goto L_0898EC74;
    case 574u: goto L_0898EC88;
    case 575u: goto L_0898EC98;
    case 576u: goto L_0898EC9C;
    case 577u: goto L_0898ECBC;
    case 578u: goto L_0898ECDC;
    case 579u: goto L_0898ECFC;
    case 580u: goto L_0898ED2C;
    case 581u: goto L_0898ED40;
    case 582u: goto L_0898ED48;
    case 583u: goto L_0898ED88;
    case 584u: goto L_0898ED9C;
    case 585u: goto L_0898EDB0;
    case 586u: goto L_0898EDC4;
    case 587u: goto L_0898EDCC;
    case 588u: goto L_0898EDD4;
    case 589u: goto L_0898EDF0;
    case 590u: goto L_0898EDF8;
    case 591u: goto L_0898EE00;
    case 592u: goto L_0898EE0C;
    case 593u: goto L_0898EE14;
    case 594u: goto L_0898EE1C;
    case 595u: goto L_0898EE3C;
    case 596u: goto L_0898EE44;
    case 597u: goto L_0898EE5C;
    case 598u: goto L_0898EE64;
    case 599u: goto L_0898EE70;
    case 600u: goto L_0898EE7C;
    case 601u: goto L_0898EE88;
    case 602u: goto L_0898EE98;
    case 603u: goto L_0898EEA0;
    case 604u: goto L_0898EEA8;
    case 605u: goto L_0898EEBC;
    case 606u: goto L_0898EEC4;
    case 607u: goto L_0898EF08;
    case 608u: goto L_0898EF10;
    case 609u: goto L_0898EF34;
    case 610u: goto L_0898EF48;
    case 611u: goto L_0898EF58;
    case 612u: goto L_0898EF6C;
    case 613u: goto L_0898EF74;
    case 614u: goto L_0898EF7C;
    case 615u: goto L_0898EF98;
    case 616u: goto L_0898EFA0;
    case 617u: goto L_0898EFA8;
    case 618u: goto L_0898EFB4;
    case 619u: goto L_0898EFBC;
    case 620u: goto L_0898EFC4;
    case 621u: goto L_0898EFE4;
    case 622u: goto L_0898EFEC;
    case 623u: goto L_0898F004;
    case 624u: goto L_0898F00C;
    case 625u: goto L_0898F030;
    case 626u: goto L_0898F04C;
    case 627u: goto L_0898F080;
    case 628u: goto L_0898F0AC;
    case 629u: goto L_0898F0E4;
    case 630u: goto L_0898F0F0;
    case 631u: goto L_0898F0FC;
    case 632u: goto L_0898F10C;
    case 633u: goto L_0898F120;
    case 634u: goto L_0898F138;
    case 635u: goto L_0898F14C;
    case 636u: goto L_0898F154;
    case 637u: goto L_0898F15C;
    case 638u: goto L_0898F17C;
    case 639u: goto L_0898F184;
    case 640u: goto L_0898F18C;
    case 641u: goto L_0898F194;
    case 642u: goto L_0898F1B4;
    case 643u: goto L_0898F1DC;
    case 644u: goto L_0898F1E8;
    case 645u: goto L_0898F1F8;
    case 646u: goto L_0898F20C;
    case 647u: goto L_0898F214;
    case 648u: goto L_0898F250;
    case 649u: goto L_0898F27C;
    case 650u: goto L_0898F2B8;
    case 651u: goto L_0898F2D4;
    case 652u: goto L_0898F2E0;
    case 653u: goto L_0898F2E8;
    case 654u: goto L_0898F310;
    case 655u: goto L_0898F31C;
    case 656u: goto L_0898F33C;
    case 657u: goto L_0898F358;
    case 658u: goto L_0898F36C;
    case 659u: goto L_0898F37C;
    case 660u: goto L_0898F384;
    case 661u: goto L_0898F38C;
    case 662u: goto L_0898F3A8;
    case 663u: goto L_0898F3B0;
    case 664u: goto L_0898F3B8;
    case 665u: goto L_0898F3C4;
    case 666u: goto L_0898F3CC;
    case 667u: goto L_0898F3D4;
    case 668u: goto L_0898F3F4;
    case 669u: goto L_0898F3FC;
    case 670u: goto L_0898F414;
    case 671u: goto L_0898F41C;
    case 672u: goto L_0898F480;
    case 673u: goto L_0898F494;
    case 674u: goto L_0898F4B4;
    case 675u: goto L_0898F4EC;
    case 676u: goto L_0898F4F4;
    case 677u: goto L_0898F4FC;
    case 678u: goto L_0898F504;
    case 679u: goto L_0898F50C;
    case 680u: goto L_0898F514;
    case 681u: goto L_0898F51C;
    case 682u: goto L_0898F528;
    case 683u: goto L_0898F538;
    case 684u: goto L_0898F554;
    case 685u: goto L_0898F55C;
    case 686u: goto L_0898F578;
    case 687u: goto L_0898F57C;
    case 688u: goto L_0898F5A8;
    case 689u: goto L_0898F5EC;
    case 690u: goto L_0898F618;
    case 691u: goto L_0898F650;
    case 692u: goto L_0898F65C;
    case 693u: goto L_0898F668;
    case 694u: goto L_0898F6C4;
    case 695u: goto L_0898F6F0;
    case 696u: goto L_0898F72C;
    case 697u: goto L_0898F738;
    case 698u: goto L_0898F744;
    case 699u: goto L_0898F768;
    case 700u: goto L_0898F780;
    case 701u: goto L_0898F7AC;
    case 702u: goto L_0898F7CC;
    case 703u: goto L_0898F7D8;
    case 704u: goto L_0898F818;
    case 705u: goto L_0898F844;
    case 706u: goto L_0898F87C;
    case 707u: goto L_0898F888;
    case 708u: goto L_0898F894;
    case 709u: goto L_0898F8A4;
    case 710u: goto L_0898F8C4;
    case 711u: goto L_0898F8E8;
    case 712u: goto L_0898F908;
    case 713u: goto L_0898F910;
    case 714u: goto L_0898F918;
    case 715u: goto L_0898F930;
    case 716u: goto L_0898F938;
    case 717u: goto L_0898F950;
    case 718u: goto L_0898F958;
    case 719u: goto L_0898F978;
    case 720u: goto L_0898F980;
    case 721u: goto L_0898F990;
    case 722u: goto L_0898F9C0;
    case 723u: goto L_0898F9DC;
    case 724u: goto L_0898F9E4;
    case 725u: goto L_0898F9EC;
    case 726u: goto L_0898FA08;
    case 727u: goto L_0898FA14;
    case 728u: goto L_0898FA1C;
    case 729u: goto L_0898FA24;
    case 730u: goto L_0898FA40;
    case 731u: goto L_0898FA5C;
    case 732u: goto L_0898FA74;
    case 733u: goto L_0898FA7C;
    case 734u: goto L_0898FA88;
    case 735u: goto L_0898FA90;
    case 736u: goto L_0898FA98;
    case 737u: goto L_0898FAA0;
    case 738u: goto L_0898FAA8;
    case 739u: goto L_0898FAB0;
    case 740u: goto L_0898FAB4;
    case 741u: goto L_0898FABC;
    case 742u: goto L_0898FAC4;
    case 743u: goto L_0898FACC;
    case 744u: goto L_0898FAF0;
    case 745u: goto L_0898FAF8;
    case 746u: goto L_0898FB00;
    case 747u: goto L_0898FB0C;
    case 748u: goto L_0898FB14;
    case 749u: goto L_0898FB1C;
    case 750u: goto L_0898FB34;
    case 751u: goto L_0898FB4C;
    case 752u: goto L_0898FB6C;
    case 753u: goto L_0898FB84;
    case 754u: goto L_0898FB98;
    case 755u: goto L_0898FBA4;
    case 756u: goto L_0898FBBC;
    case 757u: goto L_0898FBD4;
    case 758u: goto L_0898FBF4;
    case 759u: goto L_0898FC0C;
    case 760u: goto L_0898FC1C;
    case 761u: goto L_0898FC28;
    case 762u: goto L_0898FC4C;
    case 763u: goto L_0898FC54;
    case 764u: goto L_0898FC6C;
    case 765u: goto L_0898FC84;
    case 766u: goto L_0898FCA4;
    case 767u: goto L_0898FCB0;
    case 768u: goto L_0898FCB8;
    case 769u: goto L_0898FCC0;
    case 770u: goto L_0898FCDC;
    case 771u: goto L_0898FCE4;
    case 772u: goto L_0898FCEC;
    case 773u: goto L_0898FCF4;
    case 774u: goto L_0898FD10;
    case 775u: goto L_0898FD2C;
    case 776u: goto L_0898FD44;
    case 777u: goto L_0898FD54;
    case 778u: goto L_0898FD58;
    case 779u: goto L_0898FD68;
    case 780u: goto L_0898FD6C;
    case 781u: goto L_0898FD74;
    case 782u: goto L_0898FDCC;
    case 783u: goto L_0898FDD4;
    case 784u: goto L_0898FDF0;
    case 785u: goto L_0898FE08;
    case 786u: goto L_0898FE10;
    case 787u: goto L_0898FE18;
    case 788u: goto L_0898FE20;
    case 789u: goto L_0898FE28;
    case 790u: goto L_0898FE58;
    case 791u: goto L_0898FE94;
    case 792u: goto L_0898FE98;
    case 793u: goto L_0898FEA8;
    case 794u: goto L_0898FEB0;
    case 795u: goto L_0898FEC0;
    case 796u: goto L_0898FEC8;
    case 797u: goto L_0898FED0;
    case 798u: goto L_0898FEE0;
    case 799u: goto L_0898FF08;
    case 800u: goto L_0898FF18;
    case 801u: goto L_0898FF1C;
    case 802u: goto L_0898FF24;
    case 803u: goto L_0898FF34;
    case 804u: goto L_0898FF84;
    case 805u: goto L_0898FFA4;
    case 806u: goto L_0898FFD0;
    case 807u: goto L_0898FFDC;
    case 808u: goto L_0898FFE8;
    case 809u: goto L_0898FFF0;
    case 810u: goto L_0898FFF4;
    case 811u: goto L_0898FFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0898C000:
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0898C018u);
    ctx.fpr[15] = ctx.fpr[24] + ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x0898C018u) goto L_0898C018;
    return;
L_0898C018:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(1012));
    ctx.gpr[30] = (2228u << 16u);
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(-24628)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0898C03Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898C03Cu) goto L_0898C03C;
    return;
L_0898C03C:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0898C04Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 935u, 0x08AD3DD0u>(ctx, &aot_mem) && ctx.pc == 0x0898C04Cu) goto L_0898C04C;
    return;
L_0898C04C:
    ctx.gpr[5] = (17363u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (17386u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x0898C070u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x0898C070u) goto L_0898C070;
    return;
L_0898C070:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(81)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(82)));
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(-24628)));
    ctx.gpr[31] = (0x0898C08Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898C08Cu) goto L_0898C08C;
    return;
L_0898C08C:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0898C09Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 935u, 0x08AD3DD0u>(ctx, &aot_mem) && ctx.pc == 0x0898C09Cu) goto L_0898C09C;
    return;
L_0898C09C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (16952u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0898C0D4u);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[26];
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x0898C0D4u) goto L_0898C0D4;
    return;
L_0898C0D4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(77)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(78)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(-24628)));
    ctx.gpr[31] = (0x0898C0F0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898C0F0u) goto L_0898C0F0;
    return;
L_0898C0F0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0898C100u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 935u, 0x08AD3DD0u>(ctx, &aot_mem) && ctx.pc == 0x0898C100u) goto L_0898C100;
    return;
L_0898C100:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(8))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898C1D8;
      }
      goto L_0898C10C;
    }
L_0898C10C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0898C14C;
      }
      goto L_0898C11C;
    }
L_0898C11C:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x0898C128u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0898C128u) goto L_0898C128;
    return;
L_0898C128:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898C140;
      }
      goto L_0898C134;
    }
L_0898C134:
    ctx.gpr[31] = (0x0898C13Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0898C13Cu) goto L_0898C13C;
    return;
L_0898C13C:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_0898C140;
L_0898C140:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[19]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0898C14C;
L_0898C14C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0898C158u);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0898C158u) goto L_0898C158;
    return;
L_0898C158:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(668));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0898C168u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 22u, 0x08A54234u>(ctx, &aot_mem) && ctx.pc == 0x0898C168u) goto L_0898C168;
    return;
L_0898C168:
    ctx.gpr[31] = (0x0898C170u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 512u, 0x08987034u>(ctx, &aot_mem) && ctx.pc == 0x0898C170u) goto L_0898C170;
    return;
L_0898C170:
    ctx.gpr[31] = (0x0898C178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55030u>(ctx, &aot_mem) && ctx.pc == 0x0898C178u) goto L_0898C178;
    return;
L_0898C178:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(77)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(78)));
    ctx.gpr[8] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1016));
    ctx.gpr[31] = (0x0898C194u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-24628)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898C194u) goto L_0898C194;
    return;
L_0898C194:
    ctx.gpr[31] = (0x0898C19Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x0898C19Cu) goto L_0898C19C;
    return;
L_0898C19C:
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
    ctx.gpr[31] = (0x0898C1D8u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0898C1D8u) goto L_0898C1D8;
    return;
L_0898C1D8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    goto L_0898C1E0;
L_0898C1E0:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[21] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[21]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 636u, 0x0898BE80u>(ctx, &aot_mem); return;
      }
      goto L_0898C1F4;
    }
L_0898C1F4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x0898C200u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4576));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 584u, 0x08ADA6C0u>(ctx, &aot_mem) && ctx.pc == 0x0898C200u) goto L_0898C200;
    return;
L_0898C200:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0898C398;
      }
      goto L_0898C20C;
    }
L_0898C20C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6803)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898C398;
      }
      goto L_0898C21C;
    }
L_0898C21C:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-6520))))));
    ctx.gpr[4] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898C248;
      }
      goto L_0898C230;
    }
L_0898C230:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898C258;
      }
      goto L_0898C244;
    }
L_0898C244:
    ctx.gpr[5] = (2230u << 16u);
    goto L_0898C248;
L_0898C248:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-6520))))));
    ctx.gpr[4] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0898C390;
      }
      goto L_0898C258;
    }
L_0898C258:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x0898C264u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0898C264u) goto L_0898C264;
    return;
L_0898C264:
    ctx.gpr[31] = (0x0898C26Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 692u, 0x0896715Cu>(ctx, &aot_mem) && ctx.pc == 0x0898C26Cu) goto L_0898C26C;
    return;
L_0898C26C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x0898C278u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4576));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 584u, 0x08ADA6C0u>(ctx, &aot_mem) && ctx.pc == 0x0898C278u) goto L_0898C278;
    return;
L_0898C278:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0898C388;
      }
      goto L_0898C284;
    }
L_0898C284:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6204)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898C29C;
      }
      goto L_0898C29C;
    }
L_0898C29C:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7232));
    ctx.gpr[31] = (0x0898C2ACu);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(200));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 505u, 0x08986FE4u>(ctx, &aot_mem) && ctx.pc == 0x0898C2ACu) goto L_0898C2AC;
    return;
L_0898C2AC:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0898C2BCu);
    ctx.fpr[22] = ctx.fpr[0] - ctx.fpr[20];
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 508u, 0x08987008u>(ctx, &aot_mem) && ctx.pc == 0x0898C2BCu) goto L_0898C2BC;
    return;
L_0898C2BC:
    ctx.gpr[31] = (0x0898C2C4u);
    ctx.fpr[24] = ctx.fpr[0] - ctx.fpr[20];
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 505u, 0x08986FE4u>(ctx, &aot_mem) && ctx.pc == 0x0898C2C4u) goto L_0898C2C4;
    return;
L_0898C2C4:
    ctx.gpr[31] = (0x0898C2CCu);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 497u, 0x08986F84u>(ctx, &aot_mem) && ctx.pc == 0x0898C2CCu) goto L_0898C2CC;
    return;
L_0898C2CC:
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[0];
    ctx.gpr[31] = (0x0898C2D8u);
    ctx.fpr[28] = ctx.fpr[12] + ctx.fpr[20];
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 508u, 0x08987008u>(ctx, &aot_mem) && ctx.pc == 0x0898C2D8u) goto L_0898C2D8;
    return;
L_0898C2D8:
    ctx.gpr[31] = (0x0898C2E0u);
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 501u, 0x08986FB4u>(ctx, &aot_mem) && ctx.pc == 0x0898C2E0u) goto L_0898C2E0;
    return;
L_0898C2E0:
    ctx.fpr[15] = ctx.fpr[30] + ctx.fpr[0];
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1020));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x0898C2FCu);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[20];
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x0898C2FCu) goto L_0898C2FC;
    return;
L_0898C2FC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1036));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x0898C318u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898C318u) goto L_0898C318;
    return;
L_0898C318:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x0898C334u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898C334u) goto L_0898C334;
    return;
L_0898C334:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1044));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x0898C350u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898C350u) goto L_0898C350;
    return;
L_0898C350:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1048));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x0898C36Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898C36Cu) goto L_0898C36C;
    return;
L_0898C36C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0898C388u);
    ctx.gpr[9] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 910u, 0x08AD3B10u>(ctx, &aot_mem) && ctx.pc == 0x0898C388u) goto L_0898C388;
    return;
L_0898C388:
    ctx.gpr[31] = (0x0898C390u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 29u, 0x0896C164u>(ctx, &aot_mem) && ctx.pc == 0x0898C390u) goto L_0898C390;
    return;
L_0898C390:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6563), static_cast<std::uint8_t>(0u));
    goto L_0898C398;
L_0898C398:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6140)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_0898C3C4;
      }
      goto L_0898C3AC;
    }
L_0898C3AC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(117)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898C3C4;
      }
      goto L_0898C3BC;
    }
L_0898C3BC:
    ctx.gpr[31] = (0x0898C3C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 190u, 0x0896CAE0u>(ctx, &aot_mem) && ctx.pc == 0x0898C3C4u) goto L_0898C3C4;
    return;
L_0898C3C4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6920)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898E3A4;
      }
      goto L_0898C3D4;
    }
L_0898C3D4:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 48 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898C6B0;
      }
      goto L_0898C3E4;
    }
L_0898C3E4:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    goto L_0898C3E8;
L_0898C3E8:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2274u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23488));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0898C69C;
      }
      goto L_0898C410;
    }
L_0898C410:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2274u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23488));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(29)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0898C69C;
      }
      goto L_0898C438;
    }
L_0898C438:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[17] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2274u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(23488));
    ctx.gpr[19] = (ctx.gpr[17] + ctx.gpr[18]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0898C46Cu);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x0898C46Cu) goto L_0898C46C;
    return;
L_0898C46C:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1052));
    ctx.gpr[31] = (0x0898C484u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1052), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x0898C484u) goto L_0898C484;
    return;
L_0898C484:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898C4A0;
      }
      goto L_0898C490;
    }
L_0898C490:
    ctx.gpr[31] = (0x0898C498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 203u, 0x08A54E9Cu>(ctx, &aot_mem) && ctx.pc == 0x0898C498u) goto L_0898C498;
    return;
L_0898C498:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0898C4AC;
      }
      goto L_0898C4A0;
    }
L_0898C4A0:
    ctx.gpr[31] = (0x0898C4A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54EB8u>(ctx, &aot_mem) && ctx.pc == 0x0898C4A8u) goto L_0898C4A8;
    return;
L_0898C4A8:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    goto L_0898C4AC;
L_0898C4AC:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2274u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23488));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(30)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898C4E4;
      }
      goto L_0898C4D4;
    }
L_0898C4D4:
    ctx.gpr[31] = (0x0898C4DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 207u, 0x08A54EF8u>(ctx, &aot_mem) && ctx.pc == 0x0898C4DCu) goto L_0898C4DC;
    return;
L_0898C4DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0898C4F0;
      }
      goto L_0898C4E4;
    }
L_0898C4E4:
    ctx.gpr[31] = (0x0898C4ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 208u, 0x08A54F14u>(ctx, &aot_mem) && ctx.pc == 0x0898C4ECu) goto L_0898C4EC;
    return;
L_0898C4EC:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    goto L_0898C4F0;
L_0898C4F0:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2274u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23488));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898C528;
      }
      goto L_0898C518;
    }
L_0898C518:
    ctx.gpr[31] = (0x0898C520u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54ECCu>(ctx, &aot_mem) && ctx.pc == 0x0898C520u) goto L_0898C520;
    return;
L_0898C520:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0898C534;
      }
      goto L_0898C528;
    }
L_0898C528:
    ctx.gpr[31] = (0x0898C530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 206u, 0x08A54EE8u>(ctx, &aot_mem) && ctx.pc == 0x0898C530u) goto L_0898C530;
    return;
L_0898C530:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    goto L_0898C534;
L_0898C534:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2274u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23488));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x0898C558u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 214u, 0x08A54F6Cu>(ctx, &aot_mem) && ctx.pc == 0x0898C558u) goto L_0898C558;
    return;
L_0898C558:
    ctx.gpr[31] = (0x0898C560u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A54FACu>(ctx, &aot_mem) && ctx.pc == 0x0898C560u) goto L_0898C560;
    return;
L_0898C560:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(14)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898C57C;
      }
      goto L_0898C56C;
    }
L_0898C56C:
    ctx.gpr[31] = (0x0898C574u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 220u, 0x08A54FBCu>(ctx, &aot_mem) && ctx.pc == 0x0898C574u) goto L_0898C574;
    return;
L_0898C574:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0898C588;
      }
      goto L_0898C57C;
    }
L_0898C57C:
    ctx.gpr[31] = (0x0898C584u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A54FD0u>(ctx, &aot_mem) && ctx.pc == 0x0898C584u) goto L_0898C584;
    return;
L_0898C584:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    goto L_0898C588;
L_0898C588:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[17] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2274u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(23488));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1052));
    ctx.gpr[31] = (0x0898C5B8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1052), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 222u, 0x08A54FE0u>(ctx, &aot_mem) && ctx.pc == 0x0898C5B8u) goto L_0898C5B8;
    return;
L_0898C5B8:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(15)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898C5D8;
      }
      goto L_0898C5C8;
    }
L_0898C5C8:
    ctx.gpr[31] = (0x0898C5D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 223u, 0x08A5500Cu>(ctx, &aot_mem) && ctx.pc == 0x0898C5D0u) goto L_0898C5D0;
    return;
L_0898C5D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0898C5E4;
      }
      goto L_0898C5D8;
    }
L_0898C5D8:
    ctx.gpr[31] = (0x0898C5E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 224u, 0x08A55020u>(ctx, &aot_mem) && ctx.pc == 0x0898C5E0u) goto L_0898C5E0;
    return;
L_0898C5E0:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    goto L_0898C5E4;
L_0898C5E4:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2274u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23488));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898C61C;
      }
      goto L_0898C60C;
    }
L_0898C60C:
    ctx.gpr[31] = (0x0898C614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55030u>(ctx, &aot_mem) && ctx.pc == 0x0898C614u) goto L_0898C614;
    return;
L_0898C614:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0898C628;
      }
      goto L_0898C61C;
    }
L_0898C61C:
    ctx.gpr[31] = (0x0898C624u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 226u, 0x08A55044u>(ctx, &aot_mem) && ctx.pc == 0x0898C624u) goto L_0898C624;
    return;
L_0898C624:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    goto L_0898C628;
L_0898C628:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[17] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2274u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(23488));
    ctx.gpr[19] = (ctx.gpr[17] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[31] = (0x0898C654u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x0898C654u) goto L_0898C654;
    return;
L_0898C654:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (17440u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[4] = (17376u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17288u << 16u);
    ctx.gpr[4] = (17392u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[14];
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(44));
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0898C69Cu);
    ctx.fpr[13] = ctx.fpr[17] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0898C69Cu) goto L_0898C69C;
    return;
L_0898C69C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 48 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0898C3E8;
      }
      goto L_0898C6B0;
    }
L_0898C6B0:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898C7D8;
      }
      goto L_0898C6C0;
    }
L_0898C6C0:
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
    goto L_0898C6C4;
L_0898C6C4:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22432));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
      if (branch_taken) {
          goto L_0898C7C4;
      }
      goto L_0898C6E4;
    }
L_0898C6E4:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22432));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
      if (branch_taken) {
          goto L_0898C7C4;
      }
      goto L_0898C704;
    }
L_0898C704:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22432));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
      if (branch_taken) {
          goto L_0898C770;
      }
      goto L_0898C724;
    }
L_0898C724:
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22432));
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[18]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    ctx.gpr[31] = (0x0898C754u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x0898C754u) goto L_0898C754;
    return;
L_0898C754:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0898C768u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 935u, 0x08AD3DD0u>(ctx, &aot_mem) && ctx.pc == 0x0898C768u) goto L_0898C768;
    return;
L_0898C768:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898C7C4;
      }
      goto L_0898C770;
    }
L_0898C770:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22432));
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[18]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2))))));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-22048));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    ctx.gpr[31] = (0x0898C7B0u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x0898C7B0u) goto L_0898C7B0;
    return;
L_0898C7B0:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(20));
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0898C7C4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 906u, 0x08AD3ABCu>(ctx, &aot_mem) && ctx.pc == 0x0898C7C4u) goto L_0898C7C4;
    return;
L_0898C7C4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
      if (branch_taken) {
          goto L_0898C6C4;
      }
      goto L_0898C7D8;
    }
L_0898C7D8:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-9280)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_0898CADC;
      }
      goto L_0898C7E8;
    }
L_0898C7E8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4624));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(1024)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898CADC;
      }
      goto L_0898C7F8;
    }
L_0898C7F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6152)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898CADC;
      }
      goto L_0898C804;
    }
L_0898C804:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6836)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898C820;
      }
      goto L_0898C814;
    }
L_0898C814:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6836), ctx.gpr[4]);
    goto L_0898C820;
L_0898C820:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7632)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898C83C;
      }
      goto L_0898C830;
    }
L_0898C830:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7632), ctx.gpr[4]);
    goto L_0898C83C;
L_0898C83C:
    ctx.gpr[31] = (0x0898C844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54EB8u>(ctx, &aot_mem) && ctx.pc == 0x0898C844u) goto L_0898C844;
    return;
L_0898C844:
    ctx.gpr[31] = (0x0898C84Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A54FD0u>(ctx, &aot_mem) && ctx.pc == 0x0898C84Cu) goto L_0898C84C;
    return;
L_0898C84C:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898C868u);
    ctx.gpr[8] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898C868u) goto L_0898C868;
    return;
L_0898C868:
    ctx.gpr[31] = (0x0898C870u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 222u, 0x08A54FE0u>(ctx, &aot_mem) && ctx.pc == 0x0898C870u) goto L_0898C870;
    return;
L_0898C870:
    ctx.gpr[31] = (0x0898C878u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54ECCu>(ctx, &aot_mem) && ctx.pc == 0x0898C878u) goto L_0898C878;
    return;
L_0898C878:
    ctx.gpr[31] = (0x0898C880u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55030u>(ctx, &aot_mem) && ctx.pc == 0x0898C880u) goto L_0898C880;
    return;
L_0898C880:
    ctx.gpr[31] = (0x0898C888u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x0898C888u) goto L_0898C888;
    return;
L_0898C888:
    ctx.gpr[31] = (0x0898C890u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x0898C890u) goto L_0898C890;
    return;
L_0898C890:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 225u);
    ctx.gpr[6] = (0u | 225u);
    ctx.gpr[7] = (0u | 225u);
    ctx.gpr[31] = (0x0898C8A8u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898C8A8u) goto L_0898C8A8;
    return;
L_0898C8A8:
    ctx.gpr[31] = (0x0898C8B0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x0898C8B0u) goto L_0898C8B0;
    return;
L_0898C8B0:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(117)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898C95C;
      }
      goto L_0898C8C4;
    }
L_0898C8C4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2228u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-24592), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25492)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0898C8EC;
      }
      goto L_0898C8E0;
    }
L_0898C8E0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(935)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898CAD4;
      }
      goto L_0898C8EC;
    }
L_0898C8EC:
    ctx.gpr[4] = (17362u << 16u);
    ctx.gpr[31] = (0x0898C8F8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A54FACu>(ctx, &aot_mem) && ctx.pc == 0x0898C8F8u) goto L_0898C8F8;
    return;
L_0898C8F8:
    ctx.gpr[4] = (16079u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16882u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.gpr[31] = (0x0898C914u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x0898C914u) goto L_0898C914;
    return;
L_0898C914:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1092));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898C92Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898C92Cu) goto L_0898C92C;
    return;
L_0898C92C:
    ctx.gpr[31] = (0x0898C934u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A550ACu>(ctx, &aot_mem) && ctx.pc == 0x0898C934u) goto L_0898C934;
    return;
L_0898C934:
    ctx.gpr[4] = (17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (17241u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[31] = (0x0898C954u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9280));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0898C954u) goto L_0898C954;
    return;
L_0898C954:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898CAD4;
      }
      goto L_0898C95C;
    }
L_0898C95C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-24592)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898C974;
      }
      goto L_0898C96C;
    }
L_0898C96C:
    ctx.gpr[4] = (2277u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-9280), static_cast<std::uint16_t>(0u));
    goto L_0898C974;
L_0898C974:
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-24592), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1096));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 225u);
    ctx.gpr[6] = (0u | 225u);
    ctx.gpr[7] = (0u | 225u);
    ctx.gpr[31] = (0x0898C998u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898C998u) goto L_0898C998;
    return;
L_0898C998:
    ctx.gpr[31] = (0x0898C9A0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x0898C9A0u) goto L_0898C9A0;
    return;
L_0898C9A0:
    ctx.gpr[31] = (0x0898C9A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 194u, 0x08A54DCCu>(ctx, &aot_mem) && ctx.pc == 0x0898C9A8u) goto L_0898C9A8;
    return;
L_0898C9A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898C9C0u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898C9C0u) goto L_0898C9C0;
    return;
L_0898C9C0:
    ctx.gpr[31] = (0x0898C9C8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A550ACu>(ctx, &aot_mem) && ctx.pc == 0x0898C9C8u) goto L_0898C9C8;
    return;
L_0898C9C8:
    ctx.gpr[4] = (16079u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16882u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.gpr[31] = (0x0898C9E4u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x0898C9E4u) goto L_0898C9E4;
    return;
L_0898C9E4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x0898C9F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4576));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 584u, 0x08ADA6C0u>(ctx, &aot_mem) && ctx.pc == 0x0898C9F0u) goto L_0898C9F0;
    return;
L_0898C9F0:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898CA9C;
      }
      goto L_0898C9FC;
    }
L_0898C9FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6803)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898CA9C;
      }
      goto L_0898CA08;
    }
L_0898CA08:
    ctx.gpr[31] = (0x0898CA10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 497u, 0x08986F84u>(ctx, &aot_mem) && ctx.pc == 0x0898CA10u) goto L_0898CA10;
    return;
L_0898CA10:
    ctx.gpr[31] = (0x0898CA18u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 505u, 0x08986FE4u>(ctx, &aot_mem) && ctx.pc == 0x0898CA18u) goto L_0898CA18;
    return;
L_0898CA18:
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[22];
    ctx.gpr[4] = (17385u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.gpr[31] = (0x0898CA3Cu);
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A54FACu>(ctx, &aot_mem) && ctx.pc == 0x0898CA3Cu) goto L_0898CA3C;
    return;
L_0898CA3C:
    ctx.gpr[31] = (0x0898CA44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 497u, 0x08986F84u>(ctx, &aot_mem) && ctx.pc == 0x0898CA44u) goto L_0898CA44;
    return;
L_0898CA44:
    ctx.gpr[31] = (0x0898CA4Cu);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 505u, 0x08986FE4u>(ctx, &aot_mem) && ctx.pc == 0x0898CA4Cu) goto L_0898CA4C;
    return;
L_0898CA4C:
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[22];
    ctx.gpr[31] = (0x0898CA58u);
    ctx.fpr[26] = ctx.fpr[12] + ctx.fpr[26];
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 497u, 0x08986F84u>(ctx, &aot_mem) && ctx.pc == 0x0898CA58u) goto L_0898CA58;
    return;
L_0898CA58:
    ctx.gpr[31] = (0x0898CA60u);
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 505u, 0x08986FE4u>(ctx, &aot_mem) && ctx.pc == 0x0898CA60u) goto L_0898CA60;
    return;
L_0898CA60:
    ctx.fpr[13] = ctx.fpr[0] + ctx.fpr[22];
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[4] = (17245u << 16u);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[28];
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9280));
    ctx.gpr[5] = (0u | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x0898CA94u);
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0898CA94u) goto L_0898CA94;
    return;
L_0898CA94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898CAC8;
      }
      goto L_0898CA9C;
    }
L_0898CA9C:
    ctx.gpr[4] = (17379u << 16u);
    ctx.gpr[31] = (0x0898CAA8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A54FACu>(ctx, &aot_mem) && ctx.pc == 0x0898CAA8u) goto L_0898CAA8;
    return;
L_0898CAA8:
    ctx.gpr[4] = (17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (17245u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[31] = (0x0898CAC8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9280));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0898CAC8u) goto L_0898CAC8;
    return;
L_0898CAC8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6563), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0898CAD4;
L_0898CAD4:
    ctx.gpr[31] = (0x0898CADCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x0898CADCu) goto L_0898CADC;
    return;
L_0898CADC:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-8768)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898D368;
      }
      goto L_0898CAEC;
    }
L_0898CAEC:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[6] = (0u | 256u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8768));
    ctx.gpr[31] = (0x0898CB04u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8256));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 195u, 0x0887900Cu>(ctx, &aot_mem) && ctx.pc == 0x0898CB04u) goto L_0898CB04;
    return;
L_0898CB04:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898CC6C;
      }
      goto L_0898CB0C;
    }
L_0898CB0C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6128)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898CC54;
      }
      goto L_0898CB20;
    }
L_0898CB20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6128)));
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0898CBE8;
      }
      goto L_0898CB30;
    }
L_0898CB30:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0898CC04;
      }
      goto L_0898CB38;
    }
L_0898CB38:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0898CC20;
      }
      goto L_0898CB40;
    }
L_0898CB40:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0898CC3C;
      }
      goto L_0898CB48;
    }
L_0898CB48:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6128), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6136), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6132), 0u);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8768));
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 256u);
    ctx.gpr[31] = (0x0898CB80u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7744));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 187u, 0x08878F8Cu>(ctx, &aot_mem) && ctx.pc == 0x0898CB80u) goto L_0898CB80;
    return;
L_0898CB80:
    ctx.gpr[31] = (0x0898CB88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 184u, 0x08878F64u>(ctx, &aot_mem) && ctx.pc == 0x0898CB88u) goto L_0898CB88;
    return;
L_0898CB88:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (16448u << 16u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(324)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[14]) || std::isnan(ctx.fpr[13])) && ctx.fpr[14] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-6120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898CBE0;
      }
      goto L_0898CBCC;
    }
L_0898CBCC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 179u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0898CBE0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x0898CBE0u) goto L_0898CBE0;
    return;
L_0898CBE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898CC54;
      }
      goto L_0898CBE8;
    }
L_0898CBE8:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6128), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6136), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0898CC54;
      }
      goto L_0898CC04;
    }
L_0898CC04:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6128), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6136), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0898CC54;
      }
      goto L_0898CC20;
    }
L_0898CC20:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6128), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6136), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0898CC54;
      }
      goto L_0898CC3C;
    }
L_0898CC3C:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6128), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6136), ctx.gpr[4]);
    goto L_0898CC54;
L_0898CC54:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[6] = (0u | 256u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8256));
    ctx.gpr[31] = (0x0898CC6Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8768));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 187u, 0x08878F8Cu>(ctx, &aot_mem) && ctx.pc == 0x0898CC6Cu) goto L_0898CC6C;
    return;
L_0898CC6C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6128)));
    ctx.gpr[5] = (17249u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_0898D360;
      }
      goto L_0898CC80;
    }
L_0898CC80:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6128)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898CCAC;
      }
      goto L_0898CC94;
    }
L_0898CC94:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898D0EC;
      }
      goto L_0898CC9C;
    }
L_0898CC9C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898D04C;
      }
      goto L_0898CCA4;
    }
L_0898CCA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898CCC4;
      }
      goto L_0898CCAC;
    }
L_0898CCAC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898CDF8;
      }
      goto L_0898CCB4;
    }
L_0898CCB4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898CF2C;
      }
      goto L_0898CCBC;
    }
L_0898CCBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898D0EC;
      }
      goto L_0898CCC4;
    }
L_0898CCC4:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(117)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898CCEC;
      }
      goto L_0898CCD8;
    }
L_0898CCD8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7096)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898CDF0;
      }
      goto L_0898CCE8;
    }
L_0898CCE8:
    ctx.gpr[4] = (2230u << 16u);
    goto L_0898CCEC;
L_0898CCEC:
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
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6132)));
      if (branch_taken) {
          goto L_0898CD50;
      }
      goto L_0898CD24;
    }
L_0898CD24:
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
          goto L_0898CD8C;
      }
      goto L_0898CD50;
    }
L_0898CD50:
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
    goto L_0898CD8C;
L_0898CD8C:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6132), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0898CDC8;
      }
      goto L_0898CDB4;
    }
L_0898CDB4:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6132), 0u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6128), ctx.gpr[4]);
    goto L_0898CDC8;
L_0898CDC8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6132)));
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[20] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17249u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_0898CDF0;
L_0898CDF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898D0EC;
      }
      goto L_0898CDF8;
    }
L_0898CDF8:
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
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6132)));
      if (branch_taken) {
          goto L_0898CE60;
      }
      goto L_0898CE34;
    }
L_0898CE34:
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
          goto L_0898CE9C;
      }
      goto L_0898CE60;
    }
L_0898CE60:
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
    goto L_0898CE9C;
L_0898CE9C:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6132), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0898CEE8;
      }
      goto L_0898CEC4;
    }
L_0898CEC4:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(117)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898CF04;
      }
      goto L_0898CED8;
    }
L_0898CED8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7096)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898CF04;
      }
      goto L_0898CEE8;
    }
L_0898CEE8:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6132), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6128), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7096), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    goto L_0898CF04;
L_0898CF04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6132)));
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[20] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17249u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_0898D0EC;
      }
      goto L_0898CF2C;
    }
L_0898CF2C:
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6132)));
      if (branch_taken) {
          goto L_0898CF90;
      }
      goto L_0898CF64;
    }
L_0898CF64:
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
          goto L_0898CFCC;
      }
      goto L_0898CF90;
    }
L_0898CF90:
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
    goto L_0898CFCC;
L_0898CFCC:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6132), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0898D020;
      }
      goto L_0898CFF4;
    }
L_0898CFF4:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6132), 0u);
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6128), ctx.gpr[4]);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[6] = (0u | 256u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7744));
    ctx.gpr[31] = (0x0898D020u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8256));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 187u, 0x08878F8Cu>(ctx, &aot_mem) && ctx.pc == 0x0898D020u) goto L_0898D020;
    return;
L_0898D020:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6132)));
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[20] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17249u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_0898D0EC;
      }
      goto L_0898D04C;
    }
L_0898D04C:
    ctx.gpr[4] = (0u | 600u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6132), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6123)));
    ctx.gpr[5] = (17249u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_0898D0EC;
      }
      goto L_0898D06C;
    }
L_0898D06C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6136)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6120)));
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898D0D4;
      }
      goto L_0898D0A0;
    }
L_0898D0A0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6124)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898D0EC;
      }
      goto L_0898D0AC;
    }
L_0898D0AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6136)));
    ctx.gpr[5] = (17595u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[5] | 32768u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0898D0EC;
      }
      goto L_0898D0D4;
    }
L_0898D0D4:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6128), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 600u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6132), ctx.gpr[4]);
    goto L_0898D0EC;
L_0898D0EC:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(117)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898D114;
      }
      goto L_0898D100;
    }
L_0898D100:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7096)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898D360;
      }
      goto L_0898D110;
    }
L_0898D110:
    ctx.gpr[4] = (2230u << 16u);
    goto L_0898D114;
L_0898D114:
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6136)));
      if (branch_taken) {
          goto L_0898D178;
      }
      goto L_0898D14C;
    }
L_0898D14C:
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
          goto L_0898D1B4;
      }
      goto L_0898D178;
    }
L_0898D178:
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
    goto L_0898D1B4;
L_0898D1B4:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6136), ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_0898D1E0;
      }
      goto L_0898D1D0;
    }
L_0898D1D0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898D360;
      }
      goto L_0898D1E0;
    }
L_0898D1E0:
    ctx.gpr[31] = (0x0898D1E8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 231u, 0x08A5508Cu>(ctx, &aot_mem) && ctx.pc == 0x0898D1E8u) goto L_0898D1E8;
    return;
L_0898D1E8:
    ctx.gpr[31] = (0x0898D1F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 206u, 0x08A54EE8u>(ctx, &aot_mem) && ctx.pc == 0x0898D1F0u) goto L_0898D1F0;
    return;
L_0898D1F0:
    ctx.gpr[31] = (0x0898D1F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55030u>(ctx, &aot_mem) && ctx.pc == 0x0898D1F8u) goto L_0898D1F8;
    return;
L_0898D1F8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29194)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898D22C;
      }
      goto L_0898D208;
    }
L_0898D208:
    ctx.gpr[4] = (16048u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 11073u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16191u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 31982u);
    ctx.gpr[31] = (0x0898D224u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x0898D224u) goto L_0898D224;
    return;
L_0898D224:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898D248;
      }
      goto L_0898D22C;
    }
L_0898D22C:
    ctx.gpr[4] = (16079u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16882u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.gpr[31] = (0x0898D248u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x0898D248u) goto L_0898D248;
    return;
L_0898D248:
    ctx.gpr[31] = (0x0898D250u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 194u, 0x08A54DCCu>(ctx, &aot_mem) && ctx.pc == 0x0898D250u) goto L_0898D250;
    return;
L_0898D250:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1100));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 175u);
    ctx.gpr[6] = (0u | 175u);
    ctx.gpr[7] = (0u | 175u);
    ctx.gpr[31] = (0x0898D26Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898D26Cu) goto L_0898D26C;
    return;
L_0898D26C:
    ctx.gpr[31] = (0x0898D274u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x0898D274u) goto L_0898D274;
    return;
L_0898D274:
    ctx.gpr[31] = (0x0898D27Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54EB8u>(ctx, &aot_mem) && ctx.pc == 0x0898D27Cu) goto L_0898D27C;
    return;
L_0898D27C:
    ctx.gpr[4] = (17248u << 16u);
    ctx.gpr[31] = (0x0898D288u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 214u, 0x08A54F6Cu>(ctx, &aot_mem) && ctx.pc == 0x0898D288u) goto L_0898D288;
    return;
L_0898D288:
    ctx.gpr[31] = (0x0898D290u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x0898D290u) goto L_0898D290;
    return;
L_0898D290:
    ctx.gpr[31] = (0x0898D298u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 220u, 0x08A54FBCu>(ctx, &aot_mem) && ctx.pc == 0x0898D298u) goto L_0898D298;
    return;
L_0898D298:
    ctx.gpr[31] = (0x0898D2A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 224u, 0x08A55020u>(ctx, &aot_mem) && ctx.pc == 0x0898D2A0u) goto L_0898D2A0;
    return;
L_0898D2A0:
    ctx.gpr[31] = (0x0898D2A8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x0898D2A8u) goto L_0898D2A8;
    return;
L_0898D2A8:
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0898D2D8u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898D2D8u) goto L_0898D2D8;
    return;
L_0898D2D8:
    ctx.gpr[31] = (0x0898D2E0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 222u, 0x08A54FE0u>(ctx, &aot_mem) && ctx.pc == 0x0898D2E0u) goto L_0898D2E0;
    return;
L_0898D2E0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 175u);
    ctx.gpr[6] = (0u | 175u);
    ctx.gpr[7] = (0u | 175u);
    ctx.gpr[31] = (0x0898D2F8u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898D2F8u) goto L_0898D2F8;
    return;
L_0898D2F8:
    ctx.gpr[31] = (0x0898D300u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x0898D300u) goto L_0898D300;
    return;
L_0898D300:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6188)));
    ctx.gpr[4] = (17174u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16153u << 16u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16640u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7744));
    ctx.gpr[31] = (0x0898D348u);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0898D348u) goto L_0898D348;
    return;
L_0898D348:
    ctx.gpr[4] = (17279u << 16u);
    ctx.gpr[31] = (0x0898D354u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 231u, 0x08A5508Cu>(ctx, &aot_mem) && ctx.pc == 0x0898D354u) goto L_0898D354;
    return;
L_0898D354:
    ctx.gpr[4] = (17392u << 16u);
    ctx.gpr[31] = (0x0898D360u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 214u, 0x08A54F6Cu>(ctx, &aot_mem) && ctx.pc == 0x0898D360u) goto L_0898D360;
    return;
L_0898D360:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898D370;
      }
      goto L_0898D368;
    }
L_0898D368:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6128), 0u);
    goto L_0898D370;
L_0898D370:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4624)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898DA48;
      }
      goto L_0898D380;
    }
L_0898D380:
    ctx.gpr[4] = (2269u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4880)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0898D3CC;
      }
      goto L_0898D39C;
    }
L_0898D39C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2277u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-9312), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (49776u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2277u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-9344), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4880), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898DA54;
      }
      goto L_0898D3CC;
    }
L_0898D3CC:
    ctx.gpr[31] = (0x0898D3D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54EB8u>(ctx, &aot_mem) && ctx.pc == 0x0898D3D4u) goto L_0898D3D4;
    return;
L_0898D3D4:
    ctx.gpr[31] = (0x0898D3DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A54FD0u>(ctx, &aot_mem) && ctx.pc == 0x0898D3DCu) goto L_0898D3DC;
    return;
L_0898D3DC:
    ctx.gpr[31] = (0x0898D3E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 224u, 0x08A55020u>(ctx, &aot_mem) && ctx.pc == 0x0898D3E4u) goto L_0898D3E4;
    return;
L_0898D3E4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29194)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898D418;
      }
      goto L_0898D3F4;
    }
L_0898D3F4:
    ctx.gpr[4] = (16161u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16409u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.gpr[31] = (0x0898D410u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x0898D410u) goto L_0898D410;
    return;
L_0898D410:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898D434;
      }
      goto L_0898D418;
    }
L_0898D418:
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16409u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.gpr[31] = (0x0898D434u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x0898D434u) goto L_0898D434;
    return;
L_0898D434:
    ctx.gpr[31] = (0x0898D43Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55030u>(ctx, &aot_mem) && ctx.pc == 0x0898D43Cu) goto L_0898D43C;
    return;
L_0898D43C:
    ctx.gpr[31] = (0x0898D444u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54ECCu>(ctx, &aot_mem) && ctx.pc == 0x0898D444u) goto L_0898D444;
    return;
L_0898D444:
    ctx.gpr[4] = (17427u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.gpr[31] = (0x0898D454u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A54FACu>(ctx, &aot_mem) && ctx.pc == 0x0898D454u) goto L_0898D454;
    return;
L_0898D454:
    ctx.gpr[4] = (2277u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-9312)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-24628)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898D47C;
      }
      goto L_0898D47C;
    }
L_0898D47C:
    ctx.gpr[31] = (0x0898D484u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x0898D484u) goto L_0898D484;
    return;
L_0898D484:
    ctx.gpr[4] = (2277u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-9344)));
    ctx.gpr[4] = (17382u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_0898D678;
      }
      goto L_0898D4A4;
    }
L_0898D4A4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[5] = (20224u << 16u);
    ctx.gpr[6] = (2277u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-9344)));
      if (branch_taken) {
          goto L_0898D50C;
      }
      goto L_0898D4E0;
    }
L_0898D4E0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0898D548;
      }
      goto L_0898D50C;
    }
L_0898D50C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[5] = (20224u << 16u);
    ctx.gpr[6] = (32768u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[16];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    goto L_0898D548;
L_0898D548:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_0898D560;
      }
      goto L_0898D554;
    }
L_0898D554:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_0898D560;
L_0898D560:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.gpr[8] = (17530u << 16u);
    ctx.gpr[5] = (20224u << 16u);
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[7] = (2277u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-9344), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-9312)));
      if (branch_taken) {
          goto L_0898D5E0;
      }
      goto L_0898D5B4;
    }
L_0898D5B4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0898D61C;
      }
      goto L_0898D5E0;
    }
L_0898D5E0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[5] = (20224u << 16u);
    ctx.gpr[6] = (32768u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[16];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    goto L_0898D61C;
L_0898D61C:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_0898D634;
      }
      goto L_0898D628;
    }
L_0898D628:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_0898D634;
L_0898D634:
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (17279u << 16u);
    ctx.gpr[5] = (2277u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-9312), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898D7B8;
      }
      goto L_0898D664;
    }
L_0898D664:
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2277u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-9312), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898D7B8;
      }
      goto L_0898D678;
    }
L_0898D678:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4880)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[5] = (17136u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4880), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898D788;
      }
      goto L_0898D6A0;
    }
L_0898D6A0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (17136u << 16u);
    ctx.gpr[8] = (2277u << 16u);
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-9312)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4880), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898D71C;
      }
      goto L_0898D6F0;
    }
L_0898D6F0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0898D754;
      }
      goto L_0898D71C;
    }
L_0898D71C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[5] = (20224u << 16u);
    ctx.gpr[6] = (32768u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[16];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    goto L_0898D754;
L_0898D754:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_0898D76C;
      }
      goto L_0898D760;
    }
L_0898D760:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_0898D76C;
L_0898D76C:
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (2277u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-9312), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0898D788;
L_0898D788:
    ctx.gpr[4] = (2277u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-9312)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0898D7B8;
      }
      goto L_0898D7A4;
    }
L_0898D7A4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2277u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-9312), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4624), static_cast<std::uint16_t>(0u));
    goto L_0898D7B8;
L_0898D7B8:
    ctx.gpr[31] = (0x0898D7C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 194u, 0x08A54DCCu>(ctx, &aot_mem) && ctx.pc == 0x0898D7C0u) goto L_0898D7C0;
    return;
L_0898D7C0:
    ctx.gpr[31] = (0x0898D7C8u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x0898D7C8u) goto L_0898D7C8;
    return;
L_0898D7C8:
    ctx.gpr[4] = (2277u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-9312)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-24628)));
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898D7F8;
      }
      goto L_0898D7F0;
    }
L_0898D7F0:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-24628)));
    goto L_0898D7F8;
L_0898D7F8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1104));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898D810u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898D810u) goto L_0898D810;
    return;
L_0898D810:
    ctx.gpr[31] = (0x0898D818u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A550ACu>(ctx, &aot_mem) && ctx.pc == 0x0898D818u) goto L_0898D818;
    return;
L_0898D818:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1108));
      if (branch_taken) {
          goto L_0898D854;
      }
      goto L_0898D828;
    }
L_0898D828:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0898D834u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0898D834u) goto L_0898D834;
    return;
L_0898D834:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898D84C;
      }
      goto L_0898D840;
    }
L_0898D840:
    ctx.gpr[31] = (0x0898D848u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0898D848u) goto L_0898D848;
    return;
L_0898D848:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0898D84C;
L_0898D84C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    goto L_0898D854;
L_0898D854:
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0898D868u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21832));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0898D868u) goto L_0898D868;
    return;
L_0898D868:
    ctx.gpr[31] = (0x0898D870u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 293u, 0x08913158u>(ctx, &aot_mem) && ctx.pc == 0x0898D870u) goto L_0898D870;
    return;
L_0898D870:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0898D87Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 411u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x0898D87Cu) goto L_0898D87C;
    return;
L_0898D87C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1364));
      if (branch_taken) {
          goto L_0898D8B4;
      }
      goto L_0898D888;
    }
L_0898D888:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0898D894u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0898D894u) goto L_0898D894;
    return;
L_0898D894:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898D8AC;
      }
      goto L_0898D8A0;
    }
L_0898D8A0:
    ctx.gpr[31] = (0x0898D8A8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0898D8A8u) goto L_0898D8A8;
    return;
L_0898D8A8:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0898D8AC;
L_0898D8AC:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    goto L_0898D8B4;
L_0898D8B4:
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0898D8C8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21824));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0898D8C8u) goto L_0898D8C8;
    return;
L_0898D8C8:
    ctx.gpr[31] = (0x0898D8D0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 293u, 0x08913158u>(ctx, &aot_mem) && ctx.pc == 0x0898D8D0u) goto L_0898D8D0;
    return;
L_0898D8D0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0898D8DCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 411u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x0898D8DCu) goto L_0898D8DC;
    return;
L_0898D8DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1620));
      if (branch_taken) {
          goto L_0898D914;
      }
      goto L_0898D8E8;
    }
L_0898D8E8:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0898D8F4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0898D8F4u) goto L_0898D8F4;
    return;
L_0898D8F4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898D90C;
      }
      goto L_0898D900;
    }
L_0898D900:
    ctx.gpr[31] = (0x0898D908u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0898D908u) goto L_0898D908;
    return;
L_0898D908:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0898D90C;
L_0898D90C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    goto L_0898D914;
L_0898D914:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0898D928u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21816));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0898D928u) goto L_0898D928;
    return;
L_0898D928:
    ctx.gpr[31] = (0x0898D930u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 293u, 0x08913158u>(ctx, &aot_mem) && ctx.pc == 0x0898D930u) goto L_0898D930;
    return;
L_0898D930:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0898D93Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 411u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x0898D93Cu) goto L_0898D93C;
    return;
L_0898D93C:
    ctx.gpr[4] = (17159u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x0898D950u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4624));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 293u, 0x08913158u>(ctx, &aot_mem) && ctx.pc == 0x0898D950u) goto L_0898D950;
    return;
L_0898D950:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1108));
    ctx.gpr[31] = (0x0898D95Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 379u, 0x08AED520u>(ctx, &aot_mem) && ctx.pc == 0x0898D95Cu) goto L_0898D95C;
    return;
L_0898D95C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_0898D99C;
      }
      goto L_0898D964;
    }
L_0898D964:
    ctx.gpr[31] = (0x0898D96Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4624));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 293u, 0x08913158u>(ctx, &aot_mem) && ctx.pc == 0x0898D96Cu) goto L_0898D96C;
    return;
L_0898D96C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1364));
    ctx.gpr[31] = (0x0898D978u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 379u, 0x08AED520u>(ctx, &aot_mem) && ctx.pc == 0x0898D978u) goto L_0898D978;
    return;
L_0898D978:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_0898D99C;
      }
      goto L_0898D980;
    }
L_0898D980:
    ctx.gpr[31] = (0x0898D988u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4624));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 293u, 0x08913158u>(ctx, &aot_mem) && ctx.pc == 0x0898D988u) goto L_0898D988;
    return;
L_0898D988:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1620));
    ctx.gpr[31] = (0x0898D994u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 379u, 0x08AED520u>(ctx, &aot_mem) && ctx.pc == 0x0898D994u) goto L_0898D994;
    return;
L_0898D994:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898D9E4;
      }
      goto L_0898D99C;
    }
L_0898D99C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1876));
    ctx.gpr[5] = (0u | 174u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898D9B4u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898D9B4u) goto L_0898D9B4;
    return;
L_0898D9B4:
    ctx.gpr[31] = (0x0898D9BCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x0898D9BCu) goto L_0898D9BC;
    return;
L_0898D9BC:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4624));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(1024)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898D9DC;
      }
      goto L_0898D9D0;
    }
L_0898D9D0:
    ctx.gpr[4] = (16840u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    goto L_0898D9DC;
L_0898D9DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898DA24;
      }
      goto L_0898D9E4;
    }
L_0898D9E4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1880));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 227u);
    ctx.gpr[7] = (0u | 79u);
    ctx.gpr[31] = (0x0898D9FCu);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898D9FCu) goto L_0898D9FC;
    return;
L_0898D9FC:
    ctx.gpr[31] = (0x0898DA04u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x0898DA04u) goto L_0898DA04;
    return;
L_0898DA04:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4624));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(1024)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898DA24;
      }
      goto L_0898DA18;
    }
L_0898DA18:
    ctx.gpr[4] = (16916u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    goto L_0898DA24;
L_0898DA24:
    ctx.gpr[4] = (17264u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x0898DA40u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4624));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0898DA40u) goto L_0898DA40;
    return;
L_0898DA40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898DA54;
      }
      goto L_0898DA48;
    }
L_0898DA48:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4880), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0898DA54;
L_0898DA54:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4624));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(3584)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898DB64;
      }
      goto L_0898DA68;
    }
L_0898DA68:
    ctx.gpr[31] = (0x0898DA70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A54FD0u>(ctx, &aot_mem) && ctx.pc == 0x0898DA70u) goto L_0898DA70;
    return;
L_0898DA70:
    ctx.gpr[4] = (16079u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16882u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.gpr[31] = (0x0898DA8Cu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x0898DA8Cu) goto L_0898DA8C;
    return;
L_0898DA8C:
    ctx.gpr[31] = (0x0898DA94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55030u>(ctx, &aot_mem) && ctx.pc == 0x0898DA94u) goto L_0898DA94;
    return;
L_0898DA94:
    ctx.gpr[31] = (0x0898DA9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 208u, 0x08A54F14u>(ctx, &aot_mem) && ctx.pc == 0x0898DA9Cu) goto L_0898DA9C;
    return;
L_0898DA9C:
    ctx.gpr[31] = (0x0898DAA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54ECCu>(ctx, &aot_mem) && ctx.pc == 0x0898DAA4u) goto L_0898DAA4;
    return;
L_0898DAA4:
    ctx.gpr[4] = (17337u << 16u);
    ctx.gpr[31] = (0x0898DAB0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A54FACu>(ctx, &aot_mem) && ctx.pc == 0x0898DAB0u) goto L_0898DAB0;
    return;
L_0898DAB0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27340)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0898DAC4u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 214u, 0x08A54F6Cu>(ctx, &aot_mem) && ctx.pc == 0x0898DAC4u) goto L_0898DAC4;
    return;
L_0898DAC4:
    ctx.gpr[31] = (0x0898DACCu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x0898DACCu) goto L_0898DACC;
    return;
L_0898DACC:
    ctx.gpr[31] = (0x0898DAD4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x0898DAD4u) goto L_0898DAD4;
    return;
L_0898DAD4:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-24628)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1884));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898DAF8u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898DAF8u) goto L_0898DAF8;
    return;
L_0898DAF8:
    ctx.gpr[31] = (0x0898DB00u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A550ACu>(ctx, &aot_mem) && ctx.pc == 0x0898DB00u) goto L_0898DB00;
    return;
L_0898DB00:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 174u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898DB18u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898DB18u) goto L_0898DB18;
    return;
L_0898DB18:
    ctx.gpr[31] = (0x0898DB20u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x0898DB20u) goto L_0898DB20;
    return;
L_0898DB20:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4624));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(1024)));
    ctx.gpr[5] = (17199u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_0898DB44;
      }
      goto L_0898DB38;
    }
L_0898DB38:
    ctx.gpr[4] = (16840u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    goto L_0898DB44;
L_0898DB44:
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4624));
    ctx.gpr[6] = (17264u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x0898DB64u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3584));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0898DB64u) goto L_0898DB64;
    return;
L_0898DB64:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4624));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(1024)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898DE88;
      }
      goto L_0898DB78;
    }
L_0898DB78:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x0898DB84u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 485u, 0x08986E30u>(ctx, &aot_mem) && ctx.pc == 0x0898DB84u) goto L_0898DB84;
    return;
L_0898DB84:
    ctx.gpr[4] = (2269u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4880));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898DBFC;
      }
      goto L_0898DBA4;
    }
L_0898DBA4:
    ctx.gpr[4] = (2277u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9312));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4880));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6836)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898DBE0;
      }
      goto L_0898DBD8;
    }
L_0898DBD8:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6836), 0u);
    goto L_0898DBE0;
L_0898DBE0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7632)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898DE98;
      }
      goto L_0898DBF0;
    }
L_0898DBF0:
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7632), 0u);
      if (branch_taken) {
          goto L_0898DE98;
      }
      goto L_0898DBFC;
    }
L_0898DBFC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9312));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898DC68;
      }
      goto L_0898DC3C;
    }
L_0898DC3C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0898DCA0;
      }
      goto L_0898DC68;
    }
L_0898DC68:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[5] = (20224u << 16u);
    ctx.gpr[6] = (32768u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[16];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    goto L_0898DCA0;
L_0898DCA0:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_0898DCB8;
      }
      goto L_0898DCAC;
    }
L_0898DCAC:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_0898DCB8;
L_0898DCB8:
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17279u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9312));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898DD00;
      }
      goto L_0898DCEC;
    }
L_0898DCEC:
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9312));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0898DD00;
L_0898DD00:
    ctx.gpr[31] = (0x0898DD08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A54FD0u>(ctx, &aot_mem) && ctx.pc == 0x0898DD08u) goto L_0898DD08;
    return;
L_0898DD08:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29195)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-29194)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898DD48;
      }
      goto L_0898DD24;
    }
L_0898DD24:
    ctx.gpr[4] = (16241u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 60293u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16417u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.gpr[31] = (0x0898DD40u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x0898DD40u) goto L_0898DD40;
    return;
L_0898DD40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898DD64;
      }
      goto L_0898DD48;
    }
L_0898DD48:
    ctx.gpr[4] = (16300u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16486u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.gpr[31] = (0x0898DD64u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x0898DD64u) goto L_0898DD64;
    return;
L_0898DD64:
    ctx.gpr[31] = (0x0898DD6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55030u>(ctx, &aot_mem) && ctx.pc == 0x0898DD6Cu) goto L_0898DD6C;
    return;
L_0898DD6C:
    ctx.gpr[31] = (0x0898DD74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 208u, 0x08A54F14u>(ctx, &aot_mem) && ctx.pc == 0x0898DD74u) goto L_0898DD74;
    return;
L_0898DD74:
    ctx.gpr[31] = (0x0898DD7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54ECCu>(ctx, &aot_mem) && ctx.pc == 0x0898DD7Cu) goto L_0898DD7C;
    return;
L_0898DD7C:
    ctx.gpr[31] = (0x0898DD84u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x0898DD84u) goto L_0898DD84;
    return;
L_0898DD84:
    ctx.gpr[31] = (0x0898DD8Cu);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x0898DD8Cu) goto L_0898DD8C;
    return;
L_0898DD8C:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9312));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-24628)));
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2277u << 16u);
      if (branch_taken) {
          goto L_0898DDC4;
      }
      goto L_0898DDB8;
    }
L_0898DDB8:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-24628)));
    ctx.gpr[4] = (2277u << 16u);
    goto L_0898DDC4;
L_0898DDC4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9312));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1888));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0898DDECu);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898DDECu) goto L_0898DDEC;
    return;
L_0898DDEC:
    ctx.gpr[31] = (0x0898DDF4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A550ACu>(ctx, &aot_mem) && ctx.pc == 0x0898DDF4u) goto L_0898DDF4;
    return;
L_0898DDF4:
    ctx.gpr[31] = (0x0898DDFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0898DDFCu) goto L_0898DDFC;
    return;
L_0898DDFC:
    ctx.gpr[31] = (0x0898DE04u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 257u, 0x089451DCu>(ctx, &aot_mem) && ctx.pc == 0x0898DE04u) goto L_0898DE04;
    return;
L_0898DE04:
    ctx.gpr[31] = (0x0898DE0Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 375u, 0x089D666Cu>(ctx, &aot_mem) && ctx.pc == 0x0898DE0Cu) goto L_0898DE0C;
    return;
L_0898DE0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898DE3C;
      }
      goto L_0898DE14;
    }
L_0898DE14:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1892));
    ctx.gpr[5] = (0u | 77u);
    ctx.gpr[6] = (0u | 155u);
    ctx.gpr[7] = (0u | 210u);
    ctx.gpr[31] = (0x0898DE2Cu);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898DE2Cu) goto L_0898DE2C;
    return;
L_0898DE2C:
    ctx.gpr[31] = (0x0898DE34u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x0898DE34u) goto L_0898DE34;
    return;
L_0898DE34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898DE5C;
      }
      goto L_0898DE3C;
    }
L_0898DE3C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1896));
    ctx.gpr[5] = (0u | 174u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898DE54u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898DE54u) goto L_0898DE54;
    return;
L_0898DE54:
    ctx.gpr[31] = (0x0898DE5Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x0898DE5Cu) goto L_0898DE5C;
    return;
L_0898DE5C:
    ctx.gpr[6] = (17264u << 16u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4624));
    ctx.gpr[6] = (17048u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x0898DE80u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1024));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0898DE80u) goto L_0898DE80;
    return;
L_0898DE80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898DE98;
      }
      goto L_0898DE88;
    }
L_0898DE88:
    ctx.gpr[4] = (2269u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4880));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0898DE98;
L_0898DE98:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4624));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(3072)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_0898E394;
      }
      goto L_0898DEAC;
    }
L_0898DEAC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4624));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(512)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898E394;
      }
      goto L_0898DEBC;
    }
L_0898DEBC:
    ctx.gpr[4] = (2269u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4880));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898DF14;
      }
      goto L_0898DEDC;
    }
L_0898DEDC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7632), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6144), 0u);
    ctx.gpr[4] = (49776u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9344));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4880));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898E3A4;
      }
      goto L_0898DF14;
    }
L_0898DF14:
    ctx.gpr[31] = (0x0898DF1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54EB8u>(ctx, &aot_mem) && ctx.pc == 0x0898DF1Cu) goto L_0898DF1C;
    return;
L_0898DF1C:
    ctx.gpr[31] = (0x0898DF24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A54FD0u>(ctx, &aot_mem) && ctx.pc == 0x0898DF24u) goto L_0898DF24;
    return;
L_0898DF24:
    ctx.gpr[31] = (0x0898DF2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55030u>(ctx, &aot_mem) && ctx.pc == 0x0898DF2Cu) goto L_0898DF2C;
    return;
L_0898DF2C:
    ctx.gpr[31] = (0x0898DF34u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 209u, 0x08A54F2Cu>(ctx, &aot_mem) && ctx.pc == 0x0898DF34u) goto L_0898DF34;
    return;
L_0898DF34:
    ctx.gpr[31] = (0x0898DF3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 207u, 0x08A54EF8u>(ctx, &aot_mem) && ctx.pc == 0x0898DF3Cu) goto L_0898DF3C;
    return;
L_0898DF3C:
    ctx.gpr[31] = (0x0898DF44u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x0898DF44u) goto L_0898DF44;
    return;
L_0898DF44:
    ctx.gpr[4] = (17392u << 16u);
    ctx.gpr[31] = (0x0898DF50u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 214u, 0x08A54F6Cu>(ctx, &aot_mem) && ctx.pc == 0x0898DF50u) goto L_0898DF50;
    return;
L_0898DF50:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898DF84;
      }
      goto L_0898DF60;
    }
L_0898DF60:
    ctx.gpr[4] = (16120u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46473u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16263u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 11010u);
    ctx.gpr[31] = (0x0898DF7Cu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x0898DF7Cu) goto L_0898DF7C;
    return;
L_0898DF7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_0898DFA4;
      }
      goto L_0898DF84;
    }
L_0898DF84:
    ctx.gpr[4] = (16120u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46473u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16263u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 11010u);
    ctx.gpr[31] = (0x0898DFA0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x0898DFA0u) goto L_0898DFA0;
    return;
L_0898DFA0:
    ctx.gpr[4] = (2229u << 16u);
    goto L_0898DFA4;
L_0898DFA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9344));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_0898E1A8;
      }
      goto L_0898DFD0;
    }
L_0898DFD0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9344));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898E040;
      }
      goto L_0898E014;
    }
L_0898E014:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0898E078;
      }
      goto L_0898E040;
    }
L_0898E040:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[5] = (20224u << 16u);
    ctx.gpr[6] = (32768u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[16];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    goto L_0898E078;
L_0898E078:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_0898E090;
      }
      goto L_0898E084;
    }
L_0898E084:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_0898E090;
L_0898E090:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.gpr[8] = (17530u << 16u);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[7] = (20224u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9344));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9312));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_0898E118;
      }
      goto L_0898E0EC;
    }
L_0898E0EC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0898E154;
      }
      goto L_0898E118;
    }
L_0898E118:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[5] = (20224u << 16u);
    ctx.gpr[6] = (32768u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[16];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    goto L_0898E154;
L_0898E154:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_0898E16C;
      }
      goto L_0898E160;
    }
L_0898E160:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_0898E16C;
L_0898E16C:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[5] = (17279u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9312));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898E2FC;
      }
      goto L_0898E190;
    }
L_0898E190:
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9312));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898E2FC;
      }
      goto L_0898E1A8;
    }
L_0898E1A8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4880));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[5] = (17136u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898E2B8;
      }
      goto L_0898E1D4;
    }
L_0898E1D4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[7] = (2277u << 16u);
    ctx.gpr[5] = (17136u << 16u);
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-9312));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4880));
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[8] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898E258;
      }
      goto L_0898E22C;
    }
L_0898E22C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0898E290;
      }
      goto L_0898E258;
    }
L_0898E258:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[5] = (20224u << 16u);
    ctx.gpr[6] = (32768u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[16];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    goto L_0898E290;
L_0898E290:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_0898E2A8;
      }
      goto L_0898E29C;
    }
L_0898E29C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_0898E2A8;
L_0898E2A8:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9312));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0898E2B8;
L_0898E2B8:
    ctx.gpr[4] = (2277u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9312));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2277u << 16u);
      if (branch_taken) {
          goto L_0898E2FC;
      }
      goto L_0898E2D8;
    }
L_0898E2D8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9312));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4624));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(3072), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4880));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0898E2FC;
L_0898E2FC:
    ctx.gpr[16] = (0u | 255u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1900));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 40u);
    ctx.gpr[6] = (0u | 40u);
    ctx.gpr[7] = (0u | 40u);
    ctx.gpr[31] = (0x0898E31Cu);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898E31Cu) goto L_0898E31C;
    return;
L_0898E31C:
    ctx.gpr[31] = (0x0898E324u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x0898E324u) goto L_0898E324;
    return;
L_0898E324:
    ctx.gpr[31] = (0x0898E32Cu);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x0898E32Cu) goto L_0898E32C;
    return;
L_0898E32C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898E344u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898E344u) goto L_0898E344;
    return;
L_0898E344:
    ctx.gpr[31] = (0x0898E34Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A550ACu>(ctx, &aot_mem) && ctx.pc == 0x0898E34Cu) goto L_0898E34C;
    return;
L_0898E34C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 220u);
    ctx.gpr[6] = (0u | 172u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[31] = (0x0898E364u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898E364u) goto L_0898E364;
    return;
L_0898E364:
    ctx.gpr[31] = (0x0898E36Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x0898E36Cu) goto L_0898E36C;
    return;
L_0898E36C:
    ctx.gpr[5] = (17387u << 16u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4624));
    ctx.gpr[5] = (17286u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3072));
    ctx.gpr[31] = (0x0898E38Cu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 79u, 0x08A545A4u>(ctx, &aot_mem) && ctx.pc == 0x0898E38Cu) goto L_0898E38C;
    return;
L_0898E38C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898E3A4;
      }
      goto L_0898E394;
    }
L_0898E394:
    ctx.gpr[4] = (2269u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4880));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0898E3A4;
L_0898E3A4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0898E5A0;
      }
      goto L_0898E3B4;
    }
L_0898E3B4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16657)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898E5A0;
      }
      goto L_0898E3C0;
    }
L_0898E3C0:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1904));
    ctx.gpr[31] = (0x0898E3CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0898E3CCu) goto L_0898E3CC;
    return;
L_0898E3CC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1908), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1909), static_cast<std::uint8_t>(0u));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (17392u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1910), static_cast<std::uint8_t>(0u));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (0u | 180u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1911), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (17288u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1908));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x0898E404u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 897u, 0x08AD39E0u>(ctx, &aot_mem) && ctx.pc == 0x0898E404u) goto L_0898E404;
    return;
L_0898E404:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16658)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898E46C;
      }
      goto L_0898E414;
    }
L_0898E414:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1912));
    ctx.gpr[31] = (0x0898E420u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0898E420u) goto L_0898E420;
    return;
L_0898E420:
    ctx.gpr[6] = (17106u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1916), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1917), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (17282u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1918), static_cast<std::uint8_t>(0u));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (0u | 220u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1919), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (17189u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1916));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x0898E460u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 897u, 0x08AD39E0u>(ctx, &aot_mem) && ctx.pc == 0x0898E460u) goto L_0898E460;
    return;
L_0898E460:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0898E46Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 858u, 0x08AD3674u>(ctx, &aot_mem) && ctx.pc == 0x0898E46Cu) goto L_0898E46C;
    return;
L_0898E46C:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x0898E478u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0898E478u) goto L_0898E478;
    return;
L_0898E478:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x0898E484u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0898E484u) goto L_0898E484;
    return;
L_0898E484:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x0898E490u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0898E490u) goto L_0898E490;
    return;
L_0898E490:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x0898E49Cu);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0898E49Cu) goto L_0898E49C;
    return;
L_0898E49C:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x0898E4A8u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0898E4A8u) goto L_0898E4A8;
    return;
L_0898E4A8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7084)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x0898E4BCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0898E4BCu) goto L_0898E4BC;
    return;
L_0898E4BC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16659))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898E4F0;
      }
      goto L_0898E4CC;
    }
L_0898E4CC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898E540;
      }
      goto L_0898E4D8;
    }
L_0898E4D8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0898E508;
      }
      goto L_0898E4E0;
    }
L_0898E4E0:
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898E540;
      }
      goto L_0898E4F0;
    }
L_0898E4F0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898E51C;
      }
      goto L_0898E4F8;
    }
L_0898E4F8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898E530;
      }
      goto L_0898E500;
    }
L_0898E500:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898E540;
      }
      goto L_0898E508;
    }
L_0898E508:
    ctx.gpr[4] = (17219u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17286u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0898E540;
      }
      goto L_0898E51C;
    }
L_0898E51C:
    ctx.gpr[4] = (17219u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17295u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0898E540;
      }
      goto L_0898E530;
    }
L_0898E530:
    ctx.gpr[4] = (17219u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17304u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0898E540;
L_0898E540:
    ctx.gpr[9] = (16640u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[4] = (0u | 255u);
    ctx.gpr[9] = (15786u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[9] = (ctx.gpr[9] | 43691u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[9] = (16704u << 16u);
    ctx.gpr[6] = (0u | 255u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[7] = (0u | 158u);
    ctx.gpr[31] = (0x0898E57Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 324u, 0x08A263E4u>(ctx, &aot_mem) && ctx.pc == 0x0898E57Cu) goto L_0898E57C;
    return;
L_0898E57C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16661)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898E594;
      }
      goto L_0898E58C;
    }
L_0898E58C:
    ctx.gpr[31] = (0x0898E594u);
    // nop
    goto L_0898FD74;
L_0898E594:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1904));
    ctx.gpr[31] = (0x0898E5A0u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 858u, 0x08AD3674u>(ctx, &aot_mem) && ctx.pc == 0x0898E5A0u) goto L_0898E5A0;
    return;
L_0898E5A0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898E5B8;
      }
      goto L_0898E5B0;
    }
L_0898E5B0:
    ctx.gpr[31] = (0x0898E5B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 26u, 0x089882D8u>(ctx, &aot_mem) && ctx.pc == 0x0898E5B8u) goto L_0898E5B8;
    return;
L_0898E5B8:
    ctx.gpr[31] = (0x0898E5C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 10u, 0x0893811Cu>(ctx, &aot_mem) && ctx.pc == 0x0898E5C0u) goto L_0898E5C0;
    return;
L_0898E5C0:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (50944u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    goto L_0898E5DC;
L_0898E5DC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1932)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1936)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1940)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1944)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1948)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1952)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1956)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1960)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1964)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1968)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1972)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1976)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1980)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1984)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1988)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1992)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(2000));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898E624:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.gpr[4] = (0u | 9u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    ctx.gpr[31] = (0x0898E65Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0898E65Cu) goto L_0898E65C;
    return;
L_0898E65C:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x0898E668u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0898E668u) goto L_0898E668;
    return;
L_0898E668:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x0898E674u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0898E674u) goto L_0898E674;
    return;
L_0898E674:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6920)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898E69C;
      }
      goto L_0898E684;
    }
L_0898E684:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-9280)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_0898E6A4;
      }
      goto L_0898E694;
    }
L_0898E694:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898E99C;
      }
      goto L_0898E69C;
    }
L_0898E69C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898F990;
      }
      goto L_0898E6A4;
    }
L_0898E6A4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4624));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(1024)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898E99C;
      }
      goto L_0898E6B4;
    }
L_0898E6B4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6152)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0898E99C;
      }
      goto L_0898E6C4;
    }
L_0898E6C4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6836)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898E6E0;
      }
      goto L_0898E6D4;
    }
L_0898E6D4:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6836), ctx.gpr[4]);
    goto L_0898E6E0;
L_0898E6E0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7632)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898E6FC;
      }
      goto L_0898E6F0;
    }
L_0898E6F0:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7632), ctx.gpr[4]);
    goto L_0898E6FC;
L_0898E6FC:
    ctx.gpr[31] = (0x0898E704u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54EB8u>(ctx, &aot_mem) && ctx.pc == 0x0898E704u) goto L_0898E704;
    return;
L_0898E704:
    ctx.gpr[31] = (0x0898E70Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A54FD0u>(ctx, &aot_mem) && ctx.pc == 0x0898E70Cu) goto L_0898E70C;
    return;
L_0898E70C:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898E728u);
    ctx.gpr[8] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898E728u) goto L_0898E728;
    return;
L_0898E728:
    ctx.gpr[31] = (0x0898E730u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 222u, 0x08A54FE0u>(ctx, &aot_mem) && ctx.pc == 0x0898E730u) goto L_0898E730;
    return;
L_0898E730:
    ctx.gpr[31] = (0x0898E738u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54ECCu>(ctx, &aot_mem) && ctx.pc == 0x0898E738u) goto L_0898E738;
    return;
L_0898E738:
    ctx.gpr[31] = (0x0898E740u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55030u>(ctx, &aot_mem) && ctx.pc == 0x0898E740u) goto L_0898E740;
    return;
L_0898E740:
    ctx.gpr[31] = (0x0898E748u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x0898E748u) goto L_0898E748;
    return;
L_0898E748:
    ctx.gpr[31] = (0x0898E750u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x0898E750u) goto L_0898E750;
    return;
L_0898E750:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 225u);
    ctx.gpr[6] = (0u | 225u);
    ctx.gpr[7] = (0u | 225u);
    ctx.gpr[31] = (0x0898E768u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898E768u) goto L_0898E768;
    return;
L_0898E768:
    ctx.gpr[31] = (0x0898E770u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x0898E770u) goto L_0898E770;
    return;
L_0898E770:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(117)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898E81C;
      }
      goto L_0898E784;
    }
L_0898E784:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2228u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-24591), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25492)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0898E7AC;
      }
      goto L_0898E7A0;
    }
L_0898E7A0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(935)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898E994;
      }
      goto L_0898E7AC;
    }
L_0898E7AC:
    ctx.gpr[4] = (17362u << 16u);
    ctx.gpr[31] = (0x0898E7B8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A54FACu>(ctx, &aot_mem) && ctx.pc == 0x0898E7B8u) goto L_0898E7B8;
    return;
L_0898E7B8:
    ctx.gpr[4] = (16079u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16882u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.gpr[31] = (0x0898E7D4u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x0898E7D4u) goto L_0898E7D4;
    return;
L_0898E7D4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898E7ECu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898E7ECu) goto L_0898E7EC;
    return;
L_0898E7EC:
    ctx.gpr[31] = (0x0898E7F4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A550ACu>(ctx, &aot_mem) && ctx.pc == 0x0898E7F4u) goto L_0898E7F4;
    return;
L_0898E7F4:
    ctx.gpr[4] = (17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (17241u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[31] = (0x0898E814u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9280));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0898E814u) goto L_0898E814;
    return;
L_0898E814:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898E994;
      }
      goto L_0898E81C;
    }
L_0898E81C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-24591)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898E834;
      }
      goto L_0898E82C;
    }
L_0898E82C:
    ctx.gpr[4] = (2277u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-9280), static_cast<std::uint16_t>(0u));
    goto L_0898E834;
L_0898E834:
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-24591), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 225u);
    ctx.gpr[6] = (0u | 225u);
    ctx.gpr[7] = (0u | 225u);
    ctx.gpr[31] = (0x0898E858u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898E858u) goto L_0898E858;
    return;
L_0898E858:
    ctx.gpr[31] = (0x0898E860u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x0898E860u) goto L_0898E860;
    return;
L_0898E860:
    ctx.gpr[31] = (0x0898E868u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 194u, 0x08A54DCCu>(ctx, &aot_mem) && ctx.pc == 0x0898E868u) goto L_0898E868;
    return;
L_0898E868:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898E880u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898E880u) goto L_0898E880;
    return;
L_0898E880:
    ctx.gpr[31] = (0x0898E888u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A550ACu>(ctx, &aot_mem) && ctx.pc == 0x0898E888u) goto L_0898E888;
    return;
L_0898E888:
    ctx.gpr[4] = (16079u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16882u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.gpr[31] = (0x0898E8A4u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x0898E8A4u) goto L_0898E8A4;
    return;
L_0898E8A4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x0898E8B0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4576));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 584u, 0x08ADA6C0u>(ctx, &aot_mem) && ctx.pc == 0x0898E8B0u) goto L_0898E8B0;
    return;
L_0898E8B0:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898E95C;
      }
      goto L_0898E8BC;
    }
L_0898E8BC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6803)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898E95C;
      }
      goto L_0898E8C8;
    }
L_0898E8C8:
    ctx.gpr[31] = (0x0898E8D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 497u, 0x08986F84u>(ctx, &aot_mem) && ctx.pc == 0x0898E8D0u) goto L_0898E8D0;
    return;
L_0898E8D0:
    ctx.gpr[31] = (0x0898E8D8u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 505u, 0x08986FE4u>(ctx, &aot_mem) && ctx.pc == 0x0898E8D8u) goto L_0898E8D8;
    return;
L_0898E8D8:
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[22];
    ctx.gpr[4] = (17385u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.gpr[31] = (0x0898E8FCu);
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A54FACu>(ctx, &aot_mem) && ctx.pc == 0x0898E8FCu) goto L_0898E8FC;
    return;
L_0898E8FC:
    ctx.gpr[31] = (0x0898E904u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 497u, 0x08986F84u>(ctx, &aot_mem) && ctx.pc == 0x0898E904u) goto L_0898E904;
    return;
L_0898E904:
    ctx.gpr[31] = (0x0898E90Cu);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 505u, 0x08986FE4u>(ctx, &aot_mem) && ctx.pc == 0x0898E90Cu) goto L_0898E90C;
    return;
L_0898E90C:
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[22];
    ctx.gpr[31] = (0x0898E918u);
    ctx.fpr[26] = ctx.fpr[12] + ctx.fpr[26];
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 497u, 0x08986F84u>(ctx, &aot_mem) && ctx.pc == 0x0898E918u) goto L_0898E918;
    return;
L_0898E918:
    ctx.gpr[31] = (0x0898E920u);
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 505u, 0x08986FE4u>(ctx, &aot_mem) && ctx.pc == 0x0898E920u) goto L_0898E920;
    return;
L_0898E920:
    ctx.fpr[13] = ctx.fpr[0] + ctx.fpr[22];
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[4] = (17245u << 16u);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[28];
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9280));
    ctx.gpr[5] = (0u | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x0898E954u);
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0898E954u) goto L_0898E954;
    return;
L_0898E954:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898E988;
      }
      goto L_0898E95C;
    }
L_0898E95C:
    ctx.gpr[4] = (17379u << 16u);
    ctx.gpr[31] = (0x0898E968u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A54FACu>(ctx, &aot_mem) && ctx.pc == 0x0898E968u) goto L_0898E968;
    return;
L_0898E968:
    ctx.gpr[4] = (17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (17245u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[31] = (0x0898E988u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9280));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0898E988u) goto L_0898E988;
    return;
L_0898E988:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6563), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0898E994;
L_0898E994:
    ctx.gpr[31] = (0x0898E99Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x0898E99Cu) goto L_0898E99C;
    return;
L_0898E99C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 48 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898EC88;
      }
      goto L_0898E9AC;
    }
L_0898E9AC:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    goto L_0898E9B0;
L_0898E9B0:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2274u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23488));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0898EC74;
      }
      goto L_0898E9D8;
    }
L_0898E9D8:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2274u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23488));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(29)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0898EC74;
      }
      goto L_0898EA00;
    }
L_0898EA00:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[17] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2274u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(23488));
    ctx.gpr[19] = (ctx.gpr[17] + ctx.gpr[18]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0898EA34u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x0898EA34u) goto L_0898EA34;
    return;
L_0898EA34:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[31] = (0x0898EA4Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x0898EA4Cu) goto L_0898EA4C;
    return;
L_0898EA4C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898EA68;
      }
      goto L_0898EA58;
    }
L_0898EA58:
    ctx.gpr[31] = (0x0898EA60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 203u, 0x08A54E9Cu>(ctx, &aot_mem) && ctx.pc == 0x0898EA60u) goto L_0898EA60;
    return;
L_0898EA60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0898EA74;
      }
      goto L_0898EA68;
    }
L_0898EA68:
    ctx.gpr[31] = (0x0898EA70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54EB8u>(ctx, &aot_mem) && ctx.pc == 0x0898EA70u) goto L_0898EA70;
    return;
L_0898EA70:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    goto L_0898EA74;
L_0898EA74:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2274u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23488));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(30)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898EAAC;
      }
      goto L_0898EA9C;
    }
L_0898EA9C:
    ctx.gpr[31] = (0x0898EAA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 207u, 0x08A54EF8u>(ctx, &aot_mem) && ctx.pc == 0x0898EAA4u) goto L_0898EAA4;
    return;
L_0898EAA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0898EAB8;
      }
      goto L_0898EAAC;
    }
L_0898EAAC:
    ctx.gpr[31] = (0x0898EAB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 208u, 0x08A54F14u>(ctx, &aot_mem) && ctx.pc == 0x0898EAB4u) goto L_0898EAB4;
    return;
L_0898EAB4:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    goto L_0898EAB8;
L_0898EAB8:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2274u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23488));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898EAF0;
      }
      goto L_0898EAE0;
    }
L_0898EAE0:
    ctx.gpr[31] = (0x0898EAE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54ECCu>(ctx, &aot_mem) && ctx.pc == 0x0898EAE8u) goto L_0898EAE8;
    return;
L_0898EAE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0898EAFC;
      }
      goto L_0898EAF0;
    }
L_0898EAF0:
    ctx.gpr[31] = (0x0898EAF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 206u, 0x08A54EE8u>(ctx, &aot_mem) && ctx.pc == 0x0898EAF8u) goto L_0898EAF8;
    return;
L_0898EAF8:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    goto L_0898EAFC;
L_0898EAFC:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2274u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23488));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x0898EB20u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 214u, 0x08A54F6Cu>(ctx, &aot_mem) && ctx.pc == 0x0898EB20u) goto L_0898EB20;
    return;
L_0898EB20:
    ctx.gpr[31] = (0x0898EB28u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A54FACu>(ctx, &aot_mem) && ctx.pc == 0x0898EB28u) goto L_0898EB28;
    return;
L_0898EB28:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(14)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898EB44;
      }
      goto L_0898EB34;
    }
L_0898EB34:
    ctx.gpr[31] = (0x0898EB3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 220u, 0x08A54FBCu>(ctx, &aot_mem) && ctx.pc == 0x0898EB3Cu) goto L_0898EB3C;
    return;
L_0898EB3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0898EB50;
      }
      goto L_0898EB44;
    }
L_0898EB44:
    ctx.gpr[31] = (0x0898EB4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A54FD0u>(ctx, &aot_mem) && ctx.pc == 0x0898EB4Cu) goto L_0898EB4C;
    return;
L_0898EB4C:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    goto L_0898EB50;
L_0898EB50:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[17] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2274u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(23488));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[31] = (0x0898EB80u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 222u, 0x08A54FE0u>(ctx, &aot_mem) && ctx.pc == 0x0898EB80u) goto L_0898EB80;
    return;
L_0898EB80:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(15)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898EBA0;
      }
      goto L_0898EB90;
    }
L_0898EB90:
    ctx.gpr[31] = (0x0898EB98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 223u, 0x08A5500Cu>(ctx, &aot_mem) && ctx.pc == 0x0898EB98u) goto L_0898EB98;
    return;
L_0898EB98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0898EBAC;
      }
      goto L_0898EBA0;
    }
L_0898EBA0:
    ctx.gpr[31] = (0x0898EBA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 224u, 0x08A55020u>(ctx, &aot_mem) && ctx.pc == 0x0898EBA8u) goto L_0898EBA8;
    return;
L_0898EBA8:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    goto L_0898EBAC;
L_0898EBAC:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2274u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23488));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898EBE4;
      }
      goto L_0898EBD4;
    }
L_0898EBD4:
    ctx.gpr[31] = (0x0898EBDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55030u>(ctx, &aot_mem) && ctx.pc == 0x0898EBDCu) goto L_0898EBDC;
    return;
L_0898EBDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0898EBF0;
      }
      goto L_0898EBE4;
    }
L_0898EBE4:
    ctx.gpr[31] = (0x0898EBECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 226u, 0x08A55044u>(ctx, &aot_mem) && ctx.pc == 0x0898EBECu) goto L_0898EBEC;
    return;
L_0898EBEC:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    goto L_0898EBF0;
L_0898EBF0:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[17] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2274u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(23488));
    ctx.gpr[19] = (ctx.gpr[17] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[31] = (0x0898EC1Cu);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x0898EC1Cu) goto L_0898EC1C;
    return;
L_0898EC1C:
    ctx.gpr[4] = (17440u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27340)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[4] = (17376u << 16u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(44));
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x0898EC74u);
    ctx.fpr[13] = ctx.fpr[16] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0898EC74u) goto L_0898EC74;
    return;
L_0898EC74:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 48 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0898E9B0;
      }
      goto L_0898EC88;
    }
L_0898EC88:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898EDB0;
      }
      goto L_0898EC98;
    }
L_0898EC98:
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
    goto L_0898EC9C;
L_0898EC9C:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22432));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
      if (branch_taken) {
          goto L_0898ED9C;
      }
      goto L_0898ECBC;
    }
L_0898ECBC:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22432));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
      if (branch_taken) {
          goto L_0898ED9C;
      }
      goto L_0898ECDC;
    }
L_0898ECDC:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22432));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
      if (branch_taken) {
          goto L_0898ED48;
      }
      goto L_0898ECFC;
    }
L_0898ECFC:
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22432));
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[18]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x0898ED2Cu);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x0898ED2Cu) goto L_0898ED2C;
    return;
L_0898ED2C:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0898ED40u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 935u, 0x08AD3DD0u>(ctx, &aot_mem) && ctx.pc == 0x0898ED40u) goto L_0898ED40;
    return;
L_0898ED40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898ED9C;
      }
      goto L_0898ED48;
    }
L_0898ED48:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22432));
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[18]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2))))));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-22048));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x0898ED88u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x0898ED88u) goto L_0898ED88;
    return;
L_0898ED88:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(20));
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0898ED9Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 906u, 0x08AD3ABCu>(ctx, &aot_mem) && ctx.pc == 0x0898ED9Cu) goto L_0898ED9C;
    return;
L_0898ED9C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
      if (branch_taken) {
          goto L_0898EC9C;
      }
      goto L_0898EDB0;
    }
L_0898EDB0:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4624));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(1536)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898EF34;
      }
      goto L_0898EDC4;
    }
L_0898EDC4:
    ctx.gpr[31] = (0x0898EDCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54EB8u>(ctx, &aot_mem) && ctx.pc == 0x0898EDCCu) goto L_0898EDCC;
    return;
L_0898EDCC:
    ctx.gpr[31] = (0x0898EDD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A54FD0u>(ctx, &aot_mem) && ctx.pc == 0x0898EDD4u) goto L_0898EDD4;
    return;
L_0898EDD4:
    ctx.gpr[4] = (16120u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46473u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16263u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 11010u);
    ctx.gpr[31] = (0x0898EDF0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x0898EDF0u) goto L_0898EDF0;
    return;
L_0898EDF0:
    ctx.gpr[31] = (0x0898EDF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54ECCu>(ctx, &aot_mem) && ctx.pc == 0x0898EDF8u) goto L_0898EDF8;
    return;
L_0898EDF8:
    ctx.gpr[31] = (0x0898EE00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55030u>(ctx, &aot_mem) && ctx.pc == 0x0898EE00u) goto L_0898EE00;
    return;
L_0898EE00:
    ctx.gpr[4] = (17430u << 16u);
    ctx.gpr[31] = (0x0898EE0Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A54FACu>(ctx, &aot_mem) && ctx.pc == 0x0898EE0Cu) goto L_0898EE0C;
    return;
L_0898EE0C:
    ctx.gpr[31] = (0x0898EE14u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x0898EE14u) goto L_0898EE14;
    return;
L_0898EE14:
    ctx.gpr[31] = (0x0898EE1Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x0898EE1Cu) goto L_0898EE1C;
    return;
L_0898EE1C:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[17] = (2228u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-24628)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0898EE3Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898EE3Cu) goto L_0898EE3C;
    return;
L_0898EE3C:
    ctx.gpr[31] = (0x0898EE44u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A550ACu>(ctx, &aot_mem) && ctx.pc == 0x0898EE44u) goto L_0898EE44;
    return;
L_0898EE44:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-24628)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 106u);
    ctx.gpr[31] = (0x0898EE5Cu);
    ctx.gpr[7] = (0u | 164u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898EE5Cu) goto L_0898EE5C;
    return;
L_0898EE5C:
    ctx.gpr[31] = (0x0898EE64u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x0898EE64u) goto L_0898EE64;
    return;
L_0898EE64:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x0898EE70u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4576));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 584u, 0x08ADA6C0u>(ctx, &aot_mem) && ctx.pc == 0x0898EE70u) goto L_0898EE70;
    return;
L_0898EE70:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898EF10;
      }
      goto L_0898EE7C;
    }
L_0898EE7C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6803)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898EF10;
      }
      goto L_0898EE88;
    }
L_0898EE88:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7660)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0898EF10;
      }
      goto L_0898EE98;
    }
L_0898EE98:
    ctx.gpr[31] = (0x0898EEA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 497u, 0x08986F84u>(ctx, &aot_mem) && ctx.pc == 0x0898EEA0u) goto L_0898EEA0;
    return;
L_0898EEA0:
    ctx.gpr[31] = (0x0898EEA8u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 505u, 0x08986FE4u>(ctx, &aot_mem) && ctx.pc == 0x0898EEA8u) goto L_0898EEA8;
    return;
L_0898EEA8:
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[22];
    ctx.gpr[31] = (0x0898EEBCu);
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[20];
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 497u, 0x08986F84u>(ctx, &aot_mem) && ctx.pc == 0x0898EEBCu) goto L_0898EEBC;
    return;
L_0898EEBC:
    ctx.gpr[31] = (0x0898EEC4u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 505u, 0x08986FE4u>(ctx, &aot_mem) && ctx.pc == 0x0898EEC4u) goto L_0898EEC4;
    return;
L_0898EEC4:
    ctx.fpr[13] = ctx.fpr[0] + ctx.fpr[22];
    ctx.gpr[4] = (17385u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[24];
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17220u << 16u);
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4624));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1536));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0898EF08u);
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0898EF08u) goto L_0898EF08;
    return;
L_0898EF08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898EF34;
      }
      goto L_0898EF10;
    }
L_0898EF10:
    ctx.gpr[6] = (17264u << 16u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4624));
    ctx.gpr[6] = (17220u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x0898EF34u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1536));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0898EF34u) goto L_0898EF34;
    return;
L_0898EF34:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4624));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(512)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_0898F030;
      }
      goto L_0898EF48;
    }
L_0898EF48:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4624));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(3072)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898F030;
      }
      goto L_0898EF58;
    }
L_0898EF58:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4624));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2048)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898F030;
      }
      goto L_0898EF6C;
    }
L_0898EF6C:
    ctx.gpr[31] = (0x0898EF74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54EB8u>(ctx, &aot_mem) && ctx.pc == 0x0898EF74u) goto L_0898EF74;
    return;
L_0898EF74:
    ctx.gpr[31] = (0x0898EF7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A54FD0u>(ctx, &aot_mem) && ctx.pc == 0x0898EF7Cu) goto L_0898EF7C;
    return;
L_0898EF7C:
    ctx.gpr[4] = (16120u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46473u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16263u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 11010u);
    ctx.gpr[31] = (0x0898EF98u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x0898EF98u) goto L_0898EF98;
    return;
L_0898EF98:
    ctx.gpr[31] = (0x0898EFA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54ECCu>(ctx, &aot_mem) && ctx.pc == 0x0898EFA0u) goto L_0898EFA0;
    return;
L_0898EFA0:
    ctx.gpr[31] = (0x0898EFA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55030u>(ctx, &aot_mem) && ctx.pc == 0x0898EFA8u) goto L_0898EFA8;
    return;
L_0898EFA8:
    ctx.gpr[4] = (17425u << 16u);
    ctx.gpr[31] = (0x0898EFB4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A54FACu>(ctx, &aot_mem) && ctx.pc == 0x0898EFB4u) goto L_0898EFB4;
    return;
L_0898EFB4:
    ctx.gpr[31] = (0x0898EFBCu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x0898EFBCu) goto L_0898EFBC;
    return;
L_0898EFBC:
    ctx.gpr[31] = (0x0898EFC4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x0898EFC4u) goto L_0898EFC4;
    return;
L_0898EFC4:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[17] = (2228u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-24628)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0898EFE4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898EFE4u) goto L_0898EFE4;
    return;
L_0898EFE4:
    ctx.gpr[31] = (0x0898EFECu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A550ACu>(ctx, &aot_mem) && ctx.pc == 0x0898EFECu) goto L_0898EFEC;
    return;
L_0898EFEC:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-24628)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[6] = (0u | 143u);
    ctx.gpr[31] = (0x0898F004u);
    ctx.gpr[7] = (0u | 59u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898F004u) goto L_0898F004;
    return;
L_0898F004:
    ctx.gpr[31] = (0x0898F00Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x0898F00Cu) goto L_0898F00C;
    return;
L_0898F00C:
    ctx.gpr[6] = (17264u << 16u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4624));
    ctx.gpr[6] = (17220u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x0898F030u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2048));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0898F030u) goto L_0898F030;
    return;
L_0898F030:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6176)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898F10C;
      }
      goto L_0898F04C;
    }
L_0898F04C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898F0AC;
      }
      goto L_0898F080;
    }
L_0898F080:
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
          goto L_0898F0E4;
      }
      goto L_0898F0AC;
    }
L_0898F0AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[5] = (20224u << 16u);
    ctx.gpr[6] = (32768u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    goto L_0898F0E4;
L_0898F0E4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_0898F0FC;
      }
      goto L_0898F0F0;
    }
L_0898F0F0:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0898F0FC;
L_0898F0FC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6176)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0898F10C;
L_0898F10C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4624));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2560)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898F480;
      }
      goto L_0898F120;
    }
L_0898F120:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6176)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0898F480;
      }
      goto L_0898F138;
    }
L_0898F138:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-25210))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898F17C;
      }
      goto L_0898F14C;
    }
L_0898F14C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0898F358;
      }
      goto L_0898F154;
    }
L_0898F154:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_0898F194;
      }
      goto L_0898F15C;
    }
L_0898F15C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2228u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-25210), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (17342u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6180), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898F358;
      }
      goto L_0898F17C;
    }
L_0898F17C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898F214;
      }
      goto L_0898F184;
    }
L_0898F184:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898F2E8;
      }
      goto L_0898F18C;
    }
L_0898F18C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898F358;
      }
      goto L_0898F194;
    }
L_0898F194:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6180)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898F1F8;
      }
      goto L_0898F1B4;
    }
L_0898F1B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6180)));
    ctx.gpr[4] = (16576u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898F1E8;
      }
      goto L_0898F1DC;
    }
L_0898F1DC:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    goto L_0898F1E8;
L_0898F1E8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6180)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6180), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898F20C;
      }
      goto L_0898F1F8;
    }
L_0898F1F8:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (2228u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-25210), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-6182), static_cast<std::uint16_t>(0u));
    goto L_0898F20C;
L_0898F20C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898F358;
      }
      goto L_0898F214;
    }
L_0898F214:
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
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-6182))))));
      if (branch_taken) {
          goto L_0898F27C;
      }
      goto L_0898F250;
    }
L_0898F250:
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
          goto L_0898F2B8;
      }
      goto L_0898F27C;
    }
L_0898F27C:
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
    goto L_0898F2B8;
L_0898F2B8:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-6182), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-6182))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 1501 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898F2E0;
      }
      goto L_0898F2D4;
    }
L_0898F2D4:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (2228u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-25210), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_0898F2E0;
L_0898F2E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898F358;
      }
      goto L_0898F2E8;
    }
L_0898F2E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6180)));
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898F31C;
      }
      goto L_0898F310;
    }
L_0898F310:
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    goto L_0898F31C;
L_0898F31C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6180)));
    ctx.gpr[5] = (50110u << 16u);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6180), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898F358;
      }
      goto L_0898F33C;
    }
L_0898F33C:
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-25210), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (17820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0898F358;
L_0898F358:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4624));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(512)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_0898F480;
      }
      goto L_0898F36C;
    }
L_0898F36C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4624));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(3072)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898F480;
      }
      goto L_0898F37C;
    }
L_0898F37C:
    ctx.gpr[31] = (0x0898F384u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54EB8u>(ctx, &aot_mem) && ctx.pc == 0x0898F384u) goto L_0898F384;
    return;
L_0898F384:
    ctx.gpr[31] = (0x0898F38Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A54FD0u>(ctx, &aot_mem) && ctx.pc == 0x0898F38Cu) goto L_0898F38C;
    return;
L_0898F38C:
    ctx.gpr[4] = (16120u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46473u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16263u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 11010u);
    ctx.gpr[31] = (0x0898F3A8u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x0898F3A8u) goto L_0898F3A8;
    return;
L_0898F3A8:
    ctx.gpr[31] = (0x0898F3B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54ECCu>(ctx, &aot_mem) && ctx.pc == 0x0898F3B0u) goto L_0898F3B0;
    return;
L_0898F3B0:
    ctx.gpr[31] = (0x0898F3B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55030u>(ctx, &aot_mem) && ctx.pc == 0x0898F3B8u) goto L_0898F3B8;
    return;
L_0898F3B8:
    ctx.gpr[4] = (17420u << 16u);
    ctx.gpr[31] = (0x0898F3C4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A54FACu>(ctx, &aot_mem) && ctx.pc == 0x0898F3C4u) goto L_0898F3C4;
    return;
L_0898F3C4:
    ctx.gpr[31] = (0x0898F3CCu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x0898F3CCu) goto L_0898F3CC;
    return;
L_0898F3CC:
    ctx.gpr[31] = (0x0898F3D4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x0898F3D4u) goto L_0898F3D4;
    return;
L_0898F3D4:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-24628)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0898F3F4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898F3F4u) goto L_0898F3F4;
    return;
L_0898F3F4:
    ctx.gpr[31] = (0x0898F3FCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A550ACu>(ctx, &aot_mem) && ctx.pc == 0x0898F3FCu) goto L_0898F3FC;
    return;
L_0898F3FC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x0898F414u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898F414u) goto L_0898F414;
    return;
L_0898F414:
    ctx.gpr[31] = (0x0898F41Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x0898F41Cu) goto L_0898F41C;
    return;
L_0898F41C:
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
    ctx.gpr[6] = (17234u << 16u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4624));
    ctx.gpr[7] = (17264u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2560));
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = ctx.fpr[14] / ctx.fpr[13];
    ctx.gpr[31] = (0x0898F480u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0898F480u) goto L_0898F480;
    return;
L_0898F480:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4624));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(512)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898F980;
      }
      goto L_0898F494;
    }
L_0898F494:
    ctx.gpr[4] = (2269u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4880));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898F4EC;
      }
      goto L_0898F4B4;
    }
L_0898F4B4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7632), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6144), 0u);
    ctx.gpr[4] = (49776u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9344));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4880));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898F990;
      }
      goto L_0898F4EC;
    }
L_0898F4EC:
    ctx.gpr[31] = (0x0898F4F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54EB8u>(ctx, &aot_mem) && ctx.pc == 0x0898F4F4u) goto L_0898F4F4;
    return;
L_0898F4F4:
    ctx.gpr[31] = (0x0898F4FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A54FD0u>(ctx, &aot_mem) && ctx.pc == 0x0898F4FCu) goto L_0898F4FC;
    return;
L_0898F4FC:
    ctx.gpr[31] = (0x0898F504u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55030u>(ctx, &aot_mem) && ctx.pc == 0x0898F504u) goto L_0898F504;
    return;
L_0898F504:
    ctx.gpr[31] = (0x0898F50Cu);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 209u, 0x08A54F2Cu>(ctx, &aot_mem) && ctx.pc == 0x0898F50Cu) goto L_0898F50C;
    return;
L_0898F50C:
    ctx.gpr[31] = (0x0898F514u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 207u, 0x08A54EF8u>(ctx, &aot_mem) && ctx.pc == 0x0898F514u) goto L_0898F514;
    return;
L_0898F514:
    ctx.gpr[31] = (0x0898F51Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x0898F51Cu) goto L_0898F51C;
    return;
L_0898F51C:
    ctx.gpr[4] = (17392u << 16u);
    ctx.gpr[31] = (0x0898F528u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 214u, 0x08A54F6Cu>(ctx, &aot_mem) && ctx.pc == 0x0898F528u) goto L_0898F528;
    return;
L_0898F528:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898F55C;
      }
      goto L_0898F538;
    }
L_0898F538:
    ctx.gpr[4] = (16120u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46473u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16263u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 11010u);
    ctx.gpr[31] = (0x0898F554u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x0898F554u) goto L_0898F554;
    return;
L_0898F554:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_0898F57C;
      }
      goto L_0898F55C;
    }
L_0898F55C:
    ctx.gpr[4] = (16120u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46473u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16263u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 11010u);
    ctx.gpr[31] = (0x0898F578u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x0898F578u) goto L_0898F578;
    return;
L_0898F578:
    ctx.gpr[4] = (2229u << 16u);
    goto L_0898F57C;
L_0898F57C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9344));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_0898F780;
      }
      goto L_0898F5A8;
    }
L_0898F5A8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9344));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898F618;
      }
      goto L_0898F5EC;
    }
L_0898F5EC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898F650;
      }
      goto L_0898F618;
    }
L_0898F618:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[5] = (20224u << 16u);
    ctx.gpr[6] = (32768u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[16];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    goto L_0898F650;
L_0898F650:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_0898F668;
      }
      goto L_0898F65C;
    }
L_0898F65C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    goto L_0898F668;
L_0898F668:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.gpr[8] = (17530u << 16u);
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[7] = (20224u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9312));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9344));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[17]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0898F6F0;
      }
      goto L_0898F6C4;
    }
L_0898F6C4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0898F72C;
      }
      goto L_0898F6F0;
    }
L_0898F6F0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[5] = (20224u << 16u);
    ctx.gpr[6] = (32768u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[16];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    goto L_0898F72C;
L_0898F72C:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_0898F744;
      }
      goto L_0898F738;
    }
L_0898F738:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_0898F744;
L_0898F744:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[5] = (17279u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9312));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898F8E8;
      }
      goto L_0898F768;
    }
L_0898F768:
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9312));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898F8E8;
      }
      goto L_0898F780;
    }
L_0898F780:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4880));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[5] = (17136u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898F8A4;
      }
      goto L_0898F7AC;
    }
L_0898F7AC:
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4880));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x0898F7CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 133u, 0x088ED0C8u>(ctx, &aot_mem) && ctx.pc == 0x0898F7CCu) goto L_0898F7CC;
    return;
L_0898F7CC:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898F8A4;
      }
      goto L_0898F7D8;
    }
L_0898F7D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9312));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898F844;
      }
      goto L_0898F818;
    }
L_0898F818:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0898F87C;
      }
      goto L_0898F844;
    }
L_0898F844:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[5] = (20224u << 16u);
    ctx.gpr[6] = (32768u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[16];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    goto L_0898F87C;
L_0898F87C:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_0898F894;
      }
      goto L_0898F888;
    }
L_0898F888:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_0898F894;
L_0898F894:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9312));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0898F8A4;
L_0898F8A4:
    ctx.gpr[4] = (2277u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9312));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2277u << 16u);
      if (branch_taken) {
          goto L_0898F8E8;
      }
      goto L_0898F8C4;
    }
L_0898F8C4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9312));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4624));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(512), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4880));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0898F8E8;
L_0898F8E8:
    ctx.gpr[16] = (0u | 255u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 40u);
    ctx.gpr[6] = (0u | 40u);
    ctx.gpr[7] = (0u | 40u);
    ctx.gpr[31] = (0x0898F908u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898F908u) goto L_0898F908;
    return;
L_0898F908:
    ctx.gpr[31] = (0x0898F910u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x0898F910u) goto L_0898F910;
    return;
L_0898F910:
    ctx.gpr[31] = (0x0898F918u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x0898F918u) goto L_0898F918;
    return;
L_0898F918:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898F930u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898F930u) goto L_0898F930;
    return;
L_0898F930:
    ctx.gpr[31] = (0x0898F938u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A550ACu>(ctx, &aot_mem) && ctx.pc == 0x0898F938u) goto L_0898F938;
    return;
L_0898F938:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 220u);
    ctx.gpr[6] = (0u | 172u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[31] = (0x0898F950u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898F950u) goto L_0898F950;
    return;
L_0898F950:
    ctx.gpr[31] = (0x0898F958u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x0898F958u) goto L_0898F958;
    return;
L_0898F958:
    ctx.gpr[5] = (17387u << 16u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4624));
    ctx.gpr[5] = (17286u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(512));
    ctx.gpr[31] = (0x0898F978u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 79u, 0x08A545A4u>(ctx, &aot_mem) && ctx.pc == 0x0898F978u) goto L_0898F978;
    return;
L_0898F978:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898F990;
      }
      goto L_0898F980;
    }
L_0898F980:
    ctx.gpr[4] = (2269u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4880));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0898F990;
L_0898F990:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898F9C0:
    ctx.gpr[7] = (17279u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
      if (branch_taken) {
          goto L_0898FA08;
      }
      goto L_0898F9DC;
    }
L_0898F9DC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_0898FA74;
      }
      goto L_0898F9E4;
    }
L_0898F9E4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    // nop
      if (branch_taken) {
          goto L_0898FA24;
      }
      goto L_0898F9EC;
    }
L_0898F9EC:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6512)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6064)));
    ctx.gpr[6] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6060)));
      if (branch_taken) {
          goto L_0898FA74;
      }
      goto L_0898FA08;
    }
L_0898FA08:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898FA40;
      }
      goto L_0898FA14;
    }
L_0898FA14:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898FA5C;
      }
      goto L_0898FA1C;
    }
L_0898FA1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898FA74;
      }
      goto L_0898FA24;
    }
L_0898FA24:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6084)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6092)));
    ctx.gpr[6] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6088)));
      if (branch_taken) {
          goto L_0898FA74;
      }
      goto L_0898FA40;
    }
L_0898FA40:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6508)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6076)));
    ctx.gpr[6] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6072)));
      if (branch_taken) {
          goto L_0898FA74;
      }
      goto L_0898FA5C;
    }
L_0898FA5C:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6044)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6052)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6048)));
    goto L_0898FA74;
L_0898FA74:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898FABC;
      }
      goto L_0898FA7C;
    }
L_0898FA7C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_0898FAA0;
      }
      goto L_0898FA88;
    }
L_0898FA88:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) < 0;
    // nop
      if (branch_taken) {
          goto L_0898FABC;
      }
      goto L_0898FA90;
    }
L_0898FA90:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0898FAB0;
      }
      goto L_0898FA98;
    }
L_0898FA98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898FAB4;
      }
      goto L_0898FAA0;
    }
L_0898FAA0:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0898FAB4;
      }
      goto L_0898FAA8;
    }
L_0898FAA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898FABC;
      }
      goto L_0898FAB0;
    }
L_0898FAB0:
    ctx.gpr[6] = (0u | 0u);
    goto L_0898FAB4;
L_0898FAB4:
    ctx.gpr[8] = (0u | 2u);
    ctx.gpr[7] = (0u | 5u);
    goto L_0898FABC;
L_0898FABC:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (0u | 5u);
      if (branch_taken) {
          goto L_0898FCA4;
      }
      goto L_0898FAC4;
    }
L_0898FAC4:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[5];
    ctx.gpr[9] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898FCA4;
      }
      goto L_0898FACC;
    }
L_0898FACC:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[9] = (16968u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < 2 ? 1u : 0u);
    ctx.gpr[9] = (17530u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[9] = (20224u << 16u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
      if (branch_taken) {
          goto L_0898FB00;
      }
      goto L_0898FAF0;
    }
L_0898FAF0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0898FC54;
      }
      goto L_0898FAF8;
    }
L_0898FAF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898FC28;
      }
      goto L_0898FB00;
    }
L_0898FB00:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898FB1C;
      }
      goto L_0898FB0C;
    }
L_0898FB0C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898FBA4;
      }
      goto L_0898FB14;
    }
L_0898FB14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898FC54;
      }
      goto L_0898FB1C;
    }
L_0898FB1C:
    ctx.fpr[13] = ctx.fpr[17] / ctx.fpr[16];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0898FB4C;
      }
      goto L_0898FB34;
    }
L_0898FB34:
    ctx.fpr[13] = ctx.fpr[17] / ctx.fpr[16];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_0898FB6C;
      }
      goto L_0898FB4C;
    }
L_0898FB4C:
    ctx.fpr[13] = ctx.fpr[17] / ctx.fpr[16];
    ctx.gpr[5] = (32768u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    goto L_0898FB6C;
L_0898FB6C:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0898FB98;
      }
      goto L_0898FB84;
    }
L_0898FB84:
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (0u | 1000u);
    ctx.gpr[8] = (0u | 1u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    goto L_0898FB98;
L_0898FB98:
    ctx.fpr[0] = ctx.fpr[13] / ctx.fpr[15];
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
      if (branch_taken) {
          goto L_0898FC54;
      }
      goto L_0898FBA4;
    }
L_0898FBA4:
    ctx.fpr[13] = ctx.fpr[17] / ctx.fpr[16];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0898FBD4;
      }
      goto L_0898FBBC;
    }
L_0898FBBC:
    ctx.fpr[13] = ctx.fpr[17] / ctx.fpr[16];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
      if (branch_taken) {
          goto L_0898FBF4;
      }
      goto L_0898FBD4;
    }
L_0898FBD4:
    ctx.fpr[13] = ctx.fpr[17] / ctx.fpr[16];
    ctx.gpr[5] = (32768u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
    goto L_0898FBF4;
L_0898FBF4:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0898FC1C;
      }
      goto L_0898FC0C;
    }
L_0898FC0C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0898FC1C;
L_0898FC1C:
    ctx.fpr[0] = ctx.fpr[13] / ctx.fpr[15];
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
      if (branch_taken) {
          goto L_0898FC54;
      }
      goto L_0898FC28;
    }
L_0898FC28:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (17948u << 16u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (ctx.gpr[5] | 16384u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[19]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[6] = (0u | 1000u);
      if (branch_taken) {
          goto L_0898FC54;
      }
      goto L_0898FC4C;
    }
L_0898FC4C:
    ctx.gpr[8] = (0u | 3u);
    ctx.gpr[6] = (0u | 3000u);
    goto L_0898FC54;
L_0898FC54:
    ctx.fpr[13] = ctx.fpr[17] / ctx.fpr[16];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0898FC84;
      }
      goto L_0898FC6C;
    }
L_0898FC6C:
    ctx.fpr[13] = ctx.fpr[17] / ctx.fpr[16];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_0898FCA4;
      }
      goto L_0898FC84;
    }
L_0898FC84:
    ctx.fpr[13] = ctx.fpr[17] / ctx.fpr[16];
    ctx.gpr[5] = (32768u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    goto L_0898FCA4;
L_0898FCA4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898FCDC;
      }
      goto L_0898FCB0;
    }
L_0898FCB0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0898FD44;
      }
      goto L_0898FCB8;
    }
L_0898FCB8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_0898FCF4;
      }
      goto L_0898FCC0;
    }
L_0898FCC0:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6512), ctx.gpr[8]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6064), ctx.gpr[7]);
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6060), ctx.gpr[6]);
      if (branch_taken) {
          goto L_0898FD44;
      }
      goto L_0898FCDC;
    }
L_0898FCDC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898FD10;
      }
      goto L_0898FCE4;
    }
L_0898FCE4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898FD2C;
      }
      goto L_0898FCEC;
    }
L_0898FCEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898FD44;
      }
      goto L_0898FCF4;
    }
L_0898FCF4:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6084), ctx.gpr[8]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6092), ctx.gpr[7]);
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6088), ctx.gpr[6]);
      if (branch_taken) {
          goto L_0898FD44;
      }
      goto L_0898FD10;
    }
L_0898FD10:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6508), ctx.gpr[8]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6076), ctx.gpr[7]);
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6072), ctx.gpr[6]);
      if (branch_taken) {
          goto L_0898FD44;
      }
      goto L_0898FD2C;
    }
L_0898FD2C:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6044), ctx.gpr[8]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6052), ctx.gpr[7]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6048), ctx.gpr[6]);
    goto L_0898FD44;
L_0898FD44:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0898FD58;
      }
      goto L_0898FD54;
    }
L_0898FD54:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0898FD58;
L_0898FD58:
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[18]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0898FD6C;
      }
      goto L_0898FD68;
    }
L_0898FD68:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_0898FD6C;
L_0898FD6C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898FD74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[6] = (0u | 44u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[31]);
    ctx.gpr[31] = (0x0898FDCCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-24572));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x0898FDCCu) goto L_0898FDCC;
    return;
L_0898FDCC:
    ctx.gpr[31] = (0x0898FDD4u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x0898FDD4u) goto L_0898FDD4;
    return;
L_0898FDD4:
    ctx.gpr[4] = (16066u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 36700u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16194u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 36700u);
    ctx.gpr[31] = (0x0898FDF0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x0898FDF0u) goto L_0898FDF0;
    return;
L_0898FDF0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x0898FE08u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898FE08u) goto L_0898FE08;
    return;
L_0898FE08:
    ctx.gpr[31] = (0x0898FE10u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x0898FE10u) goto L_0898FE10;
    return;
L_0898FE10:
    ctx.gpr[31] = (0x0898FE18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 208u, 0x08A54F14u>(ctx, &aot_mem) && ctx.pc == 0x0898FE18u) goto L_0898FE18;
    return;
L_0898FE18:
    ctx.gpr[31] = (0x0898FE20u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x0898FE20u) goto L_0898FE20;
    return;
L_0898FE20:
    ctx.gpr[31] = (0x0898FE28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55030u>(ctx, &aot_mem) && ctx.pc == 0x0898FE28u) goto L_0898FE28;
    return;
L_0898FE28:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24588)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[11] = (2228u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[19] = (2232u << 16u);
    ctx.gpr[22] = (0u | 120u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(601) ? 1u : 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-24576)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(5992));
      if (branch_taken) {
          goto L_0898FED0;
      }
      goto L_0898FE58;
    }
L_0898FE58:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(148)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(144)));
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-24580)));
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-24580), ctx.gpr[9]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 2u));
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[9]) < 8 ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[10] >> 30u);
    ctx.gpr[10] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[9] = (2228u << 16u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 2u));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-24584)));
      if (branch_taken) {
          goto L_0898FE98;
      }
      goto L_0898FE94;
    }
L_0898FE94:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-24580), 0u);
    goto L_0898FE98;
L_0898FE98:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-24576), ctx.gpr[7]);
      if (branch_taken) {
          goto L_0898FEB0;
      }
      goto L_0898FEA8;
    }
L_0898FEA8:
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-24576), 0u);
    ctx.gpr[7] = (0u | 0u);
    goto L_0898FEB0;
L_0898FEB0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-24588), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0898FEC8;
      }
      goto L_0898FEC0;
    }
L_0898FEC0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-24584), 0u);
      if (branch_taken) {
          goto L_0898FED0;
      }
      goto L_0898FEC8;
    }
L_0898FEC8:
    ctx.gpr[4] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-24584), ctx.gpr[4]);
    goto L_0898FED0;
L_0898FED0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0898FF1C;
      }
      goto L_0898FEE0;
    }
L_0898FEE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898FF1C;
      }
      goto L_0898FF08;
    }
L_0898FF08:
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-24576), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0898FF1C;
      }
      goto L_0898FF18;
    }
L_0898FF18:
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-24576), 0u);
    goto L_0898FF1C;
L_0898FF1C:
    ctx.gpr[31] = (0x0898FF24u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 83u, 0x088A848Cu>(ctx, &aot_mem) && ctx.pc == 0x0898FF24u) goto L_0898FF24;
    return;
L_0898FF24:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (17170u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 448u, 0x0899198Cu>(ctx, &aot_mem); return;
      }
      goto L_0898FF34;
    }
L_0898FF34:
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17136u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[23] = (2226u << 16u);
    ctx.gpr[5] = (17176u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-21808));
    ctx.gpr[5] = (17154u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[21] = (2228u << 16u);
    ctx.gpr[5] = (17182u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[5] = (17194u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-21680)));
    jump_target = ctx.gpr[1];
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898FF84:
    ctx.gpr[4] = (0u | 45u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x0898FFA4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 93u, 0x089687C0u>(ctx, &aot_mem) && ctx.pc == 0x0898FFA4u) goto L_0898FFA4;
    return;
L_0898FFA4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21784));
    ctx.gpr[20] = (2226u << 16u);
    ctx.gpr[30] = (2226u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-21800));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-21792));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0898FFFC;
      }
      goto L_0898FFD0;
    }
L_0898FFD0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0898FFDCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0898FFDCu) goto L_0898FFDC;
    return;
L_0898FFDC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898FFF4;
      }
      goto L_0898FFE8;
    }
L_0898FFE8:
    ctx.gpr[31] = (0x0898FFF0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0898FFF0u) goto L_0898FFF0;
    return;
L_0898FFF0:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0898FFF4;
L_0898FFF4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0898FFFC;
L_0898FFFC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08990000u; return;
}

void recomp_unit_0098(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0098_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_98(Runtime &runtime) {
    runtime.register_generated_unit(98u, 0x0898C000u, 16384u, &recomp_unit_0098, &recomp_unit_0098_entry);
    runtime.register_function(0x0898C000u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C018u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C03Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C04Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C070u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C08Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C09Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C0D4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C0F0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C100u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C10Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C11Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C128u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C134u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C13Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C140u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C14Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C158u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C168u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C170u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C178u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C194u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C19Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C1D8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C1E0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C1F4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C200u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C20Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C21Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C230u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C244u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C248u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C258u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C264u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C26Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C278u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C284u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C29Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C2ACu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C2BCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C2C4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C2CCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C2D8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C2E0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C2FCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C318u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C334u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C350u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C36Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C388u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C390u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C398u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C3ACu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C3BCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C3C4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C3D4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C3E4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C3E8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C410u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C438u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C46Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C484u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C490u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C498u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C4A0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C4A8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C4ACu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C4D4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C4DCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C4E4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C4ECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C4F0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C518u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C520u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C528u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C530u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C534u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C558u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C560u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C56Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C574u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C57Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C584u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C588u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C5B8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C5C8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C5D0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C5D8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C5E0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C5E4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C60Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C614u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C61Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C624u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C628u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C654u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C69Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C6B0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C6C0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C6C4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C6E4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C704u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C724u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C754u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C768u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C770u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C7B0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C7C4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C7D8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C7E8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C7F8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C804u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C814u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C820u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C830u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C83Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C844u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C84Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C868u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C870u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C878u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C880u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C888u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C890u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C8A8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C8B0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C8C4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C8E0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C8ECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C8F8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C914u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C92Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C934u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C954u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C95Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C96Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C974u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C998u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C9A0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C9A8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C9C0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C9C8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C9E4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C9F0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C9FCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CA08u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CA10u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CA18u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CA3Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CA44u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CA4Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CA58u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CA60u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CA94u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CA9Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CAA8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CAC8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CAD4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CADCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CAECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CB04u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CB0Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CB20u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CB30u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CB38u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CB40u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CB48u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CB80u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CB88u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CBCCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CBE0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CBE8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CC04u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CC20u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CC3Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CC54u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CC6Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CC80u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CC94u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CC9Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CCA4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CCACu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CCB4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CCBCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CCC4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CCD8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CCE8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CCECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CD24u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CD50u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CD8Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CDB4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CDC8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CDF0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CDF8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CE34u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CE60u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CE9Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CEC4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CED8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CEE8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CF04u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CF2Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CF64u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CF90u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CFCCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CFF4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D020u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D04Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D06Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D0A0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D0ACu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D0D4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D0ECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D100u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D110u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D114u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D14Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D178u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D1B4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D1D0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D1E0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D1E8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D1F0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D1F8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D208u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D224u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D22Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D248u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D250u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D26Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D274u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D27Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D288u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D290u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D298u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D2A0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D2A8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D2D8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D2E0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D2F8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D300u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D348u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D354u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D360u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D368u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D370u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D380u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D39Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D3CCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D3D4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D3DCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D3E4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D3F4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D410u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D418u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D434u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D43Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D444u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D454u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D47Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D484u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D4A4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D4E0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D50Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D548u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D554u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D560u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D5B4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D5E0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D61Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D628u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D634u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D664u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D678u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D6A0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D6F0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D71Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D754u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D760u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D76Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D788u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D7A4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D7B8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D7C0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D7C8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D7F0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D7F8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D810u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D818u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D828u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D834u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D840u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D848u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D84Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D854u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D868u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D870u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D87Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D888u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D894u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D8A0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D8A8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D8ACu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D8B4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D8C8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D8D0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D8DCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D8E8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D8F4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D900u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D908u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D90Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D914u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D928u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D930u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D93Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D950u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D95Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D964u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D96Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D978u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D980u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D988u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D994u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D99Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D9B4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D9BCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D9D0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D9DCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D9E4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D9FCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DA04u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DA18u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DA24u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DA40u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DA48u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DA54u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DA68u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DA70u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DA8Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DA94u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DA9Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DAA4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DAB0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DAC4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DACCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DAD4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DAF8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DB00u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DB18u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DB20u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DB38u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DB44u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DB64u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DB78u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DB84u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DBA4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DBD8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DBE0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DBF0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DBFCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DC3Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DC68u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DCA0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DCACu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DCB8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DCECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DD00u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DD08u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DD24u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DD40u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DD48u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DD64u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DD6Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DD74u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DD7Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DD84u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DD8Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DDB8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DDC4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DDECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DDF4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DDFCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DE04u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DE0Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DE14u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DE2Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DE34u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DE3Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DE54u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DE5Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DE80u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DE88u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DE98u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DEACu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DEBCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DEDCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DF14u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DF1Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DF24u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DF2Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DF34u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DF3Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DF44u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DF50u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DF60u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DF7Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DF84u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DFA0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DFA4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DFD0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E014u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E040u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E078u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E084u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E090u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E0ECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E118u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E154u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E160u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E16Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E190u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E1A8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E1D4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E22Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E258u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E290u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E29Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E2A8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E2B8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E2D8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E2FCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E31Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E324u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E32Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E344u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E34Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E364u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E36Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E38Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E394u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E3A4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E3B4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E3C0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E3CCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E404u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E414u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E420u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E460u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E46Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E478u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E484u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E490u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E49Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E4A8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E4BCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E4CCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E4D8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E4E0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E4F0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E4F8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E500u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E508u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E51Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E530u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E540u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E57Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E58Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E594u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E5A0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E5B0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E5B8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E5C0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E5DCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E624u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E65Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E668u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E674u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E684u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E694u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E69Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E6A4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E6B4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E6C4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E6D4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E6E0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E6F0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E6FCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E704u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E70Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E728u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E730u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E738u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E740u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E748u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E750u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E768u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E770u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E784u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E7A0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E7ACu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E7B8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E7D4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E7ECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E7F4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E814u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E81Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E82Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E834u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E858u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E860u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E868u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E880u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E888u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E8A4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E8B0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E8BCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E8C8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E8D0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E8D8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E8FCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E904u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E90Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E918u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E920u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E954u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E95Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E968u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E988u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E994u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E99Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E9ACu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E9B0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E9D8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EA00u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EA34u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EA4Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EA58u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EA60u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EA68u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EA70u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EA74u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EA9Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EAA4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EAACu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EAB4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EAB8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EAE0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EAE8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EAF0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EAF8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EAFCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EB20u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EB28u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EB34u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EB3Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EB44u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EB4Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EB50u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EB80u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EB90u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EB98u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EBA0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EBA8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EBACu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EBD4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EBDCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EBE4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EBECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EBF0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EC1Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EC74u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EC88u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EC98u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EC9Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898ECBCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898ECDCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898ECFCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898ED2Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898ED40u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898ED48u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898ED88u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898ED9Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EDB0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EDC4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EDCCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EDD4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EDF0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EDF8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EE00u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EE0Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EE14u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EE1Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EE3Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EE44u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EE5Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EE64u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EE70u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EE7Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EE88u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EE98u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EEA0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EEA8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EEBCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EEC4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EF08u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EF10u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EF34u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EF48u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EF58u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EF6Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EF74u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EF7Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EF98u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EFA0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EFA8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EFB4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EFBCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EFC4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EFE4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EFECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F004u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F00Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F030u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F04Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F080u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F0ACu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F0E4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F0F0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F0FCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F10Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F120u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F138u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F14Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F154u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F15Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F17Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F184u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F18Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F194u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F1B4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F1DCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F1E8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F1F8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F20Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F214u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F250u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F27Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F2B8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F2D4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F2E0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F2E8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F310u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F31Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F33Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F358u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F36Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F37Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F384u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F38Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F3A8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F3B0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F3B8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F3C4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F3CCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F3D4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F3F4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F3FCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F414u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F41Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F480u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F494u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F4B4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F4ECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F4F4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F4FCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F504u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F50Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F514u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F51Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F528u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F538u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F554u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F55Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F578u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F57Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F5A8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F5ECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F618u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F650u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F65Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F668u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F6C4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F6F0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F72Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F738u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F744u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F768u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F780u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F7ACu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F7CCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F7D8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F818u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F844u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F87Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F888u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F894u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F8A4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F8C4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F8E8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F908u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F910u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F918u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F930u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F938u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F950u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F958u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F978u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F980u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F990u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F9C0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F9DCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F9E4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F9ECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FA08u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FA14u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FA1Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FA24u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FA40u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FA5Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FA74u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FA7Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FA88u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FA90u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FA98u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FAA0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FAA8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FAB0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FAB4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FABCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FAC4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FACCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FAF0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FAF8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FB00u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FB0Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FB14u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FB1Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FB34u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FB4Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FB6Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FB84u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FB98u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FBA4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FBBCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FBD4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FBF4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FC0Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FC1Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FC28u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FC4Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FC54u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FC6Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FC84u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FCA4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FCB0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FCB8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FCC0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FCDCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FCE4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FCECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FCF4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FD10u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FD2Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FD44u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FD54u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FD58u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FD68u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FD6Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FD74u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FDCCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FDD4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FDF0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FE08u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FE10u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FE18u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FE20u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FE28u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FE58u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FE94u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FE98u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FEA8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FEB0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FEC0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FEC8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FED0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FEE0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FF08u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FF18u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FF1Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FF24u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FF34u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FF84u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FFA4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FFD0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FFDCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FFE8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FFF0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FFF4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FFFCu, &recomp_unit_0098, "recomp_unit_0098");
}
} // namespace psprecomp
