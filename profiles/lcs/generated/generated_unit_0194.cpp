#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0194[4094] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 5, 0, 0, 0, 6, 0, 7, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0,
    10, 0, 0, 11, 0, 0, 0, 12, 0, 0, 13, 0, 14, 0, 15, 0, 16, 0, 17, 0, 18, 0, 19, 0, 0, 20, 0, 0, 0, 21, 0, 0,
    0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 24, 25, 0, 26, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0,
    0, 31, 32, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 40, 0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0,
    45, 0, 46, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 51, 0,
    52, 53, 0, 0, 54, 0, 0, 55, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 67, 0, 68, 0, 69, 0, 0, 0, 0, 70, 0, 71, 72, 0, 0, 0, 0, 0, 73, 74, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 79, 0, 0, 80, 0, 81, 0, 82, 83, 0, 84, 0, 0, 85,
    0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 88, 0, 0, 89, 0, 0, 90, 0, 91, 0, 92, 0, 0, 0, 93, 0, 0, 0, 94, 0, 95, 0,
    96, 0, 97, 0, 98, 0, 99, 0, 100, 0, 0, 101, 0, 0, 102, 0, 103, 0, 104, 0, 105, 0, 0, 106, 0, 107, 0, 108, 0, 109, 0, 110,
    0, 0, 0, 111, 0, 112, 0, 0, 113, 0, 114, 0, 0, 115, 0, 116, 0, 117, 0, 118, 0, 119, 0, 120, 0, 121, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 122, 123, 124, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0,
    0, 0, 0, 0, 129, 0, 0, 0, 130, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0,
    0, 139, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 144, 145, 0, 0, 0, 0, 0, 0, 146, 0, 147, 148, 0,
    149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 153, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 155, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0,
    0, 0, 0, 160, 0, 161, 0, 162, 0, 0, 163, 164, 0, 165, 166, 0, 0, 167, 0, 0, 168, 0, 169, 170, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0,
    175, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    177, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0,
    0, 0, 181, 0, 182, 0, 183, 0, 184, 0, 185, 0, 186, 0, 187, 0, 188, 0, 189, 0, 190, 0, 191, 0, 0, 0, 0, 0, 192, 0, 193, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0,
    197, 0, 198, 0, 199, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 202, 203, 0, 204, 0, 205, 0, 206, 207, 0, 208, 209, 0,
    210, 0, 211, 0, 212, 0, 0, 213, 0, 214, 0, 215, 216, 0, 217, 0, 0, 0, 218, 0, 219, 220, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0,
    222, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 227, 0, 228, 0, 229, 0, 230, 0, 231, 0, 232, 0, 233, 0, 234,
    0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0,
    0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 242, 0, 243, 0, 244, 0, 245, 0, 246, 0, 247, 0, 248, 0, 249, 0, 250, 0, 251, 0, 252, 0, 253, 0, 254,
    0, 255, 0, 256, 257, 0, 258, 0, 259, 0, 260, 0, 261, 262, 263, 264, 265, 0, 266, 0, 267, 0, 268, 0, 269, 0, 270, 0, 271, 0, 272, 0,
    273, 0, 274, 0, 275, 0, 276, 277, 0, 278, 0, 279, 0, 280, 0, 281, 0, 282, 0, 283, 0, 284, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0,
    286, 0, 0, 0, 287, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 293,
    0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0,
    0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 302, 0, 303, 0, 304, 0, 305, 0, 306, 307, 0, 308, 0, 309, 0,
    310, 0, 311, 312, 0, 313, 0, 314, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0,
    0, 318, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    324, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0,
    0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 330, 0, 331, 0, 332, 0, 333, 0, 0, 334, 0,
    0, 0, 0, 0, 335, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339,
    0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0,
    0, 0, 0, 345, 0, 346, 0, 347, 348, 0, 349, 0, 350, 0, 351, 0, 352, 0, 0, 0, 0, 353, 354, 0, 355, 0, 356, 0, 0, 0, 357, 0,
    0, 0, 0, 358, 0, 0, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 361, 362, 0, 0, 0, 0, 363, 0, 0, 0, 0, 364, 0, 0, 365,
    0, 0, 366, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 368, 0, 0, 0, 369, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0,
    0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 373, 0, 374, 0, 375, 0, 376, 0, 377, 0, 378, 0, 0, 379, 0, 380, 381, 382, 0, 0, 0, 0, 0, 383, 0, 0,
    384, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 387, 0,
    388, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 392, 0, 393, 0, 394, 0, 395, 0, 396, 0, 397, 0, 398, 0,
    399, 0, 400, 0, 401, 0, 402, 0, 403, 404, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 407, 0, 408, 0, 0, 0, 409, 410, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 413, 0, 0, 0, 414, 0,
    0, 0, 415, 416, 0, 0, 0, 0, 0, 0, 417, 0, 418, 0, 0, 419, 0, 0, 420, 421, 0, 422, 0, 423, 0, 0, 424, 0, 0, 0, 425, 0,
    0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 431, 0, 0, 432, 0, 0, 0, 433, 0, 0, 0, 0, 0,
    0, 434, 0, 0, 0, 435, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 439, 0,
    0, 0, 440, 0, 0, 441, 0, 442, 0, 0, 0, 443, 0, 0, 444, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0,
    0, 0, 447, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 453, 0, 454, 0, 455, 0, 456, 0, 457, 0,
    458, 0, 459, 0, 460, 0, 461, 0, 462, 0, 463, 0, 464, 0, 465, 0, 466, 0, 467, 0, 468, 0, 469, 0, 470, 0, 471, 0, 472, 0, 473, 0,
    0, 474, 0, 475, 0, 476, 0, 477, 0, 478, 0, 479, 0, 480, 0, 481, 0, 482, 0, 483, 0, 484, 0, 485, 0, 486, 0, 487, 0, 488, 0, 489,
    0, 490, 0, 491, 0, 492, 0, 493, 0, 494, 0, 495, 0, 496, 0, 497, 0, 498, 0, 499, 0, 500, 0, 501, 0, 502, 0, 503, 0, 504, 0, 505,
    0, 506, 0, 507, 0, 508, 0, 509, 0, 510, 0, 511, 0, 512, 0, 513, 0, 514, 0, 515, 0, 516, 0, 517, 0, 518, 0, 519, 0, 520, 0, 521,
    0, 522, 0, 523, 0, 524, 0, 525, 0, 526, 0, 527, 0, 528, 0, 529, 0, 530, 0, 531, 0, 532, 0, 533, 0, 534, 0, 535, 0, 536, 0, 537,
    0, 538, 0, 539, 0, 540, 0, 541, 0, 542, 0, 543, 0, 544, 0, 545, 0, 546, 0, 547, 0, 548, 0, 549, 0, 550, 0, 551, 0, 552, 0, 553,
    0, 554, 0, 555, 0, 556, 0, 557, 0, 558, 0, 559, 0, 560, 0, 561, 0, 562, 0, 563, 0, 564, 0, 565, 0, 566, 0, 567, 0, 568, 0, 569,
    0, 570, 0, 571, 0, 572, 0, 573, 0, 574, 0, 575, 0, 576, 0, 577, 0, 578, 0, 579, 580, 581, 0, 582, 0, 583, 584, 585, 0, 586, 0, 587,
    0, 588, 0, 589, 0, 590, 0, 591, 0, 592, 0, 593, 0, 594, 0, 595, 0, 596, 597, 598, 0, 599, 0, 600, 0, 601, 0, 602, 0, 603, 0, 604,
    0, 605, 0, 606, 0, 607, 0, 608, 0, 609, 0, 610, 0, 611, 0, 612, 0, 613, 0, 614, 0, 615, 0, 616, 0, 617, 618, 619, 0, 620, 0, 621,
    0, 622, 0, 623, 0, 624, 0, 0, 0, 625, 0, 626, 0, 627, 0, 628, 0, 629, 0, 630, 0, 0, 0, 631, 0, 632, 633, 0, 634, 0, 635, 0,
    636, 0, 0, 0, 637, 0, 638, 0, 639, 0, 640, 0, 641, 0, 642, 0, 643, 0, 644, 0, 645, 0, 646, 0, 647, 0, 648, 0, 649, 0, 650, 0,
    651, 0, 652, 0, 653, 0, 654, 0, 655, 0, 656, 0, 657, 0, 658, 0, 659, 0, 660, 0, 661, 0, 662, 0, 663, 0, 664, 0, 665, 0, 666, 0,
    667, 0, 668, 0, 669, 0, 670, 0, 671, 0, 672, 0, 673, 0, 674, 0, 675, 0, 676, 0, 677, 0, 678, 0, 679, 0, 680, 0, 681, 0, 682, 0,
    683, 0, 684, 0, 685, 0, 686, 0, 687, 0, 688, 0, 689, 0, 690, 0, 691, 0, 692, 0, 693, 0, 694, 0, 695, 0, 696, 0, 697, 0, 698, 0,
    699, 0, 700, 0, 701, 0, 702, 0, 703, 0, 704, 0, 705, 0, 706, 0, 707, 0, 708, 0, 709, 0, 710, 0, 711, 0, 712, 0, 713, 0, 714, 0,
    715, 0, 716, 0, 717, 0, 718, 0, 719, 0, 720, 0, 721, 0, 722, 723, 0, 724, 0, 725, 0, 726, 0, 0, 727, 0, 728, 0, 0, 0, 729, 0,
    0, 0, 730, 0, 0, 0, 0, 0, 0, 0, 0, 731, 732, 0, 733, 0, 734, 735, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 736, 0, 0, 0, 0, 0,
    0, 737, 0, 0, 0, 738, 0, 739, 0, 0, 740, 0, 0, 0, 0, 741, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 742, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 743, 0,
    744, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    745, 0, 0, 746, 0, 0, 747, 0, 0, 748, 749, 0, 0, 0, 750, 0, 0, 0, 751, 0, 752, 0, 753, 0, 0, 754, 0, 755, 0, 756, 0, 757,
    0, 758, 0, 759, 760, 0, 0, 0, 0, 0, 0, 761, 0, 0, 0, 0, 0, 0, 0, 0, 762, 0, 0, 0, 0, 0, 0, 0, 0, 763, 0, 0,
    0, 0, 0, 764, 0, 0, 765, 0, 0, 766, 0, 0, 0, 0, 767, 0, 0, 768, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 769, 0, 0, 0, 0, 0, 770, 0, 0, 0, 771, 0, 0, 0, 0, 772, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 773, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 774, 0, 0, 0, 0, 0, 0, 775, 0, 0, 0, 0, 0, 0,
    776, 777, 0, 0, 0, 0, 0, 0, 0, 0, 0, 778, 0, 0, 779, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 780, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 781, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 782, 0, 0, 783,
    784, 0, 0, 0, 0, 785, 0, 0, 0, 0, 0, 0, 786, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    787, 0, 0, 0, 0, 0, 0, 0, 788, 0, 0, 0, 789, 0, 0, 0, 790, 0, 0, 0, 791, 0, 0, 0, 792, 0, 0, 0, 793, 0, 0, 0,
    794, 0, 0, 0, 0, 795, 0, 0, 0, 796, 0, 0, 797, 798, 0, 0, 799, 800, 0, 0, 801, 802, 0, 0, 803, 804, 0, 0, 805, 806, 0, 0,
    807, 808, 0, 0, 809, 810, 0, 0, 811, 812, 0, 0, 813, 0, 0, 0, 814, 0, 0, 0, 0, 815, 0, 816, 0, 817, 0, 818, 0, 819, 0, 0,
    820, 0, 0, 821, 0, 822, 0, 823, 0, 824, 0, 825, 0, 826, 0, 827, 0, 828, 0, 0, 0, 829, 0, 0, 0, 830, 0, 0, 0, 831, 0, 0,
    0, 832, 0, 0, 0, 0, 833, 0, 0, 0, 0, 834, 0, 0, 835, 0, 0, 0, 836, 0, 0, 0, 837, 0, 0, 838, 0, 0, 839, 0, 840, 0,
    841, 0, 842, 0, 843, 0, 844, 0, 845, 0, 0, 0, 0, 846, 0, 0, 0, 847, 0, 0, 0, 0, 848, 0, 0, 0, 849, 0, 0, 850, 0, 851,
    852, 0, 0, 853, 0, 0, 854, 0, 0, 855, 0, 0, 856, 0, 0, 857, 858, 0, 0, 859, 0, 0, 860, 0, 861, 0, 862, 0, 0, 863, 0, 0,
    864, 0, 0, 0, 865, 866, 0, 0, 0, 0, 867, 0, 0, 0, 868, 0, 0, 869, 0, 0, 870, 0, 0, 871, 0, 0, 872, 0, 0, 873, 0, 0,
    874, 0, 0, 875, 0, 0, 876, 0, 877, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 878, 0, 879, 880, 0, 881, 882, 0, 883,
    0, 0, 884, 0, 885, 0, 886, 887, 0, 0, 0, 0, 888, 0, 0, 0, 0, 889, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 890, 0,
    0, 0, 891, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 892, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 893, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 894, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 895, 0, 0, 0, 0, 0, 0, 896, 0, 0, 0, 0, 0, 0, 0, 0, 897, 0, 0, 0, 0, 0, 898, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 899, 0,
    0, 0, 0, 0, 0, 0, 0, 900, 0, 0, 0, 0, 0, 901, 0, 0, 0, 902, 0, 903, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 904, 0,
    0, 0, 0, 0, 0, 905, 0, 0, 0, 0, 0, 0, 906, 0, 0, 0, 0, 0, 0, 0, 907, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 908,
    0, 0, 0, 909, 0, 0, 910, 0, 0, 0, 911, 0, 0, 0, 0, 0, 0, 0, 0, 912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 913,
};
void recomp_unit_0194_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B0C000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0194[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B0C000;
    case 2u: goto L_08B0C010;
    case 3u: goto L_08B0C024;
    case 4u: goto L_08B0C02C;
    case 5u: goto L_08B0C03C;
    case 6u: goto L_08B0C04C;
    case 7u: goto L_08B0C054;
    case 8u: goto L_08B0C05C;
    case 9u: goto L_08B0C070;
    case 10u: goto L_08B0C080;
    case 11u: goto L_08B0C08C;
    case 12u: goto L_08B0C09C;
    case 13u: goto L_08B0C0A8;
    case 14u: goto L_08B0C0B0;
    case 15u: goto L_08B0C0B8;
    case 16u: goto L_08B0C0C0;
    case 17u: goto L_08B0C0C8;
    case 18u: goto L_08B0C0D0;
    case 19u: goto L_08B0C0D8;
    case 20u: goto L_08B0C0E4;
    case 21u: goto L_08B0C0F4;
    case 22u: goto L_08B0C108;
    case 23u: goto L_08B0C120;
    case 24u: goto L_08B0C128;
    case 25u: goto L_08B0C12C;
    case 26u: goto L_08B0C134;
    case 27u: goto L_08B0C13C;
    case 28u: goto L_08B0C150;
    case 29u: goto L_08B0C164;
    case 30u: goto L_08B0C178;
    case 31u: goto L_08B0C184;
    case 32u: goto L_08B0C188;
    case 33u: goto L_08B0C190;
    case 34u: goto L_08B0C1A0;
    case 35u: goto L_08B0C1B4;
    case 36u: goto L_08B0C1DC;
    case 37u: goto L_08B0C1E4;
    case 38u: goto L_08B0C214;
    case 39u: goto L_08B0C224;
    case 40u: goto L_08B0C230;
    case 41u: goto L_08B0C238;
    case 42u: goto L_08B0C244;
    case 43u: goto L_08B0C260;
    case 44u: goto L_08B0C270;
    case 45u: goto L_08B0C280;
    case 46u: goto L_08B0C288;
    case 47u: goto L_08B0C290;
    case 48u: goto L_08B0C2A0;
    case 49u: goto L_08B0C2E0;
    case 50u: goto L_08B0C2E8;
    case 51u: goto L_08B0C2F8;
    case 52u: goto L_08B0C300;
    case 53u: goto L_08B0C304;
    case 54u: goto L_08B0C310;
    case 55u: goto L_08B0C31C;
    case 56u: goto L_08B0C324;
    case 57u: goto L_08B0C32C;
    case 58u: goto L_08B0C350;
    case 59u: goto L_08B0C370;
    case 60u: goto L_08B0C3A4;
    case 61u: goto L_08B0C3AC;
    case 62u: goto L_08B0C3B4;
    case 63u: goto L_08B0C3C8;
    case 64u: goto L_08B0C3DC;
    case 65u: goto L_08B0C3F4;
    case 66u: goto L_08B0C450;
    case 67u: goto L_08B0C488;
    case 68u: goto L_08B0C490;
    case 69u: goto L_08B0C498;
    case 70u: goto L_08B0C4AC;
    case 71u: goto L_08B0C4B4;
    case 72u: goto L_08B0C4B8;
    case 73u: goto L_08B0C4D0;
    case 74u: goto L_08B0C4D4;
    case 75u: goto L_08B0C4DC;
    case 76u: goto L_08B0C4EC;
    case 77u: goto L_08B0C528;
    case 78u: goto L_08B0C540;
    case 79u: goto L_08B0C548;
    case 80u: goto L_08B0C554;
    case 81u: goto L_08B0C55C;
    case 82u: goto L_08B0C564;
    case 83u: goto L_08B0C568;
    case 84u: goto L_08B0C570;
    case 85u: goto L_08B0C57C;
    case 86u: goto L_08B0C58C;
    case 87u: goto L_08B0C5A0;
    case 88u: goto L_08B0C5A8;
    case 89u: goto L_08B0C5B4;
    case 90u: goto L_08B0C5C0;
    case 91u: goto L_08B0C5C8;
    case 92u: goto L_08B0C5D0;
    case 93u: goto L_08B0C5E0;
    case 94u: goto L_08B0C5F0;
    case 95u: goto L_08B0C5F8;
    case 96u: goto L_08B0C600;
    case 97u: goto L_08B0C608;
    case 98u: goto L_08B0C610;
    case 99u: goto L_08B0C618;
    case 100u: goto L_08B0C620;
    case 101u: goto L_08B0C62C;
    case 102u: goto L_08B0C638;
    case 103u: goto L_08B0C640;
    case 104u: goto L_08B0C648;
    case 105u: goto L_08B0C650;
    case 106u: goto L_08B0C65C;
    case 107u: goto L_08B0C664;
    case 108u: goto L_08B0C66C;
    case 109u: goto L_08B0C674;
    case 110u: goto L_08B0C67C;
    case 111u: goto L_08B0C68C;
    case 112u: goto L_08B0C694;
    case 113u: goto L_08B0C6A0;
    case 114u: goto L_08B0C6A8;
    case 115u: goto L_08B0C6B4;
    case 116u: goto L_08B0C6BC;
    case 117u: goto L_08B0C6C4;
    case 118u: goto L_08B0C6CC;
    case 119u: goto L_08B0C6D4;
    case 120u: goto L_08B0C6DC;
    case 121u: goto L_08B0C6E4;
    case 122u: goto L_08B0C710;
    case 123u: goto L_08B0C714;
    case 124u: goto L_08B0C718;
    case 125u: goto L_08B0C72C;
    case 126u: goto L_08B0C738;
    case 127u: goto L_08B0C750;
    case 128u: goto L_08B0C774;
    case 129u: goto L_08B0C790;
    case 130u: goto L_08B0C7A0;
    case 131u: goto L_08B0C7A4;
    case 132u: goto L_08B0C7D8;
    case 133u: goto L_08B0C7E0;
    case 134u: goto L_08B0C810;
    case 135u: goto L_08B0C848;
    case 136u: goto L_08B0C84C;
    case 137u: goto L_08B0C860;
    case 138u: goto L_08B0C878;
    case 139u: goto L_08B0C884;
    case 140u: goto L_08B0C894;
    case 141u: goto L_08B0C8A0;
    case 142u: goto L_08B0C8B0;
    case 143u: goto L_08B0C8C0;
    case 144u: goto L_08B0C8CC;
    case 145u: goto L_08B0C8D0;
    case 146u: goto L_08B0C8EC;
    case 147u: goto L_08B0C8F4;
    case 148u: goto L_08B0C8F8;
    case 149u: goto L_08B0C900;
    case 150u: goto L_08B0C924;
    case 151u: goto L_08B0C92C;
    case 152u: goto L_08B0C948;
    case 153u: goto L_08B0C950;
    case 154u: goto L_08B0C958;
    case 155u: goto L_08B0C984;
    case 156u: goto L_08B0C9A4;
    case 157u: goto L_08B0C9C4;
    case 158u: goto L_08B0C9E0;
    case 159u: goto L_08B0C9F4;
    case 160u: goto L_08B0CA0C;
    case 161u: goto L_08B0CA14;
    case 162u: goto L_08B0CA1C;
    case 163u: goto L_08B0CA28;
    case 164u: goto L_08B0CA2C;
    case 165u: goto L_08B0CA34;
    case 166u: goto L_08B0CA38;
    case 167u: goto L_08B0CA44;
    case 168u: goto L_08B0CA50;
    case 169u: goto L_08B0CA58;
    case 170u: goto L_08B0CA5C;
    case 171u: goto L_08B0CA98;
    case 172u: goto L_08B0CAA8;
    case 173u: goto L_08B0CAD8;
    case 174u: goto L_08B0CAF8;
    case 175u: goto L_08B0CB00;
    case 176u: goto L_08B0CB08;
    case 177u: goto L_08B0CE80;
    case 178u: goto L_08B0CE8C;
    case 179u: goto L_08B0CF48;
    case 180u: goto L_08B0CF64;
    case 181u: goto L_08B0CF88;
    case 182u: goto L_08B0CF90;
    case 183u: goto L_08B0CF98;
    case 184u: goto L_08B0CFA0;
    case 185u: goto L_08B0CFA8;
    case 186u: goto L_08B0CFB0;
    case 187u: goto L_08B0CFB8;
    case 188u: goto L_08B0CFC0;
    case 189u: goto L_08B0CFC8;
    case 190u: goto L_08B0CFD0;
    case 191u: goto L_08B0CFD8;
    case 192u: goto L_08B0CFF0;
    case 193u: goto L_08B0CFF8;
    case 194u: goto L_08B0D020;
    case 195u: goto L_08B0D040;
    case 196u: goto L_08B0D060;
    case 197u: goto L_08B0D080;
    case 198u: goto L_08B0D088;
    case 199u: goto L_08B0D090;
    case 200u: goto L_08B0D094;
    case 201u: goto L_08B0D0C4;
    case 202u: goto L_08B0D0CC;
    case 203u: goto L_08B0D0D0;
    case 204u: goto L_08B0D0D8;
    case 205u: goto L_08B0D0E0;
    case 206u: goto L_08B0D0E8;
    case 207u: goto L_08B0D0EC;
    case 208u: goto L_08B0D0F4;
    case 209u: goto L_08B0D0F8;
    case 210u: goto L_08B0D100;
    case 211u: goto L_08B0D108;
    case 212u: goto L_08B0D110;
    case 213u: goto L_08B0D11C;
    case 214u: goto L_08B0D124;
    case 215u: goto L_08B0D12C;
    case 216u: goto L_08B0D130;
    case 217u: goto L_08B0D138;
    case 218u: goto L_08B0D148;
    case 219u: goto L_08B0D150;
    case 220u: goto L_08B0D154;
    case 221u: goto L_08B0D160;
    case 222u: goto L_08B0D180;
    case 223u: goto L_08B0D188;
    case 224u: goto L_08B0D198;
    case 225u: goto L_08B0D1B4;
    case 226u: goto L_08B0D1BC;
    case 227u: goto L_08B0D1C4;
    case 228u: goto L_08B0D1CC;
    case 229u: goto L_08B0D1D4;
    case 230u: goto L_08B0D1DC;
    case 231u: goto L_08B0D1E4;
    case 232u: goto L_08B0D1EC;
    case 233u: goto L_08B0D1F4;
    case 234u: goto L_08B0D1FC;
    case 235u: goto L_08B0D218;
    case 236u: goto L_08B0D23C;
    case 237u: goto L_08B0D260;
    case 238u: goto L_08B0D284;
    case 239u: goto L_08B0D2A8;
    case 240u: goto L_08B0D2CC;
    case 241u: goto L_08B0D2F0;
    case 242u: goto L_08B0D31C;
    case 243u: goto L_08B0D324;
    case 244u: goto L_08B0D32C;
    case 245u: goto L_08B0D334;
    case 246u: goto L_08B0D33C;
    case 247u: goto L_08B0D344;
    case 248u: goto L_08B0D34C;
    case 249u: goto L_08B0D354;
    case 250u: goto L_08B0D35C;
    case 251u: goto L_08B0D364;
    case 252u: goto L_08B0D36C;
    case 253u: goto L_08B0D374;
    case 254u: goto L_08B0D37C;
    case 255u: goto L_08B0D384;
    case 256u: goto L_08B0D38C;
    case 257u: goto L_08B0D390;
    case 258u: goto L_08B0D398;
    case 259u: goto L_08B0D3A0;
    case 260u: goto L_08B0D3A8;
    case 261u: goto L_08B0D3B0;
    case 262u: goto L_08B0D3B4;
    case 263u: goto L_08B0D3B8;
    case 264u: goto L_08B0D3BC;
    case 265u: goto L_08B0D3C0;
    case 266u: goto L_08B0D3C8;
    case 267u: goto L_08B0D3D0;
    case 268u: goto L_08B0D3D8;
    case 269u: goto L_08B0D3E0;
    case 270u: goto L_08B0D3E8;
    case 271u: goto L_08B0D3F0;
    case 272u: goto L_08B0D3F8;
    case 273u: goto L_08B0D400;
    case 274u: goto L_08B0D408;
    case 275u: goto L_08B0D410;
    case 276u: goto L_08B0D418;
    case 277u: goto L_08B0D41C;
    case 278u: goto L_08B0D424;
    case 279u: goto L_08B0D42C;
    case 280u: goto L_08B0D434;
    case 281u: goto L_08B0D43C;
    case 282u: goto L_08B0D444;
    case 283u: goto L_08B0D44C;
    case 284u: goto L_08B0D454;
    case 285u: goto L_08B0D464;
    case 286u: goto L_08B0D480;
    case 287u: goto L_08B0D490;
    case 288u: goto L_08B0D49C;
    case 289u: goto L_08B0D4AC;
    case 290u: goto L_08B0D4C8;
    case 291u: goto L_08B0D4D8;
    case 292u: goto L_08B0D4EC;
    case 293u: goto L_08B0D4FC;
    case 294u: goto L_08B0D518;
    case 295u: goto L_08B0D528;
    case 296u: goto L_08B0D538;
    case 297u: goto L_08B0D548;
    case 298u: goto L_08B0D564;
    case 299u: goto L_08B0D574;
    case 300u: goto L_08B0D584;
    case 301u: goto L_08B0D5B8;
    case 302u: goto L_08B0D5C4;
    case 303u: goto L_08B0D5CC;
    case 304u: goto L_08B0D5D4;
    case 305u: goto L_08B0D5DC;
    case 306u: goto L_08B0D5E4;
    case 307u: goto L_08B0D5E8;
    case 308u: goto L_08B0D5F0;
    case 309u: goto L_08B0D5F8;
    case 310u: goto L_08B0D600;
    case 311u: goto L_08B0D608;
    case 312u: goto L_08B0D60C;
    case 313u: goto L_08B0D614;
    case 314u: goto L_08B0D61C;
    case 315u: goto L_08B0D638;
    case 316u: goto L_08B0D64C;
    case 317u: goto L_08B0D674;
    case 318u: goto L_08B0D684;
    case 319u: goto L_08B0D694;
    case 320u: goto L_08B0D6A4;
    case 321u: goto L_08B0D6B0;
    case 322u: goto L_08B0D6C0;
    case 323u: goto L_08B0D6D0;
    case 324u: goto L_08B0D780;
    case 325u: goto L_08B0D7A4;
    case 326u: goto L_08B0D7C4;
    case 327u: goto L_08B0D7E8;
    case 328u: goto L_08B0D808;
    case 329u: goto L_08B0D848;
    case 330u: goto L_08B0D854;
    case 331u: goto L_08B0D85C;
    case 332u: goto L_08B0D864;
    case 333u: goto L_08B0D86C;
    case 334u: goto L_08B0D878;
    case 335u: goto L_08B0D890;
    case 336u: goto L_08B0D898;
    case 337u: goto L_08B0D8C0;
    case 338u: goto L_08B0D8D4;
    case 339u: goto L_08B0D8FC;
    case 340u: goto L_08B0D910;
    case 341u: goto L_08B0D934;
    case 342u: goto L_08B0D94C;
    case 343u: goto L_08B0D968;
    case 344u: goto L_08B0D978;
    case 345u: goto L_08B0D98C;
    case 346u: goto L_08B0D994;
    case 347u: goto L_08B0D99C;
    case 348u: goto L_08B0D9A0;
    case 349u: goto L_08B0D9A8;
    case 350u: goto L_08B0D9B0;
    case 351u: goto L_08B0D9B8;
    case 352u: goto L_08B0D9C0;
    case 353u: goto L_08B0D9D4;
    case 354u: goto L_08B0D9D8;
    case 355u: goto L_08B0D9E0;
    case 356u: goto L_08B0D9E8;
    case 357u: goto L_08B0D9F8;
    case 358u: goto L_08B0DA0C;
    case 359u: goto L_08B0DA24;
    case 360u: goto L_08B0DA34;
    case 361u: goto L_08B0DA44;
    case 362u: goto L_08B0DA48;
    case 363u: goto L_08B0DA5C;
    case 364u: goto L_08B0DA70;
    case 365u: goto L_08B0DA7C;
    case 366u: goto L_08B0DA88;
    case 367u: goto L_08B0DAA4;
    case 368u: goto L_08B0DABC;
    case 369u: goto L_08B0DACC;
    case 370u: goto L_08B0DAE4;
    case 371u: goto L_08B0DB08;
    case 372u: goto L_08B0DB38;
    case 373u: goto L_08B0DC18;
    case 374u: goto L_08B0DC20;
    case 375u: goto L_08B0DC28;
    case 376u: goto L_08B0DC30;
    case 377u: goto L_08B0DC38;
    case 378u: goto L_08B0DC40;
    case 379u: goto L_08B0DC4C;
    case 380u: goto L_08B0DC54;
    case 381u: goto L_08B0DC58;
    case 382u: goto L_08B0DC5C;
    case 383u: goto L_08B0DC74;
    case 384u: goto L_08B0DC80;
    case 385u: goto L_08B0DC98;
    case 386u: goto L_08B0DCD8;
    case 387u: goto L_08B0DCF8;
    case 388u: goto L_08B0DD00;
    case 389u: goto L_08B0DD08;
    case 390u: goto L_08B0DD1C;
    case 391u: goto L_08B0DD40;
    case 392u: goto L_08B0DD48;
    case 393u: goto L_08B0DD50;
    case 394u: goto L_08B0DD58;
    case 395u: goto L_08B0DD60;
    case 396u: goto L_08B0DD68;
    case 397u: goto L_08B0DD70;
    case 398u: goto L_08B0DD78;
    case 399u: goto L_08B0DD80;
    case 400u: goto L_08B0DD88;
    case 401u: goto L_08B0DD90;
    case 402u: goto L_08B0DD98;
    case 403u: goto L_08B0DDA0;
    case 404u: goto L_08B0DDA4;
    case 405u: goto L_08B0DDA8;
    case 406u: goto L_08B0DDE0;
    case 407u: goto L_08B0DE08;
    case 408u: goto L_08B0DE10;
    case 409u: goto L_08B0DE20;
    case 410u: goto L_08B0DE24;
    case 411u: goto L_08B0DE28;
    case 412u: goto L_08B0DE54;
    case 413u: goto L_08B0DE68;
    case 414u: goto L_08B0DE78;
    case 415u: goto L_08B0DE88;
    case 416u: goto L_08B0DE8C;
    case 417u: goto L_08B0DEA8;
    case 418u: goto L_08B0DEB0;
    case 419u: goto L_08B0DEBC;
    case 420u: goto L_08B0DEC8;
    case 421u: goto L_08B0DECC;
    case 422u: goto L_08B0DED4;
    case 423u: goto L_08B0DEDC;
    case 424u: goto L_08B0DEE8;
    case 425u: goto L_08B0DEF8;
    case 426u: goto L_08B0DF10;
    case 427u: goto L_08B0DF40;
    case 428u: goto L_08B0DF70;
    case 429u: goto L_08B0DF9C;
    case 430u: goto L_08B0DFC0;
    case 431u: goto L_08B0DFCC;
    case 432u: goto L_08B0DFD8;
    case 433u: goto L_08B0DFE8;
    case 434u: goto L_08B0E004;
    case 435u: goto L_08B0E014;
    case 436u: goto L_08B0E020;
    case 437u: goto L_08B0E040;
    case 438u: goto L_08B0E064;
    case 439u: goto L_08B0E078;
    case 440u: goto L_08B0E088;
    case 441u: goto L_08B0E094;
    case 442u: goto L_08B0E09C;
    case 443u: goto L_08B0E0AC;
    case 444u: goto L_08B0E0B8;
    case 445u: goto L_08B0E0C0;
    case 446u: goto L_08B0E0E4;
    case 447u: goto L_08B0E108;
    case 448u: goto L_08B0E124;
    case 449u: goto L_08B0E13C;
    case 450u: goto L_08B0E154;
    case 451u: goto L_08B0E174;
    case 452u: goto L_08B0E1D0;
    case 453u: goto L_08B0E1D8;
    case 454u: goto L_08B0E1E0;
    case 455u: goto L_08B0E1E8;
    case 456u: goto L_08B0E1F0;
    case 457u: goto L_08B0E1F8;
    case 458u: goto L_08B0E200;
    case 459u: goto L_08B0E208;
    case 460u: goto L_08B0E210;
    case 461u: goto L_08B0E218;
    case 462u: goto L_08B0E220;
    case 463u: goto L_08B0E228;
    case 464u: goto L_08B0E230;
    case 465u: goto L_08B0E238;
    case 466u: goto L_08B0E240;
    case 467u: goto L_08B0E248;
    case 468u: goto L_08B0E250;
    case 469u: goto L_08B0E258;
    case 470u: goto L_08B0E260;
    case 471u: goto L_08B0E268;
    case 472u: goto L_08B0E270;
    case 473u: goto L_08B0E278;
    case 474u: goto L_08B0E284;
    case 475u: goto L_08B0E28C;
    case 476u: goto L_08B0E294;
    case 477u: goto L_08B0E29C;
    case 478u: goto L_08B0E2A4;
    case 479u: goto L_08B0E2AC;
    case 480u: goto L_08B0E2B4;
    case 481u: goto L_08B0E2BC;
    case 482u: goto L_08B0E2C4;
    case 483u: goto L_08B0E2CC;
    case 484u: goto L_08B0E2D4;
    case 485u: goto L_08B0E2DC;
    case 486u: goto L_08B0E2E4;
    case 487u: goto L_08B0E2EC;
    case 488u: goto L_08B0E2F4;
    case 489u: goto L_08B0E2FC;
    case 490u: goto L_08B0E304;
    case 491u: goto L_08B0E30C;
    case 492u: goto L_08B0E314;
    case 493u: goto L_08B0E31C;
    case 494u: goto L_08B0E324;
    case 495u: goto L_08B0E32C;
    case 496u: goto L_08B0E334;
    case 497u: goto L_08B0E33C;
    case 498u: goto L_08B0E344;
    case 499u: goto L_08B0E34C;
    case 500u: goto L_08B0E354;
    case 501u: goto L_08B0E35C;
    case 502u: goto L_08B0E364;
    case 503u: goto L_08B0E36C;
    case 504u: goto L_08B0E374;
    case 505u: goto L_08B0E37C;
    case 506u: goto L_08B0E384;
    case 507u: goto L_08B0E38C;
    case 508u: goto L_08B0E394;
    case 509u: goto L_08B0E39C;
    case 510u: goto L_08B0E3A4;
    case 511u: goto L_08B0E3AC;
    case 512u: goto L_08B0E3B4;
    case 513u: goto L_08B0E3BC;
    case 514u: goto L_08B0E3C4;
    case 515u: goto L_08B0E3CC;
    case 516u: goto L_08B0E3D4;
    case 517u: goto L_08B0E3DC;
    case 518u: goto L_08B0E3E4;
    case 519u: goto L_08B0E3EC;
    case 520u: goto L_08B0E3F4;
    case 521u: goto L_08B0E3FC;
    case 522u: goto L_08B0E404;
    case 523u: goto L_08B0E40C;
    case 524u: goto L_08B0E414;
    case 525u: goto L_08B0E41C;
    case 526u: goto L_08B0E424;
    case 527u: goto L_08B0E42C;
    case 528u: goto L_08B0E434;
    case 529u: goto L_08B0E43C;
    case 530u: goto L_08B0E444;
    case 531u: goto L_08B0E44C;
    case 532u: goto L_08B0E454;
    case 533u: goto L_08B0E45C;
    case 534u: goto L_08B0E464;
    case 535u: goto L_08B0E46C;
    case 536u: goto L_08B0E474;
    case 537u: goto L_08B0E47C;
    case 538u: goto L_08B0E484;
    case 539u: goto L_08B0E48C;
    case 540u: goto L_08B0E494;
    case 541u: goto L_08B0E49C;
    case 542u: goto L_08B0E4A4;
    case 543u: goto L_08B0E4AC;
    case 544u: goto L_08B0E4B4;
    case 545u: goto L_08B0E4BC;
    case 546u: goto L_08B0E4C4;
    case 547u: goto L_08B0E4CC;
    case 548u: goto L_08B0E4D4;
    case 549u: goto L_08B0E4DC;
    case 550u: goto L_08B0E4E4;
    case 551u: goto L_08B0E4EC;
    case 552u: goto L_08B0E4F4;
    case 553u: goto L_08B0E4FC;
    case 554u: goto L_08B0E504;
    case 555u: goto L_08B0E50C;
    case 556u: goto L_08B0E514;
    case 557u: goto L_08B0E51C;
    case 558u: goto L_08B0E524;
    case 559u: goto L_08B0E52C;
    case 560u: goto L_08B0E534;
    case 561u: goto L_08B0E53C;
    case 562u: goto L_08B0E544;
    case 563u: goto L_08B0E54C;
    case 564u: goto L_08B0E554;
    case 565u: goto L_08B0E55C;
    case 566u: goto L_08B0E564;
    case 567u: goto L_08B0E56C;
    case 568u: goto L_08B0E574;
    case 569u: goto L_08B0E57C;
    case 570u: goto L_08B0E584;
    case 571u: goto L_08B0E58C;
    case 572u: goto L_08B0E594;
    case 573u: goto L_08B0E59C;
    case 574u: goto L_08B0E5A4;
    case 575u: goto L_08B0E5AC;
    case 576u: goto L_08B0E5B4;
    case 577u: goto L_08B0E5BC;
    case 578u: goto L_08B0E5C4;
    case 579u: goto L_08B0E5CC;
    case 580u: goto L_08B0E5D0;
    case 581u: goto L_08B0E5D4;
    case 582u: goto L_08B0E5DC;
    case 583u: goto L_08B0E5E4;
    case 584u: goto L_08B0E5E8;
    case 585u: goto L_08B0E5EC;
    case 586u: goto L_08B0E5F4;
    case 587u: goto L_08B0E5FC;
    case 588u: goto L_08B0E604;
    case 589u: goto L_08B0E60C;
    case 590u: goto L_08B0E614;
    case 591u: goto L_08B0E61C;
    case 592u: goto L_08B0E624;
    case 593u: goto L_08B0E62C;
    case 594u: goto L_08B0E634;
    case 595u: goto L_08B0E63C;
    case 596u: goto L_08B0E644;
    case 597u: goto L_08B0E648;
    case 598u: goto L_08B0E64C;
    case 599u: goto L_08B0E654;
    case 600u: goto L_08B0E65C;
    case 601u: goto L_08B0E664;
    case 602u: goto L_08B0E66C;
    case 603u: goto L_08B0E674;
    case 604u: goto L_08B0E67C;
    case 605u: goto L_08B0E684;
    case 606u: goto L_08B0E68C;
    case 607u: goto L_08B0E694;
    case 608u: goto L_08B0E69C;
    case 609u: goto L_08B0E6A4;
    case 610u: goto L_08B0E6AC;
    case 611u: goto L_08B0E6B4;
    case 612u: goto L_08B0E6BC;
    case 613u: goto L_08B0E6C4;
    case 614u: goto L_08B0E6CC;
    case 615u: goto L_08B0E6D4;
    case 616u: goto L_08B0E6DC;
    case 617u: goto L_08B0E6E4;
    case 618u: goto L_08B0E6E8;
    case 619u: goto L_08B0E6EC;
    case 620u: goto L_08B0E6F4;
    case 621u: goto L_08B0E6FC;
    case 622u: goto L_08B0E704;
    case 623u: goto L_08B0E70C;
    case 624u: goto L_08B0E714;
    case 625u: goto L_08B0E724;
    case 626u: goto L_08B0E72C;
    case 627u: goto L_08B0E734;
    case 628u: goto L_08B0E73C;
    case 629u: goto L_08B0E744;
    case 630u: goto L_08B0E74C;
    case 631u: goto L_08B0E75C;
    case 632u: goto L_08B0E764;
    case 633u: goto L_08B0E768;
    case 634u: goto L_08B0E770;
    case 635u: goto L_08B0E778;
    case 636u: goto L_08B0E780;
    case 637u: goto L_08B0E790;
    case 638u: goto L_08B0E798;
    case 639u: goto L_08B0E7A0;
    case 640u: goto L_08B0E7A8;
    case 641u: goto L_08B0E7B0;
    case 642u: goto L_08B0E7B8;
    case 643u: goto L_08B0E7C0;
    case 644u: goto L_08B0E7C8;
    case 645u: goto L_08B0E7D0;
    case 646u: goto L_08B0E7D8;
    case 647u: goto L_08B0E7E0;
    case 648u: goto L_08B0E7E8;
    case 649u: goto L_08B0E7F0;
    case 650u: goto L_08B0E7F8;
    case 651u: goto L_08B0E800;
    case 652u: goto L_08B0E808;
    case 653u: goto L_08B0E810;
    case 654u: goto L_08B0E818;
    case 655u: goto L_08B0E820;
    case 656u: goto L_08B0E828;
    case 657u: goto L_08B0E830;
    case 658u: goto L_08B0E838;
    case 659u: goto L_08B0E840;
    case 660u: goto L_08B0E848;
    case 661u: goto L_08B0E850;
    case 662u: goto L_08B0E858;
    case 663u: goto L_08B0E860;
    case 664u: goto L_08B0E868;
    case 665u: goto L_08B0E870;
    case 666u: goto L_08B0E878;
    case 667u: goto L_08B0E880;
    case 668u: goto L_08B0E888;
    case 669u: goto L_08B0E890;
    case 670u: goto L_08B0E898;
    case 671u: goto L_08B0E8A0;
    case 672u: goto L_08B0E8A8;
    case 673u: goto L_08B0E8B0;
    case 674u: goto L_08B0E8B8;
    case 675u: goto L_08B0E8C0;
    case 676u: goto L_08B0E8C8;
    case 677u: goto L_08B0E8D0;
    case 678u: goto L_08B0E8D8;
    case 679u: goto L_08B0E8E0;
    case 680u: goto L_08B0E8E8;
    case 681u: goto L_08B0E8F0;
    case 682u: goto L_08B0E8F8;
    case 683u: goto L_08B0E900;
    case 684u: goto L_08B0E908;
    case 685u: goto L_08B0E910;
    case 686u: goto L_08B0E918;
    case 687u: goto L_08B0E920;
    case 688u: goto L_08B0E928;
    case 689u: goto L_08B0E930;
    case 690u: goto L_08B0E938;
    case 691u: goto L_08B0E940;
    case 692u: goto L_08B0E948;
    case 693u: goto L_08B0E950;
    case 694u: goto L_08B0E958;
    case 695u: goto L_08B0E960;
    case 696u: goto L_08B0E968;
    case 697u: goto L_08B0E970;
    case 698u: goto L_08B0E978;
    case 699u: goto L_08B0E980;
    case 700u: goto L_08B0E988;
    case 701u: goto L_08B0E990;
    case 702u: goto L_08B0E998;
    case 703u: goto L_08B0E9A0;
    case 704u: goto L_08B0E9A8;
    case 705u: goto L_08B0E9B0;
    case 706u: goto L_08B0E9B8;
    case 707u: goto L_08B0E9C0;
    case 708u: goto L_08B0E9C8;
    case 709u: goto L_08B0E9D0;
    case 710u: goto L_08B0E9D8;
    case 711u: goto L_08B0E9E0;
    case 712u: goto L_08B0E9E8;
    case 713u: goto L_08B0E9F0;
    case 714u: goto L_08B0E9F8;
    case 715u: goto L_08B0EA00;
    case 716u: goto L_08B0EA08;
    case 717u: goto L_08B0EA10;
    case 718u: goto L_08B0EA18;
    case 719u: goto L_08B0EA20;
    case 720u: goto L_08B0EA28;
    case 721u: goto L_08B0EA30;
    case 722u: goto L_08B0EA38;
    case 723u: goto L_08B0EA3C;
    case 724u: goto L_08B0EA44;
    case 725u: goto L_08B0EA4C;
    case 726u: goto L_08B0EA54;
    case 727u: goto L_08B0EA60;
    case 728u: goto L_08B0EA68;
    case 729u: goto L_08B0EA78;
    case 730u: goto L_08B0EA88;
    case 731u: goto L_08B0EAAC;
    case 732u: goto L_08B0EAB0;
    case 733u: goto L_08B0EAB8;
    case 734u: goto L_08B0EAC0;
    case 735u: goto L_08B0EAC4;
    case 736u: goto L_08B0EB68;
    case 737u: goto L_08B0EB84;
    case 738u: goto L_08B0EB94;
    case 739u: goto L_08B0EB9C;
    case 740u: goto L_08B0EBA8;
    case 741u: goto L_08B0EBBC;
    case 742u: goto L_08B0EC4C;
    case 743u: goto L_08B0ED78;
    case 744u: goto L_08B0ED80;
    case 745u: goto L_08B0EE80;
    case 746u: goto L_08B0EE8C;
    case 747u: goto L_08B0EE98;
    case 748u: goto L_08B0EEA4;
    case 749u: goto L_08B0EEA8;
    case 750u: goto L_08B0EEB8;
    case 751u: goto L_08B0EEC8;
    case 752u: goto L_08B0EED0;
    case 753u: goto L_08B0EED8;
    case 754u: goto L_08B0EEE4;
    case 755u: goto L_08B0EEEC;
    case 756u: goto L_08B0EEF4;
    case 757u: goto L_08B0EEFC;
    case 758u: goto L_08B0EF04;
    case 759u: goto L_08B0EF0C;
    case 760u: goto L_08B0EF10;
    case 761u: goto L_08B0EF2C;
    case 762u: goto L_08B0EF50;
    case 763u: goto L_08B0EF74;
    case 764u: goto L_08B0EF8C;
    case 765u: goto L_08B0EF98;
    case 766u: goto L_08B0EFA4;
    case 767u: goto L_08B0EFB8;
    case 768u: goto L_08B0EFC4;
    case 769u: goto L_08B0F008;
    case 770u: goto L_08B0F020;
    case 771u: goto L_08B0F030;
    case 772u: goto L_08B0F044;
    case 773u: goto L_08B0F074;
    case 774u: goto L_08B0F0C8;
    case 775u: goto L_08B0F0E4;
    case 776u: goto L_08B0F100;
    case 777u: goto L_08B0F104;
    case 778u: goto L_08B0F12C;
    case 779u: goto L_08B0F138;
    case 780u: goto L_08B0F168;
    case 781u: goto L_08B0F1B0;
    case 782u: goto L_08B0F1F0;
    case 783u: goto L_08B0F1FC;
    case 784u: goto L_08B0F200;
    case 785u: goto L_08B0F214;
    case 786u: goto L_08B0F230;
    case 787u: goto L_08B0F280;
    case 788u: goto L_08B0F2A0;
    case 789u: goto L_08B0F2B0;
    case 790u: goto L_08B0F2C0;
    case 791u: goto L_08B0F2D0;
    case 792u: goto L_08B0F2E0;
    case 793u: goto L_08B0F2F0;
    case 794u: goto L_08B0F300;
    case 795u: goto L_08B0F314;
    case 796u: goto L_08B0F324;
    case 797u: goto L_08B0F330;
    case 798u: goto L_08B0F334;
    case 799u: goto L_08B0F340;
    case 800u: goto L_08B0F344;
    case 801u: goto L_08B0F350;
    case 802u: goto L_08B0F354;
    case 803u: goto L_08B0F360;
    case 804u: goto L_08B0F364;
    case 805u: goto L_08B0F370;
    case 806u: goto L_08B0F374;
    case 807u: goto L_08B0F380;
    case 808u: goto L_08B0F384;
    case 809u: goto L_08B0F390;
    case 810u: goto L_08B0F394;
    case 811u: goto L_08B0F3A0;
    case 812u: goto L_08B0F3A4;
    case 813u: goto L_08B0F3B0;
    case 814u: goto L_08B0F3C0;
    case 815u: goto L_08B0F3D4;
    case 816u: goto L_08B0F3DC;
    case 817u: goto L_08B0F3E4;
    case 818u: goto L_08B0F3EC;
    case 819u: goto L_08B0F3F4;
    case 820u: goto L_08B0F400;
    case 821u: goto L_08B0F40C;
    case 822u: goto L_08B0F414;
    case 823u: goto L_08B0F41C;
    case 824u: goto L_08B0F424;
    case 825u: goto L_08B0F42C;
    case 826u: goto L_08B0F434;
    case 827u: goto L_08B0F43C;
    case 828u: goto L_08B0F444;
    case 829u: goto L_08B0F454;
    case 830u: goto L_08B0F464;
    case 831u: goto L_08B0F474;
    case 832u: goto L_08B0F484;
    case 833u: goto L_08B0F498;
    case 834u: goto L_08B0F4AC;
    case 835u: goto L_08B0F4B8;
    case 836u: goto L_08B0F4C8;
    case 837u: goto L_08B0F4D8;
    case 838u: goto L_08B0F4E4;
    case 839u: goto L_08B0F4F0;
    case 840u: goto L_08B0F4F8;
    case 841u: goto L_08B0F500;
    case 842u: goto L_08B0F508;
    case 843u: goto L_08B0F510;
    case 844u: goto L_08B0F518;
    case 845u: goto L_08B0F520;
    case 846u: goto L_08B0F534;
    case 847u: goto L_08B0F544;
    case 848u: goto L_08B0F558;
    case 849u: goto L_08B0F568;
    case 850u: goto L_08B0F574;
    case 851u: goto L_08B0F57C;
    case 852u: goto L_08B0F580;
    case 853u: goto L_08B0F58C;
    case 854u: goto L_08B0F598;
    case 855u: goto L_08B0F5A4;
    case 856u: goto L_08B0F5B0;
    case 857u: goto L_08B0F5BC;
    case 858u: goto L_08B0F5C0;
    case 859u: goto L_08B0F5CC;
    case 860u: goto L_08B0F5D8;
    case 861u: goto L_08B0F5E0;
    case 862u: goto L_08B0F5E8;
    case 863u: goto L_08B0F5F4;
    case 864u: goto L_08B0F600;
    case 865u: goto L_08B0F610;
    case 866u: goto L_08B0F614;
    case 867u: goto L_08B0F628;
    case 868u: goto L_08B0F638;
    case 869u: goto L_08B0F644;
    case 870u: goto L_08B0F650;
    case 871u: goto L_08B0F65C;
    case 872u: goto L_08B0F668;
    case 873u: goto L_08B0F674;
    case 874u: goto L_08B0F680;
    case 875u: goto L_08B0F68C;
    case 876u: goto L_08B0F698;
    case 877u: goto L_08B0F6A0;
    case 878u: goto L_08B0F6DC;
    case 879u: goto L_08B0F6E4;
    case 880u: goto L_08B0F6E8;
    case 881u: goto L_08B0F6F0;
    case 882u: goto L_08B0F6F4;
    case 883u: goto L_08B0F6FC;
    case 884u: goto L_08B0F708;
    case 885u: goto L_08B0F710;
    case 886u: goto L_08B0F718;
    case 887u: goto L_08B0F71C;
    case 888u: goto L_08B0F730;
    case 889u: goto L_08B0F744;
    case 890u: goto L_08B0F778;
    case 891u: goto L_08B0F788;
    case 892u: goto L_08B0F828;
    case 893u: goto L_08B0F874;
    case 894u: goto L_08B0F8B4;
    case 895u: goto L_08B0FD88;
    case 896u: goto L_08B0FDA4;
    case 897u: goto L_08B0FDC8;
    case 898u: goto L_08B0FDE0;
    case 899u: goto L_08B0FE78;
    case 900u: goto L_08B0FE9C;
    case 901u: goto L_08B0FEB4;
    case 902u: goto L_08B0FEC4;
    case 903u: goto L_08B0FECC;
    case 904u: goto L_08B0FEF8;
    case 905u: goto L_08B0FF14;
    case 906u: goto L_08B0FF30;
    case 907u: goto L_08B0FF50;
    case 908u: goto L_08B0FF7C;
    case 909u: goto L_08B0FF8C;
    case 910u: goto L_08B0FF98;
    case 911u: goto L_08B0FFA8;
    case 912u: goto L_08B0FFCC;
    case 913u: goto L_08B0FFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B0C000:
    rt.unsupported(0x08B0C000u, 0x726F466Eu, "unknown not lowered yet"); return;
L_08B0C010:
    ctx.execute_vfpu_vcmp_ct<116u, 105u, 1u, 5u>();
    rt.unsupported(0x08B0C014u, 0x726F4673u, "unknown not lowered yet"); return;
L_08B0C024:
    if (ctx.gpr[27] == ctx.gpr[5]) {
    ctx.execute_vfpu_vscl_ct<117u, 115u, 112u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 461u, 0x08B24DF4u>(ctx, &aot_mem); return;
    }
    goto L_08B0C02C;
L_08B0C02C:
    ctx.execute_vfpu_compare3(110u, 100u, 70u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<114u, 85u, 115u, 1u>();
    rt.unsupported(0x08B0C034u, 0x00000072u, "special? not lowered yet"); return;
L_08B0C03C:
    rt.unsupported(0x08B0C03Cu, 0x41656373u, "unknown not lowered yet"); return;
L_08B0C04C:
    if (ctx.gpr[27] == ctx.gpr[5]) {
    ctx.execute_vfpu_compare3(97u, 115u, 67u, 1u, 6u);
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 467u, 0x08B24E1Cu>(ctx, &aot_mem); return;
    }
    goto L_08B0C054;
L_08B0C054:
    rt.unsupported(0x08B0C054u, 0x00006572u, "special? not lowered yet"); return;
L_08B0C05C:
    rt.unsupported(0x08B0C05Cu, 0x41656373u, "unknown not lowered yet"); return;
L_08B0C070:
    rt.unsupported(0x08B0C070u, 0x47656373u, "cop1? not lowered yet"); return;
L_08B0C080:
    rt.unsupported(0x08B0C080u, 0x43656373u, "unknown not lowered yet"); return;
L_08B0C08C:
    rt.unsupported(0x08B0C08Cu, 0x44656373u, "cop1? not lowered yet"); return;
L_08B0C09C:
    rt.unsupported(0x08B0C09Cu, 0x4D656373u, "unknown not lowered yet"); return;
L_08B0C0A8:
    if (ctx.gpr[11] != ctx.gpr[5]) {
    rt.unsupported(0x08B0C0ACu, 0x7355646Du, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 479u, 0x08B24E78u>(ctx, &aot_mem); return;
    }
    goto L_08B0C0B0;
L_08B0C0B0:
    ctx.gpr[14] = (0u | 0u);
    // nop
    goto L_08B0C0B8;
L_08B0C0B8:
    if (ctx.gpr[11] != ctx.gpr[5]) {
    rt.unsupported(0x08B0C0BCu, 0x696C6974u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 481u, 0x08B24E88u>(ctx, &aot_mem); return;
    }
    goto L_08B0C0C0;
L_08B0C0C0:
    rt.unsupported(0x08B0C0C0u, 0x00007974u, "special? not lowered yet"); return;
L_08B0C0C8:
    if (ctx.gpr[3] == ctx.gpr[5]) {
    rt.unsupported(0x08B0C0CCu, 0x7265776Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 483u, 0x08B24E98u>(ctx, &aot_mem); return;
    }
    goto L_08B0C0D0;
L_08B0C0D0:
    // nop
    // nop
    goto L_08B0C0D8;
L_08B0C0D8:
    rt.unsupported(0x08B0C0D8u, 0x4E656373u, "unknown not lowered yet"); return;
L_08B0C0E4:
    rt.unsupported(0x08B0C0E4u, 0x4E656373u, "unknown not lowered yet"); return;
L_08B0C0F4:
    rt.unsupported(0x08B0C0F4u, 0x4E656373u, "unknown not lowered yet"); return;
L_08B0C108:
    rt.unsupported(0x08B0C108u, 0x4E656373u, "unknown not lowered yet"); return;
L_08B0C120:
    if (ctx.gpr[19] == ctx.gpr[5]) {
    rt.unsupported(0x08B0C124u, 0x00006374u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 494u, 0x08B24EF0u>(ctx, &aot_mem); return;
    }
    goto L_08B0C128;
L_08B0C128:
    // nop
    goto L_08B0C12C;
L_08B0C12C:
    if (ctx.gpr[27] != ctx.gpr[5]) {
    rt.unsupported(0x08B0C130u, 0x446E616Cu, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 496u, 0x08B24EFCu>(ctx, &aot_mem); return;
    }
    goto L_08B0C134;
L_08B0C134:
    rt.unsupported(0x08B0C134u, 0x00007672u, "special? not lowered yet"); return;
L_08B0C13C:
    ctx.execute_vfpu_vscl_ct<73u, 110u, 116u, 1u>();
    rt.unsupported(0x08B0C140u, 0x70757272u, "unknown not lowered yet"); return;
L_08B0C150:
    rt.unsupported(0x08B0C150u, 0xD632ACDBu, "vfpu not lowered yet"); return;
L_08B0C164:
    rt.unsupported(0x08B0C168u, 0x08AEA1ACu, "control flow in delay slot"); return;
L_08B0C178:
    ctx.set_vfpu_scalar_bits_ct<36u>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23880)));
    rt.unsupported(0x08B0C17Cu, 0xD61E6961u, "vfpu not lowered yet"); return;
L_08B0C184:
    rt.unsupported(0x08B0C184u, 0xD7763699u, "vfpu not lowered yet"); return;
L_08B0C188:
    ctx.execute_vfpu_compare3(76u, 10u, 116u, 2u, 7u);
    rt.unsupported(0x08B0C18Cu, 0x9ED0AE87u, "unknown not lowered yet"); return;
L_08B0C190:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 7687 ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[21] & 22195u);
    if (static_cast<std::int32_t>(ctx.gpr[17]) > 0) {
    rt.unsupported(0x08B0C19Cu, 0x7945ECDAu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 646u, 0x08B1EF80u>(ctx, &aot_mem); return;
    }
    goto L_08B0C1A0;
L_08B0C1A0:
    ctx.gpr[15] = (aot_mem.aot_load8(ctx.gpr[31] + static_cast<std::uint32_t>(14403)));
    rt.unsupported(0x08B0C1A4u, 0xB58E61B7u, "unknown not lowered yet"); return;
L_08B0C1B4:
    rt.unsupported(0x08B0C1B8u, 0x0AD043EDu, "control flow in delay slot"); return;
L_08B0C1DC:
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[30];
    rt.unsupported(0x08B0C1E0u, 0x4DA4C788u, "unknown not lowered yet"); return;
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 341u, 0x08B24A74u>(ctx, &aot_mem); return;
      }
      goto L_08B0C1E4;
    }
L_08B0C1E4:
    ctx.execute_vfpu_compare3(27u, 116u, 18u, 1u, 7u);
    rt.unsupported(0x08B0C1E8u, 0x7F27BB5Eu, "special3? not lowered yet"); return;
L_08B0C214:
    ctx.gpr[25] = (static_cast<std::int32_t>(0u) < 10409 ? 1u : 0u);
    (void)(ctx.pc = 0x0FC28EB8u, rt.invoke_chained_call(ctx, &aot_mem)); return;
L_08B0C224:
    rt.unsupported(0x08B0C224u, 0x04B7766Eu, "regimm? not lowered yet"); return;
L_08B0C230:
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[25];
    ctx.gpr[24] = (static_cast<std::int32_t>(ctx.gpr[22]) < -7623 ? 1u : 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 110u, 0x08AF4798u>(ctx, &aot_mem); return;
      }
      goto L_08B0C238;
    }
L_08B0C238:
    ctx.gpr[23] = (ctx.gpr[5] | 33603u);
    if (ctx.gpr[6] == ctx.gpr[4]) {
    ctx.execute_vfpu_vdot_ct<86u, 12u, 85u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 797u, 0x08AFF79Cu>(ctx, &aot_mem); return;
    }
    goto L_08B0C244;
L_08B0C244:
    rt.unsupported(0x08B0C244u, 0x67AF3428u, "vfpu1 not lowered yet"); return;
L_08B0C260:
    rt.unsupported(0x08B0C260u, 0x20628E6Fu, "unknown not lowered yet"); return;
L_08B0C270:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-28722)));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(16461), ctx.gpr[7]);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15687)));
    goto L_08B0C280;
L_08B0C280:
    rt.unsupported(0x08B0C284u, 0x13407F13u, "control flow in delay slot"); return;
L_08B0C288:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[26];
    rt.unsupported(0x08B0C28Cu, 0x21FF80E4u, "unknown not lowered yet"); return;
      if (branch_taken) {
          ctx.pc = 0x08B0B904u; return;
      }
      goto L_08B0C290;
    }
L_08B0C290:
    ctx.gpr[9] = (ctx.gpr[25] | 24280u);
    rt.unsupported(0x08B0C294u, 0x42560F23u, "unknown not lowered yet"); return;
L_08B0C2A0:
    rt.unsupported(0x08B0C2A0u, 0x611E9E11u, "vfpu0 not lowered yet"); return;
L_08B0C2E0:
    ctx.gpr[31] = (0x08B0C2E8u);
    ctx.gpr[29] = (static_cast<std::int32_t>(ctx.gpr[4]) < -32002 ? 1u : 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 80u, 0x0883C5DCu>(ctx, &aot_mem) && ctx.pc == 0x08B0C2E8u) goto L_08B0C2E8;
    return;
L_08B0C2E8:
    ctx.gpr[13] = (ctx.gpr[22] | 64222u);
    rt.unsupported(0x08B0C2ECu, 0x4D4E10ECu, "unknown not lowered yet"); return;
L_08B0C2F8:
    rt.unsupported(0x08B0C2FCu, 0x1F803938u, "control flow in delay slot"); return;
L_08B0C300:
    rt.unsupported(0x08B0C300u, 0x6A2774F3u, "unknown not lowered yet"); return;
L_08B0C304:
    rt.unsupported(0x08B0C304u, 0x05DB22CEu, "regimm? not lowered yet"); return;
L_08B0C310:
    rt.memory().aot_store_word_left(ctx.gpr[26] + static_cast<std::uint32_t>(-6294), ctx.gpr[9]);
    rt.unsupported(0x08B0C314u, 0xB287BD61u, "unknown not lowered yet"); return;
L_08B0C31C:
    ctx.gpr[31] = (0x08B0C324u);
    ctx.gpr[19] = (ctx.gpr[14] < static_cast<std::uint32_t>(-7528) ? 1u : 0u);
    if ((ctx.pc = 0x0EB8DC38u, rt.invoke_chained_call(ctx, &aot_mem)) && ctx.pc == 0x08B0C324u) goto L_08B0C324;
    return;
L_08B0C324:
    if (static_cast<std::int32_t>(ctx.gpr[9]) > 0) {
    rt.unsupported(0x08B0C328u, 0x61EB33F5u, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 549u, 0x08AEDF44u>(ctx, &aot_mem); return;
    }
    goto L_08B0C32C;
L_08B0C32C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<86u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<78u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<7u, 1u>(vfpu_d); }
    rt.unsupported(0x08B0C330u, 0x6A8C3CD5u, "unknown not lowered yet"); return;
L_08B0C350:
    ctx.gpr[4] = (ctx.gpr[12] < ctx.gpr[27] ? 1u : 0u);
    ctx.gpr[26] = (ctx.gpr[19] + static_cast<std::uint32_t>(28114));
    ctx.gpr[14] = (ctx.gpr[4] < static_cast<std::uint32_t>(27315) ? 1u : 0u);
    ctx.gpr[20] = (ctx.gpr[30] & 43831u);
    rt.unsupported(0x08B0C360u, 0x42778A9Fu, "unknown not lowered yet"); return;
L_08B0C370:
    rt.unsupported(0x08B0C370u, 0x68A46B95u, "unknown not lowered yet"); return;
L_08B0C3A4:
    rt.unsupported(0x08B0C3A8u, 0x13F592BCu, "control flow in delay slot"); return;
L_08B0C3AC:
    if (static_cast<std::int32_t>(ctx.gpr[22]) > 0) {
    ctx.execute_vfpu_compare3(83u, 104u, 68u, 1u, 7u);
        (void)rt.invoke_chained_direct<&recomp_unit_0195_entry, 195u, 494u, 0x08B13504u>(ctx, &aot_mem); return;
    }
    goto L_08B0C3B4;
L_08B0C3B4:
    ctx.gpr[29] = (aot_mem.aot_load16(ctx.gpr[15] + static_cast<std::uint32_t>(3117)));
    rt.unsupported(0x08B0C3B8u, 0xB011922Fu, "unknown not lowered yet"); return;
L_08B0C3C8:
    ctx.gpr[14] = (ctx.gpr[23] ^ 29281u);
    ctx.pc = 0x04332CFCu; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B0C3DC:
    rt.unsupported(0x08B0C3DCu, 0x6AD345D7u, "unknown not lowered yet"); return;
L_08B0C3F4:
    rt.unsupported(0x08B0C3F4u, 0xD59EAD2Fu, "vfpu not lowered yet"); return;
L_08B0C450:
    ctx.execute_vfpu_vdot_ct<14u, 84u, 84u, 1u>();
    rt.unsupported(0x08B0C454u, 0x68DA9E36u, "unknown not lowered yet"); return;
L_08B0C488:
    rt.unsupported(0x08B0C488u, 0xCEADEB47u, "unknown not lowered yet"); return;
L_08B0C490:
    { const bool branch_taken = ctx.gpr[29] == ctx.gpr[5];
    rt.unsupported(0x08B0C494u, 0x237DBD4Fu, "unknown not lowered yet"); return;
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 722u, 0x08AF7450u>(ctx, &aot_mem); return;
      }
      goto L_08B0C498;
    }
L_08B0C498:
    rt.unsupported(0x08B0C498u, 0x7591C7DBu, "unknown not lowered yet"); return;
L_08B0C4AC:
    { const bool branch_taken = ctx.gpr[25] != ctx.gpr[13];
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(-19735), static_cast<std::uint16_t>(ctx.gpr[26]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0197_entry, 197u, 85u, 0x08B18A68u>(ctx, &aot_mem); return;
      }
      goto L_08B0C4B4;
    }
L_08B0C4B4:
    rt.unsupported(0x08B0C4B4u, 0xF78BA90Au, "vfpu not lowered yet"); return;
L_08B0C4B8:
    ctx.gpr[9] = (ctx.gpr[16] < static_cast<std::uint32_t>(4522) ? 1u : 0u);
    rt.unsupported(0x08B0C4BCu, 0xD675EBB8u, "vfpu not lowered yet"); return;
L_08B0C4D0:
    rt.unsupported(0x08B0C4D0u, 0xD1FF982Au, "vfpu4 not lowered yet"); return;
L_08B0C4D4:
    rt.unsupported(0x08B0C4D4u, 0x05572A5Fu, "regimm? not lowered yet"); return;
L_08B0C4DC:
    rt.unsupported(0x08B0C4DCu, 0x06A70004u, "regimm? not lowered yet"); return;
L_08B0C4EC:
    rt.unsupported(0x08B0C4ECu, 0x71B19E77u, "unknown not lowered yet"); return;
L_08B0C528:
    ctx.gpr[17] = (ctx.gpr[18] & 59990u);
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B0C540;
L_08B0C540:
    ctx.execute_vfpu_compare3(82u, 101u, 109u, 1u, 6u);
    rt.unsupported(0x08B0C544u, 0x00006576u, "special? not lowered yet"); return;
L_08B0C548:
    rt.unsupported(0x08B0C548u, 0x42736148u, "unknown not lowered yet"); return;
L_08B0C554:
    rt.unsupported(0x08B0C554u, 0x63675F5Fu, "vfpu0 not lowered yet"); return;
L_08B0C55C:
    if (ctx.gpr[27] != ctx.gpr[20]) {
    ctx.execute_vfpu_compare3(97u, 121u, 112u, 1u, 6u);
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 884u, 0x08B25AACu>(ctx, &aot_mem); return;
    }
    goto L_08B0C564;
L_08B0C564:
    rt.unsupported(0x08B0C564u, 0x00746E69u, "special? not lowered yet"); return;
L_08B0C568:
    if (ctx.gpr[27] != ctx.gpr[19]) {
    ctx.execute_vfpu_compare3(97u, 121u, 112u, 1u, 6u);
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 345u, 0x08B24A8Cu>(ctx, &aot_mem); return;
    }
    goto L_08B0C570;
L_08B0C570:
    rt.unsupported(0x08B0C570u, 0x42746E69u, "unknown not lowered yet"); return;
L_08B0C57C:
    ctx.execute_vfpu_compare3(82u, 101u, 109u, 1u, 6u);
    rt.unsupported(0x08B0C580u, 0x61576576u, "vfpu0 not lowered yet"); return;
L_08B0C58C:
    ctx.execute_vfpu_vscl_ct<82u, 97u, 99u, 1u>();
    ctx.execute_vfpu_compare3(65u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08B0C594u, 0x73695677u, "unknown not lowered yet"); return;
L_08B0C5A0:
    ctx.gpr[20] = (ctx.vfpu_scalar_bits_ct<83u>());
    ctx.gpr[13] = (ctx.gpr[3] + ctx.gpr[15]);
    goto L_08B0C5A8;
L_08B0C5A8:
    ctx.execute_vfpu_compare3(82u, 101u, 109u, 1u, 6u);
    rt.unsupported(0x08B0C5ACu, 0x61486576u, "vfpu0 not lowered yet"); return;
L_08B0C5B4:
    rt.unsupported(0x08B0C5B4u, 0x70796177u, "unknown not lowered yet"); return;
L_08B0C5C0:
    ctx.execute_vfpu_compare3(104u, 97u, 108u, 1u, 6u);
    // nop
    goto L_08B0C5C8;
L_08B0C5C8:
    ctx.execute_vfpu_compare3(101u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08B0C5CCu, 0x00000072u, "special? not lowered yet"); return;
L_08B0C5D0:
    ctx.execute_vfpu_vminmax(103u, 101u, 116u, 1u, false);
    rt.unsupported(0x08B0C5D4u, 0x74617465u, "unknown not lowered yet"); return;
L_08B0C5E0:
    ctx.execute_vfpu_vminmax(115u, 101u, 116u, 1u, false);
    rt.unsupported(0x08B0C5E4u, 0x74617465u, "unknown not lowered yet"); return;
L_08B0C5F0:
    ctx.execute_vfpu_vhdp(103u, 101u, 116u, 1u);
    ctx.gpr[13] = (ctx.gpr[3] | ctx.gpr[22]);
    goto L_08B0C5F8;
L_08B0C5F8:
    ctx.execute_vfpu_vhdp(115u, 101u, 116u, 1u);
    ctx.gpr[13] = (ctx.gpr[3] | ctx.gpr[22]);
    goto L_08B0C600;
L_08B0C600:
    rt.unsupported(0x08B0C600u, 0x7478656Eu, "unknown not lowered yet"); return;
L_08B0C608:
    rt.unsupported(0x08B0C608u, 0x69617069u, "unknown not lowered yet"); return;
L_08B0C610:
    rt.unsupported(0x08B0C610u, 0x72696170u, "unknown not lowered yet"); return;
L_08B0C618:
    rt.unsupported(0x08B0C618u, 0x6E697270u, "vfpu3 not lowered yet"); return;
L_08B0C620:
    rt.unsupported(0x08B0C620u, 0x756E6F74u, "unknown not lowered yet"); return;
L_08B0C62C:
    rt.unsupported(0x08B0C62Cu, 0x74736F74u, "unknown not lowered yet"); return;
L_08B0C638:
    ctx.execute_vfpu_vscl_ct<116u, 121u, 112u, 1u>();
    // nop
    goto L_08B0C640;
L_08B0C640:
    ctx.execute_vfpu_vscl_ct<97u, 115u, 115u, 1u>();
    rt.unsupported(0x08B0C644u, 0x00007472u, "special? not lowered yet"); return;
L_08B0C648:
    rt.unsupported(0x08B0C648u, 0x61706E75u, "vfpu0 not lowered yet"); return;
L_08B0C650:
    ctx.execute_vfpu_vscl_ct<114u, 97u, 119u, 1u>();
    ctx.execute_vfpu_vcmp_ct<117u, 97u, 1u, 1u>();
    // nop
    goto L_08B0C65C;
L_08B0C65C:
    rt.unsupported(0x08B0C65Cu, 0x67776172u, "vfpu1 not lowered yet"); return;
L_08B0C664:
    rt.unsupported(0x08B0C664u, 0x73776172u, "unknown not lowered yet"); return;
L_08B0C66C:
    ctx.execute_vfpu_vcmp_ct<99u, 97u, 1u, 0u>();
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B0C674;
L_08B0C674:
    rt.unsupported(0x08B0C674u, 0x61637078u, "vfpu0 not lowered yet"); return;
L_08B0C67C:
    ctx.execute_vfpu_vcmp_ct<111u, 108u, 1u, 3u>();
    rt.unsupported(0x08B0C680u, 0x67746365u, "vfpu1 not lowered yet"); return;
L_08B0C68C:
    rt.unsupported(0x08B0C68Cu, 0x6E696367u, "vfpu3 not lowered yet"); return;
L_08B0C694:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<108u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<102u, 105u, 108u, 1u>();
    // nop
    goto L_08B0C6A0;
L_08B0C6A0:
    rt.unsupported(0x08B0C6A0u, 0x69666F64u, "unknown not lowered yet"); return;
L_08B0C6A8:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<108u, 1u>(vfpu_d); }
    rt.unsupported(0x08B0C6ACu, 0x69727473u, "unknown not lowered yet"); return;
L_08B0C6B4:
    rt.unsupported(0x08B0C6B4u, 0x75716572u, "unknown not lowered yet"); return;
L_08B0C6BC:
    rt.unsupported(0x08B0C6BCu, 0x61657263u, "vfpu0 not lowered yet"); return;
L_08B0C6C4:
    rt.unsupported(0x08B0C6C4u, 0x70617277u, "unknown not lowered yet"); return;
L_08B0C6CC:
    rt.unsupported(0x08B0C6CCu, 0x75736572u, "unknown not lowered yet"); return;
L_08B0C6D4:
    ctx.execute_vfpu_vcmp_ct<105u, 101u, 1u, 9u>();
    (void)(0u & 0u);
    goto L_08B0C6DC;
L_08B0C6DC:
    rt.unsupported(0x08B0C6DCu, 0x74617473u, "unknown not lowered yet"); return;
L_08B0C6E4:
    rt.unsupported(0x08B0C6E4u, 0x736F7460u, "unknown not lowered yet"); return;
L_08B0C710:
    jump_target = 0u;
    ctx.gpr[31] = (0x08B0C718u);
    if (0u == 0u) (void)(0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B0C718u) goto L_08B0C718;
    return;
L_08B0C714:
    if (0u == 0u) (void)(0u);
    goto L_08B0C718;
L_08B0C718:
    ctx.execute_vfpu_vscl_ct<98u, 97u, 115u, 1u>();
    rt.unsupported(0x08B0C71Cu, 0x74756F20u, "unknown not lowered yet"); return;
L_08B0C72C:
    ctx.execute_vfpu_vscl_ct<95u, 95u, 109u, 1u>();
    rt.unsupported(0x08B0C730u, 0x61746174u, "vfpu0 not lowered yet"); return;
L_08B0C738:
    rt.unsupported(0x08B0C738u, 0x206C696Eu, "unknown not lowered yet"); return;
L_08B0C750:
    rt.unsupported(0x08B0C750u, 0x6E6E6163u, "vfpu3 not lowered yet"); return;
L_08B0C774:
    ctx.execute_vfpu_vscl_ct<108u, 101u, 118u, 1u>();
    rt.unsupported(0x08B0C778u, 0x756D206Cu, "unknown not lowered yet"); return;
L_08B0C790:
    rt.unsupported(0x08B0C790u, 0x61766E69u, "vfpu0 not lowered yet"); return;
L_08B0C7A0:
    (void)(0u ^ 0u);
    goto L_08B0C7A4;
L_08B0C7A4:
    ctx.execute_vfpu_vhdp(110u, 111u, 32u, 1u);
    rt.unsupported(0x08B0C7A8u, 0x74636E75u, "unknown not lowered yet"); return;
L_08B0C7D8:
    ctx.execute_vfpu_vscl_ct<95u, 95u, 102u, 1u>();
    rt.unsupported(0x08B0C7DCu, 0x0000766Eu, "special? not lowered yet"); return;
L_08B0C7E0:
    rt.unsupported(0x08B0C7E0u, 0x74657360u, "unknown not lowered yet"); return;
L_08B0C810:
    rt.unsupported(0x08B0C810u, 0x74657360u, "unknown not lowered yet"); return;
L_08B0C848:
    ctx.gpr[14] = (0u | 0u);
    goto L_08B0C84C;
L_08B0C84C:
    ctx.execute_vfpu_vscl_ct<97u, 115u, 115u, 1u>();
    ctx.execute_vfpu_compare3(114u, 116u, 105u, 1u, 6u);
    rt.unsupported(0x08B0C854u, 0x6166206Eu, "vfpu0 not lowered yet"); return;
L_08B0C860:
    ctx.execute_vfpu_vcmp_ct<97u, 98u, 1u, 4u>();
    ctx.execute_vfpu_compare3(101u, 32u, 116u, 1u, 6u);
    rt.unsupported(0x08B0C868u, 0x6962206Fu, "unknown not lowered yet"); return;
L_08B0C878:
    ctx.execute_vfpu_compare3(95u, 95u, 116u, 1u, 6u);
    rt.unsupported(0x08B0C87Cu, 0x69727473u, "unknown not lowered yet"); return;
L_08B0C884:
    ctx.execute_vfpu_vscl_ct<116u, 114u, 117u, 1u>();
    // nop
    rt.unsupported(0x08B0C88Cu, 0x736C6166u, "unknown not lowered yet"); return;
L_08B0C894:
    ctx.execute_vfpu_vcmp_ct<97u, 98u, 1u, 4u>();
    (void)(ctx.gpr[9] + static_cast<std::uint32_t>(14949));
    rt.unsupported(0x08B0C89Cu, 0x00000070u, "special? not lowered yet"); return;
L_08B0C8A0:
    rt.unsupported(0x08B0C8A0u, 0x636E7566u, "vfpu0 not lowered yet"); return;
L_08B0C8B0:
    rt.unsupported(0x08B0C8B0u, 0x72657375u, "unknown not lowered yet"); return;
L_08B0C8C0:
    ctx.execute_vfpu_vscl_ct<116u, 104u, 114u, 1u>();
    rt.unsupported(0x08B0C8C4u, 0x203A6461u, "unknown not lowered yet"); return;
L_08B0C8CC:
    rt.unsupported(0x08B0C8CCu, 0x006C696Eu, "special? not lowered yet"); return;
L_08B0C8D0:
    ctx.execute_vfpu_vcmp_ct<111u, 111u, 1u, 2u>();
    rt.unsupported(0x08B0C8D4u, 0x206E6165u, "unknown not lowered yet"); return;
L_08B0C8EC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B0C8F0u, 0x48544150u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 245u, 0x08B21E20u>(ctx, &aot_mem); return;
    }
    goto L_08B0C8F4;
L_08B0C8F4:
    // nop
    goto L_08B0C8F8;
L_08B0C8F8:
    ctx.gpr[31] = (ctx.gpr[17] < static_cast<std::uint32_t>(15167) ? 1u : 0u);
    ctx.gpr[14] = (static_cast<std::int32_t>(ctx.gpr[3]) > static_cast<std::int32_t>(ctx.gpr[1]) ? ctx.gpr[3] : ctx.gpr[1]);
    goto L_08B0C900;
L_08B0C900:
    rt.unsupported(0x08B0C900u, 0x206F6F74u, "unknown not lowered yet"); return;
L_08B0C924:
    rt.unsupported(0x08B0C924u, 0x414F4C5Fu, "unknown not lowered yet"); return;
L_08B0C92C:
    rt.unsupported(0x08B0C92Cu, 0x4F4C5F60u, "unknown not lowered yet"); return;
L_08B0C948:
    if (ctx.gpr[10] == ctx.gpr[5]) {
    rt.unsupported(0x08B0C94Cu, 0x45524955u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 170u, 0x08B212C8u>(ctx, &aot_mem); return;
    }
    goto L_08B0C950;
L_08B0C950:
    rt.unsupported(0x08B0C950u, 0x4D414E44u, "unknown not lowered yet"); return;
L_08B0C958:
    ctx.execute_vfpu_vcmp_ct<111u, 117u, 1u, 3u>();
    ctx.execute_vfpu_compare3(100u, 32u, 110u, 1u, 6u);
    ctx.execute_vfpu_compare3(116u, 32u, 108u, 1u, 6u);
    rt.unsupported(0x08B0C964u, 0x70206461u, "unknown not lowered yet"); return;
L_08B0C984:
    ctx.execute_vfpu_compare3(101u, 114u, 114u, 1u, 6u);
    ctx.execute_vfpu_compare3(114u, 32u, 108u, 1u, 6u);
    rt.unsupported(0x08B0C98Cu, 0x6E696461u, "vfpu3 not lowered yet"); return;
L_08B0C9A4:
    rt.unsupported(0x08B0C9A4u, 0x206F6F74u, "unknown not lowered yet"); return;
L_08B0C9C4:
    rt.unsupported(0x08B0C9C4u, 0x206F6F74u, "unknown not lowered yet"); return;
L_08B0C9E0:
    ctx.execute_vfpu_compare3(99u, 111u, 114u, 1u, 6u);
    rt.unsupported(0x08B0C9E4u, 0x6E697475u, "vfpu3 not lowered yet"); return;
L_08B0C9F4:
    rt.unsupported(0x08B0C9F4u, 0x2061754Cu, "unknown not lowered yet"); return;
L_08B0CA0C:
    rt.unsupported(0x08B0CA0Cu, 0x6E6E7572u, "vfpu3 not lowered yet"); return;
L_08B0CA14:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<100u, 1u>(vfpu_d); }
    // nop
    goto L_08B0CA1C;
L_08B0CA1C:
    rt.unsupported(0x08B0CA1Cu, 0x70737573u, "unknown not lowered yet"); return;
L_08B0CA28:
    rt.unsupported(0x08B0CA28u, 0x0000475Fu, "special? not lowered yet"); return;
L_08B0CA2C:
    if (ctx.gpr[18] == ctx.gpr[5]) {
    rt.unsupported(0x08B0CA30u, 0x4E4F4953u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 352u, 0x08B223ACu>(ctx, &aot_mem); return;
    }
    goto L_08B0CA34;
L_08B0CA34:
    // nop
    goto L_08B0CA38;
L_08B0CA38:
    rt.unsupported(0x08B0CA38u, 0x2061754Cu, "unknown not lowered yet"); return;
L_08B0CA44:
    rt.unsupported(0x08B0CA44u, 0x7077656Eu, "unknown not lowered yet"); return;
L_08B0CA50:
    ctx.execute_vfpu_compare3(95u, 95u, 109u, 1u, 6u);
    ctx.gpr[12] = (0u & 0u);
    goto L_08B0CA58;
L_08B0CA58:
    (void)(0u < 0u ? 1u : 0u);
    goto L_08B0CA5C;
L_08B0CA5C:
    ctx.execute_vfpu_compare3(99u, 111u, 114u, 1u, 6u);
    rt.unsupported(0x08B0CA60u, 0x6E697475u, "vfpu3 not lowered yet"); return;
L_08B0CA98:
    rt.unsupported(0x08B0CA98u, 0x2074756Fu, "unknown not lowered yet"); return;
L_08B0CAA8:
    rt.unsupported(0x08B0CAA8u, 0x69797254u, "unknown not lowered yet"); return;
L_08B0CAD8:
    rt.unsupported(0x08B0CAD8u, 0x4E726143u, "unknown not lowered yet"); return;
L_08B0CAF8:
    ctx.gpr[31] = (ctx.gpr[10] & 16711u);
    rt.unsupported(0x08B0CAFCu, 0x00000032u, "special? not lowered yet"); return;
L_08B0CB00:
    rt.unsupported(0x08B0CB04u, 0x53205349u, "control flow in delay slot"); return;
L_08B0CB08:
    // nop
    (void)(ctx.pc = 0x09513914u, rt.invoke_chained_call(ctx, &aot_mem)); return;
L_08B0CE80:
    rt.unsupported(0x08B0CE80u, 0x74726170u, "unknown not lowered yet"); return;
L_08B0CE8C:
    rt.unsupported(0x08B0CE8Cu, 0x6B6F6D73u, "unknown not lowered yet"); return;
L_08B0CF48:
    rt.unsupported(0x08B0CF48u, 0x74696E49u, "unknown not lowered yet"); return;
L_08B0CF64:
    ctx.execute_vfpu_compare3(67u, 83u, 104u, 1u, 6u);
    ctx.execute_vfpu_vhdp(116u, 73u, 110u, 1u);
    ctx.execute_vfpu_vscl_ct<111u, 32u, 114u, 1u>();
    // nop
    (void)(ctx.pc = 0x09E59184u, rt.invoke_chained_call(ctx, &aot_mem)); return;
L_08B0CF88:
    ctx.gpr[7] = (ctx.gpr[2] ^ 20039u);
    // nop
    goto L_08B0CF90;
L_08B0CF90:
    ctx.gpr[7] = (ctx.gpr[10] ^ 20039u);
    // nop
    goto L_08B0CF98;
L_08B0CF98:
    ctx.gpr[7] = (ctx.gpr[10] & 20039u);
    // nop
    goto L_08B0CFA0;
L_08B0CFA0:
    ctx.gpr[7] = (ctx.gpr[18] & 20039u);
    // nop
    goto L_08B0CFA8;
L_08B0CFA8:
    ctx.gpr[7] = (ctx.gpr[26] & 20039u);
    // nop
    goto L_08B0CFB0;
L_08B0CFB0:
    ctx.gpr[7] = (ctx.gpr[2] | 20039u);
    // nop
    goto L_08B0CFB8;
L_08B0CFB8:
    ctx.gpr[7] = (ctx.gpr[10] | 20039u);
    // nop
    goto L_08B0CFC0;
L_08B0CFC0:
    ctx.gpr[7] = (ctx.gpr[2] & 20039u);
    // nop
    goto L_08B0CFC8;
L_08B0CFC8:
    ctx.gpr[7] = (ctx.gpr[26] | 20039u);
    // nop
    goto L_08B0CFD0;
L_08B0CFD0:
    ctx.gpr[7] = (ctx.gpr[18] | 20039u);
    // nop
    goto L_08B0CFD8;
L_08B0CFD8:
    rt.unsupported(0x08B0CFD8u, 0x21212121u, "unknown not lowered yet"); return;
L_08B0CFF0:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<108u, 1u>(vfpu_d); }
    rt.unsupported(0x08B0CFF4u, 0x00316373u, "special? not lowered yet"); return;
L_08B0CFF8:
    ctx.execute_vfpu_vscl_ct<71u, 97u, 109u, 1u>();
    rt.unsupported(0x08B0CFFCu, 0x73616820u, "unknown not lowered yet"); return;
L_08B0D020:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B0D024u, 0x6877202Au, "unknown not lowered yet"); return;
L_08B0D040:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B0D044u, 0x6877202Au, "unknown not lowered yet"); return;
L_08B0D060:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B0D064u, 0x6877202Au, "unknown not lowered yet"); return;
L_08B0D080:
    if (ctx.gpr[2] == ctx.gpr[13]) {
    rt.unsupported(0x08B0D084u, 0x0053435Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 585u, 0x08B1E59Cu>(ctx, &aot_mem); return;
    }
    goto L_08B0D088;
L_08B0D088:
    if (ctx.gpr[2] != ctx.gpr[12]) {
    rt.unsupported(0x08B0D08Cu, 0x41472049u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 423u, 0x08B225C0u>(ctx, &aot_mem); return;
    }
    goto L_08B0D090;
L_08B0D090:
    rt.unsupported(0x08B0D090u, 0x0000454Du, "special? not lowered yet"); return;
L_08B0D094:
    rt.unsupported(0x08B0D094u, 0x74746553u, "unknown not lowered yet"); return;
L_08B0D0C4:
    rt.unsupported(0x08B0D0C8u, 0x54414D48u, "control flow in delay slot"); return;
L_08B0D0CC:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 1u));
    goto L_08B0D0D0;
L_08B0D0D0:
    ctx.execute_vfpu_compare3(109u, 112u, 108u, 1u, 6u);
    ctx.gpr[12] = (ctx.gpr[1] + ctx.gpr[16]);
    goto L_08B0D0D8;
L_08B0D0D8:
    rt.unsupported(0x08B0D0D8u, 0x49525554u, "cop2/vfpu not lowered yet"); return;
L_08B0D0E0:
    ctx.execute_vfpu_compare3(109u, 112u, 108u, 1u, 6u);
    ctx.gpr[12] = (ctx.gpr[1] + ctx.gpr[17]);
    goto L_08B0D0E8;
L_08B0D0E8:
    ctx.gpr[10] = (ctx.gpr[2] << (ctx.gpr[2] & 31u));
    goto L_08B0D0EC;
L_08B0D0EC:
    ctx.execute_vfpu_compare3(109u, 112u, 108u, 1u, 6u);
    ctx.gpr[12] = (ctx.gpr[1] + ctx.gpr[18]);
    goto L_08B0D0F4;
L_08B0D0F4:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 17u));
    goto L_08B0D0F8;
L_08B0D0F8:
    ctx.execute_vfpu_compare3(109u, 112u, 108u, 1u, 6u);
    ctx.gpr[12] = (ctx.gpr[1] + ctx.gpr[19]);
    goto L_08B0D100;
L_08B0D100:
    rt.unsupported(0x08B0D100u, 0x4B4E4154u, "cop2/vfpu not lowered yet"); return;
L_08B0D108:
    ctx.execute_vfpu_compare3(109u, 112u, 108u, 1u, 6u);
    ctx.gpr[12] = (ctx.gpr[1] + ctx.gpr[20]);
    goto L_08B0D110;
L_08B0D110:
    rt.unsupported(0x08B0D110u, 0x20544948u, "unknown not lowered yet"); return;
L_08B0D11C:
    ctx.execute_vfpu_compare3(109u, 112u, 108u, 1u, 6u);
    ctx.gpr[12] = (ctx.gpr[1] + ctx.gpr[21]);
    goto L_08B0D124;
L_08B0D124:
    if (ctx.gpr[2] != ctx.gpr[24]) {
    rt.unsupported(0x08B0D128u, 0x45532059u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 704u, 0x08B1F674u>(ctx, &aot_mem); return;
    }
    goto L_08B0D12C;
L_08B0D12C:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 13u));
    goto L_08B0D130;
L_08B0D130:
    ctx.execute_vfpu_compare3(109u, 112u, 108u, 1u, 6u);
    ctx.gpr[12] = (ctx.gpr[1] + ctx.gpr[22]);
    goto L_08B0D138;
L_08B0D138:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<108u, 1u>(vfpu_d); }
    rt.unsupported(0x08B0D13Cu, 0x00326373u, "special? not lowered yet"); return;
L_08B0D148:
    if (ctx.gpr[26] == ctx.gpr[21]) {
    ctx.gpr[16] = (ctx.gpr[1] | 12337u);
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 30u, 0x08B202A0u>(ctx, &aot_mem); return;
    }
    goto L_08B0D150;
L_08B0D150:
    rt.unsupported(0x08B0D150u, 0x00000031u, "special? not lowered yet"); return;
L_08B0D154:
    rt.unsupported(0x08B0D154u, 0x4C415447u, "unknown not lowered yet"); return;
L_08B0D160:
    ctx.execute_vfpu_compare3(97u, 100u, 104u, 1u, 6u);
    ctx.execute_vfpu_compare3(99u, 32u, 99u, 1u, 6u);
    rt.unsupported(0x08B0D168u, 0x63656E6Eu, "vfpu0 not lowered yet"); return;
L_08B0D180:
    if (ctx.gpr[26] == ctx.gpr[31]) {
    rt.unsupported(0x08B0D184u, 0x0057454Eu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 169u, 0x08B212B8u>(ctx, &aot_mem); return;
    }
    goto L_08B0D188;
L_08B0D188:
    rt.unsupported(0x08B0D188u, 0x4E656373u, "unknown not lowered yet"); return;
L_08B0D198:
    rt.unsupported(0x08B0D198u, 0x6E657473u, "vfpu3 not lowered yet"); return;
L_08B0D1B4:
    if (ctx.gpr[2] == ctx.gpr[13]) {
    rt.unsupported(0x08B0D1B8u, 0x00474A5Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 594u, 0x08B1E6D0u>(ctx, &aot_mem); return;
    }
    goto L_08B0D1BC;
L_08B0D1BC:
    if (ctx.gpr[2] == ctx.gpr[13]) {
    rt.unsupported(0x08B0D1C0u, 0x0047485Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 595u, 0x08B1E6D8u>(ctx, &aot_mem); return;
    }
    goto L_08B0D1C4;
L_08B0D1C4:
    if (ctx.gpr[18] == ctx.gpr[5]) {
    ctx.gpr[9] = (ctx.lo);
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 574u, 0x08B1E2D4u>(ctx, &aot_mem); return;
    }
    goto L_08B0D1CC;
L_08B0D1CC:
    rt.unsupported(0x08B0D1D0u, 0x00494649u, "control flow in delay slot"); return;
L_08B0D1D4:
    if (ctx.gpr[26] != ctx.gpr[31]) {
    rt.unsupported(0x08B0D1D8u, 0x004E5241u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 172u, 0x08B2130Cu>(ctx, &aot_mem); return;
    }
    goto L_08B0D1DC;
L_08B0D1DC:
    if (ctx.gpr[2] == ctx.gpr[13]) {
    rt.unsupported(0x08B0D1E0u, 0x0051535Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 597u, 0x08B1E6F8u>(ctx, &aot_mem); return;
    }
    goto L_08B0D1E4;
L_08B0D1E4:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B0D1E8u, 0x00004F4Eu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 598u, 0x08B1E700u>(ctx, &aot_mem); return;
    }
    goto L_08B0D1EC;
L_08B0D1EC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    { const std::uint64_t product = static_cast<std::uint64_t>(ctx.gpr[2]) * static_cast<std::uint64_t>(ctx.gpr[19]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 599u, 0x08B1E708u>(ctx, &aot_mem); return;
    }
    goto L_08B0D1F4;
L_08B0D1F4:
    if (ctx.gpr[2] == ctx.gpr[13]) {
    rt.unsupported(0x08B0D1F8u, 0x004D535Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 600u, 0x08B1E710u>(ctx, &aot_mem); return;
    }
    goto L_08B0D1FC;
L_08B0D1FC:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B0D200u, 0x7845202Au, "unknown not lowered yet"); return;
L_08B0D218:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B0D21Cu, 0x6877202Au, "unknown not lowered yet"); return;
L_08B0D23C:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B0D240u, 0x6877202Au, "unknown not lowered yet"); return;
L_08B0D260:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B0D264u, 0x6877202Au, "unknown not lowered yet"); return;
L_08B0D284:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B0D288u, 0x6877202Au, "unknown not lowered yet"); return;
L_08B0D2A8:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B0D2ACu, 0x6877202Au, "unknown not lowered yet"); return;
L_08B0D2CC:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B0D2D0u, 0x6877202Au, "unknown not lowered yet"); return;
L_08B0D2F0:
    rt.unsupported(0x08B0D2F0u, 0x76726573u, "unknown not lowered yet"); return;
L_08B0D31C:
    rt.unsupported(0x08B0D31Cu, 0x4D525653u, "unknown not lowered yet"); return;
L_08B0D324:
    rt.unsupported(0x08B0D324u, 0x4E5F4F4Eu, "unknown not lowered yet"); return;
L_08B0D32C:
    if (ctx.gpr[2] != ctx.gpr[31]) {
    { const std::uint64_t product = static_cast<std::uint64_t>(ctx.gpr[2]) * static_cast<std::uint64_t>(ctx.gpr[5]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 272u, 0x08B2204Cu>(ctx, &aot_mem); return;
    }
    goto L_08B0D334;
L_08B0D334:
    rt.unsupported(0x08B0D334u, 0x475F5347u, "cop1? not lowered yet"); return;
L_08B0D33C:
    rt.unsupported(0x08B0D33Cu, 0x445F5347u, "unsupported CFC1 control register"); return;
    ctx.gpr[12] = (0u | 0u);
    goto L_08B0D344;
L_08B0D344:
    rt.unsupported(0x08B0D344u, 0x4C5F5347u, "unknown not lowered yet"); return;
L_08B0D34C:
    if (ctx.gpr[26] == ctx.gpr[31]) {
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 21u));
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 276u, 0x08B2206Cu>(ctx, &aot_mem); return;
    }
    goto L_08B0D354;
L_08B0D354:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B0D358u, 0x00004F4Eu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 614u, 0x08B1E870u>(ctx, &aot_mem); return;
    }
    goto L_08B0D35C;
L_08B0D35C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    { const std::uint64_t product = static_cast<std::uint64_t>(ctx.gpr[2]) * static_cast<std::uint64_t>(ctx.gpr[19]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 615u, 0x08B1E878u>(ctx, &aot_mem); return;
    }
    goto L_08B0D364;
L_08B0D364:
    if (ctx.gpr[10] != ctx.gpr[1]) {
    rt.unsupported(0x08B0D368u, 0x00004F54u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 176u, 0x08B2149Cu>(ctx, &aot_mem); return;
    }
    goto L_08B0D36C;
L_08B0D36C:
    if (ctx.gpr[26] == ctx.gpr[31]) {
    rt.unsupported(0x08B0D370u, 0x004C5954u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 278u, 0x08B2208Cu>(ctx, &aot_mem); return;
    }
    goto L_08B0D374;
L_08B0D374:
    if (ctx.gpr[2] != ctx.gpr[31]) {
    rt.unsupported(0x08B0D378u, 0x00534D45u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 279u, 0x08B22094u>(ctx, &aot_mem); return;
    }
    goto L_08B0D37C;
L_08B0D37C:
    rt.unsupported(0x08B0D37Cu, 0x465F5347u, "cop1? not lowered yet"); return;
L_08B0D384:
    rt.unsupported(0x08B0D384u, 0x4B5F5347u, "cop2/vfpu not lowered yet"); return;
L_08B0D38C:
    ctx.gpr[12] = (0u | 0u);
    goto L_08B0D390;
L_08B0D390:
    rt.unsupported(0x08B0D394u, 0x00544D4Cu, "control flow in delay slot"); return;
L_08B0D398:
    rt.unsupported(0x08B0D39Cu, 0x00544D4Cu, "control flow in delay slot"); return;
L_08B0D3A0:
    (void)(ctx.gpr[9] + static_cast<std::uint32_t>(25637));
    rt.unsupported(0x08B0D3A4u, 0x00000073u, "special? not lowered yet"); return;
L_08B0D3A8:
    rt.unsupported(0x08B0D3A8u, 0x4D5F5347u, "unknown not lowered yet"); return;
L_08B0D3B0:
    rt.unsupported(0x08B0D3B0u, 0x4D5F5347u, "unknown not lowered yet"); return;
L_08B0D3B4:
    rt.unsupported(0x08B0D3B8u, 0x505F5347u, "control flow in delay slot"); return;
L_08B0D3B8:
    if (ctx.gpr[2] == ctx.gpr[31]) {
    ctx.gpr[10] = (ctx.lo);
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 284u, 0x08B220D8u>(ctx, &aot_mem); return;
    }
    goto L_08B0D3C0;
L_08B0D3BC:
    ctx.gpr[10] = (ctx.lo);
    goto L_08B0D3C0;
L_08B0D3C0:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.memory().memory_barrier();
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 619u, 0x08B1E8DCu>(ctx, &aot_mem); return;
    }
    goto L_08B0D3C8;
L_08B0D3C8:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.memory().memory_barrier();
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 620u, 0x08B1E8E4u>(ctx, &aot_mem); return;
    }
    goto L_08B0D3D0;
L_08B0D3D0:
    rt.unsupported(0x08B0D3D0u, 0x475F504Du, "cop1? not lowered yet"); return;
L_08B0D3D8:
    rt.unsupported(0x08B0D3D8u, 0x475F504Du, "cop1? not lowered yet"); return;
L_08B0D3E0:
    if (ctx.gpr[18] == ctx.gpr[31]) {
    rt.unsupported(0x08B0D3E4u, 0x00454341u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 287u, 0x08B22100u>(ctx, &aot_mem); return;
    }
    goto L_08B0D3E8;
L_08B0D3E8:
    ctx.gpr[31] = (ctx.gpr[2] & 21076u);
    ctx.gpr[12] = (0u | 0u);
    goto L_08B0D3F0;
L_08B0D3F0:
    rt.unsupported(0x08B0D3F0u, 0x4C5F5347u, "unknown not lowered yet"); return;
L_08B0D3F8:
    if (ctx.gpr[26] == ctx.gpr[31]) {
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 5u));
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 289u, 0x08B22118u>(ctx, &aot_mem); return;
    }
    goto L_08B0D400;
L_08B0D400:
    rt.unsupported(0x08B0D404u, 0x00544D4Cu, "control flow in delay slot"); return;
L_08B0D408:
    if (ctx.gpr[2] != ctx.gpr[31]) {
    rt.unsupported(0x08B0D40Cu, 0x00544754u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 291u, 0x08B22128u>(ctx, &aot_mem); return;
    }
    goto L_08B0D410;
L_08B0D410:
    if (ctx.gpr[26] == ctx.gpr[19]) {
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 17u));
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 183u, 0x08B21548u>(ctx, &aot_mem); return;
    }
    goto L_08B0D418;
L_08B0D418:
    ctx.gpr[4] = (ctx.gpr[3] & ctx.gpr[4]);
    goto L_08B0D41C;
L_08B0D41C:
    if (ctx.gpr[2] == ctx.gpr[13]) {
    rt.unsupported(0x08B0D420u, 0x0053545Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 621u, 0x08B1E938u>(ctx, &aot_mem); return;
    }
    goto L_08B0D424;
L_08B0D424:
    if (ctx.gpr[2] == ctx.gpr[13]) {
    rt.unsupported(0x08B0D428u, 0x0000525Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 622u, 0x08B1E940u>(ctx, &aot_mem); return;
    }
    goto L_08B0D42C;
L_08B0D42C:
    if (ctx.gpr[2] == ctx.gpr[13]) {
    rt.unsupported(0x08B0D430u, 0x0054535Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 623u, 0x08B1E948u>(ctx, &aot_mem); return;
    }
    goto L_08B0D434;
L_08B0D434:
    if (ctx.gpr[2] == ctx.gpr[13]) {
    rt.unsupported(0x08B0D438u, 0x004E535Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 624u, 0x08B1E950u>(ctx, &aot_mem); return;
    }
    goto L_08B0D43C;
L_08B0D43C:
    if (ctx.gpr[2] == ctx.gpr[13]) {
    rt.unsupported(0x08B0D440u, 0x0047535Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 625u, 0x08B1E958u>(ctx, &aot_mem); return;
    }
    goto L_08B0D444;
L_08B0D444:
    if (ctx.gpr[2] == ctx.gpr[13]) {
    rt.unsupported(0x08B0D448u, 0x00434E5Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 626u, 0x08B1E960u>(ctx, &aot_mem); return;
    }
    goto L_08B0D44C;
L_08B0D44C:
    if (ctx.gpr[2] == ctx.gpr[13]) {
    rt.unsupported(0x08B0D450u, 0x0053575Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 627u, 0x08B1E968u>(ctx, &aot_mem); return;
    }
    goto L_08B0D454;
L_08B0D454:
    rt.unsupported(0x08B0D454u, 0x4E656373u, "unknown not lowered yet"); return;
L_08B0D464:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[9]) < 28261 ? 1u : 0u);
    rt.unsupported(0x08B0D468u, 0x69616620u, "unknown not lowered yet"); return;
L_08B0D480:
    rt.unsupported(0x08B0D480u, 0x4E656373u, "unknown not lowered yet"); return;
L_08B0D490:
    (void)(ctx.gpr[9] + static_cast<std::uint32_t>(28261));
    rt.unsupported(0x08B0D494u, 0x6B6F2073u, "unknown not lowered yet"); return;
L_08B0D49C:
    rt.unsupported(0x08B0D49Cu, 0x4E656373u, "unknown not lowered yet"); return;
L_08B0D4AC:
    rt.unsupported(0x08B0D4ACu, 0x63656E6Eu, "vfpu0 not lowered yet"); return;
L_08B0D4C8:
    rt.unsupported(0x08B0D4C8u, 0x4E656373u, "unknown not lowered yet"); return;
L_08B0D4D8:
    rt.unsupported(0x08B0D4D8u, 0x63656E6Eu, "vfpu0 not lowered yet"); return;
L_08B0D4EC:
    rt.unsupported(0x08B0D4ECu, 0x4E656373u, "unknown not lowered yet"); return;
L_08B0D4FC:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[9]) < 25710 ? 1u : 0u);
    rt.unsupported(0x08B0D500u, 0x69616620u, "unknown not lowered yet"); return;
L_08B0D518:
    rt.unsupported(0x08B0D518u, 0x4E656373u, "unknown not lowered yet"); return;
L_08B0D528:
    rt.unsupported(0x08B0D528u, 0x7320646Eu, "unknown not lowered yet"); return;
L_08B0D538:
    rt.unsupported(0x08B0D538u, 0x4E656373u, "unknown not lowered yet"); return;
L_08B0D548:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[3]) < 29557 ? 1u : 0u);
    rt.unsupported(0x08B0D54Cu, 0x61662029u, "vfpu0 not lowered yet"); return;
L_08B0D564:
    rt.unsupported(0x08B0D564u, 0x4E656373u, "unknown not lowered yet"); return;
L_08B0D574:
    rt.unsupported(0x08B0D574u, 0x20687375u, "unknown not lowered yet"); return;
L_08B0D584:
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    rt.unsupported(0x08B0D590u, 0x6954203Du, "unknown not lowered yet"); return;
L_08B0D5B8:
    rt.unsupported(0x08B0D5B8u, 0x4E4E4F43u, "unknown not lowered yet"); return;
L_08B0D5C4:
    if (ctx.gpr[2] == ctx.gpr[13]) {
    rt.unsupported(0x08B0D5C8u, 0x004A475Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 633u, 0x08B1EAE0u>(ctx, &aot_mem); return;
    }
    goto L_08B0D5CC;
L_08B0D5CC:
    if (ctx.gpr[2] == ctx.gpr[13]) {
    rt.unsupported(0x08B0D5D0u, 0x0000485Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 634u, 0x08B1EAE8u>(ctx, &aot_mem); return;
    }
    goto L_08B0D5D4;
L_08B0D5D4:
    rt.unsupported(0x08B0D5D4u, 0x4C5F5347u, "unknown not lowered yet"); return;
L_08B0D5DC:
    if (ctx.gpr[2] == ctx.gpr[13]) {
    rt.unsupported(0x08B0D5E0u, 0x0000505Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 635u, 0x08B1EAF8u>(ctx, &aot_mem); return;
    }
    goto L_08B0D5E4;
L_08B0D5E4:
    ctx.gpr[14] = (0u | 0u);
    goto L_08B0D5E8;
L_08B0D5E8:
    rt.unsupported(0x08B0D5E8u, 0x475F5347u, "cop1? not lowered yet"); return;
L_08B0D5F0:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[14]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 124u, 0x08B20F18u>(ctx, &aot_mem); return;
    }
    goto L_08B0D5F8;
L_08B0D5F8:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[14]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 171u, 0x08B21308u>(ctx, &aot_mem); return;
    }
    goto L_08B0D600;
L_08B0D600:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[14]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 608u, 0x08B22B50u>(ctx, &aot_mem); return;
    }
    goto L_08B0D608;
L_08B0D608:
    ctx.gpr[13] = (0u | 0u);
    goto L_08B0D60C;
L_08B0D60C:
    if (ctx.gpr[26] == ctx.gpr[31]) {
    ctx.gpr[10] = (static_cast<std::uint32_t>(std::countl_zero(ctx.gpr[2])));
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 173u, 0x08B21348u>(ctx, &aot_mem); return;
    }
    goto L_08B0D614;
L_08B0D614:
    if (ctx.gpr[2] == ctx.gpr[13]) {
    rt.unsupported(0x08B0D618u, 0x004E485Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 636u, 0x08B1EB30u>(ctx, &aot_mem); return;
    }
    goto L_08B0D61C;
L_08B0D61C:
    ctx.execute_vfpu_compare3(101u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08B0D620u, 0x706F2072u, "unknown not lowered yet"); return;
L_08B0D638:
    rt.unsupported(0x08B0D638u, 0x6E6E6F63u, "vfpu3 not lowered yet"); return;
L_08B0D64C:
    ctx.execute_vfpu_compare3(101u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08B0D650u, 0x6E6F2072u, "vfpu3 not lowered yet"); return;
L_08B0D674:
    rt.unsupported(0x08B0D674u, 0x4E656373u, "unknown not lowered yet"); return;
L_08B0D684:
    rt.unsupported(0x08B0D684u, 0x74706563u, "unknown not lowered yet"); return;
L_08B0D694:
    rt.unsupported(0x08B0D694u, 0x4E656373u, "unknown not lowered yet"); return;
L_08B0D6A4:
    ctx.execute_vfpu_vhdp(99u, 118u, 32u, 1u);
    ctx.execute_vfpu_vscl_ct<97u, 105u, 108u, 1u>();
    ctx.gpr[1] = (0u & 0u);
    goto L_08B0D6B0;
L_08B0D6B0:
    rt.unsupported(0x08B0D6B0u, 0x4E656373u, "unknown not lowered yet"); return;
L_08B0D6C0:
    rt.unsupported(0x08B0D6C0u, 0x73207663u, "unknown not lowered yet"); return;
L_08B0D6D0:
    rt.unsupported(0x08B0D6D0u, 0x72617453u, "unknown not lowered yet"); return;
L_08B0D780:
    rt.unsupported(0x08B0D780u, 0x74696E49u, "unknown not lowered yet"); return;
L_08B0D7A4:
    ctx.execute_vfpu_compare3(67u, 80u, 114u, 1u, 6u);
    rt.unsupported(0x08B0D7A8u, 0x7463656Au, "unknown not lowered yet"); return;
L_08B0D7C4:
    ctx.execute_vfpu_compare3(82u, 101u, 109u, 1u, 6u);
    rt.unsupported(0x08B0D7C8u, 0x676E6976u, "vfpu1 not lowered yet"); return;
L_08B0D7E8:
    ctx.execute_vfpu_compare3(82u, 101u, 109u, 1u, 6u);
    rt.unsupported(0x08B0D7ECu, 0x676E6976u, "vfpu1 not lowered yet"); return;
L_08B0D808:
    ctx.execute_vfpu_vscl_ct<85u, 110u, 100u, 1u>();
    ctx.execute_vfpu_vscl_ct<102u, 105u, 110u, 1u>();
    rt.unsupported(0x08B0D810u, 0x72702064u, "unknown not lowered yet"); return;
L_08B0D848:
    rt.unsupported(0x08B0D848u, 0x74726170u, "unknown not lowered yet"); return;
L_08B0D854:
    rt.unsupported(0x08B0D854u, 0x756F6C63u, "unknown not lowered yet"); return;
L_08B0D85C:
    rt.unsupported(0x08B0D85Cu, 0x756F6C63u, "unknown not lowered yet"); return;
L_08B0D864:
    rt.unsupported(0x08B0D864u, 0x756F6C63u, "unknown not lowered yet"); return;
L_08B0D86C:
    rt.unsupported(0x08B0D86Cu, 0x756F6C63u, "unknown not lowered yet"); return;
L_08B0D878:
    rt.unsupported(0x08B0D878u, 0x756F6C63u, "unknown not lowered yet"); return;
L_08B0D890:
    ctx.execute_vfpu_vminmax(102u, 97u, 116u, 1u, false);
    rt.unsupported(0x08B0D894u, 0x003A3073u, "special? not lowered yet"); return;
L_08B0D898:
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    rt.unsupported(0x08B0D8A0u, 0x433D3D3Du, "unknown not lowered yet"); return;
L_08B0D8C0:
    rt.unsupported(0x08B0D8C0u, 0x45534E49u, "cop1? not lowered yet"); return;
L_08B0D8D4:
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    rt.unsupported(0x08B0D8DCu, 0x433D3D3Du, "unknown not lowered yet"); return;
L_08B0D8FC:
    rt.unsupported(0x08B0D8FCu, 0x43454A45u, "unknown not lowered yet"); return;
L_08B0D910:
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    rt.unsupported(0x08B0D918u, 0x433D3D3Du, "unknown not lowered yet"); return;
L_08B0D934:
    rt.unsupported(0x08B0D934u, 0x20594C42u, "unknown not lowered yet"); return;
L_08B0D94C:
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    rt.unsupported(0x08B0D954u, 0x43533D3Du, "unknown not lowered yet"); return;
L_08B0D968:
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    // nop
    goto L_08B0D978;
L_08B0D978:
    ctx.gpr[16] = (ctx.gpr[17] ^ 21325u);
    ctx.gpr[16] = (ctx.gpr[26] < static_cast<std::uint32_t>(21328) ? 1u : 0u);
    rt.unsupported(0x08B0D980u, 0x45564153u, "cop1? not lowered yet"); return;
L_08B0D98C:
    rt.unsupported(0x08B0D98Cu, 0x73257325u, "unknown not lowered yet"); return;
L_08B0D994:
    if (ctx.gpr[26] == ctx.gpr[21]) {
    ctx.gpr[16] = (ctx.gpr[1] | 12337u);
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20AECu>(ctx, &aot_mem); return;
    }
    goto L_08B0D99C;
L_08B0D99C:
    rt.unsupported(0x08B0D99Cu, 0x00000031u, "special? not lowered yet"); return;
L_08B0D9A0:
    rt.unsupported(0x08B0D9A4u, 0x52544D4Fu, "control flow in delay slot"); return;
L_08B0D9A8:
    if (ctx.gpr[26] == ctx.gpr[11]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 593u, 0x08B1E6B0u>(ctx, &aot_mem); return;
    }
    goto L_08B0D9B0;
L_08B0D9B0:
    rt.unsupported(0x08B0D9B0u, 0x6174672Eu, "vfpu0 not lowered yet"); return;
L_08B0D9B8:
    rt.unsupported(0x08B0D9B8u, 0x73257325u, "unknown not lowered yet"); return;
L_08B0D9C0:
    rt.unsupported(0x08B0D9C0u, 0x49444441u, "cop2/vfpu not lowered yet"); return;
L_08B0D9D4:
    ctx.gpr[14] = (0u | ctx.gpr[10]);
    goto L_08B0D9D8;
L_08B0D9D8:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B0D9DCu, 0x00005455u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 644u, 0x08B1EEF4u>(ctx, &aot_mem); return;
    }
    goto L_08B0D9E0;
L_08B0D9E0:
    if (ctx.gpr[2] == ctx.gpr[9]) {
    rt.unsupported(0x08B0D9E4u, 0x20444550u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 88u, 0x08B20730u>(ctx, &aot_mem); return;
    }
    goto L_08B0D9E8;
L_08B0D9E8:
    rt.unsupported(0x08B0D9E8u, 0x203A4F54u, "unknown not lowered yet"); return;
L_08B0D9F8:
    ctx.execute_vfpu_vscl_ct<119u, 97u, 118u, 1u>();
    rt.unsupported(0x08B0D9FCu, 0x696E6920u, "unknown not lowered yet"); return;
L_08B0DA0C:
    ctx.execute_vfpu_vscl_ct<119u, 97u, 118u, 1u>();
    rt.unsupported(0x08B0DA10u, 0x74657320u, "unknown not lowered yet"); return;
L_08B0DA24:
    rt.unsupported(0x08B0DA24u, 0x6E756F73u, "vfpu3 not lowered yet"); return;
L_08B0DA34:
    rt.unsupported(0x08B0DA34u, 0x6E756F73u, "vfpu3 not lowered yet"); return;
L_08B0DA44:
    // nop
    goto L_08B0DA48;
L_08B0DA48:
    rt.unsupported(0x08B0DA48u, 0x6E756F73u, "vfpu3 not lowered yet"); return;
L_08B0DA5C:
    rt.unsupported(0x08B0DA5Cu, 0x6E756F73u, "vfpu3 not lowered yet"); return;
L_08B0DA70:
    ctx.execute_vfpu_compare3(99u, 115u, 116u, 1u, 6u);
    rt.unsupported(0x08B0DA74u, 0x615F696Eu, "vfpu0 not lowered yet"); return;
L_08B0DA7C:
    rt.unsupported(0x08B0DA7Cu, 0x41430A0Au, "unknown not lowered yet"); return;
L_08B0DA88:
    rt.unsupported(0x08B0DA88u, 0x4F4D2044u, "unknown not lowered yet"); return;
L_08B0DAA4:
    rt.unsupported(0x08B0DAA4u, 0x4E4E4143u, "unknown not lowered yet"); return;
L_08B0DABC:
    (void)(ctx.gpr[9] + static_cast<std::uint32_t>(17741));
    rt.unsupported(0x08B0DAC0u, 0x4E492073u, "unknown not lowered yet"); return;
L_08B0DACC:
    rt.unsupported(0x08B0DACCu, 0x4E4F4954u, "unknown not lowered yet"); return;
L_08B0DAE4:
    rt.unsupported(0x08B0DAE4u, 0x4E4E4143u, "unknown not lowered yet"); return;
L_08B0DB08:
    rt.unsupported(0x08B0DB08u, 0x61430A0Au, "vfpu0 not lowered yet"); return;
L_08B0DB38:
    rt.unsupported(0x08B0DB38u, 0x72745843u, "unknown not lowered yet"); return;
L_08B0DC18:
    ctx.execute_vfpu_vscl_ct<98u, 97u, 115u, 1u>();
    // nop
    goto L_08B0DC20;
L_08B0DC20:
    ctx.execute_vfpu_vcmp_ct<97u, 98u, 1u, 4u>();
    (void)(0u | 0u);
    goto L_08B0DC28;
L_08B0DC28:
    rt.unsupported(0x08B0DC28u, 0x69727473u, "unknown not lowered yet"); return;
L_08B0DC30:
    rt.unsupported(0x08B0DC30u, 0x6874616Du, "unknown not lowered yet"); return;
L_08B0DC38:
    rt.unsupported(0x08B0DC38u, 0x75626564u, "unknown not lowered yet"); return;
L_08B0DC40:
    rt.unsupported(0x08B0DC40u, 0x6E697270u, "vfpu3 not lowered yet"); return;
L_08B0DC4C:
    rt.unsupported(0x08B0DC4Cu, 0x6E695F5Fu, "vfpu3 not lowered yet"); return;
L_08B0DC54:
    rt.unsupported(0x08B0DC54u, 0x0000203Au, "special? not lowered yet"); return;
L_08B0DC58:
    rt.unsupported(0x08B0DC58u, 0x00000A0Du, "special? not lowered yet"); return;
L_08B0DC5C:
    rt.unsupported(0x08B0DC5Cu, 0x72726528u, "unknown not lowered yet"); return;
L_08B0DC74:
    ctx.gpr[1] = (ctx.gpr[27] & 29799u);
    // nop
    // nop
    goto L_08B0DC80;
L_08B0DC80:
    rt.unsupported(0x08B0DC80u, 0x74696E49u, "unknown not lowered yet"); return;
L_08B0DC98:
    ctx.execute_vfpu_compare3(67u, 67u, 108u, 1u, 6u);
    rt.unsupported(0x08B0DC9Cu, 0x72206B63u, "unknown not lowered yet"); return;
L_08B0DCD8:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    if (0u == 0u) (void)(0u);
    goto L_08B0DCF8;
L_08B0DCF8:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B0DCFCu, 0x45594F52u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 658u, 0x08B1F20Cu>(ctx, &aot_mem); return;
    }
    goto L_08B0DD00;
L_08B0DD00:
    if (ctx.gpr[18] == ctx.gpr[3]) {
    rt.unsupported(0x08B0DD04u, 0x20454E41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0196_entry, 196u, 490u, 0x08B15E14u>(ctx, &aot_mem); return;
    }
    goto L_08B0DD08;
L_08B0DD08:
    rt.unsupported(0x08B0DD08u, 0x4E47414Du, "unknown not lowered yet"); return;
L_08B0DD1C:
    ctx.gpr[12] = (0u | 0u);
    // nop
    (void)(ctx.pc = 0x09859DD0u, rt.invoke_chained_call(ctx, &aot_mem)); return;
L_08B0DD40:
    rt.unsupported(0x08B0DD40u, 0x45434956u, "cop1? not lowered yet"); return;
L_08B0DD48:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[14]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 185u, 0x08B21670u>(ctx, &aot_mem); return;
    }
    goto L_08B0DD50;
L_08B0DD50:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[14]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 219u, 0x08B21A60u>(ctx, &aot_mem); return;
    }
    goto L_08B0DD58;
L_08B0DD58:
    rt.unsupported(0x08B0DD58u, 0x43414542u, "unknown not lowered yet"); return;
L_08B0DD60:
    rt.unsupported(0x08B0DD60u, 0x43414542u, "unknown not lowered yet"); return;
L_08B0DD68:
    rt.unsupported(0x08B0DD68u, 0x43414542u, "unknown not lowered yet"); return;
L_08B0DD70:
    rt.unsupported(0x08B0DD70u, 0x464C4F47u, "cop1? not lowered yet"); return;
L_08B0DD78:
    rt.unsupported(0x08B0DD7Cu, 0x00000049u, "control flow in delay slot"); return;
L_08B0DD80:
    rt.unsupported(0x08B0DD80u, 0x4B434F44u, "cop2/vfpu not lowered yet"); return;
L_08B0DD88:
    rt.unsupported(0x08B0DD88u, 0x41564148u, "unknown not lowered yet"); return;
L_08B0DD90:
    rt.unsupported(0x08B0DD94u, 0x00000049u, "control flow in delay slot"); return;
L_08B0DD98:
    rt.unsupported(0x08B0DD98u, 0x4E524F50u, "unknown not lowered yet"); return;
L_08B0DDA0:
    if (ctx.gpr[26] != ctx.gpr[15]) {
    rt.unsupported(0x08B0DDA4u, 0x0000004Eu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 719u, 0x08B22EB4u>(ctx, &aot_mem); return;
    }
    goto L_08B0DDA8;
L_08B0DDA4:
    rt.unsupported(0x08B0DDA4u, 0x0000004Eu, "special? not lowered yet"); return;
L_08B0DDA8:
    rt.unsupported(0x08B0DDA8u, 0x4F505F41u, "unknown not lowered yet"); return;
L_08B0DDE0:
    rt.unsupported(0x08B0DDE0u, 0x61427349u, "vfpu0 not lowered yet"); return;
L_08B0DE08:
    if (ctx.gpr[18] != ctx.gpr[14]) {
    rt.unsupported(0x08B0DE0Cu, 0x44494C41u, "unsupported CFC1 control register"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 24u, 0x08B20234u>(ctx, &aot_mem); return;
    }
    goto L_08B0DE10;
L_08B0DE10:
    rt.unsupported(0x08B0DE10u, 0x4E414220u, "unknown not lowered yet"); return;
L_08B0DE20:
    ctx.gpr[12] = (0u | ctx.gpr[10]);
    goto L_08B0DE24;
L_08B0DE24:
    // nop
    goto L_08B0DE28;
L_08B0DE28:
    rt.unsupported(0x08B0DE28u, 0x6E65704Fu, "vfpu3 not lowered yet"); return;
L_08B0DE54:
    rt.unsupported(0x08B0DE54u, 0x6E65706Fu, "vfpu3 not lowered yet"); return;
L_08B0DE68:
    rt.unsupported(0x08B0DE68u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B0DE78:
    rt.unsupported(0x08B0DE78u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B0DE88:
    rt.unsupported(0x08B0DE88u, 0x00005741u, "special? not lowered yet"); return;
L_08B0DE8C:
    ctx.execute_vfpu_compare3(101u, 114u, 114u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<114u, 32u, 103u, 1u>();
    rt.unsupported(0x08B0DE94u, 0x6E697474u, "vfpu3 not lowered yet"); return;
L_08B0DEA8:
    rt.unsupported(0x08B0DEA8u, 0x73257325u, "unknown not lowered yet"); return;
L_08B0DEB0:
    rt.unsupported(0x08B0DEB0u, 0x43534944u, "unknown not lowered yet"); return;
L_08B0DEBC:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B0DEC0u, 0x44525355u, "unsupported CFC1 control register"); return;
    jump_target = ctx.gpr[1];
    ctx.gpr[10] = (0x08B0DECCu);
    rt.unsupported(0x08B0DEC8u, 0x6E65706Fu, "vfpu3 not lowered yet"); return;
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B0DECCu) goto L_08B0DECC;
    return;
L_08B0DEC8:
    rt.unsupported(0x08B0DEC8u, 0x6E65706Fu, "vfpu3 not lowered yet"); return;
L_08B0DECC:
    rt.unsupported(0x08B0DECCu, 0x20676E69u, "unknown not lowered yet"); return;
L_08B0DED4:
    if (ctx.gpr[10] != ctx.gpr[1]) {
    ctx.gpr[15] = (ctx.gpr[26] < static_cast<std::uint32_t>(18756) ? 1u : 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 197u, 0x08B2AB6Cu>(ctx, &aot_mem); return;
    }
    goto L_08B0DEDC;
L_08B0DEDC:
    ctx.gpr[20] = (ctx.gpr[10] + static_cast<std::uint32_t>(17747));
    rt.unsupported(0x08B0DEE0u, 0x41522E73u, "unknown not lowered yet"); return;
L_08B0DEE8:
    ctx.execute_vfpu_vscl_ct<102u, 105u, 108u, 1u>();
    ctx.execute_vfpu_vscl_ct<110u, 97u, 109u, 1u>();
    // nop
    (void)(ctx.pc = 0x09CC9480u, rt.invoke_chained_call(ctx, &aot_mem)); return;
L_08B0DEF8:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<108u, 1u>(vfpu_d); }
    rt.unsupported(0x08B0DEFCu, 0x20676E69u, "unknown not lowered yet"); return;
L_08B0DF10:
    ctx.execute_vfpu_vcmp_ct<97u, 105u, 1u, 6u>();
    rt.unsupported(0x08B0DF14u, 0x74206465u, "unknown not lowered yet"); return;
L_08B0DF40:
    ctx.execute_vfpu_vcmp_ct<97u, 105u, 1u, 6u>();
    rt.unsupported(0x08B0DF44u, 0x74206465u, "unknown not lowered yet"); return;
L_08B0DF70:
    rt.unsupported(0x08B0DF70u, 0x6B656573u, "unknown not lowered yet"); return;
L_08B0DF9C:
    rt.unsupported(0x08B0DF9Cu, 0x72646461u, "unknown not lowered yet"); return;
L_08B0DFC0:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    if (ctx.gpr[1] == 0u) {
    rt.unsupported(0x08B0DFC8u, 0x43206465u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1071u, 0x08B2715Cu>(ctx, &aot_mem); return;
    }
    goto L_08B0DFCC;
L_08B0DFCC:
    ctx.execute_vfpu_vscl_ct<111u, 109u, 109u, 1u>();
    (void)(ctx.gpr[9] + static_cast<std::uint32_t>(29806));
    ctx.gpr[1] = (0u & 0u);
    goto L_08B0DFD8;
L_08B0DFD8:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B0DFDCu, 0x62206465u, "vfpu0 not lowered yet"); return;
L_08B0DFE8:
    rt.unsupported(0x08B0DFE8u, 0x6E6F7257u, "vfpu3 not lowered yet"); return;
L_08B0E004:
    rt.unsupported(0x08B0E004u, 0x414F4C0Au, "unknown not lowered yet"); return;
L_08B0E014:
    rt.unsupported(0x08B0E014u, 0x4E414220u, "unknown not lowered yet"); return;
L_08B0E020:
    rt.unsupported(0x08B0E020u, 0x69725420u, "unknown not lowered yet"); return;
L_08B0E040:
    rt.unsupported(0x08B0E040u, 0x72617453u, "unknown not lowered yet"); return;
L_08B0E064:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B0E068u, 0x20676E69u, "unknown not lowered yet"); return;
L_08B0E078:
    rt.unsupported(0x08B0E078u, 0x44414F4Cu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B0E07Cu, 0x20474E49u, "unknown not lowered yet"); return;
L_08B0E088:
    rt.unsupported(0x08B0E088u, 0x41494420u, "unknown not lowered yet"); return;
L_08B0E094:
    (void)(ctx.gpr[1] & 21583u);
    if (0u == 0u) (void)(0u);
    goto L_08B0E09C;
L_08B0E09C:
    rt.unsupported(0x08B0E09Cu, 0x44414F4Cu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B0E0A0u, 0x20474E49u, "unknown not lowered yet"); return;
L_08B0E0AC:
    rt.unsupported(0x08B0E0ACu, 0x41494420u, "unknown not lowered yet"); return;
L_08B0E0B8:
    (void)(ctx.gpr[9] & 21583u);
    if (0u == 0u) (void)(0u);
    goto L_08B0E0C0;
L_08B0E0C0:
    rt.unsupported(0x08B0E0C0u, 0x44414F4Cu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B0E0C4u, 0x20474E49u, "unknown not lowered yet"); return;
L_08B0E0E4:
    rt.unsupported(0x08B0E0E4u, 0x44414F4Cu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B0E0E8u, 0x20474E49u, "unknown not lowered yet"); return;
L_08B0E108:
    rt.unsupported(0x08B0E108u, 0x44414F4Cu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B0E10Cu, 0x20474E49u, "unknown not lowered yet"); return;
L_08B0E124:
    rt.unsupported(0x08B0E124u, 0x61647055u, "vfpu0 not lowered yet"); return;
L_08B0E13C:
    rt.unsupported(0x08B0E13Cu, 0x20786673u, "unknown not lowered yet"); return;
L_08B0E154:
    ctx.execute_vfpu_compare3(101u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08B0E158u, 0x6E692072u, "vfpu3 not lowered yet"); return;
L_08B0E174:
    rt.unsupported(0x08B0E174u, 0x20776F6Eu, "unknown not lowered yet"); return;
L_08B0E1D0:
    if (ctx.gpr[26] == ctx.gpr[1]) {
    rt.unsupported(0x08B0E1D4u, 0x00003145u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 33u, 0x08B202E0u>(ctx, &aot_mem); return;
    }
    goto L_08B0E1D8;
L_08B0E1D8:
    if (ctx.gpr[26] == ctx.gpr[1]) {
    rt.unsupported(0x08B0E1DCu, 0x00003245u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 35u, 0x08B202E8u>(ctx, &aot_mem); return;
    }
    goto L_08B0E1E0;
L_08B0E1E0:
    if (ctx.gpr[26] == ctx.gpr[1]) {
    rt.unsupported(0x08B0E1E4u, 0x00003345u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 36u, 0x08B202F0u>(ctx, &aot_mem); return;
    }
    goto L_08B0E1E8;
L_08B0E1E8:
    if (ctx.gpr[26] == ctx.gpr[1]) {
    rt.unsupported(0x08B0E1ECu, 0x00003445u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 37u, 0x08B202F8u>(ctx, &aot_mem); return;
    }
    goto L_08B0E1F0;
L_08B0E1F0:
    if (ctx.gpr[26] == ctx.gpr[1]) {
    rt.unsupported(0x08B0E1F4u, 0x00003545u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 38u, 0x08B20300u>(ctx, &aot_mem); return;
    }
    goto L_08B0E1F8;
L_08B0E1F8:
    if (ctx.gpr[26] == ctx.gpr[1]) {
    rt.unsupported(0x08B0E1FCu, 0x00003645u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 39u, 0x08B20308u>(ctx, &aot_mem); return;
    }
    goto L_08B0E200;
L_08B0E200:
    if (ctx.gpr[26] == ctx.gpr[1]) {
    rt.unsupported(0x08B0E204u, 0x00003745u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 40u, 0x08B20310u>(ctx, &aot_mem); return;
    }
    goto L_08B0E208;
L_08B0E208:
    if (ctx.gpr[26] == ctx.gpr[1]) {
    rt.unsupported(0x08B0E20Cu, 0x00003845u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 41u, 0x08B20318u>(ctx, &aot_mem); return;
    }
    goto L_08B0E210;
L_08B0E210:
    if (ctx.gpr[26] == ctx.gpr[1]) {
    rt.unsupported(0x08B0E214u, 0x00003945u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 42u, 0x08B20320u>(ctx, &aot_mem); return;
    }
    goto L_08B0E218;
L_08B0E218:
    if (ctx.gpr[26] == ctx.gpr[1]) {
    rt.unsupported(0x08B0E21Cu, 0x00303145u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 43u, 0x08B20328u>(ctx, &aot_mem); return;
    }
    goto L_08B0E220;
L_08B0E220:
    if (ctx.gpr[26] == ctx.gpr[1]) {
    rt.unsupported(0x08B0E224u, 0x00313145u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 45u, 0x08B20330u>(ctx, &aot_mem); return;
    }
    goto L_08B0E228;
L_08B0E228:
    if (ctx.gpr[26] == ctx.gpr[1]) {
    rt.unsupported(0x08B0E22Cu, 0x00323145u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 46u, 0x08B20338u>(ctx, &aot_mem); return;
    }
    goto L_08B0E230;
L_08B0E230:
    if (ctx.gpr[26] == ctx.gpr[1]) {
    rt.unsupported(0x08B0E234u, 0x00333145u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 47u, 0x08B20340u>(ctx, &aot_mem); return;
    }
    goto L_08B0E238;
L_08B0E238:
    if (ctx.gpr[26] == ctx.gpr[1]) {
    rt.unsupported(0x08B0E23Cu, 0x00343145u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 48u, 0x08B20348u>(ctx, &aot_mem); return;
    }
    goto L_08B0E240;
L_08B0E240:
    if (ctx.gpr[26] == ctx.gpr[1]) {
    rt.unsupported(0x08B0E244u, 0x00353145u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 49u, 0x08B20350u>(ctx, &aot_mem); return;
    }
    goto L_08B0E248;
L_08B0E248:
    if (ctx.gpr[26] == ctx.gpr[1]) {
    rt.unsupported(0x08B0E24Cu, 0x00363145u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 50u, 0x08B20358u>(ctx, &aot_mem); return;
    }
    goto L_08B0E250;
L_08B0E250:
    if (ctx.gpr[26] == ctx.gpr[1]) {
    rt.unsupported(0x08B0E254u, 0x00373145u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 51u, 0x08B20360u>(ctx, &aot_mem); return;
    }
    goto L_08B0E258;
L_08B0E258:
    if (ctx.gpr[26] == ctx.gpr[1]) {
    rt.unsupported(0x08B0E25Cu, 0x00383145u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 53u, 0x08B20368u>(ctx, &aot_mem); return;
    }
    goto L_08B0E260;
L_08B0E260:
    if (ctx.gpr[26] == ctx.gpr[1]) {
    rt.unsupported(0x08B0E264u, 0x00393145u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 54u, 0x08B20370u>(ctx, &aot_mem); return;
    }
    goto L_08B0E268;
L_08B0E268:
    if (ctx.gpr[26] == ctx.gpr[1]) {
    rt.unsupported(0x08B0E26Cu, 0x00303245u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 55u, 0x08B20378u>(ctx, &aot_mem); return;
    }
    goto L_08B0E270;
L_08B0E270:
    if (ctx.gpr[26] == ctx.gpr[1]) {
    rt.unsupported(0x08B0E274u, 0x00313245u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 57u, 0x08B20380u>(ctx, &aot_mem); return;
    }
    goto L_08B0E278;
L_08B0E278:
    { const bool signed_ok = ctx.execute_signed_add(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B0E278u, 0x00000020u); return; } }
    rt.unsupported(0x08B0E27Cu, 0x726F6D65u, "unknown not lowered yet"); return;
L_08B0E284:
    rt.unsupported(0x08B0E284u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E28C:
    rt.unsupported(0x08B0E28Cu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E294:
    rt.unsupported(0x08B0E294u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E29C:
    rt.unsupported(0x08B0E29Cu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E2A4:
    rt.unsupported(0x08B0E2A4u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E2AC:
    rt.unsupported(0x08B0E2ACu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E2B4:
    rt.unsupported(0x08B0E2B4u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E2BC:
    rt.unsupported(0x08B0E2BCu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E2C4:
    rt.unsupported(0x08B0E2C4u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E2CC:
    rt.unsupported(0x08B0E2CCu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E2D4:
    rt.unsupported(0x08B0E2D4u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E2DC:
    rt.unsupported(0x08B0E2DCu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E2E4:
    rt.unsupported(0x08B0E2E4u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E2EC:
    rt.unsupported(0x08B0E2ECu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E2F4:
    rt.unsupported(0x08B0E2F4u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E2FC:
    rt.unsupported(0x08B0E2FCu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E304:
    rt.unsupported(0x08B0E304u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E30C:
    rt.unsupported(0x08B0E30Cu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E314:
    rt.unsupported(0x08B0E314u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E31C:
    rt.unsupported(0x08B0E31Cu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E324:
    rt.unsupported(0x08B0E324u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E32C:
    rt.unsupported(0x08B0E32Cu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E334:
    rt.unsupported(0x08B0E334u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E33C:
    rt.unsupported(0x08B0E33Cu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E344:
    rt.unsupported(0x08B0E344u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E34C:
    rt.unsupported(0x08B0E34Cu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E354:
    rt.unsupported(0x08B0E354u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E35C:
    rt.unsupported(0x08B0E35Cu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E364:
    rt.unsupported(0x08B0E364u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E36C:
    rt.unsupported(0x08B0E36Cu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E374:
    rt.unsupported(0x08B0E374u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E37C:
    rt.unsupported(0x08B0E37Cu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E384:
    rt.unsupported(0x08B0E384u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E38C:
    rt.unsupported(0x08B0E38Cu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E394:
    rt.unsupported(0x08B0E394u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E39C:
    rt.unsupported(0x08B0E39Cu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E3A4:
    rt.unsupported(0x08B0E3A4u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E3AC:
    rt.unsupported(0x08B0E3ACu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E3B4:
    rt.unsupported(0x08B0E3B4u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E3BC:
    rt.unsupported(0x08B0E3BCu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E3C4:
    rt.unsupported(0x08B0E3C4u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E3CC:
    rt.unsupported(0x08B0E3CCu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E3D4:
    rt.unsupported(0x08B0E3D4u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E3DC:
    rt.unsupported(0x08B0E3DCu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E3E4:
    rt.unsupported(0x08B0E3E4u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E3EC:
    rt.unsupported(0x08B0E3ECu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E3F4:
    rt.unsupported(0x08B0E3F4u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E3FC:
    rt.unsupported(0x08B0E3FCu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E404:
    rt.unsupported(0x08B0E404u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E40C:
    rt.unsupported(0x08B0E40Cu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E414:
    rt.unsupported(0x08B0E414u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E41C:
    rt.unsupported(0x08B0E41Cu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E424:
    rt.unsupported(0x08B0E424u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E42C:
    rt.unsupported(0x08B0E42Cu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E434:
    rt.unsupported(0x08B0E434u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E43C:
    rt.unsupported(0x08B0E43Cu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E444:
    rt.unsupported(0x08B0E444u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E44C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[13]) >> 29u));
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 745u, 0x08B1F990u>(ctx, &aot_mem); return;
    }
    goto L_08B0E454;
L_08B0E454:
    if (ctx.gpr[26] == ctx.gpr[9]) {
    rt.memory().memory_barrier();
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 208u, 0x08B21990u>(ctx, &aot_mem); return;
    }
    goto L_08B0E45C;
L_08B0E45C:
    rt.unsupported(0x08B0E460u, 0x00454D49u, "control flow in delay slot"); return;
L_08B0E464:
    rt.unsupported(0x08B0E464u, 0x4F5F5453u, "unknown not lowered yet"); return;
L_08B0E46C:
    if (ctx.gpr[26] == ctx.gpr[25]) {
    ctx.gpr[10] = (ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 628u, 0x08B1E980u>(ctx, &aot_mem); return;
    }
    goto L_08B0E474;
L_08B0E474:
    rt.unsupported(0x08B0E478u, 0x00005648u, "control flow in delay slot"); return;
L_08B0E47C:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B0E480u, 0x0050525Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 747u, 0x08B1F998u>(ctx, &aot_mem); return;
    }
    goto L_08B0E484;
L_08B0E484:
    rt.unsupported(0x08B0E488u, 0x00004349u, "control flow in delay slot"); return;
L_08B0E48C:
    if (ctx.gpr[26] != ctx.gpr[31]) {
    rt.unsupported(0x08B0E490u, 0x00545341u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 755u, 0x08B1F9D0u>(ctx, &aot_mem); return;
    }
    goto L_08B0E494;
L_08B0E494:
    if (ctx.gpr[26] != ctx.gpr[31]) {
    ctx.lo = ctx.gpr[2];
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 756u, 0x08B1F9D8u>(ctx, &aot_mem); return;
    }
    goto L_08B0E49C;
L_08B0E49C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B0E4A0u, 0x00505845u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 629u, 0x08B1E9ACu>(ctx, &aot_mem); return;
    }
    goto L_08B0E4A4;
L_08B0E4A4:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B0E4A8u, 0x00505845u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 298u, 0x08B221B0u>(ctx, &aot_mem); return;
    }
    goto L_08B0E4AC;
L_08B0E4AC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[10] = (ctx.gpr[20] << (ctx.gpr[2] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 755u, 0x08B1F9D0u>(ctx, &aot_mem); return;
    }
    goto L_08B0E4B4;
L_08B0E4B4:
    rt.unsupported(0x08B0E4B4u, 0x45525954u, "cop1? not lowered yet"); return;
L_08B0E4BC:
    if (ctx.gpr[26] == ctx.gpr[31]) {
    rt.unsupported(0x08B0E4C0u, 0x00524154u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 960u, 0x08B2360Cu>(ctx, &aot_mem); return;
    }
    goto L_08B0E4C4;
L_08B0E4C4:
    if (ctx.gpr[26] == ctx.gpr[31]) {
    rt.unsupported(0x08B0E4C8u, 0x004E4754u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 962u, 0x08B23614u>(ctx, &aot_mem); return;
    }
    goto L_08B0E4CC;
L_08B0E4CC:
    rt.unsupported(0x08B0E4CCu, 0x425F4D54u, "unknown not lowered yet"); return;
L_08B0E4D4:
    rt.unsupported(0x08B0E4D4u, 0x445F4D54u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B0E4D8u, 0x00004445u, "special? not lowered yet"); return;
L_08B0E4DC:
    rt.unsupported(0x08B0E4DCu, 0x485F5453u, "cop2/vfpu not lowered yet"); return;
L_08B0E4E4:
    rt.unsupported(0x08B0E4E8u, 0x0000434Cu, "control flow in delay slot"); return;
L_08B0E4EC:
    rt.unsupported(0x08B0E4ECu, 0x475F5453u, "cop1? not lowered yet"); return;
L_08B0E4F4:
    rt.unsupported(0x08B0E4F4u, 0x475F5453u, "cop1? not lowered yet"); return;
L_08B0E4FC:
    rt.unsupported(0x08B0E4FCu, 0x475F5453u, "cop1? not lowered yet"); return;
L_08B0E504:
    rt.unsupported(0x08B0E504u, 0x475F5453u, "cop1? not lowered yet"); return;
L_08B0E50C:
    rt.unsupported(0x08B0E50Cu, 0x475F5453u, "cop1? not lowered yet"); return;
L_08B0E514:
    rt.unsupported(0x08B0E514u, 0x475F5453u, "cop1? not lowered yet"); return;
L_08B0E51C:
    rt.unsupported(0x08B0E51Cu, 0x475F5453u, "cop1? not lowered yet"); return;
L_08B0E524:
    rt.unsupported(0x08B0E524u, 0x475F5453u, "cop1? not lowered yet"); return;
L_08B0E52C:
    rt.unsupported(0x08B0E52Cu, 0x475F5453u, "cop1? not lowered yet"); return;
L_08B0E534:
    rt.unsupported(0x08B0E534u, 0x475F5453u, "cop1? not lowered yet"); return;
L_08B0E53C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[10] = (static_cast<std::uint32_t>(std::countl_one(ctx.gpr[2])));
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 247u, 0x08B21E5Cu>(ctx, &aot_mem); return;
    }
    goto L_08B0E544;
L_08B0E544:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 9u));
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 766u, 0x08B1FA58u>(ctx, &aot_mem); return;
    }
    goto L_08B0E54C;
L_08B0E54C:
    rt.unsupported(0x08B0E54Cu, 0x4B4D5448u, "cop2/vfpu not lowered yet"); return;
L_08B0E554:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B0E558u, 0x00505845u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 28u, 0x08B20284u>(ctx, &aot_mem); return;
    }
    goto L_08B0E55C;
L_08B0E55C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[18] >> (ctx.gpr[2] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1108u, 0x08B23A68u>(ctx, &aot_mem); return;
    }
    goto L_08B0E564;
L_08B0E564:
    rt.unsupported(0x08B0E568u, 0x00544948u, "control flow in delay slot"); return;
L_08B0E56C:
    if (ctx.gpr[10] != ctx.gpr[3]) {
    ctx.gpr[8] = (ctx.lo);
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 661u, 0x08B1F274u>(ctx, &aot_mem); return;
    }
    goto L_08B0E574;
L_08B0E574:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 9u));
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 632u, 0x08B1EA84u>(ctx, &aot_mem); return;
    }
    goto L_08B0E57C;
L_08B0E57C:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B0E580u, 0x0046445Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 770u, 0x08B1FA98u>(ctx, &aot_mem); return;
    }
    goto L_08B0E584;
L_08B0E584:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B0E588u, 0x0043445Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 771u, 0x08B1FAA0u>(ctx, &aot_mem); return;
    }
    goto L_08B0E58C;
L_08B0E58C:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    ctx.gpr[9] = (ctx.gpr[11] >> 5u);
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 109u, 0x08B20AA0u>(ctx, &aot_mem); return;
    }
    goto L_08B0E594;
L_08B0E594:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    ctx.gpr[9] = (ctx.gpr[1] >> 29u);
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20AA8u>(ctx, &aot_mem); return;
    }
    goto L_08B0E59C;
L_08B0E59C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[19] << (ctx.gpr[2] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 328u, 0x08B222F0u>(ctx, &aot_mem); return;
    }
    goto L_08B0E5A4;
L_08B0E5A4:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    ctx.gpr[8] = (ctx.gpr[13] << (ctx.gpr[2] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 773u, 0x08B1FAC0u>(ctx, &aot_mem); return;
    }
    goto L_08B0E5AC;
L_08B0E5AC:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    ctx.gpr[8] = (ctx.gpr[13] << (ctx.gpr[2] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 775u, 0x08B1FAC8u>(ctx, &aot_mem); return;
    }
    goto L_08B0E5B4;
L_08B0E5B4:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    ctx.gpr[9] = (ctx.gpr[13] >> 5u);
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 111u, 0x08B20AC8u>(ctx, &aot_mem); return;
    }
    goto L_08B0E5BC;
L_08B0E5BC:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    ctx.gpr[9] = (ctx.gpr[13] >> 29u);
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 112u, 0x08B20AD0u>(ctx, &aot_mem); return;
    }
    goto L_08B0E5C4;
L_08B0E5C4:
    rt.unsupported(0x08B0E5C4u, 0x44544F54u, "unsupported CFC1 control register"); return;
    jump_target = ctx.gpr[2];
    ctx.gpr[10] = (0x08B0E5D0u);
    rt.unsupported(0x08B0E5CCu, 0x4143584Du, "unknown not lowered yet"); return;
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B0E5D0u) goto L_08B0E5D0;
    return;
L_08B0E5CC:
    rt.unsupported(0x08B0E5CCu, 0x4143584Du, "unknown not lowered yet"); return;
L_08B0E5D0:
    ctx.gpr[8] = (ctx.lo);
    goto L_08B0E5D4;
L_08B0E5D4:
    rt.unsupported(0x08B0E5D4u, 0x4143584Du, "unknown not lowered yet"); return;
L_08B0E5DC:
    rt.unsupported(0x08B0E5DCu, 0x4C46584Du, "unknown not lowered yet"); return;
L_08B0E5E4:
    if (ctx.gpr[10] != ctx.gpr[10]) {
    rt.unsupported(0x08B0E5E8u, 0x0000504Du, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 232u, 0x08B2471Cu>(ctx, &aot_mem); return;
    }
    goto L_08B0E5EC;
L_08B0E5E8:
    rt.unsupported(0x08B0E5E8u, 0x0000504Du, "special? not lowered yet"); return;
L_08B0E5EC:
    if (ctx.gpr[26] == ctx.gpr[20]) {
    rt.unsupported(0x08B0E5F0u, 0x00005554u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 858u, 0x08B232F8u>(ctx, &aot_mem); return;
    }
    goto L_08B0E5F4;
L_08B0E5F4:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B0E5F8u, 0x00004E55u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 256u, 0x08B21F1Cu>(ctx, &aot_mem); return;
    }
    goto L_08B0E5FC;
L_08B0E5FC:
    rt.unsupported(0x08B0E5FCu, 0x4E495250u, "unknown not lowered yet"); return;
L_08B0E604:
    rt.unsupported(0x08B0E604u, 0x4E494244u, "unknown not lowered yet"); return;
L_08B0E60C:
    rt.unsupported(0x08B0E60Cu, 0x49504244u, "cop2/vfpu not lowered yet"); return;
L_08B0E614:
    rt.unsupported(0x08B0E614u, 0x4E495254u, "unknown not lowered yet"); return;
L_08B0E61C:
    if (ctx.gpr[18] == ctx.gpr[20]) {
    ctx.lo = 0u;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 742u, 0x08B22F60u>(ctx, &aot_mem); return;
    }
    goto L_08B0E624;
L_08B0E624:
    rt.unsupported(0x08B0E624u, 0x4E495551u, "unknown not lowered yet"); return;
L_08B0E62C:
    rt.unsupported(0x08B0E62Cu, 0x49555150u, "cop2/vfpu not lowered yet"); return;
L_08B0E634:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B0E638u, 0x00004355u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 344u, 0x08B22370u>(ctx, &aot_mem); return;
    }
    goto L_08B0E63C;
L_08B0E63C:
    rt.unsupported(0x08B0E63Cu, 0x4E554F4Eu, "unknown not lowered yet"); return;
L_08B0E644:
    rt.unsupported(0x08B0E648u, 0x00454548u, "control flow in delay slot"); return;
L_08B0E648:
    rt.unsupported(0x08B0E64Cu, 0x575F5453u, "control flow in delay slot"); return;
L_08B0E64C:
    rt.unsupported(0x08B0E650u, 0x00444548u, "control flow in delay slot"); return;
L_08B0E654:
    if (ctx.gpr[26] == ctx.gpr[31]) {
    rt.unsupported(0x08B0E658u, 0x00504F54u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1018u, 0x08B237A4u>(ctx, &aot_mem); return;
    }
    goto L_08B0E65C;
L_08B0E65C:
    if (ctx.gpr[26] == ctx.gpr[31]) {
    rt.unsupported(0x08B0E660u, 0x00444F54u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1020u, 0x08B237ACu>(ctx, &aot_mem); return;
    }
    goto L_08B0E664;
L_08B0E664:
    rt.unsupported(0x08B0E664u, 0x465F5453u, "cop1? not lowered yet"); return;
L_08B0E66C:
    ctx.gpr[31] = (ctx.gpr[18] & 21587u);
    ctx.gpr[9] = (static_cast<std::uint32_t>(std::countl_one(ctx.gpr[2])));
    goto L_08B0E674;
L_08B0E674:
    ctx.gpr[31] = (ctx.gpr[18] & 21587u);
    ctx.gpr[9] = (static_cast<std::uint32_t>(std::countl_one(ctx.gpr[2])));
    goto L_08B0E67C;
L_08B0E67C:
    rt.unsupported(0x08B0E67Cu, 0x4C5F5453u, "unknown not lowered yet"); return;
L_08B0E684:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B0E688u, 0x0043435Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 793u, 0x08B1FBA0u>(ctx, &aot_mem); return;
    }
    goto L_08B0E68C;
L_08B0E68C:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B0E690u, 0x0056485Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 794u, 0x08B1FBA8u>(ctx, &aot_mem); return;
    }
    goto L_08B0E694;
L_08B0E694:
    rt.unsupported(0x08B0E694u, 0x44534150u, "unsupported CFC1 control register"); return;
    ctx.gpr[9] = (ctx.lo);
    goto L_08B0E69C;
L_08B0E69C:
    if (ctx.gpr[2] != ctx.gpr[14]) {
    rt.unsupported(0x08B0E6A0u, 0x00005841u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 359u, 0x08B223D4u>(ctx, &aot_mem); return;
    }
    goto L_08B0E6A4;
L_08B0E6A4:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B0E6A8u, 0x00534C5Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 796u, 0x08B1FBC0u>(ctx, &aot_mem); return;
    }
    goto L_08B0E6AC;
L_08B0E6AC:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B0E6B0u, 0x0041485Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 797u, 0x08B1FBC8u>(ctx, &aot_mem); return;
    }
    goto L_08B0E6B4;
L_08B0E6B4:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B0E6B8u, 0x0045465Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 798u, 0x08B1FBD0u>(ctx, &aot_mem); return;
    }
    goto L_08B0E6BC;
L_08B0E6BC:
    rt.unsupported(0x08B0E6BCu, 0x45524946u, "cop1? not lowered yet"); return;
L_08B0E6C4:
    rt.unsupported(0x08B0E6C8u, 0x0000444Cu, "control flow in delay slot"); return;
L_08B0E6CC:
    rt.unsupported(0x08B0E6CCu, 0x434E4F4Du, "unknown not lowered yet"); return;
L_08B0E6D4:
    rt.unsupported(0x08B0E6D4u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B0E6DC:
    rt.unsupported(0x08B0E6DCu, 0x424E4F4Du, "unknown not lowered yet"); return;
L_08B0E6E4:
    if (ctx.gpr[26] == ctx.gpr[18]) {
    rt.unsupported(0x08B0E6E8u, 0x00505845u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 641u, 0x08B1EBF4u>(ctx, &aot_mem); return;
    }
    goto L_08B0E6EC;
L_08B0E6E8:
    rt.unsupported(0x08B0E6E8u, 0x00505845u, "special? not lowered yet"); return;
L_08B0E6EC:
    rt.unsupported(0x08B0E6F0u, 0x004C564Cu, "control flow in delay slot"); return;
L_08B0E6F4:
    if (ctx.gpr[18] != ctx.gpr[20]) {
    rt.unsupported(0x08B0E6F8u, 0x004E4F4Du, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 191u, 0x08B21844u>(ctx, &aot_mem); return;
    }
    goto L_08B0E6FC;
L_08B0E6FC:
    if (ctx.gpr[18] != ctx.gpr[20]) {
    if (ctx.gpr[12] != 0u) ctx.gpr[9] = (ctx.gpr[2]);
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 192u, 0x08B2184Cu>(ctx, &aot_mem); return;
    }
    goto L_08B0E704;
L_08B0E704:
    if (ctx.gpr[2] != ctx.gpr[14]) {
    ctx.gpr[10] = (ctx.lo);
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 373u, 0x08B2243Cu>(ctx, &aot_mem); return;
    }
    goto L_08B0E70C;
L_08B0E70C:
    rt.unsupported(0x08B0E70Cu, 0x4D414447u, "unknown not lowered yet"); return;
L_08B0E714:
    rt.unsupported(0x08B0E714u, 0x4A414748u, "cop2/vfpu not lowered yet"); return;
L_08B0E724:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[14]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 272u, 0x08B2204Cu>(ctx, &aot_mem); return;
    }
    goto L_08B0E72C;
L_08B0E72C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[14]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 373u, 0x08B2243Cu>(ctx, &aot_mem); return;
    }
    goto L_08B0E734;
L_08B0E734:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[14]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1177u, 0x08B23C84u>(ctx, &aot_mem); return;
    }
    goto L_08B0E73C;
L_08B0E73C:
    if (ctx.gpr[2] != ctx.gpr[20]) {
    ctx.gpr[10] = (ctx.lo);
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 902u, 0x08B23458u>(ctx, &aot_mem); return;
    }
    goto L_08B0E744;
L_08B0E744:
    if (ctx.gpr[2] == ctx.gpr[12]) {
    rt.memory().memory_barrier();
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 93u, 0x08B20850u>(ctx, &aot_mem); return;
    }
    goto L_08B0E74C;
L_08B0E74C:
    rt.unsupported(0x08B0E74Cu, 0x4F534D54u, "unknown not lowered yet"); return;
L_08B0E75C:
    if (ctx.gpr[18] == ctx.gpr[4]) {
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<67u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<37u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<65u, 1u>(vfpu_d); }
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 275u, 0x08B22068u>(ctx, &aot_mem); return;
    }
    goto L_08B0E764;
L_08B0E764:
    // nop
    goto L_08B0E768;
L_08B0E768:
    rt.unsupported(0x08B0E768u, 0x4B494244u, "cop2/vfpu not lowered yet"); return;
L_08B0E770:
    rt.unsupported(0x08B0E770u, 0x4B494244u, "cop2/vfpu not lowered yet"); return;
L_08B0E778:
    if (ctx.gpr[2] == ctx.gpr[18]) {
    ctx.lo = 0u;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 908u, 0x08B23484u>(ctx, &aot_mem); return;
    }
    goto L_08B0E780;
L_08B0E780:
    rt.unsupported(0x08B0E780u, 0x4B494244u, "cop2/vfpu not lowered yet"); return;
L_08B0E790:
    rt.unsupported(0x08B0E790u, 0x4B494244u, "cop2/vfpu not lowered yet"); return;
L_08B0E798:
    rt.unsupported(0x08B0E798u, 0x4B494244u, "cop2/vfpu not lowered yet"); return;
L_08B0E7A0:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B0E7A4u, 0x004F475Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 814u, 0x08B1FCBCu>(ctx, &aot_mem); return;
    }
    goto L_08B0E7A8;
L_08B0E7A8:
    rt.unsupported(0x08B0E7A8u, 0x4D5F5453u, "unknown not lowered yet"); return;
L_08B0E7B0:
    rt.unsupported(0x08B0E7B4u, 0x00544F48u, "control flow in delay slot"); return;
L_08B0E7B8:
    rt.unsupported(0x08B0E7BCu, 0x005A5A49u, "control flow in delay slot"); return;
L_08B0E7C0:
    rt.unsupported(0x08B0E7C0u, 0x4E5F5453u, "unknown not lowered yet"); return;
L_08B0E7C8:
    if (ctx.gpr[2] != ctx.gpr[31]) {
    rt.memory().memory_barrier();
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 398u, 0x08B22500u>(ctx, &aot_mem); return;
    }
    goto L_08B0E7D0;
L_08B0E7D0:
    if (ctx.gpr[2] != ctx.gpr[31]) {
    rt.memory().memory_barrier();
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 643u, 0x08B1ED24u>(ctx, &aot_mem); return;
    }
    goto L_08B0E7D8;
L_08B0E7D8:
    rt.unsupported(0x08B0E7D8u, 0x475F5453u, "cop1? not lowered yet"); return;
L_08B0E7E0:
    rt.unsupported(0x08B0E7E0u, 0x495F5453u, "cop2/vfpu not lowered yet"); return;
L_08B0E7E8:
    rt.unsupported(0x08B0E7E8u, 0x43485453u, "unknown not lowered yet"); return;
L_08B0E7F0:
    if (ctx.gpr[2] != ctx.gpr[6]) {
    rt.unsupported(0x08B0E7F4u, 0x0031305Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1071u, 0x08B23940u>(ctx, &aot_mem); return;
    }
    goto L_08B0E7F8;
L_08B0E7F8:
    if (ctx.gpr[2] != ctx.gpr[6]) {
    rt.unsupported(0x08B0E7FCu, 0x0032305Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1072u, 0x08B23948u>(ctx, &aot_mem); return;
    }
    goto L_08B0E800;
L_08B0E800:
    if (ctx.gpr[2] != ctx.gpr[6]) {
    rt.unsupported(0x08B0E804u, 0x0033305Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1073u, 0x08B23950u>(ctx, &aot_mem); return;
    }
    goto L_08B0E808;
L_08B0E808:
    if (ctx.gpr[2] != ctx.gpr[6]) {
    rt.unsupported(0x08B0E80Cu, 0x0034305Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1074u, 0x08B23958u>(ctx, &aot_mem); return;
    }
    goto L_08B0E810;
L_08B0E810:
    if (ctx.gpr[2] != ctx.gpr[6]) {
    rt.unsupported(0x08B0E814u, 0x0035305Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1075u, 0x08B23960u>(ctx, &aot_mem); return;
    }
    goto L_08B0E818;
L_08B0E818:
    if (ctx.gpr[2] != ctx.gpr[6]) {
    rt.unsupported(0x08B0E81Cu, 0x0036305Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1076u, 0x08B23968u>(ctx, &aot_mem); return;
    }
    goto L_08B0E820;
L_08B0E820:
    if (ctx.gpr[2] != ctx.gpr[6]) {
    rt.unsupported(0x08B0E824u, 0x0037305Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1077u, 0x08B23970u>(ctx, &aot_mem); return;
    }
    goto L_08B0E828;
L_08B0E828:
    if (ctx.gpr[2] != ctx.gpr[6]) {
    rt.unsupported(0x08B0E82Cu, 0x0038305Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1078u, 0x08B23978u>(ctx, &aot_mem); return;
    }
    goto L_08B0E830;
L_08B0E830:
    if (ctx.gpr[2] != ctx.gpr[6]) {
    rt.unsupported(0x08B0E834u, 0x0039305Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1079u, 0x08B23980u>(ctx, &aot_mem); return;
    }
    goto L_08B0E838;
L_08B0E838:
    if (ctx.gpr[2] != ctx.gpr[6]) {
    rt.unsupported(0x08B0E83Cu, 0x0030315Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1080u, 0x08B23988u>(ctx, &aot_mem); return;
    }
    goto L_08B0E840;
L_08B0E840:
    if (ctx.gpr[2] != ctx.gpr[6]) {
    rt.unsupported(0x08B0E844u, 0x0031315Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1081u, 0x08B23990u>(ctx, &aot_mem); return;
    }
    goto L_08B0E848;
L_08B0E848:
    if (ctx.gpr[2] != ctx.gpr[6]) {
    rt.unsupported(0x08B0E84Cu, 0x0032315Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1082u, 0x08B23998u>(ctx, &aot_mem); return;
    }
    goto L_08B0E850;
L_08B0E850:
    if (ctx.gpr[2] != ctx.gpr[6]) {
    rt.unsupported(0x08B0E854u, 0x0033315Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1083u, 0x08B239A0u>(ctx, &aot_mem); return;
    }
    goto L_08B0E858;
L_08B0E858:
    if (ctx.gpr[2] != ctx.gpr[6]) {
    rt.unsupported(0x08B0E85Cu, 0x0034315Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1084u, 0x08B239A8u>(ctx, &aot_mem); return;
    }
    goto L_08B0E860;
L_08B0E860:
    if (ctx.gpr[2] != ctx.gpr[6]) {
    rt.unsupported(0x08B0E864u, 0x0035315Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1085u, 0x08B239B0u>(ctx, &aot_mem); return;
    }
    goto L_08B0E868;
L_08B0E868:
    if (ctx.gpr[2] != ctx.gpr[6]) {
    rt.unsupported(0x08B0E86Cu, 0x0036315Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1086u, 0x08B239B8u>(ctx, &aot_mem); return;
    }
    goto L_08B0E870;
L_08B0E870:
    if (ctx.gpr[2] != ctx.gpr[6]) {
    rt.unsupported(0x08B0E874u, 0x0037315Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1087u, 0x08B239C0u>(ctx, &aot_mem); return;
    }
    goto L_08B0E878;
L_08B0E878:
    if (ctx.gpr[2] != ctx.gpr[6]) {
    rt.unsupported(0x08B0E87Cu, 0x0038315Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1088u, 0x08B239C8u>(ctx, &aot_mem); return;
    }
    goto L_08B0E880;
L_08B0E880:
    if (ctx.gpr[2] != ctx.gpr[6]) {
    rt.unsupported(0x08B0E884u, 0x0039315Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1089u, 0x08B239D0u>(ctx, &aot_mem); return;
    }
    goto L_08B0E888;
L_08B0E888:
    if (ctx.gpr[2] != ctx.gpr[6]) {
    rt.unsupported(0x08B0E88Cu, 0x0030325Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1090u, 0x08B239D8u>(ctx, &aot_mem); return;
    }
    goto L_08B0E890;
L_08B0E890:
    if (ctx.gpr[2] != ctx.gpr[6]) {
    rt.unsupported(0x08B0E894u, 0x0033325Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1091u, 0x08B239E0u>(ctx, &aot_mem); return;
    }
    goto L_08B0E898;
L_08B0E898:
    rt.unsupported(0x08B0E898u, 0x43485453u, "unknown not lowered yet"); return;
L_08B0E8A0:
    rt.unsupported(0x08B0E8A0u, 0x43485453u, "unknown not lowered yet"); return;
L_08B0E8A8:
    rt.unsupported(0x08B0E8A8u, 0x43485453u, "unknown not lowered yet"); return;
L_08B0E8B0:
    rt.unsupported(0x08B0E8B0u, 0x43485453u, "unknown not lowered yet"); return;
L_08B0E8B8:
    if (ctx.gpr[2] != ctx.gpr[6]) {
    rt.unsupported(0x08B0E8BCu, 0x0031325Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1096u, 0x08B23A08u>(ctx, &aot_mem); return;
    }
    goto L_08B0E8C0;
L_08B0E8C0:
    if (ctx.gpr[2] != ctx.gpr[6]) {
    rt.unsupported(0x08B0E8C4u, 0x0032325Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1097u, 0x08B23A10u>(ctx, &aot_mem); return;
    }
    goto L_08B0E8C8;
L_08B0E8C8:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.lo = ctx.gpr[2];
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 435u, 0x08B2261Cu>(ctx, &aot_mem); return;
    }
    goto L_08B0E8D0;
L_08B0E8D0:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[8] = (ctx.lo);
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 108u, 0x08B20A20u>(ctx, &aot_mem); return;
    }
    goto L_08B0E8D8;
L_08B0E8D8:
    if (ctx.gpr[26] == ctx.gpr[31]) {
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[1]) >> 9u));
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 699u, 0x08B1F628u>(ctx, &aot_mem); return;
    }
    goto L_08B0E8E0;
L_08B0E8E0:
    ctx.gpr[31] = (ctx.gpr[10] ^ 17235u);
    rt.unsupported(0x08B0E8E4u, 0x00004D4Du, "special? not lowered yet"); return;
L_08B0E8E8:
    if (ctx.gpr[26] == ctx.gpr[31]) {
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[15]) >> 29u));
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 700u, 0x08B1F638u>(ctx, &aot_mem); return;
    }
    goto L_08B0E8F0;
L_08B0E8F0:
    rt.unsupported(0x08B0E8F4u, 0x00484349u, "control flow in delay slot"); return;
L_08B0E8F8:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B0E8FCu, 0x004E435Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 834u, 0x08B1FE14u>(ctx, &aot_mem); return;
    }
    goto L_08B0E900;
L_08B0E900:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B0E904u, 0x0052545Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 835u, 0x08B1FE1Cu>(ctx, &aot_mem); return;
    }
    goto L_08B0E908;
L_08B0E908:
    rt.unsupported(0x08B0E908u, 0x425F5453u, "unknown not lowered yet"); return;
L_08B0E910:
    rt.unsupported(0x08B0E910u, 0x4C5F5453u, "unknown not lowered yet"); return;
L_08B0E918:
    rt.unsupported(0x08B0E918u, 0x445F5453u, "unsupported CFC1 control register"); return;
    ctx.gpr[10] = (ctx.lo);
    goto L_08B0E920;
L_08B0E920:
    rt.unsupported(0x08B0E920u, 0x47414553u, "cop1? not lowered yet"); return;
L_08B0E928:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B0E92Cu, 0x0052464Du, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 969u, 0x08B23644u>(ctx, &aot_mem); return;
    }
    goto L_08B0E930;
L_08B0E930:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[16] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 837u, 0x08B1FE4Cu>(ctx, &aot_mem); return;
    }
    goto L_08B0E938;
L_08B0E938:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[17] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 838u, 0x08B1FE54u>(ctx, &aot_mem); return;
    }
    goto L_08B0E940;
L_08B0E940:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[18] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 840u, 0x08B1FE5Cu>(ctx, &aot_mem); return;
    }
    goto L_08B0E948;
L_08B0E948:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[19] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 841u, 0x08B1FE64u>(ctx, &aot_mem); return;
    }
    goto L_08B0E950;
L_08B0E950:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[20] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 842u, 0x08B1FE6Cu>(ctx, &aot_mem); return;
    }
    goto L_08B0E958;
L_08B0E958:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[21] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 843u, 0x08B1FE74u>(ctx, &aot_mem); return;
    }
    goto L_08B0E960;
L_08B0E960:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[22] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 845u, 0x08B1FE7Cu>(ctx, &aot_mem); return;
    }
    goto L_08B0E968;
L_08B0E968:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[23] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 846u, 0x08B1FE84u>(ctx, &aot_mem); return;
    }
    goto L_08B0E970;
L_08B0E970:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[24] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 847u, 0x08B1FE8Cu>(ctx, &aot_mem); return;
    }
    goto L_08B0E978;
L_08B0E978:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[25] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 848u, 0x08B1FE94u>(ctx, &aot_mem); return;
    }
    goto L_08B0E980;
L_08B0E980:
    rt.unsupported(0x08B0E984u, 0x0052464Cu, "control flow in delay slot"); return;
L_08B0E988:
    rt.unsupported(0x08B0E988u, 0x41525053u, "unknown not lowered yet"); return;
L_08B0E990:
    if (ctx.gpr[26] != ctx.gpr[31]) {
    rt.unsupported(0x08B0E994u, 0x00504145u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1123u, 0x08B23AE0u>(ctx, &aot_mem); return;
    }
    goto L_08B0E998;
L_08B0E998:
    rt.unsupported(0x08B0E998u, 0x415F5453u, "unknown not lowered yet"); return;
L_08B0E9A0:
    rt.unsupported(0x08B0E9A0u, 0x445F5453u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B0E9A4u, 0x00414D41u, "special? not lowered yet"); return;
L_08B0E9A8:
    if (ctx.gpr[2] == ctx.gpr[15]) {
    rt.memory().memory_barrier();
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 856u, 0x08B232ECu>(ctx, &aot_mem); return;
    }
    goto L_08B0E9B0;
L_08B0E9B0:
    if (ctx.gpr[18] == ctx.gpr[16]) {
    rt.unsupported(0x08B0E9B4u, 0x0000315Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1127u, 0x08B23B00u>(ctx, &aot_mem); return;
    }
    goto L_08B0E9B8;
L_08B0E9B8:
    if (ctx.gpr[18] == ctx.gpr[16]) {
    rt.unsupported(0x08B0E9BCu, 0x0000325Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1128u, 0x08B23B08u>(ctx, &aot_mem); return;
    }
    goto L_08B0E9C0;
L_08B0E9C0:
    if (ctx.gpr[18] == ctx.gpr[16]) {
    rt.unsupported(0x08B0E9C4u, 0x0000335Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1129u, 0x08B23B10u>(ctx, &aot_mem); return;
    }
    goto L_08B0E9C8;
L_08B0E9C8:
    if (ctx.gpr[18] == ctx.gpr[16]) {
    rt.unsupported(0x08B0E9CCu, 0x0000345Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1130u, 0x08B23B18u>(ctx, &aot_mem); return;
    }
    goto L_08B0E9D0;
L_08B0E9D0:
    if (ctx.gpr[18] == ctx.gpr[16]) {
    rt.unsupported(0x08B0E9D4u, 0x0000355Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1131u, 0x08B23B20u>(ctx, &aot_mem); return;
    }
    goto L_08B0E9D8;
L_08B0E9D8:
    if (ctx.gpr[18] == ctx.gpr[16]) {
    rt.unsupported(0x08B0E9DCu, 0x0000365Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1132u, 0x08B23B28u>(ctx, &aot_mem); return;
    }
    goto L_08B0E9E0;
L_08B0E9E0:
    if (ctx.gpr[18] == ctx.gpr[16]) {
    rt.unsupported(0x08B0E9E4u, 0x0000375Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1133u, 0x08B23B30u>(ctx, &aot_mem); return;
    }
    goto L_08B0E9E8;
L_08B0E9E8:
    if (ctx.gpr[18] == ctx.gpr[16]) {
    rt.unsupported(0x08B0E9ECu, 0x0000385Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1134u, 0x08B23B38u>(ctx, &aot_mem); return;
    }
    goto L_08B0E9F0;
L_08B0E9F0:
    if (ctx.gpr[18] == ctx.gpr[16]) {
    rt.unsupported(0x08B0E9F4u, 0x0000395Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1135u, 0x08B23B40u>(ctx, &aot_mem); return;
    }
    goto L_08B0E9F8;
L_08B0E9F8:
    if (ctx.gpr[18] == ctx.gpr[16]) {
    rt.unsupported(0x08B0E9FCu, 0x0030315Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1136u, 0x08B23B48u>(ctx, &aot_mem); return;
    }
    goto L_08B0EA00;
L_08B0EA00:
    if (ctx.gpr[18] == ctx.gpr[16]) {
    rt.unsupported(0x08B0EA04u, 0x0031315Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1137u, 0x08B23B50u>(ctx, &aot_mem); return;
    }
    goto L_08B0EA08;
L_08B0EA08:
    if (ctx.gpr[18] == ctx.gpr[16]) {
    rt.unsupported(0x08B0EA0Cu, 0x0032315Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1138u, 0x08B23B58u>(ctx, &aot_mem); return;
    }
    goto L_08B0EA10;
L_08B0EA10:
    if (ctx.gpr[18] == ctx.gpr[16]) {
    rt.unsupported(0x08B0EA14u, 0x0033315Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1139u, 0x08B23B60u>(ctx, &aot_mem); return;
    }
    goto L_08B0EA18;
L_08B0EA18:
    if (ctx.gpr[18] == ctx.gpr[16]) {
    rt.unsupported(0x08B0EA1Cu, 0x0034315Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1140u, 0x08B23B68u>(ctx, &aot_mem); return;
    }
    goto L_08B0EA20;
L_08B0EA20:
    if (ctx.gpr[18] == ctx.gpr[16]) {
    rt.unsupported(0x08B0EA24u, 0x0035315Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1141u, 0x08B23B70u>(ctx, &aot_mem); return;
    }
    goto L_08B0EA28;
L_08B0EA28:
    if (ctx.gpr[26] == ctx.gpr[1]) {
    rt.unsupported(0x08B0EA2Cu, 0x00000045u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 114u, 0x08B20B38u>(ctx, &aot_mem); return;
    }
    goto L_08B0EA30;
L_08B0EA30:
    rt.unsupported(0x08B0EA30u, 0x4654554Fu, "cop1? not lowered yet"); return;
L_08B0EA38:
    rt.unsupported(0x08B0EA38u, 0x4654554Fu, "cop1? not lowered yet"); return;
L_08B0EA3C:
    ctx.gpr[16] = (ctx.gpr[17] & 9567u);
    rt.unsupported(0x08B0EA40u, 0x00000069u, "special? not lowered yet"); return;
L_08B0EA44:
    ctx.gpr[4] = (ctx.gpr[19] ^ 9504u);
    rt.unsupported(0x08B0EA48u, 0x00642530u, "special? not lowered yet"); return;
L_08B0EA4C:
    ctx.gpr[4] = (ctx.gpr[19] ^ 9504u);
    ctx.gpr[12] = (0u | 0u);
    goto L_08B0EA54;
L_08B0EA54:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<37u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    rt.unsupported(0x08B0EA58u, 0x20732520u, "unknown not lowered yet"); return;
L_08B0EA60:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B0EA64u, 0x004F4F5Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 860u, 0x08B1FF7Cu>(ctx, &aot_mem); return;
    }
    goto L_08B0EA68;
L_08B0EA68:
    ctx.gpr[5] = (ctx.gpr[17] < static_cast<std::uint32_t>(8224) ? 1u : 0u);
    (void)(ctx.gpr[9] + static_cast<std::uint32_t>(26162));
    ctx.gpr[5] = (ctx.gpr[17] < static_cast<std::uint32_t>(8307) ? 1u : 0u);
    rt.unsupported(0x08B0EA74u, 0x00006632u, "special? not lowered yet"); return;
L_08B0EA78:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<37u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    (void)(ctx.gpr[9] + static_cast<std::uint32_t>(9509));
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<36u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<115u, 1u>(vfpu_d); }
    ctx.gpr[4] = (0u | 0u);
    goto L_08B0EA88;
L_08B0EA88:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<37u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    rt.unsupported(0x08B0EA8Cu, 0x732520DBu, "unknown not lowered yet"); return;
L_08B0EAAC:
    ctx.gpr[12] = (0u | 0u);
    goto L_08B0EAB0;
L_08B0EAB0:
    ctx.execute_vfpu_vhdp(37u, 46u, 50u, 1u);
    // nop
    goto L_08B0EAB8;
L_08B0EAB8:
    ctx.gpr[5] = (ctx.gpr[9] + static_cast<std::uint32_t>(25637));
    // nop
    goto L_08B0EAC0;
L_08B0EAC0:
    ctx.gpr[12] = (ctx.gpr[6] | ctx.gpr[27]);
    goto L_08B0EAC4;
L_08B0EAC4:
    ctx.gpr[14] = (ctx.gpr[17] & 9508u);
    (void)(0u ^ 0u);
    // nop
    rt.unsupported(0x08B0EAD4u, 0x088495B8u, "control flow in delay slot"); return;
L_08B0EB68:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<115u, 1u>(vfpu_d); }
    rt.unsupported(0x08B0EB6Cu, 0x20676E69u, "unknown not lowered yet"); return;
L_08B0EB84:
    rt.unsupported(0x08B0EB84u, 0x72617473u, "unknown not lowered yet"); return;
L_08B0EB94:
    rt.unsupported(0x08B0EB98u, 0x52494654u, "control flow in delay slot"); return;
L_08B0EB9C:
    rt.unsupported(0x08B0EB9Cu, 0x00000045u, "special? not lowered yet"); return;
L_08B0EBA8:
    rt.unsupported(0x08B0EBA8u, 0x746C756Du, "unknown not lowered yet"); return;
L_08B0EBBC:
    rt.unsupported(0x08B0EBBCu, 0x6E6B6E55u, "vfpu3 not lowered yet"); return;
L_08B0EC4C:
    rt.unsupported(0x08B0EC50u, 0x08852C04u, "control flow in delay slot"); return;
L_08B0ED78:
    rt.unsupported(0x08B0ED7Cu, 0x50204445u, "control flow in delay slot"); return;
L_08B0ED80:
    rt.unsupported(0x08B0ED80u, 0x4F59414Cu, "unknown not lowered yet"); return;
L_08B0EE80:
    rt.unsupported(0x08B0EE80u, 0x74726170u, "unknown not lowered yet"); return;
L_08B0EE8C:
    rt.unsupported(0x08B0EE8Cu, 0x61697274u, "vfpu0 not lowered yet"); return;
L_08B0EE98:
    rt.unsupported(0x08B0EE98u, 0x61697274u, "vfpu0 not lowered yet"); return;
L_08B0EEA4:
    rt.unsupported(0x08B0EEA4u, 0x00647568u, "special? not lowered yet"); return;
L_08B0EEA8:
    ctx.execute_vfpu_vscl_ct<115u, 105u, 116u, 1u>();
    rt.unsupported(0x08B0EEACu, 0x0036314Du, "special? not lowered yet"); return;
L_08B0EEB8:
    rt.unsupported(0x08B0EEB8u, 0x4B434F4Cu, "cop2/vfpu not lowered yet"); return;
L_08B0EEC8:
    rt.unsupported(0x08B0EEC8u, 0x636E6F63u, "vfpu0 not lowered yet"); return;
L_08B0EED0:
    ctx.execute_vfpu_vscl_ct<102u, 111u, 114u, 1u>();
    ctx.gpr[12] = (ctx.gpr[3] + ctx.gpr[8]);
    goto L_08B0EED8;
L_08B0EED8:
    ctx.execute_vfpu_vscl_ct<102u, 111u, 114u, 1u>();
    rt.unsupported(0x08B0EEDCu, 0x69686361u, "unknown not lowered yet"); return;
L_08B0EEE4:
    rt.unsupported(0x08B0EEE4u, 0x6E746567u, "vfpu3 not lowered yet"); return;
L_08B0EEEC:
    rt.unsupported(0x08B0EEECu, 0x6E746573u, "vfpu3 not lowered yet"); return;
L_08B0EEF4:
    rt.unsupported(0x08B0EEF4u, 0x74726F73u, "unknown not lowered yet"); return;
L_08B0EEFC:
    ctx.execute_vfpu_vscl_ct<105u, 110u, 115u, 1u>();
    rt.unsupported(0x08B0EF00u, 0x00007472u, "special? not lowered yet"); return;
L_08B0EF04:
    ctx.execute_vfpu_compare3(114u, 101u, 109u, 1u, 6u);
    rt.unsupported(0x08B0EF08u, 0x00006576u, "special? not lowered yet"); return;
L_08B0EF0C:
    // nop
    goto L_08B0EF10;
L_08B0EF10:
    ctx.execute_vfpu_vcmp_ct<97u, 98u, 1u, 4u>();
    ctx.execute_vfpu_compare3(101u, 32u, 99u, 1u, 6u);
    rt.unsupported(0x08B0EF18u, 0x6961746Eu, "unknown not lowered yet"); return;
L_08B0EF2C:
    rt.unsupported(0x08B0EF2Cu, 0x61766E69u, "vfpu0 not lowered yet"); return;
L_08B0EF50:
    ctx.execute_vfpu_vcmp_ct<97u, 98u, 1u, 4u>();
    (void)(0u | 0u);
    rt.unsupported(0x08B0EF58u, 0x00006277u, "special? not lowered yet"); return;
L_08B0EF74:
    rt.unsupported(0x08B0EF74u, 0x4F525245u, "unknown not lowered yet"); return;
L_08B0EF8C:
    if (0u == 0u) (void)(0u);
    rt.unsupported(0x08B0EF90u, 0x726F6D65u, "unknown not lowered yet"); return;
L_08B0EF98:
    rt.unsupported(0x08B0EF98u, 0x43534944u, "unknown not lowered yet"); return;
L_08B0EFA4:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B0EFA8u, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B0EFACu, 0x432F5249u, "unknown not lowered yet"); return;
L_08B0EFB8:
    rt.unsupported(0x08B0EFB8u, 0x4D41472Fu, "unknown not lowered yet"); return;
L_08B0EFC4:
    rt.unsupported(0x08B0EFC4u, 0x6E756843u, "vfpu3 not lowered yet"); return;
L_08B0F008:
    rt.unsupported(0x08B0F008u, 0x006E6176u, "special? not lowered yet"); return;
L_08B0F020:
    ctx.execute_vfpu_vscl_ct<126u, 99u, 78u, 1u>();
    rt.unsupported(0x08B0F024u, 0x73655374u, "unknown not lowered yet"); return;
L_08B0F030:
    rt.unsupported(0x08B0F030u, 0x7473694Cu, "unknown not lowered yet"); return;
L_08B0F044:
    rt.unsupported(0x08B0F044u, 0x206F6F54u, "unknown not lowered yet"); return;
L_08B0F074:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.execute_vfpu_compare3(32u, 84u, 111u, 1u, 6u);
    rt.unsupported(0x08B0F084u, 0x6E616D20u, "vfpu3 not lowered yet"); return;
L_08B0F0C8:
    rt.unsupported(0x08B0F0C8u, 0x6E6E6F43u, "vfpu3 not lowered yet"); return;
L_08B0F0E4:
    rt.unsupported(0x08B0F0E4u, 0x74654E63u, "unknown not lowered yet"); return;
L_08B0F100:
    ctx.gpr[12] = (0u | ctx.gpr[10]);
    goto L_08B0F104;
L_08B0F104:
    ctx.execute_vfpu_vscl_ct<65u, 116u, 116u, 1u>();
    rt.unsupported(0x08B0F108u, 0x2074706Du, "unknown not lowered yet"); return;
L_08B0F12C:
    ctx.execute_vfpu_vhdp(111u, 110u, 32u, 1u);
    ctx.execute_vfpu_vscl_ct<97u, 105u, 108u, 1u>();
    ctx.gpr[5] = (0u & ctx.gpr[10]);
    goto L_08B0F138;
L_08B0F138:
    rt.unsupported(0x08B0F138u, 0x706F7244u, "unknown not lowered yet"); return;
L_08B0F168:
    ctx.execute_vfpu_compare3(65u, 100u, 104u, 1u, 6u);
    ctx.execute_vfpu_compare3(99u, 32u, 67u, 1u, 6u);
    rt.unsupported(0x08B0F170u, 0x63656E6Eu, "vfpu0 not lowered yet"); return;
L_08B0F1B0:
    ctx.execute_vfpu_compare3(65u, 100u, 104u, 1u, 6u);
    ctx.execute_vfpu_compare3(99u, 32u, 67u, 1u, 6u);
    rt.unsupported(0x08B0F1B8u, 0x63656E6Eu, "vfpu0 not lowered yet"); return;
L_08B0F1F0:
    rt.unsupported(0x08B0F1F0u, 0x76506576u, "unknown not lowered yet"); return;
L_08B0F1FC:
    rt.unsupported(0x08B0F1FCu, 0x004B4341u, "special? not lowered yet"); return;
L_08B0F200:
    rt.unsupported(0x08B0F200u, 0x4F464E49u, "unknown not lowered yet"); return;
L_08B0F214:
    rt.unsupported(0x08B0F214u, 0x203D2078u, "unknown not lowered yet"); return;
L_08B0F230:
    rt.unsupported(0x08B0F230u, 0x6E69616Du, "vfpu3 not lowered yet"); return;
L_08B0F280:
    ctx.gpr[14] = (ctx.gpr[9] & 9504u);
    rt.unsupported(0x08B0F284u, 0x70202066u, "unknown not lowered yet"); return;
L_08B0F2A0:
    ctx.execute_vfpu_vscl_ct<119u, 104u, 101u, 1u>();
    ctx.execute_vfpu_vhdp(108u, 95u, 114u, 1u);
    ctx.execute_vfpu_vminmax(95u, 100u, 117u, 1u, false);
    ctx.gpr[15] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B0F2B0;
L_08B0F2B0:
    ctx.execute_vfpu_vscl_ct<119u, 104u, 101u, 1u>();
    ctx.execute_vfpu_vminmax(108u, 95u, 114u, 1u, false);
    ctx.execute_vfpu_vminmax(95u, 100u, 117u, 1u, false);
    ctx.gpr[15] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B0F2C0;
L_08B0F2C0:
    ctx.execute_vfpu_vscl_ct<119u, 104u, 101u, 1u>();
    rt.unsupported(0x08B0F2C4u, 0x62725F6Cu, "vfpu0 not lowered yet"); return;
L_08B0F2D0:
    ctx.execute_vfpu_vscl_ct<119u, 104u, 101u, 1u>();
    ctx.execute_vfpu_vhdp(108u, 95u, 108u, 1u);
    ctx.execute_vfpu_vminmax(95u, 100u, 117u, 1u, false);
    ctx.gpr[15] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B0F2E0;
L_08B0F2E0:
    ctx.execute_vfpu_vscl_ct<119u, 104u, 101u, 1u>();
    ctx.execute_vfpu_vminmax(108u, 95u, 108u, 1u, false);
    ctx.execute_vfpu_vminmax(95u, 100u, 117u, 1u, false);
    ctx.gpr[15] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B0F2F0;
L_08B0F2F0:
    ctx.execute_vfpu_vscl_ct<119u, 104u, 101u, 1u>();
    rt.unsupported(0x08B0F2F4u, 0x626C5F6Cu, "vfpu0 not lowered yet"); return;
L_08B0F300:
    rt.unsupported(0x08B0F300u, 0x706D7562u, "unknown not lowered yet"); return;
L_08B0F314:
    rt.unsupported(0x08B0F314u, 0x6E6E6F62u, "vfpu3 not lowered yet"); return;
L_08B0F324:
    rt.unsupported(0x08B0F324u, 0x676E6977u, "vfpu1 not lowered yet"); return;
L_08B0F330:
    rt.unsupported(0x08B0F330u, 0x00000079u, "special? not lowered yet"); return;
L_08B0F334:
    rt.unsupported(0x08B0F334u, 0x676E6977u, "vfpu1 not lowered yet"); return;
L_08B0F340:
    rt.unsupported(0x08B0F340u, 0x00000079u, "special? not lowered yet"); return;
L_08B0F344:
    rt.unsupported(0x08B0F344u, 0x726F6F64u, "unknown not lowered yet"); return;
L_08B0F350:
    rt.unsupported(0x08B0F350u, 0x00000079u, "special? not lowered yet"); return;
L_08B0F354:
    rt.unsupported(0x08B0F354u, 0x726F6F64u, "unknown not lowered yet"); return;
L_08B0F360:
    rt.unsupported(0x08B0F360u, 0x00000079u, "special? not lowered yet"); return;
L_08B0F364:
    rt.unsupported(0x08B0F364u, 0x676E6977u, "vfpu1 not lowered yet"); return;
L_08B0F370:
    rt.unsupported(0x08B0F370u, 0x00000079u, "special? not lowered yet"); return;
L_08B0F374:
    rt.unsupported(0x08B0F374u, 0x676E6977u, "vfpu1 not lowered yet"); return;
L_08B0F380:
    rt.unsupported(0x08B0F380u, 0x00000079u, "special? not lowered yet"); return;
L_08B0F384:
    rt.unsupported(0x08B0F384u, 0x726F6F64u, "unknown not lowered yet"); return;
L_08B0F390:
    rt.unsupported(0x08B0F390u, 0x00000079u, "special? not lowered yet"); return;
L_08B0F394:
    rt.unsupported(0x08B0F394u, 0x726F6F64u, "unknown not lowered yet"); return;
L_08B0F3A0:
    rt.unsupported(0x08B0F3A0u, 0x00000079u, "special? not lowered yet"); return;
L_08B0F3A4:
    rt.unsupported(0x08B0F3A4u, 0x746F6F62u, "unknown not lowered yet"); return;
L_08B0F3B0:
    rt.unsupported(0x08B0F3B0u, 0x706D7562u, "unknown not lowered yet"); return;
L_08B0F3C0:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<105u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<119u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<115u, 99u, 114u, 1u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<95u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<101u, 1u>(vfpu_d); }
    rt.unsupported(0x08B0F3CCu, 0x796D6D75u, "unknown not lowered yet"); return;
L_08B0F3D4:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B0F3D8u, 0x6E6F7266u, "vfpu3 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 22u, 0x08B28998u>(ctx, &aot_mem); return;
    }
    goto L_08B0F3DC;
L_08B0F3DC:
    rt.unsupported(0x08B0F3DCu, 0x61657374u, "vfpu0 not lowered yet"); return;
L_08B0F3E4:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B0F3E8u, 0x6B636162u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 23u, 0x08B289A8u>(ctx, &aot_mem); return;
    }
    goto L_08B0F3EC;
L_08B0F3EC:
    rt.unsupported(0x08B0F3ECu, 0x74616573u, "unknown not lowered yet"); return;
L_08B0F3F4:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<104u, 1u>(vfpu_d); }
    rt.unsupported(0x08B0F3F8u, 0x6867696Cu, "unknown not lowered yet"); return;
L_08B0F400:
    ctx.execute_vfpu_vcmp_ct<97u, 105u, 1u, 4u>();
    rt.unsupported(0x08B0F404u, 0x6867696Cu, "unknown not lowered yet"); return;
L_08B0F40C:
    rt.unsupported(0x08B0F40Cu, 0x61687865u, "vfpu0 not lowered yet"); return;
L_08B0F414:
    rt.unsupported(0x08B0F414u, 0x72747865u, "unknown not lowered yet"); return;
L_08B0F41C:
    rt.unsupported(0x08B0F41Cu, 0x72747865u, "unknown not lowered yet"); return;
L_08B0F424:
    rt.unsupported(0x08B0F424u, 0x72747865u, "unknown not lowered yet"); return;
L_08B0F42C:
    rt.unsupported(0x08B0F42Cu, 0x72747865u, "unknown not lowered yet"); return;
L_08B0F434:
    rt.unsupported(0x08B0F434u, 0x72747865u, "unknown not lowered yet"); return;
L_08B0F43C:
    rt.unsupported(0x08B0F43Cu, 0x72747865u, "unknown not lowered yet"); return;
L_08B0F444:
    rt.unsupported(0x08B0F444u, 0x74616F62u, "unknown not lowered yet"); return;
L_08B0F454:
    rt.unsupported(0x08B0F454u, 0x74616F62u, "unknown not lowered yet"); return;
L_08B0F464:
    rt.unsupported(0x08B0F464u, 0x74616F62u, "unknown not lowered yet"); return;
L_08B0F474:
    rt.unsupported(0x08B0F474u, 0x74616F62u, "unknown not lowered yet"); return;
L_08B0F484:
    rt.unsupported(0x08B0F484u, 0x74616F62u, "unknown not lowered yet"); return;
L_08B0F498:
    rt.unsupported(0x08B0F498u, 0x74616F62u, "unknown not lowered yet"); return;
L_08B0F4AC:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<105u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<119u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<115u, 99u, 114u, 1u>();
    ctx.gpr[13] = (0u | 0u);
    goto L_08B0F4B8;
L_08B0F4B8:
    rt.unsupported(0x08B0F4B8u, 0x726F6F64u, "unknown not lowered yet"); return;
L_08B0F4C8:
    rt.unsupported(0x08B0F4C8u, 0x726F6F64u, "unknown not lowered yet"); return;
L_08B0F4D8:
    rt.unsupported(0x08B0F4D8u, 0x6867696Cu, "unknown not lowered yet"); return;
L_08B0F4E4:
    rt.unsupported(0x08B0F4E4u, 0x6867696Cu, "unknown not lowered yet"); return;
L_08B0F4F0:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B0F4F4u, 0x7466656Cu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 27u, 0x08B28AB4u>(ctx, &aot_mem); return;
    }
    goto L_08B0F4F8;
L_08B0F4F8:
    rt.unsupported(0x08B0F4F8u, 0x746E655Fu, "unknown not lowered yet"); return;
L_08B0F500:
    rt.unsupported(0x08B0F504u, 0x5F64696Du, "control flow in delay slot"); return;
L_08B0F508:
    rt.unsupported(0x08B0F508u, 0x72746E65u, "unknown not lowered yet"); return;
L_08B0F510:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B0F514u, 0x68676972u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 29u, 0x08B28AD4u>(ctx, &aot_mem); return;
    }
    goto L_08B0F518;
L_08B0F518:
    rt.unsupported(0x08B0F518u, 0x6E655F74u, "vfpu3 not lowered yet"); return;
L_08B0F520:
    rt.unsupported(0x08B0F520u, 0x726F6F64u, "unknown not lowered yet"); return;
L_08B0F534:
    rt.unsupported(0x08B0F534u, 0x726F6F64u, "unknown not lowered yet"); return;
L_08B0F544:
    rt.unsupported(0x08B0F544u, 0x706D6172u, "unknown not lowered yet"); return;
L_08B0F558:
    rt.unsupported(0x08B0F558u, 0x706D6172u, "unknown not lowered yet"); return;
L_08B0F568:
    ctx.execute_vfpu_vminmax(99u, 104u, 105u, 1u, false);
    ctx.execute_vfpu_vhdp(95u, 108u, 101u, 1u);
    rt.unsupported(0x08B0F570u, 0x00000074u, "special? not lowered yet"); return;
L_08B0F574:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B0F578u, 0x6E696F70u, "vfpu3 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 30u, 0x08B28B38u>(ctx, &aot_mem); return;
    }
    goto L_08B0F57C;
L_08B0F57C:
    rt.unsupported(0x08B0F57Cu, 0x00000074u, "special? not lowered yet"); return;
L_08B0F580:
    ctx.gpr[18] = (ctx.gpr[11] & 24931u);
    ctx.execute_vfpu_vminmax(95u, 100u, 117u, 1u, false);
    ctx.gpr[15] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B0F58C;
L_08B0F58C:
    ctx.gpr[18] = (ctx.gpr[19] & 24931u);
    ctx.execute_vfpu_vminmax(95u, 100u, 117u, 1u, false);
    ctx.gpr[15] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B0F598;
L_08B0F598:
    ctx.gpr[18] = (ctx.gpr[27] & 24931u);
    ctx.execute_vfpu_vminmax(95u, 100u, 117u, 1u, false);
    ctx.gpr[15] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B0F5A4;
L_08B0F5A4:
    ctx.gpr[18] = (ctx.gpr[3] | 24931u);
    ctx.execute_vfpu_vminmax(95u, 100u, 117u, 1u, false);
    ctx.gpr[15] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B0F5B0;
L_08B0F5B0:
    rt.unsupported(0x08B0F5B0u, 0x73616863u, "unknown not lowered yet"); return;
L_08B0F5BC:
    rt.unsupported(0x08B0F5BCu, 0x00000079u, "special? not lowered yet"); return;
L_08B0F5C0:
    rt.unsupported(0x08B0F5C0u, 0x72706F74u, "unknown not lowered yet"); return;
L_08B0F5CC:
    rt.unsupported(0x08B0F5CCu, 0x6B636162u, "unknown not lowered yet"); return;
L_08B0F5D8:
    ctx.execute_vfpu_vcmp_ct<97u, 105u, 1u, 4u>();
    // nop
    goto L_08B0F5E0;
L_08B0F5E0:
    rt.unsupported(0x08B0F5E0u, 0x6B706F74u, "unknown not lowered yet"); return;
L_08B0F5E8:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<107u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<105u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<115u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vhdp(95u, 108u, 101u, 1u);
    rt.unsupported(0x08B0F5F0u, 0x00000074u, "special? not lowered yet"); return;
L_08B0F5F4:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<107u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<105u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<115u, 1u>(vfpu_d); }
    rt.unsupported(0x08B0F5F8u, 0x6769725Fu, "vfpu1 not lowered yet"); return;
L_08B0F600:
    ctx.execute_vfpu_vscl_ct<119u, 104u, 101u, 1u>();
    rt.unsupported(0x08B0F604u, 0x72665F6Cu, "unknown not lowered yet"); return;
L_08B0F610:
    rt.unsupported(0x08B0F610u, 0x00000079u, "special? not lowered yet"); return;
L_08B0F614:
    ctx.execute_vfpu_vscl_ct<119u, 104u, 101u, 1u>();
    ctx.execute_vfpu_vscl_ct<108u, 95u, 114u, 1u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<114u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<95u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<97u, 1u>(vfpu_d); }
    rt.unsupported(0x08B0F620u, 0x796D6D75u, "unknown not lowered yet"); return;
L_08B0F628:
    rt.unsupported(0x08B0F628u, 0x6867696Cu, "unknown not lowered yet"); return;
L_08B0F638:
    rt.unsupported(0x08B0F638u, 0x6867696Cu, "unknown not lowered yet"); return;
L_08B0F644:
    rt.unsupported(0x08B0F644u, 0x6867696Cu, "unknown not lowered yet"); return;
L_08B0F650:
    rt.unsupported(0x08B0F650u, 0x6B726F66u, "unknown not lowered yet"); return;
L_08B0F65C:
    rt.unsupported(0x08B0F65Cu, 0x6B726F66u, "unknown not lowered yet"); return;
L_08B0F668:
    ctx.execute_vfpu_vscl_ct<119u, 104u, 101u, 1u>();
    rt.unsupported(0x08B0F66Cu, 0x72665F6Cu, "unknown not lowered yet"); return;
L_08B0F674:
    ctx.execute_vfpu_vscl_ct<119u, 104u, 101u, 1u>();
    ctx.execute_vfpu_vscl_ct<108u, 95u, 114u, 1u>();
    ctx.gpr[14] = (0u + 0u);
    goto L_08B0F680;
L_08B0F680:
    rt.unsupported(0x08B0F680u, 0x6764756Du, "vfpu1 not lowered yet"); return;
L_08B0F68C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<104u, 1u>(vfpu_d); }
    rt.unsupported(0x08B0F690u, 0x6162656Cu, "vfpu0 not lowered yet"); return;
L_08B0F698:
    rt.unsupported(0x08B0F698u, 0x494C4F50u, "cop2/vfpu not lowered yet"); return;
L_08B0F6A0:
    ctx.execute_vfpu_vcmp_ct<117u, 108u, 1u, 14u>();
    // nop
    ctx.gpr[16] = (ctx.gpr[9] & 28271u);
    // nop
    ctx.gpr[16] = (ctx.gpr[17] & 28271u);
    // nop
    ctx.gpr[16] = (ctx.gpr[25] & 28271u);
    // nop
    ctx.gpr[16] = (ctx.gpr[1] | 28271u);
    // nop
    ctx.gpr[16] = (ctx.gpr[9] | 28271u);
    // nop
    ctx.gpr[16] = (ctx.gpr[17] | 28271u);
    // nop
    // nop
    goto L_08B0F6DC;
L_08B0F6DC:
    rt.unsupported(0x08B0F6DCu, 0x46454552u, "cop1? not lowered yet"); return;
L_08B0F6E4:
    rt.unsupported(0x08B0F6E4u, 0x0069685Fu, "special? not lowered yet"); return;
L_08B0F6E8:
    rt.unsupported(0x08B0F6E8u, 0x72747865u, "unknown not lowered yet"); return;
L_08B0F6F0:
    rt.unsupported(0x08B0F6F0u, 0x006F6C5Fu, "special? not lowered yet"); return;
L_08B0F6F4:
    ctx.execute_vfpu_compare3(95u, 118u, 108u, 1u, 6u);
    // nop
    goto L_08B0F6FC;
L_08B0F6FC:
    rt.unsupported(0x08B0F6FCu, 0x72616572u, "unknown not lowered yet"); return;
L_08B0F708:
    rt.unsupported(0x08B0F708u, 0x74616F62u, "unknown not lowered yet"); return;
L_08B0F710:
    ctx.execute_vfpu_vminmax(95u, 100u, 97u, 1u, false);
    // nop
    goto L_08B0F718;
L_08B0F718:
    rt.unsupported(0x08B0F718u, 0x006B6F5Fu, "special? not lowered yet"); return;
L_08B0F71C:
    rt.unsupported(0x08B0F71Cu, 0x68655643u, "unknown not lowered yet"); return;
L_08B0F730:
    ctx.execute_vfpu_compare3(100u, 101u, 99u, 1u, 6u);
    rt.unsupported(0x08B0F734u, 0x735F6564u, "unknown not lowered yet"); return;
L_08B0F744:
    rt.unsupported(0x08B0F744u, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B0F778:
    ctx.execute_vfpu_vminmax(67u, 68u, 117u, 1u, false);
    ctx.gpr[15] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 0u : 0u);
    rt.unsupported(0x08B0F780u, 0x726F6D65u, "unknown not lowered yet"); return;
L_08B0F788:
    ctx.gpr[12] = (0u | 0u);
    // nop
    rt.unsupported(0x08B0F794u, 0x08879F44u, "control flow in delay slot"); return;
L_08B0F828:
    ctx.gpr[29] = (15626u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    rt.unsupported(0x08B0F85Cu, 0x7661530Au, "unknown not lowered yet"); return;
L_08B0F874:
    ctx.execute_vfpu_vcmp_ct<105u, 108u, 1u, 7u>();
    rt.unsupported(0x08B0F878u, 0x79727420u, "unknown not lowered yet"); return;
L_08B0F8B4:
    ctx.execute_vfpu_vscl_ct<68u, 101u, 108u, 1u>();
    rt.unsupported(0x08B0F8B8u, 0x20646574u, "unknown not lowered yet"); return;
L_08B0FD88:
    rt.unsupported(0x08B0FD88u, 0x746E6F63u, "unknown not lowered yet"); return;
L_08B0FDA4:
    rt.unsupported(0x08B0FDA4u, 0x636E7566u, "vfpu0 not lowered yet"); return;
L_08B0FDC8:
    rt.unsupported(0x08B0FDC8u, 0x736E6F63u, "unknown not lowered yet"); return;
L_08B0FDE0:
    ctx.execute_vfpu_vscl_ct<99u, 111u, 100u, 1u>();
    rt.unsupported(0x08B0FDE4u, 0x7A697320u, "unknown not lowered yet"); return;
L_08B0FE78:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B0FE88u, 0x4143202Au, "unknown not lowered yet"); return;
L_08B0FE9C:
    rt.unsupported(0x08B0FE9Cu, 0x20214445u, "unknown not lowered yet"); return;
L_08B0FEB4:
    rt.unsupported(0x08B0FEB4u, 0x20444C4Fu, "unknown not lowered yet"); return;
L_08B0FEC4:
    ctx.gpr[14] = (ctx.gpr[17] < static_cast<std::uint32_t>(11844) ? 1u : 0u);
    if (0u == 0u) (void)(0u);
    goto L_08B0FECC;
L_08B0FECC:
    rt.unsupported(0x08B0FECCu, 0x6E6B6E55u, "vfpu3 not lowered yet"); return;
L_08B0FEF8:
    rt.unsupported(0x08B0FEF8u, 0x74696157u, "unknown not lowered yet"); return;
L_08B0FF14:
    rt.unsupported(0x08B0FF14u, 0x20444C4Fu, "unknown not lowered yet"); return;
L_08B0FF30:
    rt.unsupported(0x08B0FF30u, 0x7020676Eu, "unknown not lowered yet"); return;
L_08B0FF50:
    rt.unsupported(0x08B0FF50u, 0x2074754Fu, "unknown not lowered yet"); return;
L_08B0FF7C:
    rt.unsupported(0x08B0FF7Cu, 0x6B63614Au, "unknown not lowered yet"); return;
L_08B0FF8C:
    ctx.execute_vfpu_vcmp_ct<111u, 108u, 1u, 6u>();
    if (ctx.gpr[1] == 0u) {
    rt.unsupported(0x08B0FF94u, 0x4F206465u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 405u, 0x08B2DD50u>(ctx, &aot_mem); return;
    }
    goto L_08B0FF98;
L_08B0FF98:
    rt.unsupported(0x08B0FF98u, 0x63656A62u, "vfpu0 not lowered yet"); return;
L_08B0FFA8:
    rt.unsupported(0x08B0FFA8u, 0x6A726143u, "unknown not lowered yet"); return;
L_08B0FFCC:
    rt.unsupported(0x08B0FFCCu, 0x6320794Du, "vfpu0 not lowered yet"); return;
L_08B0FFF4:
    rt.unsupported(0x08B0FFF4u, 0x6320654Du, "vfpu0 not lowered yet"); return;
}

void recomp_unit_0194(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0194_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_194(Runtime &runtime) {
    runtime.register_generated_unit(194u, 0x08B0C000u, 16384u, &recomp_unit_0194, &recomp_unit_0194_entry);
    runtime.register_function(0x08B0C000u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C010u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C024u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C02Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C03Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C04Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C054u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C05Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C070u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C080u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C08Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C09Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C0A8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C0B0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C0B8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C0C0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C0C8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C0D0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C0D8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C0E4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C0F4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C108u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C120u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C128u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C12Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C134u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C13Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C150u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C164u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C178u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C184u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C188u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C190u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C1A0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C1B4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C1DCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C1E4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C214u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C224u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C230u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C238u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C244u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C260u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C270u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C280u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C288u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C290u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C2A0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C2E0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C2E8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C2F8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C300u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C304u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C310u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C31Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C324u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C32Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C350u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C370u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C3A4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C3ACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C3B4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C3C8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C3DCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C3F4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C450u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C488u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C490u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C498u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C4ACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C4B4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C4B8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C4D0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C4D4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C4DCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C4ECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C528u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C540u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C548u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C554u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C55Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C564u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C568u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C570u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C57Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C58Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C5A0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C5A8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C5B4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C5C0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C5C8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C5D0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C5E0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C5F0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C5F8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C600u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C608u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C610u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C618u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C620u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C62Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C638u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C640u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C648u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C650u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C65Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C664u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C66Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C674u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C67Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C68Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C694u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C6A0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C6A8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C6B4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C6BCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C6C4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C6CCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C6D4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C6DCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C6E4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C710u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C714u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C718u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C72Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C738u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C750u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C774u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C790u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C7A0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C7A4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C7D8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C7E0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C810u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C848u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C84Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C860u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C878u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C884u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C894u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C8A0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C8B0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C8C0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C8CCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C8D0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C8ECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C8F4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C8F8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C900u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C924u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C92Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C948u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C950u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C958u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C984u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C9A4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C9C4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C9E0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C9F4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CA0Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CA14u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CA1Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CA28u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CA2Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CA34u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CA38u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CA44u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CA50u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CA58u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CA5Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CA98u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CAA8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CAD8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CAF8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CB00u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CB08u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CE80u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CE8Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CF48u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CF64u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CF88u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CF90u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CF98u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CFA0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CFA8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CFB0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CFB8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CFC0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CFC8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CFD0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CFD8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CFF0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CFF8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D020u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D040u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D060u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D080u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D088u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D090u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D094u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D0C4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D0CCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D0D0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D0D8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D0E0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D0E8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D0ECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D0F4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D0F8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D100u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D108u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D110u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D11Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D124u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D12Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D130u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D138u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D148u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D150u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D154u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D160u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D180u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D188u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D198u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D1B4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D1BCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D1C4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D1CCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D1D4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D1DCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D1E4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D1ECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D1F4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D1FCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D218u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D23Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D260u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D284u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D2A8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D2CCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D2F0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D31Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D324u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D32Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D334u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D33Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D344u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D34Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D354u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D35Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D364u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D36Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D374u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D37Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D384u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D38Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D390u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D398u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D3A0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D3A8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D3B0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D3B4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D3B8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D3BCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D3C0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D3C8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D3D0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D3D8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D3E0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D3E8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D3F0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D3F8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D400u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D408u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D410u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D418u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D41Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D424u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D42Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D434u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D43Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D444u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D44Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D454u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D464u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D480u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D490u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D49Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D4ACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D4C8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D4D8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D4ECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D4FCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D518u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D528u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D538u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D548u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D564u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D574u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D584u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D5B8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D5C4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D5CCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D5D4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D5DCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D5E4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D5E8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D5F0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D5F8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D600u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D608u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D60Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D614u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D61Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D638u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D64Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D674u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D684u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D694u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D6A4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D6B0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D6C0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D6D0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D780u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D7A4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D7C4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D7E8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D808u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D848u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D854u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D85Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D864u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D86Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D878u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D890u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D898u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D8C0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D8D4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D8FCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D910u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D934u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D94Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D968u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D978u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D98Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D994u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D99Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D9A0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D9A8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D9B0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D9B8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D9C0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D9D4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D9D8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D9E0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D9E8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D9F8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DA0Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DA24u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DA34u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DA44u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DA48u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DA5Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DA70u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DA7Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DA88u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DAA4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DABCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DACCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DAE4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DB08u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DB38u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DC18u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DC20u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DC28u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DC30u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DC38u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DC40u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DC4Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DC54u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DC58u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DC5Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DC74u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DC80u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DC98u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DCD8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DCF8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DD00u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DD08u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DD1Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DD40u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DD48u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DD50u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DD58u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DD60u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DD68u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DD70u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DD78u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DD80u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DD88u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DD90u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DD98u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DDA0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DDA4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DDA8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DDE0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DE08u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DE10u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DE20u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DE24u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DE28u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DE54u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DE68u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DE78u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DE88u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DE8Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DEA8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DEB0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DEBCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DEC8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DECCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DED4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DEDCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DEE8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DEF8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DF10u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DF40u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DF70u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DF9Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DFC0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DFCCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DFD8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DFE8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E004u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E014u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E020u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E040u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E064u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E078u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E088u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E094u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E09Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E0ACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E0B8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E0C0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E0E4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E108u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E124u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E13Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E154u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E174u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E1D0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E1D8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E1E0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E1E8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E1F0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E1F8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E200u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E208u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E210u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E218u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E220u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E228u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E230u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E238u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E240u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E248u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E250u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E258u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E260u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E268u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E270u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E278u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E284u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E28Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E294u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E29Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E2A4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E2ACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E2B4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E2BCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E2C4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E2CCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E2D4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E2DCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E2E4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E2ECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E2F4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E2FCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E304u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E30Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E314u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E31Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E324u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E32Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E334u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E33Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E344u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E34Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E354u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E35Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E364u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E36Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E374u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E37Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E384u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E38Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E394u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E39Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E3A4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E3ACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E3B4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E3BCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E3C4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E3CCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E3D4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E3DCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E3E4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E3ECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E3F4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E3FCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E404u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E40Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E414u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E41Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E424u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E42Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E434u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E43Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E444u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E44Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E454u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E45Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E464u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E46Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E474u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E47Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E484u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E48Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E494u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E49Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E4A4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E4ACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E4B4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E4BCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E4C4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E4CCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E4D4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E4DCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E4E4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E4ECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E4F4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E4FCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E504u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E50Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E514u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E51Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E524u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E52Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E534u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E53Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E544u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E54Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E554u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E55Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E564u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E56Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E574u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E57Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E584u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E58Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E594u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E59Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E5A4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E5ACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E5B4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E5BCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E5C4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E5CCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E5D0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E5D4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E5DCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E5E4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E5E8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E5ECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E5F4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E5FCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E604u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E60Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E614u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E61Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E624u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E62Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E634u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E63Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E644u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E648u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E64Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E654u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E65Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E664u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E66Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E674u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E67Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E684u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E68Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E694u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E69Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E6A4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E6ACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E6B4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E6BCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E6C4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E6CCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E6D4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E6DCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E6E4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E6E8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E6ECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E6F4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E6FCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E704u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E70Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E714u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E724u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E72Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E734u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E73Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E744u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E74Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E75Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E764u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E768u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E770u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E778u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E780u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E790u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E798u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E7A0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E7A8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E7B0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E7B8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E7C0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E7C8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E7D0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E7D8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E7E0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E7E8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E7F0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E7F8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E800u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E808u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E810u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E818u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E820u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E828u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E830u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E838u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E840u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E848u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E850u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E858u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E860u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E868u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E870u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E878u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E880u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E888u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E890u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E898u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E8A0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E8A8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E8B0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E8B8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E8C0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E8C8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E8D0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E8D8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E8E0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E8E8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E8F0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E8F8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E900u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E908u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E910u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E918u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E920u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E928u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E930u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E938u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E940u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E948u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E950u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E958u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E960u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E968u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E970u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E978u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E980u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E988u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E990u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E998u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E9A0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E9A8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E9B0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E9B8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E9C0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E9C8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E9D0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E9D8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E9E0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E9E8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E9F0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E9F8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EA00u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EA08u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EA10u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EA18u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EA20u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EA28u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EA30u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EA38u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EA3Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EA44u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EA4Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EA54u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EA60u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EA68u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EA78u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EA88u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EAACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EAB0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EAB8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EAC0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EAC4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EB68u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EB84u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EB94u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EB9Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EBA8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EBBCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EC4Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0ED78u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0ED80u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EE80u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EE8Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EE98u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EEA4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EEA8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EEB8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EEC8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EED0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EED8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EEE4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EEECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EEF4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EEFCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EF04u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EF0Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EF10u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EF2Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EF50u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EF74u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EF8Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EF98u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EFA4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EFB8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EFC4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F008u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F020u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F030u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F044u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F074u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F0C8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F0E4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F100u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F104u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F12Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F138u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F168u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F1B0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F1F0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F1FCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F200u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F214u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F230u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F280u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F2A0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F2B0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F2C0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F2D0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F2E0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F2F0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F300u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F314u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F324u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F330u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F334u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F340u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F344u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F350u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F354u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F360u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F364u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F370u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F374u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F380u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F384u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F390u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F394u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F3A0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F3A4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F3B0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F3C0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F3D4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F3DCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F3E4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F3ECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F3F4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F400u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F40Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F414u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F41Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F424u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F42Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F434u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F43Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F444u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F454u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F464u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F474u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F484u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F498u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F4ACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F4B8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F4C8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F4D8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F4E4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F4F0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F4F8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F500u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F508u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F510u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F518u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F520u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F534u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F544u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F558u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F568u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F574u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F57Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F580u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F58Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F598u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F5A4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F5B0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F5BCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F5C0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F5CCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F5D8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F5E0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F5E8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F5F4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F600u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F610u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F614u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F628u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F638u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F644u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F650u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F65Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F668u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F674u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F680u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F68Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F698u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F6A0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F6DCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F6E4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F6E8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F6F0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F6F4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F6FCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F708u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F710u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F718u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F71Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F730u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F744u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F778u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F788u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F828u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F874u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F8B4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FD88u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FDA4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FDC8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FDE0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FE78u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FE9Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FEB4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FEC4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FECCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FEF8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FF14u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FF30u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FF50u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FF7Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FF8Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FF98u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FFA8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FFCCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FFF4u, &recomp_unit_0194, "recomp_unit_0194");
}
} // namespace psprecomp
