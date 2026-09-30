#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0127[4090] = {
    1, 0, 0, 2, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0,
    0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13,
    0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 16, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0,
    20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0,
    0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 30, 0, 0, 0, 0,
    31, 0, 0, 0, 0, 32, 33, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 42, 0, 43,
    0, 44, 0, 45, 0, 46, 0, 47, 0, 0, 48, 0, 49, 0, 0, 50, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 54, 0, 0, 0,
    0, 0, 55, 0, 0, 0, 0, 56, 57, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0,
    0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 63, 64, 0, 65, 0, 0, 66, 0, 0, 67, 0, 0, 68, 0, 0, 69, 0, 0, 0, 70,
    0, 0, 71, 0, 0, 72, 0, 0, 73, 0, 0, 74, 0, 75, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0,
    0, 0, 0, 79, 0, 80, 0, 81, 0, 0, 82, 0, 0, 83, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0,
    0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 92, 0, 0, 0, 93,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 96, 0, 0, 0, 0, 0, 0, 0, 97, 98, 0, 0, 99, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 100, 0, 0, 0, 101, 102, 0, 0, 0, 0, 0, 0, 103, 0, 104, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0,
    0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0,
    0, 113, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 119, 0,
    0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 125, 126, 0, 0, 0, 0, 127,
    0, 0, 128, 0, 129, 0, 0, 0, 130, 0, 0, 131, 0, 132, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 136,
    0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 140, 0, 141, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0,
    144, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 149, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 153, 0,
    154, 0, 155, 0, 156, 0, 157, 0, 0, 0, 158, 0, 159, 0, 160, 0, 161, 0, 162, 0, 163, 0, 164, 0, 0, 165, 0, 0, 0, 0, 166, 0,
    167, 0, 0, 0, 168, 0, 0, 169, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 172, 0,
    173, 0, 0, 0, 174, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 180, 0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 183, 0, 184, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 188,
    0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 191, 192, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 198, 0, 0, 199, 0, 0, 200, 0, 0, 0, 0, 201, 202, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0,
    0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 208,
    0, 0, 0, 0, 0, 209, 0, 0, 210, 0, 211, 0, 212, 0, 213, 214, 0, 215, 0, 0, 0, 216, 0, 217, 0, 0, 218, 219, 0, 220, 0, 0,
    221, 0, 222, 0, 223, 224, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 226, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 233, 0, 0, 0, 0, 0,
    234, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 238, 0, 0, 239, 0, 0, 240, 0, 241, 0, 0, 0,
    0, 0, 242, 0, 243, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 247, 0, 248, 0, 0, 0, 0, 0, 0, 0,
    249, 0, 250, 251, 0, 252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 254, 0, 0, 0, 255, 0, 256, 0, 257, 0, 258, 0, 259, 260, 0, 261,
    0, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 264, 265, 0, 266, 0, 0, 0, 0, 267, 0, 0, 268, 0, 0, 269, 0, 0, 0, 0, 0, 0,
    270, 0, 0, 271, 0, 272, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0,
    277, 0, 0, 0, 278, 0, 0, 0, 279, 0, 280, 0, 0, 281, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 286, 0, 0, 0, 287, 0, 288, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0,
    292, 293, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0,
    298, 0, 0, 0, 0, 0, 0, 299, 0, 300, 0, 301, 0, 0, 302, 0, 0, 0, 303, 0, 304, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0,
    307, 0, 308, 0, 0, 0, 309, 0, 310, 311, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    313, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 316, 0, 317, 0, 0, 0, 0, 0, 0, 0, 318, 0, 319, 0, 0, 0, 0, 0, 320,
    0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 322, 323, 0, 0, 324, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326,
    0, 327, 328, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0,
    0, 332, 0, 333, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 337, 0, 0, 0, 338, 0,
    0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 343,
    0, 0, 344, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 347, 0, 0, 0,
    0, 0, 0, 348, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 352, 0,
    353, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 356, 0, 0, 0, 357, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 360, 0, 361, 0, 362, 0, 363, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 365, 0, 0, 0, 366, 0, 367, 0, 0, 0, 0, 0, 0, 368, 0, 0, 369, 0, 370, 0, 0, 0, 0, 0, 0, 371, 0, 0, 372, 0, 373,
    0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 376, 0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 379,
    0, 380, 381, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 0, 0,
    386, 0, 387, 0, 0, 0, 0, 388, 0, 389, 0, 0, 390, 0, 391, 392, 0, 393, 0, 0, 0, 394, 0, 395, 0, 0, 0, 0, 0, 0, 396, 0,
    397, 0, 0, 0, 0, 398, 0, 0, 399, 400, 0, 401, 0, 0, 402, 0, 403, 0, 404, 0, 0, 0, 0, 0, 405, 0, 0, 406, 407, 0, 0, 0,
    0, 408, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 411, 0, 412, 0, 413, 414, 0, 415, 0, 416, 0, 0, 0, 0, 0, 417, 0, 0, 0, 418,
    0, 0, 419, 0, 420, 0, 421, 0, 422, 0, 0, 0, 0, 0, 423, 0, 0, 424, 425, 0, 426, 0, 0, 427, 0, 0, 0, 0, 0, 428, 0, 429,
    0, 0, 0, 0, 0, 0, 430, 0, 431, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 434, 0, 0, 0, 0, 0, 0, 0,
    0, 435, 0, 436, 0, 437, 0, 0, 438, 0, 439, 0, 0, 0, 440, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 444, 0, 445, 0, 0, 0, 446, 0, 0, 0, 447, 448, 0, 449, 0,
    450, 0, 0, 0, 0, 0, 451, 452, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 455, 456, 0, 457, 0, 0, 0, 0, 458, 0,
    0, 0, 459, 0, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0, 462, 0, 0, 0, 0, 0, 0, 463, 0, 464, 0, 0, 0, 0, 465, 0, 466, 0,
    0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 469, 0, 0, 0, 470, 0, 0, 471, 0, 472, 0, 0, 473, 0, 0, 474, 0, 0,
    0, 475, 0, 0, 476, 0, 0, 477, 0, 0, 0, 478, 0, 0, 479, 0, 480, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0,
    483, 0, 0, 0, 484, 0, 0, 0, 485, 0, 0, 0, 486, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0,
    0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 491, 0, 492, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 494, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 497, 0, 498, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 503, 0, 504, 0, 0, 0,
    0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 509, 0,
    510, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0,
    0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 515, 0, 0, 516, 0, 517, 0, 0, 0, 518, 0, 0, 519, 0,
    0, 520, 0, 0, 0, 521, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 524, 0, 525, 0, 526, 0, 0,
    527, 528, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0,
    0, 531, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 533, 534, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 536,
    0, 537, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 540, 0, 0, 0, 541, 0, 542, 0, 0, 0,
    543, 0, 0, 544, 0, 545, 0, 546, 0, 547, 0, 0, 548, 0, 0, 0, 549, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    551, 0, 0, 0, 0, 0, 0, 552, 0, 553, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 555, 0, 556, 0, 557, 558, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 559, 0, 0, 0, 560, 0, 0, 561, 0, 0, 0, 0, 562, 0, 0, 563, 0, 564, 0, 565, 0, 0, 0, 566, 0, 0, 0,
    567, 0, 0, 0, 568, 0, 569, 0, 0, 0, 570, 571, 0, 0, 0, 572, 0, 0, 0, 0, 573, 0, 0, 574, 0, 575, 0, 576, 0, 0, 0, 577,
    0, 0, 0, 578, 0, 0, 0, 579, 0, 580, 0, 0, 0, 581, 582, 0, 0, 0, 583, 0, 0, 0, 0, 584, 0, 0, 585, 0, 0, 0, 0, 586,
    0, 0, 587, 0, 0, 0, 588, 0, 0, 589, 0, 0, 0, 0, 0, 0, 0, 590, 0, 591, 0, 592, 0, 0, 0, 593, 0, 594, 0, 595, 0, 596,
    0, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 599, 600, 0, 0, 0, 0, 601, 0, 0, 0, 0, 0,
    0, 0, 602, 0, 603, 0, 604, 0, 0, 0, 605, 0, 606, 0, 607, 0, 608, 0, 0, 0, 0, 0, 609, 0, 0, 0, 610, 0, 0, 0, 0, 0,
    0, 0, 611, 612, 0, 0, 0, 0, 613, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 614, 0, 615, 0, 0, 616, 617, 0, 0, 0,
    618, 0, 0, 619, 0, 620, 0, 0, 621, 0, 622, 623, 0, 0, 0, 0, 0, 0, 624, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 625, 0,
    626, 0, 0, 0, 627, 0, 0, 0, 628, 0, 629, 0, 0, 0, 630, 0, 0, 631, 0, 632, 0, 633, 0, 634, 0, 0, 0, 635, 0, 0, 636, 0,
    0, 637, 0, 0, 0, 0, 0, 0, 638, 639, 0, 0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 641, 0, 642, 0, 0,
    643, 0, 0, 0, 644, 0, 0, 645, 0, 646, 0, 647, 0, 0, 648, 0, 649, 0, 0, 0, 650, 0, 0, 651, 0, 0, 0, 652, 0, 0, 653, 654,
    0, 0, 0, 0, 0, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 656, 0, 657, 0, 0, 658, 659, 0, 0, 0, 660, 0,
    0, 661, 0, 662, 0, 0, 663, 0, 664, 665, 0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 667,
    0, 668, 0, 0, 669, 670, 0, 0, 0, 671, 0, 0, 672, 0, 0, 673, 0, 0, 0, 674, 0, 0, 0, 675, 0, 0, 676, 0, 677, 0, 0, 678,
    679, 0, 680, 0, 0, 681, 0, 0, 0, 682, 0, 0, 0, 0, 683, 0, 684, 0, 685, 0, 0, 686, 687, 0, 0, 688, 0, 689, 690, 0, 0, 0,
    0, 0, 0, 0, 691, 0, 0, 0, 0, 0, 0, 0, 692, 0, 693, 0, 0, 694, 0, 695, 0, 0, 696, 0, 0, 0, 697, 0, 698, 0, 699, 0,
    0, 0, 0, 0, 700, 701, 0, 0, 0, 0, 702, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 703, 0, 0, 704, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 705, 0, 0, 706, 0, 0, 707, 0, 708, 0, 0, 709, 0, 0, 0, 0, 710, 0, 0, 711, 0, 0, 0, 0, 0, 0, 0, 712,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 713, 0, 0, 714, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 715, 0, 0, 716, 0, 0, 717,
    0, 0, 718, 0, 719, 0, 0, 720, 0, 0, 0, 0, 721, 0, 0, 722, 0, 0, 0, 0, 0, 0, 0, 723, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 724, 0, 725, 0, 726, 0, 0, 727, 0, 0, 0, 728, 0, 0, 0, 0, 729, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 730,
    0, 0, 731, 0, 0, 732, 0, 733, 0, 734, 0, 735, 0, 0, 736, 0, 0, 0, 0, 737, 0, 0, 738, 739, 0, 0, 0, 0, 0, 0, 0, 0,
    740, 0, 0, 0, 0, 0, 0, 0, 0, 0, 741, 0, 0, 742, 0, 0, 0, 0, 743, 0, 744, 0, 745, 0, 0, 746, 0, 0, 747, 0, 748, 0,
    0, 749, 750, 0, 0, 751, 0, 752, 0, 0, 753, 0, 0, 754, 0, 755, 0, 0, 756, 0, 0, 0, 757, 758, 0, 0, 0, 0, 0, 0, 759, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 760, 0, 761, 0, 0, 762, 763, 0, 0, 0, 764, 0, 0, 0, 0, 0, 0, 765, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 766, 0, 767, 0, 0, 768, 769, 0, 0, 770, 0, 0, 771, 0, 0, 0, 0, 0, 0, 0, 772, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 773, 0, 774, 0, 0, 775, 776, 0, 0, 777, 0, 0, 0, 778, 0, 0, 0, 0, 0, 0,
    0, 779, 0, 0, 0, 0, 0, 0, 0, 780, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 781, 0, 0, 0, 782, 0, 0, 0,
    783, 0, 0, 784, 0, 0, 785, 0, 0, 0, 786, 0, 0, 0, 0, 0, 787, 0, 0, 0, 0, 0, 0, 0, 788, 0, 0, 0, 789, 0, 0, 790,
    0, 0, 0, 0, 0, 791, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 792, 0, 0, 0, 793, 0, 0, 0, 0, 794, 0, 0, 795, 0, 0, 796,
    797, 0, 0, 0, 0, 798, 0, 0, 799, 0, 0, 0, 0, 0, 0, 0, 0, 800, 0, 0, 0, 0, 0, 801, 0, 0, 0, 802, 0, 0, 803, 0,
    0, 804, 0, 805, 0, 0, 806, 0, 0, 0, 0, 0, 807, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 808, 0, 0, 0, 809, 0, 810,
    0, 0, 0, 811, 0, 812, 0, 813, 0, 0, 814, 0, 0, 815, 0, 0, 0, 816, 0, 817, 0, 818, 0, 0, 0, 0, 0, 819, 0, 0, 820, 0,
    0, 0, 0, 821, 0, 822, 0, 0, 823, 0, 0, 824, 0, 0, 825, 0, 826, 0, 0, 0, 0, 0, 0, 827, 0, 0, 0, 828, 0, 829, 0, 0,
    0, 0, 830, 0, 0, 0, 0, 0, 0, 0, 0, 831, 0, 0, 0, 0, 0, 0, 0, 0, 832, 0, 0, 833, 0, 834, 0, 0, 0, 835, 0, 0,
    0, 836, 0, 0, 0, 837, 0, 0, 0, 0, 0, 0, 838, 0, 839, 0, 840, 0, 841, 0, 842, 0, 0, 843, 0, 844, 0, 845, 0, 0, 0, 0,
    846, 0, 847, 0, 0, 848, 0, 0, 849, 0, 0, 0, 0, 0, 0, 0, 0, 0, 850, 0, 0, 0, 851, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 852, 0, 853, 0, 0, 0, 0, 0, 854, 0, 0, 0, 855, 0, 0, 0, 0, 0,
    0, 856, 0, 0, 0, 0, 0, 0, 0, 0, 0, 857, 0, 0, 0, 858, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 859, 0, 860, 0, 0, 0, 0, 0, 861, 0, 0, 0, 862, 0, 0, 0, 0, 0, 0, 863, 0, 0, 0, 864, 0,
    0, 865, 0, 866, 0, 0, 0, 0, 867, 0, 868, 0, 0, 869, 0, 0, 0, 870, 0, 0, 0, 871, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 872, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 873, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 874, 0, 0, 0, 0, 0, 0, 875, 0, 0, 876, 0, 0, 0, 0, 0, 0, 0, 877, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 878, 0, 0, 0, 0, 0, 0, 0, 879, 0, 0, 0, 0, 0, 880, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 881, 0, 0,
    882, 0, 0, 883, 0, 884, 0, 0, 0, 0, 0, 0, 0, 0, 0, 885, 0, 0, 0, 886, 0, 0, 0, 0, 0, 0, 0, 887, 0, 0, 0, 0,
    0, 0, 888, 0, 0, 889, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 890, 0, 0, 0, 891, 0, 0, 0, 0, 0,
    892, 0, 0, 0, 893, 0, 0, 0, 0, 0, 0, 894, 0, 0, 0, 0, 0, 0, 0, 895, 0, 0, 0, 896, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 897, 0, 0, 0, 898, 0, 0, 0, 0, 0, 899, 0, 0, 0, 900, 0, 0, 0, 0, 0, 0, 901,
};
void recomp_unit_0127_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A00000u;
        entry_id = (entry_delta < 16360u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0127[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A00000;
    case 2u: goto L_08A0000C;
    case 3u: goto L_08A00014;
    case 4u: goto L_08A00024;
    case 5u: goto L_08A00038;
    case 6u: goto L_08A00048;
    case 7u: goto L_08A00050;
    case 8u: goto L_08A00068;
    case 9u: goto L_08A00088;
    case 10u: goto L_08A000A0;
    case 11u: goto L_08A000BC;
    case 12u: goto L_08A000D4;
    case 13u: goto L_08A000FC;
    case 14u: goto L_08A0011C;
    case 15u: goto L_08A00130;
    case 16u: goto L_08A00134;
    case 17u: goto L_08A0013C;
    case 18u: goto L_08A00150;
    case 19u: goto L_08A00164;
    case 20u: goto L_08A00180;
    case 21u: goto L_08A001A0;
    case 22u: goto L_08A001C0;
    case 23u: goto L_08A001D8;
    case 24u: goto L_08A001F4;
    case 25u: goto L_08A0020C;
    case 26u: goto L_08A00234;
    case 27u: goto L_08A00240;
    case 28u: goto L_08A0024C;
    case 29u: goto L_08A00268;
    case 30u: goto L_08A0026C;
    case 31u: goto L_08A00280;
    case 32u: goto L_08A00294;
    case 33u: goto L_08A00298;
    case 34u: goto L_08A002A0;
    case 35u: goto L_08A002BC;
    case 36u: goto L_08A002DC;
    case 37u: goto L_08A00314;
    case 38u: goto L_08A0032C;
    case 39u: goto L_08A00340;
    case 40u: goto L_08A00354;
    case 41u: goto L_08A00364;
    case 42u: goto L_08A00374;
    case 43u: goto L_08A0037C;
    case 44u: goto L_08A00384;
    case 45u: goto L_08A0038C;
    case 46u: goto L_08A00394;
    case 47u: goto L_08A0039C;
    case 48u: goto L_08A003A8;
    case 49u: goto L_08A003B0;
    case 50u: goto L_08A003BC;
    case 51u: goto L_08A003C4;
    case 52u: goto L_08A003D8;
    case 53u: goto L_08A003E8;
    case 54u: goto L_08A003F0;
    case 55u: goto L_08A00408;
    case 56u: goto L_08A0041C;
    case 57u: goto L_08A00420;
    case 58u: goto L_08A0042C;
    case 59u: goto L_08A00448;
    case 60u: goto L_08A00478;
    case 61u: goto L_08A0049C;
    case 62u: goto L_08A004A8;
    case 63u: goto L_08A004B0;
    case 64u: goto L_08A004B4;
    case 65u: goto L_08A004BC;
    case 66u: goto L_08A004C8;
    case 67u: goto L_08A004D4;
    case 68u: goto L_08A004E0;
    case 69u: goto L_08A004EC;
    case 70u: goto L_08A004FC;
    case 71u: goto L_08A00508;
    case 72u: goto L_08A00514;
    case 73u: goto L_08A00520;
    case 74u: goto L_08A0052C;
    case 75u: goto L_08A00534;
    case 76u: goto L_08A0053C;
    case 77u: goto L_08A00550;
    case 78u: goto L_08A0056C;
    case 79u: goto L_08A0058C;
    case 80u: goto L_08A00594;
    case 81u: goto L_08A0059C;
    case 82u: goto L_08A005A8;
    case 83u: goto L_08A005B4;
    case 84u: goto L_08A005BC;
    case 85u: goto L_08A005D0;
    case 86u: goto L_08A005E4;
    case 87u: goto L_08A00608;
    case 88u: goto L_08A00614;
    case 89u: goto L_08A00634;
    case 90u: goto L_08A0064C;
    case 91u: goto L_08A00664;
    case 92u: goto L_08A0066C;
    case 93u: goto L_08A0067C;
    case 94u: goto L_08A006A4;
    case 95u: goto L_08A006B4;
    case 96u: goto L_08A006B8;
    case 97u: goto L_08A006D8;
    case 98u: goto L_08A006DC;
    case 99u: goto L_08A006E8;
    case 100u: goto L_08A00710;
    case 101u: goto L_08A00720;
    case 102u: goto L_08A00724;
    case 103u: goto L_08A00740;
    case 104u: goto L_08A00748;
    case 105u: goto L_08A00754;
    case 106u: goto L_08A00778;
    case 107u: goto L_08A0078C;
    case 108u: goto L_08A007A0;
    case 109u: goto L_08A007B4;
    case 110u: goto L_08A007C8;
    case 111u: goto L_08A007DC;
    case 112u: goto L_08A007F0;
    case 113u: goto L_08A00804;
    case 114u: goto L_08A0080C;
    case 115u: goto L_08A00830;
    case 116u: goto L_08A00844;
    case 117u: goto L_08A00858;
    case 118u: goto L_08A0086C;
    case 119u: goto L_08A00878;
    case 120u: goto L_08A00888;
    case 121u: goto L_08A008AC;
    case 122u: goto L_08A008B8;
    case 123u: goto L_08A008C4;
    case 124u: goto L_08A008D4;
    case 125u: goto L_08A008E4;
    case 126u: goto L_08A008E8;
    case 127u: goto L_08A008FC;
    case 128u: goto L_08A00908;
    case 129u: goto L_08A00910;
    case 130u: goto L_08A00920;
    case 131u: goto L_08A0092C;
    case 132u: goto L_08A00934;
    case 133u: goto L_08A0093C;
    case 134u: goto L_08A0094C;
    case 135u: goto L_08A00974;
    case 136u: goto L_08A0097C;
    case 137u: goto L_08A00990;
    case 138u: goto L_08A0099C;
    case 139u: goto L_08A009B4;
    case 140u: goto L_08A009BC;
    case 141u: goto L_08A009C4;
    case 142u: goto L_08A009D0;
    case 143u: goto L_08A009E0;
    case 144u: goto L_08A00A00;
    case 145u: goto L_08A00A08;
    case 146u: goto L_08A00A18;
    case 147u: goto L_08A00A34;
    case 148u: goto L_08A00A3C;
    case 149u: goto L_08A00A44;
    case 150u: goto L_08A00A4C;
    case 151u: goto L_08A00A68;
    case 152u: goto L_08A00A70;
    case 153u: goto L_08A00A78;
    case 154u: goto L_08A00A80;
    case 155u: goto L_08A00A88;
    case 156u: goto L_08A00A90;
    case 157u: goto L_08A00A98;
    case 158u: goto L_08A00AA8;
    case 159u: goto L_08A00AB0;
    case 160u: goto L_08A00AB8;
    case 161u: goto L_08A00AC0;
    case 162u: goto L_08A00AC8;
    case 163u: goto L_08A00AD0;
    case 164u: goto L_08A00AD8;
    case 165u: goto L_08A00AE4;
    case 166u: goto L_08A00AF8;
    case 167u: goto L_08A00B00;
    case 168u: goto L_08A00B10;
    case 169u: goto L_08A00B1C;
    case 170u: goto L_08A00B24;
    case 171u: goto L_08A00B6C;
    case 172u: goto L_08A00B78;
    case 173u: goto L_08A00B80;
    case 174u: goto L_08A00B90;
    case 175u: goto L_08A00B9C;
    case 176u: goto L_08A00BB4;
    case 177u: goto L_08A00BD8;
    case 178u: goto L_08A00C20;
    case 179u: goto L_08A00C34;
    case 180u: goto L_08A00C3C;
    case 181u: goto L_08A00C4C;
    case 182u: goto L_08A00C58;
    case 183u: goto L_08A00C68;
    case 184u: goto L_08A00C70;
    case 185u: goto L_08A00C9C;
    case 186u: goto L_08A00CC0;
    case 187u: goto L_08A00CD8;
    case 188u: goto L_08A00CFC;
    case 189u: goto L_08A00D1C;
    case 190u: goto L_08A00D28;
    case 191u: goto L_08A00D30;
    case 192u: goto L_08A00D34;
    case 193u: goto L_08A00D40;
    case 194u: goto L_08A00D4C;
    case 195u: goto L_08A00D90;
    case 196u: goto L_08A00DA0;
    case 197u: goto L_08A00DB4;
    case 198u: goto L_08A00DBC;
    case 199u: goto L_08A00DC8;
    case 200u: goto L_08A00DD4;
    case 201u: goto L_08A00DE8;
    case 202u: goto L_08A00DEC;
    case 203u: goto L_08A00E14;
    case 204u: goto L_08A00E6C;
    case 205u: goto L_08A00E8C;
    case 206u: goto L_08A00ED8;
    case 207u: goto L_08A00EEC;
    case 208u: goto L_08A00EFC;
    case 209u: goto L_08A00F14;
    case 210u: goto L_08A00F20;
    case 211u: goto L_08A00F28;
    case 212u: goto L_08A00F30;
    case 213u: goto L_08A00F38;
    case 214u: goto L_08A00F3C;
    case 215u: goto L_08A00F44;
    case 216u: goto L_08A00F54;
    case 217u: goto L_08A00F5C;
    case 218u: goto L_08A00F68;
    case 219u: goto L_08A00F6C;
    case 220u: goto L_08A00F74;
    case 221u: goto L_08A00F80;
    case 222u: goto L_08A00F88;
    case 223u: goto L_08A00F90;
    case 224u: goto L_08A00F94;
    case 225u: goto L_08A00F9C;
    case 226u: goto L_08A00FC0;
    case 227u: goto L_08A00FC4;
    case 228u: goto L_08A00FD4;
    case 229u: goto L_08A01008;
    case 230u: goto L_08A01038;
    case 231u: goto L_08A01050;
    case 232u: goto L_08A01064;
    case 233u: goto L_08A01068;
    case 234u: goto L_08A01080;
    case 235u: goto L_08A01094;
    case 236u: goto L_08A010A0;
    case 237u: goto L_08A010C8;
    case 238u: goto L_08A010D0;
    case 239u: goto L_08A010DC;
    case 240u: goto L_08A010E8;
    case 241u: goto L_08A010F0;
    case 242u: goto L_08A01108;
    case 243u: goto L_08A01110;
    case 244u: goto L_08A0111C;
    case 245u: goto L_08A01138;
    case 246u: goto L_08A01148;
    case 247u: goto L_08A01158;
    case 248u: goto L_08A01160;
    case 249u: goto L_08A01180;
    case 250u: goto L_08A01188;
    case 251u: goto L_08A0118C;
    case 252u: goto L_08A01194;
    case 253u: goto L_08A011B4;
    case 254u: goto L_08A011C0;
    case 255u: goto L_08A011D0;
    case 256u: goto L_08A011D8;
    case 257u: goto L_08A011E0;
    case 258u: goto L_08A011E8;
    case 259u: goto L_08A011F0;
    case 260u: goto L_08A011F4;
    case 261u: goto L_08A011FC;
    case 262u: goto L_08A0120C;
    case 263u: goto L_08A01218;
    case 264u: goto L_08A0122C;
    case 265u: goto L_08A01230;
    case 266u: goto L_08A01238;
    case 267u: goto L_08A0124C;
    case 268u: goto L_08A01258;
    case 269u: goto L_08A01264;
    case 270u: goto L_08A01280;
    case 271u: goto L_08A0128C;
    case 272u: goto L_08A01294;
    case 273u: goto L_08A0129C;
    case 274u: goto L_08A012D0;
    case 275u: goto L_08A012E4;
    case 276u: goto L_08A012F8;
    case 277u: goto L_08A01300;
    case 278u: goto L_08A01310;
    case 279u: goto L_08A01320;
    case 280u: goto L_08A01328;
    case 281u: goto L_08A01334;
    case 282u: goto L_08A0133C;
    case 283u: goto L_08A01354;
    case 284u: goto L_08A01388;
    case 285u: goto L_08A013A0;
    case 286u: goto L_08A013A8;
    case 287u: goto L_08A013B8;
    case 288u: goto L_08A013C0;
    case 289u: goto L_08A013D0;
    case 290u: goto L_08A013E0;
    case 291u: goto L_08A013F0;
    case 292u: goto L_08A01400;
    case 293u: goto L_08A01404;
    case 294u: goto L_08A01424;
    case 295u: goto L_08A0144C;
    case 296u: goto L_08A01458;
    case 297u: goto L_08A01468;
    case 298u: goto L_08A01480;
    case 299u: goto L_08A0149C;
    case 300u: goto L_08A014A4;
    case 301u: goto L_08A014AC;
    case 302u: goto L_08A014B8;
    case 303u: goto L_08A014C8;
    case 304u: goto L_08A014D0;
    case 305u: goto L_08A014D4;
    case 306u: goto L_08A014EC;
    case 307u: goto L_08A01500;
    case 308u: goto L_08A01508;
    case 309u: goto L_08A01518;
    case 310u: goto L_08A01520;
    case 311u: goto L_08A01524;
    case 312u: goto L_08A0152C;
    case 313u: goto L_08A01580;
    case 314u: goto L_08A01588;
    case 315u: goto L_08A015B0;
    case 316u: goto L_08A015B4;
    case 317u: goto L_08A015BC;
    case 318u: goto L_08A015DC;
    case 319u: goto L_08A015E4;
    case 320u: goto L_08A015FC;
    case 321u: goto L_08A0161C;
    case 322u: goto L_08A01634;
    case 323u: goto L_08A01638;
    case 324u: goto L_08A01644;
    case 325u: goto L_08A01650;
    case 326u: goto L_08A0167C;
    case 327u: goto L_08A01684;
    case 328u: goto L_08A01688;
    case 329u: goto L_08A0169C;
    case 330u: goto L_08A016B4;
    case 331u: goto L_08A016F8;
    case 332u: goto L_08A01704;
    case 333u: goto L_08A0170C;
    case 334u: goto L_08A0171C;
    case 335u: goto L_08A0172C;
    case 336u: goto L_08A01760;
    case 337u: goto L_08A01768;
    case 338u: goto L_08A01778;
    case 339u: goto L_08A0178C;
    case 340u: goto L_08A017A8;
    case 341u: goto L_08A017C8;
    case 342u: goto L_08A017E4;
    case 343u: goto L_08A017FC;
    case 344u: goto L_08A01808;
    case 345u: goto L_08A0180C;
    case 346u: goto L_08A01868;
    case 347u: goto L_08A01870;
    case 348u: goto L_08A0188C;
    case 349u: goto L_08A01898;
    case 350u: goto L_08A018AC;
    case 351u: goto L_08A018EC;
    case 352u: goto L_08A018F8;
    case 353u: goto L_08A01900;
    case 354u: goto L_08A01910;
    case 355u: goto L_08A01954;
    case 356u: goto L_08A0195C;
    case 357u: goto L_08A0196C;
    case 358u: goto L_08A01998;
    case 359u: goto L_08A019B4;
    case 360u: goto L_08A019BC;
    case 361u: goto L_08A019C4;
    case 362u: goto L_08A019CC;
    case 363u: goto L_08A019D4;
    case 364u: goto L_08A019DC;
    case 365u: goto L_08A01A04;
    case 366u: goto L_08A01A14;
    case 367u: goto L_08A01A1C;
    case 368u: goto L_08A01A38;
    case 369u: goto L_08A01A44;
    case 370u: goto L_08A01A4C;
    case 371u: goto L_08A01A68;
    case 372u: goto L_08A01A74;
    case 373u: goto L_08A01A7C;
    case 374u: goto L_08A01A84;
    case 375u: goto L_08A01AAC;
    case 376u: goto L_08A01ABC;
    case 377u: goto L_08A01AC4;
    case 378u: goto L_08A01AE0;
    case 379u: goto L_08A01AFC;
    case 380u: goto L_08A01B04;
    case 381u: goto L_08A01B08;
    case 382u: goto L_08A01B24;
    case 383u: goto L_08A01B38;
    case 384u: goto L_08A01B58;
    case 385u: goto L_08A01B68;
    case 386u: goto L_08A01B80;
    case 387u: goto L_08A01B88;
    case 388u: goto L_08A01B9C;
    case 389u: goto L_08A01BA4;
    case 390u: goto L_08A01BB0;
    case 391u: goto L_08A01BB8;
    case 392u: goto L_08A01BBC;
    case 393u: goto L_08A01BC4;
    case 394u: goto L_08A01BD4;
    case 395u: goto L_08A01BDC;
    case 396u: goto L_08A01BF8;
    case 397u: goto L_08A01C00;
    case 398u: goto L_08A01C14;
    case 399u: goto L_08A01C20;
    case 400u: goto L_08A01C24;
    case 401u: goto L_08A01C2C;
    case 402u: goto L_08A01C38;
    case 403u: goto L_08A01C40;
    case 404u: goto L_08A01C48;
    case 405u: goto L_08A01C60;
    case 406u: goto L_08A01C6C;
    case 407u: goto L_08A01C70;
    case 408u: goto L_08A01C84;
    case 409u: goto L_08A01C94;
    case 410u: goto L_08A01CA4;
    case 411u: goto L_08A01CB0;
    case 412u: goto L_08A01CB8;
    case 413u: goto L_08A01CC0;
    case 414u: goto L_08A01CC4;
    case 415u: goto L_08A01CCC;
    case 416u: goto L_08A01CD4;
    case 417u: goto L_08A01CEC;
    case 418u: goto L_08A01CFC;
    case 419u: goto L_08A01D08;
    case 420u: goto L_08A01D10;
    case 421u: goto L_08A01D18;
    case 422u: goto L_08A01D20;
    case 423u: goto L_08A01D38;
    case 424u: goto L_08A01D44;
    case 425u: goto L_08A01D48;
    case 426u: goto L_08A01D50;
    case 427u: goto L_08A01D5C;
    case 428u: goto L_08A01D74;
    case 429u: goto L_08A01D7C;
    case 430u: goto L_08A01D98;
    case 431u: goto L_08A01DA0;
    case 432u: goto L_08A01DB0;
    case 433u: goto L_08A01DD8;
    case 434u: goto L_08A01DE0;
    case 435u: goto L_08A01E04;
    case 436u: goto L_08A01E0C;
    case 437u: goto L_08A01E14;
    case 438u: goto L_08A01E20;
    case 439u: goto L_08A01E28;
    case 440u: goto L_08A01E38;
    case 441u: goto L_08A01E48;
    case 442u: goto L_08A01E78;
    case 443u: goto L_08A01EA4;
    case 444u: goto L_08A01EC4;
    case 445u: goto L_08A01ECC;
    case 446u: goto L_08A01EDC;
    case 447u: goto L_08A01EEC;
    case 448u: goto L_08A01EF0;
    case 449u: goto L_08A01EF8;
    case 450u: goto L_08A01F00;
    case 451u: goto L_08A01F18;
    case 452u: goto L_08A01F1C;
    case 453u: goto L_08A01F20;
    case 454u: goto L_08A01F50;
    case 455u: goto L_08A01F58;
    case 456u: goto L_08A01F5C;
    case 457u: goto L_08A01F64;
    case 458u: goto L_08A01F78;
    case 459u: goto L_08A01F88;
    case 460u: goto L_08A01F9C;
    case 461u: goto L_08A01FAC;
    case 462u: goto L_08A01FB8;
    case 463u: goto L_08A01FD4;
    case 464u: goto L_08A01FDC;
    case 465u: goto L_08A01FF0;
    case 466u: goto L_08A01FF8;
    case 467u: goto L_08A0200C;
    case 468u: goto L_08A02028;
    case 469u: goto L_08A02038;
    case 470u: goto L_08A02048;
    case 471u: goto L_08A02054;
    case 472u: goto L_08A0205C;
    case 473u: goto L_08A02068;
    case 474u: goto L_08A02074;
    case 475u: goto L_08A02084;
    case 476u: goto L_08A02090;
    case 477u: goto L_08A0209C;
    case 478u: goto L_08A020AC;
    case 479u: goto L_08A020B8;
    case 480u: goto L_08A020C0;
    case 481u: goto L_08A020D4;
    case 482u: goto L_08A020F4;
    case 483u: goto L_08A02100;
    case 484u: goto L_08A02110;
    case 485u: goto L_08A02120;
    case 486u: goto L_08A02130;
    case 487u: goto L_08A02148;
    case 488u: goto L_08A02174;
    case 489u: goto L_08A02188;
    case 490u: goto L_08A021B0;
    case 491u: goto L_08A021BC;
    case 492u: goto L_08A021C4;
    case 493u: goto L_08A021E0;
    case 494u: goto L_08A0220C;
    case 495u: goto L_08A02218;
    case 496u: goto L_08A02240;
    case 497u: goto L_08A0224C;
    case 498u: goto L_08A02254;
    case 499u: goto L_08A02270;
    case 500u: goto L_08A0229C;
    case 501u: goto L_08A022A8;
    case 502u: goto L_08A022DC;
    case 503u: goto L_08A022E8;
    case 504u: goto L_08A022F0;
    case 505u: goto L_08A0230C;
    case 506u: goto L_08A02338;
    case 507u: goto L_08A02344;
    case 508u: goto L_08A0236C;
    case 509u: goto L_08A02378;
    case 510u: goto L_08A02380;
    case 511u: goto L_08A0239C;
    case 512u: goto L_08A023E8;
    case 513u: goto L_08A02408;
    case 514u: goto L_08A0243C;
    case 515u: goto L_08A02448;
    case 516u: goto L_08A02454;
    case 517u: goto L_08A0245C;
    case 518u: goto L_08A0246C;
    case 519u: goto L_08A02478;
    case 520u: goto L_08A02484;
    case 521u: goto L_08A02494;
    case 522u: goto L_08A024A4;
    case 523u: goto L_08A024D8;
    case 524u: goto L_08A024E4;
    case 525u: goto L_08A024EC;
    case 526u: goto L_08A024F4;
    case 527u: goto L_08A02500;
    case 528u: goto L_08A02504;
    case 529u: goto L_08A02534;
    case 530u: goto L_08A02578;
    case 531u: goto L_08A02584;
    case 532u: goto L_08A025A0;
    case 533u: goto L_08A025C0;
    case 534u: goto L_08A025C4;
    case 535u: goto L_08A025E4;
    case 536u: goto L_08A025FC;
    case 537u: goto L_08A02604;
    case 538u: goto L_08A02618;
    case 539u: goto L_08A0264C;
    case 540u: goto L_08A02658;
    case 541u: goto L_08A02668;
    case 542u: goto L_08A02670;
    case 543u: goto L_08A02680;
    case 544u: goto L_08A0268C;
    case 545u: goto L_08A02694;
    case 546u: goto L_08A0269C;
    case 547u: goto L_08A026A4;
    case 548u: goto L_08A026B0;
    case 549u: goto L_08A026C0;
    case 550u: goto L_08A026D0;
    case 551u: goto L_08A02700;
    case 552u: goto L_08A0271C;
    case 553u: goto L_08A02724;
    case 554u: goto L_08A02740;
    case 555u: goto L_08A02750;
    case 556u: goto L_08A02758;
    case 557u: goto L_08A02760;
    case 558u: goto L_08A02764;
    case 559u: goto L_08A02794;
    case 560u: goto L_08A027A4;
    case 561u: goto L_08A027B0;
    case 562u: goto L_08A027C4;
    case 563u: goto L_08A027D0;
    case 564u: goto L_08A027D8;
    case 565u: goto L_08A027E0;
    case 566u: goto L_08A027F0;
    case 567u: goto L_08A02800;
    case 568u: goto L_08A02810;
    case 569u: goto L_08A02818;
    case 570u: goto L_08A02828;
    case 571u: goto L_08A0282C;
    case 572u: goto L_08A0283C;
    case 573u: goto L_08A02850;
    case 574u: goto L_08A0285C;
    case 575u: goto L_08A02864;
    case 576u: goto L_08A0286C;
    case 577u: goto L_08A0287C;
    case 578u: goto L_08A0288C;
    case 579u: goto L_08A0289C;
    case 580u: goto L_08A028A4;
    case 581u: goto L_08A028B4;
    case 582u: goto L_08A028B8;
    case 583u: goto L_08A028C8;
    case 584u: goto L_08A028DC;
    case 585u: goto L_08A028E8;
    case 586u: goto L_08A028FC;
    case 587u: goto L_08A02908;
    case 588u: goto L_08A02918;
    case 589u: goto L_08A02924;
    case 590u: goto L_08A02944;
    case 591u: goto L_08A0294C;
    case 592u: goto L_08A02954;
    case 593u: goto L_08A02964;
    case 594u: goto L_08A0296C;
    case 595u: goto L_08A02974;
    case 596u: goto L_08A0297C;
    case 597u: goto L_08A0299C;
    case 598u: goto L_08A029B0;
    case 599u: goto L_08A029D0;
    case 600u: goto L_08A029D4;
    case 601u: goto L_08A029E8;
    case 602u: goto L_08A02A08;
    case 603u: goto L_08A02A10;
    case 604u: goto L_08A02A18;
    case 605u: goto L_08A02A28;
    case 606u: goto L_08A02A30;
    case 607u: goto L_08A02A38;
    case 608u: goto L_08A02A40;
    case 609u: goto L_08A02A58;
    case 610u: goto L_08A02A68;
    case 611u: goto L_08A02A88;
    case 612u: goto L_08A02A8C;
    case 613u: goto L_08A02AA0;
    case 614u: goto L_08A02AD8;
    case 615u: goto L_08A02AE0;
    case 616u: goto L_08A02AEC;
    case 617u: goto L_08A02AF0;
    case 618u: goto L_08A02B00;
    case 619u: goto L_08A02B0C;
    case 620u: goto L_08A02B14;
    case 621u: goto L_08A02B20;
    case 622u: goto L_08A02B28;
    case 623u: goto L_08A02B2C;
    case 624u: goto L_08A02B48;
    case 625u: goto L_08A02B78;
    case 626u: goto L_08A02B80;
    case 627u: goto L_08A02B90;
    case 628u: goto L_08A02BA0;
    case 629u: goto L_08A02BA8;
    case 630u: goto L_08A02BB8;
    case 631u: goto L_08A02BC4;
    case 632u: goto L_08A02BCC;
    case 633u: goto L_08A02BD4;
    case 634u: goto L_08A02BDC;
    case 635u: goto L_08A02BEC;
    case 636u: goto L_08A02BF8;
    case 637u: goto L_08A02C04;
    case 638u: goto L_08A02C20;
    case 639u: goto L_08A02C24;
    case 640u: goto L_08A02C40;
    case 641u: goto L_08A02C6C;
    case 642u: goto L_08A02C74;
    case 643u: goto L_08A02C80;
    case 644u: goto L_08A02C90;
    case 645u: goto L_08A02C9C;
    case 646u: goto L_08A02CA4;
    case 647u: goto L_08A02CAC;
    case 648u: goto L_08A02CB8;
    case 649u: goto L_08A02CC0;
    case 650u: goto L_08A02CD0;
    case 651u: goto L_08A02CDC;
    case 652u: goto L_08A02CEC;
    case 653u: goto L_08A02CF8;
    case 654u: goto L_08A02CFC;
    case 655u: goto L_08A02D18;
    case 656u: goto L_08A02D50;
    case 657u: goto L_08A02D58;
    case 658u: goto L_08A02D64;
    case 659u: goto L_08A02D68;
    case 660u: goto L_08A02D78;
    case 661u: goto L_08A02D84;
    case 662u: goto L_08A02D8C;
    case 663u: goto L_08A02D98;
    case 664u: goto L_08A02DA0;
    case 665u: goto L_08A02DA4;
    case 666u: goto L_08A02DC0;
    case 667u: goto L_08A02DFC;
    case 668u: goto L_08A02E04;
    case 669u: goto L_08A02E10;
    case 670u: goto L_08A02E14;
    case 671u: goto L_08A02E24;
    case 672u: goto L_08A02E30;
    case 673u: goto L_08A02E3C;
    case 674u: goto L_08A02E4C;
    case 675u: goto L_08A02E5C;
    case 676u: goto L_08A02E68;
    case 677u: goto L_08A02E70;
    case 678u: goto L_08A02E7C;
    case 679u: goto L_08A02E80;
    case 680u: goto L_08A02E88;
    case 681u: goto L_08A02E94;
    case 682u: goto L_08A02EA4;
    case 683u: goto L_08A02EB8;
    case 684u: goto L_08A02EC0;
    case 685u: goto L_08A02EC8;
    case 686u: goto L_08A02ED4;
    case 687u: goto L_08A02ED8;
    case 688u: goto L_08A02EE4;
    case 689u: goto L_08A02EEC;
    case 690u: goto L_08A02EF0;
    case 691u: goto L_08A02F10;
    case 692u: goto L_08A02F30;
    case 693u: goto L_08A02F38;
    case 694u: goto L_08A02F44;
    case 695u: goto L_08A02F4C;
    case 696u: goto L_08A02F58;
    case 697u: goto L_08A02F68;
    case 698u: goto L_08A02F70;
    case 699u: goto L_08A02F78;
    case 700u: goto L_08A02F90;
    case 701u: goto L_08A02F94;
    case 702u: goto L_08A02FA8;
    case 703u: goto L_08A02FD4;
    case 704u: goto L_08A02FE0;
    case 705u: goto L_08A03010;
    case 706u: goto L_08A0301C;
    case 707u: goto L_08A03028;
    case 708u: goto L_08A03030;
    case 709u: goto L_08A0303C;
    case 710u: goto L_08A03050;
    case 711u: goto L_08A0305C;
    case 712u: goto L_08A0307C;
    case 713u: goto L_08A030A8;
    case 714u: goto L_08A030B4;
    case 715u: goto L_08A030E4;
    case 716u: goto L_08A030F0;
    case 717u: goto L_08A030FC;
    case 718u: goto L_08A03108;
    case 719u: goto L_08A03110;
    case 720u: goto L_08A0311C;
    case 721u: goto L_08A03130;
    case 722u: goto L_08A0313C;
    case 723u: goto L_08A0315C;
    case 724u: goto L_08A0318C;
    case 725u: goto L_08A03194;
    case 726u: goto L_08A0319C;
    case 727u: goto L_08A031A8;
    case 728u: goto L_08A031B8;
    case 729u: goto L_08A031CC;
    case 730u: goto L_08A031FC;
    case 731u: goto L_08A03208;
    case 732u: goto L_08A03214;
    case 733u: goto L_08A0321C;
    case 734u: goto L_08A03224;
    case 735u: goto L_08A0322C;
    case 736u: goto L_08A03238;
    case 737u: goto L_08A0324C;
    case 738u: goto L_08A03258;
    case 739u: goto L_08A0325C;
    case 740u: goto L_08A03280;
    case 741u: goto L_08A032A8;
    case 742u: goto L_08A032B4;
    case 743u: goto L_08A032C8;
    case 744u: goto L_08A032D0;
    case 745u: goto L_08A032D8;
    case 746u: goto L_08A032E4;
    case 747u: goto L_08A032F0;
    case 748u: goto L_08A032F8;
    case 749u: goto L_08A03304;
    case 750u: goto L_08A03308;
    case 751u: goto L_08A03314;
    case 752u: goto L_08A0331C;
    case 753u: goto L_08A03328;
    case 754u: goto L_08A03334;
    case 755u: goto L_08A0333C;
    case 756u: goto L_08A03348;
    case 757u: goto L_08A03358;
    case 758u: goto L_08A0335C;
    case 759u: goto L_08A03378;
    case 760u: goto L_08A033AC;
    case 761u: goto L_08A033B4;
    case 762u: goto L_08A033C0;
    case 763u: goto L_08A033C4;
    case 764u: goto L_08A033D4;
    case 765u: goto L_08A033F0;
    case 766u: goto L_08A03428;
    case 767u: goto L_08A03430;
    case 768u: goto L_08A0343C;
    case 769u: goto L_08A03440;
    case 770u: goto L_08A0344C;
    case 771u: goto L_08A03458;
    case 772u: goto L_08A03478;
    case 773u: goto L_08A034B0;
    case 774u: goto L_08A034B8;
    case 775u: goto L_08A034C4;
    case 776u: goto L_08A034C8;
    case 777u: goto L_08A034D4;
    case 778u: goto L_08A034E4;
    case 779u: goto L_08A03504;
    case 780u: goto L_08A03524;
    case 781u: goto L_08A03560;
    case 782u: goto L_08A03570;
    case 783u: goto L_08A03580;
    case 784u: goto L_08A0358C;
    case 785u: goto L_08A03598;
    case 786u: goto L_08A035A8;
    case 787u: goto L_08A035C0;
    case 788u: goto L_08A035E0;
    case 789u: goto L_08A035F0;
    case 790u: goto L_08A035FC;
    case 791u: goto L_08A03614;
    case 792u: goto L_08A03640;
    case 793u: goto L_08A03650;
    case 794u: goto L_08A03664;
    case 795u: goto L_08A03670;
    case 796u: goto L_08A0367C;
    case 797u: goto L_08A03680;
    case 798u: goto L_08A03694;
    case 799u: goto L_08A036A0;
    case 800u: goto L_08A036C4;
    case 801u: goto L_08A036DC;
    case 802u: goto L_08A036EC;
    case 803u: goto L_08A036F8;
    case 804u: goto L_08A03704;
    case 805u: goto L_08A0370C;
    case 806u: goto L_08A03718;
    case 807u: goto L_08A03730;
    case 808u: goto L_08A03764;
    case 809u: goto L_08A03774;
    case 810u: goto L_08A0377C;
    case 811u: goto L_08A0378C;
    case 812u: goto L_08A03794;
    case 813u: goto L_08A0379C;
    case 814u: goto L_08A037A8;
    case 815u: goto L_08A037B4;
    case 816u: goto L_08A037C4;
    case 817u: goto L_08A037CC;
    case 818u: goto L_08A037D4;
    case 819u: goto L_08A037EC;
    case 820u: goto L_08A037F8;
    case 821u: goto L_08A0380C;
    case 822u: goto L_08A03814;
    case 823u: goto L_08A03820;
    case 824u: goto L_08A0382C;
    case 825u: goto L_08A03838;
    case 826u: goto L_08A03840;
    case 827u: goto L_08A0385C;
    case 828u: goto L_08A0386C;
    case 829u: goto L_08A03874;
    case 830u: goto L_08A03888;
    case 831u: goto L_08A038AC;
    case 832u: goto L_08A038D0;
    case 833u: goto L_08A038DC;
    case 834u: goto L_08A038E4;
    case 835u: goto L_08A038F4;
    case 836u: goto L_08A03904;
    case 837u: goto L_08A03914;
    case 838u: goto L_08A03930;
    case 839u: goto L_08A03938;
    case 840u: goto L_08A03940;
    case 841u: goto L_08A03948;
    case 842u: goto L_08A03950;
    case 843u: goto L_08A0395C;
    case 844u: goto L_08A03964;
    case 845u: goto L_08A0396C;
    case 846u: goto L_08A03980;
    case 847u: goto L_08A03988;
    case 848u: goto L_08A03994;
    case 849u: goto L_08A039A0;
    case 850u: goto L_08A039C8;
    case 851u: goto L_08A039D8;
    case 852u: goto L_08A03A38;
    case 853u: goto L_08A03A40;
    case 854u: goto L_08A03A58;
    case 855u: goto L_08A03A68;
    case 856u: goto L_08A03A84;
    case 857u: goto L_08A03AAC;
    case 858u: goto L_08A03ABC;
    case 859u: goto L_08A03B1C;
    case 860u: goto L_08A03B24;
    case 861u: goto L_08A03B3C;
    case 862u: goto L_08A03B4C;
    case 863u: goto L_08A03B68;
    case 864u: goto L_08A03B78;
    case 865u: goto L_08A03B84;
    case 866u: goto L_08A03B8C;
    case 867u: goto L_08A03BA0;
    case 868u: goto L_08A03BA8;
    case 869u: goto L_08A03BB4;
    case 870u: goto L_08A03BC4;
    case 871u: goto L_08A03BD4;
    case 872u: goto L_08A03C18;
    case 873u: goto L_08A03C50;
    case 874u: goto L_08A03C9C;
    case 875u: goto L_08A03CB8;
    case 876u: goto L_08A03CC4;
    case 877u: goto L_08A03CE4;
    case 878u: goto L_08A03D0C;
    case 879u: goto L_08A03D2C;
    case 880u: goto L_08A03D44;
    case 881u: goto L_08A03D74;
    case 882u: goto L_08A03D80;
    case 883u: goto L_08A03D8C;
    case 884u: goto L_08A03D94;
    case 885u: goto L_08A03DBC;
    case 886u: goto L_08A03DCC;
    case 887u: goto L_08A03DEC;
    case 888u: goto L_08A03E08;
    case 889u: goto L_08A03E14;
    case 890u: goto L_08A03ED8;
    case 891u: goto L_08A03EE8;
    case 892u: goto L_08A03F00;
    case 893u: goto L_08A03F10;
    case 894u: goto L_08A03F2C;
    case 895u: goto L_08A03F4C;
    case 896u: goto L_08A03F5C;
    case 897u: goto L_08A03F90;
    case 898u: goto L_08A03FA0;
    case 899u: goto L_08A03FB8;
    case 900u: goto L_08A03FC8;
    case 901u: goto L_08A03FE4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A00000:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A00014;
      }
      goto L_08A0000C;
    }
L_08A0000C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A00050;
      }
      goto L_08A00014;
    }
L_08A00014:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08A00024u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 75u, 0x08875B2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A00024u) goto L_08A00024;
    return;
L_08A00024:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A00038u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 712u, 0x089FFD94u>(ctx, &aot_mem) && ctx.pc == 0x08A00038u) goto L_08A00038;
    return;
L_08A00038:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08A00048u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 555u, 0x0891713Cu>(ctx, &aot_mem) && ctx.pc == 0x08A00048u) goto L_08A00048;
    return;
L_08A00048:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00050;
      }
      goto L_08A00050;
    }
L_08A00050:
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
L_08A00068:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A00088u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 733u, 0x089FFF4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A00088u) goto L_08A00088;
    return;
L_08A00088:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (ctx.gpr[2] << 2u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A000A0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A000A0u) goto L_08A000A0;
    return;
L_08A000A0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A000BCu);
    ctx.gpr[7] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FFE64u>(ctx, &aot_mem) && ctx.pc == 0x08A000BCu) goto L_08A000BC;
    return;
L_08A000BC:
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
L_08A000D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A000FCu);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 733u, 0x089FFF4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A000FCu) goto L_08A000FC;
    return;
L_08A000FC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[20]);
    ctx.gpr[7] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A0011Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0011Cu) goto L_08A0011C;
    return;
L_08A0011C:
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
      if (branch_taken) {
          goto L_08A00180;
      }
      goto L_08A00130;
    }
L_08A00130:
    ctx.gpr[18] = (0u | 0u);
    goto L_08A00134;
L_08A00134:
    ctx.gpr[31] = (0x08A0013Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 741u, 0x089FFFE4u>(ctx, &aot_mem) && ctx.pc == 0x08A0013Cu) goto L_08A0013C;
    return;
L_08A0013C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[31] = (0x08A00150u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 733u, 0x089FFF4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A00150u) goto L_08A00150;
    return;
L_08A00150:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[31] = (0x08A00164u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 733u, 0x089FFF4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A00164u) goto L_08A00164;
    return;
L_08A00164:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A00134;
      }
      goto L_08A00180;
    }
L_08A00180:
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
L_08A001A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A001C0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 733u, 0x089FFF4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A001C0u) goto L_08A001C0;
    return;
L_08A001C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (ctx.gpr[2] << 2u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A001D8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A001D8u) goto L_08A001D8;
    return;
L_08A001D8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A001F4u);
    ctx.gpr[7] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FFE64u>(ctx, &aot_mem) && ctx.pc == 0x08A001F4u) goto L_08A001F4;
    return;
L_08A001F4:
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
L_08A0020C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A00234u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 733u, 0x089FFF4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A00234u) goto L_08A00234;
    return;
L_08A00234:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A0026C;
      }
      goto L_08A00240;
    }
L_08A00240:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A0026C;
      }
      goto L_08A0024C;
    }
L_08A0024C:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A00268u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3052));
    goto L_08A018AC;
L_08A00268:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08A0026C;
L_08A0026C:
    ctx.gpr[7] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A00280u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A00280u) goto L_08A00280;
    return;
L_08A00280:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A002BC;
      }
      goto L_08A00294;
    }
L_08A00294:
    ctx.gpr[20] = (0u | 0u);
    goto L_08A00298;
L_08A00298:
    ctx.gpr[31] = (0x08A002A0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 741u, 0x089FFFE4u>(ctx, &aot_mem) && ctx.pc == 0x08A002A0u) goto L_08A002A0;
    return;
L_08A002A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A00298;
      }
      goto L_08A002BC;
    }
L_08A002BC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A002DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A00314u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 733u, 0x089FFF4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A00314u) goto L_08A00314;
    return;
L_08A00314:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[18] << 3u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A0032Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0032Cu) goto L_08A0032C;
    return;
L_08A0032C:
    ctx.gpr[30] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A003E8;
      }
      goto L_08A00340;
    }
L_08A00340:
    ctx.gpr[23] = (2226u << 16u);
    ctx.gpr[21] = (0u | 3u);
    ctx.gpr[22] = (0u | 4u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-3008));
    goto L_08A00354;
L_08A00354:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A00364u);
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 705u, 0x089FFD14u>(ctx, &aot_mem) && ctx.pc == 0x08A00364u) goto L_08A00364;
    return;
L_08A00364:
    ctx.gpr[4] = (ctx.gpr[2] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A00384;
      }
      goto L_08A00374;
    }
L_08A00374:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A003C4;
      }
      goto L_08A0037C;
    }
L_08A0037C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08A003D8;
      }
      goto L_08A00384;
    }
L_08A00384:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A0039C;
      }
      goto L_08A0038C;
    }
L_08A0038C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A003B0;
      }
      goto L_08A00394;
    }
L_08A00394:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A003C4;
      }
      goto L_08A0039C;
    }
L_08A0039C:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    ctx.gpr[31] = (0x08A003A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 739u, 0x089FFFC0u>(ctx, &aot_mem) && ctx.pc == 0x08A003A8u) goto L_08A003A8;
    return;
L_08A003A8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A003D8;
      }
      goto L_08A003B0;
    }
L_08A003B0:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    ctx.gpr[31] = (0x08A003BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 741u, 0x089FFFE4u>(ctx, &aot_mem) && ctx.pc == 0x08A003BCu) goto L_08A003BC;
    return;
L_08A003BC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A003D8;
      }
      goto L_08A003C4;
    }
L_08A003C4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A003D8u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    goto L_08A018AC;
L_08A003D8:
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A00354;
      }
      goto L_08A003E8;
    }
L_08A003E8:
    ctx.gpr[31] = (0x08A003F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 733u, 0x089FFF4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A003F0u) goto L_08A003F0;
    return;
L_08A003F0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A00408u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A00408u) goto L_08A00408;
    return;
L_08A00408:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08A00448;
      }
      goto L_08A0041C;
    }
L_08A0041C:
    ctx.gpr[20] = (0u | 0u);
    goto L_08A00420;
L_08A00420:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08A0042Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A00478;
L_08A0042C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A00420;
      }
      goto L_08A00448;
    }
L_08A00448:
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
L_08A00478:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0049Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 148u, 0x08878C20u>(ctx, &aot_mem) && ctx.pc == 0x08A0049Cu) goto L_08A0049C;
    return;
L_08A0049C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A004A8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 741u, 0x089FFFE4u>(ctx, &aot_mem) && ctx.pc == 0x08A004A8u) goto L_08A004A8;
    return;
L_08A004A8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A004B4;
      }
      goto L_08A004B0;
    }
L_08A004B0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    goto L_08A004B4;
L_08A004B4:
    ctx.gpr[31] = (0x08A004BCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 733u, 0x089FFF4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A004BCu) goto L_08A004BC;
    return;
L_08A004BC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.gpr[31] = (0x08A004C8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 705u, 0x089FFD14u>(ctx, &aot_mem) && ctx.pc == 0x08A004C8u) goto L_08A004C8;
    return;
L_08A004C8:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[31] = (0x08A004D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 705u, 0x089FFD14u>(ctx, &aot_mem) && ctx.pc == 0x08A004D4u) goto L_08A004D4;
    return;
L_08A004D4:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[31] = (0x08A004E0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 705u, 0x089FFD14u>(ctx, &aot_mem) && ctx.pc == 0x08A004E0u) goto L_08A004E0;
    return;
L_08A004E0:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(70), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[31] = (0x08A004ECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 705u, 0x089FFD14u>(ctx, &aot_mem) && ctx.pc == 0x08A004ECu) goto L_08A004EC;
    return;
L_08A004EC:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(71), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A004FCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A001A0;
L_08A004FC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A00508u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A000D4;
L_08A00508:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A00514u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A0020C;
L_08A00514:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A00520u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A002DC;
L_08A00520:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A0052Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A00068;
L_08A0052C:
    ctx.gpr[31] = (0x08A00534u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08A01238;
L_08A00534:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A00550;
      }
      goto L_08A0053C;
    }
L_08A0053C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A00550u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2976));
    goto L_08A018AC;
L_08A00550:
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
L_08A0056C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2960));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    goto L_08A0058C;
L_08A0058C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A005B4;
      }
      goto L_08A00594;
    }
L_08A00594:
    ctx.gpr[31] = (0x08A0059Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 705u, 0x089FFD14u>(ctx, &aot_mem) && ctx.pc == 0x08A0059Cu) goto L_08A0059C;
    return;
L_08A0059C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A005B4;
      }
      goto L_08A005A8;
    }
L_08A005A8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08A0058C;
      }
      goto L_08A005B4;
    }
L_08A005B4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A005D0;
      }
      goto L_08A005BC;
    }
L_08A005BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A005D0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2952));
    goto L_08A018AC;
L_08A005D0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A005E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A00608u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 705u, 0x089FFD14u>(ctx, &aot_mem) && ctx.pc == 0x08A00608u) goto L_08A00608;
    return;
L_08A00608:
    ctx.gpr[4] = (ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A00634;
      }
      goto L_08A00614;
    }
L_08A00614:
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A00634u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2932));
    goto L_08A018AC;
L_08A00634:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0064C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A00664u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A0056C;
L_08A00664:
    ctx.gpr[31] = (0x08A0066Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 705u, 0x089FFD14u>(ctx, &aot_mem) && ctx.pc == 0x08A0066Cu) goto L_08A0066C;
    return;
L_08A0066C:
    ctx.gpr[4] = (ctx.gpr[2] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 81 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A006DC;
      }
      goto L_08A0067C;
    }
L_08A0067C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 4u));
    ctx.gpr[5] = (ctx.gpr[5] >> 28u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 4u));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2868));
      if (branch_taken) {
          goto L_08A006B4;
      }
      goto L_08A006A4;
    }
L_08A006A4:
    ctx.gpr[6] = (0u - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] & 15u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u - ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A006B8;
      }
      goto L_08A006B4;
    }
L_08A006B4:
    ctx.gpr[6] = (ctx.gpr[6] & 15u);
    goto L_08A006B8;
L_08A006B8:
    ctx.gpr[10] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    ctx.gpr[4] = (ctx.gpr[9] | 0u);
    ctx.gpr[8] = (ctx.gpr[10] | 0u);
    ctx.gpr[9] = (0u | 5u);
    ctx.gpr[31] = (0x08A006D8u);
    ctx.gpr[10] = (0u | 0u);
    goto L_08A018AC;
L_08A006D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A006DC;
L_08A006DC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 80 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00740;
      }
      goto L_08A006E8;
    }
L_08A006E8:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 4u));
    ctx.gpr[6] = (ctx.gpr[5] >> 28u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[7] = (2226u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2812));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) >= 0;
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 4u));
      if (branch_taken) {
          goto L_08A00720;
      }
      goto L_08A00710;
    }
L_08A00710:
    ctx.gpr[8] = (0u - ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] & 15u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (0u - ctx.gpr[8]);
      if (branch_taken) {
          goto L_08A00724;
      }
      goto L_08A00720;
    }
L_08A00720:
    ctx.gpr[8] = (ctx.gpr[8] & 15u);
    goto L_08A00724;
L_08A00724:
    ctx.gpr[9] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[9] = (0u | 5u);
    ctx.gpr[31] = (0x08A00740u);
    ctx.gpr[10] = (0u | 0u);
    goto L_08A018AC;
L_08A00740:
    ctx.gpr[31] = (0x08A00748u);
    // nop
    goto L_08A00908;
L_08A00748:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A00754u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 705u, 0x089FFD14u>(ctx, &aot_mem) && ctx.pc == 0x08A00754u) goto L_08A00754;
    return;
L_08A00754:
    ctx.gpr[4] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[17] ^ ctx.gpr[4]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x08A00778u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2756));
    goto L_08A005E4;
L_08A00778:
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x08A0078Cu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2752));
    goto L_08A005E4;
L_08A0078C:
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x08A007A0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2744));
    goto L_08A005E4;
L_08A007A0:
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[31] = (0x08A007B4u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2732));
    goto L_08A005E4;
L_08A007B4:
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[31] = (0x08A007C8u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2728));
    goto L_08A005E4;
L_08A007C8:
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[31] = (0x08A007DCu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2724));
    goto L_08A005E4;
L_08A007DC:
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[31] = (0x08A007F0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2720));
    goto L_08A005E4;
L_08A007F0:
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x08A00804u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2716));
    goto L_08A005E4;
L_08A00804:
    ctx.gpr[31] = (0x08A0080Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 739u, 0x089FFFC0u>(ctx, &aot_mem) && ctx.pc == 0x08A0080Cu) goto L_08A0080C;
    return;
L_08A0080C:
    ctx.gpr[4] = (19439u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[4] | 44859u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A00844;
      }
      goto L_08A00830;
    }
L_08A00830:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A00844u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2708));
    goto L_08A018AC;
L_08A00844:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00858:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0086Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A0064C;
L_08A0086C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A00878u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A00478;
L_08A00878:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00888:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[10] = (0u | 64u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[10];
    ctx.gpr[4] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08A008B8;
      }
      goto L_08A008AC;
    }
L_08A008AC:
    ctx.gpr[9] = (0u | 61u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08A008C4;
      }
      goto L_08A008B8;
    }
L_08A008B8:
    ctx.gpr[7] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08A008E8;
      }
      goto L_08A008C4;
    }
L_08A008C4:
    ctx.gpr[9] = (2226u << 16u);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(-2960))))));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08A008E4;
      }
      goto L_08A008D4;
    }
L_08A008D4:
    ctx.gpr[7] = (2226u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2680));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08A008E8;
      }
      goto L_08A008E4;
    }
L_08A008E4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    goto L_08A008E8;
L_08A008E8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A008FCu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08A00858;
L_08A008FC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00908:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00910:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A00934;
      }
      goto L_08A00920;
    }
L_08A00920:
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0093C;
      }
      goto L_08A0092C;
    }
L_08A0092C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A0094C;
      }
      goto L_08A00934;
    }
L_08A00934:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A00974;
      }
      goto L_08A0093C;
    }
L_08A0093C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A0094C;
L_08A0094C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    goto L_08A00974;
L_08A00974:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0097C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A00990u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A00910;
L_08A00990:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A009BC;
      }
      goto L_08A0099C;
    }
L_08A0099C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A009C4;
      }
      goto L_08A009B4;
    }
L_08A009B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A009D0;
      }
      goto L_08A009BC;
    }
L_08A009BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A009D0;
      }
      goto L_08A009C4;
    }
L_08A009C4:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A009D0;
L_08A009D0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A009E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[5];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A00A18;
      }
      goto L_08A00A00;
    }
L_08A00A00:
    ctx.gpr[31] = (0x08A00A08u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A00910;
L_08A00A08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-24));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A00A00;
      }
      goto L_08A00A18;
    }
L_08A00A18:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00A34:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00A44;
      }
      goto L_08A00A3C;
    }
L_08A00A3C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A00A4C;
      }
      goto L_08A00A44;
    }
L_08A00A44:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A00A4C;
L_08A00A4C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00A68:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00A70:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00A78:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00A80:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    goto L_08A00A88;
L_08A00A88:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[8] = (ctx.gpr[4] < ctx.gpr[7] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A00AB8;
      }
      goto L_08A00A90;
    }
L_08A00A90:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00AB8;
      }
      goto L_08A00A98;
    }
L_08A00A98:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (ctx.gpr[8] & 1u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A00AB0;
      }
      goto L_08A00AA8;
    }
L_08A00AA8:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[8]);
    goto L_08A00AB0;
L_08A00AB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-24));
      if (branch_taken) {
          goto L_08A00A88;
      }
      goto L_08A00AB8;
    }
L_08A00AB8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A00AC8;
      }
      goto L_08A00AC0;
    }
L_08A00AC0:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A00AD0;
      }
      goto L_08A00AC8;
    }
L_08A00AC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A00AF8;
      }
      goto L_08A00AD0;
    }
L_08A00AD0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A00AE4;
      }
      goto L_08A00AD8;
    }
L_08A00AD8:
    ctx.gpr[2] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(92), 0u);
      if (branch_taken) {
          goto L_08A00AF8;
      }
      goto L_08A00AE4;
    }
L_08A00AE4:
    ctx.gpr[5] = (0u | 24u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    goto L_08A00AF8;
L_08A00AF8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00B00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A00B1C;
      }
      goto L_08A00B10;
    }
L_08A00B10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_08A00B1C;
L_08A00B1C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00B24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[20] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A00B6Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08A00B00;
L_08A00B6C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00BB4;
      }
      goto L_08A00B78;
    }
L_08A00B78:
    ctx.gpr[31] = (0x08A00B80u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08A00910;
L_08A00B80:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A00B90u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 164u, 0x08878DCCu>(ctx, &aot_mem) && ctx.pc == 0x08A00B90u) goto L_08A00B90;
    return;
L_08A00B90:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00BB4;
      }
      goto L_08A00B9C;
    }
L_08A00B9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[16] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8));
    ctx.gpr[31] = (0x08A00BB4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 532u, 0x0890B1F8u>(ctx, &aot_mem) && ctx.pc == 0x08A00BB4u) goto L_08A00BB4;
    return;
L_08A00BB4:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
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
L_08A00BD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[20] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A00C20u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08A00B00;
L_08A00C20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A00C9C;
      }
      goto L_08A00C34;
    }
L_08A00C34:
    ctx.gpr[31] = (0x08A00C3Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08A00910;
L_08A00C3C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A00C4Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 164u, 0x08878DCCu>(ctx, &aot_mem) && ctx.pc == 0x08A00C4Cu) goto L_08A00C4C;
    return;
L_08A00C4C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00C68;
      }
      goto L_08A00C58;
    }
L_08A00C58:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (0u | 40u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_08A00C70;
    }
    goto L_08A00C68;
L_08A00C68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08A00C9C;
      }
      goto L_08A00C70;
    }
L_08A00C70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[16] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08A00C9C;
L_08A00C9C:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
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
L_08A00CC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(6)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
        goto L_08A00CFC;
    }
    goto L_08A00CD8;
L_08A00CD8:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2664));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2656));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A00D34;
      }
      goto L_08A00CFC;
    }
L_08A00CFC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A00D28;
      }
      goto L_08A00D1C;
    }
L_08A00D1C:
    ctx.gpr[6] = (2226u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2652));
      if (branch_taken) {
          goto L_08A00D30;
      }
      goto L_08A00D28;
    }
L_08A00D28:
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2644));
    goto L_08A00D30;
L_08A00D30:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    goto L_08A00D34;
L_08A00D34:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08A00D40u);
    ctx.gpr[6] = (0u | 60u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 220u, 0x08A5936Cu>(ctx, &aot_mem) && ctx.pc == 0x08A00D40u) goto L_08A00D40;
    return;
L_08A00D40:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00D4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(7)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] << (ctx.gpr[6] & 31u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A00DE8;
      }
      goto L_08A00D90;
    }
L_08A00D90:
    ctx.gpr[19] = (ctx.gpr[20] << 4u);
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    ctx.gpr[17] = (0u | 4u);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    goto L_08A00DA0;
L_08A00DA0:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[19]);
    ctx.gpr[31] = (0x08A00DB4u);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 186u, 0x08A59128u>(ctx, &aot_mem) && ctx.pc == 0x08A00DB4u) goto L_08A00DB4;
    return;
L_08A00DB4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00DD4;
      }
      goto L_08A00DBC;
    }
L_08A00DBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A00DD4;
      }
      goto L_08A00DC8;
    }
L_08A00DC8:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A00DEC;
      }
      goto L_08A00DD4;
    }
L_08A00DD4:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[20] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-20));
      if (branch_taken) {
          goto L_08A00DA0;
      }
      goto L_08A00DE8;
    }
L_08A00DE8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A00DEC;
L_08A00DEC:
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
L_08A00E14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2640));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2636));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[5] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2628));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A00E6Cu);
    ctx.gpr[6] = (0u | 60u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 220u, 0x08A5936Cu>(ctx, &aot_mem) && ctx.pc == 0x08A00E6Cu) goto L_08A00E6C;
    return;
L_08A00E6C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00E8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A00FD4;
      }
      goto L_08A00ED8;
    }
L_08A00ED8:
    ctx.gpr[23] = (2226u << 16u);
    ctx.gpr[30] = (2226u << 16u);
    ctx.gpr[22] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-2612));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-2640));
    goto L_08A00EEC;
L_08A00EEC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-83));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(35) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00FC0;
      }
      goto L_08A00EFC;
    }
L_08A00EFC:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-2352)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00F14:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A00F20u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08A00CC0;
L_08A00F20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00FC4;
      }
      goto L_08A00F28;
    }
L_08A00F28:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A00F3C;
      }
      goto L_08A00F30;
    }
L_08A00F30:
    ctx.gpr[31] = (0x08A00F38u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_08A0097C;
L_08A00F38:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08A00F3C;
L_08A00F3C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A00FC4;
      }
      goto L_08A00F44;
    }
L_08A00F44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(7)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A00FC4;
      }
      goto L_08A00F54;
    }
L_08A00F54:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A00F6C;
      }
      goto L_08A00F5C;
    }
L_08A00F5C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A00F68u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    goto L_08A01424;
L_08A00F68:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08A00F6C;
L_08A00F6C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A00F94;
      }
      goto L_08A00F74;
    }
L_08A00F74:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A00F80u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08A00D4C;
L_08A00F80:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A00F90;
      }
      goto L_08A00F88;
    }
L_08A00F88:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[23]);
      if (branch_taken) {
          goto L_08A00F94;
      }
      goto L_08A00F90;
    }
L_08A00F90:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[30]);
    goto L_08A00F94;
L_08A00F94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00FC4;
      }
      goto L_08A00F9C;
    }
L_08A00F9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A00FC4;
      }
      goto L_08A00FC0;
    }
L_08A00FC0:
    ctx.gpr[21] = (0u | 0u);
    goto L_08A00FC4;
L_08A00FC4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A00EEC;
      }
      goto L_08A00FD4;
    }
L_08A00FD4:
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
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
L_08A01008:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[8] = (0u | 62u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A01094;
      }
      goto L_08A01038;
    }
L_08A01038:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-8));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A01068;
      }
      goto L_08A01050;
    }
L_08A01050:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A01064u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2604));
    goto L_08A018AC;
L_08A01064:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A01068;
L_08A01068:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A01080u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A00E8C;
L_08A01080:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A010DC;
      }
      goto L_08A01094;
    }
L_08A01094:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A010D0;
      }
      goto L_08A010A0;
    }
L_08A010A0:
    ctx.gpr[4] = (ctx.gpr[5] << 3u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A010C8u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-8));
    goto L_08A00E8C;
L_08A010C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A010DC;
      }
      goto L_08A010D0;
    }
L_08A010D0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A010DCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A00E14;
L_08A010DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A010E8u);
    ctx.gpr[5] = (0u | 102u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 398u, 0x08AED634u>(ctx, &aot_mem) && ctx.pc == 0x08A010E8u) goto L_08A010E8;
    return;
L_08A010E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0111C;
      }
      goto L_08A010F0;
    }
L_08A010F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A01110;
      }
      goto L_08A01108;
    }
L_08A01108:
    ctx.gpr[31] = (0x08A01110u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 265u, 0x088B9728u>(ctx, &aot_mem) && ctx.pc == 0x08A01110u) goto L_08A01110;
    return;
L_08A01110:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08A0111C;
L_08A0111C:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_08A01138:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(71)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 251 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01188;
      }
      goto L_08A01148;
    }
L_08A01148:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A01160;
      }
      goto L_08A01158;
    }
L_08A01158:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A01188;
      }
      goto L_08A01160;
    }
L_08A01160:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[5] = (0u | 27u);
    ctx.gpr[4] = (ctx.gpr[4] & 63u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A01188;
      }
      goto L_08A01180;
    }
L_08A01180:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A0118C;
      }
      goto L_08A01188;
    }
L_08A01188:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A0118C;
L_08A0118C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A01194:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] & 63u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 28 ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (0u | 32u);
        goto L_08A011E8;
    }
    goto L_08A011B4;
L_08A011B4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 25 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A011E0;
      }
      goto L_08A011C0;
    }
L_08A011C0:
    ctx.gpr[4] = (ctx.gpr[5] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A011D8;
      }
      goto L_08A011D0;
    }
L_08A011D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A011F4;
      }
      goto L_08A011D8;
    }
L_08A011D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A011F4;
      }
      goto L_08A011E0;
    }
L_08A011E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A011F4;
      }
      goto L_08A011E8;
    }
L_08A011E8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A011E0;
      }
      goto L_08A011F0;
    }
L_08A011F0:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A011F4;
L_08A011F4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A011FC:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(71)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A0122C;
      }
      goto L_08A0120C;
    }
L_08A0120C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A01230;
      }
      goto L_08A01218;
    }
L_08A01218:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-250));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01230;
      }
      goto L_08A0122C;
    }
L_08A0122C:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A01230;
L_08A01230:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A01238:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0124Cu);
    ctx.gpr[6] = (0u | 255u);
    goto L_08A01910;
L_08A0124C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A01258:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-250));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A0128C;
      }
      goto L_08A01264;
    }
L_08A01264:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A0128C;
      }
      goto L_08A01280;
    }
L_08A01280:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A01294;
      }
      goto L_08A0128C;
    }
L_08A0128C:
    ctx.gpr[2] = (2226u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-2560));
    goto L_08A01294;
L_08A01294:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0129C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[7] & 1u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A01400;
      }
      goto L_08A012D0;
    }
L_08A012D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A012E4u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    goto L_08A00910;
L_08A012E4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A012F8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 164u, 0x08878DCCu>(ctx, &aot_mem) && ctx.pc == 0x08A012F8u) goto L_08A012F8;
    return;
L_08A012F8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A01328;
      }
      goto L_08A01300;
    }
L_08A01300:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A01310u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08A01910;
L_08A01310:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] & 63u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A01400;
      }
      goto L_08A01320;
    }
L_08A01320:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 12 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A01334;
      }
      goto L_08A01328;
    }
L_08A01328:
    ctx.gpr[2] = (2226u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-2556));
      if (branch_taken) {
          goto L_08A01404;
      }
      goto L_08A01334;
    }
L_08A01334:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01400;
      }
      goto L_08A0133C;
    }
L_08A0133C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-2208)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A01354:
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-2612));
      if (branch_taken) {
          goto L_08A01404;
      }
      goto L_08A01388;
    }
L_08A01388:
    ctx.gpr[4] = (ctx.gpr[18] >> 24u);
    ctx.gpr[18] = (ctx.gpr[18] >> 15u);
    ctx.gpr[18] = (ctx.gpr[18] & 511u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A013A8;
      }
      goto L_08A013A0;
    }
L_08A013A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01400;
      }
      goto L_08A013A8;
    }
L_08A013A8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A013B8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08A0129C;
L_08A013B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01404;
      }
      goto L_08A013C0;
    }
L_08A013C0:
    ctx.gpr[5] = (ctx.gpr[18] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[31] = (0x08A013D0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_08A01258;
L_08A013D0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (2226u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-2548));
      if (branch_taken) {
          goto L_08A01404;
      }
      goto L_08A013E0;
    }
L_08A013E0:
    ctx.gpr[5] = (ctx.gpr[18] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[31] = (0x08A013F0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_08A01258;
L_08A013F0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (2226u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-2540));
      if (branch_taken) {
          goto L_08A01404;
      }
      goto L_08A01400;
    }
L_08A01400:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A01404;
L_08A01404:
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
L_08A01424:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] & 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A01458;
      }
      goto L_08A0144C;
    }
L_08A0144C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A014A4;
      }
      goto L_08A01458;
    }
L_08A01458:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-16)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-24));
      if (branch_taken) {
          goto L_08A014A4;
      }
      goto L_08A01468;
    }
L_08A01468:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08A01480u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    goto L_08A00910;
L_08A01480:
    ctx.gpr[4] = (ctx.gpr[2] << 2u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 25u);
    ctx.gpr[6] = (ctx.gpr[4] & 63u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A014B8;
      }
      goto L_08A0149C;
    }
L_08A0149C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 63u);
      if (branch_taken) {
          goto L_08A014AC;
      }
      goto L_08A014A4;
    }
L_08A014A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A014D4;
      }
      goto L_08A014AC;
    }
L_08A014AC:
    ctx.gpr[6] = (0u | 26u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A014D0;
      }
      goto L_08A014B8;
    }
L_08A014B8:
    ctx.gpr[5] = (ctx.gpr[4] >> 24u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A014C8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08A0129C;
L_08A014C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A014D4;
      }
      goto L_08A014D0;
    }
L_08A014D0:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A014D4;
L_08A014D4:
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
L_08A014EC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01518;
      }
      goto L_08A01500;
    }
L_08A01500:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A01520;
      }
      goto L_08A01508;
    }
L_08A01508:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A01500;
      }
      goto L_08A01518;
    }
L_08A01518:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A01524;
      }
      goto L_08A01520;
    }
L_08A01520:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A01524;
L_08A01524:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0152C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26328));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A01580u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08A014EC;
L_08A01580:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A015B4;
      }
      goto L_08A01588;
    }
L_08A01588:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[20] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
    ctx.gpr[5] = (ctx.gpr[5] >> 29u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 3u));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08A015B0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    goto L_08A0129C;
L_08A015B0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_08A015B4;
L_08A015B4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A015E4;
      }
      goto L_08A015BC;
    }
L_08A015BC:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A015DCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2532));
    goto L_08A018AC;
L_08A015DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A015FC;
      }
      goto L_08A015E4;
    }
L_08A015E4:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A015FCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2496));
    goto L_08A018AC;
L_08A015FC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0161C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A01638;
      }
      goto L_08A01634;
    }
L_08A01634:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08A01638;
L_08A01638:
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[31] = (0x08A01644u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2468));
    goto L_08A0152C;
L_08A01644:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A01650:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0167Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 106u, 0x088D19D8u>(ctx, &aot_mem) && ctx.pc == 0x08A0167Cu) goto L_08A0167C;
    return;
L_08A0167C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A01688;
      }
      goto L_08A01684;
    }
L_08A01684:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08A01688;
L_08A01688:
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A0169Cu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2456));
    goto L_08A0152C;
L_08A0169C:
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
L_08A016B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(26328));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A0170C;
      }
      goto L_08A016F8;
    }
L_08A016F8:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[31] = (0x08A01704u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2432));
    goto L_08A018AC;
L_08A01704:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0171C;
      }
      goto L_08A0170C;
    }
L_08A0170C:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[31] = (0x08A0171Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2396));
    goto L_08A018AC;
L_08A0171C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0172C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A017A8;
      }
      goto L_08A01760;
    }
L_08A01760:
    ctx.gpr[31] = (0x08A01768u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08A0097C;
L_08A01768:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08A01778u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08A00B00;
L_08A01778:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A0178Cu);
    ctx.gpr[6] = (0u | 60u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 220u, 0x08A5936Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0178Cu) goto L_08A0178C;
    return;
L_08A0178C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A017A8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2364));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 218u, 0x08A5932Cu>(ctx, &aot_mem) && ctx.pc == 0x08A017A8u) goto L_08A017A8;
    return;
L_08A017A8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A017C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A0188C;
      }
      goto L_08A017E4;
    }
L_08A017E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_08A0180C;
    }
    goto L_08A017FC;
L_08A017FC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A01808u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 238u, 0x088B93ECu>(ctx, &aot_mem) && ctx.pc == 0x08A01808u) goto L_08A01808;
    return;
L_08A01808:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_08A0180C;
L_08A0180C:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A01870;
      }
      goto L_08A01868;
    }
L_08A01868:
    ctx.gpr[31] = (0x08A01870u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 265u, 0x088B9728u>(ctx, &aot_mem) && ctx.pc == 0x08A01870u) goto L_08A01870;
    return;
L_08A01870:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16));
    ctx.gpr[31] = (0x08A0188Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 352u, 0x088B9F0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0188Cu) goto L_08A0188C;
    return;
L_08A0188C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A01898u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 238u, 0x088B93ECu>(ctx, &aot_mem) && ctx.pc == 0x08A01898u) goto L_08A01898;
    return;
L_08A01898:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A018AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    ctx.gpr[4] = (0u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[10]);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[11]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A018ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 241u, 0x08A594CCu>(ctx, &aot_mem) && ctx.pc == 0x08A018ECu) goto L_08A018EC;
    return;
L_08A018EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A018F8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08A0172C;
L_08A018F8:
    ctx.gpr[31] = (0x08A01900u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A017C8;
L_08A01900:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A01910:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A01954u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    goto L_08A01138;
L_08A01954:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01E0C;
      }
      goto L_08A0195C;
    }
L_08A0195C:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01E38;
      }
      goto L_08A0196C;
    }
L_08A0196C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(71)));
    ctx.gpr[22] = (ctx.gpr[4] >> 24u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[4] & 63u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[30] = (0u | 0u);
      if (branch_taken) {
          goto L_08A01E0C;
      }
      goto L_08A01998;
    }
L_08A01998:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24608));
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 3u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A019C4;
      }
      goto L_08A019B4;
    }
L_08A019B4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A01AE0;
      }
      goto L_08A019BC;
    }
L_08A019BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A019DC;
      }
      goto L_08A019C4;
    }
L_08A019C4:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A01A84;
      }
      goto L_08A019CC;
    }
L_08A019CC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A01AC4;
      }
      goto L_08A019D4;
    }
L_08A019D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01AE0;
      }
      goto L_08A019DC;
    }
L_08A019DC:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[23] = (ctx.gpr[4] >> 15u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24608));
    ctx.gpr[30] = (ctx.gpr[4] >> 6u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[23] = (ctx.gpr[23] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (ctx.gpr[30] & 511u);
      if (branch_taken) {
          goto L_08A01A1C;
      }
      goto L_08A01A04;
    }
L_08A01A04:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(71)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01E0C;
      }
      goto L_08A01A14;
    }
L_08A01A14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01A4C;
      }
      goto L_08A01A1C;
    }
L_08A01A1C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24608));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01A4C;
      }
      goto L_08A01A38;
    }
L_08A01A38:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A01A44u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    goto L_08A011FC;
L_08A01A44:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01E0C;
      }
      goto L_08A01A4C;
    }
L_08A01A4C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24608));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01A7C;
      }
      goto L_08A01A68;
    }
L_08A01A68:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A01A74u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    goto L_08A011FC;
L_08A01A74:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01E0C;
      }
      goto L_08A01A7C;
    }
L_08A01A7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01AE0;
      }
      goto L_08A01A84;
    }
L_08A01A84:
    ctx.gpr[23] = (ctx.gpr[4] >> 6u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24608));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (ctx.gpr[23] & ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A01ABC;
      }
      goto L_08A01AAC;
    }
L_08A01AAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01E0C;
      }
      goto L_08A01ABC;
    }
L_08A01ABC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01AE0;
      }
      goto L_08A01AC4;
    }
L_08A01AC4:
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[23] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[23] = (ctx.gpr[23] - ctx.gpr[4]);
    goto L_08A01AE0;
L_08A01AE0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24608));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01B08;
      }
      goto L_08A01AFC;
    }
L_08A01AFC:
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A01B08;
      }
      goto L_08A01B04;
    }
L_08A01B04:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_08A01B08;
L_08A01B08:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24608));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01B58;
      }
      goto L_08A01B24;
    }
L_08A01B24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01E0C;
      }
      goto L_08A01B38;
    }
L_08A01B38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 20u);
    ctx.gpr[4] = (ctx.gpr[4] & 63u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A01E0C;
      }
      goto L_08A01B58;
    }
L_08A01B58:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(33) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08A01E28;
      }
      goto L_08A01B68;
    }
L_08A01B68:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-2160)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A01B80:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01B9C;
      }
      goto L_08A01B88;
    }
L_08A01B88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01E0C;
      }
      goto L_08A01B9C;
    }
L_08A01B9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01E28;
      }
      goto L_08A01BA4;
    }
L_08A01BA4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A01BBC;
      }
      goto L_08A01BB0;
    }
L_08A01BB0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A01BBC;
      }
      goto L_08A01BB8;
    }
L_08A01BB8:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_08A01BBC;
L_08A01BBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01E28;
      }
      goto L_08A01BC4;
    }
L_08A01BC4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01E0C;
      }
      goto L_08A01BD4;
    }
L_08A01BD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01E28;
      }
      goto L_08A01BDC;
    }
L_08A01BDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[23] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A01E0C;
      }
      goto L_08A01BF8;
    }
L_08A01BF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01E28;
      }
      goto L_08A01C00;
    }
L_08A01C00:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(71)));
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01E0C;
      }
      goto L_08A01C14;
    }
L_08A01C14:
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A01C24;
      }
      goto L_08A01C20;
    }
L_08A01C20:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_08A01C24;
L_08A01C24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01E28;
      }
      goto L_08A01C2C;
    }
L_08A01C2C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A01E0C;
      }
      goto L_08A01C38;
    }
L_08A01C38:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01E0C;
      }
      goto L_08A01C40;
    }
L_08A01C40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01E28;
      }
      goto L_08A01C48;
    }
L_08A01C48:
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[30]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(71)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01E0C;
      }
      goto L_08A01C60;
    }
L_08A01C60:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A01C70;
      }
      goto L_08A01C6C;
    }
L_08A01C6C:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_08A01C70;
L_08A01C70:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(71)));
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01E0C;
      }
      goto L_08A01C84;
    }
L_08A01C84:
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A01E0C;
      }
      goto L_08A01C94;
    }
L_08A01C94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01E0C;
      }
      goto L_08A01CA4;
    }
L_08A01CA4:
    ctx.gpr[5] = (0u | 255u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[5];
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A01CC4;
      }
      goto L_08A01CB0;
    }
L_08A01CB0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A01CC4;
      }
      goto L_08A01CB8;
    }
L_08A01CB8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A01CC4;
      }
      goto L_08A01CC0;
    }
L_08A01CC0:
    ctx.gpr[20] = (ctx.gpr[23] + ctx.gpr[20]);
    goto L_08A01CC4;
L_08A01CC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01E28;
      }
      goto L_08A01CCC;
    }
L_08A01CCC:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01CEC;
      }
      goto L_08A01CD4;
    }
L_08A01CD4:
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[23]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(71)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01E0C;
      }
      goto L_08A01CEC;
    }
L_08A01CEC:
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A01D18;
      }
      goto L_08A01CFC;
    }
L_08A01CFC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A01D08u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08A01194;
L_08A01D08:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01E0C;
      }
      goto L_08A01D10;
    }
L_08A01D10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01D38;
      }
      goto L_08A01D18;
    }
L_08A01D18:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01D38;
      }
      goto L_08A01D20;
    }
L_08A01D20:
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[30]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(71)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01E0C;
      }
      goto L_08A01D38;
    }
L_08A01D38:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A01D48;
      }
      goto L_08A01D44;
    }
L_08A01D44:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_08A01D48;
L_08A01D48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01E28;
      }
      goto L_08A01D50;
    }
L_08A01D50:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[23]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A01D74;
      }
      goto L_08A01D5C;
    }
L_08A01D5C:
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[23]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(71)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01E0C;
      }
      goto L_08A01D74;
    }
L_08A01D74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01E28;
      }
      goto L_08A01D7C;
    }
L_08A01D7C:
    ctx.gpr[4] = (ctx.gpr[23] & 31u);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(71)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01E0C;
      }
      goto L_08A01D98;
    }
L_08A01D98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01E28;
      }
      goto L_08A01DA0;
    }
L_08A01DA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01E0C;
      }
      goto L_08A01DB0;
    }
L_08A01DB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[23] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[23] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[20]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01E0C;
      }
      goto L_08A01DD8;
    }
L_08A01DD8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[23]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A01E20;
      }
      goto L_08A01DE0;
    }
L_08A01DE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[4] & 63u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A01E14;
      }
      goto L_08A01E04;
    }
L_08A01E04:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01E14;
      }
      goto L_08A01E0C;
    }
L_08A01E0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A01E48;
      }
      goto L_08A01E14;
    }
L_08A01E14:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[23]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A01DE0;
      }
      goto L_08A01E20;
    }
L_08A01E20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01E28;
      }
      goto L_08A01E28;
    }
L_08A01E28:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0196C;
      }
      goto L_08A01E38;
    }
L_08A01E38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A01E48;
L_08A01E48:
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
L_08A01E78:
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
L_08A01EA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01EF8;
      }
      goto L_08A01EC4;
    }
L_08A01EC4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_08A01ECC;
L_08A01ECC:
    ctx.gpr[8] = (ctx.gpr[8] < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
        goto L_08A01EEC;
    }
    goto L_08A01EDC;
L_08A01EDC:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A01EF0;
      }
      goto L_08A01EEC;
    }
L_08A01EEC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08A01EF0;
L_08A01EF0:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
        goto L_08A01ECC;
    }
    goto L_08A01EF8;
L_08A01EF8:
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_08A01F1C;
    }
    goto L_08A01F00;
L_08A01F00:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
        goto L_08A01F20;
    }
    goto L_08A01F18;
L_08A01F18:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08A01F1C;
L_08A01F1C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    goto L_08A01F20;
L_08A01F20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01F58;
      }
      goto L_08A01F50;
    }
L_08A01F50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A01F5C;
      }
      goto L_08A01F58;
    }
L_08A01F58:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    goto L_08A01F5C;
L_08A01F5C:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A01F64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A01F78u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1548));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 398u, 0x08A4B3B8u>(ctx, &aot_mem) && ctx.pc == 0x08A01F78u) goto L_08A01F78;
    return;
L_08A01F78:
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A01F88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A01F9Cu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1548));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 398u, 0x08A4B3B8u>(ctx, &aot_mem) && ctx.pc == 0x08A01F9Cu) goto L_08A01F9C;
    return;
L_08A01F9C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08A01FAC;
    }
    goto L_08A01FAC;
L_08A01FAC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A01FB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A01FD4u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_08A01F88;
L_08A01FD4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A01FF8;
      }
      goto L_08A01FDC;
    }
L_08A01FDC:
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A01FF0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-628));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 347u, 0x08A4B014u>(ctx, &aot_mem) && ctx.pc == 0x08A01FF0u) goto L_08A01FF0;
    return;
L_08A01FF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01FF8;
      }
      goto L_08A01FF8;
    }
L_08A01FF8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0200C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A02028u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A02028u) goto L_08A02028;
    return;
L_08A02028:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A02038u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1548));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 395u, 0x08A4B388u>(ctx, &aot_mem) && ctx.pc == 0x08A02038u) goto L_08A02038;
    return;
L_08A02038:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08A02048u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 709u, 0x0890BF54u>(ctx, &aot_mem) && ctx.pc == 0x08A02048u) goto L_08A02048;
    return;
L_08A02048:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A02054u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B630u>(ctx, &aot_mem) && ctx.pc == 0x08A02054u) goto L_08A02054;
    return;
L_08A02054:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A020AC;
      }
      goto L_08A0205C;
    }
L_08A0205C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A02068u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x08A02068u) goto L_08A02068;
    return;
L_08A02068:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A02074u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 92u, 0x0890C78Cu>(ctx, &aot_mem) && ctx.pc == 0x08A02074u) goto L_08A02074;
    return;
L_08A02074:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A02084u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x08A02084u) goto L_08A02084;
    return;
L_08A02084:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A02090u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 29u, 0x0890C2B8u>(ctx, &aot_mem) && ctx.pc == 0x08A02090u) goto L_08A02090;
    return;
L_08A02090:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A0209Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x08A0209Cu) goto L_08A0209C;
    return;
L_08A0209C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[31] = (0x08A020ACu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 26u, 0x0890C234u>(ctx, &aot_mem) && ctx.pc == 0x08A020ACu) goto L_08A020AC;
    return;
L_08A020AC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A020B8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 560u, 0x0890B468u>(ctx, &aot_mem) && ctx.pc == 0x08A020B8u) goto L_08A020B8;
    return;
L_08A020B8:
    ctx.gpr[31] = (0x08A020C0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A020C0u) goto L_08A020C0;
    return;
L_08A020C0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A020D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A020F4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-604));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x08A020F4u) goto L_08A020F4;
    return;
L_08A020F4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A02100u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 703u, 0x0890BE84u>(ctx, &aot_mem) && ctx.pc == 0x08A02100u) goto L_08A02100;
    return;
L_08A02100:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A02110u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A01F88;
L_08A02110:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A02120u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A02120u) goto L_08A02120;
    return;
L_08A02120:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A02130u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 45u, 0x0890C3ECu>(ctx, &aot_mem) && ctx.pc == 0x08A02130u) goto L_08A02130;
    return;
L_08A02130:
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
L_08A02148:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A02174u);
    ctx.gpr[18] = (ctx.gpr[6] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08A02174u) goto L_08A02174;
    return;
L_08A02174:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A02188u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 101u, 0x088A8530u>(ctx, &aot_mem) && ctx.pc == 0x08A02188u) goto L_08A02188;
    return;
L_08A02188:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08A021BC;
      }
      goto L_08A021B0;
    }
L_08A021B0:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08A021BC;
L_08A021BC:
    ctx.gpr[31] = (0x08A021C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A021C4u) goto L_08A021C4;
    return;
L_08A021C4:
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
L_08A021E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0220Cu);
    ctx.gpr[18] = (ctx.gpr[6] + static_cast<std::uint32_t>(5992));
    goto L_08A01FB8;
L_08A0220C:
    ctx.gpr[5] = (ctx.gpr[2] & 255u);
    ctx.gpr[31] = (0x08A02218u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 113u, 0x088A85F0u>(ctx, &aot_mem) && ctx.pc == 0x08A02218u) goto L_08A02218;
    return;
L_08A02218:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08A0224C;
      }
      goto L_08A02240;
    }
L_08A02240:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08A0224C;
L_08A0224C:
    ctx.gpr[31] = (0x08A02254u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A02254u) goto L_08A02254;
    return;
L_08A02254:
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
L_08A02270:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0229Cu);
    ctx.gpr[18] = (ctx.gpr[6] + static_cast<std::uint32_t>(5992));
    goto L_08A01FB8;
L_08A0229C:
    ctx.gpr[5] = (ctx.gpr[2] & 255u);
    ctx.gpr[31] = (0x08A022A8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 113u, 0x088A85F0u>(ctx, &aot_mem) && ctx.pc == 0x08A022A8u) goto L_08A022A8;
    return;
L_08A022A8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] << 8u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08A022E8;
      }
      goto L_08A022DC;
    }
L_08A022DC:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08A022E8;
L_08A022E8:
    ctx.gpr[31] = (0x08A022F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A022F0u) goto L_08A022F0;
    return;
L_08A022F0:
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
L_08A0230C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A02338u);
    ctx.gpr[18] = (ctx.gpr[6] + static_cast<std::uint32_t>(5992));
    goto L_08A01FB8;
L_08A02338:
    ctx.gpr[5] = (ctx.gpr[2] & 255u);
    ctx.gpr[31] = (0x08A02344u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 102u, 0x088A8548u>(ctx, &aot_mem) && ctx.pc == 0x08A02344u) goto L_08A02344;
    return;
L_08A02344:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08A02378;
      }
      goto L_08A0236C;
    }
L_08A0236C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08A02378;
L_08A02378:
    ctx.gpr[31] = (0x08A02380u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A02380u) goto L_08A02380;
    return;
L_08A02380:
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
L_08A0239C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A023E8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 702u, 0x089BF670u>(ctx, &aot_mem) && ctx.pc == 0x08A023E8u) goto L_08A023E8;
    return;
L_08A023E8:
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (2232u << 16u);
    ctx.gpr[19] = (0u | 0u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(5992));
    goto L_08A02408;
L_08A02408:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_08A0243C;
    }
    goto L_08A0243C;
L_08A0243C:
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A024F4;
      }
      goto L_08A02448;
    }
L_08A02448:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A02454u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 646u, 0x088A7DB8u>(ctx, &aot_mem) && ctx.pc == 0x08A02454u) goto L_08A02454;
    return;
L_08A02454:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A024EC;
      }
      goto L_08A0245C;
    }
L_08A0245C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A0246Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x08A0246Cu) goto L_08A0246C;
    return;
L_08A0246C:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A024EC;
      }
      goto L_08A02478;
    }
L_08A02478:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
        goto L_08A024A4;
    }
    goto L_08A02484;
L_08A02484:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A02494u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08A02494u) goto L_08A02494;
    return;
L_08A02494:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    goto L_08A024A4;
L_08A024A4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A024EC;
      }
      goto L_08A024D8;
    }
L_08A024D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A024E4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08A024E4u) goto L_08A024E4;
    return;
L_08A024E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A02504;
      }
      goto L_08A024EC;
    }
L_08A024EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A02408;
      }
      goto L_08A024F4;
    }
L_08A024F4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A02500u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08A02500u) goto L_08A02500;
    return;
L_08A02500:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08A02504;
L_08A02504:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A02534:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[23]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[23] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A02578u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 562u, 0x08ACE7B4u>(ctx, &aot_mem) && ctx.pc == 0x08A02578u) goto L_08A02578;
    return;
L_08A02578:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A02584u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A02584u) goto L_08A02584;
    return;
L_08A02584:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A025A0u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 702u, 0x089BF670u>(ctx, &aot_mem) && ctx.pc == 0x08A025A0u) goto L_08A025A0;
    return;
L_08A025A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A025C4;
      }
      goto L_08A025C0;
    }
L_08A025C0:
    ctx.gpr[23] = (0u | 0u);
    goto L_08A025C4;
L_08A025C4:
    ctx.gpr[4] = (16416u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A02604;
      }
      goto L_08A025E4;
    }
L_08A025E4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[6]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A025FCu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 794u, 0x089BFB94u>(ctx, &aot_mem) && ctx.pc == 0x08A025FCu) goto L_08A025FC;
    return;
L_08A025FC:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    goto L_08A02604;
L_08A02604:
    ctx.gpr[18] = (2232u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(5992));
    goto L_08A02618;
L_08A02618:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_08A0264C;
    }
    goto L_08A0264C;
L_08A0264C:
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02760;
      }
      goto L_08A02658;
    }
L_08A02658:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A02668u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 644u, 0x088A7D9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A02668u) goto L_08A02668;
    return;
L_08A02668:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02758;
      }
      goto L_08A02670;
    }
L_08A02670:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A02680u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x08A02680u) goto L_08A02680;
    return;
L_08A02680:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02758;
      }
      goto L_08A0268C;
    }
L_08A0268C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A026A4;
      }
      goto L_08A02694;
    }
L_08A02694:
    jump_target = ctx.gpr[19];
    ctx.gpr[31] = (0x08A0269Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0269Cu) goto L_08A0269C;
    return;
L_08A0269C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02758;
      }
      goto L_08A026A4;
    }
L_08A026A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
        goto L_08A026D0;
    }
    goto L_08A026B0;
L_08A026B0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A026C0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08A026C0u) goto L_08A026C0;
    return;
L_08A026C0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_08A026D0;
L_08A026D0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A02758;
      }
      goto L_08A02700;
    }
L_08A02700:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A02758;
      }
      goto L_08A0271C;
    }
L_08A0271C:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02740;
      }
      goto L_08A02724;
    }
L_08A02724:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A02758;
      }
      goto L_08A02740;
    }
L_08A02740:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[31] = (0x08A02750u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A0200C;
L_08A02750:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A02764;
      }
      goto L_08A02758;
    }
L_08A02758:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A02618;
      }
      goto L_08A02760;
    }
L_08A02760:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A02764;
L_08A02764:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A02794:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A027A4u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A02534;
L_08A027A4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A027B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A027D8;
      }
      goto L_08A027C4;
    }
L_08A027C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A027E0;
      }
      goto L_08A027D0;
    }
L_08A027D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_08A02800;
      }
      goto L_08A027D8;
    }
L_08A027D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A0282C;
      }
      goto L_08A027E0;
    }
L_08A027E0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A027F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08A027F0u) goto L_08A027F0;
    return;
L_08A027F0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_08A02800;
L_08A02800:
    ctx.gpr[4] = (0u | 65535u);
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A02818;
      }
      goto L_08A02810;
    }
L_08A02810:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A0282C;
      }
      goto L_08A02818;
    }
L_08A02818:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A02828u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x08A02828u) goto L_08A02828;
    return;
L_08A02828:
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    goto L_08A0282C;
L_08A0282C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0283C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A02864;
      }
      goto L_08A02850;
    }
L_08A02850:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0286C;
      }
      goto L_08A0285C;
    }
L_08A0285C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_08A0288C;
      }
      goto L_08A02864;
    }
L_08A02864:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A028B8;
      }
      goto L_08A0286C;
    }
L_08A0286C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A0287Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08A0287Cu) goto L_08A0287C;
    return;
L_08A0287C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_08A0288C;
L_08A0288C:
    ctx.gpr[4] = (0u | 65535u);
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A028A4;
      }
      goto L_08A0289C;
    }
L_08A0289C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A028B8;
      }
      goto L_08A028A4;
    }
L_08A028A4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A028B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x08A028B4u) goto L_08A028B4;
    return;
L_08A028B4:
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_08A028B8;
L_08A028B8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A028C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2208u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A028DCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10160));
    goto L_08A02534;
L_08A028DC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A028E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2208u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A028FCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10300));
    goto L_08A02534;
L_08A028FC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A02908:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A02918u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 135u, 0x08A4C8B0u>(ctx, &aot_mem) && ctx.pc == 0x08A02918u) goto L_08A02918;
    return;
L_08A02918:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A02924:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A02944u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 96u, 0x08A4C65Cu>(ctx, &aot_mem) && ctx.pc == 0x08A02944u) goto L_08A02944;
    return;
L_08A02944:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0296C;
      }
      goto L_08A0294C;
    }
L_08A0294C:
    ctx.gpr[31] = (0x08A02954u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A02954u) goto L_08A02954;
    return;
L_08A02954:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1336)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1332)));
        goto L_08A02974;
    }
    goto L_08A02964;
L_08A02964:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A0299C;
      }
      goto L_08A0296C;
    }
L_08A0296C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A029D4;
      }
      goto L_08A02974;
    }
L_08A02974:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
        goto L_08A0299C;
    }
    goto L_08A0297C;
L_08A0297C:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
      if (branch_taken) {
          goto L_08A029B0;
      }
      goto L_08A0299C;
    }
L_08A0299C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    goto L_08A029B0;
L_08A029B0:
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[12];
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08A029D0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 700u, 0x089BF64Cu>(ctx, &aot_mem) && ctx.pc == 0x08A029D0u) goto L_08A029D0;
    return;
L_08A029D0:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_08A029D4;
L_08A029D4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A029E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A02A08u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 96u, 0x08A4C65Cu>(ctx, &aot_mem) && ctx.pc == 0x08A02A08u) goto L_08A02A08;
    return;
L_08A02A08:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02A30;
      }
      goto L_08A02A10;
    }
L_08A02A10:
    ctx.gpr[31] = (0x08A02A18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A02A18u) goto L_08A02A18;
    return;
L_08A02A18:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1336)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1332)));
        goto L_08A02A38;
    }
    goto L_08A02A28;
L_08A02A28:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A02A58;
      }
      goto L_08A02A30;
    }
L_08A02A30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A02A8C;
      }
      goto L_08A02A38;
    }
L_08A02A38:
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_08A02A58;
    }
    goto L_08A02A40;
L_08A02A40:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
      if (branch_taken) {
          goto L_08A02A68;
      }
      goto L_08A02A58;
    }
L_08A02A58:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    goto L_08A02A68;
L_08A02A68:
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[12];
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08A02A88u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 700u, 0x089BF64Cu>(ctx, &aot_mem) && ctx.pc == 0x08A02A88u) goto L_08A02A88;
    return;
L_08A02A88:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_08A02A8C;
L_08A02A8C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A02AA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2232u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A02AD8u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A01F64;
L_08A02AD8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02AF0;
      }
      goto L_08A02AE0;
    }
L_08A02AE0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A02AECu);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A01F88;
L_08A02AEC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_08A02AF0;
L_08A02AF0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A02B00u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x08A02B00u) goto L_08A02B00;
    return;
L_08A02B00:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02B28;
      }
      goto L_08A02B0C;
    }
L_08A02B0C:
    ctx.gpr[31] = (0x08A02B14u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 122u, 0x08A34BA4u>(ctx, &aot_mem) && ctx.pc == 0x08A02B14u) goto L_08A02B14;
    return;
L_08A02B14:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A02B20u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08A02B20u) goto L_08A02B20;
    return;
L_08A02B20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A02B2C;
      }
      goto L_08A02B28;
    }
L_08A02B28:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A02B2C;
L_08A02B2C:
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
L_08A02B48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A02B78u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(5992));
    goto L_08A01F64;
L_08A02B78:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02BD4;
      }
      goto L_08A02B80;
    }
L_08A02B80:
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A02B90u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A01F88;
L_08A02B90:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A02BA0u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B630u>(ctx, &aot_mem) && ctx.pc == 0x08A02BA0u) goto L_08A02BA0;
    return;
L_08A02BA0:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A02BCC;
      }
      goto L_08A02BA8;
    }
L_08A02BA8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A02BB8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x08A02BB8u) goto L_08A02BB8;
    return;
L_08A02BB8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A02BDC;
      }
      goto L_08A02BC4;
    }
L_08A02BC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02C20;
      }
      goto L_08A02BCC;
    }
L_08A02BCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A02C24;
      }
      goto L_08A02BD4;
    }
L_08A02BD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A02C24;
      }
      goto L_08A02BDC;
    }
L_08A02BDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A02C20;
      }
      goto L_08A02BEC;
    }
L_08A02BEC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A02BF8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B88Cu>(ctx, &aot_mem) && ctx.pc == 0x08A02BF8u) goto L_08A02BF8;
    return;
L_08A02BF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (0x08A02C04u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 687u, 0x08967108u>(ctx, &aot_mem) && ctx.pc == 0x08A02C04u) goto L_08A02C04;
    return;
L_08A02C04:
    ctx.gpr[4] = (ctx.gpr[2] << 6u);
    ctx.gpr[5] = (ctx.gpr[2] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21984));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[16]));
    goto L_08A02C20;
L_08A02C20:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A02C24;
L_08A02C24:
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
L_08A02C40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[18] = (2232u << 16u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A02C6Cu);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(5992));
    goto L_08A01F64;
L_08A02C6C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02CA4;
      }
      goto L_08A02C74;
    }
L_08A02C74:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A02C80u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A01F88;
L_08A02C80:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08A02C90u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A02C90u) goto L_08A02C90;
    return;
L_08A02C90:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02CAC;
      }
      goto L_08A02C9C;
    }
L_08A02C9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02CC0;
      }
      goto L_08A02CA4;
    }
L_08A02CA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A02CFC;
      }
      goto L_08A02CAC;
    }
L_08A02CAC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A02CB8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08A02CB8u) goto L_08A02CB8;
    return;
L_08A02CB8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A02CC0;
L_08A02CC0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A02CD0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x08A02CD0u) goto L_08A02CD0;
    return;
L_08A02CD0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02CF8;
      }
      goto L_08A02CDC;
    }
L_08A02CDC:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A02CF8;
      }
      goto L_08A02CEC;
    }
L_08A02CEC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A02CF8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 79u, 0x0896854Cu>(ctx, &aot_mem) && ctx.pc == 0x08A02CF8u) goto L_08A02CF8;
    return;
L_08A02CF8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A02CFC;
L_08A02CFC:
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
L_08A02D18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2232u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A02D50u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A01F64;
L_08A02D50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02D68;
      }
      goto L_08A02D58;
    }
L_08A02D58:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A02D64u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A01F88;
L_08A02D64:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_08A02D68;
L_08A02D68:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A02D78u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x08A02D78u) goto L_08A02D78;
    return;
L_08A02D78:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02DA0;
      }
      goto L_08A02D84;
    }
L_08A02D84:
    ctx.gpr[31] = (0x08A02D8Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 126u, 0x08A34BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A02D8Cu) goto L_08A02D8C;
    return;
L_08A02D8C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A02D98u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08A02D98u) goto L_08A02D98;
    return;
L_08A02D98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A02DA4;
      }
      goto L_08A02DA0;
    }
L_08A02DA0:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A02DA4;
L_08A02DA4:
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
L_08A02DC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A02DFCu);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A01F64;
L_08A02DFC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02E14;
      }
      goto L_08A02E04;
    }
L_08A02E04:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A02E10u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A01F88;
L_08A02E10:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_08A02E14;
L_08A02E14:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A02E24u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x08A02E24u) goto L_08A02E24;
    return;
L_08A02E24:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02EEC;
      }
      goto L_08A02E30;
    }
L_08A02E30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (0u | 65535u);
      if (branch_taken) {
          goto L_08A02E5C;
      }
      goto L_08A02E3C;
    }
L_08A02E3C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A02E4Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08A02E4Cu) goto L_08A02E4C;
    return;
L_08A02E4C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A02E5C;
L_08A02E5C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A02E70;
      }
      goto L_08A02E68;
    }
L_08A02E68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A02E80;
      }
      goto L_08A02E70;
    }
L_08A02E70:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[31] = (0x08A02E7Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x08A02E7Cu) goto L_08A02E7C;
    return;
L_08A02E7C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08A02E80;
L_08A02E80:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02EEC;
      }
      goto L_08A02E88;
    }
L_08A02E88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
        goto L_08A02EB8;
    }
    goto L_08A02E94;
L_08A02E94:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(17));
    ctx.gpr[31] = (0x08A02EA4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08A02EA4u) goto L_08A02EA4;
    return;
L_08A02EA4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    goto L_08A02EB8;
L_08A02EB8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A02EC8;
      }
      goto L_08A02EC0;
    }
L_08A02EC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A02ED8;
      }
      goto L_08A02EC8;
    }
L_08A02EC8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[31] = (0x08A02ED4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x08A02ED4u) goto L_08A02ED4;
    return;
L_08A02ED4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_08A02ED8;
L_08A02ED8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A02EE4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 121u, 0x08A4C7C0u>(ctx, &aot_mem) && ctx.pc == 0x08A02EE4u) goto L_08A02EE4;
    return;
L_08A02EE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A02EF0;
      }
      goto L_08A02EEC;
    }
L_08A02EEC:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A02EF0;
L_08A02EF0:
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
L_08A02F10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A02F30u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A01F64;
L_08A02F30:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A02F70;
      }
      goto L_08A02F38;
    }
L_08A02F38:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A02F44u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 587u, 0x0890B6D8u>(ctx, &aot_mem) && ctx.pc == 0x08A02F44u) goto L_08A02F44;
    return;
L_08A02F44:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02F78;
      }
      goto L_08A02F4C;
    }
L_08A02F4C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A02F58u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08A02F58u) goto L_08A02F58;
    return;
L_08A02F58:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A02F68u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A0200C;
L_08A02F68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02F90;
      }
      goto L_08A02F70;
    }
L_08A02F70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A02F94;
      }
      goto L_08A02F78;
    }
L_08A02F78:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A02F90u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    goto L_08A0200C;
L_08A02F90:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_08A02F94;
L_08A02F94:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A02FA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(5992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A02FD4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 712u, 0x0890BFC8u>(ctx, &aot_mem) && ctx.pc == 0x08A02FD4u) goto L_08A02FD4;
    return;
L_08A02FD4:
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    goto L_08A02FE0;
L_08A02FE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_08A03010;
    }
    goto L_08A03010;
L_08A03010:
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0305C;
      }
      goto L_08A0301C;
    }
L_08A0301C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A03028u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 646u, 0x088A7DB8u>(ctx, &aot_mem) && ctx.pc == 0x08A03028u) goto L_08A03028;
    return;
L_08A03028:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03050;
      }
      goto L_08A03030;
    }
L_08A03030:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A0303Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A0200C;
L_08A0303C:
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A03050u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 26u, 0x0890C234u>(ctx, &aot_mem) && ctx.pc == 0x08A03050u) goto L_08A03050;
    return;
L_08A03050:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_08A02FE0;
      }
      goto L_08A0305C;
    }
L_08A0305C:
    ctx.gpr[2] = (0u | 1u);
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
L_08A0307C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(5992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A030A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 712u, 0x0890BFC8u>(ctx, &aot_mem) && ctx.pc == 0x08A030A8u) goto L_08A030A8;
    return;
L_08A030A8:
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    goto L_08A030B4;
L_08A030B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(108)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[8] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_08A030E4;
    }
    goto L_08A030E4;
L_08A030E4:
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0313C;
      }
      goto L_08A030F0;
    }
L_08A030F0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A03130;
      }
      goto L_08A030FC;
    }
L_08A030FC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A03108u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 646u, 0x088A7DB8u>(ctx, &aot_mem) && ctx.pc == 0x08A03108u) goto L_08A03108;
    return;
L_08A03108:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03130;
      }
      goto L_08A03110;
    }
L_08A03110:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A0311Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A0200C;
L_08A0311C:
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A03130u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 26u, 0x0890C234u>(ctx, &aot_mem) && ctx.pc == 0x08A03130u) goto L_08A03130;
    return;
L_08A03130:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_08A030B4;
      }
      goto L_08A0313C;
    }
L_08A0313C:
    ctx.gpr[2] = (0u | 1u);
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
L_08A0315C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[21] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0318Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 587u, 0x0890B6D8u>(ctx, &aot_mem) && ctx.pc == 0x08A0318Cu) goto L_08A0318C;
    return;
L_08A0318C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0319C;
      }
      goto L_08A03194;
    }
L_08A03194:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A0325C;
      }
      goto L_08A0319C;
    }
L_08A0319C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A031A8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08A031A8u) goto L_08A031A8;
    return;
L_08A031A8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A031B8u);
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 712u, 0x0890BFC8u>(ctx, &aot_mem) && ctx.pc == 0x08A031B8u) goto L_08A031B8;
    return;
L_08A031B8:
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(5992));
    ctx.gpr[19] = (ctx.gpr[21] | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    goto L_08A031CC;
L_08A031CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_08A031FC;
    }
    goto L_08A031FC;
L_08A031FC:
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03258;
      }
      goto L_08A03208;
    }
L_08A03208:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A03214u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 646u, 0x088A7DB8u>(ctx, &aot_mem) && ctx.pc == 0x08A03214u) goto L_08A03214;
    return;
L_08A03214:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A0324C;
      }
      goto L_08A0321C;
    }
L_08A0321C:
    ctx.gpr[31] = (0x08A03224u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 46u, 0x088A8288u>(ctx, &aot_mem) && ctx.pc == 0x08A03224u) goto L_08A03224;
    return;
L_08A03224:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08A0324C;
      }
      goto L_08A0322C;
    }
L_08A0322C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A03238u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A0200C;
L_08A03238:
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A0324Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 26u, 0x0890C234u>(ctx, &aot_mem) && ctx.pc == 0x08A0324Cu) goto L_08A0324C;
    return;
L_08A0324C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_08A031CC;
      }
      goto L_08A03258;
    }
L_08A03258:
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
    goto L_08A0325C;
L_08A0325C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03280:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A032A8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 594u, 0x0890B730u>(ctx, &aot_mem) && ctx.pc == 0x08A032A8u) goto L_08A032A8;
    return;
L_08A032A8:
    ctx.gpr[18] = (2232u << 16u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(5992));
      if (branch_taken) {
          goto L_08A032D8;
      }
      goto L_08A032B4;
    }
L_08A032B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[17] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x08A032C8u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A01F64;
L_08A032C8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A032F8;
      }
      goto L_08A032D0;
    }
L_08A032D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03308;
      }
      goto L_08A032D8;
    }
L_08A032D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A032E4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 625u, 0x0890B8D8u>(ctx, &aot_mem) && ctx.pc == 0x08A032E4u) goto L_08A032E4;
    return;
L_08A032E4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A032F0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 658u, 0x088A7E60u>(ctx, &aot_mem) && ctx.pc == 0x08A032F0u) goto L_08A032F0;
    return;
L_08A032F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A0335C;
      }
      goto L_08A032F8;
    }
L_08A032F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A03304u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A01F88;
L_08A03304:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_08A03308;
L_08A03308:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A03314u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 654u, 0x088A7E18u>(ctx, &aot_mem) && ctx.pc == 0x08A03314u) goto L_08A03314;
    return;
L_08A03314:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0333C;
      }
      goto L_08A0331C;
    }
L_08A0331C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A03328u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 663u, 0x088A7EC8u>(ctx, &aot_mem) && ctx.pc == 0x08A03328u) goto L_08A03328;
    return;
L_08A03328:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A03334u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x08A03334u) goto L_08A03334;
    return;
L_08A03334:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03358;
      }
      goto L_08A0333C;
    }
L_08A0333C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A03348u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-592));
    goto L_08A01E78;
L_08A03348:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A03358u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-528));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x08A03358u) goto L_08A03358;
    return;
L_08A03358:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    goto L_08A0335C;
L_08A0335C:
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
L_08A03378:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A033ACu);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A01F64;
L_08A033AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A033C4;
      }
      goto L_08A033B4;
    }
L_08A033B4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A033C0u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A01F88;
L_08A033C0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_08A033C4;
L_08A033C4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A033D4u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A033D4u) goto L_08A033D4;
    return;
L_08A033D4:
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
L_08A033F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2232u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A03428u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A01F64;
L_08A03428:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03440;
      }
      goto L_08A03430;
    }
L_08A03430:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A0343Cu);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A01F88;
L_08A0343C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_08A03440;
L_08A03440:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A0344Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 36u, 0x088A81F0u>(ctx, &aot_mem) && ctx.pc == 0x08A0344Cu) goto L_08A0344C;
    return;
L_08A0344C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A03458u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x08A03458u) goto L_08A03458;
    return;
L_08A03458:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08A03478:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2232u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A034B0u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A01F64;
L_08A034B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A034C8;
      }
      goto L_08A034B8;
    }
L_08A034B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A034C4u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A01F88;
L_08A034C4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_08A034C8;
L_08A034C8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A034D4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 46u, 0x088A8288u>(ctx, &aot_mem) && ctx.pc == 0x08A034D4u) goto L_08A034D4;
    return;
L_08A034D4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A034E4u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A034E4u) goto L_08A034E4;
    return;
L_08A034E4:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08A03504:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A03524u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A01FB8;
L_08A03524:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[2] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (17530u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[7] & 255u);
    ctx.gpr[7] = (16128u << 16u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
      if (branch_taken) {
          goto L_08A03570;
      }
      goto L_08A03560;
    }
L_08A03560:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08A03598;
      }
      goto L_08A03570;
    }
L_08A03570:
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
      if (branch_taken) {
          goto L_08A0358C;
      }
      goto L_08A03580;
    }
L_08A03580:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[16];
    goto L_08A0358C;
L_08A0358C:
    ctx.fpr[14] = ctx.fpr[15] / ctx.fpr[14];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    goto L_08A03598;
L_08A03598:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(ctx.fpr[12]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x08A035A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A035A8u) goto L_08A035A8;
    return;
L_08A035A8:
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
L_08A035C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A035E0u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A01FB8;
L_08A035E0:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A035F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 654u, 0x088A7E18u>(ctx, &aot_mem) && ctx.pc == 0x08A035F0u) goto L_08A035F0;
    return;
L_08A035F0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A035FCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08A035FCu) goto L_08A035FC;
    return;
L_08A035FC:
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
L_08A03614:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A03640u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x08A03640u) goto L_08A03640;
    return;
L_08A03640:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A03650u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x08A03650u) goto L_08A03650;
    return;
L_08A03650:
    ctx.gpr[5] = (49864u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A03664u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A03664u) goto L_08A03664;
    return;
L_08A03664:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A03680;
      }
      goto L_08A03670;
    }
L_08A03670:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A0367Cu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x08A0367Cu) goto L_08A0367C;
    return;
L_08A0367C:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A03680;
L_08A03680:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A03694u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 512u, 0x08AB732Cu>(ctx, &aot_mem) && ctx.pc == 0x08A03694u) goto L_08A03694;
    return;
L_08A03694:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A036A0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 121u, 0x08A4C7C0u>(ctx, &aot_mem) && ctx.pc == 0x08A036A0u) goto L_08A036A0;
    return;
L_08A036A0:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A036C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A036DCu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A036DCu) goto L_08A036DC;
    return;
L_08A036DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 56u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08A036F8;
      }
      goto L_08A036EC;
    }
L_08A036EC:
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A0370C;
      }
      goto L_08A036F8;
    }
L_08A036F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A03704u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08A03704u) goto L_08A03704;
    return;
L_08A03704:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03718;
      }
      goto L_08A0370C;
    }
L_08A0370C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A03718u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08A03718u) goto L_08A03718;
    return;
L_08A03718:
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
L_08A03730:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A03764u);
    ctx.gpr[17] = (ctx.gpr[6] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x08A03764u) goto L_08A03764;
    return;
L_08A03764:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A03774u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 650u, 0x088A7DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A03774u) goto L_08A03774;
    return;
L_08A03774:
    ctx.gpr[31] = (0x08A0377Cu);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A0377Cu) goto L_08A0377C;
    return;
L_08A0377C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A0378Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 96u, 0x08A4C65Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0378Cu) goto L_08A0378C;
    return;
L_08A0378C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A03814;
      }
      goto L_08A03794;
    }
L_08A03794:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03814;
      }
      goto L_08A0379C;
    }
L_08A0379C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03814;
      }
      goto L_08A037A8;
    }
L_08A037A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03814;
      }
      goto L_08A037B4;
    }
L_08A037B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 56u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 58u);
      if (branch_taken) {
          goto L_08A03814;
      }
      goto L_08A037C4;
    }
L_08A037C4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A03814;
      }
      goto L_08A037CC;
    }
L_08A037CC:
    ctx.gpr[31] = (0x08A037D4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 198u, 0x08944DA0u>(ctx, &aot_mem) && ctx.pc == 0x08A037D4u) goto L_08A037D4;
    return;
L_08A037D4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (0u | 18u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1412), ctx.gpr[6]);
    ctx.gpr[31] = (0x08A037ECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x08A037ECu) goto L_08A037EC;
    return;
L_08A037EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08A037F8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 226u, 0x089BD0ECu>(ctx, &aot_mem) && ctx.pc == 0x08A037F8u) goto L_08A037F8;
    return;
L_08A037F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1412), 0u);
    ctx.gpr[31] = (0x08A0380Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08A0380Cu) goto L_08A0380C;
    return;
L_08A0380C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0382C;
      }
      goto L_08A03814;
    }
L_08A03814:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A03820u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08A03820u) goto L_08A03820;
    return;
L_08A03820:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A0382Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-524));
    goto L_08A01E78;
L_08A0382C:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A03838u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x08A03838u) goto L_08A03838;
    return;
L_08A03838:
    ctx.gpr[31] = (0x08A03840u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 604u, 0x089C68BCu>(ctx, &aot_mem) && ctx.pc == 0x08A03840u) goto L_08A03840;
    return;
L_08A03840:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A0385Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 386u, 0x088EE7ACu>(ctx, &aot_mem) && ctx.pc == 0x08A0385Cu) goto L_08A0385C;
    return;
L_08A0385C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A0386Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 397u, 0x088EE884u>(ctx, &aot_mem) && ctx.pc == 0x08A0386Cu) goto L_08A0386C;
    return;
L_08A0386C:
    ctx.gpr[31] = (0x08A03874u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 434u, 0x088EEC6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A03874u) goto L_08A03874;
    return;
L_08A03874:
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08A03888u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 397u, 0x088EE884u>(ctx, &aot_mem) && ctx.pc == 0x08A03888u) goto L_08A03888;
    return;
L_08A03888:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A038AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08A038DC;
      }
      goto L_08A038D0;
    }
L_08A038D0:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08A038DC;
L_08A038DC:
    ctx.gpr[31] = (0x08A038E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A038E4u) goto L_08A038E4;
    return;
L_08A038E4:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A038F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A03904u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 641u, 0x08942F1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A03904u) goto L_08A03904;
    return;
L_08A03904:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03914:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
      if (branch_taken) {
          goto L_08A0395C;
      }
      goto L_08A03930;
    }
L_08A03930:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03948;
      }
      goto L_08A03938;
    }
L_08A03938:
    ctx.gpr[31] = (0x08A03940u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A03940u) goto L_08A03940;
    return;
L_08A03940:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(136), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A03994;
      }
      goto L_08A03948;
    }
L_08A03948:
    ctx.gpr[31] = (0x08A03950u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A03950u) goto L_08A03950;
    return;
L_08A03950:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(136), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A03994;
      }
      goto L_08A0395C;
    }
L_08A0395C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03980;
      }
      goto L_08A03964;
    }
L_08A03964:
    ctx.gpr[31] = (0x08A0396Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A0396Cu) goto L_08A0396C;
    return;
L_08A0396C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A03994;
      }
      goto L_08A03980;
    }
L_08A03980:
    ctx.gpr[31] = (0x08A03988u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A03988u) goto L_08A03988;
    return;
L_08A03988:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A03994;
L_08A03994:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A039A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[6] = (11u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A039C8u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(181));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 562u, 0x08ACE7B4u>(ctx, &aot_mem) && ctx.pc == 0x08A039C8u) goto L_08A039C8;
    return;
L_08A039C8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A039D8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B88Cu>(ctx, &aot_mem) && ctx.pc == 0x08A039D8u) goto L_08A039D8;
    return;
L_08A039D8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(35))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[7] = (0u | 4u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-5959)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(35))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[16] = (2232u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(5992));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A03A38u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 642u, 0x088A7D80u>(ctx, &aot_mem) && ctx.pc == 0x08A03A38u) goto L_08A03A38;
    return;
L_08A03A38:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03A58;
      }
      goto L_08A03A40;
    }
L_08A03A40:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A03A58u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08A03914;
L_08A03A58:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A03A68u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 135u, 0x088A879Cu>(ctx, &aot_mem) && ctx.pc == 0x08A03A68u) goto L_08A03A68;
    return;
L_08A03A68:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03A84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[6] = (11u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A03AACu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(181));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 562u, 0x08ACE7B4u>(ctx, &aot_mem) && ctx.pc == 0x08A03AACu) goto L_08A03AAC;
    return;
L_08A03AAC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A03ABCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B88Cu>(ctx, &aot_mem) && ctx.pc == 0x08A03ABCu) goto L_08A03ABC;
    return;
L_08A03ABC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(35))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[7] = (0u | 4u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-5959)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(35))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[16] = (2232u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(5992));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A03B1Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 642u, 0x088A7D80u>(ctx, &aot_mem) && ctx.pc == 0x08A03B1Cu) goto L_08A03B1C;
    return;
L_08A03B1C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03B3C;
      }
      goto L_08A03B24;
    }
L_08A03B24:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A03B3Cu);
    ctx.gpr[7] = (0u | 0u);
    goto L_08A03914;
L_08A03B3C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A03B4Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 135u, 0x088A879Cu>(ctx, &aot_mem) && ctx.pc == 0x08A03B4Cu) goto L_08A03B4C;
    return;
L_08A03B4C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03B68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A03B78u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B88Cu>(ctx, &aot_mem) && ctx.pc == 0x08A03B78u) goto L_08A03B78;
    return;
L_08A03B78:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03BA0;
      }
      goto L_08A03B84;
    }
L_08A03B84:
    ctx.gpr[31] = (0x08A03B8Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A03B8Cu) goto L_08A03B8C;
    return;
L_08A03B8C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A03BB4;
      }
      goto L_08A03BA0;
    }
L_08A03BA0:
    ctx.gpr[31] = (0x08A03BA8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A03BA8u) goto L_08A03BA8;
    return;
L_08A03BA8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A03BB4;
L_08A03BB4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03BC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A03BD4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08A03BD4u) goto L_08A03BD4;
    return;
L_08A03BD4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(352), ctx.gpr[7]);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03C18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[6]);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A03C50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A03C50u) goto L_08A03C50;
    return;
L_08A03C50:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.gpr[19] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[19]));
    ctx.gpr[19] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[19]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(7));
    ctx.gpr[18] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[18]));
    ctx.gpr[18] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[18]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(11));
    ctx.gpr[16] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[16]));
    ctx.gpr[16] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A03C9Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 453u, 0x088C2EF0u>(ctx, &aot_mem) && ctx.pc == 0x08A03C9Cu) goto L_08A03C9C;
    return;
L_08A03C9C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03CE4;
      }
      goto L_08A03CB8;
    }
L_08A03CB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03CE4;
      }
      goto L_08A03CC4;
    }
L_08A03CC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_08A03D0C;
      }
      goto L_08A03CE4;
    }
L_08A03CE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(104));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A03D0Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A03D0Cu) goto L_08A03D0C;
    return;
L_08A03D0C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03D2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A03D44u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A03D44u) goto L_08A03D44;
    return;
L_08A03D44:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[1] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(3), ctx.gpr[1]));
    ctx.gpr[1] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(6), ctx.gpr[1]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[1]);
    ctx.gpr[6] = (16457u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    ctx.gpr[6] = (17204u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A03D94;
      }
      goto L_08A03D74;
    }
L_08A03D74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03D94;
      }
      goto L_08A03D80;
    }
L_08A03D80:
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[31] = (0x08A03D8Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A287ACu>(ctx, &aot_mem) && ctx.pc == 0x08A03D8Cu) goto L_08A03D8C;
    return;
L_08A03D8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03DBC;
      }
      goto L_08A03D94;
    }
L_08A03D94:
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[1] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(3), ctx.gpr[1]));
    ctx.gpr[1] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(6), ctx.gpr[1]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[1]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[31] = (0x08A03DBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A287ACu>(ctx, &aot_mem) && ctx.pc == 0x08A03DBCu) goto L_08A03DBC;
    return;
L_08A03DBC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03DCC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A03DECu);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A01F88;
L_08A03DEC:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A03E08u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 702u, 0x089BF670u>(ctx, &aot_mem) && ctx.pc == 0x08A03E08u) goto L_08A03E08;
    return;
L_08A03E08:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08A03E14u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 216u, 0x08B00DFCu>(ctx, &aot_mem) && ctx.pc == 0x08A03E14u) goto L_08A03E14;
    return;
L_08A03E14:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(34))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(36))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(82), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(38))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(40))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(42))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(88), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(90), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(92), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (0u | 15u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-5958)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(82))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(83))))));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(67));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(84))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(85))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(87))))));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(88))))));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(89))))));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(90))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(91))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(92))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(93))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(5992));
      if (branch_taken) {
          goto L_08A03EE8;
      }
      goto L_08A03ED8;
    }
L_08A03ED8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A03F00;
      }
      goto L_08A03EE8;
    }
L_08A03EE8:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A03F00u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08A03C18;
L_08A03F00:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A03F10u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 135u, 0x088A879Cu>(ctx, &aot_mem) && ctx.pc == 0x08A03F10u) goto L_08A03F10;
    return;
L_08A03F10:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03F2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A03F4Cu);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A01F88;
L_08A03F4C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A03F5Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08A03F5Cu) goto L_08A03F5C;
    return;
L_08A03F5C:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-5957)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[1] = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(35), ctx.gpr[1]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(38), ctx.gpr[1]);
    ctx.gpr[16] = (2232u << 16u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(5992));
      if (branch_taken) {
          goto L_08A03FA0;
      }
      goto L_08A03F90;
    }
L_08A03F90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A03FB8;
      }
      goto L_08A03FA0;
    }
L_08A03FA0:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(40))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A03FB8u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08A03D2C;
L_08A03FB8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A03FC8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 135u, 0x088A879Cu>(ctx, &aot_mem) && ctx.pc == 0x08A03FC8u) goto L_08A03FC8;
    return;
L_08A03FC8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03FE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A04004u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A01F88;
}

void recomp_unit_0127(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0127_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_127(Runtime &runtime) {
    runtime.register_generated_unit(127u, 0x08A00000u, 16384u, &recomp_unit_0127, &recomp_unit_0127_entry);
    runtime.register_function(0x08A00000u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0000Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00014u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00024u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00038u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00048u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00050u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00068u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00088u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A000A0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A000BCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A000D4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A000FCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0011Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00130u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00134u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0013Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00150u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00164u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00180u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A001A0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A001C0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A001D8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A001F4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0020Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00234u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00240u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0024Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00268u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0026Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00280u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00294u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00298u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A002A0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A002BCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A002DCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00314u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0032Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00340u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00354u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00364u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00374u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0037Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00384u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0038Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00394u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0039Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A003A8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A003B0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A003BCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A003C4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A003D8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A003E8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A003F0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00408u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0041Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00420u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0042Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00448u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00478u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0049Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A004A8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A004B0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A004B4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A004BCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A004C8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A004D4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A004E0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A004ECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A004FCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00508u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00514u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00520u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0052Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00534u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0053Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00550u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0056Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0058Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00594u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0059Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A005A8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A005B4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A005BCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A005D0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A005E4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00608u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00614u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00634u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0064Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00664u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0066Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0067Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A006A4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A006B4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A006B8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A006D8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A006DCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A006E8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00710u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00720u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00724u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00740u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00748u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00754u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00778u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0078Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A007A0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A007B4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A007C8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A007DCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A007F0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00804u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0080Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00830u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00844u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00858u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0086Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00878u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00888u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A008ACu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A008B8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A008C4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A008D4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A008E4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A008E8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A008FCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00908u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00910u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00920u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0092Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00934u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0093Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0094Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00974u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0097Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00990u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0099Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A009B4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A009BCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A009C4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A009D0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A009E0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00A00u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00A08u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00A18u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00A34u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00A3Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00A44u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00A4Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00A68u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00A70u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00A78u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00A80u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00A88u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00A90u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00A98u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00AA8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00AB0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00AB8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00AC0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00AC8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00AD0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00AD8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00AE4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00AF8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00B00u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00B10u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00B1Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00B24u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00B6Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00B78u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00B80u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00B90u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00B9Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00BB4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00BD8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00C20u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00C34u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00C3Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00C4Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00C58u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00C68u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00C70u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00C9Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00CC0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00CD8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00CFCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00D1Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00D28u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00D30u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00D34u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00D40u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00D4Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00D90u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00DA0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00DB4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00DBCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00DC8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00DD4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00DE8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00DECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00E14u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00E6Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00E8Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00ED8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00EECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00EFCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00F14u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00F20u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00F28u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00F30u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00F38u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00F3Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00F44u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00F54u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00F5Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00F68u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00F6Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00F74u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00F80u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00F88u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00F90u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00F94u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00F9Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00FC0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00FC4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00FD4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01008u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01038u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01050u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01064u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01068u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01080u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01094u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A010A0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A010C8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A010D0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A010DCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A010E8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A010F0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01108u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01110u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0111Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01138u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01148u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01158u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01160u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01180u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01188u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0118Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01194u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A011B4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A011C0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A011D0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A011D8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A011E0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A011E8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A011F0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A011F4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A011FCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0120Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01218u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0122Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01230u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01238u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0124Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01258u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01264u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01280u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0128Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01294u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0129Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A012D0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A012E4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A012F8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01300u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01310u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01320u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01328u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01334u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0133Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01354u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01388u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A013A0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A013A8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A013B8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A013C0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A013D0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A013E0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A013F0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01400u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01404u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01424u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0144Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01458u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01468u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01480u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0149Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A014A4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A014ACu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A014B8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A014C8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A014D0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A014D4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A014ECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01500u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01508u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01518u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01520u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01524u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0152Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01580u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01588u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A015B0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A015B4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A015BCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A015DCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A015E4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A015FCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0161Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01634u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01638u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01644u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01650u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0167Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01684u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01688u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0169Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A016B4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A016F8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01704u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0170Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0171Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0172Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01760u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01768u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01778u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0178Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A017A8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A017C8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A017E4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A017FCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01808u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0180Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01868u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01870u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0188Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01898u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A018ACu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A018ECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A018F8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01900u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01910u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01954u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0195Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0196Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01998u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A019B4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A019BCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A019C4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A019CCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A019D4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A019DCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01A04u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01A14u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01A1Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01A38u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01A44u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01A4Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01A68u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01A74u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01A7Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01A84u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01AACu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01ABCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01AC4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01AE0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01AFCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01B04u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01B08u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01B24u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01B38u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01B58u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01B68u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01B80u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01B88u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01B9Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01BA4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01BB0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01BB8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01BBCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01BC4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01BD4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01BDCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01BF8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01C00u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01C14u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01C20u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01C24u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01C2Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01C38u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01C40u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01C48u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01C60u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01C6Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01C70u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01C84u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01C94u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01CA4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01CB0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01CB8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01CC0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01CC4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01CCCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01CD4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01CECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01CFCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01D08u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01D10u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01D18u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01D20u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01D38u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01D44u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01D48u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01D50u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01D5Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01D74u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01D7Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01D98u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01DA0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01DB0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01DD8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01DE0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01E04u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01E0Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01E14u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01E20u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01E28u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01E38u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01E48u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01E78u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01EA4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01EC4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01ECCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01EDCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01EECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01EF0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01EF8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01F00u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01F18u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01F1Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01F20u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01F50u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01F58u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01F5Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01F64u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01F78u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01F88u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01F9Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01FACu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01FB8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01FD4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01FDCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01FF0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01FF8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0200Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02028u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02038u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02048u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02054u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0205Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02068u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02074u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02084u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02090u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0209Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A020ACu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A020B8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A020C0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A020D4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A020F4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02100u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02110u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02120u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02130u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02148u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02174u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02188u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A021B0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A021BCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A021C4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A021E0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0220Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02218u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02240u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0224Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02254u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02270u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0229Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A022A8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A022DCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A022E8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A022F0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0230Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02338u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02344u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0236Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02378u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02380u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0239Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A023E8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02408u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0243Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02448u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02454u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0245Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0246Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02478u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02484u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02494u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A024A4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A024D8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A024E4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A024ECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A024F4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02500u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02504u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02534u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02578u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02584u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A025A0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A025C0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A025C4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A025E4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A025FCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02604u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02618u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0264Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02658u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02668u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02670u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02680u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0268Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02694u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0269Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A026A4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A026B0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A026C0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A026D0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02700u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0271Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02724u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02740u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02750u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02758u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02760u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02764u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02794u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A027A4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A027B0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A027C4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A027D0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A027D8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A027E0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A027F0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02800u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02810u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02818u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02828u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0282Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0283Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02850u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0285Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02864u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0286Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0287Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0288Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0289Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A028A4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A028B4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A028B8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A028C8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A028DCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A028E8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A028FCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02908u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02918u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02924u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02944u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0294Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02954u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02964u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0296Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02974u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0297Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0299Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A029B0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A029D0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A029D4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A029E8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02A08u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02A10u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02A18u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02A28u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02A30u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02A38u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02A40u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02A58u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02A68u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02A88u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02A8Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02AA0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02AD8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02AE0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02AECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02AF0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02B00u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02B0Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02B14u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02B20u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02B28u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02B2Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02B48u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02B78u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02B80u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02B90u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02BA0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02BA8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02BB8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02BC4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02BCCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02BD4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02BDCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02BECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02BF8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02C04u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02C20u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02C24u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02C40u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02C6Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02C74u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02C80u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02C90u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02C9Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02CA4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02CACu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02CB8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02CC0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02CD0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02CDCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02CECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02CF8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02CFCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02D18u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02D50u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02D58u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02D64u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02D68u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02D78u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02D84u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02D8Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02D98u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02DA0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02DA4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02DC0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02DFCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02E04u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02E10u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02E14u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02E24u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02E30u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02E3Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02E4Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02E5Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02E68u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02E70u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02E7Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02E80u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02E88u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02E94u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02EA4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02EB8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02EC0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02EC8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02ED4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02ED8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02EE4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02EECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02EF0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02F10u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02F30u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02F38u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02F44u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02F4Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02F58u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02F68u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02F70u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02F78u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02F90u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02F94u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02FA8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02FD4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02FE0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03010u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0301Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03028u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03030u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0303Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03050u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0305Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0307Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A030A8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A030B4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A030E4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A030F0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A030FCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03108u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03110u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0311Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03130u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0313Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0315Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0318Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03194u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0319Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A031A8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A031B8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A031CCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A031FCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03208u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03214u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0321Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03224u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0322Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03238u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0324Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03258u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0325Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03280u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A032A8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A032B4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A032C8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A032D0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A032D8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A032E4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A032F0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A032F8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03304u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03308u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03314u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0331Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03328u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03334u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0333Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03348u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03358u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0335Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03378u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A033ACu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A033B4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A033C0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A033C4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A033D4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A033F0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03428u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03430u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0343Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03440u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0344Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03458u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03478u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A034B0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A034B8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A034C4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A034C8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A034D4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A034E4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03504u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03524u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03560u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03570u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03580u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0358Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03598u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A035A8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A035C0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A035E0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A035F0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A035FCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03614u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03640u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03650u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03664u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03670u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0367Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03680u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03694u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A036A0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A036C4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A036DCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A036ECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A036F8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03704u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0370Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03718u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03730u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03764u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03774u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0377Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0378Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03794u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0379Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A037A8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A037B4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A037C4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A037CCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A037D4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A037ECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A037F8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0380Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03814u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03820u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0382Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03838u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03840u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0385Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0386Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03874u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03888u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A038ACu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A038D0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A038DCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A038E4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A038F4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03904u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03914u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03930u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03938u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03940u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03948u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03950u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0395Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03964u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0396Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03980u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03988u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03994u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A039A0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A039C8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A039D8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03A38u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03A40u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03A58u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03A68u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03A84u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03AACu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03ABCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03B1Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03B24u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03B3Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03B4Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03B68u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03B78u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03B84u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03B8Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03BA0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03BA8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03BB4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03BC4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03BD4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03C18u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03C50u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03C9Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03CB8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03CC4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03CE4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03D0Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03D2Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03D44u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03D74u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03D80u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03D8Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03D94u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03DBCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03DCCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03DECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03E08u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03E14u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03ED8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03EE8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03F00u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03F10u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03F2Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03F4Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03F5Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03F90u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03FA0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03FB8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03FC8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03FE4u, &recomp_unit_0127, "recomp_unit_0127");
}
} // namespace psprecomp
