#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0000[4093] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 8,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0,
    0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 0, 18, 0,
    0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 25, 0,
    0, 26, 27, 0, 0, 28, 0, 0, 29, 0, 0, 30, 31, 0, 0, 0, 32, 0, 0, 33, 0, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0,
    0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0,
    0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 0, 50, 0, 0, 0, 51, 52, 0, 53, 0, 54, 0, 0, 0,
    0, 0, 55, 56, 57, 0, 0, 0, 0, 0, 58, 0, 59, 60, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 64,
    0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 67, 0, 0, 0, 68, 0, 0, 69, 0, 70, 0, 71, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0,
    0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 84, 0, 0,
    0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 91, 0, 0, 92, 93,
    0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 99,
    0, 0, 0, 0, 100, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 104, 0, 105, 0, 0, 0, 106, 0, 0, 107, 0, 108,
    0, 109, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 115, 0,
    116, 0, 0, 117, 0, 0, 118, 0, 0, 0, 119, 0, 0, 120, 0, 0, 121, 0, 0, 0, 122, 0, 123, 0, 0, 0, 124, 0, 125, 0, 0, 126,
    0, 127, 0, 0, 128, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 132, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 137, 0, 138, 0, 0, 139, 0, 0, 140, 0, 141, 0, 0, 0, 142,
    0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 0, 145, 146, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 150, 0,
    0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 153, 0, 0, 154, 0, 155, 0, 156, 0, 157, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0,
    0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 162, 0, 163, 0, 164, 0, 0, 165, 0, 166, 0, 0, 167, 0, 0, 168, 0, 0, 169,
    0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 173, 0, 174, 0, 175, 0, 176, 0, 0, 0, 0, 177, 178, 0, 0,
    0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 182, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 185,
    0, 186, 0, 0, 0, 187, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0,
    0, 193, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0,
    0, 201, 0, 0, 202, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 208,
    0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 212, 0, 213, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 216,
    0, 217, 0, 218, 0, 219, 0, 0, 0, 220, 0, 221, 0, 0, 222, 0, 0, 223, 0, 0, 224, 0, 225, 0, 226, 0, 0, 0, 0, 227, 0, 0,
    228, 0, 229, 0, 0, 230, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 235, 0, 0, 0, 236,
    0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0,
    0, 0, 0, 0, 0, 0, 243, 0, 0, 244, 0, 0, 245, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0,
    250, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0,
    0, 256, 0, 0, 257, 0, 0, 258, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0,
    0, 263, 0, 264, 0, 265, 0, 266, 267, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0,
    272, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 278, 0, 279,
    0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 283, 0, 284, 0, 0, 0, 0, 285, 0, 0, 286, 0, 0, 287, 0,
    0, 288, 0, 289, 290, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 293, 0, 294, 0, 0, 295, 296, 0, 0, 0, 297, 0, 0, 0,
    0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 303,
    0, 0, 304, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 308, 0, 0, 0, 309, 0, 310, 0, 311, 0,
    0, 0, 312, 0, 313, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 316, 0, 317, 0, 0, 0, 0, 0, 0, 0,
    318, 0, 0, 0, 319, 0, 320, 0, 0, 321, 322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 325, 0, 0, 0, 0,
    0, 326, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 331, 0, 332, 0, 0, 0, 0,
    333, 0, 0, 334, 0, 0, 335, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 338, 0, 0, 339, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0,
    342, 0, 0, 343, 0, 344, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0, 348, 0, 0, 349, 0, 0, 0,
    350, 0, 0, 0, 0, 0, 351, 0, 352, 0, 0, 353, 0, 0, 354, 0, 355, 0, 0, 356, 0, 357, 0, 0, 358, 0, 359, 0, 0, 360, 361, 0,
    0, 362, 0, 363, 0, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 366, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 369, 0, 370, 0, 0, 0,
    0, 371, 0, 0, 0, 372, 0, 373, 0, 0, 0, 0, 374, 0, 0, 0, 375, 0, 376, 0, 0, 0, 0, 377, 378, 0, 0, 0, 0, 0, 379, 0,
    0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 381, 0, 0, 382, 0, 383, 0, 0, 384, 0, 385, 0, 386, 0, 0, 387, 0, 0, 388, 0, 0, 389,
    0, 390, 0, 391, 0, 0, 0, 392, 0, 393, 0, 0, 394, 0, 0, 395, 0, 0, 0, 396, 0, 397, 0, 0, 0, 398, 0, 0, 399, 0, 0, 400,
    401, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 404, 0, 0, 405, 0, 0, 0, 406, 0, 407, 0, 408, 0, 409, 0,
    0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 412, 0, 413, 0, 414, 415, 0, 0, 416, 0, 0, 417, 0, 418, 419, 0, 0,
    0, 420, 421, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 425, 0, 0, 426, 0, 0, 0,
    427, 0, 0, 0, 428, 0, 0, 429, 0, 0, 430, 0, 0, 431, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 434, 0, 0, 435, 0, 0, 0, 436, 0, 0, 437, 0, 0, 0, 438, 0, 0, 439, 0, 440, 0, 0, 0, 441, 0, 0, 442,
    0, 0, 443, 0, 444, 0, 445, 0, 446, 0, 0, 0, 447, 0, 448, 0, 0, 449, 0, 0, 450, 0, 0, 451, 0, 452, 0, 453, 0, 0, 454, 0,
    0, 455, 0, 0, 456, 0, 457, 0, 458, 0, 0, 0, 0, 459, 0, 0, 460, 0, 0, 461, 0, 0, 462, 0, 0, 463, 0, 0, 464, 0, 0, 465,
    0, 0, 0, 466, 0, 0, 467, 0, 0, 468, 0, 0, 469, 0, 0, 470, 0, 0, 471, 0, 472, 0, 473, 0, 0, 0, 0, 474, 0, 0, 0, 475,
    0, 0, 0, 0, 476, 0, 477, 0, 478, 0, 0, 0, 0, 479, 0, 0, 480, 0, 0, 0, 0, 481, 0, 482, 0, 0, 483, 0, 0, 484, 0, 0,
    485, 0, 0, 486, 0, 0, 487, 488, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 491, 0, 0, 0,
    492, 0, 0, 0, 493, 0, 0, 494, 0, 495, 0, 496, 0, 0, 0, 497, 0, 498, 0, 0, 0, 499, 0, 0, 0, 500, 0, 501, 0, 0, 0, 502,
    503, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 505, 0, 0, 506, 0, 0, 0, 507, 0, 508, 0, 0, 0, 509, 0, 0, 510, 0, 0,
    511, 0, 0, 512, 0, 513, 0, 0, 514, 0, 0, 0, 515, 516, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 518, 0, 0, 519, 0, 0, 0,
    520, 0, 0, 521, 0, 0, 522, 0, 523, 0, 0, 524, 0, 0, 525, 0, 0, 526, 0, 527, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0,
    529, 0, 0, 0, 0, 530, 0, 0, 531, 0, 0, 532, 0, 533, 534, 0, 0, 0, 535, 0, 0, 536, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0,
    538, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 541, 0, 0, 0, 0, 542, 0, 0, 543, 0, 0, 0, 544, 0, 0, 0,
    0, 0, 0, 0, 0, 545, 0, 0, 546, 0, 0, 0, 547, 0, 548, 0, 0, 0, 0, 549, 0, 550, 0, 0, 0, 551, 0, 552, 0, 553, 0, 554,
    0, 0, 0, 0, 555, 0, 556, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0, 560, 0, 0,
    0, 0, 0, 561, 0, 0, 0, 0, 562, 0, 0, 0, 0, 563, 0, 0, 564, 0, 0, 0, 0, 565, 0, 566, 0, 0, 567, 0, 0, 568, 0, 0,
    0, 0, 569, 0, 0, 0, 0, 570, 0, 0, 571, 0, 0, 0, 0, 572, 0, 0, 573, 0, 0, 574, 0, 0, 0, 575, 0, 0, 0, 0, 576, 0,
    0, 0, 0, 0, 0, 577, 0, 578, 0, 0, 0, 579, 0, 0, 580, 0, 0, 581, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 0, 586, 0, 587, 0, 0, 588, 0, 589, 0, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 592,
    0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 594, 0, 595, 0, 0, 0, 596, 0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0,
    599, 600, 0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 602, 0, 0,
    603, 0, 0, 0, 604, 0, 605, 0, 606, 0, 0, 0, 607, 0, 0, 0, 608, 0, 609, 0, 0, 610, 611, 0, 0, 0, 0, 612, 613, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 614, 0, 0, 615, 0, 0, 0, 616, 0, 0,
    0, 0, 0, 0, 617, 0, 618, 0, 0, 0, 619, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 622, 623, 0, 0, 0, 0,
    624, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 626, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 628,
    0, 629, 0, 0, 0, 630, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 633, 634, 0, 0, 0, 0, 635, 0, 0, 0, 0,
    0, 0, 0, 636, 0, 0, 0, 0, 0, 637, 0, 0, 638, 0, 0, 0, 639, 0, 640, 0, 0, 0, 641, 0, 0, 0, 0, 0, 0, 642, 0, 643,
    0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 645, 0, 0, 646, 0, 0, 0, 0, 0, 647, 0, 0, 648, 0, 0, 0, 0, 0, 649, 0, 0,
    650, 0, 0, 0, 0, 0, 651, 0, 0, 652, 0, 0, 0, 0, 0, 0, 653, 0, 654, 0, 0, 0, 0, 0, 655, 0, 0, 0, 656, 657, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 658, 0, 0, 0, 659, 0, 0, 0, 660, 0, 661, 0, 0, 662, 663, 0, 0, 0,
    0, 664, 665, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 0, 0, 0, 0, 667, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 670, 0, 0, 0, 0, 0, 0, 0, 0, 0, 671, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 672, 0, 673, 0, 0, 0, 0, 0, 0, 674, 0,
    0, 675, 0, 676, 0, 0, 0, 677, 0, 0, 0, 0, 678, 0, 0, 679, 0, 0, 680, 0, 0, 0, 681, 0, 682, 0, 683, 684, 0, 685, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 686, 0, 0, 687, 0, 0, 688, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 689, 0, 0, 690, 0, 0, 691, 0, 0, 692, 693, 0, 0, 694, 0, 695, 0, 0, 0, 696, 0,
    0, 0, 0, 697, 698, 0, 699, 0, 0, 0, 0, 700, 0, 701, 0, 702, 0, 703, 0, 0, 704, 0, 0, 705, 0, 0, 706, 0, 0, 707, 0, 0,
    708, 0, 0, 0, 0, 0, 709, 0, 0, 0, 0, 710, 0, 0, 0, 0, 0, 0, 711, 0, 712, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 713, 0, 0, 0, 0, 0, 0, 0, 714, 0, 0, 715, 0, 0, 716,
    0, 0, 0, 0, 717, 0, 0, 0, 0, 0, 718, 0, 719, 0, 0, 0, 0, 720, 0, 721, 0, 722, 0, 0, 0, 0, 723, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 724, 0, 0, 0, 0, 725, 0, 0, 726, 0, 0, 727, 0, 0, 0, 0, 0, 0, 0, 728, 0, 729, 0, 0, 0, 0, 0, 0,
    730, 0, 731, 0, 0, 732, 0, 0, 0, 0, 0, 733, 0, 0, 0, 0, 0, 0, 0, 0, 0, 734, 0, 0, 0, 0, 735, 0, 0, 736, 0, 0,
    737, 0, 0, 0, 0, 0, 0, 0, 738, 0, 739, 0, 0, 0, 0, 0, 0, 740, 0, 741, 0, 0, 742, 0, 0, 0, 0, 0, 743, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 744, 0, 0, 0, 0, 0, 745, 0, 0, 0, 746, 0, 0, 747, 0, 0, 748, 0, 0, 0, 749, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 750, 0, 0, 0, 0, 751, 0, 0, 0, 0, 752, 0, 0, 0, 753, 0, 754, 0, 0, 755, 0, 0, 0, 756, 0, 757,
    0, 758, 0, 0, 0, 0, 0, 759, 0, 0, 0, 760, 0, 0, 761, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 762, 0, 0, 0,
    0, 763, 0, 0, 0, 0, 0, 0, 0, 764, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 765, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 766, 0, 767, 0, 0, 0, 0, 0, 768, 0, 0, 769, 0, 0, 770,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 771, 0, 0, 0, 0, 0, 0, 0, 0, 772, 0, 0, 0, 0, 0, 0, 0, 773, 0, 0, 0, 0, 0,
    0, 0, 0, 774, 0, 0, 0, 775, 0, 776, 0, 777, 0, 778, 0, 0, 0, 0, 779, 0, 0, 0, 0, 0, 780, 0, 0, 0, 781, 0, 0, 0,
    782, 0, 0, 0, 0, 0, 0, 0, 0, 0, 783, 0, 0, 0, 0, 0, 0, 784, 0, 0, 0, 0, 785, 0, 0, 0, 0, 786, 0, 0, 787, 0,
    0, 0, 0, 0, 0, 788, 0, 789, 0, 0, 0, 790, 791, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 792, 0, 0, 793, 0,
    0, 0, 794, 0, 0, 0, 0, 0, 0, 795, 0, 0, 0, 796, 0, 0, 797, 0, 798, 0, 799, 0, 0, 800, 0, 0, 801, 0, 802, 0, 803, 0,
    804, 0, 0, 0, 805, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 806, 0, 807, 0, 808, 0, 809, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 810, 0, 0, 811, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 812, 0, 0, 813, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 814, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 815, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 816, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 817, 0, 0, 818, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 819, 0, 820, 0, 0, 0, 0, 821, 0, 0, 0, 0, 822, 0, 0, 0, 0, 823, 0,
    0, 0, 0, 0, 824, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 825, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 826, 0, 0, 0, 827, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 828, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 829, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 830, 0, 0, 0, 831, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 832, 0, 0, 0, 833, 0, 834, 0, 0,
    835, 0, 0, 0, 836, 837, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 838, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 839, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 840,
};
void recomp_unit_0000_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08804000u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0000[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08804000;
    case 2u: goto L_08804088;
    case 3u: goto L_088040A8;
    case 4u: goto L_088040BC;
    case 5u: goto L_088040C8;
    case 6u: goto L_088040DC;
    case 7u: goto L_088040F0;
    case 8u: goto L_088040FC;
    case 9u: goto L_0880413C;
    case 10u: goto L_08804158;
    case 11u: goto L_08804170;
    case 12u: goto L_08804190;
    case 13u: goto L_0880419C;
    case 14u: goto L_088041B0;
    case 15u: goto L_088041B8;
    case 16u: goto L_088041E0;
    case 17u: goto L_088041EC;
    case 18u: goto L_088041F8;
    case 19u: goto L_08804210;
    case 20u: goto L_08804228;
    case 21u: goto L_08804240;
    case 22u: goto L_0880424C;
    case 23u: goto L_08804264;
    case 24u: goto L_0880426C;
    case 25u: goto L_08804278;
    case 26u: goto L_08804284;
    case 27u: goto L_08804288;
    case 28u: goto L_08804294;
    case 29u: goto L_088042A0;
    case 30u: goto L_088042AC;
    case 31u: goto L_088042B0;
    case 32u: goto L_088042C0;
    case 33u: goto L_088042CC;
    case 34u: goto L_088042D8;
    case 35u: goto L_088042E0;
    case 36u: goto L_08804330;
    case 37u: goto L_0880433C;
    case 38u: goto L_08804378;
    case 39u: goto L_0880438C;
    case 40u: goto L_08804398;
    case 41u: goto L_088043A8;
    case 42u: goto L_088043BC;
    case 43u: goto L_088043C4;
    case 44u: goto L_088043D8;
    case 45u: goto L_088043F8;
    case 46u: goto L_08804404;
    case 47u: goto L_08804414;
    case 48u: goto L_08804434;
    case 49u: goto L_0880443C;
    case 50u: goto L_0880444C;
    case 51u: goto L_0880445C;
    case 52u: goto L_08804460;
    case 53u: goto L_08804468;
    case 54u: goto L_08804470;
    case 55u: goto L_08804488;
    case 56u: goto L_0880448C;
    case 57u: goto L_08804490;
    case 58u: goto L_088044A8;
    case 59u: goto L_088044B0;
    case 60u: goto L_088044B4;
    case 61u: goto L_088044C8;
    case 62u: goto L_088044D8;
    case 63u: goto L_088044EC;
    case 64u: goto L_088044FC;
    case 65u: goto L_08804518;
    case 66u: goto L_08804520;
    case 67u: goto L_08804528;
    case 68u: goto L_08804538;
    case 69u: goto L_08804544;
    case 70u: goto L_0880454C;
    case 71u: goto L_08804554;
    case 72u: goto L_08804560;
    case 73u: goto L_08804570;
    case 74u: goto L_08804590;
    case 75u: goto L_088045A4;
    case 76u: goto L_088045B0;
    case 77u: goto L_088045C4;
    case 78u: goto L_088045D8;
    case 79u: goto L_088045E4;
    case 80u: goto L_08804628;
    case 81u: goto L_08804648;
    case 82u: goto L_08804658;
    case 83u: goto L_0880466C;
    case 84u: goto L_08804674;
    case 85u: goto L_08804690;
    case 86u: goto L_0880469C;
    case 87u: goto L_088046A8;
    case 88u: goto L_088046BC;
    case 89u: goto L_088046D8;
    case 90u: goto L_088046E0;
    case 91u: goto L_088046EC;
    case 92u: goto L_088046F8;
    case 93u: goto L_088046FC;
    case 94u: goto L_08804714;
    case 95u: goto L_08804720;
    case 96u: goto L_0880474C;
    case 97u: goto L_08804760;
    case 98u: goto L_0880476C;
    case 99u: goto L_0880477C;
    case 100u: goto L_08804790;
    case 101u: goto L_08804798;
    case 102u: goto L_088047AC;
    case 103u: goto L_088047C8;
    case 104u: goto L_088047D0;
    case 105u: goto L_088047D8;
    case 106u: goto L_088047E8;
    case 107u: goto L_088047F4;
    case 108u: goto L_088047FC;
    case 109u: goto L_08804804;
    case 110u: goto L_08804810;
    case 111u: goto L_08804820;
    case 112u: goto L_08804848;
    case 113u: goto L_0880485C;
    case 114u: goto L_08804868;
    case 115u: goto L_08804878;
    case 116u: goto L_08804880;
    case 117u: goto L_0880488C;
    case 118u: goto L_08804898;
    case 119u: goto L_088048A8;
    case 120u: goto L_088048B4;
    case 121u: goto L_088048C0;
    case 122u: goto L_088048D0;
    case 123u: goto L_088048D8;
    case 124u: goto L_088048E8;
    case 125u: goto L_088048F0;
    case 126u: goto L_088048FC;
    case 127u: goto L_08804904;
    case 128u: goto L_08804910;
    case 129u: goto L_0880491C;
    case 130u: goto L_0880492C;
    case 131u: goto L_08804944;
    case 132u: goto L_08804948;
    case 133u: goto L_0880496C;
    case 134u: goto L_08804998;
    case 135u: goto L_088049AC;
    case 136u: goto L_088049B8;
    case 137u: goto L_088049C4;
    case 138u: goto L_088049CC;
    case 139u: goto L_088049D8;
    case 140u: goto L_088049E4;
    case 141u: goto L_088049EC;
    case 142u: goto L_088049FC;
    case 143u: goto L_08804A08;
    case 144u: goto L_08804A14;
    case 145u: goto L_08804A2C;
    case 146u: goto L_08804A30;
    case 147u: goto L_08804A40;
    case 148u: goto L_08804A4C;
    case 149u: goto L_08804A74;
    case 150u: goto L_08804A78;
    case 151u: goto L_08804A98;
    case 152u: goto L_08804AA0;
    case 153u: goto L_08804AAC;
    case 154u: goto L_08804AB8;
    case 155u: goto L_08804AC0;
    case 156u: goto L_08804AC8;
    case 157u: goto L_08804AD0;
    case 158u: goto L_08804AD4;
    case 159u: goto L_08804AF0;
    case 160u: goto L_08804B14;
    case 161u: goto L_08804B28;
    case 162u: goto L_08804B34;
    case 163u: goto L_08804B3C;
    case 164u: goto L_08804B44;
    case 165u: goto L_08804B50;
    case 166u: goto L_08804B58;
    case 167u: goto L_08804B64;
    case 168u: goto L_08804B70;
    case 169u: goto L_08804B7C;
    case 170u: goto L_08804B84;
    case 171u: goto L_08804B98;
    case 172u: goto L_08804BB8;
    case 173u: goto L_08804BC4;
    case 174u: goto L_08804BCC;
    case 175u: goto L_08804BD4;
    case 176u: goto L_08804BDC;
    case 177u: goto L_08804BF0;
    case 178u: goto L_08804BF4;
    case 179u: goto L_08804C08;
    case 180u: goto L_08804C2C;
    case 181u: goto L_08804C48;
    case 182u: goto L_08804C50;
    case 183u: goto L_08804C58;
    case 184u: goto L_08804C68;
    case 185u: goto L_08804C7C;
    case 186u: goto L_08804C84;
    case 187u: goto L_08804C94;
    case 188u: goto L_08804CA0;
    case 189u: goto L_08804CAC;
    case 190u: goto L_08804CCC;
    case 191u: goto L_08804CEC;
    case 192u: goto L_08804CF8;
    case 193u: goto L_08804D04;
    case 194u: goto L_08804D0C;
    case 195u: goto L_08804D20;
    case 196u: goto L_08804D30;
    case 197u: goto L_08804D44;
    case 198u: goto L_08804D54;
    case 199u: goto L_08804D5C;
    case 200u: goto L_08804D70;
    case 201u: goto L_08804D84;
    case 202u: goto L_08804D90;
    case 203u: goto L_08804D98;
    case 204u: goto L_08804DAC;
    case 205u: goto L_08804DC4;
    case 206u: goto L_08804DDC;
    case 207u: goto L_08804DF0;
    case 208u: goto L_08804DFC;
    case 209u: goto L_08804E08;
    case 210u: goto L_08804E1C;
    case 211u: goto L_08804E30;
    case 212u: goto L_08804E38;
    case 213u: goto L_08804E40;
    case 214u: goto L_08804E4C;
    case 215u: goto L_08804E60;
    case 216u: goto L_08804E7C;
    case 217u: goto L_08804E84;
    case 218u: goto L_08804E8C;
    case 219u: goto L_08804E94;
    case 220u: goto L_08804EA4;
    case 221u: goto L_08804EAC;
    case 222u: goto L_08804EB8;
    case 223u: goto L_08804EC4;
    case 224u: goto L_08804ED0;
    case 225u: goto L_08804ED8;
    case 226u: goto L_08804EE0;
    case 227u: goto L_08804EF4;
    case 228u: goto L_08804F00;
    case 229u: goto L_08804F08;
    case 230u: goto L_08804F14;
    case 231u: goto L_08804F1C;
    case 232u: goto L_08804F2C;
    case 233u: goto L_08804F40;
    case 234u: goto L_08804F60;
    case 235u: goto L_08804F6C;
    case 236u: goto L_08804F7C;
    case 237u: goto L_08804F88;
    case 238u: goto L_08804FA0;
    case 239u: goto L_08804FC4;
    case 240u: goto L_08804FD0;
    case 241u: goto L_08804FDC;
    case 242u: goto L_08804FF4;
    case 243u: goto L_08805018;
    case 244u: goto L_08805024;
    case 245u: goto L_08805030;
    case 246u: goto L_0880503C;
    case 247u: goto L_08805054;
    case 248u: goto L_08805068;
    case 249u: goto L_08805078;
    case 250u: goto L_08805080;
    case 251u: goto L_08805090;
    case 252u: goto L_088050A4;
    case 253u: goto L_088050C0;
    case 254u: goto L_088050D0;
    case 255u: goto L_088050E4;
    case 256u: goto L_08805104;
    case 257u: goto L_08805110;
    case 258u: goto L_0880511C;
    case 259u: goto L_08805128;
    case 260u: goto L_08805140;
    case 261u: goto L_08805168;
    case 262u: goto L_08805178;
    case 263u: goto L_08805184;
    case 264u: goto L_0880518C;
    case 265u: goto L_08805194;
    case 266u: goto L_0880519C;
    case 267u: goto L_088051A0;
    case 268u: goto L_088051B8;
    case 269u: goto L_088051D4;
    case 270u: goto L_088051E8;
    case 271u: goto L_088051F4;
    case 272u: goto L_08805200;
    case 273u: goto L_08805208;
    case 274u: goto L_0880521C;
    case 275u: goto L_08805240;
    case 276u: goto L_08805254;
    case 277u: goto L_08805268;
    case 278u: goto L_08805274;
    case 279u: goto L_0880527C;
    case 280u: goto L_08805298;
    case 281u: goto L_088052AC;
    case 282u: goto L_088052BC;
    case 283u: goto L_088052C4;
    case 284u: goto L_088052CC;
    case 285u: goto L_088052E0;
    case 286u: goto L_088052EC;
    case 287u: goto L_088052F8;
    case 288u: goto L_08805304;
    case 289u: goto L_0880530C;
    case 290u: goto L_08805310;
    case 291u: goto L_0880532C;
    case 292u: goto L_08805340;
    case 293u: goto L_08805348;
    case 294u: goto L_08805350;
    case 295u: goto L_0880535C;
    case 296u: goto L_08805360;
    case 297u: goto L_08805370;
    case 298u: goto L_08805390;
    case 299u: goto L_088053A8;
    case 300u: goto L_088053BC;
    case 301u: goto L_088053C8;
    case 302u: goto L_088053DC;
    case 303u: goto L_088053FC;
    case 304u: goto L_08805408;
    case 305u: goto L_08805414;
    case 306u: goto L_08805424;
    case 307u: goto L_0880544C;
    case 308u: goto L_08805458;
    case 309u: goto L_08805468;
    case 310u: goto L_08805470;
    case 311u: goto L_08805478;
    case 312u: goto L_08805488;
    case 313u: goto L_08805490;
    case 314u: goto L_088054AC;
    case 315u: goto L_088054CC;
    case 316u: goto L_088054D8;
    case 317u: goto L_088054E0;
    case 318u: goto L_08805500;
    case 319u: goto L_08805510;
    case 320u: goto L_08805518;
    case 321u: goto L_08805524;
    case 322u: goto L_08805528;
    case 323u: goto L_0880553C;
    case 324u: goto L_08805560;
    case 325u: goto L_0880556C;
    case 326u: goto L_08805584;
    case 327u: goto L_08805590;
    case 328u: goto L_088055A0;
    case 329u: goto L_088055B0;
    case 330u: goto L_088055CC;
    case 331u: goto L_088055E4;
    case 332u: goto L_088055EC;
    case 333u: goto L_08805600;
    case 334u: goto L_0880560C;
    case 335u: goto L_08805618;
    case 336u: goto L_08805620;
    case 337u: goto L_08805630;
    case 338u: goto L_08805648;
    case 339u: goto L_08805654;
    case 340u: goto L_08805660;
    case 341u: goto L_08805674;
    case 342u: goto L_08805680;
    case 343u: goto L_0880568C;
    case 344u: goto L_08805694;
    case 345u: goto L_088056A4;
    case 346u: goto L_088056C8;
    case 347u: goto L_088056DC;
    case 348u: goto L_088056E4;
    case 349u: goto L_088056F0;
    case 350u: goto L_08805700;
    case 351u: goto L_08805718;
    case 352u: goto L_08805720;
    case 353u: goto L_0880572C;
    case 354u: goto L_08805738;
    case 355u: goto L_08805740;
    case 356u: goto L_0880574C;
    case 357u: goto L_08805754;
    case 358u: goto L_08805760;
    case 359u: goto L_08805768;
    case 360u: goto L_08805774;
    case 361u: goto L_08805778;
    case 362u: goto L_08805784;
    case 363u: goto L_0880578C;
    case 364u: goto L_088057A0;
    case 365u: goto L_088057B0;
    case 366u: goto L_088057BC;
    case 367u: goto L_088057C4;
    case 368u: goto L_088057D8;
    case 369u: goto L_088057E8;
    case 370u: goto L_088057F0;
    case 371u: goto L_08805804;
    case 372u: goto L_08805814;
    case 373u: goto L_0880581C;
    case 374u: goto L_08805830;
    case 375u: goto L_08805840;
    case 376u: goto L_08805848;
    case 377u: goto L_0880585C;
    case 378u: goto L_08805860;
    case 379u: goto L_08805878;
    case 380u: goto L_0880589C;
    case 381u: goto L_088058A8;
    case 382u: goto L_088058B4;
    case 383u: goto L_088058BC;
    case 384u: goto L_088058C8;
    case 385u: goto L_088058D0;
    case 386u: goto L_088058D8;
    case 387u: goto L_088058E4;
    case 388u: goto L_088058F0;
    case 389u: goto L_088058FC;
    case 390u: goto L_08805904;
    case 391u: goto L_0880590C;
    case 392u: goto L_0880591C;
    case 393u: goto L_08805924;
    case 394u: goto L_08805930;
    case 395u: goto L_0880593C;
    case 396u: goto L_0880594C;
    case 397u: goto L_08805954;
    case 398u: goto L_08805964;
    case 399u: goto L_08805970;
    case 400u: goto L_0880597C;
    case 401u: goto L_08805980;
    case 402u: goto L_08805998;
    case 403u: goto L_088059B8;
    case 404u: goto L_088059C4;
    case 405u: goto L_088059D0;
    case 406u: goto L_088059E0;
    case 407u: goto L_088059E8;
    case 408u: goto L_088059F0;
    case 409u: goto L_088059F8;
    case 410u: goto L_08805A0C;
    case 411u: goto L_08805A30;
    case 412u: goto L_08805A3C;
    case 413u: goto L_08805A44;
    case 414u: goto L_08805A4C;
    case 415u: goto L_08805A50;
    case 416u: goto L_08805A5C;
    case 417u: goto L_08805A68;
    case 418u: goto L_08805A70;
    case 419u: goto L_08805A74;
    case 420u: goto L_08805A84;
    case 421u: goto L_08805A88;
    case 422u: goto L_08805AA0;
    case 423u: goto L_08805AC8;
    case 424u: goto L_08805AD8;
    case 425u: goto L_08805AE4;
    case 426u: goto L_08805AF0;
    case 427u: goto L_08805B00;
    case 428u: goto L_08805B10;
    case 429u: goto L_08805B1C;
    case 430u: goto L_08805B28;
    case 431u: goto L_08805B34;
    case 432u: goto L_08805B40;
    case 433u: goto L_08805B60;
    case 434u: goto L_08805B94;
    case 435u: goto L_08805BA0;
    case 436u: goto L_08805BB0;
    case 437u: goto L_08805BBC;
    case 438u: goto L_08805BCC;
    case 439u: goto L_08805BD8;
    case 440u: goto L_08805BE0;
    case 441u: goto L_08805BF0;
    case 442u: goto L_08805BFC;
    case 443u: goto L_08805C08;
    case 444u: goto L_08805C10;
    case 445u: goto L_08805C18;
    case 446u: goto L_08805C20;
    case 447u: goto L_08805C30;
    case 448u: goto L_08805C38;
    case 449u: goto L_08805C44;
    case 450u: goto L_08805C50;
    case 451u: goto L_08805C5C;
    case 452u: goto L_08805C64;
    case 453u: goto L_08805C6C;
    case 454u: goto L_08805C78;
    case 455u: goto L_08805C84;
    case 456u: goto L_08805C90;
    case 457u: goto L_08805C98;
    case 458u: goto L_08805CA0;
    case 459u: goto L_08805CB4;
    case 460u: goto L_08805CC0;
    case 461u: goto L_08805CCC;
    case 462u: goto L_08805CD8;
    case 463u: goto L_08805CE4;
    case 464u: goto L_08805CF0;
    case 465u: goto L_08805CFC;
    case 466u: goto L_08805D0C;
    case 467u: goto L_08805D18;
    case 468u: goto L_08805D24;
    case 469u: goto L_08805D30;
    case 470u: goto L_08805D3C;
    case 471u: goto L_08805D48;
    case 472u: goto L_08805D50;
    case 473u: goto L_08805D58;
    case 474u: goto L_08805D6C;
    case 475u: goto L_08805D7C;
    case 476u: goto L_08805D90;
    case 477u: goto L_08805D98;
    case 478u: goto L_08805DA0;
    case 479u: goto L_08805DB4;
    case 480u: goto L_08805DC0;
    case 481u: goto L_08805DD4;
    case 482u: goto L_08805DDC;
    case 483u: goto L_08805DE8;
    case 484u: goto L_08805DF4;
    case 485u: goto L_08805E00;
    case 486u: goto L_08805E0C;
    case 487u: goto L_08805E18;
    case 488u: goto L_08805E1C;
    case 489u: goto L_08805E3C;
    case 490u: goto L_08805E68;
    case 491u: goto L_08805E70;
    case 492u: goto L_08805E80;
    case 493u: goto L_08805E90;
    case 494u: goto L_08805E9C;
    case 495u: goto L_08805EA4;
    case 496u: goto L_08805EAC;
    case 497u: goto L_08805EBC;
    case 498u: goto L_08805EC4;
    case 499u: goto L_08805ED4;
    case 500u: goto L_08805EE4;
    case 501u: goto L_08805EEC;
    case 502u: goto L_08805EFC;
    case 503u: goto L_08805F00;
    case 504u: goto L_08805F18;
    case 505u: goto L_08805F34;
    case 506u: goto L_08805F40;
    case 507u: goto L_08805F50;
    case 508u: goto L_08805F58;
    case 509u: goto L_08805F68;
    case 510u: goto L_08805F74;
    case 511u: goto L_08805F80;
    case 512u: goto L_08805F8C;
    case 513u: goto L_08805F94;
    case 514u: goto L_08805FA0;
    case 515u: goto L_08805FB0;
    case 516u: goto L_08805FB4;
    case 517u: goto L_08805FC8;
    case 518u: goto L_08805FE4;
    case 519u: goto L_08805FF0;
    case 520u: goto L_08806000;
    case 521u: goto L_0880600C;
    case 522u: goto L_08806018;
    case 523u: goto L_08806020;
    case 524u: goto L_0880602C;
    case 525u: goto L_08806038;
    case 526u: goto L_08806044;
    case 527u: goto L_0880604C;
    case 528u: goto L_08806064;
    case 529u: goto L_08806080;
    case 530u: goto L_08806094;
    case 531u: goto L_088060A0;
    case 532u: goto L_088060AC;
    case 533u: goto L_088060B4;
    case 534u: goto L_088060B8;
    case 535u: goto L_088060C8;
    case 536u: goto L_088060D4;
    case 537u: goto L_088060E4;
    case 538u: goto L_08806100;
    case 539u: goto L_08806114;
    case 540u: goto L_0880612C;
    case 541u: goto L_08806140;
    case 542u: goto L_08806154;
    case 543u: goto L_08806160;
    case 544u: goto L_08806170;
    case 545u: goto L_08806194;
    case 546u: goto L_088061A0;
    case 547u: goto L_088061B0;
    case 548u: goto L_088061B8;
    case 549u: goto L_088061CC;
    case 550u: goto L_088061D4;
    case 551u: goto L_088061E4;
    case 552u: goto L_088061EC;
    case 553u: goto L_088061F4;
    case 554u: goto L_088061FC;
    case 555u: goto L_08806210;
    case 556u: goto L_08806218;
    case 557u: goto L_0880622C;
    case 558u: goto L_08806248;
    case 559u: goto L_08806268;
    case 560u: goto L_08806274;
    case 561u: goto L_0880628C;
    case 562u: goto L_088062A0;
    case 563u: goto L_088062B4;
    case 564u: goto L_088062C0;
    case 565u: goto L_088062D4;
    case 566u: goto L_088062DC;
    case 567u: goto L_088062E8;
    case 568u: goto L_088062F4;
    case 569u: goto L_08806308;
    case 570u: goto L_0880631C;
    case 571u: goto L_08806328;
    case 572u: goto L_0880633C;
    case 573u: goto L_08806348;
    case 574u: goto L_08806354;
    case 575u: goto L_08806364;
    case 576u: goto L_08806378;
    case 577u: goto L_08806394;
    case 578u: goto L_0880639C;
    case 579u: goto L_088063AC;
    case 580u: goto L_088063B8;
    case 581u: goto L_088063C4;
    case 582u: goto L_088063D8;
    case 583u: goto L_08806420;
    case 584u: goto L_08806448;
    case 585u: goto L_08806498;
    case 586u: goto L_088064B4;
    case 587u: goto L_088064BC;
    case 588u: goto L_088064C8;
    case 589u: goto L_088064D0;
    case 590u: goto L_088064E4;
    case 591u: goto L_08806510;
    case 592u: goto L_0880657C;
    case 593u: goto L_0880658C;
    case 594u: goto L_088065A8;
    case 595u: goto L_088065B0;
    case 596u: goto L_088065C0;
    case 597u: goto L_088065D0;
    case 598u: goto L_088065EC;
    case 599u: goto L_08806600;
    case 600u: goto L_08806604;
    case 601u: goto L_08806618;
    case 602u: goto L_08806674;
    case 603u: goto L_08806680;
    case 604u: goto L_08806690;
    case 605u: goto L_08806698;
    case 606u: goto L_088066A0;
    case 607u: goto L_088066B0;
    case 608u: goto L_088066C0;
    case 609u: goto L_088066C8;
    case 610u: goto L_088066D4;
    case 611u: goto L_088066D8;
    case 612u: goto L_088066EC;
    case 613u: goto L_088066F0;
    case 614u: goto L_08806758;
    case 615u: goto L_08806764;
    case 616u: goto L_08806774;
    case 617u: goto L_08806790;
    case 618u: goto L_08806798;
    case 619u: goto L_088067A8;
    case 620u: goto L_088067B8;
    case 621u: goto L_088067D4;
    case 622u: goto L_088067E8;
    case 623u: goto L_088067EC;
    case 624u: goto L_08806800;
    case 625u: goto L_08806844;
    case 626u: goto L_08806850;
    case 627u: goto L_08806860;
    case 628u: goto L_0880687C;
    case 629u: goto L_08806884;
    case 630u: goto L_08806894;
    case 631u: goto L_088068A4;
    case 632u: goto L_088068C0;
    case 633u: goto L_088068D4;
    case 634u: goto L_088068D8;
    case 635u: goto L_088068EC;
    case 636u: goto L_0880690C;
    case 637u: goto L_08806924;
    case 638u: goto L_08806930;
    case 639u: goto L_08806940;
    case 640u: goto L_08806948;
    case 641u: goto L_08806958;
    case 642u: goto L_08806974;
    case 643u: goto L_0880697C;
    case 644u: goto L_08806990;
    case 645u: goto L_088069AC;
    case 646u: goto L_088069B8;
    case 647u: goto L_088069D0;
    case 648u: goto L_088069DC;
    case 649u: goto L_088069F4;
    case 650u: goto L_08806A00;
    case 651u: goto L_08806A18;
    case 652u: goto L_08806A24;
    case 653u: goto L_08806A40;
    case 654u: goto L_08806A48;
    case 655u: goto L_08806A60;
    case 656u: goto L_08806A70;
    case 657u: goto L_08806A74;
    case 658u: goto L_08806AB8;
    case 659u: goto L_08806AC8;
    case 660u: goto L_08806AD8;
    case 661u: goto L_08806AE0;
    case 662u: goto L_08806AEC;
    case 663u: goto L_08806AF0;
    case 664u: goto L_08806B04;
    case 665u: goto L_08806B08;
    case 666u: goto L_08806B50;
    case 667u: goto L_08806B70;
    case 668u: goto L_08806B98;
    case 669u: goto L_08806BB4;
    case 670u: goto L_08806BC8;
    case 671u: goto L_08806BF0;
    case 672u: goto L_08806C54;
    case 673u: goto L_08806C5C;
    case 674u: goto L_08806C78;
    case 675u: goto L_08806C84;
    case 676u: goto L_08806C8C;
    case 677u: goto L_08806C9C;
    case 678u: goto L_08806CB0;
    case 679u: goto L_08806CBC;
    case 680u: goto L_08806CC8;
    case 681u: goto L_08806CD8;
    case 682u: goto L_08806CE0;
    case 683u: goto L_08806CE8;
    case 684u: goto L_08806CEC;
    case 685u: goto L_08806CF4;
    case 686u: goto L_08806D60;
    case 687u: goto L_08806D6C;
    case 688u: goto L_08806D78;
    case 689u: goto L_08806DAC;
    case 690u: goto L_08806DB8;
    case 691u: goto L_08806DC4;
    case 692u: goto L_08806DD0;
    case 693u: goto L_08806DD4;
    case 694u: goto L_08806DE0;
    case 695u: goto L_08806DE8;
    case 696u: goto L_08806DF8;
    case 697u: goto L_08806E0C;
    case 698u: goto L_08806E10;
    case 699u: goto L_08806E18;
    case 700u: goto L_08806E2C;
    case 701u: goto L_08806E34;
    case 702u: goto L_08806E3C;
    case 703u: goto L_08806E44;
    case 704u: goto L_08806E50;
    case 705u: goto L_08806E5C;
    case 706u: goto L_08806E68;
    case 707u: goto L_08806E74;
    case 708u: goto L_08806E80;
    case 709u: goto L_08806E98;
    case 710u: goto L_08806EAC;
    case 711u: goto L_08806EC8;
    case 712u: goto L_08806ED0;
    case 713u: goto L_08806FC4;
    case 714u: goto L_08806FE4;
    case 715u: goto L_08806FF0;
    case 716u: goto L_08806FFC;
    case 717u: goto L_08807010;
    case 718u: goto L_08807028;
    case 719u: goto L_08807030;
    case 720u: goto L_08807044;
    case 721u: goto L_0880704C;
    case 722u: goto L_08807054;
    case 723u: goto L_08807068;
    case 724u: goto L_08807090;
    case 725u: goto L_088070A4;
    case 726u: goto L_088070B0;
    case 727u: goto L_088070BC;
    case 728u: goto L_088070DC;
    case 729u: goto L_088070E4;
    case 730u: goto L_08807100;
    case 731u: goto L_08807108;
    case 732u: goto L_08807114;
    case 733u: goto L_0880712C;
    case 734u: goto L_08807154;
    case 735u: goto L_08807168;
    case 736u: goto L_08807174;
    case 737u: goto L_08807180;
    case 738u: goto L_088071A0;
    case 739u: goto L_088071A8;
    case 740u: goto L_088071C4;
    case 741u: goto L_088071CC;
    case 742u: goto L_088071D8;
    case 743u: goto L_088071F0;
    case 744u: goto L_08807218;
    case 745u: goto L_08807230;
    case 746u: goto L_08807240;
    case 747u: goto L_0880724C;
    case 748u: goto L_08807258;
    case 749u: goto L_08807268;
    case 750u: goto L_08807298;
    case 751u: goto L_088072AC;
    case 752u: goto L_088072C0;
    case 753u: goto L_088072D0;
    case 754u: goto L_088072D8;
    case 755u: goto L_088072E4;
    case 756u: goto L_088072F4;
    case 757u: goto L_088072FC;
    case 758u: goto L_08807304;
    case 759u: goto L_0880731C;
    case 760u: goto L_0880732C;
    case 761u: goto L_08807338;
    case 762u: goto L_08807370;
    case 763u: goto L_08807384;
    case 764u: goto L_088073A4;
    case 765u: goto L_088073F4;
    case 766u: goto L_08807444;
    case 767u: goto L_0880744C;
    case 768u: goto L_08807464;
    case 769u: goto L_08807470;
    case 770u: goto L_0880747C;
    case 771u: goto L_08807524;
    case 772u: goto L_08807548;
    case 773u: goto L_08807568;
    case 774u: goto L_0880758C;
    case 775u: goto L_0880759C;
    case 776u: goto L_088075A4;
    case 777u: goto L_088075AC;
    case 778u: goto L_088075B4;
    case 779u: goto L_088075C8;
    case 780u: goto L_088075E0;
    case 781u: goto L_088075F0;
    case 782u: goto L_08807600;
    case 783u: goto L_08807628;
    case 784u: goto L_08807644;
    case 785u: goto L_08807658;
    case 786u: goto L_0880766C;
    case 787u: goto L_08807678;
    case 788u: goto L_08807694;
    case 789u: goto L_0880769C;
    case 790u: goto L_088076AC;
    case 791u: goto L_088076B0;
    case 792u: goto L_088076EC;
    case 793u: goto L_088076F8;
    case 794u: goto L_08807708;
    case 795u: goto L_08807724;
    case 796u: goto L_08807734;
    case 797u: goto L_08807740;
    case 798u: goto L_08807748;
    case 799u: goto L_08807750;
    case 800u: goto L_0880775C;
    case 801u: goto L_08807768;
    case 802u: goto L_08807770;
    case 803u: goto L_08807778;
    case 804u: goto L_08807780;
    case 805u: goto L_08807790;
    case 806u: goto L_088077DC;
    case 807u: goto L_088077E4;
    case 808u: goto L_088077EC;
    case 809u: goto L_088077F4;
    case 810u: goto L_08807820;
    case 811u: goto L_0880782C;
    case 812u: goto L_08807898;
    case 813u: goto L_088078A4;
    case 814u: goto L_0880791C;
    case 815u: goto L_08807990;
    case 816u: goto L_08807A8C;
    case 817u: goto L_08807AB8;
    case 818u: goto L_08807AC4;
    case 819u: goto L_08807B34;
    case 820u: goto L_08807B3C;
    case 821u: goto L_08807B50;
    case 822u: goto L_08807B64;
    case 823u: goto L_08807B78;
    case 824u: goto L_08807B90;
    case 825u: goto L_08807BD0;
    case 826u: goto L_08807C04;
    case 827u: goto L_08807C14;
    case 828u: goto L_08807C58;
    case 829u: goto L_08807D1C;
    case 830u: goto L_08807D94;
    case 831u: goto L_08807DA4;
    case 832u: goto L_08807DDC;
    case 833u: goto L_08807DEC;
    case 834u: goto L_08807DF4;
    case 835u: goto L_08807E00;
    case 836u: goto L_08807E10;
    case 837u: goto L_08807E14;
    case 838u: goto L_08807F38;
    case 839u: goto L_08807F94;
    case 840u: goto L_08807FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08804000:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(28));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(30));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(30));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08804088:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088040A8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 92u, 0x0890C78Cu>(ctx, &aot_mem) && ctx.pc == 0x088040A8u) goto L_088040A8;
    return;
L_088040A8:
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088040BCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14924));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 395u, 0x08A4B388u>(ctx, &aot_mem) && ctx.pc == 0x088040BCu) goto L_088040BC;
    return;
L_088040BC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088040C8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 29u, 0x0890C2B8u>(ctx, &aot_mem) && ctx.pc == 0x088040C8u) goto L_088040C8;
    return;
L_088040C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088040DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088040F0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-14924));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 398u, 0x08A4B3B8u>(ctx, &aot_mem) && ctx.pc == 0x088040F0u) goto L_088040F0;
    return;
L_088040F0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088040FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880413Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 459u, 0x08A01F88u>(ctx, &aot_mem) && ctx.pc == 0x0880413Cu) goto L_0880413C;
    return;
L_0880413C:
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08804158u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 702u, 0x089BF670u>(ctx, &aot_mem) && ctx.pc == 0x08804158u) goto L_08804158;
    return;
L_08804158:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08804170u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 702u, 0x089BF670u>(ctx, &aot_mem) && ctx.pc == 0x08804170u) goto L_08804170;
    return;
L_08804170:
    ctx.gpr[4] = (16608u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08804190u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08804190u) goto L_08804190;
    return;
L_08804190:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088041B8;
      }
      goto L_0880419C;
    }
L_0880419C:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088041B0u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 794u, 0x089BFB94u>(ctx, &aot_mem) && ctx.pc == 0x088041B0u) goto L_088041B0;
    return;
L_088041B0:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    goto L_088041B8;
L_088041B8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (16224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (0u | 0u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 255u);
    ctx.gpr[31] = (0x088041E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x088041E0u) goto L_088041E0;
    return;
L_088041E0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880424C;
      }
      goto L_088041EC;
    }
L_088041EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088041F8u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x088041F8u) goto L_088041F8;
    return;
L_088041F8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08804210u);
    ctx.gpr[20] = (ctx.gpr[20] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08804210u) goto L_08804210;
    return;
L_08804210:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08804228u);
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08804228u) goto L_08804228;
    return;
L_08804228:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08804240u);
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08804240u) goto L_08804240;
    return;
L_08804240:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    goto L_0880424C;
L_0880424C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08804264u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08804264u) goto L_08804264;
    return;
L_08804264:
    ctx.gpr[31] = (0x0880426Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x0880426Cu) goto L_0880426C;
    return;
L_0880426C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08804288;
      }
      goto L_08804278;
    }
L_08804278:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08804284u);
    ctx.gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08804284u) goto L_08804284;
    return;
L_08804284:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08804288;
L_08804288:
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x08804294u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08804294u) goto L_08804294;
    return;
L_08804294:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088042B0;
      }
      goto L_088042A0;
    }
L_088042A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088042ACu);
    ctx.gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x088042ACu) goto L_088042AC;
    return;
L_088042AC:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088042B0;
L_088042B0:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088042C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x088042C0u) goto L_088042C0;
    return;
L_088042C0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 11 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(99)));
        goto L_088042E0;
    }
    goto L_088042CC;
L_088042CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088042D8u);
    ctx.gpr[5] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B88Cu>(ctx, &aot_mem) && ctx.pc == 0x088042D8u) goto L_088042D8;
    return;
L_088042D8:
    ctx.gpr[17] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(99)));
    goto L_088042E0;
L_088042E0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(98)));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(97)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[6] << 8u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[9] = (ctx.gpr[4] + ctx.gpr[9]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(172));
    ctx.gpr[31] = (0x08804330u);
    ctx.gpr[10] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 178u, 0x08AB8C64u>(ctx, &aot_mem) && ctx.pc == 0x08804330u) goto L_08804330;
    return;
L_08804330:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880433Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08804088;
L_0880433C:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08804378:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880438Cu);
    ctx.gpr[5] = (0u | 1u);
    goto L_088040DC;
L_0880438C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088043C4;
      }
      goto L_08804398;
    }
L_08804398:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 65535u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088043C4;
      }
      goto L_088043A8;
    }
L_088043A8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[31] = (0x088043BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(172));
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 194u, 0x08AB8E7Cu>(ctx, &aot_mem) && ctx.pc == 0x088043BCu) goto L_088043BC;
    return;
L_088043BC:
    ctx.gpr[4] = (0u | 65535u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_088043C4;
L_088043C4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088043D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x088043F8u);
    ctx.gpr[5] = (0u | 1u);
    goto L_088040DC;
L_088043F8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088044B0;
      }
      goto L_08804404;
    }
L_08804404:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 65535u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (2232u << 16u);
      if (branch_taken) {
          goto L_088044B0;
      }
      goto L_08804414;
    }
L_08804414:
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(5992));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(176)));
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08804468;
      }
      goto L_08804434;
    }
L_08804434:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_0880443C;
L_0880443C:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
        goto L_0880445C;
    }
    goto L_0880444C;
L_0880444C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08804460;
      }
      goto L_0880445C;
    }
L_0880445C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08804460;
L_08804460:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_0880443C;
    }
    goto L_08804468;
L_08804468:
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
        goto L_0880448C;
    }
    goto L_08804470;
L_08804470:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
        goto L_08804490;
    }
    goto L_08804488;
L_08804488:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_0880448C;
L_0880448C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    goto L_08804490;
L_08804490:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088044A8u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x088044A8u) goto L_088044A8;
    return;
L_088044A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088044B4;
      }
      goto L_088044B0;
    }
L_088044B0:
    ctx.gpr[2] = (0u | 0u);
    goto L_088044B4;
L_088044B4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088044C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088044D8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B88Cu>(ctx, &aot_mem) && ctx.pc == 0x088044D8u) goto L_088044D8;
    return;
L_088044D8:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[31] = (0x088044ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(172));
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 236u, 0x08AB91A4u>(ctx, &aot_mem) && ctx.pc == 0x088044ECu) goto L_088044EC;
    return;
L_088044EC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088044FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08804528;
      }
      goto L_08804518;
    }
L_08804518:
    ctx.gpr[31] = (0x08804520u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x08804520u) goto L_08804520;
    return;
L_08804520:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[5] = (2227u << 16u);
    goto L_08804528;
L_08804528:
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08804538u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-14924));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 5u, 0x0883C058u>(ctx, &aot_mem) && ctx.pc == 0x08804538u) goto L_08804538;
    return;
L_08804538:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08804554;
      }
      goto L_08804544;
    }
L_08804544:
    ctx.gpr[31] = (0x0880454Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x0880454Cu) goto L_0880454C;
    return;
L_0880454C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[5] = (2227u << 16u);
    goto L_08804554;
L_08804554:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08804560u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 787u, 0x0883BFF4u>(ctx, &aot_mem) && ctx.pc == 0x08804560u) goto L_08804560;
    return;
L_08804560:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08804570:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08804590u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 92u, 0x0890C78Cu>(ctx, &aot_mem) && ctx.pc == 0x08804590u) goto L_08804590;
    return;
L_08804590:
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088045A4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14912));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 395u, 0x08A4B388u>(ctx, &aot_mem) && ctx.pc == 0x088045A4u) goto L_088045A4;
    return;
L_088045A4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088045B0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 29u, 0x0890C2B8u>(ctx, &aot_mem) && ctx.pc == 0x088045B0u) goto L_088045B0;
    return;
L_088045B0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088045C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088045D8u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-14912));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 398u, 0x08A4B3B8u>(ctx, &aot_mem) && ctx.pc == 0x088045D8u) goto L_088045D8;
    return;
L_088045D8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088045E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[21]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    ctx.gpr[31] = (0x08804628u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 702u, 0x089BF670u>(ctx, &aot_mem) && ctx.pc == 0x08804628u) goto L_08804628;
    return;
L_08804628:
    ctx.gpr[4] = (16608u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08804648u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08804648u) goto L_08804648;
    return;
L_08804648:
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(5992));
      if (branch_taken) {
          goto L_08804674;
      }
      goto L_08804658;
    }
L_08804658:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880466Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 794u, 0x089BFB94u>(ctx, &aot_mem) && ctx.pc == 0x0880466Cu) goto L_0880466C;
    return;
L_0880466C:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    goto L_08804674;
L_08804674:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (16224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (255u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08804690u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08804690u) goto L_08804690;
    return;
L_08804690:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088046D8;
      }
      goto L_0880469C;
    }
L_0880469C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088046A8u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x088046A8u) goto L_088046A8;
    return;
L_088046A8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088046BCu);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 101u, 0x088A8530u>(ctx, &aot_mem) && ctx.pc == 0x088046BCu) goto L_088046BC;
    return;
L_088046BC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[18]);
    goto L_088046D8;
L_088046D8:
    ctx.gpr[31] = (0x088046E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x088046E0u) goto L_088046E0;
    return;
L_088046E0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088046FC;
      }
      goto L_088046EC;
    }
L_088046EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088046F8u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x088046F8u) goto L_088046F8;
    return;
L_088046F8:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088046FC;
L_088046FC:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(204));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08804714u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 462u, 0x089D1C8Cu>(ctx, &aot_mem) && ctx.pc == 0x08804714u) goto L_08804714;
    return;
L_08804714:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08804720u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08804570;
L_08804720:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880474C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08804760u);
    ctx.gpr[5] = (0u | 1u);
    goto L_088045C4;
L_08804760:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08804798;
      }
      goto L_0880476C;
    }
L_0880476C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 65535u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08804798;
      }
      goto L_0880477C;
    }
L_0880477C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[31] = (0x08804790u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(204));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 488u, 0x089D1E64u>(ctx, &aot_mem) && ctx.pc == 0x08804790u) goto L_08804790;
    return;
L_08804790:
    ctx.gpr[4] = (0u | 65535u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08804798;
L_08804798:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088047AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_088047D8;
      }
      goto L_088047C8;
    }
L_088047C8:
    ctx.gpr[31] = (0x088047D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x088047D0u) goto L_088047D0;
    return;
L_088047D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[5] = (2227u << 16u);
    goto L_088047D8;
L_088047D8:
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(136));
    ctx.gpr[31] = (0x088047E8u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-14912));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 5u, 0x0883C058u>(ctx, &aot_mem) && ctx.pc == 0x088047E8u) goto L_088047E8;
    return;
L_088047E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08804804;
      }
      goto L_088047F4;
    }
L_088047F4:
    ctx.gpr[31] = (0x088047FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x088047FCu) goto L_088047FC;
    return;
L_088047FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[5] = (2227u << 16u);
    goto L_08804804;
L_08804804:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08804810u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(152));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 787u, 0x0883BFF4u>(ctx, &aot_mem) && ctx.pc == 0x08804810u) goto L_08804810;
    return;
L_08804810:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08804820:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08804848u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08804848u) goto L_08804848;
    return;
L_08804848:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880485Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14804));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x0880485Cu) goto L_0880485C;
    return;
L_0880485C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08804868u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 703u, 0x0890BE84u>(ctx, &aot_mem) && ctx.pc == 0x08804868u) goto L_08804868;
    return;
L_08804868:
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (2230u << 16u);
      if (branch_taken) {
          goto L_0880492C;
      }
      goto L_08804878;
    }
L_08804878:
    ctx.gpr[18] = (2225u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-14576));
    goto L_08804880;
L_08804880:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880488Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x0880488Cu) goto L_0880488C;
    return;
L_0880488C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08804898u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x08804898u) goto L_08804898;
    return;
L_08804898:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x088048A8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 45u, 0x0890C3ECu>(ctx, &aot_mem) && ctx.pc == 0x088048A8u) goto L_088048A8;
    return;
L_088048A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088048B4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 625u, 0x0890B8D8u>(ctx, &aot_mem) && ctx.pc == 0x088048B4u) goto L_088048B4;
    return;
L_088048B4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088048D8;
      }
      goto L_088048C0;
    }
L_088048C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23884)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088048F0;
      }
      goto L_088048D0;
    }
L_088048D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08804904;
      }
      goto L_088048D8;
    }
L_088048D8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088048E8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14620));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 375u, 0x08A4B244u>(ctx, &aot_mem) && ctx.pc == 0x088048E8u) goto L_088048E8;
    return;
L_088048E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08804948;
      }
      goto L_088048F0;
    }
L_088048F0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088048FCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 657u, 0x08AEAD20u>(ctx, &aot_mem) && ctx.pc == 0x088048FCu) goto L_088048FC;
    return;
L_088048FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23884)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_08804904;
L_08804904:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08804910u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 657u, 0x08AEAD20u>(ctx, &aot_mem) && ctx.pc == 0x08804910u) goto L_08804910;
    return;
L_08804910:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880491Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x0880491Cu) goto L_0880491C;
    return;
L_0880491C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08804880;
      }
      goto L_0880492C;
    }
L_0880492C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23884)));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14572));
    ctx.gpr[31] = (0x08804944u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 657u, 0x08AEAD20u>(ctx, &aot_mem) && ctx.pc == 0x08804944u) goto L_08804944;
    return;
L_08804944:
    ctx.gpr[2] = (0u | 0u);
    goto L_08804948;
L_08804948:
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
L_0880496C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08804998u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 446u, 0x08A4B6CCu>(ctx, &aot_mem) && ctx.pc == 0x08804998u) goto L_08804998;
    return;
L_08804998:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_088049EC;
      }
      goto L_088049AC;
    }
L_088049AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088049B8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 419u, 0x08A4B504u>(ctx, &aot_mem) && ctx.pc == 0x088049B8u) goto L_088049B8;
    return;
L_088049B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088049C4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 587u, 0x0890B6D8u>(ctx, &aot_mem) && ctx.pc == 0x088049C4u) goto L_088049C4;
    return;
L_088049C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08804AC8;
      }
      goto L_088049CC;
    }
L_088049CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088049D8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x088049D8u) goto L_088049D8;
    return;
L_088049D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088049E4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x088049E4u) goto L_088049E4;
    return;
L_088049E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08804AD4;
      }
      goto L_088049EC;
    }
L_088049EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x088049FCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 423u, 0x08A4B554u>(ctx, &aot_mem) && ctx.pc == 0x088049FCu) goto L_088049FC;
    return;
L_088049FC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08804A14;
      }
      goto L_08804A08;
    }
L_08804A08:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 37 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08804A30;
      }
      goto L_08804A14;
    }
L_08804A14:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08804A2Cu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-14568));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 347u, 0x08A4B014u>(ctx, &aot_mem) && ctx.pc == 0x08804A2Cu) goto L_08804A2C;
    return;
L_08804A2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_08804A30;
L_08804A30:
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08804A40u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 364u, 0x08AED430u>(ctx, &aot_mem) && ctx.pc == 0x08804A40u) goto L_08804A40;
    return;
L_08804A40:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[18];
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08804AC8;
      }
      goto L_08804A4C;
    }
L_08804A4C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-24896));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[5] & 255u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[7] & 8u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08804A98;
      }
      goto L_08804A74;
    }
L_08804A74:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08804A78;
L_08804A78:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[5] & 255u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[7] & 8u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08804A78;
      }
      goto L_08804A98;
    }
L_08804A98:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08804AC8;
      }
      goto L_08804AA0;
    }
L_08804AA0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08804AB8;
      }
      goto L_08804AAC;
    }
L_08804AAC:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08804AB8;
L_08804AB8:
    ctx.gpr[31] = (0x08804AC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08804AC0u) goto L_08804AC0;
    return;
L_08804AC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08804AD4;
      }
      goto L_08804AC8;
    }
L_08804AC8:
    ctx.gpr[31] = (0x08804AD0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 674u, 0x0890BB54u>(ctx, &aot_mem) && ctx.pc == 0x08804AD0u) goto L_08804AD0;
    return;
L_08804AD0:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_08804AD4;
L_08804AD4:
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
L_08804AF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08804B14u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 446u, 0x08A4B6CCu>(ctx, &aot_mem) && ctx.pc == 0x08804B14u) goto L_08804B14;
    return;
L_08804B14:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08804B28u);
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 419u, 0x08A4B504u>(ctx, &aot_mem) && ctx.pc == 0x08804B28u) goto L_08804B28;
    return;
L_08804B28:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08804B34u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 594u, 0x0890B730u>(ctx, &aot_mem) && ctx.pc == 0x08804B34u) goto L_08804B34;
    return;
L_08804B34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08804B44;
      }
      goto L_08804B3C;
    }
L_08804B3C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08804B58;
      }
      goto L_08804B44;
    }
L_08804B44:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08804B50u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x08804B50u) goto L_08804B50;
    return;
L_08804B50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08804B7C;
      }
      goto L_08804B58;
    }
L_08804B58:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08804B64u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 367u, 0x08A4B1B4u>(ctx, &aot_mem) && ctx.pc == 0x08804B64u) goto L_08804B64;
    return;
L_08804B64:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08804B70u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x08804B70u) goto L_08804B70;
    return;
L_08804B70:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08804B7Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 83u, 0x0890C6C0u>(ctx, &aot_mem) && ctx.pc == 0x08804B7Cu) goto L_08804B7C;
    return;
L_08804B7C:
    ctx.gpr[31] = (0x08804B84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 75u, 0x0890C64Cu>(ctx, &aot_mem) && ctx.pc == 0x08804B84u) goto L_08804B84;
    return;
L_08804B84:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08804B98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08804BB8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 419u, 0x08A4B504u>(ctx, &aot_mem) && ctx.pc == 0x08804BB8u) goto L_08804BB8;
    return;
L_08804BB8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08804BC4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 3u, 0x0890C03Cu>(ctx, &aot_mem) && ctx.pc == 0x08804BC4u) goto L_08804BC4;
    return;
L_08804BC4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08804BDC;
      }
      goto L_08804BCC;
    }
L_08804BCC:
    ctx.gpr[31] = (0x08804BD4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 674u, 0x0890BB54u>(ctx, &aot_mem) && ctx.pc == 0x08804BD4u) goto L_08804BD4;
    return;
L_08804BD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08804BF4;
      }
      goto L_08804BDC;
    }
L_08804BDC:
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08804BF0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-14548));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 451u, 0x08A4B724u>(ctx, &aot_mem) && ctx.pc == 0x08804BF0u) goto L_08804BF0;
    return;
L_08804BF0:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_08804BF4;
L_08804BF4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08804C08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08804C2Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B630u>(ctx, &aot_mem) && ctx.pc == 0x08804C2Cu) goto L_08804C2C;
    return;
L_08804C2C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[17] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08804C48u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 415u, 0x08A4B4B0u>(ctx, &aot_mem) && ctx.pc == 0x08804C48u) goto L_08804C48;
    return;
L_08804C48:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08804C68;
      }
      goto L_08804C50;
    }
L_08804C50:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[17];
    ctx.gpr[6] = (2225u << 16u);
      if (branch_taken) {
          goto L_08804C68;
      }
      goto L_08804C58;
    }
L_08804C58:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08804C68u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-14536));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 347u, 0x08A4B014u>(ctx, &aot_mem) && ctx.pc == 0x08804C68u) goto L_08804C68;
    return;
L_08804C68:
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08804C7Cu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-14548));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 451u, 0x08A4B724u>(ctx, &aot_mem) && ctx.pc == 0x08804C7Cu) goto L_08804C7C;
    return;
L_08804C7C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08804C94;
      }
      goto L_08804C84;
    }
L_08804C84:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08804C94u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14512));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 375u, 0x08A4B244u>(ctx, &aot_mem) && ctx.pc == 0x08804C94u) goto L_08804C94;
    return;
L_08804C94:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08804CA0u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x08804CA0u) goto L_08804CA0;
    return;
L_08804CA0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08804CACu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 29u, 0x0890C2B8u>(ctx, &aot_mem) && ctx.pc == 0x08804CACu) goto L_08804CAC;
    return;
L_08804CAC:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_08804CCC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[31]);
    ctx.gpr[31] = (0x08804CECu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B630u>(ctx, &aot_mem) && ctx.pc == 0x08804CECu) goto L_08804CEC;
    return;
L_08804CEC:
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08804D0C;
      }
      goto L_08804CF8;
    }
L_08804CF8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08804D04u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x08804D04u) goto L_08804D04;
    return;
L_08804D04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08804DAC;
      }
      goto L_08804D0C;
    }
L_08804D0C:
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08804D20u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 446u, 0x08A4B6CCu>(ctx, &aot_mem) && ctx.pc == 0x08804D20u) goto L_08804D20;
    return;
L_08804D20:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08804D44;
      }
      goto L_08804D30;
    }
L_08804D30:
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08804D44u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-14476));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 347u, 0x08A4B014u>(ctx, &aot_mem) && ctx.pc == 0x08804D44u) goto L_08804D44;
    return;
L_08804D44:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08804D54u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 154u, 0x08A00A80u>(ctx, &aot_mem) && ctx.pc == 0x08804D54u) goto L_08804D54;
    return;
L_08804D54:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08804D70;
      }
      goto L_08804D5C;
    }
L_08804D5C:
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08804D70u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-14448));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 347u, 0x08A4B014u>(ctx, &aot_mem) && ctx.pc == 0x08804D70u) goto L_08804D70;
    return;
L_08804D70:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08804D84u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14432));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 229u, 0x08A01008u>(ctx, &aot_mem) && ctx.pc == 0x08804D84u) goto L_08804D84;
    return;
L_08804D84:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08804D90u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B630u>(ctx, &aot_mem) && ctx.pc == 0x08804D90u) goto L_08804D90;
    return;
L_08804D90:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08804DAC;
      }
      goto L_08804D98;
    }
L_08804D98:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08804DACu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14428));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 375u, 0x08A4B244u>(ctx, &aot_mem) && ctx.pc == 0x08804DACu) goto L_08804DAC;
    return;
L_08804DAC:
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
L_08804DC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08804DDCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 15u, 0x0890C0ECu>(ctx, &aot_mem) && ctx.pc == 0x08804DDCu) goto L_08804DDC;
    return;
L_08804DDC:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x08804DF0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14376));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x08804DF0u) goto L_08804DF0;
    return;
L_08804DF0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08804DFCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 706u, 0x0890BEF0u>(ctx, &aot_mem) && ctx.pc == 0x08804DFCu) goto L_08804DFC;
    return;
L_08804DFC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08804E08u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B630u>(ctx, &aot_mem) && ctx.pc == 0x08804E08u) goto L_08804E08;
    return;
L_08804E08:
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08804E1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08804E30u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08804CCC;
L_08804E30:
    ctx.gpr[31] = (0x08804E38u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08804DC4;
L_08804E38:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08804E4C;
      }
      goto L_08804E40;
    }
L_08804E40:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08804E4Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x08804E4Cu) goto L_08804E4C;
    return;
L_08804E4C:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08804E60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08804E7Cu);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 415u, 0x08A4B4B0u>(ctx, &aot_mem) && ctx.pc == 0x08804E7Cu) goto L_08804E7C;
    return;
L_08804E7C:
    ctx.gpr[31] = (0x08804E84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08804CCC;
L_08804E84:
    ctx.gpr[31] = (0x08804E8Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08804DC4;
L_08804E8C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08804EAC;
      }
      goto L_08804E94;
    }
L_08804E94:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08804EA4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14368));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 375u, 0x08A4B244u>(ctx, &aot_mem) && ctx.pc == 0x08804EA4u) goto L_08804EA4;
    return;
L_08804EA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08804EB8;
      }
      goto L_08804EAC;
    }
L_08804EAC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08804EB8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x08804EB8u) goto L_08804EB8;
    return;
L_08804EB8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08804EC4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x08804EC4u) goto L_08804EC4;
    return;
L_08804EC4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08804ED0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 587u, 0x0890B6D8u>(ctx, &aot_mem) && ctx.pc == 0x08804ED0u) goto L_08804ED0;
    return;
L_08804ED0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08804F08;
      }
      goto L_08804ED8;
    }
L_08804ED8:
    ctx.gpr[31] = (0x08804EE0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08804EE0u) goto L_08804EE0;
    return;
L_08804EE0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[12])) && ctx.fpr[0] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08804F08;
      }
      goto L_08804EF4;
    }
L_08804EF4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08804F00u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 570u, 0x0890B56Cu>(ctx, &aot_mem) && ctx.pc == 0x08804F00u) goto L_08804F00;
    return;
L_08804F00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08804F2C;
      }
      goto L_08804F08;
    }
L_08804F08:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08804F14u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 40u, 0x0890C36Cu>(ctx, &aot_mem) && ctx.pc == 0x08804F14u) goto L_08804F14;
    return;
L_08804F14:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08804F2C;
      }
      goto L_08804F1C;
    }
L_08804F1C:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08804F2Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14320));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 375u, 0x08A4B244u>(ctx, &aot_mem) && ctx.pc == 0x08804F2Cu) goto L_08804F2C;
    return;
L_08804F2C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08804F40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08804F60u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 419u, 0x08A4B504u>(ctx, &aot_mem) && ctx.pc == 0x08804F60u) goto L_08804F60;
    return;
L_08804F60:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08804F6Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 419u, 0x08A4B504u>(ctx, &aot_mem) && ctx.pc == 0x08804F6Cu) goto L_08804F6C;
    return;
L_08804F6C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08804F7Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 596u, 0x0890B760u>(ctx, &aot_mem) && ctx.pc == 0x08804F7Cu) goto L_08804F7C;
    return;
L_08804F7C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08804F88u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08804F88u) goto L_08804F88;
    return;
L_08804F88:
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
L_08804FA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08804FC4u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 415u, 0x08A4B4B0u>(ctx, &aot_mem) && ctx.pc == 0x08804FC4u) goto L_08804FC4;
    return;
L_08804FC4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08804FD0u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 419u, 0x08A4B504u>(ctx, &aot_mem) && ctx.pc == 0x08804FD0u) goto L_08804FD0;
    return;
L_08804FD0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08804FDCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 706u, 0x0890BEF0u>(ctx, &aot_mem) && ctx.pc == 0x08804FDCu) goto L_08804FDC;
    return;
L_08804FDC:
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
L_08804FF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08805018u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 415u, 0x08A4B4B0u>(ctx, &aot_mem) && ctx.pc == 0x08805018u) goto L_08805018;
    return;
L_08805018:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805024u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 419u, 0x08A4B504u>(ctx, &aot_mem) && ctx.pc == 0x08805024u) goto L_08805024;
    return;
L_08805024:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805030u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 419u, 0x08A4B504u>(ctx, &aot_mem) && ctx.pc == 0x08805030u) goto L_08805030;
    return;
L_08805030:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880503Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 23u, 0x0890C1BCu>(ctx, &aot_mem) && ctx.pc == 0x0880503Cu) goto L_0880503C;
    return;
L_0880503C:
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
L_08805054:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08805068u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 68u, 0x0890C5D0u>(ctx, &aot_mem) && ctx.pc == 0x08805068u) goto L_08805068;
    return;
L_08805068:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805078u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08805078u) goto L_08805078;
    return;
L_08805078:
    ctx.gpr[31] = (0x08805080u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 67u, 0x0890C5C0u>(ctx, &aot_mem) && ctx.pc == 0x08805080u) goto L_08805080;
    return;
L_08805080:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805090u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08805090u) goto L_08805090;
    return;
L_08805090:
    ctx.gpr[2] = (0u | 2u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088050A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088050C0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 446u, 0x08A4B6CCu>(ctx, &aot_mem) && ctx.pc == 0x088050C0u) goto L_088050C0;
    return;
L_088050C0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088050D0u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 69u, 0x0890C5E0u>(ctx, &aot_mem) && ctx.pc == 0x088050D0u) goto L_088050D0;
    return;
L_088050D0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088050E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08805104u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 419u, 0x08A4B504u>(ctx, &aot_mem) && ctx.pc == 0x08805104u) goto L_08805104;
    return;
L_08805104:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805110u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B630u>(ctx, &aot_mem) && ctx.pc == 0x08805110u) goto L_08805110;
    return;
L_08805110:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880511Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 577u, 0x0890B65Cu>(ctx, &aot_mem) && ctx.pc == 0x0880511Cu) goto L_0880511C;
    return;
L_0880511C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805128u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x08805128u) goto L_08805128;
    return;
L_08805128:
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
L_08805140:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08805168u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 415u, 0x08A4B4B0u>(ctx, &aot_mem) && ctx.pc == 0x08805168u) goto L_08805168;
    return;
L_08805168:
    ctx.gpr[17] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805178u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x08805178u) goto L_08805178;
    return;
L_08805178:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805184u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 77u, 0x0890C66Cu>(ctx, &aot_mem) && ctx.pc == 0x08805184u) goto L_08805184;
    return;
L_08805184:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08805194;
      }
      goto L_0880518C;
    }
L_0880518C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088051A0;
      }
      goto L_08805194;
    }
L_08805194:
    ctx.gpr[31] = (0x0880519Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 674u, 0x0890BB54u>(ctx, &aot_mem) && ctx.pc == 0x0880519Cu) goto L_0880519C;
    return;
L_0880519C:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_088051A0;
L_088051A0:
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
L_088051B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088051D4u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 415u, 0x08A4B4B0u>(ctx, &aot_mem) && ctx.pc == 0x088051D4u) goto L_088051D4;
    return;
L_088051D4:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088051E8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14848));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x088051E8u) goto L_088051E8;
    return;
L_088051E8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088051F4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 706u, 0x0890BEF0u>(ctx, &aot_mem) && ctx.pc == 0x088051F4u) goto L_088051F4;
    return;
L_088051F4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805200u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x08805200u) goto L_08805200;
    return;
L_08805200:
    ctx.gpr[31] = (0x08805208u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 674u, 0x0890BB54u>(ctx, &aot_mem) && ctx.pc == 0x08805208u) goto L_08805208;
    return;
L_08805208:
    ctx.gpr[2] = (0u | 3u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880521C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08805240u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08805240u) goto L_08805240;
    return;
L_08805240:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08805254u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 415u, 0x08A4B4B0u>(ctx, &aot_mem) && ctx.pc == 0x08805254u) goto L_08805254;
    return;
L_08805254:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[20])) && ctx.fpr[22] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0880527C;
      }
      goto L_08805268;
    }
L_08805268:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805274u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B630u>(ctx, &aot_mem) && ctx.pc == 0x08805274u) goto L_08805274;
    return;
L_08805274:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088052CC;
      }
      goto L_0880527C;
    }
L_0880527C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    ctx.fpr[20] = ctx.fpr[22] + ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08805298u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08805298u) goto L_08805298;
    return;
L_08805298:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x088052ACu);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 709u, 0x0890BF54u>(ctx, &aot_mem) && ctx.pc == 0x088052ACu) goto L_088052AC;
    return;
L_088052AC:
    ctx.gpr[16] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088052BCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B630u>(ctx, &aot_mem) && ctx.pc == 0x088052BCu) goto L_088052BC;
    return;
L_088052BC:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[16] = (0u | 0u);
        goto L_0880530C;
    }
    goto L_088052C4;
L_088052C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880530C;
      }
      goto L_088052CC;
    }
L_088052CC:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x088052E0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14840));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x088052E0u) goto L_088052E0;
    return;
L_088052E0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088052ECu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 706u, 0x0890BEF0u>(ctx, &aot_mem) && ctx.pc == 0x088052ECu) goto L_088052EC;
    return;
L_088052EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088052F8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x088052F8u) goto L_088052F8;
    return;
L_088052F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805304u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08805304u) goto L_08805304;
    return;
L_08805304:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 3u);
      if (branch_taken) {
          goto L_08805310;
      }
      goto L_0880530C;
    }
L_0880530C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08805310;
L_08805310:
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
L_0880532C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08805348;
      }
      goto L_08805340;
    }
L_08805340:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08805360;
      }
      goto L_08805348;
    }
L_08805348:
    ctx.gpr[31] = (0x08805350u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 674u, 0x0890BB54u>(ctx, &aot_mem) && ctx.pc == 0x08805350u) goto L_08805350;
    return;
L_08805350:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880535Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 565u, 0x0890B4E4u>(ctx, &aot_mem) && ctx.pc == 0x0880535Cu) goto L_0880535C;
    return;
L_0880535C:
    ctx.gpr[2] = (0u | 2u);
    goto L_08805360;
L_08805360:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08805370:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08805390u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 423u, 0x08A4B554u>(ctx, &aot_mem) && ctx.pc == 0x08805390u) goto L_08805390;
    return;
L_08805390:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088053A8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 430u, 0x08A4B5D0u>(ctx, &aot_mem) && ctx.pc == 0x088053A8u) goto L_088053A8;
    return;
L_088053A8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088053BCu);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 62u, 0x08A4C3FCu>(ctx, &aot_mem) && ctx.pc == 0x088053BCu) goto L_088053BC;
    return;
L_088053BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088053C8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_0880532C;
L_088053C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088053DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088053FCu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 430u, 0x08A4B5D0u>(ctx, &aot_mem) && ctx.pc == 0x088053FCu) goto L_088053FC;
    return;
L_088053FC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805408u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 19u, 0x08A4C180u>(ctx, &aot_mem) && ctx.pc == 0x08805408u) goto L_08805408;
    return;
L_08805408:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805414u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_0880532C;
L_08805414:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08805424:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880544Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 430u, 0x08A4B5D0u>(ctx, &aot_mem) && ctx.pc == 0x0880544Cu) goto L_0880544C;
    return;
L_0880544C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08805458u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08805458u) goto L_08805458;
    return;
L_08805458:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805468u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 19u, 0x08A4C180u>(ctx, &aot_mem) && ctx.pc == 0x08805468u) goto L_08805468;
    return;
L_08805468:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08805478;
      }
      goto L_08805470;
    }
L_08805470:
    ctx.gpr[31] = (0x08805478u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 75u, 0x0890C64Cu>(ctx, &aot_mem) && ctx.pc == 0x08805478u) goto L_08805478;
    return;
L_08805478:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08805488u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 45u, 0x0890C3ECu>(ctx, &aot_mem) && ctx.pc == 0x08805488u) goto L_08805488;
    return;
L_08805488:
    ctx.gpr[31] = (0x08805490u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08805490u) goto L_08805490;
    return;
L_08805490:
    ctx.gpr[2] = (ctx.gpr[2] - ctx.gpr[17]);
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
L_088054AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088054CCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 419u, 0x08A4B504u>(ctx, &aot_mem) && ctx.pc == 0x088054CCu) goto L_088054CC;
    return;
L_088054CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088054D8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B88Cu>(ctx, &aot_mem) && ctx.pc == 0x088054D8u) goto L_088054D8;
    return;
L_088054D8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08805518;
      }
      goto L_088054E0;
    }
L_088054E0:
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[17] = (ctx.gpr[6] + static_cast<std::uint32_t>(-14264));
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08805500u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-14260));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 430u, 0x08A4B5D0u>(ctx, &aot_mem) && ctx.pc == 0x08805500u) goto L_08805500;
    return;
L_08805500:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08805510u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 375u, 0x08A4B244u>(ctx, &aot_mem) && ctx.pc == 0x08805510u) goto L_08805510;
    return;
L_08805510:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08805528;
      }
      goto L_08805518;
    }
L_08805518:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805524u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x08805524u) goto L_08805524;
    return;
L_08805524:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_08805528;
L_08805528:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880553C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08805560u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 415u, 0x08A4B4B0u>(ctx, &aot_mem) && ctx.pc == 0x08805560u) goto L_08805560;
    return;
L_08805560:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880556Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 534u, 0x08A4BBE4u>(ctx, &aot_mem) && ctx.pc == 0x0880556Cu) goto L_0880556C;
    return;
L_0880556C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08805584u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-14240));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 411u, 0x08A4B464u>(ctx, &aot_mem) && ctx.pc == 0x08805584u) goto L_08805584;
    return;
L_08805584:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_088055B0;
      }
      goto L_08805590;
    }
L_08805590:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x088055A0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 709u, 0x0890BF54u>(ctx, &aot_mem) && ctx.pc == 0x088055A0u) goto L_088055A0;
    return;
L_088055A0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08805590;
      }
      goto L_088055B0;
    }
L_088055B0:
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
L_088055CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088055E4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 419u, 0x08A4B504u>(ctx, &aot_mem) && ctx.pc == 0x088055E4u) goto L_088055E4;
    return;
L_088055E4:
    ctx.gpr[31] = (0x088055ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x088055ECu) goto L_088055EC;
    return;
L_088055EC:
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08805600u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 49u, 0x0890C434u>(ctx, &aot_mem) && ctx.pc == 0x08805600u) goto L_08805600;
    return;
L_08805600:
    ctx.gpr[5] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[31] = (0x0880560Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x0880560Cu) goto L_0880560C;
    return;
L_0880560C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805618u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 565u, 0x0890B4E4u>(ctx, &aot_mem) && ctx.pc == 0x08805618u) goto L_08805618;
    return;
L_08805618:
    ctx.gpr[31] = (0x08805620u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08805620u) goto L_08805620;
    return;
L_08805620:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08805630:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08805648u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 419u, 0x08A4B504u>(ctx, &aot_mem) && ctx.pc == 0x08805648u) goto L_08805648;
    return;
L_08805648:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805654u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x08805654u) goto L_08805654;
    return;
L_08805654:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805660u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 565u, 0x0890B4E4u>(ctx, &aot_mem) && ctx.pc == 0x08805660u) goto L_08805660;
    return;
L_08805660:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08805674u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 49u, 0x0890C434u>(ctx, &aot_mem) && ctx.pc == 0x08805674u) goto L_08805674;
    return;
L_08805674:
    ctx.gpr[5] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[31] = (0x08805680u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08805680u) goto L_08805680;
    return;
L_08805680:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880568Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 570u, 0x0890B56Cu>(ctx, &aot_mem) && ctx.pc == 0x0880568Cu) goto L_0880568C;
    return;
L_0880568C:
    ctx.gpr[31] = (0x08805694u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08805694u) goto L_08805694;
    return;
L_08805694:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088056A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[31]);
    ctx.gpr[31] = (0x088056C8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 419u, 0x08A4B504u>(ctx, &aot_mem) && ctx.pc == 0x088056C8u) goto L_088056C8;
    return;
L_088056C8:
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x088056DCu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-14216));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 463u, 0x08A4B7B4u>(ctx, &aot_mem) && ctx.pc == 0x088056DCu) goto L_088056DC;
    return;
L_088056DC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08805718;
      }
      goto L_088056E4;
    }
L_088056E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088056F0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B630u>(ctx, &aot_mem) && ctx.pc == 0x088056F0u) goto L_088056F0;
    return;
L_088056F0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088057B0;
      }
      goto L_08805700;
    }
L_08805700:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-13720)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08805718:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08805860;
      }
      goto L_08805720;
    }
L_08805720:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880572Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 625u, 0x0890B8D8u>(ctx, &aot_mem) && ctx.pc == 0x0880572Cu) goto L_0880572C;
    return;
L_0880572C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805738u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x08805738u) goto L_08805738;
    return;
L_08805738:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08805860;
      }
      goto L_08805740;
    }
L_08805740:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880574Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x0880574Cu) goto L_0880574C;
    return;
L_0880574C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08805860;
      }
      goto L_08805754;
    }
L_08805754:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805760u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B88Cu>(ctx, &aot_mem) && ctx.pc == 0x08805760u) goto L_08805760;
    return;
L_08805760:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2225u << 16u);
      if (branch_taken) {
          goto L_08805774;
      }
      goto L_08805768;
    }
L_08805768:
    ctx.gpr[4] = (2225u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14204));
      if (branch_taken) {
          goto L_08805778;
      }
      goto L_08805774;
    }
L_08805774:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14196));
    goto L_08805778;
L_08805778:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08805784u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x08805784u) goto L_08805784;
    return;
L_08805784:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08805860;
      }
      goto L_0880578C;
    }
L_0880578C:
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x088057A0u);
    ctx.gpr[18] = (ctx.gpr[6] + static_cast<std::uint32_t>(-14188));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 662u, 0x0890BAB4u>(ctx, &aot_mem) && ctx.pc == 0x088057A0u) goto L_088057A0;
    return;
L_088057A0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088057B0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x088057B0u) goto L_088057B0;
    return;
L_088057B0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x088057BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x088057BCu) goto L_088057BC;
    return;
L_088057BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08805860;
      }
      goto L_088057C4;
    }
L_088057C4:
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x088057D8u);
    ctx.gpr[18] = (ctx.gpr[6] + static_cast<std::uint32_t>(-14176));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 662u, 0x0890BAB4u>(ctx, &aot_mem) && ctx.pc == 0x088057D8u) goto L_088057D8;
    return;
L_088057D8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088057E8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x088057E8u) goto L_088057E8;
    return;
L_088057E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088057B0;
      }
      goto L_088057F0;
    }
L_088057F0:
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08805804u);
    ctx.gpr[18] = (ctx.gpr[6] + static_cast<std::uint32_t>(-14160));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 647u, 0x0890BA08u>(ctx, &aot_mem) && ctx.pc == 0x08805804u) goto L_08805804;
    return;
L_08805804:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08805814u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x08805814u) goto L_08805814;
    return;
L_08805814:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088057B0;
      }
      goto L_0880581C;
    }
L_0880581C:
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08805830u);
    ctx.gpr[18] = (ctx.gpr[6] + static_cast<std::uint32_t>(-14144));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 657u, 0x0890BA74u>(ctx, &aot_mem) && ctx.pc == 0x08805830u) goto L_08805830;
    return;
L_08805830:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08805840u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x08805840u) goto L_08805840;
    return;
L_08805840:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088057B0;
      }
      goto L_08805848;
    }
L_08805848:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x0880585Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14132));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0880585Cu) goto L_0880585C;
    return;
L_0880585C:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_08805860;
L_08805860:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08805878:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880589Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x0880589Cu) goto L_0880589C;
    return;
L_0880589C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088058A8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 92u, 0x0890C78Cu>(ctx, &aot_mem) && ctx.pc == 0x088058A8u) goto L_088058A8;
    return;
L_088058A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088058B4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B88Cu>(ctx, &aot_mem) && ctx.pc == 0x088058B4u) goto L_088058B4;
    return;
L_088058B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08805904;
      }
      goto L_088058BC;
    }
L_088058BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088058C8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B630u>(ctx, &aot_mem) && ctx.pc == 0x088058C8u) goto L_088058C8;
    return;
L_088058C8:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0880590C;
      }
      goto L_088058D0;
    }
L_088058D0:
    ctx.gpr[31] = (0x088058D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 712u, 0x0890BFC8u>(ctx, &aot_mem) && ctx.pc == 0x088058D8u) goto L_088058D8;
    return;
L_088058D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088058E4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x088058E4u) goto L_088058E4;
    return;
L_088058E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088058F0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x088058F0u) goto L_088058F0;
    return;
L_088058F0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088058FCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10002));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 23u, 0x0890C1BCu>(ctx, &aot_mem) && ctx.pc == 0x088058FCu) goto L_088058FC;
    return;
L_088058FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08805970;
      }
      goto L_08805904;
    }
L_08805904:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08805980;
      }
      goto L_0880590C;
    }
L_0880590C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880591Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 3u, 0x0890C03Cu>(ctx, &aot_mem) && ctx.pc == 0x0880591Cu) goto L_0880591C;
    return;
L_0880591C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880594C;
      }
      goto L_08805924;
    }
L_08805924:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805930u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10002));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 706u, 0x0890BEF0u>(ctx, &aot_mem) && ctx.pc == 0x08805930u) goto L_08805930;
    return;
L_08805930:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880593Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B88Cu>(ctx, &aot_mem) && ctx.pc == 0x0880593Cu) goto L_0880593C;
    return;
L_0880593C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880594Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x0880594Cu) goto L_0880594C;
    return;
L_0880594C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[6] = (2225u << 16u);
      if (branch_taken) {
          goto L_08805964;
      }
      goto L_08805954;
    }
L_08805954:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08805964u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-14128));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 347u, 0x08A4B014u>(ctx, &aot_mem) && ctx.pc == 0x08805964u) goto L_08805964;
    return;
L_08805964:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805970u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 3u, 0x0890C03Cu>(ctx, &aot_mem) && ctx.pc == 0x08805970u) goto L_08805970;
    return;
L_08805970:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880597Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 29u, 0x0890C2B8u>(ctx, &aot_mem) && ctx.pc == 0x0880597Cu) goto L_0880597C;
    return;
L_0880597C:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08805980;
L_08805980:
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
L_08805998:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088059B8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14100));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x088059B8u) goto L_088059B8;
    return;
L_088059B8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088059C4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 703u, 0x0890BE84u>(ctx, &aot_mem) && ctx.pc == 0x088059C4u) goto L_088059C4;
    return;
L_088059C4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088059D0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 625u, 0x0890B8D8u>(ctx, &aot_mem) && ctx.pc == 0x088059D0u) goto L_088059D0;
    return;
L_088059D0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088059E0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x088059E0u) goto L_088059E0;
    return;
L_088059E0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088059F0;
      }
      goto L_088059E8;
    }
L_088059E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088059F8;
      }
      goto L_088059F0;
    }
L_088059F0:
    ctx.gpr[2] = (2225u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-14088));
    goto L_088059F8;
L_088059F8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08805A0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08805A44;
      }
      goto L_08805A30;
    }
L_08805A30:
    ctx.gpr[5] = (0u | 59u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08805A4C;
      }
      goto L_08805A3C;
    }
L_08805A3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08805A50;
      }
      goto L_08805A44;
    }
L_08805A44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08805A88;
      }
      goto L_08805A4C;
    }
L_08805A4C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08805A50;
L_08805A50:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805A5Cu);
    ctx.gpr[5] = (0u | 59u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 398u, 0x08AED634u>(ctx, &aot_mem) && ctx.pc == 0x08805A5Cu) goto L_08805A5C;
    return;
L_08805A5C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08805A74;
      }
      goto L_08805A68;
    }
L_08805A68:
    ctx.gpr[31] = (0x08805A70u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08805A70u) goto L_08805A70;
    return;
L_08805A70:
    ctx.gpr[18] = (ctx.gpr[16] + ctx.gpr[2]);
    goto L_08805A74;
L_08805A74:
    ctx.gpr[6] = (ctx.gpr[18] - ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08805A84u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x08805A84u) goto L_08805A84;
    return;
L_08805A84:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08805A88;
L_08805A88:
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
L_08805AA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08805AC8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 625u, 0x0890B8D8u>(ctx, &aot_mem) && ctx.pc == 0x08805AC8u) goto L_08805AC8;
    return;
L_08805AC8:
    ctx.gpr[17] = (2225u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-14080));
    goto L_08805AD8;
L_08805AD8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08805AE4u);
    ctx.gpr[5] = (0u | 63u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 398u, 0x08AED634u>(ctx, &aot_mem) && ctx.pc == 0x08805AE4u) goto L_08805AE4;
    return;
L_08805AE4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08805B28;
      }
      goto L_08805AF0;
    }
L_08805AF0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x08805B00u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 411u, 0x08A4B464u>(ctx, &aot_mem) && ctx.pc == 0x08805B00u) goto L_08805B00;
    return;
L_08805B00:
    ctx.gpr[6] = (ctx.gpr[18] - ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805B10u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x08805B10u) goto L_08805B10;
    return;
L_08805B10:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805B1Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x08805B1Cu) goto L_08805B1C;
    return;
L_08805B1C:
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08805AD8;
      }
      goto L_08805B28;
    }
L_08805B28:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805B34u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x08805B34u) goto L_08805B34;
    return;
L_08805B34:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805B40u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 83u, 0x0890C6C0u>(ctx, &aot_mem) && ctx.pc == 0x08805B40u) goto L_08805B40;
    return;
L_08805B40:
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
L_08805B60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (0u | 2u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08805B94u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 423u, 0x08A4B554u>(ctx, &aot_mem) && ctx.pc == 0x08805B94u) goto L_08805B94;
    return;
L_08805B94:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805BA0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x08805BA0u) goto L_08805BA0;
    return;
L_08805BA0:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805BB0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14044));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x08805BB0u) goto L_08805BB0;
    return;
L_08805BB0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805BBCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 703u, 0x0890BE84u>(ctx, &aot_mem) && ctx.pc == 0x08805BBCu) goto L_08805BBC;
    return;
L_08805BBC:
    ctx.gpr[18] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805BCCu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B630u>(ctx, &aot_mem) && ctx.pc == 0x08805BCCu) goto L_08805BCC;
    return;
L_08805BCC:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08805C20;
      }
      goto L_08805BD8;
    }
L_08805BD8:
    ctx.gpr[31] = (0x08805BE0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08805998;
L_08805BE0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805BF0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x08805BF0u) goto L_08805BF0;
    return;
L_08805BF0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805BFCu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 706u, 0x0890BEF0u>(ctx, &aot_mem) && ctx.pc == 0x08805BFCu) goto L_08805BFC;
    return;
L_08805BFC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805C08u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B88Cu>(ctx, &aot_mem) && ctx.pc == 0x08805C08u) goto L_08805C08;
    return;
L_08805C08:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08805C18;
      }
      goto L_08805C10;
    }
L_08805C10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08805C38;
      }
      goto L_08805C18;
    }
L_08805C18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08805E1C;
      }
      goto L_08805C20;
    }
L_08805C20:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805C30u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14036));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 375u, 0x08A4B244u>(ctx, &aot_mem) && ctx.pc == 0x08805C30u) goto L_08805C30;
    return;
L_08805C30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08805E1C;
      }
      goto L_08805C38;
    }
L_08805C38:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805C44u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x08805C44u) goto L_08805C44;
    return;
L_08805C44:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805C50u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08805A0C;
L_08805C50:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08805C64;
      }
      goto L_08805C5C;
    }
L_08805C5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08805C90;
      }
      goto L_08805C64;
    }
L_08805C64:
    ctx.gpr[31] = (0x08805C6Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08805AA0;
L_08805C6C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805C78u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 625u, 0x0890B8D8u>(ctx, &aot_mem) && ctx.pc == 0x08805C78u) goto L_08805C78;
    return;
L_08805C78:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805C84u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 19u, 0x08A4C180u>(ctx, &aot_mem) && ctx.pc == 0x08805C84u) goto L_08805C84;
    return;
L_08805C84:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08805C38;
      }
      goto L_08805C90;
    }
L_08805C90:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) > 0;
    // nop
      if (branch_taken) {
          goto L_08805D98;
      }
      goto L_08805C98;
    }
L_08805C98:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
    // nop
      if (branch_taken) {
          goto L_08805D58;
      }
      goto L_08805CA0;
    }
L_08805CA0:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14008));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805CB4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x08805CB4u) goto L_08805CB4;
    return;
L_08805CB4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805CC0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 703u, 0x0890BE84u>(ctx, &aot_mem) && ctx.pc == 0x08805CC0u) goto L_08805CC0;
    return;
L_08805CC0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805CCCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 565u, 0x0890B4E4u>(ctx, &aot_mem) && ctx.pc == 0x08805CCCu) goto L_08805CCC;
    return;
L_08805CCC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805CD8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x08805CD8u) goto L_08805CD8;
    return;
L_08805CD8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805CE4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x08805CE4u) goto L_08805CE4;
    return;
L_08805CE4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805CF0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 565u, 0x0890B4E4u>(ctx, &aot_mem) && ctx.pc == 0x08805CF0u) goto L_08805CF0;
    return;
L_08805CF0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805CFCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x08805CFCu) goto L_08805CFC;
    return;
L_08805CFC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08805D0Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 45u, 0x0890C3ECu>(ctx, &aot_mem) && ctx.pc == 0x08805D0Cu) goto L_08805D0C;
    return;
L_08805D0C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805D18u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 565u, 0x0890B4E4u>(ctx, &aot_mem) && ctx.pc == 0x08805D18u) goto L_08805D18;
    return;
L_08805D18:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805D24u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x08805D24u) goto L_08805D24;
    return;
L_08805D24:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805D30u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 565u, 0x0890B4E4u>(ctx, &aot_mem) && ctx.pc == 0x08805D30u) goto L_08805D30;
    return;
L_08805D30:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805D3Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x08805D3Cu) goto L_08805D3C;
    return;
L_08805D3C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805D48u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B630u>(ctx, &aot_mem) && ctx.pc == 0x08805D48u) goto L_08805D48;
    return;
L_08805D48:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08805DDC;
      }
      goto L_08805D50;
    }
L_08805D50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08805DF4;
      }
      goto L_08805D58;
    }
L_08805D58:
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08805D6Cu);
    ctx.gpr[17] = (ctx.gpr[6] + static_cast<std::uint32_t>(-13948));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 625u, 0x0890B8D8u>(ctx, &aot_mem) && ctx.pc == 0x08805D6Cu) goto L_08805D6C;
    return;
L_08805D6C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805D7Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 625u, 0x0890B8D8u>(ctx, &aot_mem) && ctx.pc == 0x08805D7Cu) goto L_08805D7C;
    return;
L_08805D7C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08805D90u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 375u, 0x08A4B244u>(ctx, &aot_mem) && ctx.pc == 0x08805D90u) goto L_08805D90;
    return;
L_08805D90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08805E1C;
      }
      goto L_08805D98;
    }
L_08805D98:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08805D58;
      }
      goto L_08805DA0;
    }
L_08805DA0:
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08805DB4u);
    ctx.gpr[17] = (ctx.gpr[6] + static_cast<std::uint32_t>(-13992));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 625u, 0x0890B8D8u>(ctx, &aot_mem) && ctx.pc == 0x08805DB4u) goto L_08805DB4;
    return;
L_08805DB4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08805DC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08805998;
L_08805DC0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08805DD4u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 375u, 0x08A4B244u>(ctx, &aot_mem) && ctx.pc == 0x08805DD4u) goto L_08805DD4;
    return;
L_08805DD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08805E1C;
      }
      goto L_08805DDC;
    }
L_08805DDC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805DE8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08805DE8u) goto L_08805DE8;
    return;
L_08805DE8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805DF4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 570u, 0x0890B56Cu>(ctx, &aot_mem) && ctx.pc == 0x08805DF4u) goto L_08805DF4;
    return;
L_08805DF4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805E00u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x08805E00u) goto L_08805E00;
    return;
L_08805E00:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805E0Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x08805E0Cu) goto L_08805E0C;
    return;
L_08805E0C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805E18u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 23u, 0x0890C1BCu>(ctx, &aot_mem) && ctx.pc == 0x08805E18u) goto L_08805E18;
    return;
L_08805E18:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    goto L_08805E1C;
L_08805E1C:
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
L_08805E3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08805E68u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 536u, 0x0890B268u>(ctx, &aot_mem) && ctx.pc == 0x08805E68u) goto L_08805E68;
    return;
L_08805E68:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08805E80;
      }
      goto L_08805E70;
    }
L_08805E70:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08805E80u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13916));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 375u, 0x08A4B244u>(ctx, &aot_mem) && ctx.pc == 0x08805E80u) goto L_08805E80;
    return;
L_08805E80:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805E90u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 545u, 0x0890B30Cu>(ctx, &aot_mem) && ctx.pc == 0x08805E90u) goto L_08805E90;
    return;
L_08805E90:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805E9Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 384u, 0x088BA17Cu>(ctx, &aot_mem) && ctx.pc == 0x08805E9Cu) goto L_08805E9C;
    return;
L_08805E9C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08805EEC;
      }
      goto L_08805EA4;
    }
L_08805EA4:
    ctx.gpr[31] = (0x08805EACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08805EACu) goto L_08805EAC;
    return;
L_08805EAC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08805EBCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 536u, 0x0890B268u>(ctx, &aot_mem) && ctx.pc == 0x08805EBCu) goto L_08805EBC;
    return;
L_08805EBC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08805ED4;
      }
      goto L_08805EC4;
    }
L_08805EC4:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08805ED4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13884));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 375u, 0x08A4B244u>(ctx, &aot_mem) && ctx.pc == 0x08805ED4u) goto L_08805ED4;
    return;
L_08805ED4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08805EE4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 545u, 0x0890B30Cu>(ctx, &aot_mem) && ctx.pc == 0x08805EE4u) goto L_08805EE4;
    return;
L_08805EE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08805F00;
      }
      goto L_08805EEC;
    }
L_08805EEC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08805EFCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 545u, 0x0890B30Cu>(ctx, &aot_mem) && ctx.pc == 0x08805EFCu) goto L_08805EFC;
    return;
L_08805EFC:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08805F00;
L_08805F00:
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
L_08805F18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08805F34u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 657u, 0x0890BA74u>(ctx, &aot_mem) && ctx.pc == 0x08805F34u) goto L_08805F34;
    return;
L_08805F34:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[6] = (2225u << 16u);
      if (branch_taken) {
          goto L_08805F50;
      }
      goto L_08805F40;
    }
L_08805F40:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08805F50u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-13856));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 347u, 0x08A4B014u>(ctx, &aot_mem) && ctx.pc == 0x08805F50u) goto L_08805F50;
    return;
L_08805F50:
    ctx.gpr[31] = (0x08805F58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08805F58u) goto L_08805F58;
    return;
L_08805F58:
    ctx.gpr[6] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805F68u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08805E3C;
L_08805F68:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08805F94;
      }
      goto L_08805F74;
    }
L_08805F74:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805F80u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08805F80u) goto L_08805F80;
    return;
L_08805F80:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805F8Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 565u, 0x0890B4E4u>(ctx, &aot_mem) && ctx.pc == 0x08805F8Cu) goto L_08805F8C;
    return;
L_08805F8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_08805FB4;
      }
      goto L_08805F94;
    }
L_08805F94:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08805FA0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08805FA0u) goto L_08805FA0;
    return;
L_08805FA0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (0u - ctx.gpr[17]);
    ctx.gpr[31] = (0x08805FB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 565u, 0x0890B4E4u>(ctx, &aot_mem) && ctx.pc == 0x08805FB0u) goto L_08805FB0;
    return;
L_08805FB0:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_08805FB4;
L_08805FB4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08805FC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08805FE4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10002));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 657u, 0x0890BA74u>(ctx, &aot_mem) && ctx.pc == 0x08805FE4u) goto L_08805FE4;
    return;
L_08805FE4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08805FF0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08805FF0u) goto L_08805FF0;
    return;
L_08805FF0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08806000u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    goto L_08805E3C;
L_08806000:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0880604C;
      }
      goto L_0880600C;
    }
L_0880600C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08806018u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 594u, 0x0890B730u>(ctx, &aot_mem) && ctx.pc == 0x08806018u) goto L_08806018;
    return;
L_08806018:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08806044;
      }
      goto L_08806020;
    }
L_08806020:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880602Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 367u, 0x08A4B1B4u>(ctx, &aot_mem) && ctx.pc == 0x0880602Cu) goto L_0880602C;
    return;
L_0880602C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08806038u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 565u, 0x0890B4E4u>(ctx, &aot_mem) && ctx.pc == 0x08806038u) goto L_08806038;
    return;
L_08806038:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08806044u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 83u, 0x0890C6C0u>(ctx, &aot_mem) && ctx.pc == 0x08806044u) goto L_08806044;
    return;
L_08806044:
    ctx.gpr[31] = (0x0880604Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 75u, 0x0890C64Cu>(ctx, &aot_mem) && ctx.pc == 0x0880604Cu) goto L_0880604C;
    return;
L_0880604C:
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
L_08806064:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08806080u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 548u, 0x0890B378u>(ctx, &aot_mem) && ctx.pc == 0x08806080u) goto L_08806080;
    return;
L_08806080:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08806094u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B630u>(ctx, &aot_mem) && ctx.pc == 0x08806094u) goto L_08806094;
    return;
L_08806094:
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[6] = (2225u << 16u);
      if (branch_taken) {
          goto L_088060B8;
      }
      goto L_088060A0;
    }
L_088060A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088060ACu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 581u, 0x0890B68Cu>(ctx, &aot_mem) && ctx.pc == 0x088060ACu) goto L_088060AC;
    return;
L_088060AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088060C8;
      }
      goto L_088060B4;
    }
L_088060B4:
    ctx.gpr[6] = (2225u << 16u);
    goto L_088060B8;
L_088060B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x088060C8u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-13836));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 347u, 0x08A4B014u>(ctx, &aot_mem) && ctx.pc == 0x088060C8u) goto L_088060C8;
    return;
L_088060C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088060D4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x088060D4u) goto L_088060D4;
    return;
L_088060D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088060E4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 545u, 0x0890B30Cu>(ctx, &aot_mem) && ctx.pc == 0x088060E4u) goto L_088060E4;
    return;
L_088060E4:
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
L_08806100:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08806114u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08806064;
L_08806114:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (2176u << 16u);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0880612Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24520));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 694u, 0x0890BD50u>(ctx, &aot_mem) && ctx.pc == 0x0880612Cu) goto L_0880612C;
    return;
L_0880612C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08806140:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08806154u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08806154u) goto L_08806154;
    return;
L_08806154:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08806160u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 399u, 0x088BA290u>(ctx, &aot_mem) && ctx.pc == 0x08806160u) goto L_08806160;
    return;
L_08806160:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08806170:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[31]);
    ctx.gpr[31] = (0x08806194u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 657u, 0x0890BA74u>(ctx, &aot_mem) && ctx.pc == 0x08806194u) goto L_08806194;
    return;
L_08806194:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[6] = (2225u << 16u);
      if (branch_taken) {
          goto L_088061B0;
      }
      goto L_088061A0;
    }
L_088061A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x088061B0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-13856));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 347u, 0x08A4B014u>(ctx, &aot_mem) && ctx.pc == 0x088061B0u) goto L_088061B0;
    return;
L_088061B0:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088061D4;
      }
      goto L_088061B8;
    }
L_088061B8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[31] = (0x088061CCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13812));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x088061CCu) goto L_088061CC;
    return;
L_088061CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880622C;
      }
      goto L_088061D4;
    }
L_088061D4:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088061E4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 154u, 0x08A00A80u>(ctx, &aot_mem) && ctx.pc == 0x088061E4u) goto L_088061E4;
    return;
L_088061E4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08806218;
      }
      goto L_088061EC;
    }
L_088061EC:
    ctx.gpr[31] = (0x088061F4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x088061F4u) goto L_088061F4;
    return;
L_088061F4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08806218;
      }
      goto L_088061FC;
    }
L_088061FC:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08806210u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13804));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x08806210u) goto L_08806210;
    return;
L_08806210:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880622C;
      }
      goto L_08806218;
    }
L_08806218:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 9u);
    ctx.gpr[31] = (0x0880622Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13796));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0880622Cu) goto L_0880622C;
    return;
L_0880622C:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_08806248:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08806268u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13784));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x08806268u) goto L_08806268;
    return;
L_08806268:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08806274u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x08806274u) goto L_08806274;
    return;
L_08806274:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0880628Cu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(176));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 474u, 0x08A4B854u>(ctx, &aot_mem) && ctx.pc == 0x0880628Cu) goto L_0880628C;
    return;
L_0880628C:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x088062A0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13780));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x088062A0u) goto L_088062A0;
    return;
L_088062A0:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 9u);
    ctx.gpr[31] = (0x088062B4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13768));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x088062B4u) goto L_088062B4;
    return;
L_088062B4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088062C0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 23u, 0x0890C1BCu>(ctx, &aot_mem) && ctx.pc == 0x088062C0u) goto L_088062C0;
    return;
L_088062C0:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x088062D4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13756));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x088062D4u) goto L_088062D4;
    return;
L_088062D4:
    ctx.gpr[31] = (0x088062DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 712u, 0x0890BFC8u>(ctx, &aot_mem) && ctx.pc == 0x088062DCu) goto L_088062DC;
    return;
L_088062DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088062E8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x088062E8u) goto L_088062E8;
    return;
L_088062E8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088062F4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 29u, 0x0890C2B8u>(ctx, &aot_mem) && ctx.pc == 0x088062F4u) goto L_088062F4;
    return;
L_088062F4:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x08806308u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13744));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x08806308u) goto L_08806308;
    return;
L_08806308:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0880631Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13736));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0880631Cu) goto L_0880631C;
    return;
L_0880631C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08806328u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 23u, 0x0890C1BCu>(ctx, &aot_mem) && ctx.pc == 0x08806328u) goto L_08806328;
    return;
L_08806328:
    ctx.gpr[5] = (2176u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0880633Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22648));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 694u, 0x0890BD50u>(ctx, &aot_mem) && ctx.pc == 0x0880633Cu) goto L_0880633C;
    return;
L_0880633C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08806348u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 23u, 0x0890C1BCu>(ctx, &aot_mem) && ctx.pc == 0x08806348u) goto L_08806348;
    return;
L_08806348:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08806354u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 23u, 0x0890C1BCu>(ctx, &aot_mem) && ctx.pc == 0x08806354u) goto L_08806354;
    return;
L_08806354:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08806364:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08806378u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08806248;
L_08806378:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13732));
    ctx.gpr[31] = (0x08806394u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(384));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 474u, 0x08A4B854u>(ctx, &aot_mem) && ctx.pc == 0x08806394u) goto L_08806394;
    return;
L_08806394:
    ctx.gpr[31] = (0x0880639Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 712u, 0x0890BFC8u>(ctx, &aot_mem) && ctx.pc == 0x0880639Cu) goto L_0880639C;
    return;
L_0880639C:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088063ACu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14044));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x088063ACu) goto L_088063AC;
    return;
L_088063AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088063B8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 565u, 0x0890B4E4u>(ctx, &aot_mem) && ctx.pc == 0x088063B8u) goto L_088063B8;
    return;
L_088063B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088063C4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x088063C4u) goto L_088063C4;
    return;
L_088063C4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088063D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (14545u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] | 46871u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x08806420u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 315u, 0x08869F20u>(ctx, &aot_mem) && ctx.pc == 0x08806420u) goto L_08806420;
    return;
L_08806420:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08806448u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 269u, 0x08A7D68Cu>(ctx, &aot_mem) && ctx.pc == 0x08806448u) goto L_08806448;
    return;
L_08806448:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), 0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(52), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08806498:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088064D0;
      }
      goto L_088064B4;
    }
L_088064B4:
    ctx.gpr[31] = (0x088064BCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088064E4;
L_088064BC:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088064D0;
      }
      goto L_088064C8;
    }
L_088064C8:
    ctx.gpr[31] = (0x088064D0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088064D0u) goto L_088064D0;
    return;
L_088064D0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088064E4:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(52), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08806510:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(55)));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088065B0;
      }
      goto L_0880657C;
    }
L_0880657C:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088065A8;
      }
      goto L_0880658C;
    }
L_0880658C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 48u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x088065A8u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 356u, 0x08AF5BC0u>(ctx, &aot_mem) && ctx.pc == 0x088065A8u) goto L_088065A8;
    return;
L_088065A8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), 0u);
      if (branch_taken) {
          goto L_08806674;
      }
      goto L_088065B0;
    }
L_088065B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(55)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(55)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08806604;
      }
      goto L_088065C0;
    }
L_088065C0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(55)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088065EC;
      }
      goto L_088065D0;
    }
L_088065D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 48u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x088065ECu);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 356u, 0x08AF5BC0u>(ctx, &aot_mem) && ctx.pc == 0x088065ECu) goto L_088065EC;
    return;
L_088065EC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(55)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u | 48u);
    ctx.gpr[31] = (0x08806600u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 341u, 0x08AF5A1Cu>(ctx, &aot_mem) && ctx.pc == 0x08806600u) goto L_08806600;
    return;
L_08806600:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    goto L_08806604;
L_08806604:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(55)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08806674;
      }
      goto L_08806618;
    }
L_08806618:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[19] << 4u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
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
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(32))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(34))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(55)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08806618;
      }
      goto L_08806674;
    }
L_08806674:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(48))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088066A0;
      }
      goto L_08806680;
    }
L_08806680:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08806698;
      }
      goto L_08806690;
    }
L_08806690:
    ctx.gpr[31] = (0x08806698u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 658u, 0x08AA314Cu>(ctx, &aot_mem) && ctx.pc == 0x08806698u) goto L_08806698;
    return;
L_08806698:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), 0u);
      if (branch_taken) {
          goto L_08806758;
      }
      goto L_088066A0;
    }
L_088066A0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(48))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088066D8;
      }
      goto L_088066B0;
    }
L_088066B0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088066C8;
      }
      goto L_088066C0;
    }
L_088066C0:
    ctx.gpr[31] = (0x088066C8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 658u, 0x08AA314Cu>(ctx, &aot_mem) && ctx.pc == 0x088066C8u) goto L_088066C8;
    return;
L_088066C8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[31] = (0x088066D4u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 654u, 0x08AA3104u>(ctx, &aot_mem) && ctx.pc == 0x088066D4u) goto L_088066D4;
    return;
L_088066D4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    goto L_088066D8;
L_088066D8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08806758;
      }
      goto L_088066EC;
    }
L_088066EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    goto L_088066F0;
L_088066F0:
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
        goto L_088066F0;
    }
    goto L_08806758;
L_08806758:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(54))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08806798;
      }
      goto L_08806764;
    }
L_08806764:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08806790;
      }
      goto L_08806774;
    }
L_08806774:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 32u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08806790u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 356u, 0x08AF5BC0u>(ctx, &aot_mem) && ctx.pc == 0x08806790u) goto L_08806790;
    return;
L_08806790:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), 0u);
      if (branch_taken) {
          goto L_08806844;
      }
      goto L_08806798;
    }
L_08806798:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(54))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(54))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088067EC;
      }
      goto L_088067A8;
    }
L_088067A8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(54))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088067D4;
      }
      goto L_088067B8;
    }
L_088067B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 32u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x088067D4u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 356u, 0x08AF5BC0u>(ctx, &aot_mem) && ctx.pc == 0x088067D4u) goto L_088067D4;
    return;
L_088067D4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(54))))));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u | 32u);
    ctx.gpr[31] = (0x088067E8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 341u, 0x08AF5A1Cu>(ctx, &aot_mem) && ctx.pc == 0x088067E8u) goto L_088067E8;
    return;
L_088067E8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    goto L_088067EC;
L_088067EC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(54))))));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08806844;
      }
      goto L_08806800;
    }
L_08806800:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (ctx.gpr[19] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
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
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(54))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08806800;
      }
      goto L_08806844;
    }
L_08806844:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(50))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08806884;
      }
      goto L_08806850;
    }
L_08806850:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880687C;
      }
      goto L_08806860;
    }
L_08806860:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 48u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x0880687Cu);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 356u, 0x08AF5BC0u>(ctx, &aot_mem) && ctx.pc == 0x0880687Cu) goto L_0880687C;
    return;
L_0880687C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), 0u);
      if (branch_taken) {
          goto L_08806924;
      }
      goto L_08806884;
    }
L_08806884:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(50))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(50))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088068D8;
      }
      goto L_08806894;
    }
L_08806894:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(50))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088068C0;
      }
      goto L_088068A4;
    }
L_088068A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 48u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x088068C0u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 356u, 0x08AF5BC0u>(ctx, &aot_mem) && ctx.pc == 0x088068C0u) goto L_088068C0;
    return;
L_088068C0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(50))))));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u | 48u);
    ctx.gpr[31] = (0x088068D4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 341u, 0x08AF5A1Cu>(ctx, &aot_mem) && ctx.pc == 0x088068D4u) goto L_088068D4;
    return;
L_088068D4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    goto L_088068D8;
L_088068D8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(50))))));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08806924;
      }
      goto L_088068EC;
    }
L_088068EC:
    ctx.gpr[4] = (ctx.gpr[19] << 4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[31] = (0x0880690Cu);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 271u, 0x08A7D6C8u>(ctx, &aot_mem) && ctx.pc == 0x0880690Cu) goto L_0880690C;
    return;
L_0880690C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(50))))));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088068EC;
      }
      goto L_08806924;
    }
L_08806924:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(52))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880697C;
      }
      goto L_08806930;
    }
L_08806930:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(52), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08806948;
      }
      goto L_08806940;
    }
L_08806940:
    ctx.gpr[31] = (0x08806948u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 658u, 0x08AA314Cu>(ctx, &aot_mem) && ctx.pc == 0x08806948u) goto L_08806948;
    return;
L_08806948:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08806974;
      }
      goto L_08806958;
    }
L_08806958:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08806974u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 356u, 0x08AF5BC0u>(ctx, &aot_mem) && ctx.pc == 0x08806974u) goto L_08806974;
    return;
L_08806974:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(76), 0u);
      if (branch_taken) {
          goto L_08806B50;
      }
      goto L_0880697C;
    }
L_0880697C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08806A18;
      }
      goto L_08806990;
    }
L_08806990:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[19] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088069B8;
      }
      goto L_088069AC;
    }
L_088069AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_088069B8;
L_088069B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088069DC;
      }
      goto L_088069D0;
    }
L_088069D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    goto L_088069DC;
L_088069DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08806A00;
      }
      goto L_088069F4;
    }
L_088069F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08806A00;
L_08806A00:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08806990;
      }
      goto L_08806A18;
    }
L_08806A18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08806A40;
      }
      goto L_08806A24;
    }
L_08806A24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08806A40u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 356u, 0x08AF5BC0u>(ctx, &aot_mem) && ctx.pc == 0x08806A40u) goto L_08806A40;
    return;
L_08806A40:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08806AB8;
      }
      goto L_08806A48;
    }
L_08806A48:
    ctx.gpr[7] = (2224u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x08806A60u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-26784));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 341u, 0x08AF5A1Cu>(ctx, &aot_mem) && ctx.pc == 0x08806A60u) goto L_08806A60;
    return;
L_08806A60:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08806AB8;
      }
      goto L_08806A70;
    }
L_08806A70:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
    goto L_08806A74;
L_08806A74:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08806A74;
      }
      goto L_08806AB8;
    }
L_08806AB8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(52))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08806AF0;
      }
      goto L_08806AC8;
    }
L_08806AC8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(52), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08806AE0;
      }
      goto L_08806AD8;
    }
L_08806AD8:
    ctx.gpr[31] = (0x08806AE0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 658u, 0x08AA314Cu>(ctx, &aot_mem) && ctx.pc == 0x08806AE0u) goto L_08806AE0;
    return;
L_08806AE0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[31] = (0x08806AECu);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 654u, 0x08AA3104u>(ctx, &aot_mem) && ctx.pc == 0x08806AECu) goto L_08806AEC;
    return;
L_08806AEC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    goto L_08806AF0;
L_08806AF0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08806B50;
      }
      goto L_08806B04;
    }
L_08806B04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    goto L_08806B08;
L_08806B08:
    ctx.gpr[4] = (ctx.gpr[19] << 3u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6))))));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
        goto L_08806B08;
    }
    goto L_08806B50;
L_08806B50:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08806B70:
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
L_08806B98:
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(7456));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(468));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7288));
    goto L_08806BB4;
L_08806BB4:
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(125), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 45 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_08806BB4;
      }
      goto L_08806BC8;
    }
L_08806BC8:
    ctx.gpr[11] = (ctx.gpr[5] | 0u);
    ctx.gpr[3] = (16448u << 16u);
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.gpr[10] = (ctx.gpr[11] + static_cast<std::uint32_t>(8));
    ctx.gpr[9] = (ctx.gpr[11] + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = (ctx.gpr[11] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (ctx.gpr[11] + static_cast<std::uint32_t>(12));
    ctx.gpr[6] = (ctx.gpr[11] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_08806BF0;
L_08806BF0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[17];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[16];
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(24));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(24));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(24));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(24));
    ctx.gpr[3] = (ctx.gpr[2] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[18];
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08806BF0;
      }
      goto L_08806C54;
    }
L_08806C54:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08806C5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(7456));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    goto L_08806C78;
L_08806C78:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(125)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08806C8C;
      }
      goto L_08806C84;
    }
L_08806C84:
    ctx.gpr[31] = (0x08806C8Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0880782C;
L_08806C8C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 45 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_08806C78;
      }
      goto L_08806C9C;
    }
L_08806C9C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08806CB0:
    ctx.gpr[2] = (2232u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(7456));
    ctx.gpr[4] = (0u | 0u);
    goto L_08806CBC;
L_08806CBC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(125)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08806CE0;
      }
      goto L_08806CC8;
    }
L_08806CC8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 45 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_08806CBC;
      }
      goto L_08806CD8;
    }
L_08806CD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08806CE8;
      }
      goto L_08806CE0;
    }
L_08806CE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08806CEC;
      }
      goto L_08806CE8;
    }
L_08806CE8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08806CEC;
L_08806CEC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08806CF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(7456));
    ctx.gpr[16] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7896), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7900), 0u);
    ctx.gpr[4] = (0u | 256u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7888), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 512u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7892), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 384u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7880), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 768u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7884), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08806D60u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08806D60u) goto L_08806D60;
    return;
L_08806D60:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x08806D6Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08806D6Cu) goto L_08806D6C;
    return;
L_08806D6C:
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[31] = (0x08806D78u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08806D78u) goto L_08806D78;
    return;
L_08806D78:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22912)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11096)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11092)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11100)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[6] = (65280u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[31] = (0x08806DACu);
    ctx.gpr[4] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08806DACu) goto L_08806DAC;
    return;
L_08806DAC:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x08806DB8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08806DB8u) goto L_08806DB8;
    return;
L_08806DB8:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x08806DC4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08806DC4u) goto L_08806DC4;
    return;
L_08806DC4:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x08806DD0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08806DD0u) goto L_08806DD0;
    return;
L_08806DD0:
    ctx.gpr[18] = (0u | 0u);
    goto L_08806DD4;
L_08806DD4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(125)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08806DE8;
      }
      goto L_08806DE0;
    }
L_08806DE0:
    ctx.gpr[31] = (0x08806DE8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08807C58;
L_08806DE8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 45 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_08806DD4;
      }
      goto L_08806DF8;
    }
L_08806DF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7876)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (2232u << 16u);
      if (branch_taken) {
          goto L_08806E2C;
      }
      goto L_08806E0C;
    }
L_08806E0C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(7328));
    goto L_08806E10;
L_08806E10:
    ctx.gpr[31] = (0x08806E18u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 79u, 0x08808CFCu>(ctx, &aot_mem) && ctx.pc == 0x08806E18u) goto L_08806E18;
    return;
L_08806E18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7876)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08806E10;
      }
      goto L_08806E2C;
    }
L_08806E2C:
    ctx.gpr[31] = (0x08806E34u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-7876), 0u);
    goto L_08806FC4;
L_08806E34:
    ctx.gpr[31] = (0x08806E3Cu);
    // nop
    goto L_08807068;
L_08806E3C:
    ctx.gpr[31] = (0x08806E44u);
    // nop
    goto L_0880712C;
L_08806E44:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08806E50u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08806E50u) goto L_08806E50;
    return;
L_08806E50:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08806E5Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08806E5Cu) goto L_08806E5C;
    return;
L_08806E5C:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x08806E68u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08806E68u) goto L_08806E68;
    return;
L_08806E68:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x08806E74u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08806E74u) goto L_08806E74;
    return;
L_08806E74:
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[31] = (0x08806E80u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08806E80u) goto L_08806E80;
    return;
L_08806E80:
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
L_08806E98:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7876)));
    ctx.gpr[7] = (ctx.gpr[5] < static_cast<std::uint32_t>(31) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08806EC8;
      }
      goto L_08806EAC;
    }
L_08806EAC:
    ctx.gpr[8] = (2232u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(7328));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-7876), ctx.gpr[4]);
    goto L_08806EC8;
L_08806EC8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08806ED0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (16145u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 60293u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (48913u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 60293u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17259u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08806FC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7896)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08807054;
      }
      goto L_08806FE4;
    }
L_08806FE4:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x08806FF0u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08806FF0u) goto L_08806FF0;
    return;
L_08806FF0:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x08806FFCu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08806FFCu) goto L_08806FFC;
    return;
L_08806FFC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27924)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08807010u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08807010u) goto L_08807010;
    return;
L_08807010:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7896)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x08807028u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20400));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 50u, 0x08868560u>(ctx, &aot_mem) && ctx.pc == 0x08807028u) goto L_08807028;
    return;
L_08807028:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[16] = (2230u << 16u);
      if (branch_taken) {
          goto L_0880704C;
      }
      goto L_08807030;
    }
L_08807030:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7900)));
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[31] = (0x08807044u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28752));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 71u, 0x0886885Cu>(ctx, &aot_mem) && ctx.pc == 0x08807044u) goto L_08807044;
    return;
L_08807044:
    ctx.gpr[31] = (0x0880704Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 70u, 0x08868844u>(ctx, &aot_mem) && ctx.pc == 0x0880704Cu) goto L_0880704C;
    return;
L_0880704C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-7900), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-7896), 0u);
    goto L_08807054;
L_08807054:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08807068:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7888)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 256u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08807114;
      }
      goto L_08807090;
    }
L_08807090:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26704));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x088070A4u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x088070A4u) goto L_088070A4;
    return;
L_088070A4:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x088070B0u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x088070B0u) goto L_088070B0;
    return;
L_088070B0:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x088070BCu);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x088070BCu) goto L_088070BC;
    return;
L_088070BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7888)));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20400));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-256));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8192));
    ctx.gpr[31] = (0x088070DCu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 50u, 0x08868560u>(ctx, &aot_mem) && ctx.pc == 0x088070DCu) goto L_088070DC;
    return;
L_088070DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[16] = (2230u << 16u);
      if (branch_taken) {
          goto L_08807108;
      }
      goto L_088070E4;
    }
L_088070E4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7892)));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28752));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1024));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-512));
    ctx.gpr[31] = (0x08807100u);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 71u, 0x0886885Cu>(ctx, &aot_mem) && ctx.pc == 0x08807100u) goto L_08807100;
    return;
L_08807100:
    ctx.gpr[31] = (0x08807108u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 70u, 0x08868844u>(ctx, &aot_mem) && ctx.pc == 0x08807108u) goto L_08807108;
    return;
L_08807108:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-7888), ctx.gpr[17]);
    ctx.gpr[4] = (0u | 512u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-7892), ctx.gpr[4]);
    goto L_08807114;
L_08807114:
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
L_0880712C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7880)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 384u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088071D8;
      }
      goto L_08807154;
    }
L_08807154:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27928)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08807168u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08807168u) goto L_08807168;
    return;
L_08807168:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x08807174u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08807174u) goto L_08807174;
    return;
L_08807174:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x08807180u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08807180u) goto L_08807180;
    return;
L_08807180:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7880)));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20400));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-384));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12288));
    ctx.gpr[31] = (0x088071A0u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 50u, 0x08868560u>(ctx, &aot_mem) && ctx.pc == 0x088071A0u) goto L_088071A0;
    return;
L_088071A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[16] = (2230u << 16u);
      if (branch_taken) {
          goto L_088071CC;
      }
      goto L_088071A8;
    }
L_088071A8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7884)));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28752));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1536));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-768));
    ctx.gpr[31] = (0x088071C4u);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 71u, 0x0886885Cu>(ctx, &aot_mem) && ctx.pc == 0x088071C4u) goto L_088071C4;
    return;
L_088071C4:
    ctx.gpr[31] = (0x088071CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 70u, 0x08868844u>(ctx, &aot_mem) && ctx.pc == 0x088071CCu) goto L_088071CC;
    return;
L_088071CC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-7880), ctx.gpr[17]);
    ctx.gpr[4] = (0u | 768u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-7884), ctx.gpr[4]);
    goto L_088071D8;
L_088071D8:
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
L_088071F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 512u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08807258;
      }
      goto L_08807218;
    }
L_08807218:
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08807258;
      }
      goto L_08807230;
    }
L_08807230:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08807258;
      }
      goto L_08807240;
    }
L_08807240:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x0880724Cu);
    ctx.gpr[4] = (0u | 79u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 603u, 0x0896ED08u>(ctx, &aot_mem) && ctx.pc == 0x0880724Cu) goto L_0880724C;
    return;
L_0880724C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(421), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08807258;
L_08807258:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08807268:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7872)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088072AC;
      }
      goto L_08807298;
    }
L_08807298:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088072AC;
L_088072AC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u | 1u);
    if (ctx.gpr[4] == ctx.gpr[6]) {
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(54)));
        goto L_088072D8;
    }
    goto L_088072C0;
L_088072C0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u | 3u);
    if (ctx.gpr[4] == ctx.gpr[6]) {
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(54)));
        goto L_088072D8;
    }
    goto L_088072D0;
L_088072D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088072FC;
      }
      goto L_088072D8;
    }
L_088072D8:
    ctx.gpr[6] = (ctx.gpr[6] & 8192u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088072F4;
      }
      goto L_088072E4;
    }
L_088072E4:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(54)));
    ctx.gpr[5] = (ctx.gpr[5] & 16384u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088072FC;
      }
      goto L_088072F4;
    }
L_088072F4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_088072FC;
L_088072FC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08807370;
      }
      goto L_08807304;
    }
L_08807304:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08807370;
      }
      goto L_0880731C;
    }
L_0880731C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08807370;
      }
      goto L_0880732C;
    }
L_0880732C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08807338u);
    ctx.gpr[4] = (0u | 79u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 603u, 0x0896ED08u>(ctx, &aot_mem) && ctx.pc == 0x08807338u) goto L_08807338;
    return;
L_08807338:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(421), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08807370u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 114u, 0x088092F0u>(ctx, &aot_mem) && ctx.pc == 0x08807370u) goto L_08807370;
    return;
L_08807370:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08807384:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[6] & 512u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08807470;
      }
      goto L_088073A4;
    }
L_088073A4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[7] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880744C;
      }
      goto L_088073F4;
    }
L_088073F4:
    ctx.gpr[7] = (16025u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[7]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (17948u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08807444u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 114u, 0x088092F0u>(ctx, &aot_mem) && ctx.pc == 0x08807444u) goto L_08807444;
    return;
L_08807444:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08807470;
      }
      goto L_0880744C;
    }
L_0880744C:
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08807470;
      }
      goto L_08807464;
    }
L_08807464:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[5] = (ctx.gpr[5] | 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(421), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08807470;
L_08807470:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880747C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[16] = ctx.fpr[20] - ctx.fpr[17];
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[18] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[6] = (16968u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[16];
    ctx.fpr[18] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[4] = (16800u << 16u);
    ctx.gpr[16] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(20976)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[30]);
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[17];
    ctx.gpr[30] = (0u | 0u);
    ctx.fpr[13] = ctx.fpr[22] - ctx.fpr[17];
    ctx.fpr[14] = ctx.fpr[22] + ctx.fpr[17];
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[31]);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
        goto L_08807524;
    }
    goto L_08807524;
L_08807524:
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[16];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
        goto L_08807548;
    }
    goto L_08807548;
L_08807548:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    ctx.gpr[21] = (0u | 99u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 99 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
        goto L_08807568;
    }
    goto L_08807568;
L_08807568:
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[15];
    ctx.gpr[4] = (0u | 99u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 99 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
        goto L_0880758C;
    }
    goto L_0880758C;
L_0880758C:
    ctx.gpr[4] = (0u | 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088075A4;
      }
      goto L_0880759C;
    }
L_0880759C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(20976), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088075B4;
      }
      goto L_088075A4;
    }
L_088075A4:
    ctx.gpr[31] = (0x088075ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 155u, 0x088C4C18u>(ctx, &aot_mem) && ctx.pc == 0x088075ACu) goto L_088075AC;
    return;
L_088075AC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(20976), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_088075B4;
L_088075B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[23] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[22] << 5u);
      if (branch_taken) {
          goto L_0880766C;
      }
      goto L_088075C8;
    }
L_088075C8:
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[5] << 2u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[22] = (ctx.gpr[22] - ctx.gpr[4]);
    ctx.gpr[20] = (2227u << 16u);
    goto L_088075E0;
L_088075E0:
    ctx.gpr[17] = (ctx.gpr[30] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_08807658;
      }
      goto L_088075F0;
    }
L_088075F0:
    ctx.gpr[16] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[16] = (ctx.gpr[4] - ctx.gpr[16]);
    goto L_08807600;
L_08807600:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20972)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[22] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(12));
    ctx.gpr[31] = (0x08807628u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_088076EC;
L_08807628:
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(36));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08807644u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_088076EC;
L_08807644:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(44));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_08807600;
      }
      goto L_08807658;
    }
L_08807658:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_088075E0;
      }
      goto L_0880766C;
    }
L_0880766C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088076AC;
      }
      goto L_08807678;
    }
L_08807678:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 10u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880769C;
      }
      goto L_08807694;
    }
L_08807694:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088076B0;
      }
      goto L_0880769C;
    }
L_0880769C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[2] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_088076B0;
      }
      goto L_088076AC;
    }
L_088076AC:
    ctx.gpr[2] = (0u | 0u);
    goto L_088076B0;
L_088076B0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088076EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[9] = (0u | 1u);
      if (branch_taken) {
          goto L_088077EC;
      }
      goto L_088076F8;
    }
L_088076F8:
    ctx.gpr[8] = (0u | 3u);
    ctx.gpr[11] = (2230u << 16u);
    ctx.gpr[10] = (2229u << 16u);
    ctx.gpr[7] = (2227u << 16u);
    goto L_08807708;
L_08807708:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[13] = (static_cast<std::int32_t>(ctx.gpr[12]) < static_cast<std::int32_t>(ctx.gpr[13]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.gpr[3] = (0u | 0u);
      if (branch_taken) {
          goto L_08807734;
      }
      goto L_08807724;
    }
L_08807724:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[12] = (ctx.gpr[12] << 2u);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[12]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    goto L_08807734;
L_08807734:
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[12] == ctx.gpr[9]) {
    ctx.gpr[12] = (aot_mem.aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(54)));
        goto L_08807750;
    }
    goto L_08807740;
L_08807740:
    if (ctx.gpr[12] == ctx.gpr[8]) {
    ctx.gpr[12] = (aot_mem.aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(54)));
        goto L_08807750;
    }
    goto L_08807748;
L_08807748:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[3] = (0u | 0u);
      if (branch_taken) {
          goto L_08807770;
      }
      goto L_08807750;
    }
L_08807750:
    ctx.gpr[13] = (ctx.gpr[12] & 8192u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.gpr[3] = (0u | 0u);
      if (branch_taken) {
          goto L_08807768;
      }
      goto L_0880775C;
    }
L_0880775C:
    ctx.gpr[12] = (ctx.gpr[12] & 16384u);
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.gpr[3] = (ctx.gpr[3] & 255u);
      if (branch_taken) {
          goto L_08807770;
      }
      goto L_08807768;
    }
L_08807768:
    ctx.gpr[3] = (ctx.gpr[9] | 0u);
    ctx.gpr[3] = (ctx.gpr[3] & 255u);
    goto L_08807770;
L_08807770:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08807780;
      }
      goto L_08807778;
    }
L_08807778:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088077E4;
      }
      goto L_08807780;
    }
L_08807780:
    ctx.gpr[12] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(20976)));
    { const bool branch_taken = ctx.gpr[12] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088077E4;
      }
      goto L_08807790;
    }
L_08807790:
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.gpr[3] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.fpr[16] = ctx.fpr[13] - ctx.fpr[16];
    ctx.fpr[17] = ctx.fpr[14] - ctx.fpr[17];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[17];
    ctx.fpr[15] = std::sqrt(ctx.fpr[15]);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088077E4;
      }
      goto L_088077DC;
    }
L_088077DC:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_088077E4;
L_088077E4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08807708;
      }
      goto L_088077EC;
    }
L_088077EC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088077F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[7] = (2224u << 16u);
    ctx.gpr[5] = (0u | 45u);
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7456));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08807820u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-26464));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 356u, 0x08AF5BC0u>(ctx, &aot_mem) && ctx.pc == 0x08807820u) goto L_08807820;
    return;
L_08807820:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880782C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[7] = (16051u << 16u);
    ctx.gpr[5] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] | 13107u);
    ctx.gpr[6] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08807C14;
      }
      goto L_08807898;
    }
L_08807898:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0880791C;
      }
      goto L_088078A4;
    }
L_088078A4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (15395u << 16u);
    ctx.fpr[13] = ctx.fpr[17] + ctx.fpr[13];
    ctx.gpr[5] = (ctx.gpr[5] | 55050u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[18] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08807990;
      }
      goto L_0880791C;
    }
L_0880791C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (15523u << 16u);
    ctx.fpr[13] = ctx.fpr[17] + ctx.fpr[13];
    ctx.gpr[5] = (ctx.gpr[5] | 55050u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[18] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08807990;
L_08807990:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08807C14;
      }
      goto L_08807A8C;
    }
L_08807A8C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(125), static_cast<std::uint8_t>(0u));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (0u | 80u);
    ctx.gpr[31] = (0x08807AB8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 603u, 0x0896ED08u>(ctx, &aot_mem) && ctx.pc == 0x08807AB8u) goto L_08807AB8;
    return;
L_08807AB8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08807C14;
      }
      goto L_08807AC4;
    }
L_08807AC4:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(99), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (48819u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(604)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(600)));
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[19] = (0u | 500u);
    goto L_08807B34;
L_08807B34:
    ctx.gpr[31] = (0x08807B3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08807B3Cu) goto L_08807B3C;
    return;
L_08807B3C:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[24];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.gpr[31] = (0x08807B50u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08807B50u) goto L_08807B50;
    return;
L_08807B50:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[24];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.gpr[31] = (0x08807B64u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08807B64u) goto L_08807B64;
    return;
L_08807B64:
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[26];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    ctx.gpr[31] = (0x08807B78u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08807B78u) goto L_08807B78;
    return;
L_08807B78:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(596)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(592)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08807B90u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x08807B90u) goto L_08807B90;
    return;
L_08807B90:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[22] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(588)));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(588), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[17]);
    ctx.gpr[30] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08807BD0u);
    ctx.gpr[17] = (ctx.gpr[5] & 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08807BD0u) goto L_08807BD0;
    return;
L_08807BD0:
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[22];
    ctx.gpr[4] = (0u | 62u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (0u | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (ctx.gpr[30] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.gpr[31] = (0x08807C04u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x08807C04u) goto L_08807C04;
    return;
L_08807C04:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
      if (branch_taken) {
          goto L_08807B34;
      }
      goto L_08807C14;
    }
L_08807C14:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
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
L_08807C58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-336));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
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
    ctx.gpr[31] = (0x08807D1Cu);
    // nop
    goto L_08806ED0;
L_08807D1C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[30] = (2230u << 16u);
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[23] = (0u | 3u);
    ctx.gpr[22] = (2232u << 16u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(20400));
    ctx.gpr[6] = (ctx.gpr[22] + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (ctx.gpr[22] + static_cast<std::uint32_t>(40));
    ctx.gpr[8] = (ctx.gpr[22] + static_cast<std::uint32_t>(72));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[7]);
    ctx.gpr[21] = (2227u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(468));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[22] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (ctx.gpr[22] + static_cast<std::uint32_t>(52));
    ctx.gpr[8] = (ctx.gpr[22] + static_cast<std::uint32_t>(84));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[8]);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-28752));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[6]);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 0u);
        goto L_08807D94;
    }
    goto L_08807D94;
L_08807D94:
    ctx.gpr[5] = (0u | 500u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 500u);
        goto L_08807DA4;
    }
    goto L_08807DA4;
L_08807DA4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17402u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-7900)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 505 ? 1u : 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_08807DEC;
      }
      goto L_08807DDC;
    }
L_08807DDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7896)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 252 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08807DF4;
      }
      goto L_08807DEC;
    }
L_08807DEC:
    ctx.gpr[31] = (0x08807DF4u);
    // nop
    goto L_08806FC4;
L_08807DF4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08807E14;
      }
      goto L_08807E00;
    }
L_08807E00:
    ctx.gpr[4] = (0u | 64u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 64 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
        goto L_08807E10;
    }
    goto L_08807E10;
L_08807E10:
    ctx.gpr[17] = (ctx.gpr[4] & 255u);
    goto L_08807E14;
L_08807E14:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[17]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[23]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(139), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7896)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.lo);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(136), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(137), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(138), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[17]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[23]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(143), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7896)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.lo);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(140), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(142), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[17]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[23]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(144), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(145), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(146), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(147), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7896)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7896)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16153u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    ctx.gpr[5] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[21]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[6] + static_cast<std::uint32_t>(7288));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08807F38u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    goto L_08806B70;
L_08807F38:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    ctx.gpr[5] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[21]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08807F94u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    goto L_08806B70;
L_08807F94:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    ctx.gpr[5] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[21]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08807FF0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    goto L_08806B70;
L_08807FF0:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.pc = 0x08808000u; return;
}

void recomp_unit_0000(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0000_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_0(Runtime &runtime) {
    runtime.register_generated_unit(0u, 0x08804000u, 16384u, &recomp_unit_0000, &recomp_unit_0000_entry);
    runtime.register_function(0x08804000u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804088u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088040A8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088040BCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088040C8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088040DCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088040F0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088040FCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880413Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804158u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804170u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804190u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880419Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088041B0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088041B8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088041E0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088041ECu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088041F8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804210u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804228u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804240u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880424Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804264u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880426Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804278u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804284u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804288u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804294u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088042A0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088042ACu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088042B0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088042C0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088042CCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088042D8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088042E0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804330u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880433Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804378u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880438Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804398u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088043A8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088043BCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088043C4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088043D8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088043F8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804404u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804414u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804434u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880443Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880444Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880445Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804460u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804468u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804470u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804488u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880448Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804490u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088044A8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088044B0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088044B4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088044C8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088044D8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088044ECu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088044FCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804518u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804520u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804528u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804538u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804544u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880454Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804554u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804560u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804570u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804590u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088045A4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088045B0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088045C4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088045D8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088045E4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804628u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804648u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804658u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880466Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804674u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804690u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880469Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088046A8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088046BCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088046D8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088046E0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088046ECu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088046F8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088046FCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804714u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804720u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880474Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804760u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880476Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880477Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804790u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804798u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088047ACu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088047C8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088047D0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088047D8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088047E8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088047F4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088047FCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804804u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804810u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804820u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804848u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880485Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804868u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804878u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804880u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880488Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804898u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088048A8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088048B4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088048C0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088048D0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088048D8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088048E8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088048F0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088048FCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804904u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804910u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880491Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880492Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804944u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804948u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880496Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804998u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088049ACu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088049B8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088049C4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088049CCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088049D8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088049E4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088049ECu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088049FCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804A08u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804A14u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804A2Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804A30u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804A40u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804A4Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804A74u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804A78u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804A98u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804AA0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804AACu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804AB8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804AC0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804AC8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804AD0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804AD4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804AF0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804B14u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804B28u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804B34u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804B3Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804B44u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804B50u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804B58u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804B64u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804B70u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804B7Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804B84u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804B98u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804BB8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804BC4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804BCCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804BD4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804BDCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804BF0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804BF4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804C08u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804C2Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804C48u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804C50u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804C58u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804C68u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804C7Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804C84u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804C94u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804CA0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804CACu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804CCCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804CECu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804CF8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804D04u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804D0Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804D20u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804D30u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804D44u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804D54u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804D5Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804D70u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804D84u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804D90u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804D98u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804DACu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804DC4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804DDCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804DF0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804DFCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804E08u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804E1Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804E30u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804E38u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804E40u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804E4Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804E60u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804E7Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804E84u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804E8Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804E94u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804EA4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804EACu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804EB8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804EC4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804ED0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804ED8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804EE0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804EF4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804F00u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804F08u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804F14u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804F1Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804F2Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804F40u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804F60u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804F6Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804F7Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804F88u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804FA0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804FC4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804FD0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804FDCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804FF4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805018u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805024u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805030u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880503Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805054u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805068u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805078u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805080u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805090u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088050A4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088050C0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088050D0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088050E4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805104u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805110u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880511Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805128u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805140u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805168u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805178u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805184u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880518Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805194u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880519Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088051A0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088051B8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088051D4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088051E8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088051F4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805200u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805208u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880521Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805240u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805254u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805268u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805274u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880527Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805298u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088052ACu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088052BCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088052C4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088052CCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088052E0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088052ECu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088052F8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805304u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880530Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805310u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880532Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805340u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805348u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805350u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880535Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805360u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805370u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805390u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088053A8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088053BCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088053C8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088053DCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088053FCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805408u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805414u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805424u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880544Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805458u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805468u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805470u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805478u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805488u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805490u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088054ACu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088054CCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088054D8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088054E0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805500u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805510u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805518u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805524u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805528u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880553Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805560u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880556Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805584u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805590u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088055A0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088055B0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088055CCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088055E4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088055ECu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805600u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880560Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805618u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805620u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805630u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805648u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805654u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805660u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805674u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805680u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880568Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805694u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088056A4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088056C8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088056DCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088056E4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088056F0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805700u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805718u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805720u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880572Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805738u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805740u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880574Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805754u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805760u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805768u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805774u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805778u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805784u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880578Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088057A0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088057B0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088057BCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088057C4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088057D8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088057E8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088057F0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805804u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805814u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880581Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805830u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805840u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805848u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880585Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805860u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805878u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880589Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088058A8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088058B4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088058BCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088058C8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088058D0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088058D8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088058E4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088058F0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088058FCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805904u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880590Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880591Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805924u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805930u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880593Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880594Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805954u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805964u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805970u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880597Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805980u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805998u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088059B8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088059C4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088059D0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088059E0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088059E8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088059F0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088059F8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805A0Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805A30u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805A3Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805A44u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805A4Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805A50u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805A5Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805A68u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805A70u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805A74u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805A84u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805A88u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805AA0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805AC8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805AD8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805AE4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805AF0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805B00u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805B10u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805B1Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805B28u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805B34u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805B40u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805B60u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805B94u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805BA0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805BB0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805BBCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805BCCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805BD8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805BE0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805BF0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805BFCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805C08u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805C10u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805C18u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805C20u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805C30u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805C38u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805C44u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805C50u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805C5Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805C64u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805C6Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805C78u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805C84u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805C90u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805C98u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805CA0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805CB4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805CC0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805CCCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805CD8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805CE4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805CF0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805CFCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805D0Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805D18u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805D24u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805D30u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805D3Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805D48u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805D50u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805D58u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805D6Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805D7Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805D90u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805D98u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805DA0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805DB4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805DC0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805DD4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805DDCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805DE8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805DF4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805E00u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805E0Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805E18u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805E1Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805E3Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805E68u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805E70u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805E80u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805E90u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805E9Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805EA4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805EACu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805EBCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805EC4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805ED4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805EE4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805EECu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805EFCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805F00u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805F18u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805F34u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805F40u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805F50u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805F58u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805F68u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805F74u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805F80u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805F8Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805F94u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805FA0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805FB0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805FB4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805FC8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805FE4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805FF0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806000u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880600Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806018u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806020u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880602Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806038u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806044u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880604Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806064u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806080u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806094u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088060A0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088060ACu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088060B4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088060B8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088060C8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088060D4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088060E4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806100u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806114u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880612Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806140u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806154u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806160u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806170u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806194u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088061A0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088061B0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088061B8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088061CCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088061D4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088061E4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088061ECu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088061F4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088061FCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806210u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806218u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880622Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806248u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806268u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806274u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880628Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088062A0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088062B4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088062C0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088062D4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088062DCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088062E8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088062F4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806308u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880631Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806328u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880633Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806348u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806354u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806364u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806378u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806394u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880639Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088063ACu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088063B8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088063C4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088063D8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806420u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806448u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806498u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088064B4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088064BCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088064C8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088064D0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088064E4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806510u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880657Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880658Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088065A8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088065B0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088065C0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088065D0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088065ECu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806600u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806604u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806618u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806674u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806680u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806690u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806698u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088066A0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088066B0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088066C0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088066C8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088066D4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088066D8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088066ECu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088066F0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806758u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806764u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806774u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806790u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806798u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088067A8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088067B8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088067D4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088067E8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088067ECu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806800u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806844u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806850u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806860u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880687Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806884u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806894u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088068A4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088068C0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088068D4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088068D8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088068ECu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880690Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806924u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806930u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806940u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806948u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806958u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806974u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880697Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806990u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088069ACu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088069B8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088069D0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088069DCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088069F4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806A00u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806A18u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806A24u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806A40u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806A48u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806A60u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806A70u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806A74u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806AB8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806AC8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806AD8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806AE0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806AECu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806AF0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806B04u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806B08u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806B50u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806B70u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806B98u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806BB4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806BC8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806BF0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806C54u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806C5Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806C78u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806C84u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806C8Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806C9Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806CB0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806CBCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806CC8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806CD8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806CE0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806CE8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806CECu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806CF4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806D60u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806D6Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806D78u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806DACu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806DB8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806DC4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806DD0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806DD4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806DE0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806DE8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806DF8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806E0Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806E10u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806E18u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806E2Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806E34u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806E3Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806E44u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806E50u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806E5Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806E68u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806E74u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806E80u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806E98u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806EACu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806EC8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806ED0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806FC4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806FE4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806FF0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806FFCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807010u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807028u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807030u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807044u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880704Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807054u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807068u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807090u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088070A4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088070B0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088070BCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088070DCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088070E4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807100u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807108u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807114u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880712Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807154u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807168u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807174u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807180u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088071A0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088071A8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088071C4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088071CCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088071D8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088071F0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807218u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807230u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807240u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880724Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807258u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807268u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807298u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088072ACu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088072C0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088072D0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088072D8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088072E4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088072F4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088072FCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807304u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880731Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880732Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807338u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807370u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807384u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088073A4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088073F4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807444u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880744Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807464u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807470u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880747Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807524u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807548u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807568u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880758Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880759Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088075A4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088075ACu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088075B4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088075C8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088075E0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088075F0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807600u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807628u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807644u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807658u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880766Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807678u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807694u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880769Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088076ACu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088076B0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088076ECu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088076F8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807708u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807724u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807734u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807740u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807748u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807750u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880775Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807768u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807770u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807778u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807780u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807790u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088077DCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088077E4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088077ECu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088077F4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807820u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880782Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807898u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088078A4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880791Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807990u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807A8Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807AB8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807AC4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807B34u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807B3Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807B50u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807B64u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807B78u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807B90u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807BD0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807C04u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807C14u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807C58u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807D1Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807D94u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807DA4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807DDCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807DECu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807DF4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807E00u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807E10u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807E14u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807F38u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807F94u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807FF0u, &recomp_unit_0000, "recomp_unit_0000");
}
} // namespace psprecomp
