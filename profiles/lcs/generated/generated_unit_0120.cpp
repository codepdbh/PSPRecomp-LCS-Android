#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0120[4094] = {
    1, 0, 2, 0, 3, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 8, 0, 0, 9, 0, 0, 10, 0, 11,
    0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14,
    0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 18, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0,
    0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 27, 0, 28, 0, 29, 0, 0, 0, 0,
    0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 36, 0,
    0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 40, 0, 41, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0,
    45, 0, 0, 0, 46, 0, 0, 47, 0, 48, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 52, 0,
    0, 0, 53, 0, 0, 54, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 58, 59, 0, 0, 0, 0,
    0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 65, 0, 0, 0, 66, 0,
    0, 67, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73,
    0, 0, 0, 74, 0, 0, 75, 0, 76, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 80, 0, 0, 0, 81, 0, 0, 82, 0, 83, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90,
    91, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 94, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 98, 0, 99, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 103, 0, 0, 0, 0, 104, 0, 0, 105, 0, 106, 0,
    107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 111, 0, 112, 0, 113, 0, 0, 0, 0, 0, 114,
    0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 117, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0,
    0, 0, 0, 0, 0, 0, 122, 0, 0, 123, 124, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 129, 0, 130,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 131, 0, 0, 132, 0, 0, 133, 0, 0, 0, 134, 0, 135, 0, 136, 0, 137, 0, 138, 0, 139, 0, 140, 0, 141, 0, 0, 0, 142, 0, 0,
    0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 149, 0, 150, 0,
    0, 0, 151, 0, 0, 0, 152, 0, 153, 0, 0, 0, 154, 0, 155, 0, 156, 0, 157, 0, 158, 0, 0, 0, 159, 0, 160, 161, 0, 162, 0, 0,
    0, 163, 0, 164, 165, 0, 166, 167, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 171,
    0, 0, 172, 0, 0, 173, 0, 0, 174, 175, 0, 176, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178,
    0, 0, 179, 0, 0, 0, 180, 0, 0, 181, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 188, 0, 189, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0,
    192, 0, 0, 193, 194, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 200, 0, 0, 0, 0, 0, 0,
    201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 207, 0,
    0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 213, 0, 214, 0, 215,
    0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 220, 221, 0, 0, 0, 0, 0, 0, 0, 0, 222,
    0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 226, 227, 0, 0, 0, 228, 0, 0, 229, 0, 230, 0,
    231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 236, 0, 237,
    0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 243, 0, 244, 245, 0, 0, 0, 0,
    0, 0, 0, 0, 246, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 251, 0, 0, 0, 252, 0,
    0, 253, 0, 254, 0, 255, 0, 0, 0, 256, 0, 0, 257, 0, 0, 258, 0, 259, 260, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 266, 0, 267,
    0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 276, 0, 277, 0, 278, 0, 0,
    0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 282, 0, 0, 0, 283, 0, 0,
    284, 0, 285, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 291, 0, 292, 0,
    0, 0, 293, 0, 0, 294, 0, 295, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 299, 0, 300, 0, 0, 0, 301, 0, 0, 0,
    302, 0, 0, 303, 0, 304, 0, 305, 0, 0, 0, 306, 0, 0, 307, 0, 0, 308, 0, 309, 310, 0, 0, 311, 0, 0, 0, 0, 0, 312, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 316, 0, 317, 0,
    318, 0, 0, 0, 319, 0, 0, 320, 0, 0, 321, 0, 322, 323, 0, 0, 324, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 329, 0, 330, 0, 331, 0, 0, 0, 0, 0, 0,
    332, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 335, 0, 0, 0, 0, 0, 0, 336, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 339,
    0, 0, 340, 0, 341, 0, 342, 0, 0, 343, 0, 0, 0, 344, 0, 0, 345, 0, 346, 0, 347, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 350, 0, 351, 0, 0, 352, 0, 353, 0, 354, 0, 355, 0, 0, 0, 0, 0, 356,
    0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0, 0, 361, 362, 0, 0, 363, 0, 0, 0, 0, 364,
    0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 366, 0, 367, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 369, 370, 0, 0, 371, 0, 0, 372, 0,
    0, 0, 373, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 375, 0, 0, 376, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0,
    0, 0, 0, 379, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0, 383, 0, 384, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0,
    0, 386, 0, 0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 390, 0, 391, 0, 392, 0, 0, 0, 0, 0, 393, 0, 0, 0, 394,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 397, 0, 398, 0, 399, 0, 0, 0, 0, 0, 0, 400, 0, 0,
    0, 0, 0, 0, 0, 0, 401, 0, 0, 402, 0, 0, 0, 403, 0, 0, 404, 0, 0, 0, 405, 0, 0, 406, 0, 0, 0, 0, 0, 0, 407, 0,
    408, 409, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 411, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 414,
    415, 0, 0, 0, 416, 0, 0, 417, 0, 418, 0, 419, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 423, 0, 424, 0, 425, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 427, 0, 0, 428, 0,
    0, 0, 429, 0, 0, 0, 430, 0, 0, 0, 431, 0, 0, 432, 0, 433, 0, 434, 0, 0, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 437, 438,
    0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 440, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 443, 444, 0,
    0, 0, 445, 0, 0, 446, 0, 447, 0, 448, 0, 0, 0, 449, 0, 0, 450, 0, 451, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 456, 0, 0, 457,
    0, 0, 458, 0, 459, 460, 0, 0, 461, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 463, 0, 0, 464, 0, 0, 465, 0, 466, 467, 0, 468,
    0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 471, 0, 472, 0, 0, 0, 0, 0, 0,
    473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 475, 0, 0, 0, 476, 0, 0, 477, 0, 0, 0, 478, 0, 0, 479,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 481, 482, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 484, 0,
    0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 487, 488, 0, 489, 0, 490, 0, 491, 0, 492, 0, 493, 0, 0, 0,
    0, 0, 0, 494, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    496, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 498, 0, 0, 499, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 502, 0,
    0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 505, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0,
    508, 0, 509, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 512, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514,
    0, 515, 0, 0, 0, 0, 0, 516, 0, 0, 517, 0, 0, 0, 0, 518, 0, 0, 519, 0, 520, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 522,
    0, 0, 523, 0, 0, 524, 525, 0, 526, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 529, 0, 0,
    0, 0, 0, 530, 0, 0, 0, 531, 0, 0, 0, 532, 0, 0, 0, 0, 533, 0, 0, 0, 534, 0, 0, 0, 0, 535, 0, 0, 0, 536, 0, 0,
    0, 0, 537, 0, 0, 0, 538, 0, 0, 0, 539, 0, 540, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 543, 544,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 546, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 549, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 551, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 553, 0, 0, 554,
    0, 0, 0, 555, 0, 0, 0, 556, 0, 557, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 561, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563,
    0, 0, 0, 564, 0, 565, 0, 566, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 568, 0, 0, 0, 0, 569, 0, 570, 571, 0, 0, 0, 0, 0,
    0, 0, 0, 572, 0, 573, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 576, 577, 0, 578, 0, 0, 0, 0,
    0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 581, 582, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 583, 0, 584, 0, 0, 0, 0, 0, 0, 585, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 0, 0, 587, 0,
    0, 0, 0, 0, 588, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 0, 0, 590, 0, 591, 592, 0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 594,
    0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 596, 0, 0, 0, 0, 0, 0, 597, 598, 0, 599, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0,
    601, 0, 0, 0, 0, 602, 0, 0, 0, 603, 0, 0, 0, 604, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 606, 0, 607, 0, 0, 0, 0,
    0, 608, 0, 609, 0, 0, 0, 0, 0, 610, 0, 611, 0, 612, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0, 0, 0, 614, 0, 615, 0, 0, 0,
    0, 0, 0, 616, 0, 0, 0, 617, 0, 0, 618, 0, 0, 0, 619, 0, 0, 0, 620, 0, 621, 0, 0, 0, 0, 0, 622, 0, 0, 0, 623, 0,
    624, 0, 0, 0, 0, 0, 625, 0, 0, 626, 0, 627, 0, 628, 0, 629, 0, 630, 0, 0, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0,
    0, 632, 0, 0, 0, 0, 0, 0, 0, 0, 633, 0, 634, 0, 635, 0, 0, 636, 0, 0, 0, 637, 0, 0, 0, 0, 0, 0, 0, 0, 638, 0,
    639, 0, 640, 0, 0, 641, 0, 642, 0, 0, 0, 0, 0, 643, 0, 0, 644, 0, 0, 645, 0, 0, 646, 0, 647, 0, 0, 0, 0, 0, 648, 0,
    0, 0, 0, 649, 0, 650, 651, 0, 0, 0, 0, 0, 0, 0, 0, 652, 0, 653, 0, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 655, 0, 0,
    0, 0, 0, 0, 656, 657, 0, 658, 0, 0, 0, 0, 0, 659, 0, 0, 0, 0, 660, 0, 661, 662, 0, 0, 0, 0, 0, 0, 0, 0, 663, 0,
    664, 0, 0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 666, 0, 0, 0, 0, 0, 0, 667, 668, 0, 669, 0, 0, 0, 0, 0, 0, 670, 0, 0,
    0, 0, 0, 0, 671, 0, 672, 0, 0, 0, 0, 0, 673, 0, 0, 674, 0, 0, 675, 0, 0, 676, 0, 677, 0, 0, 0, 0, 0, 678, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 679, 0, 680, 0, 0, 0, 0, 0, 0, 681, 0, 0, 0, 0, 0, 0, 0, 0, 682, 0, 0, 683, 0, 0,
    0, 684, 0, 0, 685, 0, 0, 0, 686, 0, 0, 687, 0, 0, 0, 0, 0, 688, 0, 689, 0, 0, 0, 0, 0, 690, 0, 0, 0, 691, 0, 692,
    0, 0, 0, 0, 0, 0, 693, 0, 0, 0, 0, 0, 0, 0, 694, 0, 0, 695, 696, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 697,
    0, 698, 0, 0, 699, 0, 0, 0, 0, 0, 0, 0, 700, 0, 0, 0, 0, 0, 701, 0, 702, 0, 0, 0, 0, 0, 703, 0, 704, 0, 705, 0,
    0, 0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 707, 0, 0, 0, 0, 708, 0, 709, 0, 0, 0, 0, 710, 0, 711,
    0, 0, 0, 0, 0, 712, 0, 0, 0, 713, 0, 0, 0, 714, 0, 715, 716, 0, 0, 0, 0, 717, 0, 0, 0, 0, 0, 718, 0, 719, 0, 0,
    0, 0, 0, 720, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 721, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 722,
    0, 0, 0, 0, 723, 0, 724, 0, 0, 0, 0, 725, 0, 0, 0, 0, 0, 0, 0, 0, 726, 0, 0, 727, 0, 728, 729, 0, 0, 0, 730, 0,
    0, 731, 0, 0, 732, 0, 733, 734, 0, 0, 735, 0, 0, 0, 0, 0, 736, 0, 0, 0, 0, 0, 0, 737, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 738, 0, 739, 0, 0, 0, 0, 740, 0, 0, 0, 0, 0, 0, 0, 0, 741, 0, 0, 0, 742, 0, 0, 743, 0, 0, 744, 0, 745, 746, 0,
    0, 747, 0, 0, 0, 0, 0, 748, 0, 0, 0, 0, 0, 0, 749, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 750, 0, 751,
    0, 0, 0, 0, 0, 752, 0, 0, 0, 0, 753, 0, 0, 754, 0, 0, 0, 0, 0, 755, 0, 0, 0, 0, 0, 756, 0, 0, 757, 0, 758, 0,
    0, 0, 0, 0, 0, 0, 759, 0, 0, 760, 0, 761, 0, 762, 0, 763, 0, 0, 764, 0, 765, 0, 766, 0, 767, 0, 768, 0, 0, 0, 769, 0,
    0, 770, 0, 0, 771, 0, 772, 0, 773, 0, 774, 0, 775, 0, 776, 0, 0, 777, 0, 0, 778, 0, 779, 0, 780, 0, 781, 0, 782, 0, 783, 0,
    0, 0, 0, 0, 784, 0, 0, 0, 785, 0, 786, 787, 0, 0, 0, 788, 789, 0, 0, 790, 0, 0, 791, 0, 792, 0, 793, 0, 0, 794, 0, 0,
    795, 0, 0, 796, 797, 0, 0, 0, 798, 0, 0, 799, 0, 0, 800, 0, 0, 801, 802, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 803, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 804, 0, 0, 805, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 806, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 807, 0, 0, 808, 0, 809, 0,
    0, 0, 0, 0, 810, 0, 0, 0, 0, 811, 812, 0, 0, 0, 0, 0, 0, 0, 0, 813, 0, 814, 0, 0, 0, 0, 0, 0, 815, 0, 0, 0,
    0, 816, 0, 0, 0, 0, 0, 0, 817, 818, 0, 819, 0, 0, 0, 0, 0, 820, 0, 821, 0, 0, 822, 0, 0, 823, 0, 824, 0, 0, 0, 0,
    0, 825, 0, 0, 0, 826, 0, 0, 0, 827, 828, 0, 0, 0, 0, 0, 0, 0, 0, 829, 0, 830, 0, 0, 0, 0, 0, 0, 831, 0, 0, 0,
    0, 832, 0, 0, 0, 0, 0, 0, 833, 834, 0, 835, 0, 0, 0, 0, 0, 836, 0, 0, 0, 837, 0, 838, 839, 0, 0, 0, 0, 0, 0, 0,
    0, 840, 0, 841, 0, 0, 0, 0, 0, 0, 842, 0, 0, 0, 0, 843, 0, 0, 0, 0, 0, 0, 844, 845, 0, 846, 0, 0, 0, 0, 0, 0,
    847, 0, 0, 0, 848, 0, 0, 0, 0, 849, 0, 850, 0, 851, 0, 0, 0, 0, 0, 0, 852, 0, 0, 0, 853, 0, 0, 0, 0, 0, 854, 0,
    855, 0, 0, 0, 0, 0, 856, 0, 0, 0, 857, 0, 858, 0, 0, 0, 0, 0, 859, 0, 0, 0, 860, 0, 0, 0, 0, 861, 0, 862, 863, 0,
    0, 0, 0, 0, 0, 0, 0, 864, 0, 865, 0, 0, 0, 0, 0, 0, 866, 0, 0, 0, 0, 867, 0, 0, 0, 0, 0, 0, 868, 869, 0, 870,
    0, 0, 0, 0, 0, 871, 0, 0, 0, 0, 0, 0, 0, 872, 0, 0, 0, 0, 0, 0, 0, 0, 0, 873, 0, 874, 0, 0, 0, 0, 0, 0,
    875, 0, 0, 0, 0, 0, 876, 0, 877, 0, 878, 879, 0, 0, 0, 0, 0, 0, 0, 0, 880, 0, 881, 0, 0, 0, 0, 0, 0, 882, 0, 0,
    0, 0, 883, 0, 0, 0, 0, 0, 0, 884, 885, 0, 886, 0, 0, 0, 0, 0, 887, 0, 0, 0, 0, 0, 888, 0, 889, 0, 0, 0, 0, 0,
    890, 0, 0, 0, 0, 0, 891, 0, 892, 0, 893, 894, 0, 0, 0, 0, 0, 0, 0, 0, 895, 0, 896, 0, 0, 0, 0, 0, 0, 897,
};
void recomp_unit_0120_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089E4000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0120[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089E4000;
    case 2u: goto L_089E4008;
    case 3u: goto L_089E4010;
    case 4u: goto L_089E4018;
    case 5u: goto L_089E4030;
    case 6u: goto L_089E4040;
    case 7u: goto L_089E404C;
    case 8u: goto L_089E405C;
    case 9u: goto L_089E4068;
    case 10u: goto L_089E4074;
    case 11u: goto L_089E407C;
    case 12u: goto L_089E4084;
    case 13u: goto L_089E40D4;
    case 14u: goto L_089E40FC;
    case 15u: goto L_089E4108;
    case 16u: goto L_089E4120;
    case 17u: goto L_089E4130;
    case 18u: goto L_089E413C;
    case 19u: goto L_089E4144;
    case 20u: goto L_089E414C;
    case 21u: goto L_089E4168;
    case 22u: goto L_089E4178;
    case 23u: goto L_089E4184;
    case 24u: goto L_089E41A4;
    case 25u: goto L_089E41C0;
    case 26u: goto L_089E41D0;
    case 27u: goto L_089E41DC;
    case 28u: goto L_089E41E4;
    case 29u: goto L_089E41EC;
    case 30u: goto L_089E4204;
    case 31u: goto L_089E4214;
    case 32u: goto L_089E4234;
    case 33u: goto L_089E4244;
    case 34u: goto L_089E4258;
    case 35u: goto L_089E4268;
    case 36u: goto L_089E4278;
    case 37u: goto L_089E428C;
    case 38u: goto L_089E42A4;
    case 39u: goto L_089E42B4;
    case 40u: goto L_089E42C0;
    case 41u: goto L_089E42C8;
    case 42u: goto L_089E42D0;
    case 43u: goto L_089E42E8;
    case 44u: goto L_089E42F8;
    case 45u: goto L_089E4300;
    case 46u: goto L_089E4310;
    case 47u: goto L_089E431C;
    case 48u: goto L_089E4324;
    case 49u: goto L_089E432C;
    case 50u: goto L_089E4348;
    case 51u: goto L_089E436C;
    case 52u: goto L_089E4378;
    case 53u: goto L_089E4388;
    case 54u: goto L_089E4394;
    case 55u: goto L_089E43A4;
    case 56u: goto L_089E43B0;
    case 57u: goto L_089E43E0;
    case 58u: goto L_089E43E8;
    case 59u: goto L_089E43EC;
    case 60u: goto L_089E4410;
    case 61u: goto L_089E4418;
    case 62u: goto L_089E4434;
    case 63u: goto L_089E4448;
    case 64u: goto L_089E4464;
    case 65u: goto L_089E4468;
    case 66u: goto L_089E4478;
    case 67u: goto L_089E4484;
    case 68u: goto L_089E448C;
    case 69u: goto L_089E4494;
    case 70u: goto L_089E44B0;
    case 71u: goto L_089E44C0;
    case 72u: goto L_089E44D4;
    case 73u: goto L_089E44FC;
    case 74u: goto L_089E450C;
    case 75u: goto L_089E4518;
    case 76u: goto L_089E4520;
    case 77u: goto L_089E4528;
    case 78u: goto L_089E4540;
    case 79u: goto L_089E4550;
    case 80u: goto L_089E4584;
    case 81u: goto L_089E4594;
    case 82u: goto L_089E45A0;
    case 83u: goto L_089E45A8;
    case 84u: goto L_089E45B0;
    case 85u: goto L_089E45CC;
    case 86u: goto L_089E4634;
    case 87u: goto L_089E463C;
    case 88u: goto L_089E4644;
    case 89u: goto L_089E4674;
    case 90u: goto L_089E467C;
    case 91u: goto L_089E4680;
    case 92u: goto L_089E4698;
    case 93u: goto L_089E46A4;
    case 94u: goto L_089E46AC;
    case 95u: goto L_089E46B4;
    case 96u: goto L_089E46D0;
    case 97u: goto L_089E46E0;
    case 98u: goto L_089E4714;
    case 99u: goto L_089E471C;
    case 100u: goto L_089E4724;
    case 101u: goto L_089E4740;
    case 102u: goto L_089E4748;
    case 103u: goto L_089E4750;
    case 104u: goto L_089E4764;
    case 105u: goto L_089E4770;
    case 106u: goto L_089E4778;
    case 107u: goto L_089E4780;
    case 108u: goto L_089E4798;
    case 109u: goto L_089E47B8;
    case 110u: goto L_089E47C8;
    case 111u: goto L_089E47D4;
    case 112u: goto L_089E47DC;
    case 113u: goto L_089E47E4;
    case 114u: goto L_089E47FC;
    case 115u: goto L_089E481C;
    case 116u: goto L_089E482C;
    case 117u: goto L_089E4838;
    case 118u: goto L_089E4840;
    case 119u: goto L_089E4848;
    case 120u: goto L_089E4864;
    case 121u: goto L_089E4874;
    case 122u: goto L_089E4898;
    case 123u: goto L_089E48A4;
    case 124u: goto L_089E48A8;
    case 125u: goto L_089E48B4;
    case 126u: goto L_089E48C0;
    case 127u: goto L_089E48D4;
    case 128u: goto L_089E48E4;
    case 129u: goto L_089E48F4;
    case 130u: goto L_089E48FC;
    case 131u: goto L_089E4984;
    case 132u: goto L_089E4990;
    case 133u: goto L_089E499C;
    case 134u: goto L_089E49AC;
    case 135u: goto L_089E49B4;
    case 136u: goto L_089E49BC;
    case 137u: goto L_089E49C4;
    case 138u: goto L_089E49CC;
    case 139u: goto L_089E49D4;
    case 140u: goto L_089E49DC;
    case 141u: goto L_089E49E4;
    case 142u: goto L_089E49F4;
    case 143u: goto L_089E4A04;
    case 144u: goto L_089E4A24;
    case 145u: goto L_089E4A2C;
    case 146u: goto L_089E4A40;
    case 147u: goto L_089E4A50;
    case 148u: goto L_089E4A60;
    case 149u: goto L_089E4A70;
    case 150u: goto L_089E4A78;
    case 151u: goto L_089E4A88;
    case 152u: goto L_089E4A98;
    case 153u: goto L_089E4AA0;
    case 154u: goto L_089E4AB0;
    case 155u: goto L_089E4AB8;
    case 156u: goto L_089E4AC0;
    case 157u: goto L_089E4AC8;
    case 158u: goto L_089E4AD0;
    case 159u: goto L_089E4AE0;
    case 160u: goto L_089E4AE8;
    case 161u: goto L_089E4AEC;
    case 162u: goto L_089E4AF4;
    case 163u: goto L_089E4B04;
    case 164u: goto L_089E4B0C;
    case 165u: goto L_089E4B10;
    case 166u: goto L_089E4B18;
    case 167u: goto L_089E4B1C;
    case 168u: goto L_089E4B20;
    case 169u: goto L_089E4B58;
    case 170u: goto L_089E4B64;
    case 171u: goto L_089E4B7C;
    case 172u: goto L_089E4B88;
    case 173u: goto L_089E4B94;
    case 174u: goto L_089E4BA0;
    case 175u: goto L_089E4BA4;
    case 176u: goto L_089E4BAC;
    case 177u: goto L_089E4BB0;
    case 178u: goto L_089E4BFC;
    case 179u: goto L_089E4C08;
    case 180u: goto L_089E4C18;
    case 181u: goto L_089E4C24;
    case 182u: goto L_089E4C30;
    case 183u: goto L_089E4C48;
    case 184u: goto L_089E4C50;
    case 185u: goto L_089E4C80;
    case 186u: goto L_089E4C98;
    case 187u: goto L_089E4CA8;
    case 188u: goto L_089E4CB4;
    case 189u: goto L_089E4CBC;
    case 190u: goto L_089E4CC4;
    case 191u: goto L_089E4CE0;
    case 192u: goto L_089E4D00;
    case 193u: goto L_089E4D0C;
    case 194u: goto L_089E4D10;
    case 195u: goto L_089E4D34;
    case 196u: goto L_089E4D54;
    case 197u: goto L_089E4D98;
    case 198u: goto L_089E4DA4;
    case 199u: goto L_089E4DD8;
    case 200u: goto L_089E4DE4;
    case 201u: goto L_089E4E00;
    case 202u: goto L_089E4E44;
    case 203u: goto L_089E4E58;
    case 204u: goto L_089E4EC8;
    case 205u: goto L_089E4ED8;
    case 206u: goto L_089E4EF0;
    case 207u: goto L_089E4EF8;
    case 208u: goto L_089E4F0C;
    case 209u: goto L_089E4F28;
    case 210u: goto L_089E4F30;
    case 211u: goto L_089E4F50;
    case 212u: goto L_089E4F60;
    case 213u: goto L_089E4F6C;
    case 214u: goto L_089E4F74;
    case 215u: goto L_089E4F7C;
    case 216u: goto L_089E4F98;
    case 217u: goto L_089E4FA8;
    case 218u: goto L_089E4FB8;
    case 219u: goto L_089E4FCC;
    case 220u: goto L_089E4FD4;
    case 221u: goto L_089E4FD8;
    case 222u: goto L_089E4FFC;
    case 223u: goto L_089E5004;
    case 224u: goto L_089E5020;
    case 225u: goto L_089E5034;
    case 226u: goto L_089E5050;
    case 227u: goto L_089E5054;
    case 228u: goto L_089E5064;
    case 229u: goto L_089E5070;
    case 230u: goto L_089E5078;
    case 231u: goto L_089E5080;
    case 232u: goto L_089E5098;
    case 233u: goto L_089E50A8;
    case 234u: goto L_089E50D8;
    case 235u: goto L_089E50E8;
    case 236u: goto L_089E50F4;
    case 237u: goto L_089E50FC;
    case 238u: goto L_089E5104;
    case 239u: goto L_089E511C;
    case 240u: goto L_089E512C;
    case 241u: goto L_089E5144;
    case 242u: goto L_089E5158;
    case 243u: goto L_089E5160;
    case 244u: goto L_089E5168;
    case 245u: goto L_089E516C;
    case 246u: goto L_089E5190;
    case 247u: goto L_089E5198;
    case 248u: goto L_089E51B4;
    case 249u: goto L_089E51C8;
    case 250u: goto L_089E51E4;
    case 251u: goto L_089E51E8;
    case 252u: goto L_089E51F8;
    case 253u: goto L_089E5204;
    case 254u: goto L_089E520C;
    case 255u: goto L_089E5214;
    case 256u: goto L_089E5224;
    case 257u: goto L_089E5230;
    case 258u: goto L_089E523C;
    case 259u: goto L_089E5244;
    case 260u: goto L_089E5248;
    case 261u: goto L_089E5254;
    case 262u: goto L_089E526C;
    case 263u: goto L_089E5298;
    case 264u: goto L_089E52D8;
    case 265u: goto L_089E52E8;
    case 266u: goto L_089E52F4;
    case 267u: goto L_089E52FC;
    case 268u: goto L_089E5304;
    case 269u: goto L_089E5320;
    case 270u: goto L_089E5344;
    case 271u: goto L_089E5350;
    case 272u: goto L_089E5360;
    case 273u: goto L_089E536C;
    case 274u: goto L_089E53C8;
    case 275u: goto L_089E53D8;
    case 276u: goto L_089E53E4;
    case 277u: goto L_089E53EC;
    case 278u: goto L_089E53F4;
    case 279u: goto L_089E5410;
    case 280u: goto L_089E5444;
    case 281u: goto L_089E5458;
    case 282u: goto L_089E5464;
    case 283u: goto L_089E5474;
    case 284u: goto L_089E5480;
    case 285u: goto L_089E5488;
    case 286u: goto L_089E5490;
    case 287u: goto L_089E54AC;
    case 288u: goto L_089E54BC;
    case 289u: goto L_089E54D0;
    case 290u: goto L_089E54E4;
    case 291u: goto L_089E54F0;
    case 292u: goto L_089E54F8;
    case 293u: goto L_089E5508;
    case 294u: goto L_089E5514;
    case 295u: goto L_089E551C;
    case 296u: goto L_089E5524;
    case 297u: goto L_089E553C;
    case 298u: goto L_089E5548;
    case 299u: goto L_089E5558;
    case 300u: goto L_089E5560;
    case 301u: goto L_089E5570;
    case 302u: goto L_089E5580;
    case 303u: goto L_089E558C;
    case 304u: goto L_089E5594;
    case 305u: goto L_089E559C;
    case 306u: goto L_089E55AC;
    case 307u: goto L_089E55B8;
    case 308u: goto L_089E55C4;
    case 309u: goto L_089E55CC;
    case 310u: goto L_089E55D0;
    case 311u: goto L_089E55DC;
    case 312u: goto L_089E55F4;
    case 313u: goto L_089E5620;
    case 314u: goto L_089E5654;
    case 315u: goto L_089E5664;
    case 316u: goto L_089E5670;
    case 317u: goto L_089E5678;
    case 318u: goto L_089E5680;
    case 319u: goto L_089E5690;
    case 320u: goto L_089E569C;
    case 321u: goto L_089E56A8;
    case 322u: goto L_089E56B0;
    case 323u: goto L_089E56B4;
    case 324u: goto L_089E56C0;
    case 325u: goto L_089E56D8;
    case 326u: goto L_089E5704;
    case 327u: goto L_089E5738;
    case 328u: goto L_089E5748;
    case 329u: goto L_089E5754;
    case 330u: goto L_089E575C;
    case 331u: goto L_089E5764;
    case 332u: goto L_089E5780;
    case 333u: goto L_089E5790;
    case 334u: goto L_089E57A0;
    case 335u: goto L_089E57AC;
    case 336u: goto L_089E57C8;
    case 337u: goto L_089E57D0;
    case 338u: goto L_089E57EC;
    case 339u: goto L_089E57FC;
    case 340u: goto L_089E5808;
    case 341u: goto L_089E5810;
    case 342u: goto L_089E5818;
    case 343u: goto L_089E5824;
    case 344u: goto L_089E5834;
    case 345u: goto L_089E5840;
    case 346u: goto L_089E5848;
    case 347u: goto L_089E5850;
    case 348u: goto L_089E5868;
    case 349u: goto L_089E589C;
    case 350u: goto L_089E58B8;
    case 351u: goto L_089E58C0;
    case 352u: goto L_089E58CC;
    case 353u: goto L_089E58D4;
    case 354u: goto L_089E58DC;
    case 355u: goto L_089E58E4;
    case 356u: goto L_089E58FC;
    case 357u: goto L_089E5910;
    case 358u: goto L_089E5928;
    case 359u: goto L_089E5930;
    case 360u: goto L_089E5944;
    case 361u: goto L_089E5958;
    case 362u: goto L_089E595C;
    case 363u: goto L_089E5968;
    case 364u: goto L_089E597C;
    case 365u: goto L_089E5990;
    case 366u: goto L_089E59A8;
    case 367u: goto L_089E59B0;
    case 368u: goto L_089E59C8;
    case 369u: goto L_089E59DC;
    case 370u: goto L_089E59E0;
    case 371u: goto L_089E59EC;
    case 372u: goto L_089E59F8;
    case 373u: goto L_089E5A08;
    case 374u: goto L_089E5A10;
    case 375u: goto L_089E5A84;
    case 376u: goto L_089E5A90;
    case 377u: goto L_089E5A94;
    case 378u: goto L_089E5AF8;
    case 379u: goto L_089E5B0C;
    case 380u: goto L_089E5B18;
    case 381u: goto L_089E5B28;
    case 382u: goto L_089E5B38;
    case 383u: goto L_089E5B44;
    case 384u: goto L_089E5B4C;
    case 385u: goto L_089E5B6C;
    case 386u: goto L_089E5B84;
    case 387u: goto L_089E5B90;
    case 388u: goto L_089E5BA8;
    case 389u: goto L_089E5BB8;
    case 390u: goto L_089E5BC4;
    case 391u: goto L_089E5BCC;
    case 392u: goto L_089E5BD4;
    case 393u: goto L_089E5BEC;
    case 394u: goto L_089E5BFC;
    case 395u: goto L_089E5C2C;
    case 396u: goto L_089E5C3C;
    case 397u: goto L_089E5C48;
    case 398u: goto L_089E5C50;
    case 399u: goto L_089E5C58;
    case 400u: goto L_089E5C74;
    case 401u: goto L_089E5C98;
    case 402u: goto L_089E5CA4;
    case 403u: goto L_089E5CB4;
    case 404u: goto L_089E5CC0;
    case 405u: goto L_089E5CD0;
    case 406u: goto L_089E5CDC;
    case 407u: goto L_089E5CF8;
    case 408u: goto L_089E5D00;
    case 409u: goto L_089E5D04;
    case 410u: goto L_089E5D28;
    case 411u: goto L_089E5D30;
    case 412u: goto L_089E5D4C;
    case 413u: goto L_089E5D60;
    case 414u: goto L_089E5D7C;
    case 415u: goto L_089E5D80;
    case 416u: goto L_089E5D90;
    case 417u: goto L_089E5D9C;
    case 418u: goto L_089E5DA4;
    case 419u: goto L_089E5DAC;
    case 420u: goto L_089E5DC8;
    case 421u: goto L_089E5DD8;
    case 422u: goto L_089E5E24;
    case 423u: goto L_089E5E30;
    case 424u: goto L_089E5E38;
    case 425u: goto L_089E5E40;
    case 426u: goto L_089E5E5C;
    case 427u: goto L_089E5E6C;
    case 428u: goto L_089E5E78;
    case 429u: goto L_089E5E88;
    case 430u: goto L_089E5E98;
    case 431u: goto L_089E5EA8;
    case 432u: goto L_089E5EB4;
    case 433u: goto L_089E5EBC;
    case 434u: goto L_089E5EC4;
    case 435u: goto L_089E5EDC;
    case 436u: goto L_089E5EEC;
    case 437u: goto L_089E5EF8;
    case 438u: goto L_089E5EFC;
    case 439u: goto L_089E5F20;
    case 440u: goto L_089E5F28;
    case 441u: goto L_089E5F44;
    case 442u: goto L_089E5F58;
    case 443u: goto L_089E5F74;
    case 444u: goto L_089E5F78;
    case 445u: goto L_089E5F88;
    case 446u: goto L_089E5F94;
    case 447u: goto L_089E5F9C;
    case 448u: goto L_089E5FA4;
    case 449u: goto L_089E5FB4;
    case 450u: goto L_089E5FC0;
    case 451u: goto L_089E5FC8;
    case 452u: goto L_089E5FCC;
    case 453u: goto L_089E6000;
    case 454u: goto L_089E6044;
    case 455u: goto L_089E6060;
    case 456u: goto L_089E6070;
    case 457u: goto L_089E607C;
    case 458u: goto L_089E6088;
    case 459u: goto L_089E6090;
    case 460u: goto L_089E6094;
    case 461u: goto L_089E60A0;
    case 462u: goto L_089E60B8;
    case 463u: goto L_089E60D0;
    case 464u: goto L_089E60DC;
    case 465u: goto L_089E60E8;
    case 466u: goto L_089E60F0;
    case 467u: goto L_089E60F4;
    case 468u: goto L_089E60FC;
    case 469u: goto L_089E6118;
    case 470u: goto L_089E6144;
    case 471u: goto L_089E615C;
    case 472u: goto L_089E6164;
    case 473u: goto L_089E6180;
    case 474u: goto L_089E61B8;
    case 475u: goto L_089E61C4;
    case 476u: goto L_089E61D4;
    case 477u: goto L_089E61E0;
    case 478u: goto L_089E61F0;
    case 479u: goto L_089E61FC;
    case 480u: goto L_089E623C;
    case 481u: goto L_089E6248;
    case 482u: goto L_089E624C;
    case 483u: goto L_089E6270;
    case 484u: goto L_089E6278;
    case 485u: goto L_089E6294;
    case 486u: goto L_089E62A8;
    case 487u: goto L_089E62C4;
    case 488u: goto L_089E62C8;
    case 489u: goto L_089E62D0;
    case 490u: goto L_089E62D8;
    case 491u: goto L_089E62E0;
    case 492u: goto L_089E62E8;
    case 493u: goto L_089E62F0;
    case 494u: goto L_089E630C;
    case 495u: goto L_089E631C;
    case 496u: goto L_089E6380;
    case 497u: goto L_089E639C;
    case 498u: goto L_089E63AC;
    case 499u: goto L_089E63B8;
    case 500u: goto L_089E63C8;
    case 501u: goto L_089E63F0;
    case 502u: goto L_089E63F8;
    case 503u: goto L_089E6408;
    case 504u: goto L_089E6430;
    case 505u: goto L_089E6438;
    case 506u: goto L_089E6450;
    case 507u: goto L_089E6464;
    case 508u: goto L_089E6480;
    case 509u: goto L_089E6488;
    case 510u: goto L_089E64A4;
    case 511u: goto L_089E64C4;
    case 512u: goto L_089E64D0;
    case 513u: goto L_089E64D4;
    case 514u: goto L_089E64FC;
    case 515u: goto L_089E6504;
    case 516u: goto L_089E651C;
    case 517u: goto L_089E6528;
    case 518u: goto L_089E653C;
    case 519u: goto L_089E6548;
    case 520u: goto L_089E6550;
    case 521u: goto L_089E656C;
    case 522u: goto L_089E657C;
    case 523u: goto L_089E6588;
    case 524u: goto L_089E6594;
    case 525u: goto L_089E6598;
    case 526u: goto L_089E65A0;
    case 527u: goto L_089E65BC;
    case 528u: goto L_089E65EC;
    case 529u: goto L_089E65F4;
    case 530u: goto L_089E660C;
    case 531u: goto L_089E661C;
    case 532u: goto L_089E662C;
    case 533u: goto L_089E6640;
    case 534u: goto L_089E6650;
    case 535u: goto L_089E6664;
    case 536u: goto L_089E6674;
    case 537u: goto L_089E6688;
    case 538u: goto L_089E6698;
    case 539u: goto L_089E66A8;
    case 540u: goto L_089E66B0;
    case 541u: goto L_089E66CC;
    case 542u: goto L_089E66EC;
    case 543u: goto L_089E66F8;
    case 544u: goto L_089E66FC;
    case 545u: goto L_089E6724;
    case 546u: goto L_089E6728;
    case 547u: goto L_089E673C;
    case 548u: goto L_089E6764;
    case 549u: goto L_089E6774;
    case 550u: goto L_089E67BC;
    case 551u: goto L_089E67C4;
    case 552u: goto L_089E67E0;
    case 553u: goto L_089E67F0;
    case 554u: goto L_089E67FC;
    case 555u: goto L_089E680C;
    case 556u: goto L_089E681C;
    case 557u: goto L_089E6824;
    case 558u: goto L_089E6840;
    case 559u: goto L_089E6850;
    case 560u: goto L_089E68AC;
    case 561u: goto L_089E68C0;
    case 562u: goto L_089E68D4;
    case 563u: goto L_089E68FC;
    case 564u: goto L_089E690C;
    case 565u: goto L_089E6914;
    case 566u: goto L_089E691C;
    case 567u: goto L_089E6938;
    case 568u: goto L_089E6948;
    case 569u: goto L_089E695C;
    case 570u: goto L_089E6964;
    case 571u: goto L_089E6968;
    case 572u: goto L_089E698C;
    case 573u: goto L_089E6994;
    case 574u: goto L_089E69B0;
    case 575u: goto L_089E69C4;
    case 576u: goto L_089E69E0;
    case 577u: goto L_089E69E4;
    case 578u: goto L_089E69EC;
    case 579u: goto L_089E6A08;
    case 580u: goto L_089E6A28;
    case 581u: goto L_089E6A34;
    case 582u: goto L_089E6A38;
    case 583u: goto L_089E6A9C;
    case 584u: goto L_089E6AA4;
    case 585u: goto L_089E6AC0;
    case 586u: goto L_089E6AD0;
    case 587u: goto L_089E6AF8;
    case 588u: goto L_089E6B10;
    case 589u: goto L_089E6B20;
    case 590u: goto L_089E6B44;
    case 591u: goto L_089E6B4C;
    case 592u: goto L_089E6B50;
    case 593u: goto L_089E6B74;
    case 594u: goto L_089E6B7C;
    case 595u: goto L_089E6B98;
    case 596u: goto L_089E6BAC;
    case 597u: goto L_089E6BC8;
    case 598u: goto L_089E6BCC;
    case 599u: goto L_089E6BD4;
    case 600u: goto L_089E6BF0;
    case 601u: goto L_089E6C00;
    case 602u: goto L_089E6C14;
    case 603u: goto L_089E6C24;
    case 604u: goto L_089E6C34;
    case 605u: goto L_089E6C48;
    case 606u: goto L_089E6C64;
    case 607u: goto L_089E6C6C;
    case 608u: goto L_089E6C84;
    case 609u: goto L_089E6C8C;
    case 610u: goto L_089E6CA4;
    case 611u: goto L_089E6CAC;
    case 612u: goto L_089E6CB4;
    case 613u: goto L_089E6CD0;
    case 614u: goto L_089E6CE8;
    case 615u: goto L_089E6CF0;
    case 616u: goto L_089E6D0C;
    case 617u: goto L_089E6D1C;
    case 618u: goto L_089E6D28;
    case 619u: goto L_089E6D38;
    case 620u: goto L_089E6D48;
    case 621u: goto L_089E6D50;
    case 622u: goto L_089E6D68;
    case 623u: goto L_089E6D78;
    case 624u: goto L_089E6D80;
    case 625u: goto L_089E6D98;
    case 626u: goto L_089E6DA4;
    case 627u: goto L_089E6DAC;
    case 628u: goto L_089E6DB4;
    case 629u: goto L_089E6DBC;
    case 630u: goto L_089E6DC4;
    case 631u: goto L_089E6DE0;
    case 632u: goto L_089E6E04;
    case 633u: goto L_089E6E28;
    case 634u: goto L_089E6E30;
    case 635u: goto L_089E6E38;
    case 636u: goto L_089E6E44;
    case 637u: goto L_089E6E54;
    case 638u: goto L_089E6E78;
    case 639u: goto L_089E6E80;
    case 640u: goto L_089E6E88;
    case 641u: goto L_089E6E94;
    case 642u: goto L_089E6E9C;
    case 643u: goto L_089E6EB4;
    case 644u: goto L_089E6EC0;
    case 645u: goto L_089E6ECC;
    case 646u: goto L_089E6ED8;
    case 647u: goto L_089E6EE0;
    case 648u: goto L_089E6EF8;
    case 649u: goto L_089E6F0C;
    case 650u: goto L_089E6F14;
    case 651u: goto L_089E6F18;
    case 652u: goto L_089E6F3C;
    case 653u: goto L_089E6F44;
    case 654u: goto L_089E6F60;
    case 655u: goto L_089E6F74;
    case 656u: goto L_089E6F90;
    case 657u: goto L_089E6F94;
    case 658u: goto L_089E6F9C;
    case 659u: goto L_089E6FB4;
    case 660u: goto L_089E6FC8;
    case 661u: goto L_089E6FD0;
    case 662u: goto L_089E6FD4;
    case 663u: goto L_089E6FF8;
    case 664u: goto L_089E7000;
    case 665u: goto L_089E701C;
    case 666u: goto L_089E7030;
    case 667u: goto L_089E704C;
    case 668u: goto L_089E7050;
    case 669u: goto L_089E7058;
    case 670u: goto L_089E7074;
    case 671u: goto L_089E7090;
    case 672u: goto L_089E7098;
    case 673u: goto L_089E70B0;
    case 674u: goto L_089E70BC;
    case 675u: goto L_089E70C8;
    case 676u: goto L_089E70D4;
    case 677u: goto L_089E70DC;
    case 678u: goto L_089E70F4;
    case 679u: goto L_089E7120;
    case 680u: goto L_089E7128;
    case 681u: goto L_089E7144;
    case 682u: goto L_089E7168;
    case 683u: goto L_089E7174;
    case 684u: goto L_089E7184;
    case 685u: goto L_089E7190;
    case 686u: goto L_089E71A0;
    case 687u: goto L_089E71AC;
    case 688u: goto L_089E71C4;
    case 689u: goto L_089E71CC;
    case 690u: goto L_089E71E4;
    case 691u: goto L_089E71F4;
    case 692u: goto L_089E71FC;
    case 693u: goto L_089E7218;
    case 694u: goto L_089E7238;
    case 695u: goto L_089E7244;
    case 696u: goto L_089E7248;
    case 697u: goto L_089E727C;
    case 698u: goto L_089E7284;
    case 699u: goto L_089E7290;
    case 700u: goto L_089E72B0;
    case 701u: goto L_089E72C8;
    case 702u: goto L_089E72D0;
    case 703u: goto L_089E72E8;
    case 704u: goto L_089E72F0;
    case 705u: goto L_089E72F8;
    case 706u: goto L_089E7314;
    case 707u: goto L_089E7344;
    case 708u: goto L_089E7358;
    case 709u: goto L_089E7360;
    case 710u: goto L_089E7374;
    case 711u: goto L_089E737C;
    case 712u: goto L_089E7394;
    case 713u: goto L_089E73A4;
    case 714u: goto L_089E73B4;
    case 715u: goto L_089E73BC;
    case 716u: goto L_089E73C0;
    case 717u: goto L_089E73D4;
    case 718u: goto L_089E73EC;
    case 719u: goto L_089E73F4;
    case 720u: goto L_089E740C;
    case 721u: goto L_089E7440;
    case 722u: goto L_089E747C;
    case 723u: goto L_089E7490;
    case 724u: goto L_089E7498;
    case 725u: goto L_089E74AC;
    case 726u: goto L_089E74D0;
    case 727u: goto L_089E74DC;
    case 728u: goto L_089E74E4;
    case 729u: goto L_089E74E8;
    case 730u: goto L_089E74F8;
    case 731u: goto L_089E7504;
    case 732u: goto L_089E7510;
    case 733u: goto L_089E7518;
    case 734u: goto L_089E751C;
    case 735u: goto L_089E7528;
    case 736u: goto L_089E7540;
    case 737u: goto L_089E755C;
    case 738u: goto L_089E7584;
    case 739u: goto L_089E758C;
    case 740u: goto L_089E75A0;
    case 741u: goto L_089E75C4;
    case 742u: goto L_089E75D4;
    case 743u: goto L_089E75E0;
    case 744u: goto L_089E75EC;
    case 745u: goto L_089E75F4;
    case 746u: goto L_089E75F8;
    case 747u: goto L_089E7604;
    case 748u: goto L_089E761C;
    case 749u: goto L_089E7638;
    case 750u: goto L_089E7674;
    case 751u: goto L_089E767C;
    case 752u: goto L_089E7694;
    case 753u: goto L_089E76A8;
    case 754u: goto L_089E76B4;
    case 755u: goto L_089E76CC;
    case 756u: goto L_089E76E4;
    case 757u: goto L_089E76F0;
    case 758u: goto L_089E76F8;
    case 759u: goto L_089E7718;
    case 760u: goto L_089E7724;
    case 761u: goto L_089E772C;
    case 762u: goto L_089E7734;
    case 763u: goto L_089E773C;
    case 764u: goto L_089E7748;
    case 765u: goto L_089E7750;
    case 766u: goto L_089E7758;
    case 767u: goto L_089E7760;
    case 768u: goto L_089E7768;
    case 769u: goto L_089E7778;
    case 770u: goto L_089E7784;
    case 771u: goto L_089E7790;
    case 772u: goto L_089E7798;
    case 773u: goto L_089E77A0;
    case 774u: goto L_089E77A8;
    case 775u: goto L_089E77B0;
    case 776u: goto L_089E77B8;
    case 777u: goto L_089E77C4;
    case 778u: goto L_089E77D0;
    case 779u: goto L_089E77D8;
    case 780u: goto L_089E77E0;
    case 781u: goto L_089E77E8;
    case 782u: goto L_089E77F0;
    case 783u: goto L_089E77F8;
    case 784u: goto L_089E7810;
    case 785u: goto L_089E7820;
    case 786u: goto L_089E7828;
    case 787u: goto L_089E782C;
    case 788u: goto L_089E783C;
    case 789u: goto L_089E7840;
    case 790u: goto L_089E784C;
    case 791u: goto L_089E7858;
    case 792u: goto L_089E7860;
    case 793u: goto L_089E7868;
    case 794u: goto L_089E7874;
    case 795u: goto L_089E7880;
    case 796u: goto L_089E788C;
    case 797u: goto L_089E7890;
    case 798u: goto L_089E78A0;
    case 799u: goto L_089E78AC;
    case 800u: goto L_089E78B8;
    case 801u: goto L_089E78C4;
    case 802u: goto L_089E78C8;
    case 803u: goto L_089E78F4;
    case 804u: goto L_089E7954;
    case 805u: goto L_089E7960;
    case 806u: goto L_089E7998;
    case 807u: goto L_089E79E4;
    case 808u: goto L_089E79F0;
    case 809u: goto L_089E79F8;
    case 810u: goto L_089E7A10;
    case 811u: goto L_089E7A24;
    case 812u: goto L_089E7A28;
    case 813u: goto L_089E7A4C;
    case 814u: goto L_089E7A54;
    case 815u: goto L_089E7A70;
    case 816u: goto L_089E7A84;
    case 817u: goto L_089E7AA0;
    case 818u: goto L_089E7AA4;
    case 819u: goto L_089E7AAC;
    case 820u: goto L_089E7AC4;
    case 821u: goto L_089E7ACC;
    case 822u: goto L_089E7AD8;
    case 823u: goto L_089E7AE4;
    case 824u: goto L_089E7AEC;
    case 825u: goto L_089E7B04;
    case 826u: goto L_089E7B14;
    case 827u: goto L_089E7B24;
    case 828u: goto L_089E7B28;
    case 829u: goto L_089E7B4C;
    case 830u: goto L_089E7B54;
    case 831u: goto L_089E7B70;
    case 832u: goto L_089E7B84;
    case 833u: goto L_089E7BA0;
    case 834u: goto L_089E7BA4;
    case 835u: goto L_089E7BAC;
    case 836u: goto L_089E7BC4;
    case 837u: goto L_089E7BD4;
    case 838u: goto L_089E7BDC;
    case 839u: goto L_089E7BE0;
    case 840u: goto L_089E7C04;
    case 841u: goto L_089E7C0C;
    case 842u: goto L_089E7C28;
    case 843u: goto L_089E7C3C;
    case 844u: goto L_089E7C58;
    case 845u: goto L_089E7C5C;
    case 846u: goto L_089E7C64;
    case 847u: goto L_089E7C80;
    case 848u: goto L_089E7C90;
    case 849u: goto L_089E7CA4;
    case 850u: goto L_089E7CAC;
    case 851u: goto L_089E7CB4;
    case 852u: goto L_089E7CD0;
    case 853u: goto L_089E7CE0;
    case 854u: goto L_089E7CF8;
    case 855u: goto L_089E7D00;
    case 856u: goto L_089E7D18;
    case 857u: goto L_089E7D28;
    case 858u: goto L_089E7D30;
    case 859u: goto L_089E7D48;
    case 860u: goto L_089E7D58;
    case 861u: goto L_089E7D6C;
    case 862u: goto L_089E7D74;
    case 863u: goto L_089E7D78;
    case 864u: goto L_089E7D9C;
    case 865u: goto L_089E7DA4;
    case 866u: goto L_089E7DC0;
    case 867u: goto L_089E7DD4;
    case 868u: goto L_089E7DF0;
    case 869u: goto L_089E7DF4;
    case 870u: goto L_089E7DFC;
    case 871u: goto L_089E7E14;
    case 872u: goto L_089E7E34;
    case 873u: goto L_089E7E5C;
    case 874u: goto L_089E7E64;
    case 875u: goto L_089E7E80;
    case 876u: goto L_089E7E98;
    case 877u: goto L_089E7EA0;
    case 878u: goto L_089E7EA8;
    case 879u: goto L_089E7EAC;
    case 880u: goto L_089E7ED0;
    case 881u: goto L_089E7ED8;
    case 882u: goto L_089E7EF4;
    case 883u: goto L_089E7F08;
    case 884u: goto L_089E7F24;
    case 885u: goto L_089E7F28;
    case 886u: goto L_089E7F30;
    case 887u: goto L_089E7F48;
    case 888u: goto L_089E7F60;
    case 889u: goto L_089E7F68;
    case 890u: goto L_089E7F80;
    case 891u: goto L_089E7F98;
    case 892u: goto L_089E7FA0;
    case 893u: goto L_089E7FA8;
    case 894u: goto L_089E7FAC;
    case 895u: goto L_089E7FD0;
    case 896u: goto L_089E7FD8;
    case 897u: goto L_089E7FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089E4000:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E4008;
    }
L_089E4008:
    ctx.gpr[31] = (0x089E4010u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E4010u) goto L_089E4010;
    return;
L_089E4010:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E4018;
    }
L_089E4018:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E4030u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E4030u) goto L_089E4030;
    return;
L_089E4030:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E4040u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089E4040u) goto L_089E4040;
    return;
L_089E4040:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E40FC;
      }
      goto L_089E404C;
    }
L_089E404C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E40FC;
      }
      goto L_089E405C;
    }
L_089E405C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089E4084;
      }
      goto L_089E4068;
    }
L_089E4068:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089E4084;
      }
      goto L_089E4074;
    }
L_089E4074:
    ctx.gpr[31] = (0x089E407Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 132u, 0x0887C9B4u>(ctx, &aot_mem) && ctx.pc == 0x089E407Cu) goto L_089E407C;
    return;
L_089E407C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E40FC;
      }
      goto L_089E4084;
    }
L_089E4084:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[7] = (65534u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 17u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(428), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (32768u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 31u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[31] = (0x089E40D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 556u, 0x08886D10u>(ctx, &aot_mem) && ctx.pc == 0x089E40D4u) goto L_089E40D4;
    return;
L_089E40D4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7020)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7020), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (128u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[31] = (0x089E40FCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 476u, 0x088C309Cu>(ctx, &aot_mem) && ctx.pc == 0x089E40FCu) goto L_089E40FC;
    return;
L_089E40FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4120;
      }
      goto L_089E4108;
    }
L_089E4108:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E4120u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16512));
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 191u, 0x08958B00u>(ctx, &aot_mem) && ctx.pc == 0x089E4120u) goto L_089E4120;
    return;
L_089E4120:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E4130;
    }
L_089E4130:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E413C;
    }
L_089E413C:
    ctx.gpr[31] = (0x089E4144u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E4144u) goto L_089E4144;
    return;
L_089E4144:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E414C;
    }
L_089E414C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E4168u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E4168u) goto L_089E4168;
    return;
L_089E4168:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E4178u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089E4178u) goto L_089E4178;
    return;
L_089E4178:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089E41A4;
      }
      goto L_089E4184;
    }
L_089E4184:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089E41C0;
      }
      goto L_089E41A4;
    }
L_089E41A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    goto L_089E41C0;
L_089E41C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E41D0;
    }
L_089E41D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E41DC;
    }
L_089E41DC:
    ctx.gpr[31] = (0x089E41E4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E41E4u) goto L_089E41E4;
    return;
L_089E41E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E41EC;
    }
L_089E41EC:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E4204u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E4204u) goto L_089E4204;
    return;
L_089E4204:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E4214u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089E4214u) goto L_089E4214;
    return;
L_089E4214:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x089E4234u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x089E4234u) goto L_089E4234;
    return;
L_089E4234:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E428C;
      }
      goto L_089E4244;
    }
L_089E4244:
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(96))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 65 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089E4278;
      }
      goto L_089E4258;
    }
L_089E4258:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(96))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 91 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4278;
      }
      goto L_089E4268;
    }
L_089E4268:
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(96))))));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_089E4278;
L_089E4278:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E4244;
      }
      goto L_089E428C;
    }
L_089E428C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[31] = (0x089E42A4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 246u, 0x089A5174u>(ctx, &aot_mem) && ctx.pc == 0x089E42A4u) goto L_089E42A4;
    return;
L_089E42A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E42B4;
    }
L_089E42B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E42C0;
    }
L_089E42C0:
    ctx.gpr[31] = (0x089E42C8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E42C8u) goto L_089E42C8;
    return;
L_089E42C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E42D0;
    }
L_089E42D0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E42E8u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E42E8u) goto L_089E42E8;
    return;
L_089E42E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E42F8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089E42F8u) goto L_089E42F8;
    return;
L_089E42F8:
    ctx.gpr[31] = (0x089E4300u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 256u, 0x089A5210u>(ctx, &aot_mem) && ctx.pc == 0x089E4300u) goto L_089E4300;
    return;
L_089E4300:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E4310;
    }
L_089E4310:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E431C;
    }
L_089E431C:
    ctx.gpr[31] = (0x089E4324u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E4324u) goto L_089E4324;
    return;
L_089E4324:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E432C;
    }
L_089E432C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[31] = (0x089E4348u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E4348u) goto L_089E4348;
    return;
L_089E4348:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_089E4378;
      }
      goto L_089E436C;
    }
L_089E436C:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_089E4378;
L_089E4378:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E4394;
      }
      goto L_089E4388;
    }
L_089E4388:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_089E4394;
L_089E4394:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E43B0;
      }
      goto L_089E43A4;
    }
L_089E43A4:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_089E43B0;
L_089E43B0:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (2269u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[31] = (0x089E43E0u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 368u, 0x08A46748u>(ctx, &aot_mem) && ctx.pc == 0x089E43E0u) goto L_089E43E0;
    return;
L_089E43E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E43EC;
      }
      goto L_089E43E8;
    }
L_089E43E8:
    ctx.gpr[17] = (0u | 1u);
    goto L_089E43EC;
L_089E43EC:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_089E4418;
      }
      goto L_089E4410;
    }
L_089E4410:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_089E4468;
      }
      goto L_089E4418;
    }
L_089E4418:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089E4448;
    }
    goto L_089E4434;
L_089E4434:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E4468;
      }
      goto L_089E4448;
    }
L_089E4448:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4468;
      }
      goto L_089E4464;
    }
L_089E4464:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089E4468;
L_089E4468:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E4478;
    }
L_089E4478:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E4484;
    }
L_089E4484:
    ctx.gpr[31] = (0x089E448Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E448Cu) goto L_089E448C;
    return;
L_089E448C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E4494;
    }
L_089E4494:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x089E44B0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E44B0u) goto L_089E44B0;
    return;
L_089E44B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E44C0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x089E44C0u) goto L_089E44C0;
    return;
L_089E44C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089E44D4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x089E44D4u) goto L_089E44D4;
    return;
L_089E44D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089E44FCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 316u, 0x08A0E5C8u>(ctx, &aot_mem) && ctx.pc == 0x089E44FCu) goto L_089E44FC;
    return;
L_089E44FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E450C;
    }
L_089E450C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E4518;
    }
L_089E4518:
    ctx.gpr[31] = (0x089E4520u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E4520u) goto L_089E4520;
    return;
L_089E4520:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E4528;
    }
L_089E4528:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E4540u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E4540u) goto L_089E4540;
    return;
L_089E4540:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E4550u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x089E4550u) goto L_089E4550;
    return;
L_089E4550:
    ctx.gpr[4] = (2230u << 16u);
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
    ctx.gpr[31] = (0x089E4584u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 222u, 0x08944F50u>(ctx, &aot_mem) && ctx.pc == 0x089E4584u) goto L_089E4584;
    return;
L_089E4584:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E4594;
    }
L_089E4594:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E45A0;
    }
L_089E45A0:
    ctx.gpr[31] = (0x089E45A8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E45A8u) goto L_089E45A8;
    return;
L_089E45A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E45B0;
    }
L_089E45B0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E45CCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E45CCu) goto L_089E45CC;
    return;
L_089E45CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[16] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1212)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(360)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1212));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(360)));
        goto L_089E463C;
    }
    goto L_089E4634;
L_089E4634:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089E4644;
      }
      goto L_089E463C;
    }
L_089E463C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    goto L_089E4644;
L_089E4644:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1212));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
        goto L_089E467C;
    }
    goto L_089E4674;
L_089E4674:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089E4680;
      }
      goto L_089E467C;
    }
L_089E467C:
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    goto L_089E4680;
L_089E4680:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E4698;
    }
L_089E4698:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E46A4;
    }
L_089E46A4:
    ctx.gpr[31] = (0x089E46ACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E46ACu) goto L_089E46AC;
    return;
L_089E46AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E46B4;
    }
L_089E46B4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E46D0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E46D0u) goto L_089E46D0;
    return;
L_089E46D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E46E0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089E46E0u) goto L_089E46E0;
    return;
L_089E46E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1212)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[16] = (0u | 100u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089E471C;
      }
      goto L_089E4714;
    }
L_089E4714:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1212)));
      if (branch_taken) {
          goto L_089E4724;
      }
      goto L_089E471C;
    }
L_089E471C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    goto L_089E4724;
L_089E4724:
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089E4748;
      }
      goto L_089E4740;
    }
L_089E4740:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1212)));
      if (branch_taken) {
          goto L_089E4750;
      }
      goto L_089E4748;
    }
L_089E4748:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    goto L_089E4750;
L_089E4750:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E4764;
    }
L_089E4764:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E4770;
    }
L_089E4770:
    ctx.gpr[31] = (0x089E4778u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E4778u) goto L_089E4778;
    return;
L_089E4778:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E4780;
    }
L_089E4780:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E4798u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E4798u) goto L_089E4798;
    return;
L_089E4798:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11856));
    ctx.gpr[31] = (0x089E47B8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 482u, 0x0893A750u>(ctx, &aot_mem) && ctx.pc == 0x089E47B8u) goto L_089E47B8;
    return;
L_089E47B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E47C8;
    }
L_089E47C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E47D4;
    }
L_089E47D4:
    ctx.gpr[31] = (0x089E47DCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E47DCu) goto L_089E47DC;
    return;
L_089E47DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E47E4;
    }
L_089E47E4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E47FCu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E47FCu) goto L_089E47FC;
    return;
L_089E47FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11856));
    ctx.gpr[31] = (0x089E481Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 487u, 0x0893A77Cu>(ctx, &aot_mem) && ctx.pc == 0x089E481Cu) goto L_089E481C;
    return;
L_089E481C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E482C;
    }
L_089E482C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E4838;
    }
L_089E4838:
    ctx.gpr[31] = (0x089E4840u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E4840u) goto L_089E4840;
    return;
L_089E4840:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E4848;
    }
L_089E4848:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089E4864u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E4864u) goto L_089E4864;
    return;
L_089E4864:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E4874u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089E4874u) goto L_089E4874;
    return;
L_089E4874:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089E48A8;
      }
      goto L_089E4898;
    }
L_089E4898:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x089E48A4u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x089E48A4u) goto L_089E48A4;
    return;
L_089E48A4:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089E48A8;
L_089E48A8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4B58;
      }
      goto L_089E48B4;
    }
L_089E48B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4B58;
      }
      goto L_089E48C0;
    }
L_089E48C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E48E4;
      }
      goto L_089E48D4;
    }
L_089E48D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_089E48E4;
L_089E48E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089E4984;
      }
      goto L_089E48F4;
    }
L_089E48F4:
    ctx.gpr[31] = (0x089E48FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 734u, 0x0889F854u>(ctx, &aot_mem) && ctx.pc == 0x089E48FCu) goto L_089E48FC;
    return;
L_089E48FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | 64u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (46887u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 50604u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
          goto L_089E4990;
      }
      goto L_089E4984;
    }
L_089E4984:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x089E4990u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 667u, 0x0889F3D8u>(ctx, &aot_mem) && ctx.pc == 0x089E4990u) goto L_089E4990;
    return;
L_089E4990:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4B58;
      }
      goto L_089E499C;
    }
L_089E499C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 15u);
      if (branch_taken) {
          goto L_089E49D4;
      }
      goto L_089E49AC;
    }
L_089E49AC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 12u);
      if (branch_taken) {
          goto L_089E49CC;
      }
      goto L_089E49B4;
    }
L_089E49B4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 11u);
      if (branch_taken) {
          goto L_089E49DC;
      }
      goto L_089E49BC;
    }
L_089E49BC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E49E4;
      }
      goto L_089E49C4;
    }
L_089E49C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_089E49E4;
      }
      goto L_089E49CC;
    }
L_089E49CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_089E49E4;
      }
      goto L_089E49D4;
    }
L_089E49D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_089E49E4;
      }
      goto L_089E49DC;
    }
L_089E49DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 5u);
      if (branch_taken) {
          goto L_089E49E4;
      }
      goto L_089E49E4;
    }
L_089E49E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 60u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089E4A2C;
      }
      goto L_089E49F4;
    }
L_089E49F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089E4A2C;
      }
      goto L_089E4A04;
    }
L_089E4A04:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(248));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x089E4A24u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E4A24u) goto L_089E4A24;
    return;
L_089E4A24:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E4B58;
      }
      goto L_089E4A2C;
    }
L_089E4A2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E4AA0;
      }
      goto L_089E4A40;
    }
L_089E4A40:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E4A70;
      }
      goto L_089E4A50;
    }
L_089E4A50:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E4A70;
      }
      goto L_089E4A60;
    }
L_089E4A60:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E4A78;
      }
      goto L_089E4A70;
    }
L_089E4A70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 5u);
      if (branch_taken) {
          goto L_089E4B1C;
      }
      goto L_089E4A78;
    }
L_089E4A78:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E4A98;
      }
      goto L_089E4A88;
    }
L_089E4A88:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 12u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
        goto L_089E4B20;
    }
    goto L_089E4A98;
L_089E4A98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 10u);
      if (branch_taken) {
          goto L_089E4B1C;
      }
      goto L_089E4AA0;
    }
L_089E4AA0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 15u);
      if (branch_taken) {
          goto L_089E4AF4;
      }
      goto L_089E4AB0;
    }
L_089E4AB0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 12u);
      if (branch_taken) {
          goto L_089E4AD0;
      }
      goto L_089E4AB8;
    }
L_089E4AB8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 11u);
      if (branch_taken) {
          goto L_089E4B18;
      }
      goto L_089E4AC0;
    }
L_089E4AC0:
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
        goto L_089E4B20;
    }
    goto L_089E4AC8;
L_089E4AC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_089E4B1C;
      }
      goto L_089E4AD0;
    }
L_089E4AD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(544)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089E4AE8;
      }
      goto L_089E4AE0;
    }
L_089E4AE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089E4AEC;
      }
      goto L_089E4AE8;
    }
L_089E4AE8:
    ctx.gpr[4] = (0u | 3u);
    goto L_089E4AEC;
L_089E4AEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
      if (branch_taken) {
          goto L_089E4B20;
      }
      goto L_089E4AF4;
    }
L_089E4AF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(544)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089E4B0C;
      }
      goto L_089E4B04;
    }
L_089E4B04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_089E4B10;
      }
      goto L_089E4B0C;
    }
L_089E4B0C:
    ctx.gpr[4] = (0u | 3u);
    goto L_089E4B10;
L_089E4B10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
      if (branch_taken) {
          goto L_089E4B20;
      }
      goto L_089E4B18;
    }
L_089E4B18:
    ctx.gpr[4] = (0u | 8u);
    goto L_089E4B1C;
L_089E4B1C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    goto L_089E4B20;
L_089E4B20:
    ctx.gpr[4] = (~(ctx.gpr[4] | 0u));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(543)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(543), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(224));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x089E4B58u);
    ctx.gpr[6] = (0u | 169u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E4B58u) goto L_089E4B58;
    return;
L_089E4B58:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E4B64u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 765u, 0x08887C88u>(ctx, &aot_mem) && ctx.pc == 0x089E4B64u) goto L_089E4B64;
    return;
L_089E4B64:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1336), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1332), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089E4BB0;
      }
      goto L_089E4B7C;
    }
L_089E4B7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4BA4;
      }
      goto L_089E4B88;
    }
L_089E4B88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_089E4BA4;
    }
    goto L_089E4B94;
L_089E4B94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x089E4BA0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089E4BA0u) goto L_089E4BA0;
    return;
L_089E4BA0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_089E4BA4;
L_089E4BA4:
    ctx.gpr[31] = (0x089E4BACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x089E4BACu) goto L_089E4BAC;
    return;
L_089E4BAC:
    ctx.gpr[4] = (0u | 1u);
    goto L_089E4BB0;
L_089E4BB0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 9u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
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
    ctx.gpr[31] = (0x089E4BFCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 706u, 0x0899F9BCu>(ctx, &aot_mem) && ctx.pc == 0x089E4BFCu) goto L_089E4BFC;
    return;
L_089E4BFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4C18;
      }
      goto L_089E4C08;
    }
L_089E4C08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    ctx.gpr[5] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089E4C18;
L_089E4C18:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), 0u);
    ctx.gpr[31] = (0x089E4C24u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A24D8u>(ctx, &aot_mem) && ctx.pc == 0x089E4C24u) goto L_089E4C24;
    return;
L_089E4C24:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E4C30u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x089E4C30u) goto L_089E4C30;
    return;
L_089E4C30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (17530u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x089E4C48u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089E4C48u) goto L_089E4C48;
    return;
L_089E4C48:
    ctx.gpr[31] = (0x089E4C50u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 847u, 0x08A2FC04u>(ctx, &aot_mem) && ctx.pc == 0x089E4C50u) goto L_089E4C50;
    return;
L_089E4C50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[0];
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(104));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089E4C80u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E4C80u) goto L_089E4C80;
    return;
L_089E4C80:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089E4C98u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 507u, 0x08882600u>(ctx, &aot_mem) && ctx.pc == 0x089E4C98u) goto L_089E4C98;
    return;
L_089E4C98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E4CA8;
    }
L_089E4CA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E4CB4;
    }
L_089E4CB4:
    ctx.gpr[31] = (0x089E4CBCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E4CBCu) goto L_089E4CBC;
    return;
L_089E4CBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E4CC4;
    }
L_089E4CC4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x089E4CE0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E4CE0u) goto L_089E4CE0;
    return;
L_089E4CE0:
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089E4D10;
      }
      goto L_089E4D00;
    }
L_089E4D00:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x089E4D0Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x089E4D0Cu) goto L_089E4D0C;
    return;
L_089E4D0C:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089E4D10;
L_089E4D10:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
      if (branch_taken) {
          goto L_089E4D54;
      }
      goto L_089E4D34;
    }
L_089E4D34:
    ctx.gpr[4] = (0u - ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5168));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    goto L_089E4D54;
L_089E4D54:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[2] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(548));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[8] = (0u | 16u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089E4D98u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 226u, 0x088C15D4u>(ctx, &aot_mem) && ctx.pc == 0x089E4D98u) goto L_089E4D98;
    return;
L_089E4D98:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(544))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E4DD8;
      }
      goto L_089E4DA4;
    }
L_089E4DA4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(664), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20980)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(656));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    ctx.gpr[10] = (ctx.gpr[29] + static_cast<std::uint32_t>(548));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x089E4DD8u);
    ctx.gpr[9] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 256u, 0x088C19B4u>(ctx, &aot_mem) && ctx.pc == 0x089E4DD8u) goto L_089E4DD8;
    return;
L_089E4DD8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(544))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E4E44;
      }
      goto L_089E4DE4;
    }
L_089E4DE4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(688), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(692), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(696), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(688));
    ctx.gpr[31] = (0x089E4E00u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13820)));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 281u, 0x08871AF4u>(ctx, &aot_mem) && ctx.pc == 0x089E4E00u) goto L_089E4E00;
    return;
L_089E4E00:
    ctx.gpr[4] = (ctx.gpr[2] << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20980)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(672), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(676), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(680), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    ctx.gpr[10] = (ctx.gpr[29] + static_cast<std::uint32_t>(548));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x089E4E44u);
    ctx.gpr[9] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 256u, 0x088C19B4u>(ctx, &aot_mem) && ctx.pc == 0x089E4E44u) goto L_089E4E44;
    return;
L_089E4E44:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(544))))));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4EF0;
      }
      goto L_089E4E58;
    }
L_089E4E58:
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(548)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(624));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(720), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(724), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(728), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(720));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E4ED8;
      }
      goto L_089E4EC8;
    }
L_089E4EC8:
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(548)));
    goto L_089E4ED8;
L_089E4ED8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(544))))));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E4E58;
      }
      goto L_089E4EF0;
    }
L_089E4EF0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4F50;
      }
      goto L_089E4EF8;
    }
L_089E4EF8:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4F30;
      }
      goto L_089E4F0C;
    }
L_089E4F0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089E4F28u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 281u, 0x089E1A18u>(ctx, &aot_mem) && ctx.pc == 0x089E4F28u) goto L_089E4F28;
    return;
L_089E4F28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4F50;
      }
      goto L_089E4F30;
    }
L_089E4F30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (65528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089E4F50u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 281u, 0x089E1A18u>(ctx, &aot_mem) && ctx.pc == 0x089E4F50u) goto L_089E4F50;
    return;
L_089E4F50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E4F60;
    }
L_089E4F60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E4F6C;
    }
L_089E4F6C:
    ctx.gpr[31] = (0x089E4F74u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E4F74u) goto L_089E4F74;
    return;
L_089E4F74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E4F7C;
    }
L_089E4F7C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E4F98u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E4F98u) goto L_089E4F98;
    return;
L_089E4F98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[31] = (0x089E4FA8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089E4FA8u) goto L_089E4FA8;
    return;
L_089E4FA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089E4FB8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089E4FB8u) goto L_089E4FB8;
    return;
L_089E4FB8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089E4FCCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 299u, 0x0899DD38u>(ctx, &aot_mem) && ctx.pc == 0x089E4FCCu) goto L_089E4FCC;
    return;
L_089E4FCC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4FD8;
      }
      goto L_089E4FD4;
    }
L_089E4FD4:
    ctx.gpr[17] = (0u | 1u);
    goto L_089E4FD8;
L_089E4FD8:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_089E5004;
      }
      goto L_089E4FFC;
    }
L_089E4FFC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_089E5054;
      }
      goto L_089E5004;
    }
L_089E5004:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089E5034;
    }
    goto L_089E5020;
L_089E5020:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E5054;
      }
      goto L_089E5034;
    }
L_089E5034:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5054;
      }
      goto L_089E5050;
    }
L_089E5050:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089E5054;
L_089E5054:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E5064;
    }
L_089E5064:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E5070;
    }
L_089E5070:
    ctx.gpr[31] = (0x089E5078u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E5078u) goto L_089E5078;
    return;
L_089E5078:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E5080;
    }
L_089E5080:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E5098u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E5098u) goto L_089E5098;
    return;
L_089E5098:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E50A8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089E50A8u) goto L_089E50A8;
    return;
L_089E50A8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 31u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089E50D8u);
    ctx.gpr[5] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 881u, 0x08892EE0u>(ctx, &aot_mem) && ctx.pc == 0x089E50D8u) goto L_089E50D8;
    return;
L_089E50D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E50E8;
    }
L_089E50E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E50F4;
    }
L_089E50F4:
    ctx.gpr[31] = (0x089E50FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E50FCu) goto L_089E50FC;
    return;
L_089E50FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E5104;
    }
L_089E5104:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E511Cu);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E511Cu) goto L_089E511C;
    return;
L_089E511C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E512Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x089E512Cu) goto L_089E512C;
    return;
L_089E512C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (512u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089E5158;
      }
      goto L_089E5144;
    }
L_089E5144:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089E5160;
      }
      goto L_089E5158;
    }
L_089E5158:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089E5160;
      }
      goto L_089E5160;
    }
L_089E5160:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E516C;
      }
      goto L_089E5168;
    }
L_089E5168:
    ctx.gpr[5] = (0u | 1u);
    goto L_089E516C;
L_089E516C:
    ctx.gpr[4] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_089E5198;
      }
      goto L_089E5190;
    }
L_089E5190:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_089E51E8;
      }
      goto L_089E5198;
    }
L_089E5198:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089E51C8;
    }
    goto L_089E51B4;
L_089E51B4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E51E8;
      }
      goto L_089E51C8;
    }
L_089E51C8:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E51E8;
      }
      goto L_089E51E4;
    }
L_089E51E4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089E51E8;
L_089E51E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E51F8;
    }
L_089E51F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E5204;
    }
L_089E5204:
    ctx.gpr[31] = (0x089E520Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E520Cu) goto L_089E520C;
    return;
L_089E520C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E5214;
    }
L_089E5214:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_089E5254;
    }
    goto L_089E5224;
L_089E5224:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089E5230u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x089E5230u) goto L_089E5230;
    return;
L_089E5230:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5248;
      }
      goto L_089E523C;
    }
L_089E523C:
    ctx.gpr[31] = (0x089E5244u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x089E5244u) goto L_089E5244;
    return;
L_089E5244:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089E5248;
L_089E5248:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_089E5254;
L_089E5254:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x089E526Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24700)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x089E526Cu) goto L_089E526C;
    return;
L_089E526C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x089E5298u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E5298u) goto L_089E5298;
    return;
L_089E5298:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (0u < ctx.gpr[8] ? 1u : 0u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[2] = (ctx.gpr[8] & 255u);
    ctx.gpr[3] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089E52D8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 700u, 0x08917A78u>(ctx, &aot_mem) && ctx.pc == 0x089E52D8u) goto L_089E52D8;
    return;
L_089E52D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E52E8;
    }
L_089E52E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E52F4;
    }
L_089E52F4:
    ctx.gpr[31] = (0x089E52FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E52FCu) goto L_089E52FC;
    return;
L_089E52FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E5304;
    }
L_089E5304:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 10u);
    ctx.gpr[31] = (0x089E5320u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E5320u) goto L_089E5320;
    return;
L_089E5320:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089E5350;
      }
      goto L_089E5344;
    }
L_089E5344:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_089E5350;
L_089E5350:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_089E536C;
      }
      goto L_089E5360;
    }
L_089E5360:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_089E536C;
L_089E536C:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[19] = ctx.fpr[19] / ctx.fpr[3];
    ctx.gpr[5] = (0u | 1u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.gpr[31] = (0x089E53C8u);
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 9u, 0x0897C1DCu>(ctx, &aot_mem) && ctx.pc == 0x089E53C8u) goto L_089E53C8;
    return;
L_089E53C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E53D8;
    }
L_089E53D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E53E4;
    }
L_089E53E4:
    ctx.gpr[31] = (0x089E53ECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E53ECu) goto L_089E53EC;
    return;
L_089E53EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E53F4;
    }
L_089E53F4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E5410u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E5410u) goto L_089E5410;
    return;
L_089E5410:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E5444u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x089E5444u) goto L_089E5444;
    return;
L_089E5444:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[31] = (0x089E5458u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x089E5458u) goto L_089E5458;
    return;
L_089E5458:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089E5464u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 226u, 0x089BD0ECu>(ctx, &aot_mem) && ctx.pc == 0x089E5464u) goto L_089E5464;
    return;
L_089E5464:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E5474;
    }
L_089E5474:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E5480;
    }
L_089E5480:
    ctx.gpr[31] = (0x089E5488u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E5488u) goto L_089E5488;
    return;
L_089E5488:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E5490;
    }
L_089E5490:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E54ACu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E54ACu) goto L_089E54AC;
    return;
L_089E54AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E54BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089E54BCu) goto L_089E54BC;
    return;
L_089E54BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089E54D0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x089E54D0u) goto L_089E54D0;
    return;
L_089E54D0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[31] = (0x089E54E4u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x089E54E4u) goto L_089E54E4;
    return;
L_089E54E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E54F0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 226u, 0x089BD0ECu>(ctx, &aot_mem) && ctx.pc == 0x089E54F0u) goto L_089E54F0;
    return;
L_089E54F0:
    ctx.gpr[31] = (0x089E54F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 535u, 0x08886BB0u>(ctx, &aot_mem) && ctx.pc == 0x089E54F8u) goto L_089E54F8;
    return;
L_089E54F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E5508;
    }
L_089E5508:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E5514;
    }
L_089E5514:
    ctx.gpr[31] = (0x089E551Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E551Cu) goto L_089E551C;
    return;
L_089E551C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E5524;
    }
L_089E5524:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E553Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E553Cu) goto L_089E553C;
    return;
L_089E553C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5560;
      }
      goto L_089E5548;
    }
L_089E5548:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x089E5558u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 150u, 0x08864AC0u>(ctx, &aot_mem) && ctx.pc == 0x089E5558u) goto L_089E5558;
    return;
L_089E5558:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5570;
      }
      goto L_089E5560;
    }
L_089E5560:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089E5570u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 150u, 0x08864AC0u>(ctx, &aot_mem) && ctx.pc == 0x089E5570u) goto L_089E5570;
    return;
L_089E5570:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E5580;
    }
L_089E5580:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E558C;
    }
L_089E558C:
    ctx.gpr[31] = (0x089E5594u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E5594u) goto L_089E5594;
    return;
L_089E5594:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E559C;
    }
L_089E559C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_089E55DC;
    }
    goto L_089E55AC;
L_089E55AC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089E55B8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x089E55B8u) goto L_089E55B8;
    return;
L_089E55B8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E55D0;
      }
      goto L_089E55C4;
    }
L_089E55C4:
    ctx.gpr[31] = (0x089E55CCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x089E55CCu) goto L_089E55CC;
    return;
L_089E55CC:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089E55D0;
L_089E55D0:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_089E55DC;
L_089E55DC:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x089E55F4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24700)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x089E55F4u) goto L_089E55F4;
    return;
L_089E55F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089E5620u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E5620u) goto L_089E5620;
    return;
L_089E5620:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x089E5654u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 398u, 0x0887A628u>(ctx, &aot_mem) && ctx.pc == 0x089E5654u) goto L_089E5654;
    return;
L_089E5654:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E5664;
    }
L_089E5664:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E5670;
    }
L_089E5670:
    ctx.gpr[31] = (0x089E5678u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E5678u) goto L_089E5678;
    return;
L_089E5678:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E5680;
    }
L_089E5680:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_089E56C0;
    }
    goto L_089E5690;
L_089E5690:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089E569Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x089E569Cu) goto L_089E569C;
    return;
L_089E569C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E56B4;
      }
      goto L_089E56A8;
    }
L_089E56A8:
    ctx.gpr[31] = (0x089E56B0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x089E56B0u) goto L_089E56B0;
    return;
L_089E56B0:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089E56B4;
L_089E56B4:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_089E56C0;
L_089E56C0:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x089E56D8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24700)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x089E56D8u) goto L_089E56D8;
    return;
L_089E56D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x089E5704u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E5704u) goto L_089E5704;
    return;
L_089E5704:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x089E5738u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 398u, 0x0887A628u>(ctx, &aot_mem) && ctx.pc == 0x089E5738u) goto L_089E5738;
    return;
L_089E5738:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E5748;
    }
L_089E5748:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E5754;
    }
L_089E5754:
    ctx.gpr[31] = (0x089E575Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E575Cu) goto L_089E575C;
    return;
L_089E575C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E5764;
    }
L_089E5764:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089E5780u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E5780u) goto L_089E5780;
    return;
L_089E5780:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E5790u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089E5790u) goto L_089E5790;
    return;
L_089E5790:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089E57EC;
      }
      goto L_089E57A0;
    }
L_089E57A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089E57D0;
      }
      goto L_089E57AC;
    }
L_089E57AC:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089E57C8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 537u, 0x089BA35Cu>(ctx, &aot_mem) && ctx.pc == 0x089E57C8u) goto L_089E57C8;
    return;
L_089E57C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E57EC;
      }
      goto L_089E57D0;
    }
L_089E57D0:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(200));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E57ECu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 537u, 0x089BA35Cu>(ctx, &aot_mem) && ctx.pc == 0x089E57ECu) goto L_089E57EC;
    return;
L_089E57EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E57FC;
    }
L_089E57FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E5808;
    }
L_089E5808:
    ctx.gpr[31] = (0x089E5810u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E5810u) goto L_089E5810;
    return;
L_089E5810:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E5818;
    }
L_089E5818:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x089E5824u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 494u, 0x088EF0C0u>(ctx, &aot_mem) && ctx.pc == 0x089E5824u) goto L_089E5824;
    return;
L_089E5824:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E5834;
    }
L_089E5834:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E5840;
    }
L_089E5840:
    ctx.gpr[31] = (0x089E5848u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E5848u) goto L_089E5848;
    return;
L_089E5848:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E5850;
    }
L_089E5850:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E5868u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E5868u) goto L_089E5868;
    return;
L_089E5868:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    ctx.gpr[31] = (0x089E589Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 295u, 0x089D61ECu>(ctx, &aot_mem) && ctx.pc == 0x089E589Cu) goto L_089E589C;
    return;
L_089E589C:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13820)));
    ctx.gpr[31] = (0x089E58B8u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 390u, 0x088724BCu>(ctx, &aot_mem) && ctx.pc == 0x089E58B8u) goto L_089E58B8;
    return;
L_089E58B8:
    ctx.gpr[17] = (0u | 6u);
    ctx.gpr[19] = (0u | 0u);
    goto L_089E58C0;
L_089E58C0:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 5u);
      if (branch_taken) {
          goto L_089E5968;
      }
      goto L_089E58CC;
    }
L_089E58CC:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_089E5968;
      }
      goto L_089E58D4;
    }
L_089E58D4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5968;
      }
      goto L_089E58DC;
    }
L_089E58DC:
    ctx.gpr[31] = (0x089E58E4u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(194)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 391u, 0x08A9DF70u>(ctx, &aot_mem) && ctx.pc == 0x089E58E4u) goto L_089E58E4;
    return;
L_089E58E4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089E5910;
      }
      goto L_089E58FC;
    }
L_089E58FC:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089E5910;
L_089E5910:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089E5928u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E5928u) goto L_089E5928;
    return;
L_089E5928:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E595C;
      }
      goto L_089E5930;
    }
L_089E5930:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089E5958;
      }
      goto L_089E5944;
    }
L_089E5944:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089E5958;
L_089E5958:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    goto L_089E595C;
L_089E595C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
      if (branch_taken) {
          goto L_089E58C0;
      }
      goto L_089E5968;
    }
L_089E5968:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089E5990;
      }
      goto L_089E597C;
    }
L_089E597C:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089E5990;
L_089E5990:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089E59A8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E59A8u) goto L_089E59A8;
    return;
L_089E59A8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E59E0;
      }
      goto L_089E59B0;
    }
L_089E59B0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[18] = (0u | 7u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089E59DC;
      }
      goto L_089E59C8;
    }
L_089E59C8:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089E59DC;
L_089E59DC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    goto L_089E59E0;
L_089E59E0:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x089E59ECu);
    ctx.gpr[4] = (0u | 2160u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 240u, 0x0899D998u>(ctx, &aot_mem) && ctx.pc == 0x089E59ECu) goto L_089E59EC;
    return;
L_089E59EC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_089E5A10;
      }
      goto L_089E59F8;
    }
L_089E59F8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089E5A08u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 143u, 0x089FD478u>(ctx, &aot_mem) && ctx.pc == 0x089E5A08u) goto L_089E5A08;
    return;
L_089E5A08:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 2u);
    goto L_089E5A10;
L_089E5A10:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(428), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (65534u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 17u);
    ctx.gpr[4] = (ctx.gpr[6] | ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(412)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (65504u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (2269u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E5A94;
      }
      goto L_089E5A84;
    }
L_089E5A84:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089E5A90u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x089E5A90u) goto L_089E5A90;
    return;
L_089E5A90:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089E5A94;
L_089E5A94:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(880));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089E5AF8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x089E5AF8u) goto L_089E5AF8;
    return;
L_089E5AF8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(880)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(884)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(888)));
    ctx.gpr[31] = (0x089E5B0Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x089E5B0Cu) goto L_089E5B0C;
    return;
L_089E5B0C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089E5B18u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 507u, 0x08882600u>(ctx, &aot_mem) && ctx.pc == 0x089E5B18u) goto L_089E5B18;
    return;
L_089E5B18:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13820)));
    ctx.gpr[31] = (0x089E5B28u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 281u, 0x08871AF4u>(ctx, &aot_mem) && ctx.pc == 0x089E5B28u) goto L_089E5B28;
    return;
L_089E5B28:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(326), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5B44;
      }
      goto L_089E5B38;
    }
L_089E5B38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] | 4096u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_089E5B44;
L_089E5B44:
    ctx.gpr[31] = (0x089E5B4Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x089E5B4Cu) goto L_089E5B4C;
    return;
L_089E5B4C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7020)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7020), ctx.gpr[6]);
    ctx.gpr[31] = (0x089E5B6Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 472u, 0x08AFDFC8u>(ctx, &aot_mem) && ctx.pc == 0x089E5B6Cu) goto L_089E5B6C;
    return;
L_089E5B6C:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E5B84u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x089E5B84u) goto L_089E5B84;
    return;
L_089E5B84:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5BA8;
      }
      goto L_089E5B90;
    }
L_089E5B90:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E5BA8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16512));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 447u, 0x08957150u>(ctx, &aot_mem) && ctx.pc == 0x089E5BA8u) goto L_089E5BA8;
    return;
L_089E5BA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E5BB8;
    }
L_089E5BB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E5BC4;
    }
L_089E5BC4:
    ctx.gpr[31] = (0x089E5BCCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E5BCCu) goto L_089E5BCC;
    return;
L_089E5BCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E5BD4;
    }
L_089E5BD4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E5BECu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E5BECu) goto L_089E5BEC;
    return;
L_089E5BEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E5BFCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089E5BFCu) goto L_089E5BFC;
    return;
L_089E5BFC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 31u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089E5C2Cu);
    ctx.gpr[5] = (0u | 35u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 881u, 0x08892EE0u>(ctx, &aot_mem) && ctx.pc == 0x089E5C2Cu) goto L_089E5C2C;
    return;
L_089E5C2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E5C3C;
    }
L_089E5C3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E5C48;
    }
L_089E5C48:
    ctx.gpr[31] = (0x089E5C50u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E5C50u) goto L_089E5C50;
    return;
L_089E5C50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E5C58;
    }
L_089E5C58:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x089E5C74u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E5C74u) goto L_089E5C74;
    return;
L_089E5C74:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089E5CA4;
      }
      goto L_089E5C98;
    }
L_089E5C98:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_089E5CA4;
L_089E5CA4:
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E5CC0;
      }
      goto L_089E5CB4;
    }
L_089E5CB4:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_089E5CC0;
L_089E5CC0:
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E5CDC;
      }
      goto L_089E5CD0;
    }
L_089E5CD0:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_089E5CDC;
L_089E5CDC:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[31] = (0x089E5CF8u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 239u, 0x089311ACu>(ctx, &aot_mem) && ctx.pc == 0x089E5CF8u) goto L_089E5CF8;
    return;
L_089E5CF8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5D04;
      }
      goto L_089E5D00;
    }
L_089E5D00:
    ctx.gpr[17] = (0u | 1u);
    goto L_089E5D04;
L_089E5D04:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_089E5D30;
      }
      goto L_089E5D28;
    }
L_089E5D28:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_089E5D80;
      }
      goto L_089E5D30;
    }
L_089E5D30:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089E5D60;
    }
    goto L_089E5D4C;
L_089E5D4C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E5D80;
      }
      goto L_089E5D60;
    }
L_089E5D60:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5D80;
      }
      goto L_089E5D7C;
    }
L_089E5D7C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089E5D80;
L_089E5D80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E5D90;
    }
L_089E5D90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E5D9C;
    }
L_089E5D9C:
    ctx.gpr[31] = (0x089E5DA4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E5DA4u) goto L_089E5DA4;
    return;
L_089E5DA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E5DAC;
    }
L_089E5DAC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089E5DC8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E5DC8u) goto L_089E5DC8;
    return;
L_089E5DC8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    ctx.gpr[31] = (0x089E5DD8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x089E5DD8u) goto L_089E5DD8;
    return;
L_089E5DD8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(896), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(900), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(904), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(896));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E5E24;
    }
L_089E5E24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E5E30;
    }
L_089E5E30:
    ctx.gpr[31] = (0x089E5E38u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E5E38u) goto L_089E5E38;
    return;
L_089E5E38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E5E40;
    }
L_089E5E40:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E5E5Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E5E5Cu) goto L_089E5E5C;
    return;
L_089E5E5C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E5E6Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x089E5E6Cu) goto L_089E5E6C;
    return;
L_089E5E6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089E5E88;
      }
      goto L_089E5E78;
    }
L_089E5E78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089E5E98;
      }
      goto L_089E5E88;
    }
L_089E5E88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_089E5E98;
L_089E5E98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E5EA8;
    }
L_089E5EA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E5EB4;
    }
L_089E5EB4:
    ctx.gpr[31] = (0x089E5EBCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E5EBCu) goto L_089E5EBC;
    return;
L_089E5EBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E5EC4;
    }
L_089E5EC4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E5EDCu);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E5EDCu) goto L_089E5EDC;
    return;
L_089E5EDC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E5EECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x089E5EECu) goto L_089E5EEC;
    return;
L_089E5EEC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(685)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089E5EFC;
      }
      goto L_089E5EF8;
    }
L_089E5EF8:
    ctx.gpr[4] = (0u | 1u);
    goto L_089E5EFC;
L_089E5EFC:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_089E5F28;
      }
      goto L_089E5F20;
    }
L_089E5F20:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E5F78;
      }
      goto L_089E5F28;
    }
L_089E5F28:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089E5F58;
    }
    goto L_089E5F44;
L_089E5F44:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E5F78;
      }
      goto L_089E5F58;
    }
L_089E5F58:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F78;
      }
      goto L_089E5F74;
    }
L_089E5F74:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089E5F78;
L_089E5F78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E5F88;
    }
L_089E5F88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5F9C;
      }
      goto L_089E5F94;
    }
L_089E5F94:
    ctx.gpr[31] = (0x089E5F9Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E5F9Cu) goto L_089E5F9C;
    return;
L_089E5F9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E5FCC;
      }
      goto L_089E5FA4;
    }
L_089E5FA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5FC8;
      }
      goto L_089E5FB4;
    }
L_089E5FB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5FC8;
      }
      goto L_089E5FC0;
    }
L_089E5FC0:
    ctx.gpr[31] = (0x089E5FC8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E5FC8u) goto L_089E5FC8;
    return;
L_089E5FC8:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089E5FCC;
L_089E5FCC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(916)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(920)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(924)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(928)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(932)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(936)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(940)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(944)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(948)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(952)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(956)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(960));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E6000:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-384));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-905));
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(100) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 106u, 0x089E87A4u>(ctx, &aot_mem); return;
      }
      goto L_089E6044;
    }
L_089E6044:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-905));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-4704)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E6060:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_089E60A0;
    }
    goto L_089E6070;
L_089E6070:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089E607Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x089E607Cu) goto L_089E607C;
    return;
L_089E607C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6094;
      }
      goto L_089E6088;
    }
L_089E6088:
    ctx.gpr[31] = (0x089E6090u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x089E6090u) goto L_089E6090;
    return;
L_089E6090:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089E6094;
L_089E6094:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_089E60A0;
L_089E60A0:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x089E60B8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x089E60B8u) goto L_089E60B8;
    return;
L_089E60B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089E60FC;
      }
      goto L_089E60D0;
    }
L_089E60D0:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x089E60DCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x089E60DCu) goto L_089E60DC;
    return;
L_089E60DC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E60F4;
      }
      goto L_089E60E8;
    }
L_089E60E8:
    ctx.gpr[31] = (0x089E60F0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x089E60F0u) goto L_089E60F0;
    return;
L_089E60F0:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_089E60F4;
L_089E60F4:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    goto L_089E60FC;
L_089E60FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x089E6118u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24700)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x089E6118u) goto L_089E6118;
    return;
L_089E6118:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E6144u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E6144u) goto L_089E6144;
    return;
L_089E6144:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[31] = (0x089E615Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 412u, 0x0887A880u>(ctx, &aot_mem) && ctx.pc == 0x089E615Cu) goto L_089E615C;
    return;
L_089E615C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E6164;
    }
L_089E6164:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x089E6180u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E6180u) goto L_089E6180;
    return;
L_089E6180:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[17] = ctx.fpr[16] - ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[15] = ctx.fpr[14] - ctx.fpr[13];
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[12];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[17]));
    ctx.fpr[13] = ctx.fpr[18] - ctx.fpr[12];
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = ctx.fpr[18] + ctx.fpr[12];
      if (branch_taken) {
          goto L_089E61C4;
      }
      goto L_089E61B8;
    }
L_089E61B8:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_089E61C4;
L_089E61C4:
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E61E0;
      }
      goto L_089E61D4;
    }
L_089E61D4:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_089E61E0;
L_089E61E0:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E61FC;
      }
      goto L_089E61F0;
    }
L_089E61F0:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_089E61FC;
L_089E61FC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[31] = (0x089E623Cu);
    ctx.gpr[11] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 400u, 0x088C297Cu>(ctx, &aot_mem) && ctx.pc == 0x089E623Cu) goto L_089E623C;
    return;
L_089E623C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(160))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089E624C;
      }
      goto L_089E6248;
    }
L_089E6248:
    ctx.gpr[17] = (0u | 1u);
    goto L_089E624C;
L_089E624C:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_089E6278;
      }
      goto L_089E6270;
    }
L_089E6270:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_089E62C8;
      }
      goto L_089E6278;
    }
L_089E6278:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089E62A8;
    }
    goto L_089E6294;
L_089E6294:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E62C8;
      }
      goto L_089E62A8;
    }
L_089E62A8:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E62C8;
      }
      goto L_089E62C4;
    }
L_089E62C4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089E62C8;
L_089E62C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E62D0;
    }
L_089E62D0:
    ctx.gpr[31] = (0x089E62D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 719u, 0x0891B314u>(ctx, &aot_mem) && ctx.pc == 0x089E62D8u) goto L_089E62D8;
    return;
L_089E62D8:
    ctx.gpr[31] = (0x089E62E0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 711u, 0x089CAF64u>(ctx, &aot_mem) && ctx.pc == 0x089E62E0u) goto L_089E62E0;
    return;
L_089E62E0:
    ctx.gpr[31] = (0x089E62E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 720u, 0x0891B328u>(ctx, &aot_mem) && ctx.pc == 0x089E62E8u) goto L_089E62E8;
    return;
L_089E62E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E62F0;
    }
L_089E62F0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089E630Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E630Cu) goto L_089E630C;
    return;
L_089E630C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    ctx.gpr[31] = (0x089E631Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x089E631Cu) goto L_089E631C;
    return;
L_089E631C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[6] = (16968u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[16];
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[16];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[16];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E6380;
    }
L_089E6380:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E639Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E639Cu) goto L_089E639C;
    return;
L_089E639C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E63ACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x089E63ACu) goto L_089E63AC;
    return;
L_089E63AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089E63F8;
      }
      goto L_089E63B8;
    }
L_089E63B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6430;
      }
      goto L_089E63C8;
    }
L_089E63C8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 11u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[31] = (0x089E63F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 145u, 0x08A0D328u>(ctx, &aot_mem) && ctx.pc == 0x089E63F0u) goto L_089E63F0;
    return;
L_089E63F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6430;
      }
      goto L_089E63F8;
    }
L_089E63F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E6430;
      }
      goto L_089E6408;
    }
L_089E6408:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 11u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[31] = (0x089E6430u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 157u, 0x08A0D3C0u>(ctx, &aot_mem) && ctx.pc == 0x089E6430u) goto L_089E6430;
    return;
L_089E6430:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E6438;
    }
L_089E6438:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E6450u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E6450u) goto L_089E6450;
    return;
L_089E6450:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089E6464u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 150u, 0x08864AC0u>(ctx, &aot_mem) && ctx.pc == 0x089E6464u) goto L_089E6464;
    return;
L_089E6464:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(63));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089E6480u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 144u, 0x08864A54u>(ctx, &aot_mem) && ctx.pc == 0x089E6480u) goto L_089E6480;
    return;
L_089E6480:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E6488;
    }
L_089E6488:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x089E64A4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E64A4u) goto L_089E64A4;
    return;
L_089E64A4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089E64D4;
      }
      goto L_089E64C4;
    }
L_089E64C4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089E64D0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x089E64D0u) goto L_089E64D0;
    return;
L_089E64D0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089E64D4;
L_089E64D4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[31] = (0x089E64FCu);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 156u, 0x088C8C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E64FCu) goto L_089E64FC;
    return;
L_089E64FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E6504;
    }
L_089E6504:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E651Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E651Cu) goto L_089E651C;
    return;
L_089E651C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E653C;
      }
      goto L_089E6528;
    }
L_089E6528:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(9096));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(333), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E6548;
      }
      goto L_089E653C;
    }
L_089E653C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9096));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(333), static_cast<std::uint8_t>(0u));
    goto L_089E6548;
L_089E6548:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E6550;
    }
L_089E6550:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E656Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E656Cu) goto L_089E656C;
    return;
L_089E656C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E657Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x089E657Cu) goto L_089E657C;
    return;
L_089E657C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089E6594;
      }
      goto L_089E6588;
    }
L_089E6588:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(685), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E6598;
      }
      goto L_089E6594;
    }
L_089E6594:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(685), static_cast<std::uint8_t>(0u));
    goto L_089E6598;
L_089E6598:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E65A0;
    }
L_089E65A0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[31] = (0x089E65BCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E65BCu) goto L_089E65BC;
    return;
L_089E65BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089E65ECu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 618u, 0x08976D7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E65ECu) goto L_089E65EC;
    return;
L_089E65EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E65F4;
    }
L_089E65F4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E660Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E660Cu) goto L_089E660C;
    return;
L_089E660C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E661Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x089E661Cu) goto L_089E661C;
    return;
L_089E661C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E6664;
      }
      goto L_089E662C;
    }
L_089E662C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6650;
      }
      goto L_089E6640;
    }
L_089E6640:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[4] = (ctx.gpr[4] | 128u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1509), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E66A8;
      }
      goto L_089E6650;
    }
L_089E6650:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1509), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E66A8;
      }
      goto L_089E6664;
    }
L_089E6664:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E66A8;
      }
      goto L_089E6674;
    }
L_089E6674:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6698;
      }
      goto L_089E6688;
    }
L_089E6688:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1332))))));
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1332), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E66A8;
      }
      goto L_089E6698;
    }
L_089E6698:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1332))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1332), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089E66A8;
L_089E66A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E66B0;
    }
L_089E66B0:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 12u);
    ctx.gpr[31] = (0x089E66CCu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E66CCu) goto L_089E66CC;
    return;
L_089E66CC:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089E66FC;
      }
      goto L_089E66EC;
    }
L_089E66EC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089E66F8u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x089E66F8u) goto L_089E66F8;
    return;
L_089E66F8:
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089E66FC;
L_089E66FC:
    ctx.gpr[4] = (2269u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_089E6728;
      }
      goto L_089E6724;
    }
L_089E6724:
    ctx.fpr[15] = std::bit_cast<float>(0u);
    goto L_089E6728;
L_089E6728:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_089E6764;
      }
      goto L_089E673C;
    }
L_089E673C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(164), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(165), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(166), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 255u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(167), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E6774;
      }
      goto L_089E6764;
    }
L_089E6764:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(164), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(165), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(166), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(167), static_cast<std::uint8_t>(0u));
    goto L_089E6774;
L_089E6774:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[6] & 65535u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(164));
    ctx.gpr[31] = (0x089E67BCu);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 607u, 0x089D2784u>(ctx, &aot_mem) && ctx.pc == 0x089E67BCu) goto L_089E67BC;
    return;
L_089E67BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E67C4;
    }
L_089E67C4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E67E0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E67E0u) goto L_089E67E0;
    return;
L_089E67E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E67F0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089E67F0u) goto L_089E67F0;
    return;
L_089E67F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089E680C;
      }
      goto L_089E67FC;
    }
L_089E67FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] | 1024u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089E681C;
      }
      goto L_089E680C;
    }
L_089E680C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1025));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    goto L_089E681C;
L_089E681C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E6824;
    }
L_089E6824:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089E6840u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E6840u) goto L_089E6840;
    return;
L_089E6840:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x089E6850u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x089E6850u) goto L_089E6850;
    return;
L_089E6850:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x089E68ACu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089E68ACu) goto L_089E68AC;
    return;
L_089E68AC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16329u << 16u);
      if (branch_taken) {
          goto L_089E68D4;
      }
      goto L_089E68C0;
    }
L_089E68C0:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (16329u << 16u);
    goto L_089E68D4;
L_089E68D4:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E690C;
      }
      goto L_089E68FC;
    }
L_089E68FC:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    goto L_089E690C;
L_089E690C:
    ctx.gpr[31] = (0x089E6914u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A287ACu>(ctx, &aot_mem) && ctx.pc == 0x089E6914u) goto L_089E6914;
    return;
L_089E6914:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E691C;
    }
L_089E691C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089E6938u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E6938u) goto L_089E6938;
    return;
L_089E6938:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E6948u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x089E6948u) goto L_089E6948;
    return;
L_089E6948:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089E695Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 467u, 0x0897AF04u>(ctx, &aot_mem) && ctx.pc == 0x089E695Cu) goto L_089E695C;
    return;
L_089E695C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6968;
      }
      goto L_089E6964;
    }
L_089E6964:
    ctx.gpr[17] = (0u | 1u);
    goto L_089E6968;
L_089E6968:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_089E6994;
      }
      goto L_089E698C;
    }
L_089E698C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_089E69E4;
      }
      goto L_089E6994;
    }
L_089E6994:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089E69C4;
    }
    goto L_089E69B0;
L_089E69B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E69E4;
      }
      goto L_089E69C4;
    }
L_089E69C4:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E69E4;
      }
      goto L_089E69E0;
    }
L_089E69E0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089E69E4;
L_089E69E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E69EC;
    }
L_089E69EC:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089E6A08u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E6A08u) goto L_089E6A08;
    return;
L_089E6A08:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089E6A38;
      }
      goto L_089E6A28;
    }
L_089E6A28:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089E6A34u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x089E6A34u) goto L_089E6A34;
    return;
L_089E6A34:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089E6A38;
L_089E6A38:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-17412)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-17412));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[10] = (0u | 228u);
    ctx.gpr[11] = (0u | 2048u);
    ctx.gpr[31] = (0x089E6A9Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 295u, 0x08825BFCu>(ctx, &aot_mem) && ctx.pc == 0x089E6A9Cu) goto L_089E6A9C;
    return;
L_089E6A9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E6AA4;
    }
L_089E6AA4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E6AC0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E6AC0u) goto L_089E6AC0;
    return;
L_089E6AC0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E6AD0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x089E6AD0u) goto L_089E6AD0;
    return;
L_089E6AD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 31u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E6AF8;
    }
L_089E6AF8:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E6B10u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E6B10u) goto L_089E6B10;
    return;
L_089E6B10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E6B20u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089E6B20u) goto L_089E6B20;
    return;
L_089E6B20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (ctx.gpr[4] ^ 20u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 5u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6B4C;
      }
      goto L_089E6B44;
    }
L_089E6B44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089E6B50;
      }
      goto L_089E6B4C;
    }
L_089E6B4C:
    ctx.gpr[4] = (0u | 1u);
    goto L_089E6B50;
L_089E6B50:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_089E6B7C;
      }
      goto L_089E6B74;
    }
L_089E6B74:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E6BCC;
      }
      goto L_089E6B7C;
    }
L_089E6B7C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089E6BAC;
    }
    goto L_089E6B98;
L_089E6B98:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E6BCC;
      }
      goto L_089E6BAC;
    }
L_089E6BAC:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6BCC;
      }
      goto L_089E6BC8;
    }
L_089E6BC8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089E6BCC;
L_089E6BCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E6BD4;
    }
L_089E6BD4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x089E6BF0u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x089E6BF0u) goto L_089E6BF0;
    return;
L_089E6BF0:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6C48;
      }
      goto L_089E6C00;
    }
L_089E6C00:
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 65 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089E6C34;
      }
      goto L_089E6C14;
    }
L_089E6C14:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 91 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6C34;
      }
      goto L_089E6C24;
    }
L_089E6C24:
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_089E6C34;
L_089E6C34:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E6C00;
      }
      goto L_089E6C48;
    }
L_089E6C48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x089E6C64u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x089E6C64u) goto L_089E6C64;
    return;
L_089E6C64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E6C6C;
    }
L_089E6C6C:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E6C84u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E6C84u) goto L_089E6C84;
    return;
L_089E6C84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E6C8C;
    }
L_089E6C8C:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E6CA4u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E6CA4u) goto L_089E6CA4;
    return;
L_089E6CA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E6CAC;
    }
L_089E6CAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E6CB4;
    }
L_089E6CB4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089E6CD0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E6CD0u) goto L_089E6CD0;
    return;
L_089E6CD0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x089E6CE8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 134u, 0x088649A4u>(ctx, &aot_mem) && ctx.pc == 0x089E6CE8u) goto L_089E6CE8;
    return;
L_089E6CE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E6CF0;
    }
L_089E6CF0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E6D0Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E6D0Cu) goto L_089E6D0C;
    return;
L_089E6D0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E6D1Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x089E6D1Cu) goto L_089E6D1C;
    return;
L_089E6D1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089E6D38;
      }
      goto L_089E6D28;
    }
L_089E6D28:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(599), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E6D48;
      }
      goto L_089E6D38;
    }
L_089E6D38:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(599), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089E6D48;
L_089E6D48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E6D50;
    }
L_089E6D50:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E6D68u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E6D68u) goto L_089E6D68;
    return;
L_089E6D68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[31] = (0x089E6D78u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 511u, 0x08ACE394u>(ctx, &aot_mem) && ctx.pc == 0x089E6D78u) goto L_089E6D78;
    return;
L_089E6D78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E6D80;
    }
L_089E6D80:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E6D98u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E6D98u) goto L_089E6D98;
    return;
L_089E6D98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6DB4;
      }
      goto L_089E6DA4;
    }
L_089E6DA4:
    ctx.gpr[31] = (0x089E6DACu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 116u, 0x08A88850u>(ctx, &aot_mem) && ctx.pc == 0x089E6DACu) goto L_089E6DAC;
    return;
L_089E6DAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6DBC;
      }
      goto L_089E6DB4;
    }
L_089E6DB4:
    ctx.gpr[31] = (0x089E6DBCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 116u, 0x08A88850u>(ctx, &aot_mem) && ctx.pc == 0x089E6DBCu) goto L_089E6DBC;
    return;
L_089E6DBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E6DC4;
    }
L_089E6DC4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x089E6DE0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E6DE0u) goto L_089E6DE0;
    return;
L_089E6DE0:
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17680)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089E6E44;
      }
      goto L_089E6E04;
    }
L_089E6E04:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x089E6E28u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 57u, 0x08A28888u>(ctx, &aot_mem) && ctx.pc == 0x089E6E28u) goto L_089E6E28;
    return;
L_089E6E28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6E38;
      }
      goto L_089E6E30;
    }
L_089E6E30:
    ctx.gpr[31] = (0x089E6E38u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 538u, 0x089D22CCu>(ctx, &aot_mem) && ctx.pc == 0x089E6E38u) goto L_089E6E38;
    return;
L_089E6E38:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E6E04;
      }
      goto L_089E6E44;
    }
L_089E6E44:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17676)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6E94;
      }
      goto L_089E6E54;
    }
L_089E6E54:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x089E6E78u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 57u, 0x08A28888u>(ctx, &aot_mem) && ctx.pc == 0x089E6E78u) goto L_089E6E78;
    return;
L_089E6E78:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6E88;
      }
      goto L_089E6E80;
    }
L_089E6E80:
    ctx.gpr[31] = (0x089E6E88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 538u, 0x089D22CCu>(ctx, &aot_mem) && ctx.pc == 0x089E6E88u) goto L_089E6E88;
    return;
L_089E6E88:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E6E54;
      }
      goto L_089E6E94;
    }
L_089E6E94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E6E9C;
    }
L_089E6E9C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E6EB4u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E6EB4u) goto L_089E6EB4;
    return;
L_089E6EB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6ECC;
      }
      goto L_089E6EC0;
    }
L_089E6EC0:
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7788), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089E6ED8;
      }
      goto L_089E6ECC;
    }
L_089E6ECC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-7788), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089E6ED8;
L_089E6ED8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E6EE0;
    }
L_089E6EE0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E6EF8u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E6EF8u) goto L_089E6EF8;
    return;
L_089E6EF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[31] = (0x089E6F0Cu);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 9u, 0x0893C070u>(ctx, &aot_mem) && ctx.pc == 0x089E6F0Cu) goto L_089E6F0C;
    return;
L_089E6F0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6F18;
      }
      goto L_089E6F14;
    }
L_089E6F14:
    ctx.gpr[17] = (0u | 1u);
    goto L_089E6F18;
L_089E6F18:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_089E6F44;
      }
      goto L_089E6F3C;
    }
L_089E6F3C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_089E6F94;
      }
      goto L_089E6F44;
    }
L_089E6F44:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089E6F74;
    }
    goto L_089E6F60;
L_089E6F60:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E6F94;
      }
      goto L_089E6F74;
    }
L_089E6F74:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6F94;
      }
      goto L_089E6F90;
    }
L_089E6F90:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089E6F94;
L_089E6F94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E6F9C;
    }
L_089E6F9C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E6FB4u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E6FB4u) goto L_089E6FB4;
    return;
L_089E6FB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[31] = (0x089E6FC8u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 14u, 0x0893C0BCu>(ctx, &aot_mem) && ctx.pc == 0x089E6FC8u) goto L_089E6FC8;
    return;
L_089E6FC8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6FD4;
      }
      goto L_089E6FD0;
    }
L_089E6FD0:
    ctx.gpr[17] = (0u | 1u);
    goto L_089E6FD4;
L_089E6FD4:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_089E7000;
      }
      goto L_089E6FF8;
    }
L_089E6FF8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_089E7050;
      }
      goto L_089E7000;
    }
L_089E7000:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089E7030;
    }
    goto L_089E701C;
L_089E701C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E7050;
      }
      goto L_089E7030;
    }
L_089E7030:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7050;
      }
      goto L_089E704C;
    }
L_089E704C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089E7050;
L_089E7050:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E7058;
    }
L_089E7058:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x089E7074u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E7074u) goto L_089E7074;
    return;
L_089E7074:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x089E7090u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 238u, 0x089E1650u>(ctx, &aot_mem) && ctx.pc == 0x089E7090u) goto L_089E7090;
    return;
L_089E7090:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E7098;
    }
L_089E7098:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E70B0u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E70B0u) goto L_089E70B0;
    return;
L_089E70B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E70C8;
      }
      goto L_089E70BC;
    }
L_089E70BC:
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7756), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089E70D4;
      }
      goto L_089E70C8;
    }
L_089E70C8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-7756), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089E70D4;
L_089E70D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E70DC;
    }
L_089E70DC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E70F4u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E70F4u) goto L_089E70F4;
    return;
L_089E70F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x089E7120u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 682u, 0x0899F844u>(ctx, &aot_mem) && ctx.pc == 0x089E7120u) goto L_089E7120;
    return;
L_089E7120:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E7128;
    }
L_089E7128:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x089E7144u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E7144u) goto L_089E7144;
    return;
L_089E7144:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089E7174;
      }
      goto L_089E7168;
    }
L_089E7168:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_089E7174;
L_089E7174:
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E7190;
      }
      goto L_089E7184;
    }
L_089E7184:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_089E7190;
L_089E7190:
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E71AC;
      }
      goto L_089E71A0;
    }
L_089E71A0:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_089E71AC;
L_089E71AC:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[31] = (0x089E71C4u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 23u, 0x088C415Cu>(ctx, &aot_mem) && ctx.pc == 0x089E71C4u) goto L_089E71C4;
    return;
L_089E71C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E71CC;
    }
L_089E71CC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E71E4u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E71E4u) goto L_089E71E4;
    return;
L_089E71E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[31] = (0x089E71F4u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 19u, 0x0893C128u>(ctx, &aot_mem) && ctx.pc == 0x089E71F4u) goto L_089E71F4;
    return;
L_089E71F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E71FC;
    }
L_089E71FC:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089E7218u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E7218u) goto L_089E7218;
    return;
L_089E7218:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089E7248;
      }
      goto L_089E7238;
    }
L_089E7238:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089E7244u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x089E7244u) goto L_089E7244;
    return;
L_089E7244:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089E7248;
L_089E7248:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
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
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x089E727Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 627u, 0x08957D28u>(ctx, &aot_mem) && ctx.pc == 0x089E727Cu) goto L_089E727C;
    return;
L_089E727C:
    ctx.gpr[31] = (0x089E7284u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 217u, 0x089E1470u>(ctx, &aot_mem) && ctx.pc == 0x089E7284u) goto L_089E7284;
    return;
L_089E7284:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089E7290;
      }
      goto L_089E7290;
    }
L_089E7290:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x089E72B0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 227u, 0x089E1584u>(ctx, &aot_mem) && ctx.pc == 0x089E72B0u) goto L_089E72B0;
    return;
L_089E72B0:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E72C8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x089E72C8u) goto L_089E72C8;
    return;
L_089E72C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E72D0;
    }
L_089E72D0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E72E8u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E72E8u) goto L_089E72E8;
    return;
L_089E72E8:
    ctx.gpr[31] = (0x089E72F0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 233u, 0x089E1600u>(ctx, &aot_mem) && ctx.pc == 0x089E72F0u) goto L_089E72F0;
    return;
L_089E72F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E72F8;
    }
L_089E72F8:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E7314u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E7314u) goto L_089E7314;
    return;
L_089E7314:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[16] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7360;
      }
      goto L_089E7344;
    }
L_089E7344:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2094))))));
    ctx.gpr[5] = (ctx.gpr[5] | 2u);
    ctx.gpr[31] = (0x089E7358u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2094), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 141u, 0x088C4B30u>(ctx, &aot_mem) && ctx.pc == 0x089E7358u) goto L_089E7358;
    return;
L_089E7358:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7374;
      }
      goto L_089E7360;
    }
L_089E7360:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2094))))));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2094), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_089E7374;
L_089E7374:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E737C;
    }
L_089E737C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E7394u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E7394u) goto L_089E7394;
    return;
L_089E7394:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E73A4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089E73A4u) goto L_089E73A4;
    return;
L_089E73A4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E73BC;
      }
      goto L_089E73B4;
    }
L_089E73B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
      if (branch_taken) {
          goto L_089E73C0;
      }
      goto L_089E73BC;
    }
L_089E73BC:
    ctx.gpr[4] = (0u | 0u);
    goto L_089E73C0;
L_089E73C0:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089E73D4u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 509u, 0x08AFE25Cu>(ctx, &aot_mem) && ctx.pc == 0x089E73D4u) goto L_089E73D4;
    return;
L_089E73D4:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E73ECu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x089E73ECu) goto L_089E73EC;
    return;
L_089E73EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E73F4;
    }
L_089E73F4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E740Cu);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E740Cu) goto L_089E740C;
    return;
L_089E740C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (2269u << 16u);
      if (branch_taken) {
          goto L_089E7490;
      }
      goto L_089E7440;
    }
L_089E7440:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x089E747Cu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 509u, 0x08AFE25Cu>(ctx, &aot_mem) && ctx.pc == 0x089E747Cu) goto L_089E747C;
    return;
L_089E747C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E7490u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x089E7490u) goto L_089E7490;
    return;
L_089E7490:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E7498;
    }
L_089E7498:
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089E74ACu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x089E74ACu) goto L_089E74AC;
    return;
L_089E74AC:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[17] = (ctx.gpr[2] - ctx.gpr[17]);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E74D0u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E74D0u) goto L_089E74D0;
    return;
L_089E74D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E74E4;
      }
      goto L_089E74DC;
    }
L_089E74DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_089E74E8;
      }
      goto L_089E74E4;
    }
L_089E74E4:
    ctx.gpr[18] = (0u | 0u);
    goto L_089E74E8;
L_089E74E8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_089E7528;
    }
    goto L_089E74F8;
L_089E74F8:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x089E7504u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x089E7504u) goto L_089E7504;
    return;
L_089E7504:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E751C;
      }
      goto L_089E7510;
    }
L_089E7510:
    ctx.gpr[31] = (0x089E7518u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x089E7518u) goto L_089E7518;
    return;
L_089E7518:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_089E751C;
L_089E751C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_089E7528;
L_089E7528:
    ctx.gpr[19] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x089E7540u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24700)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x089E7540u) goto L_089E7540;
    return;
L_089E7540:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(168));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089E755Cu);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x089E755Cu) goto L_089E755C;
    return;
L_089E755C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (0u < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089E7584u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9096));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 355u, 0x08AC6A34u>(ctx, &aot_mem) && ctx.pc == 0x089E7584u) goto L_089E7584;
    return;
L_089E7584:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E758C;
    }
L_089E758C:
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089E75A0u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x089E75A0u) goto L_089E75A0;
    return;
L_089E75A0:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[17] = (ctx.gpr[2] - ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E75C4u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E75C4u) goto L_089E75C4;
    return;
L_089E75C4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_089E7604;
    }
    goto L_089E75D4;
L_089E75D4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x089E75E0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x089E75E0u) goto L_089E75E0;
    return;
L_089E75E0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E75F8;
      }
      goto L_089E75EC;
    }
L_089E75EC:
    ctx.gpr[31] = (0x089E75F4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x089E75F4u) goto L_089E75F4;
    return;
L_089E75F4:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_089E75F8;
L_089E75F8:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_089E7604;
L_089E7604:
    ctx.gpr[18] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x089E761Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24700)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x089E761Cu) goto L_089E761C;
    return;
L_089E761C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(168));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089E7638u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x089E7638u) goto L_089E7638;
    return;
L_089E7638:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[31] = (0x089E7674u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9096));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 390u, 0x08AC6C68u>(ctx, &aot_mem) && ctx.pc == 0x089E7674u) goto L_089E7674;
    return;
L_089E7674:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E767C;
    }
L_089E767C:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089E7694u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E7694u) goto L_089E7694;
    return;
L_089E7694:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17184)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 30 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E79F0;
      }
      goto L_089E76A8;
    }
L_089E76A8:
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x089E76B4u);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089E76B4u) goto L_089E76B4;
    return;
L_089E76B4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17380)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17384)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089E76CCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x089E76CCu) goto L_089E76CC;
    return;
L_089E76CC:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (0u | 1u);
    goto L_089E76E4;
L_089E76E4:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 20 ? 1u : 0u);
      if (branch_taken) {
          goto L_089E784C;
      }
      goto L_089E76F0;
    }
L_089E76F0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E784C;
      }
      goto L_089E76F8;
    }
L_089E76F8:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7552)));
      if (branch_taken) {
          goto L_089E773C;
      }
      goto L_089E7718;
    }
L_089E7718:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089E773C;
      }
      goto L_089E7724;
    }
L_089E7724:
    ctx.gpr[31] = (0x089E772Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 148u, 0x08A28E68u>(ctx, &aot_mem) && ctx.pc == 0x089E772Cu) goto L_089E772C;
    return;
L_089E772C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E773C;
      }
      goto L_089E7734;
    }
L_089E7734:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089E773C;
L_089E773C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089E782C;
      }
      goto L_089E7748;
    }
L_089E7748:
    ctx.gpr[31] = (0x089E7750u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 124u, 0x08A28D44u>(ctx, &aot_mem) && ctx.pc == 0x089E7750u) goto L_089E7750;
    return;
L_089E7750:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E7768;
      }
      goto L_089E7758;
    }
L_089E7758:
    ctx.gpr[31] = (0x089E7760u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 148u, 0x08A28E68u>(ctx, &aot_mem) && ctx.pc == 0x089E7760u) goto L_089E7760;
    return;
L_089E7760:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7828;
      }
      goto L_089E7768;
    }
L_089E7768:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -980 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -953 ? 1u : 0u);
      if (branch_taken) {
          goto L_089E77B0;
      }
      goto L_089E7778;
    }
L_089E7778:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -997 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-996));
      if (branch_taken) {
          goto L_089E77A0;
      }
      goto L_089E7784;
    }
L_089E7784:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -1000 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < -998 ? 1u : 0u);
      if (branch_taken) {
          goto L_089E7810;
      }
      goto L_089E7790;
    }
L_089E7790:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E77A8;
      }
      goto L_089E7798;
    }
L_089E7798:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089E782C;
      }
      goto L_089E77A0;
    }
L_089E77A0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E7798;
      }
      goto L_089E77A8;
    }
L_089E77A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E782C;
      }
      goto L_089E77B0;
    }
L_089E77B0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 131 ? 1u : 0u);
      if (branch_taken) {
          goto L_089E77E8;
      }
      goto L_089E77B8;
    }
L_089E77B8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -974 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-969));
      if (branch_taken) {
          goto L_089E77D8;
      }
      goto L_089E77C4;
    }
L_089E77C4:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-976));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E77A8;
      }
      goto L_089E77D0;
    }
L_089E77D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7798;
      }
      goto L_089E77D8;
    }
L_089E77D8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E77A8;
      }
      goto L_089E77E0;
    }
L_089E77E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7798;
      }
      goto L_089E77E8;
    }
L_089E77E8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 217 ? 1u : 0u);
      if (branch_taken) {
          goto L_089E7810;
      }
      goto L_089E77F0;
    }
L_089E77F0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-131));
      if (branch_taken) {
          goto L_089E7810;
      }
      goto L_089E77F8;
    }
L_089E77F8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-4304)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E7810:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E7820u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5160));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x089E7820u) goto L_089E7820;
    return;
L_089E7820:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089E782C;
      }
      goto L_089E7828;
    }
L_089E7828:
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089E782C;
L_089E782C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E7840;
      }
      goto L_089E783C;
    }
L_089E783C:
    ctx.gpr[18] = (0u | 0u);
    goto L_089E7840;
L_089E7840:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] & 65535u);
      if (branch_taken) {
          goto L_089E76E4;
      }
      goto L_089E784C;
    }
L_089E784C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089E79F0;
      }
      goto L_089E7858;
    }
L_089E7858:
    ctx.gpr[31] = (0x089E7860u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 148u, 0x08A28E68u>(ctx, &aot_mem) && ctx.pc == 0x089E7860u) goto L_089E7860;
    return;
L_089E7860:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E78A0;
      }
      goto L_089E7868;
    }
L_089E7868:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089E7874u);
    ctx.gpr[4] = (0u | 1472u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 510u, 0x0889E8B4u>(ctx, &aot_mem) && ctx.pc == 0x089E7874u) goto L_089E7874;
    return;
L_089E7874:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089E7890;
      }
      goto L_089E7880;
    }
L_089E7880:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E788Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 565u, 0x08A378CCu>(ctx, &aot_mem) && ctx.pc == 0x089E788Cu) goto L_089E788C;
    return;
L_089E788C:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089E7890;
L_089E7890:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1333), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E78C8;
      }
      goto L_089E78A0;
    }
L_089E78A0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089E78ACu);
    ctx.gpr[4] = (0u | 1760u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 510u, 0x0889E8B4u>(ctx, &aot_mem) && ctx.pc == 0x089E78ACu) goto L_089E78AC;
    return;
L_089E78AC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089E78C8;
      }
      goto L_089E78B8;
    }
L_089E78B8:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E78C4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 357u, 0x0880E120u>(ctx, &aot_mem) && ctx.pc == 0x089E78C4u) goto L_089E78C4;
    return;
L_089E78C4:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089E78C8;
L_089E78C8:
    ctx.gpr[4] = (2269u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(320));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089E78F4u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E78F4u) goto L_089E78F4;
    return;
L_089E78F4:
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[31] = (0x089E7954u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A287ACu>(ctx, &aot_mem) && ctx.pc == 0x089E7954u) goto L_089E7954;
    return;
L_089E7954:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089E7960u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 507u, 0x08882600u>(ctx, &aot_mem) && ctx.pc == 0x089E7960u) goto L_089E7960;
    return;
L_089E7960:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(602))))));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(602), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x089E7998u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 206u, 0x089ED510u>(ctx, &aot_mem) && ctx.pc == 0x089E7998u) goto L_089E7998;
    return;
L_089E7998:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(397), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (16656u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(395), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(396), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13820)));
    ctx.gpr[31] = (0x089E79E4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 281u, 0x08871AF4u>(ctx, &aot_mem) && ctx.pc == 0x089E79E4u) goto L_089E79E4;
    return;
L_089E79E4:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(326), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[31] = (0x089E79F0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x089E79F0u) goto L_089E79F0;
    return;
L_089E79F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E79F8;
    }
L_089E79F8:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E7A10u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E7A10u) goto L_089E7A10;
    return;
L_089E7A10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7060)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089E7A28;
      }
      goto L_089E7A24;
    }
L_089E7A24:
    ctx.gpr[4] = (0u | 1u);
    goto L_089E7A28;
L_089E7A28:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_089E7A54;
      }
      goto L_089E7A4C;
    }
L_089E7A4C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E7AA4;
      }
      goto L_089E7A54;
    }
L_089E7A54:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089E7A84;
    }
    goto L_089E7A70;
L_089E7A70:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E7AA4;
      }
      goto L_089E7A84;
    }
L_089E7A84:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7AA4;
      }
      goto L_089E7AA0;
    }
L_089E7AA0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089E7AA4;
L_089E7AA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E7AAC;
    }
L_089E7AAC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E7AC4u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E7AC4u) goto L_089E7AC4;
    return;
L_089E7AC4:
    ctx.gpr[31] = (0x089E7ACCu);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089E7ACCu) goto L_089E7ACC;
    return;
L_089E7ACC:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2084), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E7AD8;
    }
L_089E7AD8:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x089E7AE4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 501u, 0x088EF12Cu>(ctx, &aot_mem) && ctx.pc == 0x089E7AE4u) goto L_089E7AE4;
    return;
L_089E7AE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E7AEC;
    }
L_089E7AEC:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E7B04u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E7B04u) goto L_089E7B04;
    return;
L_089E7B04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E7B14u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x089E7B14u) goto L_089E7B14;
    return;
L_089E7B14:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089E7B28;
      }
      goto L_089E7B24;
    }
L_089E7B24:
    ctx.gpr[4] = (0u | 1u);
    goto L_089E7B28;
L_089E7B28:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_089E7B54;
      }
      goto L_089E7B4C;
    }
L_089E7B4C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E7BA4;
      }
      goto L_089E7B54;
    }
L_089E7B54:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089E7B84;
    }
    goto L_089E7B70;
L_089E7B70:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E7BA4;
      }
      goto L_089E7B84;
    }
L_089E7B84:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7BA4;
      }
      goto L_089E7BA0;
    }
L_089E7BA0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089E7BA4;
L_089E7BA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E7BAC;
    }
L_089E7BAC:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E7BC4u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E7BC4u) goto L_089E7BC4;
    return;
L_089E7BC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E7BD4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x089E7BD4u) goto L_089E7BD4;
    return;
L_089E7BD4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089E7BE0;
      }
      goto L_089E7BDC;
    }
L_089E7BDC:
    ctx.gpr[4] = (0u | 1u);
    goto L_089E7BE0;
L_089E7BE0:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_089E7C0C;
      }
      goto L_089E7C04;
    }
L_089E7C04:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E7C5C;
      }
      goto L_089E7C0C;
    }
L_089E7C0C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089E7C3C;
    }
    goto L_089E7C28;
L_089E7C28:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E7C5C;
      }
      goto L_089E7C3C;
    }
L_089E7C3C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7C5C;
      }
      goto L_089E7C58;
    }
L_089E7C58:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089E7C5C;
L_089E7C5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E7C64;
    }
L_089E7C64:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089E7C80u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E7C80u) goto L_089E7C80;
    return;
L_089E7C80:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089E7C90u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 719u, 0x0891B314u>(ctx, &aot_mem) && ctx.pc == 0x089E7C90u) goto L_089E7C90;
    return;
L_089E7C90:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x089E7CA4u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 604u, 0x089C68BCu>(ctx, &aot_mem) && ctx.pc == 0x089E7CA4u) goto L_089E7CA4;
    return;
L_089E7CA4:
    ctx.gpr[31] = (0x089E7CACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 720u, 0x0891B328u>(ctx, &aot_mem) && ctx.pc == 0x089E7CACu) goto L_089E7CAC;
    return;
L_089E7CAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E7CB4;
    }
L_089E7CB4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089E7CD0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E7CD0u) goto L_089E7CD0;
    return;
L_089E7CD0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E7CE0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x089E7CE0u) goto L_089E7CE0;
    return;
L_089E7CE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x089E7CF8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23968));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 509u, 0x089576ACu>(ctx, &aot_mem) && ctx.pc == 0x089E7CF8u) goto L_089E7CF8;
    return;
L_089E7CF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E7D00;
    }
L_089E7D00:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E7D18u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E7D18u) goto L_089E7D18;
    return;
L_089E7D18:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[31] = (0x089E7D28u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23968));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 519u, 0x0895778Cu>(ctx, &aot_mem) && ctx.pc == 0x089E7D28u) goto L_089E7D28;
    return;
L_089E7D28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E7D30;
    }
L_089E7D30:
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E7D48u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E7D48u) goto L_089E7D48;
    return;
L_089E7D48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E7D58u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x089E7D58u) goto L_089E7D58;
    return;
L_089E7D58:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[31] = (0x089E7D6Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23968));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 524u, 0x0895780Cu>(ctx, &aot_mem) && ctx.pc == 0x089E7D6Cu) goto L_089E7D6C;
    return;
L_089E7D6C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7D78;
      }
      goto L_089E7D74;
    }
L_089E7D74:
    ctx.gpr[17] = (0u | 1u);
    goto L_089E7D78;
L_089E7D78:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_089E7DA4;
      }
      goto L_089E7D9C;
    }
L_089E7D9C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_089E7DF4;
      }
      goto L_089E7DA4;
    }
L_089E7DA4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089E7DD4;
    }
    goto L_089E7DC0;
L_089E7DC0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E7DF4;
      }
      goto L_089E7DD4;
    }
L_089E7DD4:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7DF4;
      }
      goto L_089E7DF0;
    }
L_089E7DF0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089E7DF4;
L_089E7DF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E7DFC;
    }
L_089E7DFC:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E7E14u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E7E14u) goto L_089E7E14;
    return;
L_089E7E14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089E7E34u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x089E7E34u) goto L_089E7E34;
    return;
L_089E7E34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[31] = (0x089E7E5Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 164u, 0x08864BACu>(ctx, &aot_mem) && ctx.pc == 0x089E7E5Cu) goto L_089E7E5C;
    return;
L_089E7E5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E7E64;
    }
L_089E7E64:
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E7E80u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E7E80u) goto L_089E7E80;
    return;
L_089E7E80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[31] = (0x089E7E98u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 167u, 0x08864BE4u>(ctx, &aot_mem) && ctx.pc == 0x089E7E98u) goto L_089E7E98;
    return;
L_089E7E98:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089E7EA8;
      }
      goto L_089E7EA0;
    }
L_089E7EA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089E7EAC;
      }
      goto L_089E7EA8;
    }
L_089E7EA8:
    ctx.gpr[4] = (0u | 0u);
    goto L_089E7EAC;
L_089E7EAC:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_089E7ED8;
      }
      goto L_089E7ED0;
    }
L_089E7ED0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E7F28;
      }
      goto L_089E7ED8;
    }
L_089E7ED8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089E7F08;
    }
    goto L_089E7EF4;
L_089E7EF4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E7F28;
      }
      goto L_089E7F08;
    }
L_089E7F08:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7F28;
      }
      goto L_089E7F24;
    }
L_089E7F24:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089E7F28;
L_089E7F28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E7F30;
    }
L_089E7F30:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E7F48u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E7F48u) goto L_089E7F48;
    return;
L_089E7F48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[31] = (0x089E7F60u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 175u, 0x08864C74u>(ctx, &aot_mem) && ctx.pc == 0x089E7F60u) goto L_089E7F60;
    return;
L_089E7F60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 107u, 0x089E87A8u>(ctx, &aot_mem); return;
      }
      goto L_089E7F68;
    }
L_089E7F68:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E7F80u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E7F80u) goto L_089E7F80;
    return;
L_089E7F80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[31] = (0x089E7F98u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 178u, 0x08864CACu>(ctx, &aot_mem) && ctx.pc == 0x089E7F98u) goto L_089E7F98;
    return;
L_089E7F98:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7FA8;
      }
      goto L_089E7FA0;
    }
L_089E7FA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089E7FAC;
      }
      goto L_089E7FA8;
    }
L_089E7FA8:
    ctx.gpr[4] = (0u | 0u);
    goto L_089E7FAC;
L_089E7FAC:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_089E7FD8;
      }
      goto L_089E7FD0;
    }
L_089E7FD0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 4u, 0x089E8028u>(ctx, &aot_mem); return;
      }
      goto L_089E7FD8;
    }
L_089E7FD8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 2u, 0x089E8008u>(ctx, &aot_mem); return;
    }
    goto L_089E7FF4;
L_089E7FF4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.pc = 0x089E8000u; return;
}

void recomp_unit_0120(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0120_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_120(Runtime &runtime) {
    runtime.register_generated_unit(120u, 0x089E4000u, 16384u, &recomp_unit_0120, &recomp_unit_0120_entry);
    runtime.register_function(0x089E4000u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4008u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4010u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4018u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4030u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4040u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E404Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E405Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4068u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4074u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E407Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4084u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E40D4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E40FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4108u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4120u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4130u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E413Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4144u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E414Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4168u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4178u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4184u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E41A4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E41C0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E41D0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E41DCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E41E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E41ECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4204u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4214u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4234u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4244u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4258u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4268u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4278u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E428Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E42A4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E42B4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E42C0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E42C8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E42D0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E42E8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E42F8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4300u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4310u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E431Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4324u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E432Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4348u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E436Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4378u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4388u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4394u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E43A4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E43B0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E43E0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E43E8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E43ECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4410u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4418u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4434u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4448u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4464u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4468u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4478u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4484u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E448Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4494u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E44B0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E44C0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E44D4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E44FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E450Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4518u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4520u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4528u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4540u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4550u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4584u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4594u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E45A0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E45A8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E45B0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E45CCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4634u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E463Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4644u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4674u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E467Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4680u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4698u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E46A4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E46ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E46B4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E46D0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E46E0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4714u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E471Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4724u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4740u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4748u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4750u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4764u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4770u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4778u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4780u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4798u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E47B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E47C8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E47D4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E47DCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E47E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E47FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E481Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E482Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4838u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4840u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4848u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4864u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4874u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4898u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E48A4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E48A8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E48B4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E48C0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E48D4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E48E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E48F4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E48FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4984u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4990u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E499Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E49ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E49B4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E49BCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E49C4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E49CCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E49D4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E49DCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E49E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E49F4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4A04u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4A24u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4A2Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4A40u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4A50u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4A60u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4A70u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4A78u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4A88u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4A98u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4AA0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4AB0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4AB8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4AC0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4AC8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4AD0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4AE0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4AE8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4AECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4AF4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4B04u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4B0Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4B10u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4B18u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4B1Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4B20u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4B58u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4B64u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4B7Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4B88u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4B94u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4BA0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4BA4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4BACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4BB0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4BFCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C08u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C18u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C24u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C30u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C48u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C50u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C80u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C98u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4CA8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4CB4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4CBCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4CC4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4CE0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4D00u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4D0Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4D10u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4D34u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4D54u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4D98u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4DA4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4DD8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4DE4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4E00u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4E44u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4E58u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4EC8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4ED8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4EF0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4EF8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4F0Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4F28u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4F30u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4F50u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4F60u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4F6Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4F74u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4F7Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4F98u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4FA8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4FB8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4FCCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4FD4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4FD8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4FFCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5004u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5020u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5034u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5050u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5054u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5064u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5070u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5078u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5080u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5098u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E50A8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E50D8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E50E8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E50F4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E50FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5104u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E511Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E512Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5144u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5158u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5160u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5168u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E516Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5190u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5198u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E51B4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E51C8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E51E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E51E8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E51F8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5204u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E520Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5214u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5224u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5230u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E523Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5244u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5248u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5254u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E526Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5298u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E52D8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E52E8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E52F4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E52FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5304u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5320u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5344u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5350u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5360u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E536Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E53C8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E53D8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E53E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E53ECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E53F4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5410u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5444u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5458u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5464u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5474u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5480u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5488u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5490u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E54ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E54BCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E54D0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E54E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E54F0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E54F8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5508u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5514u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E551Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5524u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E553Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5548u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5558u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5560u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5570u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5580u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E558Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5594u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E559Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E55ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E55B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E55C4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E55CCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E55D0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E55DCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E55F4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5620u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5654u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5664u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5670u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5678u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5680u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5690u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E569Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E56A8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E56B0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E56B4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E56C0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E56D8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5704u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5738u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5748u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5754u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E575Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5764u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5780u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5790u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E57A0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E57ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E57C8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E57D0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E57ECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E57FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5808u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5810u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5818u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5824u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5834u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5840u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5848u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5850u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5868u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E589Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E58B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E58C0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E58CCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E58D4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E58DCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E58E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E58FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5910u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5928u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5930u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5944u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5958u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E595Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5968u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E597Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5990u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E59A8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E59B0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E59C8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E59DCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E59E0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E59ECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E59F8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5A08u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5A10u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5A84u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5A90u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5A94u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5AF8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5B0Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5B18u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5B28u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5B38u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5B44u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5B4Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5B6Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5B84u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5B90u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5BA8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5BB8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5BC4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5BCCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5BD4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5BECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5BFCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5C2Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5C3Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5C48u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5C50u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5C58u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5C74u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5C98u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5CA4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5CB4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5CC0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5CD0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5CDCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5CF8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D00u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D04u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D28u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D30u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D4Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D60u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D7Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D80u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D90u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D9Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5DA4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5DACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5DC8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5DD8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5E24u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5E30u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5E38u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5E40u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5E5Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5E6Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5E78u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5E88u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5E98u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5EA8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5EB4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5EBCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5EC4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5EDCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5EECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5EF8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5EFCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5F20u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5F28u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5F44u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5F58u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5F74u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5F78u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5F88u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5F94u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5F9Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5FA4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5FB4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5FC0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5FC8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5FCCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6000u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6044u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6060u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6070u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E607Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6088u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6090u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6094u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E60A0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E60B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E60D0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E60DCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E60E8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E60F0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E60F4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E60FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6118u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6144u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E615Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6164u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6180u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E61B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E61C4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E61D4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E61E0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E61F0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E61FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E623Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6248u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E624Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6270u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6278u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6294u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E62A8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E62C4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E62C8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E62D0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E62D8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E62E0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E62E8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E62F0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E630Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E631Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6380u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E639Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E63ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E63B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E63C8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E63F0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E63F8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6408u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6430u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6438u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6450u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6464u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6480u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6488u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E64A4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E64C4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E64D0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E64D4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E64FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6504u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E651Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6528u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E653Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6548u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6550u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E656Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E657Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6588u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6594u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6598u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E65A0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E65BCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E65ECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E65F4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E660Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E661Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E662Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6640u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6650u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6664u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6674u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6688u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6698u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E66A8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E66B0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E66CCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E66ECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E66F8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E66FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6724u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6728u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E673Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6764u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6774u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E67BCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E67C4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E67E0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E67F0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E67FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E680Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E681Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6824u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6840u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6850u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E68ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E68C0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E68D4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E68FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E690Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6914u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E691Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6938u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6948u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E695Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6964u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6968u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E698Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6994u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E69B0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E69C4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E69E0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E69E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E69ECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A08u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A28u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A34u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A38u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A9Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6AA4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6AC0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6AD0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6AF8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6B10u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6B20u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6B44u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6B4Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6B50u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6B74u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6B7Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6B98u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6BACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6BC8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6BCCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6BD4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6BF0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6C00u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6C14u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6C24u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6C34u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6C48u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6C64u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6C6Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6C84u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6C8Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6CA4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6CACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6CB4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6CD0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6CE8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6CF0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6D0Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6D1Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6D28u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6D38u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6D48u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6D50u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6D68u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6D78u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6D80u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6D98u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6DA4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6DACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6DB4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6DBCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6DC4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6DE0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6E04u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6E28u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6E30u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6E38u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6E44u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6E54u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6E78u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6E80u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6E88u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6E94u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6E9Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6EB4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6EC0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6ECCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6ED8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6EE0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6EF8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6F0Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6F14u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6F18u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6F3Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6F44u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6F60u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6F74u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6F90u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6F94u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6F9Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6FB4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6FC8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6FD0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6FD4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6FF8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7000u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E701Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7030u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E704Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7050u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7058u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7074u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7090u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7098u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E70B0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E70BCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E70C8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E70D4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E70DCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E70F4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7120u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7128u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7144u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7168u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7174u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7184u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7190u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E71A0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E71ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E71C4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E71CCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E71E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E71F4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E71FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7218u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7238u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7244u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7248u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E727Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7284u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7290u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E72B0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E72C8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E72D0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E72E8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E72F0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E72F8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7314u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7344u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7358u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7360u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7374u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E737Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7394u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E73A4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E73B4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E73BCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E73C0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E73D4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E73ECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E73F4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E740Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7440u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E747Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7490u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7498u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E74ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E74D0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E74DCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E74E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E74E8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E74F8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7504u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7510u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7518u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E751Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7528u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7540u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E755Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7584u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E758Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E75A0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E75C4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E75D4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E75E0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E75ECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E75F4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E75F8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7604u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E761Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7638u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7674u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E767Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7694u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E76A8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E76B4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E76CCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E76E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E76F0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E76F8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7718u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7724u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E772Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7734u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E773Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7748u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7750u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7758u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7760u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7768u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7778u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7784u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7790u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7798u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E77A0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E77A8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E77B0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E77B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E77C4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E77D0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E77D8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E77E0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E77E8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E77F0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E77F8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7810u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7820u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7828u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E782Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E783Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7840u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E784Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7858u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7860u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7868u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7874u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7880u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E788Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7890u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E78A0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E78ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E78B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E78C4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E78C8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E78F4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7954u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7960u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7998u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E79E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E79F0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E79F8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7A10u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7A24u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7A28u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7A4Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7A54u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7A70u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7A84u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7AA0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7AA4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7AACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7AC4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7ACCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7AD8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7AE4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7AECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7B04u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7B14u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7B24u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7B28u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7B4Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7B54u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7B70u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7B84u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7BA0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7BA4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7BACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7BC4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7BD4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7BDCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7BE0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C04u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C0Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C28u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C3Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C58u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C5Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C64u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C80u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C90u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7CA4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7CACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7CB4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7CD0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7CE0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7CF8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7D00u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7D18u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7D28u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7D30u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7D48u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7D58u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7D6Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7D74u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7D78u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7D9Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7DA4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7DC0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7DD4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7DF0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7DF4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7DFCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7E14u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7E34u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7E5Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7E64u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7E80u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7E98u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7EA0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7EA8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7EACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7ED0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7ED8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7EF4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7F08u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7F24u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7F28u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7F30u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7F48u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7F60u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7F68u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7F80u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7F98u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7FA0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7FA8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7FACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7FD0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7FD8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7FF4u, &recomp_unit_0120, "recomp_unit_0120");
}
} // namespace psprecomp
