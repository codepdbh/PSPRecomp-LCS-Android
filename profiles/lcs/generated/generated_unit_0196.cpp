#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0196[4061] = {
    1, 0, 2, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0,
    0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 15,
    0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0,
    22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0, 25, 0, 0, 26, 0, 0, 27, 0, 0, 28, 0, 0, 29, 0, 0, 30, 31,
    0, 32, 0, 33, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 40, 41, 0, 42, 0, 43, 0, 44, 0, 45, 0, 46,
    0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 52, 0, 53, 0,
    0, 0, 54, 0, 55, 0, 56, 0, 57, 0, 58, 0, 0, 0, 0, 0, 59, 0, 60, 0, 61, 0, 62, 0, 0, 0, 0, 0, 63, 0, 64, 0,
    65, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0, 0, 0, 0, 78, 79, 0, 0, 0,
    0, 0, 80, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 87, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0,
    0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94,
    0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0,
    0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 100, 0, 101, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0,
    0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 112, 0, 113, 0, 114, 0,
    0, 0, 0, 0, 0, 115, 0, 116, 117, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0,
    0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 124, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 129, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 137,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0,
    139, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 144, 0, 0, 145, 0, 0, 146, 0, 0, 147, 0, 0,
    0, 148, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 152, 0, 0, 153, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 157, 0, 158, 0, 159, 0, 160, 0, 161,
    0, 162, 0, 163, 0, 164, 0, 165, 0, 0, 0, 166, 0, 167, 0, 168, 0, 0, 169, 0, 170, 0, 171, 0, 0, 172, 0, 0, 173, 0, 174, 0,
    175, 0, 0, 176, 0, 177, 0, 178, 0, 179, 0, 180, 0, 0, 181, 0, 0, 182, 0, 183, 0, 184, 0, 185, 0, 0, 186, 0, 187, 0, 188, 0,
    0, 189, 0, 190, 0, 191, 0, 192, 0, 193, 0, 194, 0, 195, 0, 196, 0, 0, 197, 0, 198, 0, 199, 0, 200, 0, 201, 0, 202, 0, 203, 0,
    204, 0, 205, 0, 0, 206, 0, 207, 0, 208, 0, 209, 0, 210, 0, 211, 0, 0, 212, 0, 0, 213, 0, 214, 215, 0, 216, 0, 217, 0, 0, 218,
    0, 0, 219, 0, 0, 220, 0, 0, 221, 0, 0, 222, 0, 223, 224, 0, 0, 225, 0, 226, 0, 227, 228, 0, 229, 0, 230, 0, 231, 0, 232, 0,
    233, 0, 234, 0, 235, 0, 236, 0, 237, 0, 0, 238, 0, 239, 0, 0, 240, 0, 241, 0, 0, 242, 0, 0, 0, 243, 0, 0, 244, 0, 0, 245,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 247, 0, 248, 249, 0, 0, 0, 250, 0, 0, 251, 0, 0, 252, 0, 253, 254,
    0, 255, 256, 0, 0, 257, 0, 0, 258, 0, 0, 259, 0, 0, 260, 0, 0, 261, 0, 0, 262, 263, 0, 0, 264, 265, 0, 0, 266, 267, 0, 0,
    268, 269, 0, 0, 270, 271, 0, 0, 272, 273, 0, 0, 274, 275, 0, 0, 0, 276, 0, 0, 277, 278, 0, 0, 279, 0, 0, 280, 281, 0, 0, 282,
    0, 283, 0, 284, 0, 285, 286, 0, 287, 288, 0, 289, 290, 0, 291, 0, 292, 293, 0, 294, 0, 0, 295, 0, 296, 297, 0, 0, 298, 0, 299, 300,
    0, 0, 301, 0, 0, 302, 0, 0, 303, 0, 0, 304, 0, 305, 0, 306, 0, 0, 307, 0, 0, 308, 0, 0, 309, 0, 0, 310, 0, 311, 312, 0,
    313, 314, 0, 315, 0, 316, 0, 317, 0, 318, 0, 319, 0, 320, 0, 321, 322, 0, 323, 0, 324, 0, 0, 325, 0, 326, 0, 327, 0, 0, 328, 329,
    0, 330, 0, 331, 0, 332, 0, 333, 0, 334, 0, 335, 0, 336, 0, 337, 0, 338, 339, 0, 340, 341, 0, 342, 0, 343, 0, 344, 0, 345, 0, 346,
    0, 347, 0, 348, 0, 0, 349, 0, 350, 0, 351, 0, 352, 0, 0, 353, 0, 354, 0, 355, 0, 356, 0, 357, 0, 358, 0, 0, 359, 0, 360, 0,
    0, 361, 0, 362, 0, 363, 0, 364, 0, 365, 0, 366, 0, 367, 0, 368, 0, 369, 0, 370, 0, 371, 0, 372, 0, 373, 0, 374, 0, 375, 0, 376,
    0, 377, 0, 378, 0, 379, 0, 380, 0, 0, 381, 0, 382, 0, 383, 0, 384, 0, 0, 385, 0, 386, 0, 387, 0, 388, 0, 389, 0, 390, 0, 0,
    391, 0, 392, 0, 0, 393, 0, 394, 0, 395, 0, 396, 0, 0, 397, 0, 398, 0, 399, 400, 0, 401, 402, 0, 403, 404, 0, 405, 0, 406, 0, 0,
    407, 0, 0, 408, 0, 0, 409, 410, 0, 411, 0, 0, 412, 0, 0, 413, 0, 414, 0, 415, 416, 0, 417, 0, 418, 0, 419, 0, 420, 0, 421, 0,
    422, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 425, 0, 0, 0, 426, 0, 0, 427, 0, 0, 428, 0, 0, 429, 0, 430, 0, 431, 0, 432,
    0, 433, 0, 434, 0, 435, 0, 436, 0, 437, 0, 0, 438, 0, 0, 0, 439, 0, 440, 0, 441, 0, 442, 0, 443, 0, 444, 0, 445, 0, 446, 0,
    0, 447, 0, 448, 449, 0, 450, 451, 0, 452, 453, 0, 0, 454, 0, 0, 455, 0, 0, 456, 0, 0, 0, 457, 0, 0, 458, 0, 0, 459, 0, 460,
    0, 461, 0, 0, 0, 462, 0, 0, 0, 463, 0, 0, 464, 0, 0, 465, 0, 0, 466, 0, 467, 0, 0, 468, 0, 0, 469, 0, 470, 0, 471, 0,
    0, 0, 472, 0, 473, 0, 0, 474, 0, 475, 0, 0, 476, 0, 0, 477, 0, 0, 478, 0, 479, 480, 0, 481, 0, 482, 483, 484, 0, 485, 0, 0,
    486, 0, 0, 487, 0, 0, 488, 0, 0, 489, 0, 490, 491, 0, 492, 493, 0, 494, 495, 0, 496, 497, 0, 498, 499, 0, 500, 501, 0, 502, 503, 0,
    504, 505, 0, 506, 507, 0, 0, 508, 0, 0, 509, 0, 0, 510, 0, 0, 511, 0, 0, 512, 0, 0, 513, 0, 0, 0, 514, 0, 0, 0, 515, 0,
    0, 0, 516, 0, 0, 517, 0, 0, 518, 0, 0, 0, 519, 0, 0, 0, 520, 0, 0, 0, 0, 521, 0, 0, 0, 0, 522, 0, 0, 0, 0, 523,
    0, 0, 0, 524, 0, 0, 0, 525, 0, 0, 526, 0, 0, 527, 0, 0, 528, 0, 0, 529, 0, 0, 530, 0, 0, 531, 0, 0, 0, 532, 0, 0,
    0, 533, 0, 0, 0, 534, 0, 0, 535, 0, 0, 536, 0, 0, 0, 537, 0, 0, 0, 538, 0, 0, 0, 0, 539, 0, 0, 0, 0, 540, 0, 0,
    0, 0, 541, 0, 0, 0, 542, 0, 0, 0, 543, 0, 0, 544, 0, 0, 545, 0, 0, 546, 0, 0, 547, 0, 0, 548, 0, 0, 549, 0, 0, 0,
    550, 0, 0, 0, 551, 0, 0, 0, 552, 0, 0, 553, 0, 0, 554, 0, 0, 0, 555, 0, 0, 0, 556, 0, 0, 0, 0, 557, 0, 0, 0, 0,
    558, 0, 0, 0, 0, 559, 0, 0, 0, 560, 0, 0, 0, 561, 0, 0, 562, 0, 0, 563, 0, 0, 564, 0, 0, 565, 0, 0, 566, 0, 0, 567,
    0, 0, 0, 568, 0, 0, 0, 569, 0, 0, 0, 570, 0, 0, 571, 0, 0, 572, 0, 0, 0, 573, 0, 0, 0, 574, 0, 0, 0, 0, 575, 0,
    0, 0, 0, 576, 0, 0, 0, 0, 577, 0, 0, 0, 578, 0, 0, 0, 579, 0, 580, 0, 581, 0, 582, 0, 583, 0, 0, 584, 0, 585, 0, 0,
    586, 0, 587, 0, 588, 0, 589, 0, 590, 0, 591, 0, 592, 0, 593, 594, 0, 595, 0, 596, 0, 597, 598, 0, 599, 0, 600, 0, 0, 601, 0, 0,
    602, 0, 0, 0, 0, 603, 0, 0, 0, 604, 0, 0, 0, 0, 605, 0, 0, 606, 0, 0, 0, 0, 607, 0, 0, 0, 608, 0, 0, 0, 0, 609,
    0, 0, 610, 0, 0, 611, 612, 0, 0, 613, 0, 614, 0, 0, 615, 0, 0, 0, 0, 616, 0, 0, 0, 617, 0, 618, 619, 0, 620, 0, 621, 0,
    622, 623, 0, 624, 0, 0, 625, 0, 626, 627, 0, 628, 0, 629, 0, 630, 631, 0, 632, 0, 0, 633, 0, 0, 634, 0, 0, 0, 0, 635, 0, 0,
    636, 0, 0, 0, 0, 637, 0, 638, 639, 0, 640, 641, 0, 0, 642, 0, 0, 0, 643, 0, 644, 0, 645, 0, 646, 0, 0, 647, 0, 0, 648, 0,
    0, 649, 0, 0, 0, 650, 0, 651, 0, 0, 652, 0, 0, 653, 0, 0, 654, 0, 655, 656, 0, 657, 0, 658, 0, 659, 0, 660, 0, 0, 661, 0,
    0, 0, 662, 0, 0, 663, 0, 0, 0, 664, 0, 0, 665, 0, 0, 0, 666, 0, 0, 667, 0, 668, 0, 669, 0, 670, 0, 671, 0, 672, 0, 673,
    0, 674, 0, 0, 675, 0, 676, 677, 0, 0, 678, 0, 0, 679, 0, 0, 680, 0, 681, 682, 0, 0, 0, 683, 0, 0, 684, 0, 0, 0, 0, 685,
    0, 686, 687, 0, 0, 688, 0, 689, 690, 0, 0, 0, 0, 691, 0, 0, 0, 0, 692, 0, 0, 693, 0, 694, 695, 0, 0, 696, 0, 0, 697, 0,
    0, 0, 698, 0, 0, 699, 0, 700, 701, 0, 0, 0, 0, 702, 0, 0, 703, 0, 704, 705, 0, 0, 0, 706, 0, 0, 707, 0, 708, 709, 0, 0,
    0, 710, 0, 0, 711, 0, 712, 713, 0, 0, 0, 0, 714, 0, 0, 0, 715, 716, 0, 717, 718, 719, 0, 0, 0, 0, 720, 0, 0, 0, 721, 722,
    0, 723, 0, 724, 0, 0, 0, 0, 725, 0, 0, 0, 726, 727, 0, 728, 0, 0, 729, 0, 0, 0, 0, 730, 0, 731, 0, 0, 732, 0, 0, 733,
    0, 734, 0, 0, 735, 0, 0, 736, 0, 0, 737, 0, 0, 0, 738, 739, 0, 0, 0, 740, 0, 0, 0, 741, 0, 0, 0, 742, 0, 0, 743, 0,
    0, 0, 0, 744, 0, 0, 745, 0, 0, 0, 746, 0, 0, 0, 747, 0, 0, 748, 0, 0, 749, 0, 0, 0, 750, 0, 0, 751, 0, 0, 0, 0,
    752, 0, 0, 0, 753, 0, 0, 0, 754, 0, 0, 0, 755, 0, 0, 756, 0, 0, 0, 757, 0, 0, 0, 758, 0, 0, 0, 0, 759, 0, 0, 0,
    0, 760, 0, 0, 0, 0, 761, 0, 0, 0, 762, 763, 0, 0, 0, 764, 765, 0, 0, 0, 766, 0, 0, 0, 767, 0, 0, 0, 768, 0, 0, 0,
    0, 769, 0, 0, 0, 0, 770, 0, 0, 0, 771, 0, 0, 0, 0, 772, 0, 0, 773, 0, 0, 0, 774, 775, 0, 0, 0, 776, 0, 0, 0, 777,
    0, 0, 0, 778, 0, 0, 0, 779, 0, 0, 780, 0, 0, 781, 0, 0, 782, 0, 0, 783, 0, 0, 0, 0, 784, 0, 0, 0, 785, 0, 786, 787,
    0, 0, 788, 0, 0, 789, 0, 0, 790, 0, 791, 792, 0, 0, 793, 0, 0, 794, 0, 0, 0, 795, 0, 0, 796, 0, 797, 798, 0, 799, 800, 0,
    0, 0, 801, 0, 0, 802, 0, 0, 0, 0, 803, 0, 0, 0, 804, 0, 0, 0, 805, 0, 0, 0, 806, 0, 0, 0, 807, 0, 808, 809, 0, 0,
    810, 0, 0, 0, 811, 0, 0, 812, 813, 814, 815, 0, 816, 0, 817, 0, 818, 0, 819, 0, 820, 0, 821, 0, 0, 822, 0, 823, 0, 0, 824, 0,
    0, 825, 0, 0, 826, 0, 827, 0, 828, 0, 829, 0, 830, 831, 832, 0, 833, 834, 0, 835, 0, 836, 0, 837, 0, 0, 838, 0, 839, 0, 0, 840,
    0, 0, 841, 0, 842, 0, 843, 0, 844, 0, 0, 0, 845, 0, 0, 0, 846, 0, 0, 0, 847, 0, 0, 848, 0, 849, 0, 0, 850, 0, 851, 0,
    852, 0, 853, 0, 854, 0, 855, 0, 0, 856, 0, 857, 0, 858, 0, 0, 859, 0, 0, 860, 0, 0, 861, 0, 0, 862, 0, 0, 863, 0, 0, 864,
    0, 0, 865, 0, 866, 0, 0, 867, 0, 0, 868, 0, 0, 869, 0, 0, 870, 0, 0, 871, 0, 0, 872, 0, 873, 874, 875, 0, 876, 0, 877, 0,
    878, 0, 879, 0, 880, 0, 881, 0, 882, 0, 883, 0, 884, 0, 885, 0, 886, 0, 887, 0, 888, 0, 889, 0, 890, 0, 891, 0, 892, 0, 893, 0,
    894, 0, 895, 0, 896, 0, 897, 0, 898, 0, 899, 0, 900, 0, 901, 0, 902, 0, 0, 0, 0, 903, 0, 0, 904, 0, 0, 905, 0, 906, 0, 0,
    907, 0, 0, 0, 0, 908, 0, 0, 909, 0, 0, 910, 0, 911, 0, 0, 912, 0, 913, 0, 914, 0, 915, 0, 916, 0, 917, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 918, 0, 0, 0, 0, 0, 0, 0, 919, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 920, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 921, 0, 0, 0, 0,
    0, 0, 922, 0, 923, 0, 0, 924, 0, 0, 0, 0, 0, 925, 0, 926, 0, 927, 0, 0, 928, 0, 0, 929, 930, 0, 931, 932, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 933, 0, 0, 934, 0, 0, 0, 935, 0, 0, 0, 0, 936, 937, 0, 0, 0, 0, 0, 938, 0, 0, 939,
    0, 0, 940, 0, 0, 0, 941, 0, 0, 942, 0, 0, 0, 943, 0, 0, 944, 0, 945, 0, 0, 0, 946, 0, 947, 0, 0, 0, 948, 0, 0, 0,
    949, 0, 0, 0, 950, 0, 0, 0, 0, 0, 0, 0, 0, 0, 951, 0, 0, 0, 952, 0, 953, 0, 954, 0, 955, 0, 956, 0, 957, 0, 958, 0,
    959, 0, 960, 0, 961, 0, 962, 0, 963, 0, 964, 0, 965, 0, 966, 0, 967, 0, 968, 0, 0, 0, 0, 0, 969, 0, 970, 971, 0, 0, 0, 0,
    0, 0, 0, 0, 972, 0, 973, 0, 974, 0, 0, 0, 0, 0, 975, 0, 976, 0, 977, 0, 978, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 979, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 980, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 981, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 982, 0, 0, 0, 0, 0, 983, 0,
    0, 0, 984, 0, 0, 985, 0, 986, 0, 0, 0, 0, 0, 0, 987, 0, 0, 0, 0, 0, 0, 0, 988, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 989, 0, 0, 0, 0, 0, 0, 0, 0, 990, 0, 0, 991, 0, 0, 0, 0, 0, 992, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 993, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 994, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 995, 0, 0, 0, 0, 0,
    0, 996, 0, 0, 0, 997, 0, 998, 999, 0, 0, 1000, 0, 0, 1001, 0, 0, 1002, 0, 0, 0, 0, 0, 1003, 0, 0, 0, 0, 1004, 0, 0, 0,
    1005, 0, 0, 0, 0, 0, 1006, 0, 0, 0, 0, 0, 1007, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1008, 0, 0, 1009,
};
void recomp_unit_0196_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B14068u;
        entry_id = (entry_delta < 16244u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0196[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B14068;
    case 2u: goto L_08B14070;
    case 3u: goto L_08B14080;
    case 4u: goto L_08B1408C;
    case 5u: goto L_08B1409C;
    case 6u: goto L_08B140B0;
    case 7u: goto L_08B140C8;
    case 8u: goto L_08B140D8;
    case 9u: goto L_08B140F0;
    case 10u: goto L_08B14108;
    case 11u: goto L_08B14114;
    case 12u: goto L_08B14124;
    case 13u: goto L_08B14148;
    case 14u: goto L_08B14150;
    case 15u: goto L_08B14164;
    case 16u: goto L_08B14188;
    case 17u: goto L_08B14194;
    case 18u: goto L_08B141A4;
    case 19u: goto L_08B141B8;
    case 20u: goto L_08B141C4;
    case 21u: goto L_08B141E0;
    case 22u: goto L_08B141E8;
    case 23u: goto L_08B14210;
    case 24u: goto L_08B1421C;
    case 25u: goto L_08B14224;
    case 26u: goto L_08B14230;
    case 27u: goto L_08B1423C;
    case 28u: goto L_08B14248;
    case 29u: goto L_08B14254;
    case 30u: goto L_08B14260;
    case 31u: goto L_08B14264;
    case 32u: goto L_08B1426C;
    case 33u: goto L_08B14274;
    case 34u: goto L_08B1427C;
    case 35u: goto L_08B142A8;
    case 36u: goto L_08B14370;
    case 37u: goto L_08B14378;
    case 38u: goto L_08B143A8;
    case 39u: goto L_08B143B0;
    case 40u: goto L_08B143B8;
    case 41u: goto L_08B143BC;
    case 42u: goto L_08B143C4;
    case 43u: goto L_08B143CC;
    case 44u: goto L_08B143D4;
    case 45u: goto L_08B143DC;
    case 46u: goto L_08B143E4;
    case 47u: goto L_08B143EC;
    case 48u: goto L_08B143F4;
    case 49u: goto L_08B14430;
    case 50u: goto L_08B14438;
    case 51u: goto L_08B144D0;
    case 52u: goto L_08B144D8;
    case 53u: goto L_08B144E0;
    case 54u: goto L_08B144F0;
    case 55u: goto L_08B144F8;
    case 56u: goto L_08B14500;
    case 57u: goto L_08B14508;
    case 58u: goto L_08B14510;
    case 59u: goto L_08B14528;
    case 60u: goto L_08B14530;
    case 61u: goto L_08B14538;
    case 62u: goto L_08B14540;
    case 63u: goto L_08B14558;
    case 64u: goto L_08B14560;
    case 65u: goto L_08B14568;
    case 66u: goto L_08B14570;
    case 67u: goto L_08B14580;
    case 68u: goto L_08B1459C;
    case 69u: goto L_08B145A8;
    case 70u: goto L_08B145C8;
    case 71u: goto L_08B145D4;
    case 72u: goto L_08B14620;
    case 73u: goto L_08B14640;
    case 74u: goto L_08B14670;
    case 75u: goto L_08B14688;
    case 76u: goto L_08B146B0;
    case 77u: goto L_08B146B8;
    case 78u: goto L_08B146D4;
    case 79u: goto L_08B146D8;
    case 80u: goto L_08B146F0;
    case 81u: goto L_08B146F8;
    case 82u: goto L_08B14708;
    case 83u: goto L_08B14740;
    case 84u: goto L_08B1475C;
    case 85u: goto L_08B1478C;
    case 86u: goto L_08B1479C;
    case 87u: goto L_08B147A4;
    case 88u: goto L_08B147AC;
    case 89u: goto L_08B147D8;
    case 90u: goto L_08B147FC;
    case 91u: goto L_08B14810;
    case 92u: goto L_08B14824;
    case 93u: goto L_08B14850;
    case 94u: goto L_08B14864;
    case 95u: goto L_08B14884;
    case 96u: goto L_08B148AC;
    case 97u: goto L_08B148CC;
    case 98u: goto L_08B148EC;
    case 99u: goto L_08B14918;
    case 100u: goto L_08B1491C;
    case 101u: goto L_08B14924;
    case 102u: goto L_08B14930;
    case 103u: goto L_08B1493C;
    case 104u: goto L_08B1495C;
    case 105u: goto L_08B14978;
    case 106u: goto L_08B149A0;
    case 107u: goto L_08B149CC;
    case 108u: goto L_08B14A10;
    case 109u: goto L_08B14A24;
    case 110u: goto L_08B14A40;
    case 111u: goto L_08B14A48;
    case 112u: goto L_08B14A50;
    case 113u: goto L_08B14A58;
    case 114u: goto L_08B14A60;
    case 115u: goto L_08B14A7C;
    case 116u: goto L_08B14A84;
    case 117u: goto L_08B14A88;
    case 118u: goto L_08B14A98;
    case 119u: goto L_08B14AA8;
    case 120u: goto L_08B14AE0;
    case 121u: goto L_08B14AF8;
    case 122u: goto L_08B14B18;
    case 123u: goto L_08B14B24;
    case 124u: goto L_08B14B30;
    case 125u: goto L_08B14B38;
    case 126u: goto L_08B14B70;
    case 127u: goto L_08B14B80;
    case 128u: goto L_08B14B90;
    case 129u: goto L_08B14BA0;
    case 130u: goto L_08B14BA8;
    case 131u: goto L_08B14E18;
    case 132u: goto L_08B14E30;
    case 133u: goto L_08B14E5C;
    case 134u: goto L_08B14E88;
    case 135u: goto L_08B14E9C;
    case 136u: goto L_08B14EDC;
    case 137u: goto L_08B14EE4;
    case 138u: goto L_08B150D0;
    case 139u: goto L_08B150E8;
    case 140u: goto L_08B150F8;
    case 141u: goto L_08B1510C;
    case 142u: goto L_08B15120;
    case 143u: goto L_08B1512C;
    case 144u: goto L_08B15138;
    case 145u: goto L_08B15144;
    case 146u: goto L_08B15150;
    case 147u: goto L_08B1515C;
    case 148u: goto L_08B1516C;
    case 149u: goto L_08B15178;
    case 150u: goto L_08B1518C;
    case 151u: goto L_08B15198;
    case 152u: goto L_08B151A4;
    case 153u: goto L_08B151B0;
    case 154u: goto L_08B151C0;
    case 155u: goto L_08B151CC;
    case 156u: goto L_08B15240;
    case 157u: goto L_08B15244;
    case 158u: goto L_08B1524C;
    case 159u: goto L_08B15254;
    case 160u: goto L_08B1525C;
    case 161u: goto L_08B15264;
    case 162u: goto L_08B1526C;
    case 163u: goto L_08B15274;
    case 164u: goto L_08B1527C;
    case 165u: goto L_08B15284;
    case 166u: goto L_08B15294;
    case 167u: goto L_08B1529C;
    case 168u: goto L_08B152A4;
    case 169u: goto L_08B152B0;
    case 170u: goto L_08B152B8;
    case 171u: goto L_08B152C0;
    case 172u: goto L_08B152CC;
    case 173u: goto L_08B152D8;
    case 174u: goto L_08B152E0;
    case 175u: goto L_08B152E8;
    case 176u: goto L_08B152F4;
    case 177u: goto L_08B152FC;
    case 178u: goto L_08B15304;
    case 179u: goto L_08B1530C;
    case 180u: goto L_08B15314;
    case 181u: goto L_08B15320;
    case 182u: goto L_08B1532C;
    case 183u: goto L_08B15334;
    case 184u: goto L_08B1533C;
    case 185u: goto L_08B15344;
    case 186u: goto L_08B15350;
    case 187u: goto L_08B15358;
    case 188u: goto L_08B15360;
    case 189u: goto L_08B1536C;
    case 190u: goto L_08B15374;
    case 191u: goto L_08B1537C;
    case 192u: goto L_08B15384;
    case 193u: goto L_08B1538C;
    case 194u: goto L_08B15394;
    case 195u: goto L_08B1539C;
    case 196u: goto L_08B153A4;
    case 197u: goto L_08B153B0;
    case 198u: goto L_08B153B8;
    case 199u: goto L_08B153C0;
    case 200u: goto L_08B153C8;
    case 201u: goto L_08B153D0;
    case 202u: goto L_08B153D8;
    case 203u: goto L_08B153E0;
    case 204u: goto L_08B153E8;
    case 205u: goto L_08B153F0;
    case 206u: goto L_08B153FC;
    case 207u: goto L_08B15404;
    case 208u: goto L_08B1540C;
    case 209u: goto L_08B15414;
    case 210u: goto L_08B1541C;
    case 211u: goto L_08B15424;
    case 212u: goto L_08B15430;
    case 213u: goto L_08B1543C;
    case 214u: goto L_08B15444;
    case 215u: goto L_08B15448;
    case 216u: goto L_08B15450;
    case 217u: goto L_08B15458;
    case 218u: goto L_08B15464;
    case 219u: goto L_08B15470;
    case 220u: goto L_08B1547C;
    case 221u: goto L_08B15488;
    case 222u: goto L_08B15494;
    case 223u: goto L_08B1549C;
    case 224u: goto L_08B154A0;
    case 225u: goto L_08B154AC;
    case 226u: goto L_08B154B4;
    case 227u: goto L_08B154BC;
    case 228u: goto L_08B154C0;
    case 229u: goto L_08B154C8;
    case 230u: goto L_08B154D0;
    case 231u: goto L_08B154D8;
    case 232u: goto L_08B154E0;
    case 233u: goto L_08B154E8;
    case 234u: goto L_08B154F0;
    case 235u: goto L_08B154F8;
    case 236u: goto L_08B15500;
    case 237u: goto L_08B15508;
    case 238u: goto L_08B15514;
    case 239u: goto L_08B1551C;
    case 240u: goto L_08B15528;
    case 241u: goto L_08B15530;
    case 242u: goto L_08B1553C;
    case 243u: goto L_08B1554C;
    case 244u: goto L_08B15558;
    case 245u: goto L_08B15564;
    case 246u: goto L_08B15598;
    case 247u: goto L_08B155A4;
    case 248u: goto L_08B155AC;
    case 249u: goto L_08B155B0;
    case 250u: goto L_08B155C0;
    case 251u: goto L_08B155CC;
    case 252u: goto L_08B155D8;
    case 253u: goto L_08B155E0;
    case 254u: goto L_08B155E4;
    case 255u: goto L_08B155EC;
    case 256u: goto L_08B155F0;
    case 257u: goto L_08B155FC;
    case 258u: goto L_08B15608;
    case 259u: goto L_08B15614;
    case 260u: goto L_08B15620;
    case 261u: goto L_08B1562C;
    case 262u: goto L_08B15638;
    case 263u: goto L_08B1563C;
    case 264u: goto L_08B15648;
    case 265u: goto L_08B1564C;
    case 266u: goto L_08B15658;
    case 267u: goto L_08B1565C;
    case 268u: goto L_08B15668;
    case 269u: goto L_08B1566C;
    case 270u: goto L_08B15678;
    case 271u: goto L_08B1567C;
    case 272u: goto L_08B15688;
    case 273u: goto L_08B1568C;
    case 274u: goto L_08B15698;
    case 275u: goto L_08B1569C;
    case 276u: goto L_08B156AC;
    case 277u: goto L_08B156B8;
    case 278u: goto L_08B156BC;
    case 279u: goto L_08B156C8;
    case 280u: goto L_08B156D4;
    case 281u: goto L_08B156D8;
    case 282u: goto L_08B156E4;
    case 283u: goto L_08B156EC;
    case 284u: goto L_08B156F4;
    case 285u: goto L_08B156FC;
    case 286u: goto L_08B15700;
    case 287u: goto L_08B15708;
    case 288u: goto L_08B1570C;
    case 289u: goto L_08B15714;
    case 290u: goto L_08B15718;
    case 291u: goto L_08B15720;
    case 292u: goto L_08B15728;
    case 293u: goto L_08B1572C;
    case 294u: goto L_08B15734;
    case 295u: goto L_08B15740;
    case 296u: goto L_08B15748;
    case 297u: goto L_08B1574C;
    case 298u: goto L_08B15758;
    case 299u: goto L_08B15760;
    case 300u: goto L_08B15764;
    case 301u: goto L_08B15770;
    case 302u: goto L_08B1577C;
    case 303u: goto L_08B15788;
    case 304u: goto L_08B15794;
    case 305u: goto L_08B1579C;
    case 306u: goto L_08B157A4;
    case 307u: goto L_08B157B0;
    case 308u: goto L_08B157BC;
    case 309u: goto L_08B157C8;
    case 310u: goto L_08B157D4;
    case 311u: goto L_08B157DC;
    case 312u: goto L_08B157E0;
    case 313u: goto L_08B157E8;
    case 314u: goto L_08B157EC;
    case 315u: goto L_08B157F4;
    case 316u: goto L_08B157FC;
    case 317u: goto L_08B15804;
    case 318u: goto L_08B1580C;
    case 319u: goto L_08B15814;
    case 320u: goto L_08B1581C;
    case 321u: goto L_08B15824;
    case 322u: goto L_08B15828;
    case 323u: goto L_08B15830;
    case 324u: goto L_08B15838;
    case 325u: goto L_08B15844;
    case 326u: goto L_08B1584C;
    case 327u: goto L_08B15854;
    case 328u: goto L_08B15860;
    case 329u: goto L_08B15864;
    case 330u: goto L_08B1586C;
    case 331u: goto L_08B15874;
    case 332u: goto L_08B1587C;
    case 333u: goto L_08B15884;
    case 334u: goto L_08B1588C;
    case 335u: goto L_08B15894;
    case 336u: goto L_08B1589C;
    case 337u: goto L_08B158A4;
    case 338u: goto L_08B158AC;
    case 339u: goto L_08B158B0;
    case 340u: goto L_08B158B8;
    case 341u: goto L_08B158BC;
    case 342u: goto L_08B158C4;
    case 343u: goto L_08B158CC;
    case 344u: goto L_08B158D4;
    case 345u: goto L_08B158DC;
    case 346u: goto L_08B158E4;
    case 347u: goto L_08B158EC;
    case 348u: goto L_08B158F4;
    case 349u: goto L_08B15900;
    case 350u: goto L_08B15908;
    case 351u: goto L_08B15910;
    case 352u: goto L_08B15918;
    case 353u: goto L_08B15924;
    case 354u: goto L_08B1592C;
    case 355u: goto L_08B15934;
    case 356u: goto L_08B1593C;
    case 357u: goto L_08B15944;
    case 358u: goto L_08B1594C;
    case 359u: goto L_08B15958;
    case 360u: goto L_08B15960;
    case 361u: goto L_08B1596C;
    case 362u: goto L_08B15974;
    case 363u: goto L_08B1597C;
    case 364u: goto L_08B15984;
    case 365u: goto L_08B1598C;
    case 366u: goto L_08B15994;
    case 367u: goto L_08B1599C;
    case 368u: goto L_08B159A4;
    case 369u: goto L_08B159AC;
    case 370u: goto L_08B159B4;
    case 371u: goto L_08B159BC;
    case 372u: goto L_08B159C4;
    case 373u: goto L_08B159CC;
    case 374u: goto L_08B159D4;
    case 375u: goto L_08B159DC;
    case 376u: goto L_08B159E4;
    case 377u: goto L_08B159EC;
    case 378u: goto L_08B159F4;
    case 379u: goto L_08B159FC;
    case 380u: goto L_08B15A04;
    case 381u: goto L_08B15A10;
    case 382u: goto L_08B15A18;
    case 383u: goto L_08B15A20;
    case 384u: goto L_08B15A28;
    case 385u: goto L_08B15A34;
    case 386u: goto L_08B15A3C;
    case 387u: goto L_08B15A44;
    case 388u: goto L_08B15A4C;
    case 389u: goto L_08B15A54;
    case 390u: goto L_08B15A5C;
    case 391u: goto L_08B15A68;
    case 392u: goto L_08B15A70;
    case 393u: goto L_08B15A7C;
    case 394u: goto L_08B15A84;
    case 395u: goto L_08B15A8C;
    case 396u: goto L_08B15A94;
    case 397u: goto L_08B15AA0;
    case 398u: goto L_08B15AA8;
    case 399u: goto L_08B15AB0;
    case 400u: goto L_08B15AB4;
    case 401u: goto L_08B15ABC;
    case 402u: goto L_08B15AC0;
    case 403u: goto L_08B15AC8;
    case 404u: goto L_08B15ACC;
    case 405u: goto L_08B15AD4;
    case 406u: goto L_08B15ADC;
    case 407u: goto L_08B15AE8;
    case 408u: goto L_08B15AF4;
    case 409u: goto L_08B15B00;
    case 410u: goto L_08B15B04;
    case 411u: goto L_08B15B0C;
    case 412u: goto L_08B15B18;
    case 413u: goto L_08B15B24;
    case 414u: goto L_08B15B2C;
    case 415u: goto L_08B15B34;
    case 416u: goto L_08B15B38;
    case 417u: goto L_08B15B40;
    case 418u: goto L_08B15B48;
    case 419u: goto L_08B15B50;
    case 420u: goto L_08B15B58;
    case 421u: goto L_08B15B60;
    case 422u: goto L_08B15B68;
    case 423u: goto L_08B15B78;
    case 424u: goto L_08B15B88;
    case 425u: goto L_08B15B98;
    case 426u: goto L_08B15BA8;
    case 427u: goto L_08B15BB4;
    case 428u: goto L_08B15BC0;
    case 429u: goto L_08B15BCC;
    case 430u: goto L_08B15BD4;
    case 431u: goto L_08B15BDC;
    case 432u: goto L_08B15BE4;
    case 433u: goto L_08B15BEC;
    case 434u: goto L_08B15BF4;
    case 435u: goto L_08B15BFC;
    case 436u: goto L_08B15C04;
    case 437u: goto L_08B15C0C;
    case 438u: goto L_08B15C18;
    case 439u: goto L_08B15C28;
    case 440u: goto L_08B15C30;
    case 441u: goto L_08B15C38;
    case 442u: goto L_08B15C40;
    case 443u: goto L_08B15C48;
    case 444u: goto L_08B15C50;
    case 445u: goto L_08B15C58;
    case 446u: goto L_08B15C60;
    case 447u: goto L_08B15C6C;
    case 448u: goto L_08B15C74;
    case 449u: goto L_08B15C78;
    case 450u: goto L_08B15C80;
    case 451u: goto L_08B15C84;
    case 452u: goto L_08B15C8C;
    case 453u: goto L_08B15C90;
    case 454u: goto L_08B15C9C;
    case 455u: goto L_08B15CA8;
    case 456u: goto L_08B15CB4;
    case 457u: goto L_08B15CC4;
    case 458u: goto L_08B15CD0;
    case 459u: goto L_08B15CDC;
    case 460u: goto L_08B15CE4;
    case 461u: goto L_08B15CEC;
    case 462u: goto L_08B15CFC;
    case 463u: goto L_08B15D0C;
    case 464u: goto L_08B15D18;
    case 465u: goto L_08B15D24;
    case 466u: goto L_08B15D30;
    case 467u: goto L_08B15D38;
    case 468u: goto L_08B15D44;
    case 469u: goto L_08B15D50;
    case 470u: goto L_08B15D58;
    case 471u: goto L_08B15D60;
    case 472u: goto L_08B15D70;
    case 473u: goto L_08B15D78;
    case 474u: goto L_08B15D84;
    case 475u: goto L_08B15D8C;
    case 476u: goto L_08B15D98;
    case 477u: goto L_08B15DA4;
    case 478u: goto L_08B15DB0;
    case 479u: goto L_08B15DB8;
    case 480u: goto L_08B15DBC;
    case 481u: goto L_08B15DC4;
    case 482u: goto L_08B15DCC;
    case 483u: goto L_08B15DD0;
    case 484u: goto L_08B15DD4;
    case 485u: goto L_08B15DDC;
    case 486u: goto L_08B15DE8;
    case 487u: goto L_08B15DF4;
    case 488u: goto L_08B15E00;
    case 489u: goto L_08B15E0C;
    case 490u: goto L_08B15E14;
    case 491u: goto L_08B15E18;
    case 492u: goto L_08B15E20;
    case 493u: goto L_08B15E24;
    case 494u: goto L_08B15E2C;
    case 495u: goto L_08B15E30;
    case 496u: goto L_08B15E38;
    case 497u: goto L_08B15E3C;
    case 498u: goto L_08B15E44;
    case 499u: goto L_08B15E48;
    case 500u: goto L_08B15E50;
    case 501u: goto L_08B15E54;
    case 502u: goto L_08B15E5C;
    case 503u: goto L_08B15E60;
    case 504u: goto L_08B15E68;
    case 505u: goto L_08B15E6C;
    case 506u: goto L_08B15E74;
    case 507u: goto L_08B15E78;
    case 508u: goto L_08B15E84;
    case 509u: goto L_08B15E90;
    case 510u: goto L_08B15E9C;
    case 511u: goto L_08B15EA8;
    case 512u: goto L_08B15EB4;
    case 513u: goto L_08B15EC0;
    case 514u: goto L_08B15ED0;
    case 515u: goto L_08B15EE0;
    case 516u: goto L_08B15EF0;
    case 517u: goto L_08B15EFC;
    case 518u: goto L_08B15F08;
    case 519u: goto L_08B15F18;
    case 520u: goto L_08B15F28;
    case 521u: goto L_08B15F3C;
    case 522u: goto L_08B15F50;
    case 523u: goto L_08B15F64;
    case 524u: goto L_08B15F74;
    case 525u: goto L_08B15F84;
    case 526u: goto L_08B15F90;
    case 527u: goto L_08B15F9C;
    case 528u: goto L_08B15FA8;
    case 529u: goto L_08B15FB4;
    case 530u: goto L_08B15FC0;
    case 531u: goto L_08B15FCC;
    case 532u: goto L_08B15FDC;
    case 533u: goto L_08B15FEC;
    case 534u: goto L_08B15FFC;
    case 535u: goto L_08B16008;
    case 536u: goto L_08B16014;
    case 537u: goto L_08B16024;
    case 538u: goto L_08B16034;
    case 539u: goto L_08B16048;
    case 540u: goto L_08B1605C;
    case 541u: goto L_08B16070;
    case 542u: goto L_08B16080;
    case 543u: goto L_08B16090;
    case 544u: goto L_08B1609C;
    case 545u: goto L_08B160A8;
    case 546u: goto L_08B160B4;
    case 547u: goto L_08B160C0;
    case 548u: goto L_08B160CC;
    case 549u: goto L_08B160D8;
    case 550u: goto L_08B160E8;
    case 551u: goto L_08B160F8;
    case 552u: goto L_08B16108;
    case 553u: goto L_08B16114;
    case 554u: goto L_08B16120;
    case 555u: goto L_08B16130;
    case 556u: goto L_08B16140;
    case 557u: goto L_08B16154;
    case 558u: goto L_08B16168;
    case 559u: goto L_08B1617C;
    case 560u: goto L_08B1618C;
    case 561u: goto L_08B1619C;
    case 562u: goto L_08B161A8;
    case 563u: goto L_08B161B4;
    case 564u: goto L_08B161C0;
    case 565u: goto L_08B161CC;
    case 566u: goto L_08B161D8;
    case 567u: goto L_08B161E4;
    case 568u: goto L_08B161F4;
    case 569u: goto L_08B16204;
    case 570u: goto L_08B16214;
    case 571u: goto L_08B16220;
    case 572u: goto L_08B1622C;
    case 573u: goto L_08B1623C;
    case 574u: goto L_08B1624C;
    case 575u: goto L_08B16260;
    case 576u: goto L_08B16274;
    case 577u: goto L_08B16288;
    case 578u: goto L_08B16298;
    case 579u: goto L_08B162A8;
    case 580u: goto L_08B162B0;
    case 581u: goto L_08B162B8;
    case 582u: goto L_08B162C0;
    case 583u: goto L_08B162C8;
    case 584u: goto L_08B162D4;
    case 585u: goto L_08B162DC;
    case 586u: goto L_08B162E8;
    case 587u: goto L_08B162F0;
    case 588u: goto L_08B162F8;
    case 589u: goto L_08B16300;
    case 590u: goto L_08B16308;
    case 591u: goto L_08B16310;
    case 592u: goto L_08B16318;
    case 593u: goto L_08B16320;
    case 594u: goto L_08B16324;
    case 595u: goto L_08B1632C;
    case 596u: goto L_08B16334;
    case 597u: goto L_08B1633C;
    case 598u: goto L_08B16340;
    case 599u: goto L_08B16348;
    case 600u: goto L_08B16350;
    case 601u: goto L_08B1635C;
    case 602u: goto L_08B16368;
    case 603u: goto L_08B1637C;
    case 604u: goto L_08B1638C;
    case 605u: goto L_08B163A0;
    case 606u: goto L_08B163AC;
    case 607u: goto L_08B163C0;
    case 608u: goto L_08B163D0;
    case 609u: goto L_08B163E4;
    case 610u: goto L_08B163F0;
    case 611u: goto L_08B163FC;
    case 612u: goto L_08B16400;
    case 613u: goto L_08B1640C;
    case 614u: goto L_08B16414;
    case 615u: goto L_08B16420;
    case 616u: goto L_08B16434;
    case 617u: goto L_08B16444;
    case 618u: goto L_08B1644C;
    case 619u: goto L_08B16450;
    case 620u: goto L_08B16458;
    case 621u: goto L_08B16460;
    case 622u: goto L_08B16468;
    case 623u: goto L_08B1646C;
    case 624u: goto L_08B16474;
    case 625u: goto L_08B16480;
    case 626u: goto L_08B16488;
    case 627u: goto L_08B1648C;
    case 628u: goto L_08B16494;
    case 629u: goto L_08B1649C;
    case 630u: goto L_08B164A4;
    case 631u: goto L_08B164A8;
    case 632u: goto L_08B164B0;
    case 633u: goto L_08B164BC;
    case 634u: goto L_08B164C8;
    case 635u: goto L_08B164DC;
    case 636u: goto L_08B164E8;
    case 637u: goto L_08B164FC;
    case 638u: goto L_08B16504;
    case 639u: goto L_08B16508;
    case 640u: goto L_08B16510;
    case 641u: goto L_08B16514;
    case 642u: goto L_08B16520;
    case 643u: goto L_08B16530;
    case 644u: goto L_08B16538;
    case 645u: goto L_08B16540;
    case 646u: goto L_08B16548;
    case 647u: goto L_08B16554;
    case 648u: goto L_08B16560;
    case 649u: goto L_08B1656C;
    case 650u: goto L_08B1657C;
    case 651u: goto L_08B16584;
    case 652u: goto L_08B16590;
    case 653u: goto L_08B1659C;
    case 654u: goto L_08B165A8;
    case 655u: goto L_08B165B0;
    case 656u: goto L_08B165B4;
    case 657u: goto L_08B165BC;
    case 658u: goto L_08B165C4;
    case 659u: goto L_08B165CC;
    case 660u: goto L_08B165D4;
    case 661u: goto L_08B165E0;
    case 662u: goto L_08B165F0;
    case 663u: goto L_08B165FC;
    case 664u: goto L_08B1660C;
    case 665u: goto L_08B16618;
    case 666u: goto L_08B16628;
    case 667u: goto L_08B16634;
    case 668u: goto L_08B1663C;
    case 669u: goto L_08B16644;
    case 670u: goto L_08B1664C;
    case 671u: goto L_08B16654;
    case 672u: goto L_08B1665C;
    case 673u: goto L_08B16664;
    case 674u: goto L_08B1666C;
    case 675u: goto L_08B16678;
    case 676u: goto L_08B16680;
    case 677u: goto L_08B16684;
    case 678u: goto L_08B16690;
    case 679u: goto L_08B1669C;
    case 680u: goto L_08B166A8;
    case 681u: goto L_08B166B0;
    case 682u: goto L_08B166B4;
    case 683u: goto L_08B166C4;
    case 684u: goto L_08B166D0;
    case 685u: goto L_08B166E4;
    case 686u: goto L_08B166EC;
    case 687u: goto L_08B166F0;
    case 688u: goto L_08B166FC;
    case 689u: goto L_08B16704;
    case 690u: goto L_08B16708;
    case 691u: goto L_08B1671C;
    case 692u: goto L_08B16730;
    case 693u: goto L_08B1673C;
    case 694u: goto L_08B16744;
    case 695u: goto L_08B16748;
    case 696u: goto L_08B16754;
    case 697u: goto L_08B16760;
    case 698u: goto L_08B16770;
    case 699u: goto L_08B1677C;
    case 700u: goto L_08B16784;
    case 701u: goto L_08B16788;
    case 702u: goto L_08B1679C;
    case 703u: goto L_08B167A8;
    case 704u: goto L_08B167B0;
    case 705u: goto L_08B167B4;
    case 706u: goto L_08B167C4;
    case 707u: goto L_08B167D0;
    case 708u: goto L_08B167D8;
    case 709u: goto L_08B167DC;
    case 710u: goto L_08B167EC;
    case 711u: goto L_08B167F8;
    case 712u: goto L_08B16800;
    case 713u: goto L_08B16804;
    case 714u: goto L_08B16818;
    case 715u: goto L_08B16828;
    case 716u: goto L_08B1682C;
    case 717u: goto L_08B16834;
    case 718u: goto L_08B16838;
    case 719u: goto L_08B1683C;
    case 720u: goto L_08B16850;
    case 721u: goto L_08B16860;
    case 722u: goto L_08B16864;
    case 723u: goto L_08B1686C;
    case 724u: goto L_08B16874;
    case 725u: goto L_08B16888;
    case 726u: goto L_08B16898;
    case 727u: goto L_08B1689C;
    case 728u: goto L_08B168A4;
    case 729u: goto L_08B168B0;
    case 730u: goto L_08B168C4;
    case 731u: goto L_08B168CC;
    case 732u: goto L_08B168D8;
    case 733u: goto L_08B168E4;
    case 734u: goto L_08B168EC;
    case 735u: goto L_08B168F8;
    case 736u: goto L_08B16904;
    case 737u: goto L_08B16910;
    case 738u: goto L_08B16920;
    case 739u: goto L_08B16924;
    case 740u: goto L_08B16934;
    case 741u: goto L_08B16944;
    case 742u: goto L_08B16954;
    case 743u: goto L_08B16960;
    case 744u: goto L_08B16974;
    case 745u: goto L_08B16980;
    case 746u: goto L_08B16990;
    case 747u: goto L_08B169A0;
    case 748u: goto L_08B169AC;
    case 749u: goto L_08B169B8;
    case 750u: goto L_08B169C8;
    case 751u: goto L_08B169D4;
    case 752u: goto L_08B169E8;
    case 753u: goto L_08B169F8;
    case 754u: goto L_08B16A08;
    case 755u: goto L_08B16A18;
    case 756u: goto L_08B16A24;
    case 757u: goto L_08B16A34;
    case 758u: goto L_08B16A44;
    case 759u: goto L_08B16A58;
    case 760u: goto L_08B16A6C;
    case 761u: goto L_08B16A80;
    case 762u: goto L_08B16A90;
    case 763u: goto L_08B16A94;
    case 764u: goto L_08B16AA4;
    case 765u: goto L_08B16AA8;
    case 766u: goto L_08B16AB8;
    case 767u: goto L_08B16AC8;
    case 768u: goto L_08B16AD8;
    case 769u: goto L_08B16AEC;
    case 770u: goto L_08B16B00;
    case 771u: goto L_08B16B10;
    case 772u: goto L_08B16B24;
    case 773u: goto L_08B16B30;
    case 774u: goto L_08B16B40;
    case 775u: goto L_08B16B44;
    case 776u: goto L_08B16B54;
    case 777u: goto L_08B16B64;
    case 778u: goto L_08B16B74;
    case 779u: goto L_08B16B84;
    case 780u: goto L_08B16B90;
    case 781u: goto L_08B16B9C;
    case 782u: goto L_08B16BA8;
    case 783u: goto L_08B16BB4;
    case 784u: goto L_08B16BC8;
    case 785u: goto L_08B16BD8;
    case 786u: goto L_08B16BE0;
    case 787u: goto L_08B16BE4;
    case 788u: goto L_08B16BF0;
    case 789u: goto L_08B16BFC;
    case 790u: goto L_08B16C08;
    case 791u: goto L_08B16C10;
    case 792u: goto L_08B16C14;
    case 793u: goto L_08B16C20;
    case 794u: goto L_08B16C2C;
    case 795u: goto L_08B16C3C;
    case 796u: goto L_08B16C48;
    case 797u: goto L_08B16C50;
    case 798u: goto L_08B16C54;
    case 799u: goto L_08B16C5C;
    case 800u: goto L_08B16C60;
    case 801u: goto L_08B16C70;
    case 802u: goto L_08B16C7C;
    case 803u: goto L_08B16C90;
    case 804u: goto L_08B16CA0;
    case 805u: goto L_08B16CB0;
    case 806u: goto L_08B16CC0;
    case 807u: goto L_08B16CD0;
    case 808u: goto L_08B16CD8;
    case 809u: goto L_08B16CDC;
    case 810u: goto L_08B16CE8;
    case 811u: goto L_08B16CF8;
    case 812u: goto L_08B16D04;
    case 813u: goto L_08B16D08;
    case 814u: goto L_08B16D0C;
    case 815u: goto L_08B16D10;
    case 816u: goto L_08B16D18;
    case 817u: goto L_08B16D20;
    case 818u: goto L_08B16D28;
    case 819u: goto L_08B16D30;
    case 820u: goto L_08B16D38;
    case 821u: goto L_08B16D40;
    case 822u: goto L_08B16D4C;
    case 823u: goto L_08B16D54;
    case 824u: goto L_08B16D60;
    case 825u: goto L_08B16D6C;
    case 826u: goto L_08B16D78;
    case 827u: goto L_08B16D80;
    case 828u: goto L_08B16D88;
    case 829u: goto L_08B16D90;
    case 830u: goto L_08B16D98;
    case 831u: goto L_08B16D9C;
    case 832u: goto L_08B16DA0;
    case 833u: goto L_08B16DA8;
    case 834u: goto L_08B16DAC;
    case 835u: goto L_08B16DB4;
    case 836u: goto L_08B16DBC;
    case 837u: goto L_08B16DC4;
    case 838u: goto L_08B16DD0;
    case 839u: goto L_08B16DD8;
    case 840u: goto L_08B16DE4;
    case 841u: goto L_08B16DF0;
    case 842u: goto L_08B16DF8;
    case 843u: goto L_08B16E00;
    case 844u: goto L_08B16E08;
    case 845u: goto L_08B16E18;
    case 846u: goto L_08B16E28;
    case 847u: goto L_08B16E38;
    case 848u: goto L_08B16E44;
    case 849u: goto L_08B16E4C;
    case 850u: goto L_08B16E58;
    case 851u: goto L_08B16E60;
    case 852u: goto L_08B16E68;
    case 853u: goto L_08B16E70;
    case 854u: goto L_08B16E78;
    case 855u: goto L_08B16E80;
    case 856u: goto L_08B16E8C;
    case 857u: goto L_08B16E94;
    case 858u: goto L_08B16E9C;
    case 859u: goto L_08B16EA8;
    case 860u: goto L_08B16EB4;
    case 861u: goto L_08B16EC0;
    case 862u: goto L_08B16ECC;
    case 863u: goto L_08B16ED8;
    case 864u: goto L_08B16EE4;
    case 865u: goto L_08B16EF0;
    case 866u: goto L_08B16EF8;
    case 867u: goto L_08B16F04;
    case 868u: goto L_08B16F10;
    case 869u: goto L_08B16F1C;
    case 870u: goto L_08B16F28;
    case 871u: goto L_08B16F34;
    case 872u: goto L_08B16F40;
    case 873u: goto L_08B16F48;
    case 874u: goto L_08B16F4C;
    case 875u: goto L_08B16F50;
    case 876u: goto L_08B16F58;
    case 877u: goto L_08B16F60;
    case 878u: goto L_08B16F68;
    case 879u: goto L_08B16F70;
    case 880u: goto L_08B16F78;
    case 881u: goto L_08B16F80;
    case 882u: goto L_08B16F88;
    case 883u: goto L_08B16F90;
    case 884u: goto L_08B16F98;
    case 885u: goto L_08B16FA0;
    case 886u: goto L_08B16FA8;
    case 887u: goto L_08B16FB0;
    case 888u: goto L_08B16FB8;
    case 889u: goto L_08B16FC0;
    case 890u: goto L_08B16FC8;
    case 891u: goto L_08B16FD0;
    case 892u: goto L_08B16FD8;
    case 893u: goto L_08B16FE0;
    case 894u: goto L_08B16FE8;
    case 895u: goto L_08B16FF0;
    case 896u: goto L_08B16FF8;
    case 897u: goto L_08B17000;
    case 898u: goto L_08B17008;
    case 899u: goto L_08B17010;
    case 900u: goto L_08B17018;
    case 901u: goto L_08B17020;
    case 902u: goto L_08B17028;
    case 903u: goto L_08B1703C;
    case 904u: goto L_08B17048;
    case 905u: goto L_08B17054;
    case 906u: goto L_08B1705C;
    case 907u: goto L_08B17068;
    case 908u: goto L_08B1707C;
    case 909u: goto L_08B17088;
    case 910u: goto L_08B17094;
    case 911u: goto L_08B1709C;
    case 912u: goto L_08B170A8;
    case 913u: goto L_08B170B0;
    case 914u: goto L_08B170B8;
    case 915u: goto L_08B170C0;
    case 916u: goto L_08B170C8;
    case 917u: goto L_08B170D0;
    case 918u: goto L_08B1722C;
    case 919u: goto L_08B1724C;
    case 920u: goto L_08B172FC;
    case 921u: goto L_08B173D4;
    case 922u: goto L_08B173F0;
    case 923u: goto L_08B173F8;
    case 924u: goto L_08B17404;
    case 925u: goto L_08B1741C;
    case 926u: goto L_08B17424;
    case 927u: goto L_08B1742C;
    case 928u: goto L_08B17438;
    case 929u: goto L_08B17444;
    case 930u: goto L_08B17448;
    case 931u: goto L_08B17450;
    case 932u: goto L_08B17454;
    case 933u: goto L_08B1748C;
    case 934u: goto L_08B17498;
    case 935u: goto L_08B174A8;
    case 936u: goto L_08B174BC;
    case 937u: goto L_08B174C0;
    case 938u: goto L_08B174D8;
    case 939u: goto L_08B174E4;
    case 940u: goto L_08B174F0;
    case 941u: goto L_08B17500;
    case 942u: goto L_08B1750C;
    case 943u: goto L_08B1751C;
    case 944u: goto L_08B17528;
    case 945u: goto L_08B17530;
    case 946u: goto L_08B17540;
    case 947u: goto L_08B17548;
    case 948u: goto L_08B17558;
    case 949u: goto L_08B17568;
    case 950u: goto L_08B17578;
    case 951u: goto L_08B175A0;
    case 952u: goto L_08B175B0;
    case 953u: goto L_08B175B8;
    case 954u: goto L_08B175C0;
    case 955u: goto L_08B175C8;
    case 956u: goto L_08B175D0;
    case 957u: goto L_08B175D8;
    case 958u: goto L_08B175E0;
    case 959u: goto L_08B175E8;
    case 960u: goto L_08B175F0;
    case 961u: goto L_08B175F8;
    case 962u: goto L_08B17600;
    case 963u: goto L_08B17608;
    case 964u: goto L_08B17610;
    case 965u: goto L_08B17618;
    case 966u: goto L_08B17620;
    case 967u: goto L_08B17628;
    case 968u: goto L_08B17630;
    case 969u: goto L_08B17648;
    case 970u: goto L_08B17650;
    case 971u: goto L_08B17654;
    case 972u: goto L_08B17678;
    case 973u: goto L_08B17680;
    case 974u: goto L_08B17688;
    case 975u: goto L_08B176A0;
    case 976u: goto L_08B176A8;
    case 977u: goto L_08B176B0;
    case 978u: goto L_08B176B8;
    case 979u: goto L_08B179DC;
    case 980u: goto L_08B17C58;
    case 981u: goto L_08B17C80;
    case 982u: goto L_08B17D48;
    case 983u: goto L_08B17D60;
    case 984u: goto L_08B17D70;
    case 985u: goto L_08B17D7C;
    case 986u: goto L_08B17D84;
    case 987u: goto L_08B17DA0;
    case 988u: goto L_08B17DC0;
    case 989u: goto L_08B17DFC;
    case 990u: goto L_08B17E20;
    case 991u: goto L_08B17E2C;
    case 992u: goto L_08B17E44;
    case 993u: goto L_08B17E6C;
    case 994u: goto L_08B17E98;
    case 995u: goto L_08B17ED0;
    case 996u: goto L_08B17EEC;
    case 997u: goto L_08B17EFC;
    case 998u: goto L_08B17F04;
    case 999u: goto L_08B17F08;
    case 1000u: goto L_08B17F14;
    case 1001u: goto L_08B17F20;
    case 1002u: goto L_08B17F2C;
    case 1003u: goto L_08B17F44;
    case 1004u: goto L_08B17F58;
    case 1005u: goto L_08B17F68;
    case 1006u: goto L_08B17F80;
    case 1007u: goto L_08B17F98;
    case 1008u: goto L_08B17FCC;
    case 1009u: goto L_08B17FD8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B14068:
    ctx.execute_vfpu_compare3(82u, 101u, 109u, 1u, 6u);
    rt.unsupported(0x08B1406Cu, 0x00006576u, "special? not lowered yet"); return;
L_08B14070:
    ctx.execute_vfpu_compare3(73u, 115u, 67u, 1u, 6u);
    rt.unsupported(0x08B14074u, 0x63656C6Cu, "vfpu0 not lowered yet"); return;
L_08B14080:
    rt.unsupported(0x08B14080u, 0x69736F50u, "unknown not lowered yet"); return;
L_08B1408C:
    rt.unsupported(0x08B1408Cu, 0x61657243u, "vfpu0 not lowered yet"); return;
L_08B1409C:
    rt.unsupported(0x08B1409Cu, 0x73656F44u, "unknown not lowered yet"); return;
L_08B140B0:
    ctx.execute_vfpu_vscl_ct<82u, 101u, 103u, 1u>();
    rt.unsupported(0x08B140B4u, 0x6172656Eu, "vfpu0 not lowered yet"); return;
L_08B140C8:
    rt.unsupported(0x08B140C8u, 0x6B636970u, "unknown not lowered yet"); return;
L_08B140D8:
    rt.unsupported(0x08B140D8u, 0x74636576u, "unknown not lowered yet"); return;
L_08B140F0:
    rt.unsupported(0x08B140F0u, 0x6E696472u, "vfpu3 not lowered yet"); return;
L_08B14108:
    rt.unsupported(0x08B14108u, 0x76206F6Eu, "unknown not lowered yet"); return;
L_08B14114:
    rt.unsupported(0x08B14114u, 0x0000003Fu, "special? not lowered yet"); return;
L_08B14124:
    // nop
    rt.unsupported(0x08B1412Cu, 0x0890BB3Cu, "control flow in delay slot"); return;
L_08B14148:
    if (ctx.gpr[25] == 0u) {
    rt.unsupported(0x08B1414Cu, 0x45434150u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1109u, 0x08B27E84u>(ctx, &aot_mem); return;
    }
    goto L_08B14150;
L_08B14150:
    rt.unsupported(0x08B14150u, 0x46454C20u, "cop1? not lowered yet"); return;
L_08B14164:
    rt.unsupported(0x08B14164u, 0x44205245u, "cop1? not lowered yet"); return;
L_08B14188:
    rt.unsupported(0x08B14188u, 0x74726170u, "unknown not lowered yet"); return;
L_08B14194:
    ctx.execute_vfpu_vscl_ct<119u, 97u, 116u, 1u>();
    ctx.execute_vfpu_vscl_ct<114u, 99u, 108u, 1u>();
    ctx.gpr[18] = (ctx.gpr[9] | 29281u);
    rt.unsupported(0x08B141A0u, 0x00000036u, "special? not lowered yet"); return;
L_08B141A4:
    ctx.execute_vfpu_vscl_ct<119u, 97u, 116u, 1u>();
    ctx.execute_vfpu_vhdp(114u, 114u, 101u, 1u);
    rt.unsupported(0x08B141ACu, 0x7463656Cu, "unknown not lowered yet"); return;
L_08B141B8:
    ctx.execute_vfpu_vscl_ct<119u, 97u, 116u, 1u>();
    rt.unsupported(0x08B141BCu, 0x6B617772u, "unknown not lowered yet"); return;
L_08B141C4:
    ctx.execute_vfpu_vscl_ct<68u, 111u, 110u, 1u>();
    rt.unsupported(0x08B141C8u, 0x696E4920u, "unknown not lowered yet"); return;
L_08B141E0:
    if (static_cast<std::int32_t>(ctx.gpr[10]) <= 0) {
    rt.unsupported(0x08B141E4u, 0x4D203A47u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1099u, 0x08B27AE8u>(ctx, &aot_mem); return;
    }
    goto L_08B141E8;
L_08B141E8:
    rt.unsupported(0x08B141E8u, 0x2045564Fu, "unknown not lowered yet"); return;
L_08B14210:
    // nop
    rt.unsupported(0x08B14214u, 0x726F6D65u, "unknown not lowered yet"); return;
L_08B1421C:
    if (ctx.gpr[2] != ctx.gpr[24]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 772u, 0x08B25770u>(ctx, &aot_mem); return;
    }
    goto L_08B14224;
L_08B14224:
    rt.unsupported(0x08B14224u, 0x4C474E45u, "unknown not lowered yet"); return;
L_08B14230:
    rt.unsupported(0x08B14230u, 0x4E455246u, "unknown not lowered yet"); return;
L_08B1423C:
    rt.unsupported(0x08B1423Cu, 0x4D524547u, "unknown not lowered yet"); return;
L_08B14248:
    rt.unsupported(0x08B14248u, 0x4C415449u, "unknown not lowered yet"); return;
L_08B14254:
    rt.unsupported(0x08B14254u, 0x4E415053u, "unknown not lowered yet"); return;
L_08B14260:
    rt.unsupported(0x08B14260u, 0x00006272u, "special? not lowered yet"); return;
L_08B14264:
    rt.unsupported(0x08B14264u, 0x4C424154u, "unknown not lowered yet"); return;
L_08B1426C:
    if (static_cast<std::int32_t>(ctx.gpr[10]) <= 0) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1068u, 0x08B26FC0u>(ctx, &aot_mem); return;
    }
    goto L_08B14274;
L_08B14274:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 652u, 0x08B253C8u>(ctx, &aot_mem); return;
    }
    goto L_08B1427C;
L_08B1427C:
    rt.unsupported(0x08B1427Cu, 0x78655443u, "unknown not lowered yet"); return;
L_08B142A8:
    rt.unsupported(0x08B142A8u, 0x78655443u, "unknown not lowered yet"); return;
L_08B14370:
    rt.unsupported(0x08B14370u, 0x69617274u, "unknown not lowered yet"); return;
L_08B14378:
    rt.unsupported(0x08B14378u, 0x74746573u, "unknown not lowered yet"); return;
L_08B143A8:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 21u));
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 34u, 0x08B28CFCu>(ctx, &aot_mem); return;
    }
    goto L_08B143B0;
L_08B143B0:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B143B4u, 0x0058454Eu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 35u, 0x08B28D04u>(ctx, &aot_mem); return;
    }
    goto L_08B143B8;
L_08B143B8:
    { const bool signed_ok = ctx.execute_signed_add(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B143B8u, 0x00000020u); return; } }
    goto L_08B143BC;
L_08B143BC:
    if (ctx.gpr[26] != ctx.gpr[2]) {
    rt.unsupported(0x08B143C0u, 0x00345941u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 61u, 0x08B2990Cu>(ctx, &aot_mem); return;
    }
    goto L_08B143C4;
L_08B143C4:
    if (ctx.gpr[26] != ctx.gpr[2]) {
    rt.unsupported(0x08B143C8u, 0x00325941u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 62u, 0x08B29914u>(ctx, &aot_mem); return;
    }
    goto L_08B143CC;
L_08B143CC:
    if (ctx.gpr[26] != ctx.gpr[2]) {
    rt.unsupported(0x08B143D0u, 0x00315941u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 63u, 0x08B2991Cu>(ctx, &aot_mem); return;
    }
    goto L_08B143D4;
L_08B143D4:
    if (ctx.gpr[26] != ctx.gpr[2]) {
    rt.unsupported(0x08B143D8u, 0x00335941u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 64u, 0x08B29924u>(ctx, &aot_mem); return;
    }
    goto L_08B143DC;
L_08B143DC:
    rt.unsupported(0x08B143DCu, 0x49415254u, "cop2/vfpu not lowered yet"); return;
L_08B143E4:
    rt.unsupported(0x08B143E4u, 0x49415254u, "cop2/vfpu not lowered yet"); return;
L_08B143EC:
    rt.unsupported(0x08B143ECu, 0x49415254u, "cop2/vfpu not lowered yet"); return;
L_08B143F4:
    rt.unsupported(0x08B143F4u, 0x74696E69u, "unknown not lowered yet"); return;
L_08B14430:
    rt.unsupported(0x08B14430u, 0x736D762Du, "unknown not lowered yet"); return;
L_08B14438:
    ctx.gpr[1] = (ctx.gpr[26] & 21575u);
    // nop
    rt.unsupported(0x08B14444u, 0x08917450u, "control flow in delay slot"); return;
L_08B144D0:
    ctx.gpr[26] = (ctx.gpr[9] + static_cast<std::uint32_t>(25637));
    rt.unsupported(0x08B144D4u, 0x00643230u, "special? not lowered yet"); return;
L_08B144D8:
    rt.unsupported(0x08B144D8u, 0x454D4954u, "cop1? not lowered yet"); return;
L_08B144E0:
    rt.unsupported(0x08B144E0u, 0x45474150u, "cop1? not lowered yet"); return;
L_08B144F0:
    ctx.gpr[15] = (ctx.gpr[9] + static_cast<std::uint32_t>(25637));
    (void)(0u & 0u);
    goto L_08B144F8;
L_08B144F8:
    rt.unsupported(0x08B144F8u, 0x4C4C494Bu, "unknown not lowered yet"); return;
L_08B14500:
    ctx.gpr[31] = (ctx.gpr[26] & 17995u);
    // nop
    goto L_08B14508;
L_08B14508:
    rt.unsupported(0x08B14508u, 0x736D6973u, "unknown not lowered yet"); return;
L_08B14510:
    rt.unsupported(0x08B14510u, 0x2061754Cu, "unknown not lowered yet"); return;
L_08B14528:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<99u, 1u>(vfpu_d); }
    // nop
    goto L_08B14530;
L_08B14530:
    rt.unsupported(0x08B14530u, 0x69726373u, "unknown not lowered yet"); return;
L_08B14538:
    rt.unsupported(0x08B14538u, 0x69746361u, "unknown not lowered yet"); return;
L_08B14540:
    rt.unsupported(0x08B14540u, 0x2061754Cu, "unknown not lowered yet"); return;
L_08B14558:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<100u, 1u>(vfpu_d); }
    // nop
    goto L_08B14560;
L_08B14560:
    rt.unsupported(0x08B14560u, 0x72617473u, "unknown not lowered yet"); return;
L_08B14568:
    rt.unsupported(0x08B14568u, 0x706F7473u, "unknown not lowered yet"); return;
L_08B14570:
    rt.unsupported(0x08B14570u, 0x70657473u, "unknown not lowered yet"); return;
L_08B14580:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B14598u, 0x506C6165u, "control flow in delay slot"); return;
L_08B1459C:
    rt.unsupported(0x08B1459Cu, 0x756B6369u, "unknown not lowered yet"); return;
L_08B145A8:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.execute_vfpu_vscl_ct<42u, 32u, 110u, 1u>();
    rt.unsupported(0x08B145C4u, 0x506C6165u, "control flow in delay slot"); return;
L_08B145C8:
    rt.unsupported(0x08B145C8u, 0x756B6369u, "unknown not lowered yet"); return;
L_08B145D4:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.execute_vfpu_compare3(42u, 32u, 67u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<109u, 112u, 108u, 1u>();
    rt.unsupported(0x08B145F0u, 0x70206574u, "unknown not lowered yet"); return;
L_08B14620:
    rt.unsupported(0x08B14620u, 0x74746553u, "unknown not lowered yet"); return;
L_08B14640:
    rt.unsupported(0x08B14640u, 0x7E7E7E7Eu, "special3? not lowered yet"); return;
L_08B14670:
    rt.unsupported(0x08B14670u, 0x7E7E7E7Eu, "special3? not lowered yet"); return;
L_08B14688:
    rt.unsupported(0x08B14688u, 0x7E7E7E7Eu, "special3? not lowered yet"); return;
L_08B146B0:
    rt.unsupported(0x08B146B0u, 0x46464F20u, "cop1? not lowered yet"); return;
L_08B146B8:
    rt.unsupported(0x08B146B8u, 0x74746553u, "unknown not lowered yet"); return;
L_08B146D4:
    rt.unsupported(0x08B146D4u, 0x00000A29u, "special? not lowered yet"); return;
L_08B146D8:
    rt.unsupported(0x08B146D8u, 0x7E7E7E7Eu, "special3? not lowered yet"); return;
L_08B146F0:
    if (ctx.gpr[25] == 0u) {
    rt.unsupported(0x08B146F4u, 0x20746E65u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 218u, 0x08B318C0u>(ctx, &aot_mem); return;
    }
    goto L_08B146F8;
L_08B146F8:
    (void)(ctx.gpr[9] + static_cast<std::uint32_t>(25673));
    rt.unsupported(0x08B146FCu, 0x774F2064u, "unknown not lowered yet"); return;
L_08B14708:
    rt.unsupported(0x08B14708u, 0x4E207349u, "unknown not lowered yet"); return;
L_08B14740:
    rt.unsupported(0x08B14740u, 0x7E7E7E7Eu, "special3? not lowered yet"); return;
L_08B1475C:
    rt.unsupported(0x08B1475Cu, 0x7E7E7E7Eu, "special3? not lowered yet"); return;
L_08B1478C:
    rt.unsupported(0x08B1478Cu, 0x7E7E7E7Eu, "special3? not lowered yet"); return;
L_08B1479C:
    if (ctx.gpr[10] != ctx.gpr[11]) {
    rt.unsupported(0x08B147A0u, 0x69252050u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 685u, 0x08B254C4u>(ctx, &aot_mem); return;
    }
    goto L_08B147A4;
L_08B147A4:
    // nop
    (void)(ctx.pc = 0x09A494E8u, rt.invoke_chained_call(ctx, &aot_mem)); return;
L_08B147AC:
    rt.unsupported(0x08B147ACu, 0x7E7E7E7Eu, "special3? not lowered yet"); return;
L_08B147D8:
    ctx.gpr[14] = (ctx.gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    rt.unsupported(0x08B147DCu, 0x444E4120u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B147E0u, 0x20534920u, "unknown not lowered yet"); return;
L_08B147FC:
    ctx.gpr[14] = (ctx.gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    rt.unsupported(0x08B14800u, 0x444E4120u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B14804u, 0x20534920u, "unknown not lowered yet"); return;
L_08B14810:
    rt.unsupported(0x08B14810u, 0x44454B52u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B14814u, 0x20534120u, "unknown not lowered yet"); return;
L_08B14824:
    rt.unsupported(0x08B14824u, 0x7E7E7E7Eu, "special3? not lowered yet"); return;
L_08B14850:
    rt.unsupported(0x08B14850u, 0x7E7E7E7Eu, "special3? not lowered yet"); return;
L_08B14864:
    rt.unsupported(0x08B14864u, 0x69746F4Eu, "unknown not lowered yet"); return;
L_08B14884:
    rt.unsupported(0x08B14884u, 0x20746F4Eu, "unknown not lowered yet"); return;
L_08B148AC:
    rt.unsupported(0x08B148ACu, 0x7E7E7E7Eu, "special3? not lowered yet"); return;
L_08B148CC:
    rt.unsupported(0x08B148CCu, 0x7E7E7E7Eu, "special3? not lowered yet"); return;
L_08B148EC:
    rt.unsupported(0x08B148ECu, 0x7E7E7E7Eu, "special3? not lowered yet"); return;
L_08B14918:
    // nop
    goto L_08B1491C;
L_08B1491C:
    (void)(ctx.gpr[9] + static_cast<std::uint32_t>(25637));
    ctx.gpr[1] = (0u & 0u);
    goto L_08B14924;
L_08B14924:
    rt.unsupported(0x08B14924u, 0x4B434950u, "cop2/vfpu not lowered yet"); return;
L_08B14930:
    rt.unsupported(0x08B14930u, 0x2069253Au, "unknown not lowered yet"); return;
L_08B1493C:
    rt.unsupported(0x08B1493Cu, 0x74746553u, "unknown not lowered yet"); return;
L_08B1495C:
    rt.unsupported(0x08B1495Cu, 0x7E7E7E7Eu, "special3? not lowered yet"); return;
L_08B14978:
    rt.unsupported(0x08B14978u, 0x7E7E7E7Eu, "special3? not lowered yet"); return;
L_08B149A0:
    rt.unsupported(0x08B149A0u, 0x7E7E7E7Eu, "special3? not lowered yet"); return;
L_08B149CC:
    rt.unsupported(0x08B149CCu, 0x7E7E7E7Eu, "special3? not lowered yet"); return;
L_08B14A10:
    rt.unsupported(0x08B14A10u, 0x45574F50u, "cop1? not lowered yet"); return;
L_08B14A24:
    rt.unsupported(0x08B14A24u, 0x45574F50u, "cop1? not lowered yet"); return;
L_08B14A40:
    rt.unsupported(0x08B14A40u, 0x4D505550u, "unknown not lowered yet"); return;
L_08B14A48:
    if (ctx.gpr[18] == ctx.gpr[16]) {
    rt.unsupported(0x08B14A4Cu, 0x004E4745u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 72u, 0x08B29F8Cu>(ctx, &aot_mem); return;
    }
    goto L_08B14A50;
L_08B14A50:
    rt.unsupported(0x08B14A50u, 0x49505550u, "cop2/vfpu not lowered yet"); return;
L_08B14A58:
    rt.unsupported(0x08B14A58u, 0x46505550u, "cop1? not lowered yet"); return;
L_08B14A60:
    rt.unsupported(0x08B14A60u, 0x6E69616Du, "vfpu3 not lowered yet"); return;
L_08B14A7C:
    if (ctx.gpr[2] == ctx.gpr[30]) {
    rt.unsupported(0x08B14A80u, 0x4F435055u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 70u, 0x08B29BF8u>(ctx, &aot_mem); return;
    }
    goto L_08B14A84;
L_08B14A84:
    rt.unsupported(0x08B14A84u, 0x0029274Cu, "syscall not lowered yet"); return;
L_08B14A88:
    rt.unsupported(0x08B14A88u, 0x4B434950u, "cop2/vfpu not lowered yet"); return;
L_08B14A98:
    rt.unsupported(0x08B14A98u, 0x4B434950u, "cop2/vfpu not lowered yet"); return;
L_08B14AA8:
    rt.unsupported(0x08B14AA8u, 0x45574F50u, "cop1? not lowered yet"); return;
L_08B14AE0:
    rt.unsupported(0x08B14AE0u, 0x74696E49u, "unknown not lowered yet"); return;
L_08B14AF8:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 413u, 0x08A8A8A8u>(ctx, &aot_mem); return;
L_08B14B18:
    rt.unsupported(0x08B14B18u, 0x4353202Au, "unknown not lowered yet"); return;
L_08B14B24:
    rt.unsupported(0x08B14B24u, 0x49205245u, "cop2/vfpu not lowered yet"); return;
L_08B14B30:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 19u, 0x08A8811Cu>(ctx, &aot_mem); return;
L_08B14B38:
    ctx.execute_vfpu_vminmax(67u, 84u, 105u, 1u, false);
    rt.unsupported(0x08B14B3Cu, 0x72207265u, "unknown not lowered yet"); return;
L_08B14B70:
    ctx.execute_vfpu_vscl_ct<67u, 84u, 114u, 1u>();
    rt.unsupported(0x08B14B74u, 0x62616461u, "vfpu0 not lowered yet"); return;
L_08B14B80:
    rt.unsupported(0x08B14B80u, 0x414F4C46u, "unknown not lowered yet"); return;
L_08B14B90:
    rt.unsupported(0x08B14B90u, 0x2044454Eu, "unknown not lowered yet"); return;
L_08B14BA0:
    if (ctx.gpr[18] == ctx.gpr[1]) {
    ctx.gpr[1] = (0u + 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 796u, 0x08B25824u>(ctx, &aot_mem); return;
    }
    goto L_08B14BA8;
L_08B14BA8:
    rt.unsupported(0x08B14BACu, 0x0891D60Cu, "control flow in delay slot"); return;
L_08B14E18:
    rt.unsupported(0x08B14E18u, 0x6E617254u, "vfpu3 not lowered yet"); return;
L_08B14E30:
    rt.unsupported(0x08B14E30u, 0x20726143u, "unknown not lowered yet"); return;
L_08B14E5C:
    rt.unsupported(0x08B14E5Cu, 0x20726143u, "unknown not lowered yet"); return;
L_08B14E88:
    rt.unsupported(0x08B14E88u, 0x6E617254u, "vfpu3 not lowered yet"); return;
L_08B14E9C:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[9]) < 10537 ? 1u : 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[9]) < 10537 ? 1u : 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[9]) < 10537 ? 1u : 0u);
    rt.unsupported(0x08B14EA8u, 0x20292929u, "unknown not lowered yet"); return;
L_08B14EDC:
    if (ctx.gpr[18] != ctx.gpr[20]) {
    rt.unsupported(0x08B14EE0u, 0x43494845u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 985u, 0x08B2642Cu>(ctx, &aot_mem); return;
    }
    goto L_08B14EE4;
L_08B14EE4:
    rt.unsupported(0x08B14EE4u, 0x4E49454Cu, "unknown not lowered yet"); return;
L_08B150D0:
    rt.unsupported(0x08B150D0u, 0x61766E69u, "vfpu0 not lowered yet"); return;
L_08B150E8:
    ctx.execute_vfpu_vcmp_ct<97u, 98u, 1u, 4u>();
    rt.unsupported(0x08B150ECu, 0x766F2065u, "unknown not lowered yet"); return;
L_08B150F8:
    ctx.execute_vfpu_vcmp_ct<97u, 98u, 1u, 4u>();
    rt.unsupported(0x08B150FCu, 0x6E692065u, "vfpu3 not lowered yet"); return;
L_08B1510C:
    ctx.execute_vfpu_vcmp_ct<97u, 98u, 1u, 4u>();
    rt.unsupported(0x08B15110u, 0x6E692065u, "vfpu3 not lowered yet"); return;
L_08B15120:
    rt.unsupported(0x08B15120u, 0x74726170u, "unknown not lowered yet"); return;
L_08B1512C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<104u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<115u, 1u>(vfpu_d); }
    rt.unsupported(0x08B15130u, 0x7261635Fu, "unknown not lowered yet"); return;
L_08B15138:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<104u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<115u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<112u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<95u, 1u>(vfpu_d); }
    // nop
    goto L_08B15144;
L_08B15144:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<104u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<115u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<104u, 101u, 1u, 15u>();
    rt.unsupported(0x08B1514Cu, 0x00000069u, "special? not lowered yet"); return;
L_08B15150:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<104u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<115u, 1u>(vfpu_d); }
    rt.unsupported(0x08B15154u, 0x6B69625Fu, "unknown not lowered yet"); return;
L_08B1515C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<104u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<115u, 1u>(vfpu_d); }
    rt.unsupported(0x08B15160u, 0x6263725Fu, "vfpu0 not lowered yet"); return;
L_08B1516C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<104u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<115u, 1u>(vfpu_d); }
    rt.unsupported(0x08B15170u, 0x7078655Fu, "unknown not lowered yet"); return;
L_08B15178:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<104u, 1u>(vfpu_d); }
    rt.unsupported(0x08B1517Cu, 0x6867696Cu, "unknown not lowered yet"); return;
L_08B1518C:
    ctx.execute_vfpu_vcmp_ct<117u, 116u, 1u, 15u>();
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B15194u, 0x00003436u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 77u, 0x08B30B38u>(ctx, &aot_mem); return;
    }
    goto L_08B15198;
L_08B15198:
    ctx.execute_vfpu_vcmp_ct<117u, 116u, 1u, 15u>();
    ctx.gpr[5] = (ctx.gpr[19] & 28265u);
    rt.unsupported(0x08B151A0u, 0x0034365Fu, "special? not lowered yet"); return;
L_08B151A4:
    ctx.execute_vfpu_vcmp_ct<117u, 116u, 1u, 15u>();
    ctx.gpr[5] = (ctx.gpr[27] & 28265u);
    rt.unsupported(0x08B151ACu, 0x0034365Fu, "special? not lowered yet"); return;
L_08B151B0:
    ctx.execute_vfpu_compare3(98u, 108u, 111u, 1u, 6u);
    ctx.execute_vfpu_compare3(100u, 112u, 111u, 1u, 6u);
    ctx.gpr[22] = (ctx.gpr[1] | 24428u);
    // nop
    goto L_08B151C0;
L_08B151C0:
    rt.unsupported(0x08B151C0u, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B151CC:
    rt.unsupported(0x08B151CCu, 0x706D616Cu, "unknown not lowered yet"); return;
L_08B15240:
    rt.unsupported(0x08B15240u, 0x00646572u, "special? not lowered yet"); return;
L_08B15244:
    ctx.execute_vfpu_vscl_ct<103u, 114u, 101u, 1u>();
    rt.unsupported(0x08B15248u, 0x0000006Eu, "special? not lowered yet"); return;
L_08B1524C:
    ctx.execute_vfpu_vcmp_ct<101u, 108u, 1u, 9u>();
    rt.unsupported(0x08B15250u, 0x0000776Fu, "special? not lowered yet"); return;
L_08B15254:
    ctx.execute_vfpu_vscl_ct<98u, 108u, 117u, 1u>();
    // nop
    goto L_08B1525C;
L_08B1525C:
    rt.unsupported(0x08B1525Cu, 0x70727570u, "unknown not lowered yet"); return;
L_08B15264:
    ctx.execute_vfpu_vscl_ct<109u, 97u, 103u, 1u>();
    rt.unsupported(0x08B15268u, 0x0061746Eu, "special? not lowered yet"); return;
L_08B1526C:
    rt.unsupported(0x08B1526Cu, 0x6E617963u, "vfpu3 not lowered yet"); return;
L_08B15274:
    rt.unsupported(0x08B15274u, 0x74696877u, "unknown not lowered yet"); return;
L_08B1527C:
    ctx.execute_vfpu_compare3(99u, 111u, 108u, 1u, 6u);
    rt.unsupported(0x08B15280u, 0x00007275u, "special? not lowered yet"); return;
L_08B15284:
    rt.unsupported(0x08B15284u, 0x6B636F72u, "unknown not lowered yet"); return;
L_08B15294:
    rt.unsupported(0x08B15294u, 0x70616577u, "unknown not lowered yet"); return;
L_08B1529C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<112u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<105u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<115u, 1u>(vfpu_d); }
    ctx.gpr[14] = (0u | 0u);
    goto L_08B152A4;
L_08B152A4:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<108u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<116u, 97u, 1u, 3u>();
    ctx.gpr[12] = (ctx.gpr[3] < ctx.gpr[18] ? 1u : 0u);
    goto L_08B152B0;
L_08B152B0:
    rt.unsupported(0x08B152B0u, 0x68616469u, "unknown not lowered yet"); return;
L_08B152B8:
    rt.unsupported(0x08B152B8u, 0x6E697473u, "vfpu3 not lowered yet"); return;
L_08B152C0:
    ctx.execute_vfpu_vscl_ct<112u, 101u, 114u, 1u>();
    rt.unsupported(0x08B152C4u, 0x61696E6Eu, "vfpu0 not lowered yet"); return;
L_08B152CC:
    rt.unsupported(0x08B152CCu, 0x746E6573u, "unknown not lowered yet"); return;
L_08B152D8:
    rt.unsupported(0x08B152D8u, 0x72746170u, "unknown not lowered yet"); return;
L_08B152E0:
    rt.unsupported(0x08B152E0u, 0x616E616Du, "vfpu0 not lowered yet"); return;
L_08B152E8:
    ctx.execute_vfpu_vscl_ct<105u, 110u, 102u, 1u>();
    rt.unsupported(0x08B152ECu, 0x73756E72u, "unknown not lowered yet"); return;
L_08B152F4:
    rt.unsupported(0x08B152F4u, 0x73696C62u, "unknown not lowered yet"); return;
L_08B152FC:
    rt.unsupported(0x08B152FCu, 0x796E6F70u, "unknown not lowered yet"); return;
L_08B15304:
    ctx.execute_vfpu_vscl_ct<109u, 117u, 108u, 1u>();
    // nop
    goto L_08B1530C;
L_08B1530C:
    ctx.execute_vfpu_vscl_ct<99u, 104u, 101u, 1u>();
    rt.unsupported(0x08B15310u, 0x00686174u, "special? not lowered yet"); return;
L_08B15314:
    rt.unsupported(0x08B15314u, 0x6E6F6F6Du, "vfpu3 not lowered yet"); return;
L_08B15320:
    ctx.execute_vfpu_vscl_ct<101u, 115u, 112u, 1u>();
    rt.unsupported(0x08B15324u, 0x746E6172u, "unknown not lowered yet"); return;
L_08B1532C:
    rt.unsupported(0x08B1532Cu, 0x7572756Bu, "unknown not lowered yet"); return;
L_08B15334:
    rt.unsupported(0x08B15334u, 0x63626F62u, "vfpu0 not lowered yet"); return;
L_08B1533C:
    rt.unsupported(0x08B1533Cu, 0x70726F63u, "unknown not lowered yet"); return;
L_08B15344:
    rt.unsupported(0x08B15344u, 0x75636573u, "unknown not lowered yet"); return;
L_08B15350:
    rt.unsupported(0x08B15350u, 0x736E6162u, "unknown not lowered yet"); return;
L_08B15358:
    rt.unsupported(0x08B15358u, 0x62626163u, "vfpu0 not lowered yet"); return;
L_08B15360:
    ctx.execute_vfpu_vcmp_ct<116u, 97u, 1u, 3u>();
    rt.unsupported(0x08B15364u, 0x6E6F696Cu, "vfpu3 not lowered yet"); return;
L_08B1536C:
    rt.unsupported(0x08B1536Cu, 0x706D7572u, "unknown not lowered yet"); return;
L_08B15374:
    ctx.execute_vfpu_vcmp_ct<101u, 108u, 1u, 2u>();
    rt.unsupported(0x08B15378u, 0x00707579u, "special? not lowered yet"); return;
L_08B1537C:
    ctx.execute_vfpu_compare3(109u, 114u, 119u, 1u, 6u);
    rt.unsupported(0x08B15380u, 0x0073676Eu, "special? not lowered yet"); return;
L_08B15384:
    rt.unsupported(0x08B15384u, 0x6966616Du, "unknown not lowered yet"); return;
L_08B1538C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<114u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<121u, 1u>(vfpu_d); }
    rt.unsupported(0x08B15390u, 0x00006569u, "special? not lowered yet"); return;
L_08B15394:
    rt.unsupported(0x08B15394u, 0x756B6179u, "unknown not lowered yet"); return;
L_08B1539C:
    rt.unsupported(0x08B1539Cu, 0x62616964u, "vfpu0 not lowered yet"); return;
L_08B153A4:
    rt.unsupported(0x08B153A4u, 0x756C6F63u, "unknown not lowered yet"); return;
L_08B153B0:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<104u, 1u>(vfpu_d); }
    rt.unsupported(0x08B153B4u, 0x00000073u, "special? not lowered yet"); return;
L_08B153B8:
    ctx.execute_vfpu_vcmp_ct<97u, 110u, 1u, 0u>();
    ctx.gpr[13] = (ctx.gpr[3] + ctx.gpr[20]);
    goto L_08B153C0;
L_08B153C0:
    rt.unsupported(0x08B153C0u, 0x6B6E6179u, "unknown not lowered yet"); return;
L_08B153C8:
    ctx.execute_vfpu_vcmp_ct<104u, 101u, 1u, 3u>();
    { const bool signed_ok = ctx.execute_signed_sub(15u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B153CCu, 0x00007962u); return; } }
    goto L_08B153D0;
L_08B153D0:
    rt.unsupported(0x08B153D0u, 0x746E6F70u, "unknown not lowered yet"); return;
L_08B153D8:
    rt.unsupported(0x08B153D8u, 0x72707365u, "unknown not lowered yet"); return;
L_08B153E0:
    rt.unsupported(0x08B153E0u, 0x696E696Du, "unknown not lowered yet"); return;
L_08B153E8:
    rt.unsupported(0x08B153E8u, 0x72746F68u, "unknown not lowered yet"); return;
L_08B153F0:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<105u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<115u, 1u>(vfpu_d); }
    ctx.execute_vfpu_compare3(97u, 99u, 99u, 1u, 6u);
    // nop
    goto L_08B153FC;
L_08B153FC:
    ctx.execute_vfpu_vscl_ct<102u, 111u, 114u, 1u>();
    ctx.gpr[13] = (static_cast<std::int32_t>(ctx.gpr[3]) > static_cast<std::int32_t>(ctx.gpr[9]) ? ctx.gpr[3] : ctx.gpr[9]);
    goto L_08B15404;
L_08B15404:
    ctx.execute_vfpu_vcmp_ct<101u, 108u, 1u, 8u>();
    rt.unsupported(0x08B15408u, 0x00000073u, "special? not lowered yet"); return;
L_08B1540C:
    ctx.execute_vfpu_vscl_ct<98u, 105u, 107u, 1u>();
    // nop
    goto L_08B15414;
L_08B15414:
    ctx.execute_vfpu_vscl_ct<109u, 111u, 112u, 1u>();
    (void)(0u & 0u);
    goto L_08B1541C;
L_08B1541C:
    ctx.execute_vfpu_vcmp_ct<97u, 114u, 1u, 8u>();
    ctx.gpr[15] = (0u | 0u);
    goto L_08B15424;
L_08B15424:
    rt.unsupported(0x08B15424u, 0x74726964u, "unknown not lowered yet"); return;
L_08B15430:
    rt.unsupported(0x08B15430u, 0x74726964u, "unknown not lowered yet"); return;
L_08B1543C:
    ctx.execute_vfpu_vcmp_ct<101u, 108u, 1u, 8u>();
    rt.unsupported(0x08B15440u, 0x00003273u, "special? not lowered yet"); return;
L_08B15444:
    ctx.gpr[12] = (ctx.gpr[3] - ctx.gpr[18]);
    goto L_08B15448;
L_08B15448:
    ctx.execute_vfpu_vcmp_ct<101u, 97u, 1u, 8u>();
    rt.unsupported(0x08B1544Cu, 0x00006874u, "special? not lowered yet"); return;
L_08B15450:
    ctx.execute_vfpu_compare3(97u, 114u, 109u, 1u, 6u);
    rt.unsupported(0x08B15454u, 0x00007275u, "special? not lowered yet"); return;
L_08B15458:
    ctx.execute_vfpu_vcmp_ct<105u, 108u, 1u, 11u>();
    rt.unsupported(0x08B1545Cu, 0x6E657266u, "vfpu3 not lowered yet"); return;
L_08B15464:
    rt.unsupported(0x08B15464u, 0x6167656Du, "vfpu0 not lowered yet"); return;
L_08B15470:
    ctx.execute_vfpu_vscl_ct<114u, 101u, 103u, 1u>();
    rt.unsupported(0x08B15474u, 0x6165686Eu, "vfpu0 not lowered yet"); return;
L_08B1547C:
    rt.unsupported(0x08B1547Cu, 0x69766E69u, "unknown not lowered yet"); return;
L_08B15488:
    ctx.execute_vfpu_vscl_ct<114u, 97u, 99u, 1u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<103u, 1u>(vfpu_d); }
    // nop
    goto L_08B15494;
L_08B15494:
    ctx.execute_vfpu_vscl_ct<114u, 97u, 99u, 1u>();
    { const bool signed_ok = ctx.execute_signed_sub(12u, 3u, 4u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B15498u, 0x00646162u); return; } }
    goto L_08B1549C;
L_08B1549C:
    { const bool signed_ok = ctx.execute_signed_sub(12u, 3u, 20u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B1549Cu, 0x00746162u); return; } }
    goto L_08B154A0;
L_08B154A0:
    rt.unsupported(0x08B154A0u, 0x69616863u, "unknown not lowered yet"); return;
L_08B154AC:
    rt.unsupported(0x08B154ACu, 0x6E657267u, "vfpu3 not lowered yet"); return;
L_08B154B4:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B154B8u, 0x6E657267u, "vfpu3 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 621u, 0x08B2EA48u>(ctx, &aot_mem); return;
    }
    goto L_08B154BC;
L_08B154BC:
    ctx.gpr[12] = (ctx.gpr[3] + ctx.gpr[5]);
    goto L_08B154C0;
L_08B154C0:
    ctx.execute_vfpu_compare3(109u, 111u, 108u, 1u, 6u);
    rt.unsupported(0x08B154C4u, 0x00766F74u, "special? not lowered yet"); return;
L_08B154C8:
    rt.unsupported(0x08B154C8u, 0x636F6C67u, "vfpu0 not lowered yet"); return;
L_08B154D0:
    rt.unsupported(0x08B154D0u, 0x746F6873u, "unknown not lowered yet"); return;
L_08B154D8:
    ctx.gpr[3] = (ctx.gpr[11] ^ 25972u);
    // nop
    goto L_08B154E0;
L_08B154E0:
    ctx.gpr[20] = (ctx.gpr[25] | 27489u);
    // nop
    goto L_08B154E8;
L_08B154E8:
    rt.unsupported(0x08B154E8u, 0x70696E73u, "unknown not lowered yet"); return;
L_08B154F0:
    rt.unsupported(0x08B154F0u, 0x6B636970u, "unknown not lowered yet"); return;
L_08B154F8:
    ctx.execute_vfpu_vscl_ct<112u, 111u, 119u, 1u>();
    rt.unsupported(0x08B154FCu, 0x00707572u, "special? not lowered yet"); return;
L_08B15500:
    ctx.execute_vfpu_vscl_ct<98u, 97u, 115u, 1u>();
    // nop
    goto L_08B15508;
L_08B15508:
    rt.unsupported(0x08B15508u, 0x63656863u, "vfpu0 not lowered yet"); return;
L_08B15514:
    rt.unsupported(0x08B15514u, 0x79616C70u, "unknown not lowered yet"); return;
L_08B1551C:
    ctx.execute_vfpu_vscl_ct<111u, 98u, 106u, 1u>();
    rt.unsupported(0x08B15520u, 0x76697463u, "unknown not lowered yet"); return;
L_08B15528:
    rt.unsupported(0x08B15528u, 0x6B6E6174u, "unknown not lowered yet"); return;
L_08B15530:
    ctx.execute_vfpu_vcmp_ct<97u, 114u, 1u, 3u>();
    rt.unsupported(0x08B15534u, 0x756B636Fu, "unknown not lowered yet"); return;
L_08B1553C:
    rt.unsupported(0x08B1553Cu, 0x67726174u, "vfpu1 not lowered yet"); return;
L_08B1554C:
    rt.unsupported(0x08B1554Cu, 0x6B636970u, "unknown not lowered yet"); return;
L_08B15558:
    rt.unsupported(0x08B15558u, 0x4C786554u, "unknown not lowered yet"); return;
L_08B15564:
    rt.unsupported(0x08B15564u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B15598:
    rt.unsupported(0x08B15598u, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B155A4:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B155A8u, 0x69766963u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 311u, 0x08B32B70u>(ctx, &aot_mem); return;
    }
    goto L_08B155AC;
L_08B155AC:
    // nop
    goto L_08B155B0;
L_08B155B0:
    rt.unsupported(0x08B155B0u, 0x69727073u, "unknown not lowered yet"); return;
L_08B155C0:
    ctx.execute_vfpu_vscl_ct<105u, 100u, 108u, 1u>();
    rt.unsupported(0x08B155C4u, 0x6174735Fu, "vfpu0 not lowered yet"); return;
L_08B155CC:
    rt.unsupported(0x08B155CCu, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B155D8:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B155DCu, 0x706F7473u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 313u, 0x08B32BA4u>(ctx, &aot_mem); return;
    }
    goto L_08B155E0;
L_08B155E0:
    // nop
    goto L_08B155E4;
L_08B155E4:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B155E8u, 0x706F7473u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 314u, 0x08B32BB0u>(ctx, &aot_mem); return;
    }
    goto L_08B155EC;
L_08B155EC:
    (void)(ctx.lo);
    goto L_08B155F0;
L_08B155F0:
    ctx.execute_vfpu_vscl_ct<105u, 100u, 108u, 1u>();
    rt.unsupported(0x08B155F4u, 0x6862685Fu, "unknown not lowered yet"); return;
L_08B155FC:
    ctx.execute_vfpu_vscl_ct<105u, 100u, 108u, 1u>();
    rt.unsupported(0x08B15600u, 0x7269745Fu, "unknown not lowered yet"); return;
L_08B15608:
    ctx.execute_vfpu_vscl_ct<105u, 100u, 108u, 1u>();
    ctx.execute_vfpu_vminmax(95u, 97u, 114u, 1u, false);
    ctx.gpr[12] = (0u | 0u);
    goto L_08B15614;
L_08B15614:
    ctx.execute_vfpu_vscl_ct<105u, 100u, 108u, 1u>();
    rt.unsupported(0x08B15618u, 0x6168635Fu, "vfpu0 not lowered yet"); return;
L_08B15620:
    ctx.execute_vfpu_vscl_ct<105u, 100u, 108u, 1u>();
    rt.unsupported(0x08B15624u, 0x7861745Fu, "unknown not lowered yet"); return;
L_08B1562C:
    rt.unsupported(0x08B1562Cu, 0x735F4F4Bu, "unknown not lowered yet"); return;
L_08B15638:
    rt.unsupported(0x08B15638u, 0x00000074u, "special? not lowered yet"); return;
L_08B1563C:
    rt.unsupported(0x08B1563Cu, 0x735F4F4Bu, "unknown not lowered yet"); return;
L_08B15648:
    // nop
    goto L_08B1564C;
L_08B1564C:
    rt.unsupported(0x08B1564Cu, 0x735F4F4Bu, "unknown not lowered yet"); return;
L_08B15658:
    // nop
    goto L_08B1565C;
L_08B1565C:
    rt.unsupported(0x08B1565Cu, 0x735F4F4Bu, "unknown not lowered yet"); return;
L_08B15668:
    // nop
    goto L_08B1566C;
L_08B1566C:
    rt.unsupported(0x08B1566Cu, 0x735F4F4Bu, "unknown not lowered yet"); return;
L_08B15678:
    // nop
    goto L_08B1567C;
L_08B1567C:
    rt.unsupported(0x08B1567Cu, 0x735F4F4Bu, "unknown not lowered yet"); return;
L_08B15688:
    // nop
    goto L_08B1568C;
L_08B1568C:
    rt.unsupported(0x08B1568Cu, 0x735F4F4Bu, "unknown not lowered yet"); return;
L_08B15698:
    // nop
    goto L_08B1569C;
L_08B1569C:
    rt.unsupported(0x08B1569Cu, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B156AC:
    rt.unsupported(0x08B156ACu, 0x735F4F4Bu, "unknown not lowered yet"); return;
L_08B156B8:
    rt.unsupported(0x08B156B8u, 0x00000074u, "special? not lowered yet"); return;
L_08B156BC:
    rt.unsupported(0x08B156BCu, 0x735F4F4Bu, "unknown not lowered yet"); return;
L_08B156C8:
    rt.unsupported(0x08B156C8u, 0x735F4F4Bu, "unknown not lowered yet"); return;
L_08B156D4:
    // nop
    goto L_08B156D8;
L_08B156D8:
    rt.unsupported(0x08B156D8u, 0x735F4F4Bu, "unknown not lowered yet"); return;
L_08B156E4:
    if (ctx.gpr[2] != ctx.gpr[15]) {
    rt.unsupported(0x08B156E8u, 0x7261705Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1084u, 0x08B27834u>(ctx, &aot_mem); return;
    }
    goto L_08B156EC;
L_08B156EC:
    ctx.execute_vfpu_vcmp_ct<105u, 97u, 1u, 4u>();
    // nop
    goto L_08B156F4;
L_08B156F4:
    if (ctx.gpr[2] != ctx.gpr[15]) {
    ctx.execute_vfpu_vhdp(95u, 108u, 101u, 1u);
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1085u, 0x08B27844u>(ctx, &aot_mem); return;
    }
    goto L_08B156FC;
L_08B156FC:
    rt.unsupported(0x08B156FCu, 0x00005074u, "special? not lowered yet"); return;
L_08B15700:
    if (ctx.gpr[2] != ctx.gpr[15]) {
    rt.unsupported(0x08B15704u, 0x6769725Fu, "vfpu1 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1087u, 0x08B27850u>(ctx, &aot_mem); return;
    }
    goto L_08B15708;
L_08B15708:
    rt.unsupported(0x08B15708u, 0x00507468u, "special? not lowered yet"); return;
L_08B1570C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B15710u, 0x6E6F7266u, "vfpu3 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1102u, 0x08B27C30u>(ctx, &aot_mem); return;
    }
    goto L_08B15714;
L_08B15714:
    rt.unsupported(0x08B15714u, 0x00000074u, "special? not lowered yet"); return;
L_08B15718:
    rt.unsupported(0x08B1571Cu, 0x0000004Cu, "control flow in delay slot"); return;
L_08B15720:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B15724u, 0x6B636162u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1104u, 0x08B27C44u>(ctx, &aot_mem); return;
    }
    goto L_08B15728;
L_08B15728:
    // nop
    goto L_08B1572C;
L_08B1572C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    (void)(ctx.lo);
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1105u, 0x08B27C50u>(ctx, &aot_mem); return;
    }
    goto L_08B15734;
L_08B15734:
    rt.unsupported(0x08B15734u, 0x4F4F4C46u, "unknown not lowered yet"); return;
L_08B15740:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.execute_vfpu_vcmp_ct<97u, 108u, 1u, 7u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1106u, 0x08B27C64u>(ctx, &aot_mem); return;
    }
    goto L_08B15748;
L_08B15748:
    // nop
    goto L_08B1574C;
L_08B1574C:
    rt.unsupported(0x08B1574Cu, 0x4F4F4C46u, "unknown not lowered yet"); return;
L_08B15758:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B1575Cu, 0x69686562u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1107u, 0x08B27C7Cu>(ctx, &aot_mem); return;
    }
    goto L_08B15760;
L_08B15760:
    rt.unsupported(0x08B15760u, 0x0000646Eu, "special? not lowered yet"); return;
L_08B15764:
    rt.unsupported(0x08B15764u, 0x48474946u, "cop2/vfpu not lowered yet"); return;
L_08B15770:
    rt.unsupported(0x08B15770u, 0x48474946u, "cop2/vfpu not lowered yet"); return;
L_08B1577C:
    rt.unsupported(0x08B1577Cu, 0x48474946u, "cop2/vfpu not lowered yet"); return;
L_08B15788:
    rt.unsupported(0x08B15788u, 0x48474946u, "cop2/vfpu not lowered yet"); return;
L_08B15794:
    ctx.execute_vfpu_compare3(108u, 95u, 104u, 1u, 6u);
    rt.unsupported(0x08B15798u, 0x00006B6Fu, "special? not lowered yet"); return;
L_08B1579C:
    ctx.execute_vfpu_compare3(114u, 95u, 104u, 1u, 6u);
    rt.unsupported(0x08B157A0u, 0x00006B6Fu, "special? not lowered yet"); return;
L_08B157A4:
    ctx.execute_vfpu_vscl_ct<117u, 112u, 112u, 1u>();
    rt.unsupported(0x08B157A8u, 0x74756372u, "unknown not lowered yet"); return;
L_08B157B0:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<104u, 1u>(vfpu_d); }
    rt.unsupported(0x08B157B4u, 0x74747562u, "unknown not lowered yet"); return;
L_08B157BC:
    rt.unsupported(0x08B157BCu, 0x6E6F7266u, "vfpu3 not lowered yet"); return;
L_08B157C8:
    rt.unsupported(0x08B157C8u, 0x6E756F72u, "vfpu3 not lowered yet"); return;
L_08B157D4:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    ctx.execute_vfpu_compare3(108u, 95u, 104u, 1u, 6u);
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 786u, 0x08B2FD78u>(ctx, &aot_mem); return;
    }
    goto L_08B157DC;
L_08B157DC:
    rt.unsupported(0x08B157DCu, 0x00006B6Fu, "special? not lowered yet"); return;
L_08B157E0:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    ctx.execute_vfpu_compare3(114u, 95u, 104u, 1u, 6u);
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 787u, 0x08B2FD84u>(ctx, &aot_mem); return;
    }
    goto L_08B157E8;
L_08B157E8:
    rt.unsupported(0x08B157E8u, 0x00006B6Fu, "special? not lowered yet"); return;
L_08B157EC:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    ctx.execute_vfpu_vscl_ct<117u, 112u, 112u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 788u, 0x08B2FD90u>(ctx, &aot_mem); return;
    }
    goto L_08B157F4;
L_08B157F4:
    rt.unsupported(0x08B157F4u, 0x74756372u, "unknown not lowered yet"); return;
L_08B157FC:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<104u, 1u>(vfpu_d); }
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 789u, 0x08B2FDA0u>(ctx, &aot_mem); return;
    }
    goto L_08B15804;
L_08B15804:
    rt.unsupported(0x08B15804u, 0x74747562u, "unknown not lowered yet"); return;
L_08B1580C:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B15810u, 0x6E6F7266u, "vfpu3 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 790u, 0x08B2FDB0u>(ctx, &aot_mem); return;
    }
    goto L_08B15814;
L_08B15814:
    rt.unsupported(0x08B15814u, 0x63696B74u, "vfpu0 not lowered yet"); return;
L_08B1581C:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B15820u, 0x756F6872u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 791u, 0x08B2FDC0u>(ctx, &aot_mem); return;
    }
    goto L_08B15824;
L_08B15824:
    rt.unsupported(0x08B15824u, 0x00006573u, "special? not lowered yet"); return;
L_08B15828:
    rt.unsupported(0x08B15828u, 0x626D6F62u, "vfpu0 not lowered yet"); return;
L_08B15830:
    rt.unsupported(0x08B15830u, 0x636E7570u, "vfpu0 not lowered yet"); return;
L_08B15838:
    rt.unsupported(0x08B15838u, 0x4B43494Bu, "cop2/vfpu not lowered yet"); return;
L_08B15844:
    if (ctx.gpr[2] == ctx.gpr[1]) {
    rt.unsupported(0x08B15848u, 0x745F4E4Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1064u, 0x08B26DA4u>(ctx, &aot_mem); return;
    }
    goto L_08B1584C;
L_08B1584C:
    rt.unsupported(0x08B1584Cu, 0x776F7268u, "unknown not lowered yet"); return;
L_08B15854:
    rt.unsupported(0x08B15854u, 0x48474946u, "cop2/vfpu not lowered yet"); return;
L_08B15860:
    // nop
    goto L_08B15864;
L_08B15864:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B15868u, 0x6B63616Au, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 428u, 0x08B2DDF4u>(ctx, &aot_mem); return;
    }
    goto L_08B1586C;
L_08B1586C:
    rt.unsupported(0x08B1586Cu, 0x48526465u, "cop2/vfpu not lowered yet"); return;
L_08B15874:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B15878u, 0x63616A4Cu, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 431u, 0x08B2DE04u>(ctx, &aot_mem); return;
    }
    goto L_08B1587C;
L_08B1587C:
    rt.unsupported(0x08B15880u, 0x00005348u, "control flow in delay slot"); return;
L_08B15884:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B15888u, 0x6B63616Au, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 434u, 0x08B2DE14u>(ctx, &aot_mem); return;
    }
    goto L_08B1588C;
L_08B1588C:
    rt.unsupported(0x08B1588Cu, 0x484C6465u, "cop2/vfpu not lowered yet"); return;
L_08B15894:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B15898u, 0x63616A4Cu, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 437u, 0x08B2DE24u>(ctx, &aot_mem); return;
    }
    goto L_08B1589C;
L_08B1589C:
    rt.unsupported(0x08B1589Cu, 0x4C64656Bu, "unknown not lowered yet"); return;
L_08B158A4:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B158A8u, 0x63616A51u, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 935u, 0x08B25DB4u>(ctx, &aot_mem); return;
    }
    goto L_08B158AC;
L_08B158AC:
    (void)(0u < 0u ? 1u : 0u);
    goto L_08B158B0;
L_08B158B0:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B158B4u, 0x63616A51u, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 936u, 0x08B25DC0u>(ctx, &aot_mem); return;
    }
    goto L_08B158B8;
L_08B158B8:
    ctx.gpr[12] = (ctx.gpr[3] < ctx.gpr[4] ? 1u : 0u);
    goto L_08B158BC;
L_08B158BC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B158C0u, 0x67696C61u, "vfpu1 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 937u, 0x08B25DCCu>(ctx, &aot_mem); return;
    }
    goto L_08B158C4;
L_08B158C4:
    rt.unsupported(0x08B158C4u, 0x484C5F6Eu, "cop2/vfpu not lowered yet"); return;
L_08B158CC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B158D0u, 0x67696C61u, "vfpu1 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 938u, 0x08B25DDCu>(ctx, &aot_mem); return;
    }
    goto L_08B158D4;
L_08B158D4:
    rt.unsupported(0x08B158D8u, 0x0053484Cu, "control flow in delay slot"); return;
L_08B158DC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B158E0u, 0x6E65706Fu, "vfpu3 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 939u, 0x08B25DECu>(ctx, &aot_mem); return;
    }
    goto L_08B158E4;
L_08B158E4:
    if (ctx.gpr[26] == ctx.gpr[8]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 25u, 0x08B28A64u>(ctx, &aot_mem); return;
    }
    goto L_08B158EC;
L_08B158EC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B158F0u, 0x726F6F64u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 940u, 0x08B25DFCu>(ctx, &aot_mem); return;
    }
    goto L_08B158F4;
L_08B158F4:
    rt.unsupported(0x08B158F4u, 0x6B636F6Cu, "unknown not lowered yet"); return;
L_08B15900:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.execute_vfpu_vcmp_ct<117u, 108u, 1u, 0u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 941u, 0x08B25E10u>(ctx, &aot_mem); return;
    }
    goto L_08B15908;
L_08B15908:
    rt.unsupported(0x08B1590Cu, 0x0053484Cu, "control flow in delay slot"); return;
L_08B15910:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.execute_vfpu_vcmp_ct<117u, 108u, 1u, 0u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 942u, 0x08B25E20u>(ctx, &aot_mem); return;
    }
    goto L_08B15918;
L_08B15918:
    rt.unsupported(0x08B15918u, 0x4C74756Fu, "unknown not lowered yet"); return;
L_08B15924:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B15928u, 0x69746567u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 943u, 0x08B25E34u>(ctx, &aot_mem); return;
    }
    goto L_08B1592C;
L_08B1592C:
    rt.unsupported(0x08B1592Cu, 0x484C5F6Eu, "cop2/vfpu not lowered yet"); return;
L_08B15934:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B15938u, 0x69746567u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 944u, 0x08B25E44u>(ctx, &aot_mem); return;
    }
    goto L_08B1593C;
L_08B1593C:
    rt.unsupported(0x08B1593Cu, 0x4C5F4C6Eu, "unknown not lowered yet"); return;
L_08B15944:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B15948u, 0x736F6C63u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 945u, 0x08B25E54u>(ctx, &aot_mem); return;
    }
    goto L_08B1594C;
L_08B1594C:
    ctx.execute_vfpu_compare3(101u, 100u, 111u, 1u, 6u);
    rt.unsupported(0x08B15950u, 0x484C5F72u, "cop2/vfpu not lowered yet"); return;
L_08B15958:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B1595Cu, 0x736F6C63u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 946u, 0x08B25E68u>(ctx, &aot_mem); return;
    }
    goto L_08B15960;
L_08B15960:
    ctx.execute_vfpu_compare3(101u, 100u, 111u, 1u, 6u);
    rt.unsupported(0x08B15964u, 0x4C5F4C72u, "unknown not lowered yet"); return;
L_08B1596C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.execute_vfpu_vcmp_ct<111u, 108u, 1u, 2u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 947u, 0x08B25E7Cu>(ctx, &aot_mem); return;
    }
    goto L_08B15974;
L_08B15974:
    rt.unsupported(0x08B15974u, 0x726F6F64u, "unknown not lowered yet"); return;
L_08B1597C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.execute_vfpu_vcmp_ct<111u, 108u, 1u, 2u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 948u, 0x08B25E8Cu>(ctx, &aot_mem); return;
    }
    goto L_08B15984;
L_08B15984:
    rt.unsupported(0x08B15984u, 0x726F6F64u, "unknown not lowered yet"); return;
L_08B1598C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B15990u, 0x706D756Au, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 949u, 0x08B25E9Cu>(ctx, &aot_mem); return;
    }
    goto L_08B15994;
L_08B15994:
    rt.unsupported(0x08B15994u, 0x4C5F6E69u, "unknown not lowered yet"); return;
L_08B1599C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.execute_vfpu_compare3(103u, 101u, 116u, 1u, 6u);
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 950u, 0x08B25EACu>(ctx, &aot_mem); return;
    }
    goto L_08B159A4;
L_08B159A4:
    rt.unsupported(0x08B159A4u, 0x4C5F7475u, "unknown not lowered yet"); return;
L_08B159AC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.execute_vfpu_compare3(103u, 101u, 116u, 1u, 6u);
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 951u, 0x08B25EBCu>(ctx, &aot_mem); return;
    }
    goto L_08B159B4;
L_08B159B4:
    rt.unsupported(0x08B159B8u, 0x0053484Cu, "control flow in delay slot"); return;
L_08B159BC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B159C0u, 0x736F6C63u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 952u, 0x08B25ECCu>(ctx, &aot_mem); return;
    }
    goto L_08B159C4;
L_08B159C4:
    rt.unsupported(0x08B159C4u, 0x484C5F65u, "cop2/vfpu not lowered yet"); return;
L_08B159CC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B159D0u, 0x67696C61u, "vfpu1 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 953u, 0x08B25EDCu>(ctx, &aot_mem); return;
    }
    goto L_08B159D4;
L_08B159D4:
    rt.unsupported(0x08B159D4u, 0x48525F6Eu, "cop2/vfpu not lowered yet"); return;
L_08B159DC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B159E0u, 0x67696C61u, "vfpu1 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 954u, 0x08B25EECu>(ctx, &aot_mem); return;
    }
    goto L_08B159E4;
L_08B159E4:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.lo);
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1101u, 0x08B27BA0u>(ctx, &aot_mem); return;
    }
    goto L_08B159EC;
L_08B159EC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B159F0u, 0x6E65706Fu, "vfpu3 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 955u, 0x08B25EFCu>(ctx, &aot_mem); return;
    }
    goto L_08B159F4;
L_08B159F4:
    if (ctx.gpr[26] == ctx.gpr[8]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 77u, 0x08B2A374u>(ctx, &aot_mem); return;
    }
    goto L_08B159FC;
L_08B159FC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B15A00u, 0x726F6F64u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 956u, 0x08B25F0Cu>(ctx, &aot_mem); return;
    }
    goto L_08B15A04;
L_08B15A04:
    rt.unsupported(0x08B15A04u, 0x6B636F6Cu, "unknown not lowered yet"); return;
L_08B15A10:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.execute_vfpu_vcmp_ct<117u, 108u, 1u, 0u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 957u, 0x08B25F20u>(ctx, &aot_mem); return;
    }
    goto L_08B15A18;
L_08B15A18:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    ctx.gpr[9] = (ctx.lo);
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 334u, 0x08B32FD8u>(ctx, &aot_mem); return;
    }
    goto L_08B15A20;
L_08B15A20:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.execute_vfpu_vcmp_ct<117u, 108u, 1u, 0u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 958u, 0x08B25F30u>(ctx, &aot_mem); return;
    }
    goto L_08B15A28;
L_08B15A28:
    rt.unsupported(0x08B15A28u, 0x4C74756Fu, "unknown not lowered yet"); return;
L_08B15A34:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B15A38u, 0x69746567u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 959u, 0x08B25F44u>(ctx, &aot_mem); return;
    }
    goto L_08B15A3C;
L_08B15A3C:
    rt.unsupported(0x08B15A3Cu, 0x48525F6Eu, "cop2/vfpu not lowered yet"); return;
L_08B15A44:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B15A48u, 0x69746567u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 960u, 0x08B25F54u>(ctx, &aot_mem); return;
    }
    goto L_08B15A4C;
L_08B15A4C:
    rt.unsupported(0x08B15A50u, 0x00005348u, "control flow in delay slot"); return;
L_08B15A54:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B15A58u, 0x736F6C63u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 961u, 0x08B25F64u>(ctx, &aot_mem); return;
    }
    goto L_08B15A5C;
L_08B15A5C:
    ctx.execute_vfpu_compare3(101u, 100u, 111u, 1u, 6u);
    rt.unsupported(0x08B15A60u, 0x48525F72u, "cop2/vfpu not lowered yet"); return;
L_08B15A68:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B15A6Cu, 0x736F6C63u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 962u, 0x08B25F78u>(ctx, &aot_mem); return;
    }
    goto L_08B15A70;
L_08B15A70:
    ctx.execute_vfpu_compare3(101u, 100u, 111u, 1u, 6u);
    rt.unsupported(0x08B15A78u, 0x00005348u, "control flow in delay slot"); return;
L_08B15A7C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.execute_vfpu_vhdp(115u, 104u, 117u, 1u);
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 963u, 0x08B25F8Cu>(ctx, &aot_mem); return;
    }
    goto L_08B15A84;
L_08B15A84:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    ctx.gpr[9] = (ctx.lo);
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 83u, 0x08B30C20u>(ctx, &aot_mem); return;
    }
    goto L_08B15A8C;
L_08B15A8C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B15A90u, 0x7568734Cu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 964u, 0x08B25F9Cu>(ctx, &aot_mem); return;
    }
    goto L_08B15A94;
L_08B15A94:
    ctx.execute_vfpu_vscl_ct<102u, 102u, 108u, 1u>();
    if (ctx.gpr[26] == ctx.gpr[8]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 81u, 0x08B2A418u>(ctx, &aot_mem); return;
    }
    goto L_08B15AA0;
L_08B15AA0:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B15AA4u, 0x00746973u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 965u, 0x08B25FB0u>(ctx, &aot_mem); return;
    }
    goto L_08B15AA8;
L_08B15AA8:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B15AACu, 0x7469734Cu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 966u, 0x08B25FB8u>(ctx, &aot_mem); return;
    }
    goto L_08B15AB0;
L_08B15AB0:
    // nop
    goto L_08B15AB4;
L_08B15AB4:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B15AB8u, 0x70746973u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 967u, 0x08B25FC4u>(ctx, &aot_mem); return;
    }
    goto L_08B15ABC;
L_08B15ABC:
    // nop
    goto L_08B15AC0;
L_08B15AC0:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B15AC4u, 0x70746973u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 968u, 0x08B25FD0u>(ctx, &aot_mem); return;
    }
    goto L_08B15AC8;
L_08B15AC8:
    rt.unsupported(0x08B15AC8u, 0x00004F4Cu, "syscall not lowered yet"); return;
L_08B15ACC:
    if (ctx.gpr[18] != ctx.gpr[9]) {
    rt.unsupported(0x08B15AD0u, 0x004C5F45u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 80u, 0x08B2A3E0u>(ctx, &aot_mem); return;
    }
    goto L_08B15AD4;
L_08B15AD4:
    rt.unsupported(0x08B15AD4u, 0x76697244u, "unknown not lowered yet"); return;
L_08B15ADC:
    rt.unsupported(0x08B15ADCu, 0x76697244u, "unknown not lowered yet"); return;
L_08B15AE8:
    rt.unsupported(0x08B15AE8u, 0x76697244u, "unknown not lowered yet"); return;
L_08B15AF4:
    rt.unsupported(0x08B15AF4u, 0x76697244u, "unknown not lowered yet"); return;
L_08B15B00:
    rt.unsupported(0x08B15B00u, 0x76697244u, "unknown not lowered yet"); return;
L_08B15B04:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    (void)(ctx.lo);
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 540u, 0x08B2E49Cu>(ctx, &aot_mem); return;
    }
    goto L_08B15B0C;
L_08B15B0C:
    rt.unsupported(0x08B15B0Cu, 0x76697244u, "unknown not lowered yet"); return;
L_08B15B18:
    rt.unsupported(0x08B15B18u, 0x76697244u, "unknown not lowered yet"); return;
L_08B15B24:
    rt.unsupported(0x08B15B28u, 0x0000424Cu, "control flow in delay slot"); return;
L_08B15B2C:
    if (ctx.gpr[18] != ctx.gpr[9]) {
    rt.unsupported(0x08B15B30u, 0x4F425F45u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 84u, 0x08B2A440u>(ctx, &aot_mem); return;
    }
    goto L_08B15B34;
L_08B15B34:
    rt.unsupported(0x08B15B34u, 0x00005441u, "special? not lowered yet"); return;
L_08B15B38:
    if (ctx.gpr[18] != ctx.gpr[9]) {
    rt.unsupported(0x08B15B3Cu, 0x4F425F45u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 85u, 0x08B2A44Cu>(ctx, &aot_mem); return;
    }
    goto L_08B15B40;
L_08B15B40:
    rt.unsupported(0x08B15B40u, 0x4C5F5441u, "unknown not lowered yet"); return;
L_08B15B48:
    if (ctx.gpr[18] != ctx.gpr[9]) {
    rt.unsupported(0x08B15B4Cu, 0x4F425F45u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 86u, 0x08B2A45Cu>(ctx, &aot_mem); return;
    }
    goto L_08B15B50;
L_08B15B50:
    if (ctx.gpr[18] == ctx.gpr[31]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 215u, 0x08B2AC58u>(ctx, &aot_mem); return;
    }
    goto L_08B15B58;
L_08B15B58:
    if (ctx.gpr[18] != ctx.gpr[9]) {
    rt.unsupported(0x08B15B5Cu, 0x4F425F45u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 88u, 0x08B2A46Cu>(ctx, &aot_mem); return;
    }
    goto L_08B15B60;
L_08B15B60:
    rt.unsupported(0x08B15B60u, 0x625F5441u, "vfpu0 not lowered yet"); return;
L_08B15B68:
    rt.unsupported(0x08B15B68u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15B78:
    rt.unsupported(0x08B15B78u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15B88:
    rt.unsupported(0x08B15B88u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15B98:
    rt.unsupported(0x08B15B98u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15BA8:
    rt.unsupported(0x08B15BA8u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15BB4:
    rt.unsupported(0x08B15BB4u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15BC0:
    rt.unsupported(0x08B15BC0u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15BCC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.execute_vfpu_compare3(103u, 101u, 116u, 1u, 6u);
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 971u, 0x08B260DCu>(ctx, &aot_mem); return;
    }
    goto L_08B15BD4;
L_08B15BD4:
    rt.unsupported(0x08B15BD8u, 0x00005348u, "control flow in delay slot"); return;
L_08B15BDC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.execute_vfpu_compare3(103u, 101u, 116u, 1u, 6u);
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 972u, 0x08B260ECu>(ctx, &aot_mem); return;
    }
    goto L_08B15BE4;
L_08B15BE4:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.lo);
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 320u, 0x08B32DBCu>(ctx, &aot_mem); return;
    }
    goto L_08B15BEC;
L_08B15BEC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B15BF0u, 0x736F6C63u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 973u, 0x08B260FCu>(ctx, &aot_mem); return;
    }
    goto L_08B15BF4;
L_08B15BF4:
    rt.unsupported(0x08B15BF4u, 0x48525F65u, "cop2/vfpu not lowered yet"); return;
L_08B15BFC:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B15C00u, 0x6B6F6F68u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 513u, 0x08B2E18Cu>(ctx, &aot_mem); return;
    }
    goto L_08B15C04;
L_08B15C04:
    rt.unsupported(0x08B15C04u, 0x61747265u, "vfpu0 not lowered yet"); return;
L_08B15C0C:
    rt.unsupported(0x08B15C0Cu, 0x49415254u, "cop2/vfpu not lowered yet"); return;
L_08B15C18:
    rt.unsupported(0x08B15C18u, 0x49415254u, "cop2/vfpu not lowered yet"); return;
L_08B15C28:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B15C2Cu, 0x77617263u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 974u, 0x08B26138u>(ctx, &aot_mem); return;
    }
    goto L_08B15C30;
L_08B15C30:
    rt.unsupported(0x08B15C30u, 0x74756F6Cu, "unknown not lowered yet"); return;
L_08B15C38:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.execute_vfpu_vcmp_ct<111u, 108u, 1u, 2u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 975u, 0x08B26148u>(ctx, &aot_mem); return;
    }
    goto L_08B15C40;
L_08B15C40:
    rt.unsupported(0x08B15C44u, 0x0053484Cu, "control flow in delay slot"); return;
L_08B15C48:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.execute_vfpu_vcmp_ct<111u, 108u, 1u, 2u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 976u, 0x08B26158u>(ctx, &aot_mem); return;
    }
    goto L_08B15C50;
L_08B15C50:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    ctx.gpr[9] = (ctx.lo);
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 347u, 0x08B33210u>(ctx, &aot_mem); return;
    }
    goto L_08B15C58;
L_08B15C58:
    rt.unsupported(0x08B15C58u, 0x75746547u, "unknown not lowered yet"); return;
L_08B15C60:
    rt.unsupported(0x08B15C60u, 0x75746547u, "unknown not lowered yet"); return;
L_08B15C6C:
    if (ctx.gpr[2] == ctx.gpr[13]) {
    rt.unsupported(0x08B15C70u, 0x75616C5Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 295u, 0x08B2B198u>(ctx, &aot_mem); return;
    }
    goto L_08B15C74;
L_08B15C74:
    rt.unsupported(0x08B15C74u, 0x0068636Eu, "special? not lowered yet"); return;
L_08B15C78:
    if (ctx.gpr[2] == ctx.gpr[13]) {
    rt.unsupported(0x08B15C7Cu, 0x696C675Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 296u, 0x08B2B1A4u>(ctx, &aot_mem); return;
    }
    goto L_08B15C80;
L_08B15C80:
    ctx.gpr[12] = (0u & 0u);
    goto L_08B15C84;
L_08B15C84:
    if (ctx.gpr[2] == ctx.gpr[13]) {
    rt.unsupported(0x08B15C88u, 0x6E616C5Fu, "vfpu3 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 298u, 0x08B2B1B0u>(ctx, &aot_mem); return;
    }
    goto L_08B15C8C;
L_08B15C8C:
    (void)(0u & 0u);
    goto L_08B15C90;
L_08B15C90:
    rt.unsupported(0x08B15C90u, 0x4C4C4146u, "unknown not lowered yet"); return;
L_08B15C9C:
    rt.unsupported(0x08B15C9Cu, 0x4C4C4146u, "unknown not lowered yet"); return;
L_08B15CA8:
    rt.unsupported(0x08B15CA8u, 0x4C4C4146u, "unknown not lowered yet"); return;
L_08B15CB4:
    rt.unsupported(0x08B15CB4u, 0x4C4C4146u, "unknown not lowered yet"); return;
L_08B15CC4:
    rt.unsupported(0x08B15CC4u, 0x4C4C4146u, "unknown not lowered yet"); return;
L_08B15CD0:
    rt.unsupported(0x08B15CD0u, 0x4C4C4146u, "unknown not lowered yet"); return;
L_08B15CDC:
    rt.unsupported(0x08B15CDCu, 0x735F5645u, "unknown not lowered yet"); return;
L_08B15CE4:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<86u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<95u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<69u, 1u>(vfpu_d); }
    rt.unsupported(0x08B15CE8u, 0x00657669u, "special? not lowered yet"); return;
L_08B15CEC:
    ctx.execute_vfpu_vminmax(99u, 111u, 109u, 1u, false);
    ctx.execute_vfpu_compare3(97u, 110u, 100u, 1u, 6u);
    ctx.execute_vfpu_vcmp_ct<114u, 111u, 1u, 15u>();
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B15CFC;
L_08B15CFC:
    rt.unsupported(0x08B15CFCu, 0x45525058u, "cop1? not lowered yet"); return;
L_08B15D0C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<114u, 1u>(vfpu_d); }
    rt.unsupported(0x08B15D10u, 0x736F7263u, "unknown not lowered yet"); return;
L_08B15D18:
    rt.unsupported(0x08B15D18u, 0x4E525554u, "unknown not lowered yet"); return;
L_08B15D24:
    rt.unsupported(0x08B15D24u, 0x45525241u, "cop1? not lowered yet"); return;
L_08B15D30:
    if (ctx.gpr[26] != ctx.gpr[15]) {
    rt.unsupported(0x08B15D34u, 0x0000004Eu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 127u, 0x08B2A644u>(ctx, &aot_mem); return;
    }
    goto L_08B15D38;
L_08B15D38:
    rt.unsupported(0x08B15D38u, 0x4B435544u, "cop2/vfpu not lowered yet"); return;
L_08B15D44:
    rt.unsupported(0x08B15D44u, 0x4B435544u, "cop2/vfpu not lowered yet"); return;
L_08B15D50:
    if (ctx.gpr[2] == ctx.gpr[1]) {
    rt.unsupported(0x08B15D54u, 0x635F4E4Fu, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1073u, 0x08B272B0u>(ctx, &aot_mem); return;
    }
    goto L_08B15D58;
L_08B15D58:
    rt.unsupported(0x08B15D58u, 0x63756F72u, "vfpu0 not lowered yet"); return;
L_08B15D60:
    rt.unsupported(0x08B15D60u, 0x4F4C4252u, "unknown not lowered yet"); return;
L_08B15D70:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<104u, 1u>(vfpu_d); }
    rt.unsupported(0x08B15D74u, 0x00707573u, "special? not lowered yet"); return;
L_08B15D78:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<104u, 1u>(vfpu_d); }
    if (ctx.gpr[26] != ctx.gpr[15]) {
    rt.unsupported(0x08B15D80u, 0x00005245u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1062u, 0x08B26B4Cu>(ctx, &aot_mem); return;
    }
    goto L_08B15D84;
L_08B15D84:
    rt.unsupported(0x08B15D84u, 0x4B435546u, "cop2/vfpu not lowered yet"); return;
L_08B15D8C:
    rt.unsupported(0x08B15D8Cu, 0x4E4F4850u, "unknown not lowered yet"); return;
L_08B15D98:
    rt.unsupported(0x08B15D98u, 0x4E4F4850u, "unknown not lowered yet"); return;
L_08B15DA4:
    rt.unsupported(0x08B15DA4u, 0x4E4F4850u, "unknown not lowered yet"); return;
L_08B15DB0:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B15DB4u, 0x776F645Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1074u, 0x08B27300u>(ctx, &aot_mem); return;
    }
    goto L_08B15DB8;
L_08B15DB8:
    rt.unsupported(0x08B15DB8u, 0x0000006Eu, "special? not lowered yet"); return;
L_08B15DBC:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B15DC0u, 0x0070755Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1075u, 0x08B2730Cu>(ctx, &aot_mem); return;
    }
    goto L_08B15DC4;
L_08B15DC4:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    ctx.execute_vfpu_vcmp_ct<105u, 100u, 1u, 15u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1076u, 0x08B27314u>(ctx, &aot_mem); return;
    }
    goto L_08B15DCC;
L_08B15DCC:
    (void)(0u | 0u);
    goto L_08B15DD0;
L_08B15DD0:
    rt.unsupported(0x08B15DD0u, 0x004D5441u, "special? not lowered yet"); return;
L_08B15DD4:
    ctx.execute_vfpu_vscl_ct<97u, 98u, 115u, 1u>();
    rt.unsupported(0x08B15DD8u, 0x00006C69u, "special? not lowered yet"); return;
L_08B15DDC:
    rt.unsupported(0x08B15DDCu, 0x43414F43u, "unknown not lowered yet"); return;
L_08B15DE8:
    rt.unsupported(0x08B15DE8u, 0x43414F43u, "unknown not lowered yet"); return;
L_08B15DF4:
    rt.unsupported(0x08B15DF4u, 0x43414F43u, "unknown not lowered yet"); return;
L_08B15E00:
    rt.unsupported(0x08B15E00u, 0x43414F43u, "unknown not lowered yet"); return;
L_08B15E0C:
    rt.unsupported(0x08B15E0Cu, 0x43414F43u, "unknown not lowered yet"); return;
L_08B15E14:
    rt.unsupported(0x08B15E14u, 0x00004C74u, "special? not lowered yet"); return;
L_08B15E18:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B15E1Cu, 0x6E65706Fu, "vfpu3 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 977u, 0x08B26374u>(ctx, &aot_mem); return;
    }
    goto L_08B15E20;
L_08B15E20:
    rt.unsupported(0x08B15E20u, 0x0000004Cu, "syscall not lowered yet"); return;
L_08B15E24:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B15E28u, 0x69746567u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 978u, 0x08B26380u>(ctx, &aot_mem); return;
    }
    goto L_08B15E2C;
L_08B15E2C:
    rt.unsupported(0x08B15E2Cu, 0x00004C6Eu, "special? not lowered yet"); return;
L_08B15E30:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B15E34u, 0x736F6C63u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 979u, 0x08B2638Cu>(ctx, &aot_mem); return;
    }
    goto L_08B15E38;
L_08B15E38:
    ctx.gpr[9] = (0u | 0u);
    goto L_08B15E3C;
L_08B15E3C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.execute_vfpu_compare3(103u, 101u, 116u, 1u, 6u);
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 980u, 0x08B26398u>(ctx, &aot_mem); return;
    }
    goto L_08B15E44;
L_08B15E44:
    rt.unsupported(0x08B15E44u, 0x004C7475u, "special? not lowered yet"); return;
L_08B15E48:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B15E4Cu, 0x6E65706Fu, "vfpu3 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 981u, 0x08B263A4u>(ctx, &aot_mem); return;
    }
    goto L_08B15E50;
L_08B15E50:
    // nop
    goto L_08B15E54;
L_08B15E54:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B15E58u, 0x69746567u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 982u, 0x08B263B0u>(ctx, &aot_mem); return;
    }
    goto L_08B15E5C;
L_08B15E5C:
    rt.unsupported(0x08B15E5Cu, 0x0000006Eu, "special? not lowered yet"); return;
L_08B15E60:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B15E64u, 0x736F6C63u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 983u, 0x08B263BCu>(ctx, &aot_mem); return;
    }
    goto L_08B15E68;
L_08B15E68:
    (void)(0u | 0u);
    goto L_08B15E6C;
L_08B15E6C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.execute_vfpu_compare3(103u, 101u, 116u, 1u, 6u);
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 984u, 0x08B263C8u>(ctx, &aot_mem); return;
    }
    goto L_08B15E74;
L_08B15E74:
    rt.unsupported(0x08B15E74u, 0x00007475u, "special? not lowered yet"); return;
L_08B15E78:
    rt.unsupported(0x08B15E78u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15E84:
    rt.unsupported(0x08B15E84u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15E90:
    rt.unsupported(0x08B15E90u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15E9C:
    rt.unsupported(0x08B15E9Cu, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15EA8:
    rt.unsupported(0x08B15EA8u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15EB4:
    rt.unsupported(0x08B15EB4u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15EC0:
    rt.unsupported(0x08B15EC0u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15ED0:
    rt.unsupported(0x08B15ED0u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15EE0:
    rt.unsupported(0x08B15EE0u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15EF0:
    rt.unsupported(0x08B15EF0u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15EFC:
    rt.unsupported(0x08B15EFCu, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15F08:
    rt.unsupported(0x08B15F08u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15F18:
    rt.unsupported(0x08B15F18u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15F28:
    rt.unsupported(0x08B15F28u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15F3C:
    rt.unsupported(0x08B15F3Cu, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15F50:
    rt.unsupported(0x08B15F50u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15F64:
    rt.unsupported(0x08B15F64u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15F74:
    rt.unsupported(0x08B15F74u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15F84:
    rt.unsupported(0x08B15F84u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15F90:
    rt.unsupported(0x08B15F90u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15F9C:
    rt.unsupported(0x08B15F9Cu, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15FA8:
    rt.unsupported(0x08B15FA8u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15FB4:
    rt.unsupported(0x08B15FB4u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15FC0:
    rt.unsupported(0x08B15FC0u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15FCC:
    rt.unsupported(0x08B15FCCu, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15FDC:
    rt.unsupported(0x08B15FDCu, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15FEC:
    rt.unsupported(0x08B15FECu, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15FFC:
    rt.unsupported(0x08B15FFCu, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B16008:
    rt.unsupported(0x08B16008u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B16014:
    rt.unsupported(0x08B16014u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B16024:
    rt.unsupported(0x08B16024u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B16034:
    rt.unsupported(0x08B16034u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B16048:
    rt.unsupported(0x08B16048u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B1605C:
    rt.unsupported(0x08B1605Cu, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B16070:
    rt.unsupported(0x08B16070u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B16080:
    rt.unsupported(0x08B16080u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B16090:
    rt.unsupported(0x08B16090u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B1609C:
    rt.unsupported(0x08B1609Cu, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B160A8:
    rt.unsupported(0x08B160A8u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B160B4:
    rt.unsupported(0x08B160B4u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B160C0:
    rt.unsupported(0x08B160C0u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B160CC:
    rt.unsupported(0x08B160CCu, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B160D8:
    rt.unsupported(0x08B160D8u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B160E8:
    rt.unsupported(0x08B160E8u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B160F8:
    rt.unsupported(0x08B160F8u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B16108:
    rt.unsupported(0x08B16108u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B16114:
    rt.unsupported(0x08B16114u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B16120:
    rt.unsupported(0x08B16120u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B16130:
    rt.unsupported(0x08B16130u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B16140:
    rt.unsupported(0x08B16140u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B16154:
    rt.unsupported(0x08B16154u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B16168:
    rt.unsupported(0x08B16168u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B1617C:
    rt.unsupported(0x08B1617Cu, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B1618C:
    rt.unsupported(0x08B1618Cu, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B1619C:
    rt.unsupported(0x08B1619Cu, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B161A8:
    rt.unsupported(0x08B161A8u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B161B4:
    rt.unsupported(0x08B161B4u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B161C0:
    rt.unsupported(0x08B161C0u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B161CC:
    rt.unsupported(0x08B161CCu, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B161D8:
    rt.unsupported(0x08B161D8u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B161E4:
    rt.unsupported(0x08B161E4u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B161F4:
    rt.unsupported(0x08B161F4u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B16204:
    rt.unsupported(0x08B16204u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B16214:
    rt.unsupported(0x08B16214u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B16220:
    rt.unsupported(0x08B16220u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B1622C:
    rt.unsupported(0x08B1622Cu, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B1623C:
    rt.unsupported(0x08B1623Cu, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B1624C:
    rt.unsupported(0x08B1624Cu, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B16260:
    rt.unsupported(0x08B16260u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B16274:
    rt.unsupported(0x08B16274u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B16288:
    rt.unsupported(0x08B16288u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B16298:
    rt.unsupported(0x08B16298u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B162A8:
    if (ctx.gpr[2] == ctx.gpr[1]) {
    rt.unsupported(0x08B162ACu, 0x6B5F4E4Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1082u, 0x08B27808u>(ctx, &aot_mem); return;
    }
    goto L_08B162B0;
L_08B162B0:
    ctx.execute_vfpu_vscl_ct<110u, 105u, 102u, 1u>();
    rt.unsupported(0x08B162B4u, 0x0000315Fu, "special? not lowered yet"); return;
L_08B162B8:
    if (ctx.gpr[2] == ctx.gpr[1]) {
    rt.unsupported(0x08B162BCu, 0x6B5F4E4Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1083u, 0x08B27818u>(ctx, &aot_mem); return;
    }
    goto L_08B162C0;
L_08B162C0:
    ctx.execute_vfpu_vscl_ct<110u, 105u, 102u, 1u>();
    rt.unsupported(0x08B162C4u, 0x0000325Fu, "special? not lowered yet"); return;
L_08B162C8:
    ctx.execute_vfpu_vhdp(107u, 110u, 105u, 1u);
    rt.unsupported(0x08B162CCu, 0x61705F65u, "vfpu0 not lowered yet"); return;
L_08B162D4:
    if (ctx.gpr[2] == ctx.gpr[1]) {
    rt.unsupported(0x08B162D8u, 0x6B5F4E4Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1084u, 0x08B27834u>(ctx, &aot_mem); return;
    }
    goto L_08B162DC;
L_08B162DC:
    ctx.execute_vfpu_vscl_ct<110u, 105u, 102u, 1u>();
    ctx.execute_vfpu_vscl_ct<105u, 100u, 108u, 1u>();
    // nop
    goto L_08B162E8;
L_08B162E8:
    if (ctx.gpr[2] == ctx.gpr[1]) {
    rt.unsupported(0x08B162ECu, 0x6B5F4E4Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1086u, 0x08B27848u>(ctx, &aot_mem); return;
    }
    goto L_08B162F0;
L_08B162F0:
    ctx.execute_vfpu_vscl_ct<110u, 105u, 102u, 1u>();
    rt.unsupported(0x08B162F4u, 0x0000335Fu, "special? not lowered yet"); return;
L_08B162F8:
    if (ctx.gpr[2] == ctx.gpr[1]) {
    rt.unsupported(0x08B162FCu, 0x625F4E4Fu, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1088u, 0x08B27858u>(ctx, &aot_mem); return;
    }
    goto L_08B16300;
L_08B16300:
    rt.unsupported(0x08B16300u, 0x685F7461u, "unknown not lowered yet"); return;
L_08B16308:
    if (ctx.gpr[2] == ctx.gpr[1]) {
    rt.unsupported(0x08B1630Cu, 0x625F4E4Fu, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1089u, 0x08B27868u>(ctx, &aot_mem); return;
    }
    goto L_08B16310;
L_08B16310:
    rt.unsupported(0x08B16310u, 0x765F7461u, "unknown not lowered yet"); return;
L_08B16318:
    rt.unsupported(0x08B1631Cu, 0x54524150u, "control flow in delay slot"); return;
L_08B16320:
    // nop
    goto L_08B16324;
L_08B16324:
    if (ctx.gpr[2] == ctx.gpr[1]) {
    rt.unsupported(0x08B16328u, 0x675F4E4Fu, "vfpu1 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1090u, 0x08B27884u>(ctx, &aot_mem); return;
    }
    goto L_08B1632C;
L_08B1632C:
    rt.unsupported(0x08B1632Cu, 0x63666C6Fu, "vfpu0 not lowered yet"); return;
L_08B16334:
    if (ctx.gpr[2] == ctx.gpr[1]) {
    rt.unsupported(0x08B16338u, 0x635F4E4Fu, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1091u, 0x08B27894u>(ctx, &aot_mem); return;
    }
    goto L_08B1633C;
L_08B1633C:
    rt.unsupported(0x08B1633Cu, 0x00776173u, "special? not lowered yet"); return;
L_08B16340:
    if (ctx.gpr[2] == ctx.gpr[1]) {
    rt.unsupported(0x08B16344u, 0x635F4E4Fu, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1092u, 0x08B278A0u>(ctx, &aot_mem); return;
    }
    goto L_08B16348;
L_08B16348:
    ctx.execute_vfpu_vcmp_ct<97u, 119u, 1u, 3u>();
    rt.unsupported(0x08B1634Cu, 0x0000006Fu, "special? not lowered yet"); return;
L_08B16350:
    rt.unsupported(0x08B16350u, 0x77617363u, "unknown not lowered yet"); return;
L_08B1635C:
    rt.unsupported(0x08B1635Cu, 0x68747970u, "unknown not lowered yet"); return;
L_08B16368:
    rt.unsupported(0x08B16368u, 0x68747970u, "unknown not lowered yet"); return;
L_08B1637C:
    rt.unsupported(0x08B1637Cu, 0x68747970u, "unknown not lowered yet"); return;
L_08B1638C:
    rt.unsupported(0x08B1638Cu, 0x68747970u, "unknown not lowered yet"); return;
L_08B163A0:
    rt.unsupported(0x08B163A0u, 0x746C6F63u, "unknown not lowered yet"); return;
L_08B163AC:
    rt.unsupported(0x08B163ACu, 0x746C6F63u, "unknown not lowered yet"); return;
L_08B163C0:
    rt.unsupported(0x08B163C0u, 0x746C6F63u, "unknown not lowered yet"); return;
L_08B163D0:
    rt.unsupported(0x08B163D0u, 0x746C6F63u, "unknown not lowered yet"); return;
L_08B163E4:
    rt.unsupported(0x08B163E4u, 0x746C6F63u, "unknown not lowered yet"); return;
L_08B163F0:
    rt.unsupported(0x08B163F0u, 0x746F6873u, "unknown not lowered yet"); return;
L_08B163FC:
    // nop
    goto L_08B16400;
L_08B16400:
    rt.unsupported(0x08B16400u, 0x746F6873u, "unknown not lowered yet"); return;
L_08B1640C:
    rt.unsupported(0x08B1640Cu, 0x69666863u, "unknown not lowered yet"); return;
L_08B16414:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<117u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<100u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_d); }
    rt.unsupported(0x08B16418u, 0x69665F79u, "unknown not lowered yet"); return;
L_08B16420:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<117u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<100u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_d); }
    rt.unsupported(0x08B16424u, 0x72635F79u, "unknown not lowered yet"); return;
L_08B16434:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<117u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<100u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<121u, 95u, 114u, 1u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<108u, 1u>(vfpu_d); }
    // nop
    goto L_08B16444;
L_08B16444:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.execute_vfpu_vscl_ct<102u, 105u, 114u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1093u, 0x08B27998u>(ctx, &aot_mem); return;
    }
    goto L_08B1644C;
L_08B1644C:
    // nop
    goto L_08B16450;
L_08B16450:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B16454u, 0x756F7263u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1094u, 0x08B279A4u>(ctx, &aot_mem); return;
    }
    goto L_08B16458;
L_08B16458:
    rt.unsupported(0x08B16458u, 0x69666863u, "unknown not lowered yet"); return;
L_08B16460:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.execute_vfpu_compare3(114u, 101u, 108u, 1u, 6u);
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1095u, 0x08B279B4u>(ctx, &aot_mem); return;
    }
    goto L_08B16468;
L_08B16468:
    ctx.gpr[12] = (0u + 0u);
    goto L_08B1646C;
L_08B1646C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B16470u, 0x756F7263u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1096u, 0x08B279C0u>(ctx, &aot_mem); return;
    }
    goto L_08B16474;
L_08B16474:
    ctx.execute_vfpu_vscl_ct<99u, 104u, 114u, 1u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<108u, 1u>(vfpu_d); }
    // nop
    goto L_08B16480;
L_08B16480:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.execute_vfpu_vscl_ct<102u, 105u, 114u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 188u, 0x08B2CDD8u>(ctx, &aot_mem); return;
    }
    goto L_08B16488;
L_08B16488:
    // nop
    goto L_08B1648C;
L_08B1648C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B16490u, 0x756F7263u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 189u, 0x08B2CDE4u>(ctx, &aot_mem); return;
    }
    goto L_08B16494;
L_08B16494:
    rt.unsupported(0x08B16494u, 0x69666863u, "unknown not lowered yet"); return;
L_08B1649C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.execute_vfpu_compare3(114u, 101u, 108u, 1u, 6u);
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 191u, 0x08B2CDF4u>(ctx, &aot_mem); return;
    }
    goto L_08B164A4;
L_08B164A4:
    ctx.gpr[12] = (0u + 0u);
    goto L_08B164A8;
L_08B164A8:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B164ACu, 0x756F7263u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 192u, 0x08B2CE00u>(ctx, &aot_mem); return;
    }
    goto L_08B164B0;
L_08B164B0:
    ctx.execute_vfpu_vscl_ct<99u, 104u, 114u, 1u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<108u, 1u>(vfpu_d); }
    // nop
    goto L_08B164BC;
L_08B164BC:
    rt.unsupported(0x08B164BCu, 0x4C464952u, "unknown not lowered yet"); return;
L_08B164C8:
    rt.unsupported(0x08B164C8u, 0x4C464952u, "unknown not lowered yet"); return;
L_08B164DC:
    rt.unsupported(0x08B164DCu, 0x4C464952u, "unknown not lowered yet"); return;
L_08B164E8:
    rt.unsupported(0x08B164E8u, 0x4C464952u, "unknown not lowered yet"); return;
L_08B164FC:
    if (static_cast<std::int32_t>(ctx.gpr[25]) > 0) {
    ctx.execute_vfpu_vscl_ct<102u, 105u, 114u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1233u, 0x08B23E34u>(ctx, &aot_mem); return;
    }
    goto L_08B16504;
L_08B16504:
    // nop
    goto L_08B16508;
L_08B16508:
    if (static_cast<std::int32_t>(ctx.gpr[25]) > 0) {
    ctx.execute_vfpu_compare3(114u, 101u, 108u, 1u, 6u);
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1235u, 0x08B23E40u>(ctx, &aot_mem); return;
    }
    goto L_08B16510;
L_08B16510:
    ctx.gpr[12] = (0u + 0u);
    goto L_08B16514;
L_08B16514:
    rt.unsupported(0x08B16514u, 0x70696E73u, "unknown not lowered yet"); return;
L_08B16520:
    rt.unsupported(0x08B16520u, 0x70696E73u, "unknown not lowered yet"); return;
L_08B16530:
    if (ctx.gpr[2] == ctx.gpr[1]) {
    rt.unsupported(0x08B16534u, 0x745F4E4Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1097u, 0x08B27A90u>(ctx, &aot_mem); return;
    }
    goto L_08B16538;
L_08B16538:
    rt.unsupported(0x08B16538u, 0x776F7268u, "unknown not lowered yet"); return;
L_08B16540:
    if (ctx.gpr[2] == ctx.gpr[1]) {
    rt.unsupported(0x08B16544u, 0x735F4E4Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1098u, 0x08B27AA0u>(ctx, &aot_mem); return;
    }
    goto L_08B16548;
L_08B16548:
    rt.unsupported(0x08B16548u, 0x74726174u, "unknown not lowered yet"); return;
L_08B16554:
    rt.unsupported(0x08B16554u, 0x4D414C46u, "unknown not lowered yet"); return;
L_08B16560:
    rt.unsupported(0x08B16560u, 0x6B636F72u, "unknown not lowered yet"); return;
L_08B1656C:
    rt.unsupported(0x08B1656Cu, 0x6B636F72u, "unknown not lowered yet"); return;
L_08B1657C:
    rt.unsupported(0x08B1657Cu, 0x68746162u, "unknown not lowered yet"); return;
L_08B16584:
    rt.unsupported(0x08B16584u, 0x68746162u, "unknown not lowered yet"); return;
L_08B16590:
    rt.unsupported(0x08B16590u, 0x68746162u, "unknown not lowered yet"); return;
L_08B1659C:
    rt.unsupported(0x08B1659Cu, 0x68746162u, "unknown not lowered yet"); return;
L_08B165A8:
    rt.unsupported(0x08B165A8u, 0x636E616Cu, "vfpu0 not lowered yet"); return;
L_08B165B0:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 1u));
    goto L_08B165B4;
L_08B165B4:
    ctx.execute_vfpu_vscl_ct<115u, 116u, 114u, 1u>();
    rt.unsupported(0x08B165B8u, 0x00686374u, "special? not lowered yet"); return;
L_08B165BC:
    ctx.execute_vfpu_vscl_ct<116u, 105u, 109u, 1u>();
    // nop
    goto L_08B165C4;
L_08B165C4:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<104u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<108u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<115u, 1u>(vfpu_d); }
    rt.unsupported(0x08B165C8u, 0x00000072u, "special? not lowered yet"); return;
L_08B165CC:
    ctx.execute_vfpu_vcmp_ct<116u, 114u, 1u, 3u>();
    ctx.gpr[12] = (0u | 0u);
    goto L_08B165D4;
L_08B165D4:
    rt.unsupported(0x08B165D4u, 0x746F6972u, "unknown not lowered yet"); return;
L_08B165E0:
    rt.unsupported(0x08B165E0u, 0x746F6972u, "unknown not lowered yet"); return;
L_08B165F0:
    rt.unsupported(0x08B165F0u, 0x746F6972u, "unknown not lowered yet"); return;
L_08B165FC:
    rt.unsupported(0x08B165FCu, 0x746F6972u, "unknown not lowered yet"); return;
L_08B1660C:
    rt.unsupported(0x08B1660Cu, 0x746F6972u, "unknown not lowered yet"); return;
L_08B16618:
    rt.unsupported(0x08B16618u, 0x746F6972u, "unknown not lowered yet"); return;
L_08B16628:
    rt.unsupported(0x08B16628u, 0x746F6972u, "unknown not lowered yet"); return;
L_08B16634:
    rt.unsupported(0x08B16634u, 0x69727473u, "unknown not lowered yet"); return;
L_08B1663C:
    rt.unsupported(0x08B1663Cu, 0x69727473u, "unknown not lowered yet"); return;
L_08B16644:
    rt.unsupported(0x08B16644u, 0x69727473u, "unknown not lowered yet"); return;
L_08B1664C:
    rt.unsupported(0x08B1664Cu, 0x69727473u, "unknown not lowered yet"); return;
L_08B16654:
    rt.unsupported(0x08B16654u, 0x69727473u, "unknown not lowered yet"); return;
L_08B1665C:
    rt.unsupported(0x08B1665Cu, 0x69727473u, "unknown not lowered yet"); return;
L_08B16664:
    rt.unsupported(0x08B16664u, 0x69727473u, "unknown not lowered yet"); return;
L_08B1666C:
    rt.unsupported(0x08B1666Cu, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B16678:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B1667Cu, 0x79616C70u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 394u, 0x08B33C44u>(ctx, &aot_mem); return;
    }
    goto L_08B16680;
L_08B16680:
    ctx.gpr[14] = (0u | 0u);
    goto L_08B16684;
L_08B16684:
    rt.unsupported(0x08B16684u, 0x49525053u, "cop2/vfpu not lowered yet"); return;
L_08B16690:
    rt.unsupported(0x08B16690u, 0x454C4449u, "cop1? not lowered yet"); return;
L_08B1669C:
    rt.unsupported(0x08B1669Cu, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B166A8:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B166ACu, 0x6B636F72u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 398u, 0x08B33C74u>(ctx, &aot_mem); return;
    }
    goto L_08B166B0;
L_08B166B0:
    ctx.gpr[14] = (0u | 0u);
    goto L_08B166B4;
L_08B166B4:
    rt.unsupported(0x08B166B4u, 0x69727073u, "unknown not lowered yet"); return;
L_08B166C4:
    ctx.execute_vfpu_vscl_ct<105u, 100u, 108u, 1u>();
    rt.unsupported(0x08B166C8u, 0x636F725Fu, "vfpu0 not lowered yet"); return;
L_08B166D0:
    rt.unsupported(0x08B166D0u, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B166E4:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    ctx.execute_vfpu_vminmax(49u, 97u, 114u, 1u, false);
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 401u, 0x08B33CB0u>(ctx, &aot_mem); return;
    }
    goto L_08B166EC;
L_08B166EC:
    ctx.gpr[12] = (0u | 0u);
    goto L_08B166F0;
L_08B166F0:
    rt.unsupported(0x08B166F0u, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B166FC:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    ctx.execute_vfpu_vscl_ct<97u, 114u, 109u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 403u, 0x08B33CC8u>(ctx, &aot_mem); return;
    }
    goto L_08B16704;
L_08B16704:
    (void)(0u & 0u);
    goto L_08B16708;
L_08B16708:
    rt.unsupported(0x08B16708u, 0x79616C70u, "unknown not lowered yet"); return;
L_08B1671C:
    rt.unsupported(0x08B1671Cu, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B16730:
    rt.unsupported(0x08B16730u, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B1673C:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B16740u, 0x77617363u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 407u, 0x08B33D08u>(ctx, &aot_mem); return;
    }
    goto L_08B16744;
L_08B16744:
    // nop
    goto L_08B16748;
L_08B16748:
    rt.unsupported(0x08B16748u, 0x69727073u, "unknown not lowered yet"); return;
L_08B16754:
    rt.unsupported(0x08B16754u, 0x454C4449u, "cop1? not lowered yet"); return;
L_08B16760:
    rt.unsupported(0x08B16760u, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B16770:
    rt.unsupported(0x08B16770u, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B1677C:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B16780u, 0x73636961u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 409u, 0x08B33D48u>(ctx, &aot_mem); return;
    }
    goto L_08B16784;
L_08B16784:
    ctx.gpr[14] = (0u + 0u);
    goto L_08B16788;
L_08B16788:
    rt.unsupported(0x08B16788u, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B1679C:
    rt.unsupported(0x08B1679Cu, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B167A8:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B167ACu, 0x6B636162u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 410u, 0x08B33D74u>(ctx, &aot_mem); return;
    }
    goto L_08B167B0;
L_08B167B0:
    // nop
    goto L_08B167B4;
L_08B167B4:
    rt.unsupported(0x08B167B4u, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B167C4:
    rt.unsupported(0x08B167C4u, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B167D0:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B167D4u, 0x7466656Cu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 412u, 0x08B33D9Cu>(ctx, &aot_mem); return;
    }
    goto L_08B167D8;
L_08B167D8:
    // nop
    goto L_08B167DC;
L_08B167DC:
    rt.unsupported(0x08B167DCu, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B167EC:
    rt.unsupported(0x08B167ECu, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B167F8:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B167FCu, 0x68676972u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 413u, 0x08B33DC4u>(ctx, &aot_mem); return;
    }
    goto L_08B16800;
L_08B16800:
    rt.unsupported(0x08B16800u, 0x00000074u, "special? not lowered yet"); return;
L_08B16804:
    rt.unsupported(0x08B16804u, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B16818:
    rt.unsupported(0x08B16818u, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B16828:
    // nop
    goto L_08B1682C;
L_08B1682C:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B16830u, 0x6B636F72u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 415u, 0x08B33DF8u>(ctx, &aot_mem); return;
    }
    goto L_08B16834;
L_08B16834:
    rt.unsupported(0x08B16834u, 0x625F7465u, "vfpu0 not lowered yet"); return;
L_08B16838:
    ctx.gpr[12] = (ctx.gpr[3] + ctx.gpr[11]);
    goto L_08B1683C;
L_08B1683C:
    rt.unsupported(0x08B1683Cu, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B16850:
    rt.unsupported(0x08B16850u, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B16860:
    // nop
    goto L_08B16864;
L_08B16864:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B16868u, 0x6B636F72u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 416u, 0x08B33E30u>(ctx, &aot_mem); return;
    }
    goto L_08B1686C;
L_08B1686C:
    ctx.execute_vfpu_vcmp_ct<116u, 95u, 1u, 5u>();
    ctx.gpr[12] = (ctx.gpr[3] | ctx.gpr[20]);
    goto L_08B16874;
L_08B16874:
    rt.unsupported(0x08B16874u, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B16888:
    rt.unsupported(0x08B16888u, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B16898:
    rt.unsupported(0x08B16898u, 0x00000074u, "special? not lowered yet"); return;
L_08B1689C:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B168A0u, 0x6B636F72u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 417u, 0x08B33E68u>(ctx, &aot_mem); return;
    }
    goto L_08B168A4;
L_08B168A4:
    rt.unsupported(0x08B168A4u, 0x725F7465u, "unknown not lowered yet"); return;
L_08B168B0:
    rt.unsupported(0x08B168B0u, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B168C4:
    ctx.execute_vfpu_compare3(77u, 80u, 78u, 1u, 6u);
    rt.unsupported(0x08B168C8u, 0x00006574u, "special? not lowered yet"); return;
L_08B168CC:
    ctx.execute_vfpu_compare3(77u, 80u, 78u, 1u, 6u);
    ctx.execute_vfpu_compare3(116u, 101u, 108u, 1u, 6u);
    rt.unsupported(0x08B168D4u, 0x0000706Fu, "special? not lowered yet"); return;
L_08B168D8:
    rt.unsupported(0x08B168D8u, 0x454C4449u, "cop1? not lowered yet"); return;
L_08B168E4:
    rt.unsupported(0x08B168E4u, 0x454C4449u, "cop1? not lowered yet"); return;
L_08B168EC:
    rt.unsupported(0x08B168ECu, 0x454C4449u, "cop1? not lowered yet"); return;
L_08B168F8:
    rt.unsupported(0x08B168F8u, 0x454C4449u, "cop1? not lowered yet"); return;
L_08B16904:
    rt.unsupported(0x08B16904u, 0x454C4449u, "cop1? not lowered yet"); return;
L_08B16910:
    rt.unsupported(0x08B16910u, 0x454C4449u, "cop1? not lowered yet"); return;
L_08B16920:
    ctx.gpr[12] = (static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B16924;
L_08B16924:
    rt.unsupported(0x08B16924u, 0x454C4449u, "cop1? not lowered yet"); return;
L_08B16934:
    rt.unsupported(0x08B16934u, 0x454C4449u, "cop1? not lowered yet"); return;
L_08B16944:
    rt.unsupported(0x08B16944u, 0x484E4F44u, "cop2/vfpu not lowered yet"); return;
L_08B16954:
    rt.unsupported(0x08B16954u, 0x484E4F44u, "cop2/vfpu not lowered yet"); return;
L_08B16960:
    ctx.gpr[20] = (ctx.gpr[18] & 17482u);
    rt.unsupported(0x08B16964u, 0x786E615Fu, "unknown not lowered yet"); return;
L_08B16974:
    ctx.gpr[20] = (ctx.gpr[18] & 17482u);
    rt.unsupported(0x08B16978u, 0x7268735Fu, "unknown not lowered yet"); return;
L_08B16980:
    ctx.gpr[20] = (ctx.gpr[2] | 17482u);
    ctx.execute_vfpu_vcmp_ct<100u, 105u, 1u, 15u>();
    rt.unsupported(0x08B16988u, 0x745F6F64u, "unknown not lowered yet"); return;
L_08B16990:
    ctx.gpr[20] = (ctx.gpr[10] | 17482u);
    ctx.execute_vfpu_vcmp_ct<99u, 97u, 1u, 15u>();
    ctx.execute_vfpu_compare3(109u, 95u, 100u, 1u, 6u);
    rt.unsupported(0x08B1699Cu, 0x00006E77u, "special? not lowered yet"); return;
L_08B169A0:
    ctx.gpr[20] = (ctx.gpr[10] | 17482u);
    rt.unsupported(0x08B169A4u, 0x696F705Fu, "unknown not lowered yet"); return;
L_08B169AC:
    ctx.gpr[20] = (ctx.gpr[18] | 17482u);
    rt.unsupported(0x08B169B0u, 0x6369705Fu, "vfpu0 not lowered yet"); return;
L_08B169B8:
    ctx.gpr[20] = (ctx.gpr[18] | 17482u);
    ctx.execute_vfpu_compare3(95u, 100u, 111u, 1u, 6u);
    ctx.execute_vfpu_compare3(114u, 107u, 110u, 1u, 6u);
    ctx.gpr[13] = (0u - 0u);
    goto L_08B169C8;
L_08B169C8:
    ctx.gpr[18] = (ctx.gpr[10] & 16717u);
    rt.unsupported(0x08B169CCu, 0x696B735Fu, "unknown not lowered yet"); return;
L_08B169D4:
    ctx.gpr[18] = (ctx.gpr[18] & 16717u);
    ctx.execute_vfpu_vcmp_ct<99u, 101u, 1u, 15u>();
    rt.unsupported(0x08B169DCu, 0x6E615F6Cu, "vfpu3 not lowered yet"); return;
L_08B169E8:
    ctx.gpr[18] = (ctx.gpr[18] & 16717u);
    ctx.execute_vfpu_vcmp_ct<99u, 101u, 1u, 15u>();
    rt.unsupported(0x08B169F0u, 0x6E655F6Cu, "vfpu3 not lowered yet"); return;
L_08B169F8:
    ctx.gpr[18] = (ctx.gpr[18] & 16717u);
    ctx.execute_vfpu_vcmp_ct<99u, 101u, 1u, 15u>();
    rt.unsupported(0x08B16A00u, 0x61745F6Cu, "vfpu0 not lowered yet"); return;
L_08B16A08:
    ctx.gpr[18] = (ctx.gpr[18] & 16717u);
    ctx.execute_vfpu_compare3(95u, 102u, 111u, 1u, 6u);
    rt.unsupported(0x08B16A10u, 0x61745F74u, "vfpu0 not lowered yet"); return;
L_08B16A18:
    ctx.gpr[18] = (ctx.gpr[26] & 16717u);
    ctx.execute_vfpu_compare3(95u, 104u, 111u, 1u, 6u);
    ctx.gpr[13] = (ctx.gpr[3] - ctx.gpr[25]);
    goto L_08B16A24;
L_08B16A24:
    ctx.gpr[18] = (ctx.gpr[26] & 16717u);
    rt.unsupported(0x08B16A28u, 0x746F6E5Fu, "unknown not lowered yet"); return;
L_08B16A34:
    ctx.gpr[18] = (ctx.gpr[26] & 16717u);
    rt.unsupported(0x08B16A38u, 0x746F6E5Fu, "unknown not lowered yet"); return;
L_08B16A44:
    ctx.gpr[12] = (ctx.gpr[10] & 16723u);
    rt.unsupported(0x08B16A48u, 0x6972625Fu, "unknown not lowered yet"); return;
L_08B16A58:
    ctx.gpr[12] = (ctx.gpr[18] & 16723u);
    ctx.execute_vfpu_vcmp_ct<105u, 100u, 1u, 15u>();
    ctx.execute_vfpu_vscl_ct<101u, 95u, 115u, 1u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<116u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<97u, 1u>(vfpu_d); }
    // nop
    goto L_08B16A6C;
L_08B16A6C:
    ctx.gpr[12] = (ctx.gpr[18] & 16723u);
    rt.unsupported(0x08B16A70u, 0x6165735Fu, "vfpu0 not lowered yet"); return;
L_08B16A80:
    ctx.gpr[12] = (ctx.gpr[26] & 16723u);
    rt.unsupported(0x08B16A84u, 0x6165735Fu, "vfpu0 not lowered yet"); return;
L_08B16A90:
    // nop
    goto L_08B16A94;
L_08B16A94:
    ctx.gpr[12] = (ctx.gpr[26] & 16723u);
    rt.unsupported(0x08B16A98u, 0x6165735Fu, "vfpu0 not lowered yet"); return;
L_08B16AA4:
    // nop
    goto L_08B16AA8;
L_08B16AA8:
    ctx.gpr[12] = (ctx.gpr[26] & 16723u);
    rt.unsupported(0x08B16AACu, 0x7469735Fu, "unknown not lowered yet"); return;
L_08B16AB8:
    ctx.gpr[12] = (ctx.gpr[2] | 16723u);
    rt.unsupported(0x08B16ABCu, 0x7375645Fu, "unknown not lowered yet"); return;
L_08B16AC8:
    ctx.gpr[12] = (ctx.gpr[2] | 16723u);
    rt.unsupported(0x08B16ACCu, 0x7269675Fu, "unknown not lowered yet"); return;
L_08B16AD8:
    ctx.gpr[12] = (ctx.gpr[18] | 16723u);
    rt.unsupported(0x08B16ADCu, 0x676E615Fu, "vfpu1 not lowered yet"); return;
L_08B16AEC:
    ctx.gpr[12] = (ctx.gpr[18] | 16723u);
    ctx.execute_vfpu_vcmp_ct<105u, 100u, 1u, 15u>();
    ctx.execute_vfpu_vscl_ct<101u, 95u, 115u, 1u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<116u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<97u, 1u>(vfpu_d); }
    // nop
    goto L_08B16B00;
L_08B16B00:
    ctx.gpr[12] = (ctx.gpr[26] | 16723u);
    ctx.execute_vfpu_compare3(95u, 108u, 111u, 1u, 6u);
    rt.unsupported(0x08B16B08u, 0x74756F6Bu, "unknown not lowered yet"); return;
L_08B16B10:
    ctx.gpr[3] = (ctx.gpr[18] & 18774u);
    rt.unsupported(0x08B16B14u, 0x696F705Fu, "unknown not lowered yet"); return;
L_08B16B24:
    ctx.gpr[3] = (ctx.gpr[26] & 18774u);
    ctx.execute_vfpu_vhdp(95u, 119u, 97u, 1u);
    rt.unsupported(0x08B16B2Cu, 0x00000074u, "special? not lowered yet"); return;
L_08B16B30:
    ctx.gpr[3] = (ctx.gpr[26] & 18774u);
    rt.unsupported(0x08B16B34u, 0x6369705Fu, "vfpu0 not lowered yet"); return;
L_08B16B40:
    // nop
    goto L_08B16B44;
L_08B16B44:
    ctx.gpr[3] = (ctx.gpr[2] | 18774u);
    rt.unsupported(0x08B16B48u, 0x7261635Fu, "unknown not lowered yet"); return;
L_08B16B54:
    ctx.gpr[3] = (ctx.gpr[2] | 18774u);
    ctx.execute_vfpu_vcmp_ct<99u, 101u, 1u, 15u>();
    ctx.execute_vfpu_compare3(108u, 95u, 108u, 1u, 6u);
    rt.unsupported(0x08B16B60u, 0x00006B6Fu, "special? not lowered yet"); return;
L_08B16B64:
    ctx.gpr[3] = (ctx.gpr[2] | 18774u);
    rt.unsupported(0x08B16B68u, 0x6172635Fu, "vfpu0 not lowered yet"); return;
L_08B16B74:
    ctx.gpr[3] = (ctx.gpr[18] | 18774u);
    ctx.execute_vfpu_vcmp_ct<99u, 101u, 1u, 15u>();
    rt.unsupported(0x08B16B7Cu, 0x6E615F6Cu, "vfpu3 not lowered yet"); return;
L_08B16B84:
    rt.unsupported(0x08B16B84u, 0x72756F74u, "unknown not lowered yet"); return;
L_08B16B90:
    rt.unsupported(0x08B16B90u, 0x72756F74u, "unknown not lowered yet"); return;
L_08B16B9C:
    rt.unsupported(0x08B16B9Cu, 0x72756F74u, "unknown not lowered yet"); return;
L_08B16BA8:
    ctx.gpr[3] = (ctx.gpr[18] & 16717u);
    ctx.execute_vfpu_vscl_ct<95u, 112u, 108u, 1u>();
    ctx.gpr[12] = (0u + 0u);
    goto L_08B16BB4;
L_08B16BB4:
    ctx.gpr[3] = (ctx.gpr[26] | 18774u);
    ctx.execute_vfpu_compare3(95u, 112u, 114u, 1u, 6u);
    rt.unsupported(0x08B16BBCu, 0x69775F64u, "unknown not lowered yet"); return;
L_08B16BC8:
    rt.unsupported(0x08B16BC8u, 0x4B4C4157u, "cop2/vfpu not lowered yet"); return;
L_08B16BD8:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B16BDCu, 0x69766963u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 7u, 0x08B2C124u>(ctx, &aot_mem); return;
    }
    goto L_08B16BE0;
L_08B16BE0:
    // nop
    goto L_08B16BE4;
L_08B16BE4:
    rt.unsupported(0x08B16BE4u, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B16BF0:
    rt.unsupported(0x08B16BF0u, 0x69727073u, "unknown not lowered yet"); return;
L_08B16BFC:
    rt.unsupported(0x08B16BFCu, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B16C08:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B16C0Cu, 0x676E6167u, "vfpu1 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 12u, 0x08B341D4u>(ctx, &aot_mem); return;
    }
    goto L_08B16C10;
L_08B16C10:
    rt.unsupported(0x08B16C10u, 0x00000031u, "special? not lowered yet"); return;
L_08B16C14:
    rt.unsupported(0x08B16C14u, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B16C20:
    rt.unsupported(0x08B16C20u, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B16C2C:
    rt.unsupported(0x08B16C2Cu, 0x616D6F77u, "vfpu0 not lowered yet"); return;
L_08B16C3C:
    rt.unsupported(0x08B16C3Cu, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B16C48:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    ctx.execute_vfpu_compare3(102u, 97u, 116u, 1u, 6u);
        (void)rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 14u, 0x08B34214u>(ctx, &aot_mem); return;
    }
    goto L_08B16C50;
L_08B16C50:
    ctx.gpr[12] = (static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B16C54;
L_08B16C54:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.execute_vfpu_vscl_ct<109u, 97u, 108u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 171u, 0x08B2A980u>(ctx, &aot_mem); return;
    }
    goto L_08B16C5C;
L_08B16C5C:
    rt.unsupported(0x08B16C5Cu, 0x00000041u, "special? not lowered yet"); return;
L_08B16C60:
    rt.unsupported(0x08B16C60u, 0x616D6F77u, "vfpu0 not lowered yet"); return;
L_08B16C70:
    rt.unsupported(0x08B16C70u, 0x616D6F77u, "vfpu0 not lowered yet"); return;
L_08B16C7C:
    rt.unsupported(0x08B16C7Cu, 0x616D6F77u, "vfpu0 not lowered yet"); return;
L_08B16C90:
    rt.unsupported(0x08B16C90u, 0x616D6F77u, "vfpu0 not lowered yet"); return;
L_08B16CA0:
    rt.unsupported(0x08B16CA0u, 0x616D6F77u, "vfpu0 not lowered yet"); return;
L_08B16CB0:
    rt.unsupported(0x08B16CB0u, 0x616D6F77u, "vfpu0 not lowered yet"); return;
L_08B16CC0:
    rt.unsupported(0x08B16CC0u, 0x616D6F77u, "vfpu0 not lowered yet"); return;
L_08B16CD0:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.execute_vfpu_vscl_ct<109u, 97u, 108u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 183u, 0x08B2A9FCu>(ctx, &aot_mem); return;
    }
    goto L_08B16CD8;
L_08B16CD8:
    (void)(0u >> 1u);
    goto L_08B16CDC;
L_08B16CDC:
    rt.unsupported(0x08B16CDCu, 0x74616B73u, "unknown not lowered yet"); return;
L_08B16CE8:
    rt.unsupported(0x08B16CE8u, 0x74616B73u, "unknown not lowered yet"); return;
L_08B16CF8:
    rt.unsupported(0x08B16CF8u, 0x74616B73u, "unknown not lowered yet"); return;
L_08B16D04:
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[14]) ? ctx.gpr[3] : ctx.gpr[14]);
    goto L_08B16D08;
L_08B16D08:
    rt.unsupported(0x08B16D08u, 0x00646570u, "special? not lowered yet"); return;
L_08B16D0C:
    rt.unsupported(0x08B16D0Cu, 0x006E6176u, "special? not lowered yet"); return;
L_08B16D10:
    rt.unsupported(0x08B16D10u, 0x63616F63u, "vfpu0 not lowered yet"); return;
L_08B16D18:
    ctx.execute_vfpu_vscl_ct<98u, 105u, 107u, 1u>();
    rt.unsupported(0x08B16D1Cu, 0x00000073u, "special? not lowered yet"); return;
L_08B16D20:
    ctx.execute_vfpu_vscl_ct<98u, 105u, 107u, 1u>();
    rt.unsupported(0x08B16D24u, 0x00000076u, "special? not lowered yet"); return;
L_08B16D28:
    ctx.execute_vfpu_vscl_ct<98u, 105u, 107u, 1u>();
    rt.unsupported(0x08B16D2Cu, 0x00000068u, "special? not lowered yet"); return;
L_08B16D30:
    ctx.execute_vfpu_vscl_ct<98u, 105u, 107u, 1u>();
    (void)(0u & 0u);
    goto L_08B16D38;
L_08B16D38:
    rt.unsupported(0x08B16D38u, 0x72616E75u, "unknown not lowered yet"); return;
L_08B16D40:
    ctx.execute_vfpu_vscl_ct<115u, 99u, 114u, 1u>();
    rt.unsupported(0x08B16D44u, 0x76726477u, "unknown not lowered yet"); return;
L_08B16D4C:
    ctx.execute_vfpu_vhdp(107u, 110u, 105u, 1u);
    (void)(0u | 0u);
    goto L_08B16D54;
L_08B16D54:
    ctx.execute_vfpu_vscl_ct<98u, 97u, 115u, 1u>();
    ctx.execute_vfpu_vcmp_ct<97u, 108u, 1u, 2u>();
    // nop
    goto L_08B16D60;
L_08B16D60:
    ctx.execute_vfpu_vhdp(103u, 111u, 108u, 1u);
    rt.unsupported(0x08B16D64u, 0x62756C63u, "vfpu0 not lowered yet"); return;
L_08B16D6C:
    rt.unsupported(0x08B16D6Cu, 0x69616863u, "unknown not lowered yet"); return;
L_08B16D78:
    rt.unsupported(0x08B16D78u, 0x68747970u, "unknown not lowered yet"); return;
L_08B16D80:
    rt.unsupported(0x08B16D80u, 0x746C6F63u, "unknown not lowered yet"); return;
L_08B16D88:
    rt.unsupported(0x08B16D88u, 0x746F6873u, "unknown not lowered yet"); return;
L_08B16D90:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<117u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<100u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_d); }
    rt.unsupported(0x08B16D94u, 0x00000079u, "special? not lowered yet"); return;
L_08B16D98:
    rt.unsupported(0x08B16D98u, 0x00636574u, "special? not lowered yet"); return;
L_08B16D9C:
    rt.unsupported(0x08B16D9Cu, 0x00697A75u, "special? not lowered yet"); return;
L_08B16DA0:
    ctx.execute_vfpu_vcmp_ct<105u, 102u, 1u, 2u>();
    (void)(0u | 0u);
    goto L_08B16DA8;
L_08B16DA8:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[1]) < static_cast<std::int32_t>(ctx.gpr[16]) ? ctx.gpr[1] : ctx.gpr[16]);
    goto L_08B16DAC;
L_08B16DAC:
    rt.unsupported(0x08B16DACu, 0x70696E73u, "unknown not lowered yet"); return;
L_08B16DB4:
    rt.unsupported(0x08B16DB4u, 0x6E657267u, "vfpu3 not lowered yet"); return;
L_08B16DBC:
    ctx.execute_vfpu_vminmax(102u, 108u, 97u, 1u, false);
    (void)(0u | 0u);
    goto L_08B16DC4;
L_08B16DC4:
    rt.unsupported(0x08B16DC4u, 0x6B636F72u, "unknown not lowered yet"); return;
L_08B16DD0:
    rt.unsupported(0x08B16DD0u, 0x6964656Du, "unknown not lowered yet"); return;
L_08B16DD8:
    rt.unsupported(0x08B16DD8u, 0x626E7573u, "vfpu0 not lowered yet"); return;
L_08B16DE4:
    rt.unsupported(0x08B16DE4u, 0x79616C70u, "unknown not lowered yet"); return;
L_08B16DF0:
    rt.unsupported(0x08B16DF0u, 0x746F6972u, "unknown not lowered yet"); return;
L_08B16DF8:
    rt.unsupported(0x08B16DF8u, 0x69727473u, "unknown not lowered yet"); return;
L_08B16E00:
    rt.unsupported(0x08B16E00u, 0x79616C70u, "unknown not lowered yet"); return;
L_08B16E08:
    rt.unsupported(0x08B16E08u, 0x79616C70u, "unknown not lowered yet"); return;
L_08B16E18:
    rt.unsupported(0x08B16E18u, 0x79616C70u, "unknown not lowered yet"); return;
L_08B16E28:
    rt.unsupported(0x08B16E28u, 0x79616C70u, "unknown not lowered yet"); return;
L_08B16E38:
    rt.unsupported(0x08B16E38u, 0x79616C70u, "unknown not lowered yet"); return;
L_08B16E44:
    rt.unsupported(0x08B16E44u, 0x73636961u, "unknown not lowered yet"); return;
L_08B16E4C:
    rt.unsupported(0x08B16E4Cu, 0x79616C70u, "unknown not lowered yet"); return;
L_08B16E58:
    ctx.execute_vfpu_vhdp(115u, 104u, 117u, 1u);
    ctx.gpr[13] = (ctx.gpr[3] ^ ctx.gpr[5]);
    goto L_08B16E60;
L_08B16E60:
    ctx.execute_vfpu_vminmax(111u, 108u, 100u, 1u, false);
    ctx.gpr[13] = (0u + 0u);
    goto L_08B16E68;
L_08B16E68:
    rt.unsupported(0x08B16E68u, 0x676E6167u, "vfpu1 not lowered yet"); return;
L_08B16E70:
    rt.unsupported(0x08B16E70u, 0x676E6167u, "vfpu1 not lowered yet"); return;
L_08B16E78:
    ctx.execute_vfpu_vminmax(102u, 97u, 116u, 1u, false);
    ctx.gpr[13] = (0u + 0u);
    goto L_08B16E80;
L_08B16E80:
    ctx.execute_vfpu_vhdp(111u, 108u, 100u, 1u);
    rt.unsupported(0x08B16E84u, 0x616D7461u, "vfpu0 not lowered yet"); return;
L_08B16E8C:
    rt.unsupported(0x08B16E8Cu, 0x67676F6Au, "vfpu1 not lowered yet"); return;
L_08B16E94:
    rt.unsupported(0x08B16E94u, 0x616D6F77u, "vfpu0 not lowered yet"); return;
L_08B16E9C:
    rt.unsupported(0x08B16E9Cu, 0x706F6873u, "unknown not lowered yet"); return;
L_08B16EA8:
    rt.unsupported(0x08B16EA8u, 0x79737562u, "unknown not lowered yet"); return;
L_08B16EB4:
    rt.unsupported(0x08B16EB4u, 0x79786573u, "unknown not lowered yet"); return;
L_08B16EC0:
    rt.unsupported(0x08B16EC0u, 0x77746166u, "unknown not lowered yet"); return;
L_08B16ECC:
    rt.unsupported(0x08B16ECCu, 0x77646C6Fu, "unknown not lowered yet"); return;
L_08B16ED8:
    rt.unsupported(0x08B16ED8u, 0x77676F6Au, "unknown not lowered yet"); return;
L_08B16EE4:
    rt.unsupported(0x08B16EE4u, 0x696E6170u, "unknown not lowered yet"); return;
L_08B16EF0:
    rt.unsupported(0x08B16EF0u, 0x74616B73u, "unknown not lowered yet"); return;
L_08B16EF8:
    rt.unsupported(0x08B16EF8u, 0x79616C70u, "unknown not lowered yet"); return;
L_08B16F04:
    rt.unsupported(0x08B16F04u, 0x79616C70u, "unknown not lowered yet"); return;
L_08B16F10:
    rt.unsupported(0x08B16F10u, 0x79616C70u, "unknown not lowered yet"); return;
L_08B16F1C:
    rt.unsupported(0x08B16F1Cu, 0x6B636F72u, "unknown not lowered yet"); return;
L_08B16F28:
    rt.unsupported(0x08B16F28u, 0x6B636F72u, "unknown not lowered yet"); return;
L_08B16F34:
    rt.unsupported(0x08B16F34u, 0x6B636F72u, "unknown not lowered yet"); return;
L_08B16F40:
    rt.unsupported(0x08B16F40u, 0x4D5F5343u, "unknown not lowered yet"); return;
L_08B16F48:
    rt.unsupported(0x08B16F48u, 0x484E4F44u, "cop2/vfpu not lowered yet"); return;
L_08B16F4C:
    rt.unsupported(0x08B16F4Cu, 0x00000032u, "special? not lowered yet"); return;
L_08B16F50:
    rt.unsupported(0x08B16F50u, 0x484E4F44u, "cop2/vfpu not lowered yet"); return;
L_08B16F58:
    ctx.gpr[20] = (ctx.gpr[18] & 17482u);
    // nop
    goto L_08B16F60;
L_08B16F60:
    ctx.gpr[20] = (ctx.gpr[2] | 17482u);
    // nop
    goto L_08B16F68;
L_08B16F68:
    ctx.gpr[20] = (ctx.gpr[10] | 17482u);
    // nop
    goto L_08B16F70;
L_08B16F70:
    ctx.gpr[20] = (ctx.gpr[18] | 17482u);
    // nop
    goto L_08B16F78;
L_08B16F78:
    ctx.gpr[18] = (ctx.gpr[10] & 16717u);
    // nop
    goto L_08B16F80;
L_08B16F80:
    ctx.gpr[18] = (ctx.gpr[18] & 16717u);
    // nop
    goto L_08B16F88;
L_08B16F88:
    ctx.gpr[18] = (ctx.gpr[26] & 16717u);
    // nop
    goto L_08B16F90;
L_08B16F90:
    ctx.gpr[12] = (ctx.gpr[10] & 16723u);
    // nop
    goto L_08B16F98;
L_08B16F98:
    ctx.gpr[12] = (ctx.gpr[18] & 16723u);
    // nop
    goto L_08B16FA0;
L_08B16FA0:
    ctx.gpr[12] = (ctx.gpr[26] & 16723u);
    // nop
    goto L_08B16FA8;
L_08B16FA8:
    ctx.gpr[12] = (ctx.gpr[2] | 16723u);
    // nop
    goto L_08B16FB0;
L_08B16FB0:
    ctx.gpr[12] = (ctx.gpr[18] | 16723u);
    // nop
    goto L_08B16FB8;
L_08B16FB8:
    ctx.gpr[12] = (ctx.gpr[26] | 16723u);
    // nop
    goto L_08B16FC0;
L_08B16FC0:
    ctx.gpr[3] = (ctx.gpr[18] & 18774u);
    // nop
    goto L_08B16FC8;
L_08B16FC8:
    ctx.gpr[3] = (ctx.gpr[26] & 18774u);
    // nop
    goto L_08B16FD0;
L_08B16FD0:
    ctx.gpr[3] = (ctx.gpr[2] | 18774u);
    // nop
    goto L_08B16FD8;
L_08B16FD8:
    ctx.gpr[3] = (ctx.gpr[18] | 18774u);
    // nop
    goto L_08B16FE0;
L_08B16FE0:
    rt.unsupported(0x08B16FE4u, 0x00545349u, "control flow in delay slot"); return;
L_08B16FE8:
    ctx.gpr[3] = (ctx.gpr[18] & 16717u);
    // nop
    goto L_08B16FF0;
L_08B16FF0:
    ctx.gpr[3] = (ctx.gpr[26] | 18774u);
    // nop
    goto L_08B16FF8;
L_08B16FF8:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<72u, 1u>(vfpu_d); }
    // nop
    goto L_08B17000;
L_08B17000:
    rt.unsupported(0x08B17000u, 0x6B63654Eu, "unknown not lowered yet"); return;
L_08B17008:
    rt.unsupported(0x08B17008u, 0x6E697053u, "vfpu3 not lowered yet"); return;
L_08B17010:
    rt.unsupported(0x08B17010u, 0x6E697053u, "vfpu3 not lowered yet"); return;
L_08B17018:
    rt.unsupported(0x08B17018u, 0x766C6550u, "unknown not lowered yet"); return;
L_08B17020:
    rt.unsupported(0x08B17020u, 0x746F6F52u, "unknown not lowered yet"); return;
L_08B17028:
    ctx.gpr[16] = (ctx.gpr[3] & 26946u);
    rt.unsupported(0x08B1702Cu, 0x20522031u, "unknown not lowered yet"); return;
L_08B1703C:
    rt.unsupported(0x08B1703Cu, 0x70552052u, "unknown not lowered yet"); return;
L_08B17048:
    ctx.execute_vfpu_compare3(82u, 32u, 70u, 1u, 6u);
    rt.unsupported(0x08B1704Cu, 0x72616572u, "unknown not lowered yet"); return;
L_08B17054:
    rt.unsupported(0x08B17054u, 0x61482052u, "vfpu0 not lowered yet"); return;
L_08B1705C:
    rt.unsupported(0x08B1705Cu, 0x69462052u, "unknown not lowered yet"); return;
L_08B17068:
    ctx.gpr[16] = (ctx.gpr[3] & 26946u);
    rt.unsupported(0x08B1706Cu, 0x204C2031u, "unknown not lowered yet"); return;
L_08B1707C:
    rt.unsupported(0x08B1707Cu, 0x7055204Cu, "unknown not lowered yet"); return;
L_08B17088:
    ctx.execute_vfpu_compare3(76u, 32u, 70u, 1u, 6u);
    rt.unsupported(0x08B1708Cu, 0x72616572u, "unknown not lowered yet"); return;
L_08B17094:
    rt.unsupported(0x08B17094u, 0x6148204Cu, "vfpu0 not lowered yet"); return;
L_08B1709C:
    rt.unsupported(0x08B1709Cu, 0x6946204Cu, "unknown not lowered yet"); return;
L_08B170A8:
    rt.unsupported(0x08B170A8u, 0x6854204Cu, "unknown not lowered yet"); return;
L_08B170B0:
    rt.unsupported(0x08B170B0u, 0x6143204Cu, "vfpu0 not lowered yet"); return;
L_08B170B8:
    ctx.execute_vfpu_compare3(76u, 32u, 70u, 1u, 6u);
    rt.unsupported(0x08B170BCu, 0x0000746Fu, "special? not lowered yet"); return;
L_08B170C0:
    rt.unsupported(0x08B170C0u, 0x68542052u, "unknown not lowered yet"); return;
L_08B170C8:
    rt.unsupported(0x08B170C8u, 0x61432052u, "vfpu0 not lowered yet"); return;
L_08B170D0:
    ctx.execute_vfpu_compare3(82u, 32u, 70u, 1u, 6u);
    rt.unsupported(0x08B170D4u, 0x0000746Fu, "special? not lowered yet"); return;
L_08B1722C:
    rt.unsupported(0x08B1722Cu, 0x74696E49u, "unknown not lowered yet"); return;
L_08B1724C:
    ctx.execute_vfpu_vcmp_ct<66u, 117u, 1u, 3u>();
    rt.unsupported(0x08B17250u, 0x4974656Cu, "cop2/vfpu not lowered yet"); return;
L_08B172FC:
    rt.unsupported(0x08B17300u, 0x089323D0u, "control flow in delay slot"); return;
L_08B173D4:
    rt.unsupported(0x08B173D8u, 0x089323D0u, "control flow in delay slot"); return;
L_08B173F0:
    rt.unsupported(0x08B173F4u, 0x504D4153u, "control flow in delay slot"); return;
L_08B173F8:
    rt.unsupported(0x08B173F8u, 0x495F454Cu, "cop2/vfpu not lowered yet"); return;
L_08B17404:
    rt.unsupported(0x08B17404u, 0x202A2A2Au, "unknown not lowered yet"); return;
L_08B1741C:
    if (ctx.gpr[10] != ctx.gpr[19]) {
    rt.unsupported(0x08B17420u, 0x4E455053u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 672u, 0x08B1F4C8u>(ctx, &aot_mem); return;
    }
    goto L_08B17424;
L_08B17424:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 17u, 0x08A88110u>(ctx, &aot_mem); return;
L_08B1742C:
    rt.unsupported(0x08B1742Cu, 0x4552202Au, "cop1? not lowered yet"); return;
L_08B17438:
    rt.unsupported(0x08B17438u, 0x454D202Au, "cop1? not lowered yet"); return;
L_08B17444:
    rt.unsupported(0x08B17444u, 0x4F4E202Au, "unknown not lowered yet"); return;
L_08B17448:
    rt.unsupported(0x08B17448u, 0x44454D20u, "unsupported CFC1 control register"); return;
    jump_target = 0u;
    ctx.gpr[8] = (0x08B17454u);
    rt.unsupported(0x08B17450u, 0x20756F59u, "unknown not lowered yet"); return;
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B17454u) goto L_08B17454;
    return;
L_08B17450:
    rt.unsupported(0x08B17450u, 0x20756F59u, "unknown not lowered yet"); return;
L_08B17454:
    ctx.execute_vfpu_vcmp_ct<117u, 108u, 1u, 0u>();
    ctx.execute_vfpu_compare3(101u, 100u, 32u, 1u, 6u);
    rt.unsupported(0x08B1745Cu, 0x74207475u, "unknown not lowered yet"); return;
L_08B1748C:
    rt.unsupported(0x08B1748Cu, 0x4552202Au, "cop1? not lowered yet"); return;
L_08B17498:
    rt.unsupported(0x08B17498u, 0x4544202Au, "cop1? not lowered yet"); return;
L_08B174A8:
    rt.unsupported(0x08B174A8u, 0x4F4E202Au, "unknown not lowered yet"); return;
L_08B174BC:
    if (0u == 0u) (void)(0u);
    goto L_08B174C0;
L_08B174C0:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    if (0u == 0u) (void)(0u);
    goto L_08B174D8;
L_08B174D8:
    rt.unsupported(0x08B174D8u, 0x202A2A2Au, "unknown not lowered yet"); return;
L_08B174E4:
    rt.unsupported(0x08B174E4u, 0x454D4147u, "cop1? not lowered yet"); return;
L_08B174F0:
    ctx.execute_vfpu_vscl_ct<80u, 111u, 119u, 1u>();
    ctx.execute_vfpu_vcmp_ct<67u, 97u, 1u, 2u>();
    rt.unsupported(0x08B174F8u, 0x6361626Cu, "vfpu0 not lowered yet"); return;
L_08B17500:
    rt.unsupported(0x08B17500u, 0x43444D55u, "unknown not lowered yet"); return;
L_08B1750C:
    rt.unsupported(0x08B1750Cu, 0x74697845u, "unknown not lowered yet"); return;
L_08B1751C:
    rt.unsupported(0x08B1751Cu, 0x4D737953u, "unknown not lowered yet"); return;
L_08B17528:
    if (ctx.gpr[25] != 0u) {
    rt.unsupported(0x08B1752Cu, 0x49544941u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 241u, 0x08B21DD4u>(ctx, &aot_mem); return;
    }
    goto L_08B17530;
L_08B17530:
    rt.unsupported(0x08B17530u, 0x203A474Eu, "unknown not lowered yet"); return;
L_08B17540:
    if (ctx.gpr[17] == 0u) {
    rt.unsupported(0x08B17544u, 0x20444145u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 243u, 0x08B21DECu>(ctx, &aot_mem); return;
    }
    goto L_08B17548;
L_08B17548:
    rt.unsupported(0x08B17548u, 0x4C494146u, "unknown not lowered yet"); return;
L_08B17558:
    rt.unsupported(0x08B17558u, 0x7325203Au, "unknown not lowered yet"); return;
L_08B17568:
    rt.unsupported(0x08B17568u, 0x202A2A2Au, "unknown not lowered yet"); return;
L_08B17578:
    ctx.execute_vfpu_vscl_ct<32u, 115u, 99u, 1u>();
    ctx.execute_vfpu_vscl_ct<73u, 111u, 82u, 1u>();
    ctx.gpr[8] = (ctx.gpr[1] & 25697u);
    ctx.gpr[16] = (ctx.gpr[1] ^ 9592u);
    rt.unsupported(0x08B17588u, 0x000A2978u, "special? not lowered yet"); return;
L_08B175A0:
    rt.unsupported(0x08B175A0u, 0x0000005Eu, "special? not lowered yet"); return;
L_08B175B0:
    ctx.gpr[31] = (ctx.gpr[26] & 16711u);
    // nop
    goto L_08B175B8;
L_08B175B8:
    ctx.gpr[31] = (ctx.gpr[10] & 16711u);
    // nop
    goto L_08B175C0;
L_08B175C0:
    ctx.gpr[31] = (ctx.gpr[18] & 16711u);
    // nop
    goto L_08B175C8;
L_08B175C8:
    ctx.gpr[31] = (ctx.gpr[10] & 16711u);
    rt.unsupported(0x08B175CCu, 0x00000037u, "special? not lowered yet"); return;
L_08B175D0:
    ctx.gpr[31] = (ctx.gpr[10] & 16711u);
    rt.unsupported(0x08B175D4u, 0x00000035u, "special? not lowered yet"); return;
L_08B175D8:
    ctx.gpr[31] = (ctx.gpr[10] & 16711u);
    rt.unsupported(0x08B175DCu, 0x00000036u, "special? not lowered yet"); return;
L_08B175E0:
    ctx.gpr[31] = (ctx.gpr[18] & 16711u);
    rt.unsupported(0x08B175E4u, 0x00000032u, "special? not lowered yet"); return;
L_08B175E8:
    ctx.gpr[31] = (ctx.gpr[2] | 16711u);
    // nop
    goto L_08B175F0;
L_08B175F0:
    ctx.gpr[31] = (ctx.gpr[10] | 16711u);
    // nop
    goto L_08B175F8;
L_08B175F8:
    ctx.gpr[31] = (ctx.gpr[18] | 16711u);
    // nop
    goto L_08B17600;
L_08B17600:
    ctx.gpr[31] = (ctx.gpr[18] | 16711u);
    (void)(0u >> 1u);
    goto L_08B17608;
L_08B17608:
    ctx.gpr[31] = (ctx.gpr[26] | 16711u);
    // nop
    goto L_08B17610;
L_08B17610:
    ctx.gpr[31] = (ctx.gpr[26] | 16711u);
    (void)(0u >> 1u);
    goto L_08B17618;
L_08B17618:
    ctx.gpr[31] = (ctx.gpr[2] ^ 16711u);
    // nop
    goto L_08B17620;
L_08B17620:
    ctx.gpr[31] = (ctx.gpr[18] & 16711u);
    rt.unsupported(0x08B17624u, 0x00000033u, "special? not lowered yet"); return;
L_08B17628:
    ctx.gpr[31] = (ctx.gpr[18] & 16711u);
    rt.unsupported(0x08B1762Cu, 0x00000034u, "special? not lowered yet"); return;
L_08B17630:
    rt.unsupported(0x08B17630u, 0x20584946u, "unknown not lowered yet"); return;
L_08B17648:
    if (ctx.gpr[1] == 0u) {
    rt.unsupported(0x08B1764Cu, 0x4559414Cu, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 54u, 0x08B29384u>(ctx, &aot_mem); return;
    }
    goto L_08B17650;
L_08B17650:
    ctx.gpr[1] = (ctx.lo);
    goto L_08B17654;
L_08B17654:
    rt.unsupported(0x08B17654u, 0x74736544u, "unknown not lowered yet"); return;
L_08B17678:
    rt.unsupported(0x08B1767Cu, 0x00444548u, "control flow in delay slot"); return;
L_08B17680:
    ctx.gpr[31] = (ctx.gpr[18] & 16711u);
    rt.unsupported(0x08B17684u, 0x00000031u, "special? not lowered yet"); return;
L_08B17688:
    rt.unsupported(0x08B17688u, 0x74736F50u, "unknown not lowered yet"); return;
L_08B176A0:
    if (static_cast<std::int32_t>(ctx.gpr[11]) > 0) {
    ctx.execute_vfpu_vcmp_ct<88u, 80u, 1u, 0u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 116u, 0x08B20C10u>(ctx, &aot_mem); return;
    }
    goto L_08B176A8;
L_08B176A8:
    rt.unsupported(0x08B176ACu, 0x5B5D6625u, "control flow in delay slot"); return;
L_08B176B0:
    if (static_cast<std::int32_t>(ctx.gpr[26]) <= 0) {
    rt.unsupported(0x08B176B4u, 0x205D6625u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 98u, 0x08B30F48u>(ctx, &aot_mem); return;
    }
    goto L_08B176B8;
L_08B176B8:
    rt.unsupported(0x08B176B8u, 0x616C5059u, "vfpu0 not lowered yet"); return;
L_08B179DC:
    rt.unsupported(0x08B179DCu, 0x79616C70u, "unknown not lowered yet"); return;
L_08B17C58:
    ctx.execute_vfpu_compare3(109u, 101u, 109u, 1u, 6u);
    rt.unsupported(0x08B17C5Cu, 0x61207972u, "vfpu0 not lowered yet"); return;
L_08B17C80:
    rt.unsupported(0x08B17C80u, 0x74736544u, "unknown not lowered yet"); return;
L_08B17D48:
    ctx.execute_vfpu_vcmp_ct<111u, 114u, 1u, 7u>();
    rt.unsupported(0x08B17D4Cu, 0x72745364u, "unknown not lowered yet"); return;
L_08B17D60:
    ctx.execute_vfpu_vcmp_ct<111u, 114u, 1u, 7u>();
    rt.unsupported(0x08B17D64u, 0x72745364u, "unknown not lowered yet"); return;
L_08B17D70:
    rt.unsupported(0x08B17D70u, 0x204F4F54u, "unknown not lowered yet"); return;
L_08B17D7C:
    rt.unsupported(0x08B17D7Cu, 0x43494D41u, "unknown not lowered yet"); return;
L_08B17D84:
    rt.unsupported(0x08B17D84u, 0x63207825u, "vfpu0 not lowered yet"); return;
L_08B17DA0:
    rt.unsupported(0x08B17DA0u, 0x726F5763u, "unknown not lowered yet"); return;
L_08B17DC0:
    rt.unsupported(0x08B17DC0u, 0x4F525245u, "unknown not lowered yet"); return;
L_08B17DFC:
    ctx.execute_vfpu_vscl_ct<83u, 116u, 114u, 1u>();
    rt.unsupported(0x08B17E00u, 0x6E696D61u, "vfpu3 not lowered yet"); return;
L_08B17E20:
    rt.unsupported(0x08B17E20u, 0x474E494Du, "cop1? not lowered yet"); return;
L_08B17E2C:
    rt.unsupported(0x08B17E2Cu, 0x4C4C4543u, "unknown not lowered yet"); return;
L_08B17E44:
    ctx.execute_vfpu_vscl_ct<83u, 116u, 114u, 1u>();
    rt.unsupported(0x08B17E48u, 0x6E696D61u, "vfpu3 not lowered yet"); return;
L_08B17E6C:
    ctx.execute_vfpu_vscl_ct<83u, 116u, 114u, 1u>();
    rt.unsupported(0x08B17E70u, 0x6E696D61u, "vfpu3 not lowered yet"); return;
L_08B17E98:
    rt.unsupported(0x08B17E98u, 0x726F5763u, "unknown not lowered yet"); return;
L_08B17ED0:
    ctx.execute_vfpu_vscl_ct<83u, 116u, 114u, 1u>();
    rt.unsupported(0x08B17ED4u, 0x6E696D61u, "vfpu3 not lowered yet"); return;
L_08B17EEC:
    rt.unsupported(0x08B17EECu, 0x434E4143u, "unknown not lowered yet"); return;
L_08B17EFC:
    rt.unsupported(0x08B17F00u, 0x54534555u, "control flow in delay slot"); return;
L_08B17F04:
    // nop
    goto L_08B17F08;
L_08B17F08:
    rt.unsupported(0x08B17F08u, 0x6E61433Du, "vfpu3 not lowered yet"); return;
L_08B17F14:
    rt.unsupported(0x08B17F14u, 0x676E696Du, "vfpu1 not lowered yet"); return;
L_08B17F20:
    ctx.execute_vfpu_vminmax(78u, 71u, 32u, 1u, false);
    ctx.execute_vfpu_vscl_ct<70u, 97u, 100u, 1u>();
    if (0u == 0u) (void)(0u);
    goto L_08B17F2C;
L_08B17F2C:
    rt.unsupported(0x08B17F2Cu, 0x61432D2Du, "vfpu0 not lowered yet"); return;
L_08B17F44:
    rt.unsupported(0x08B17F44u, 0x61432D2Du, "vfpu0 not lowered yet"); return;
L_08B17F58:
    rt.unsupported(0x08B17F58u, 0x61432D2Du, "vfpu0 not lowered yet"); return;
L_08B17F68:
    rt.unsupported(0x08B17F68u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B17F80:
    ctx.execute_vfpu_vcmp_ct<111u, 108u, 1u, 0u>();
    ctx.execute_vfpu_vscl_ct<83u, 116u, 114u, 1u>();
    rt.unsupported(0x08B17F88u, 0x6E696D61u, "vfpu3 not lowered yet"); return;
L_08B17F98:
    ctx.execute_vfpu_vcmp_ct<111u, 108u, 1u, 0u>();
    ctx.execute_vfpu_vscl_ct<83u, 116u, 114u, 1u>();
    rt.unsupported(0x08B17FA0u, 0x6E696D61u, "vfpu3 not lowered yet"); return;
L_08B17FCC:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<100u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<110u, 1u>(vfpu_d); }
    (void)(ctx.gpr[9] + static_cast<std::uint32_t>(15648));
    ctx.gpr[1] = (0u & 0u);
    goto L_08B17FD8;
L_08B17FD8:
    ctx.execute_vfpu_vcmp_ct<111u, 108u, 1u, 0u>();
    ctx.execute_vfpu_vscl_ct<83u, 116u, 114u, 1u>();
    rt.unsupported(0x08B17FE0u, 0x6E696D61u, "vfpu3 not lowered yet"); return;
}

void recomp_unit_0196(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0196_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_196(Runtime &runtime) {
    runtime.register_generated_unit(196u, 0x08B14000u, 16384u, &recomp_unit_0196, &recomp_unit_0196_entry);
    runtime.register_function(0x08B14068u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14070u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14080u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1408Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1409Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B140B0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B140C8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B140D8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B140F0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14108u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14114u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14124u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14148u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14150u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14164u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14188u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14194u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B141A4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B141B8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B141C4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B141E0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B141E8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14210u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1421Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14224u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14230u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1423Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14248u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14254u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14260u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14264u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1426Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14274u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1427Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B142A8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14370u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14378u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B143A8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B143B0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B143B8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B143BCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B143C4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B143CCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B143D4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B143DCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B143E4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B143ECu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B143F4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14430u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14438u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B144D0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B144D8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B144E0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B144F0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B144F8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14500u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14508u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14510u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14528u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14530u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14538u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14540u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14558u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14560u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14568u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14570u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14580u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1459Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B145A8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B145C8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B145D4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14620u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14640u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14670u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14688u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B146B0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B146B8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B146D4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B146D8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B146F0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B146F8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14708u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14740u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1475Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1478Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1479Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B147A4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B147ACu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B147D8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B147FCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14810u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14824u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14850u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14864u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14884u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B148ACu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B148CCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B148ECu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14918u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1491Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14924u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14930u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1493Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1495Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14978u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B149A0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B149CCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14A10u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14A24u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14A40u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14A48u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14A50u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14A58u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14A60u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14A7Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14A84u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14A88u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14A98u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14AA8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14AE0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14AF8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14B18u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14B24u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14B30u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14B38u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14B70u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14B80u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14B90u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14BA0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14BA8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14E18u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14E30u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14E5Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14E88u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14E9Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14EDCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14EE4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B150D0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B150E8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B150F8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1510Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15120u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1512Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15138u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15144u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15150u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1515Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1516Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15178u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1518Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15198u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B151A4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B151B0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B151C0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B151CCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15240u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15244u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1524Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15254u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1525Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15264u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1526Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15274u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1527Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15284u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15294u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1529Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B152A4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B152B0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B152B8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B152C0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B152CCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B152D8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B152E0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B152E8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B152F4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B152FCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15304u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1530Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15314u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15320u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1532Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15334u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1533Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15344u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15350u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15358u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15360u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1536Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15374u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1537Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15384u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1538Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15394u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1539Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B153A4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B153B0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B153B8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B153C0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B153C8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B153D0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B153D8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B153E0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B153E8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B153F0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B153FCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15404u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1540Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15414u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1541Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15424u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15430u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1543Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15444u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15448u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15450u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15458u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15464u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15470u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1547Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15488u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15494u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1549Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B154A0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B154ACu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B154B4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B154BCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B154C0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B154C8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B154D0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B154D8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B154E0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B154E8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B154F0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B154F8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15500u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15508u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15514u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1551Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15528u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15530u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1553Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1554Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15558u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15564u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15598u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B155A4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B155ACu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B155B0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B155C0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B155CCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B155D8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B155E0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B155E4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B155ECu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B155F0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B155FCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15608u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15614u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15620u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1562Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15638u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1563Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15648u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1564Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15658u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1565Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15668u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1566Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15678u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1567Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15688u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1568Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15698u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1569Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B156ACu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B156B8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B156BCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B156C8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B156D4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B156D8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B156E4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B156ECu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B156F4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B156FCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15700u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15708u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1570Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15714u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15718u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15720u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15728u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1572Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15734u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15740u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15748u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1574Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15758u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15760u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15764u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15770u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1577Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15788u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15794u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1579Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B157A4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B157B0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B157BCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B157C8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B157D4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B157DCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B157E0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B157E8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B157ECu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B157F4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B157FCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15804u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1580Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15814u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1581Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15824u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15828u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15830u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15838u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15844u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1584Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15854u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15860u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15864u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1586Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15874u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1587Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15884u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1588Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15894u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1589Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B158A4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B158ACu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B158B0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B158B8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B158BCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B158C4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B158CCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B158D4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B158DCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B158E4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B158ECu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B158F4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15900u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15908u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15910u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15918u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15924u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1592Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15934u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1593Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15944u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1594Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15958u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15960u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1596Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15974u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1597Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15984u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1598Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15994u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1599Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B159A4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B159ACu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B159B4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B159BCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B159C4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B159CCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B159D4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B159DCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B159E4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B159ECu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B159F4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B159FCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15A04u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15A10u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15A18u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15A20u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15A28u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15A34u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15A3Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15A44u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15A4Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15A54u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15A5Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15A68u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15A70u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15A7Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15A84u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15A8Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15A94u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15AA0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15AA8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15AB0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15AB4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15ABCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15AC0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15AC8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15ACCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15AD4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15ADCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15AE8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15AF4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15B00u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15B04u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15B0Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15B18u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15B24u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15B2Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15B34u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15B38u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15B40u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15B48u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15B50u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15B58u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15B60u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15B68u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15B78u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15B88u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15B98u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15BA8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15BB4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15BC0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15BCCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15BD4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15BDCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15BE4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15BECu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15BF4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15BFCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15C04u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15C0Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15C18u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15C28u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15C30u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15C38u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15C40u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15C48u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15C50u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15C58u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15C60u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15C6Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15C74u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15C78u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15C80u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15C84u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15C8Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15C90u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15C9Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15CA8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15CB4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15CC4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15CD0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15CDCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15CE4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15CECu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15CFCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15D0Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15D18u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15D24u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15D30u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15D38u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15D44u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15D50u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15D58u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15D60u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15D70u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15D78u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15D84u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15D8Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15D98u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15DA4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15DB0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15DB8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15DBCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15DC4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15DCCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15DD0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15DD4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15DDCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15DE8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15DF4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E00u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E0Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E14u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E18u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E20u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E24u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E2Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E30u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E38u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E3Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E44u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E48u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E50u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E54u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E5Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E60u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E68u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E6Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E74u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E78u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E84u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E90u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E9Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15EA8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15EB4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15EC0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15ED0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15EE0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15EF0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15EFCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15F08u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15F18u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15F28u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15F3Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15F50u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15F64u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15F74u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15F84u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15F90u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15F9Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15FA8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15FB4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15FC0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15FCCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15FDCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15FECu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15FFCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16008u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16014u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16024u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16034u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16048u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1605Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16070u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16080u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16090u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1609Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B160A8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B160B4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B160C0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B160CCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B160D8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B160E8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B160F8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16108u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16114u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16120u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16130u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16140u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16154u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16168u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1617Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1618Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1619Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B161A8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B161B4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B161C0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B161CCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B161D8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B161E4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B161F4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16204u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16214u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16220u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1622Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1623Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1624Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16260u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16274u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16288u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16298u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B162A8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B162B0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B162B8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B162C0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B162C8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B162D4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B162DCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B162E8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B162F0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B162F8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16300u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16308u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16310u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16318u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16320u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16324u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1632Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16334u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1633Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16340u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16348u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16350u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1635Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16368u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1637Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1638Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B163A0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B163ACu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B163C0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B163D0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B163E4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B163F0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B163FCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16400u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1640Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16414u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16420u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16434u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16444u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1644Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16450u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16458u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16460u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16468u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1646Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16474u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16480u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16488u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1648Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16494u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1649Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B164A4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B164A8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B164B0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B164BCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B164C8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B164DCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B164E8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B164FCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16504u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16508u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16510u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16514u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16520u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16530u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16538u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16540u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16548u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16554u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16560u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1656Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1657Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16584u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16590u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1659Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B165A8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B165B0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B165B4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B165BCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B165C4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B165CCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B165D4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B165E0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B165F0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B165FCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1660Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16618u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16628u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16634u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1663Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16644u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1664Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16654u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1665Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16664u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1666Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16678u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16680u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16684u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16690u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1669Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B166A8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B166B0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B166B4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B166C4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B166D0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B166E4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B166ECu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B166F0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B166FCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16704u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16708u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1671Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16730u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1673Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16744u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16748u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16754u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16760u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16770u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1677Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16784u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16788u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1679Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B167A8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B167B0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B167B4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B167C4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B167D0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B167D8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B167DCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B167ECu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B167F8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16800u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16804u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16818u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16828u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1682Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16834u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16838u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1683Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16850u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16860u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16864u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1686Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16874u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16888u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16898u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1689Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B168A4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B168B0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B168C4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B168CCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B168D8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B168E4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B168ECu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B168F8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16904u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16910u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16920u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16924u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16934u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16944u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16954u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16960u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16974u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16980u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16990u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B169A0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B169ACu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B169B8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B169C8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B169D4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B169E8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B169F8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16A08u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16A18u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16A24u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16A34u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16A44u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16A58u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16A6Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16A80u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16A90u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16A94u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16AA4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16AA8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16AB8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16AC8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16AD8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16AECu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16B00u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16B10u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16B24u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16B30u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16B40u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16B44u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16B54u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16B64u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16B74u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16B84u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16B90u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16B9Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16BA8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16BB4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16BC8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16BD8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16BE0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16BE4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16BF0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16BFCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16C08u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16C10u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16C14u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16C20u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16C2Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16C3Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16C48u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16C50u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16C54u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16C5Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16C60u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16C70u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16C7Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16C90u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16CA0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16CB0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16CC0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16CD0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16CD8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16CDCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16CE8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16CF8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16D04u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16D08u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16D0Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16D10u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16D18u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16D20u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16D28u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16D30u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16D38u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16D40u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16D4Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16D54u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16D60u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16D6Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16D78u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16D80u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16D88u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16D90u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16D98u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16D9Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16DA0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16DA8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16DACu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16DB4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16DBCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16DC4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16DD0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16DD8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16DE4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16DF0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16DF8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16E00u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16E08u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16E18u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16E28u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16E38u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16E44u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16E4Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16E58u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16E60u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16E68u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16E70u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16E78u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16E80u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16E8Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16E94u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16E9Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16EA8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16EB4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16EC0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16ECCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16ED8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16EE4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16EF0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16EF8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16F04u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16F10u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16F1Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16F28u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16F34u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16F40u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16F48u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16F4Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16F50u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16F58u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16F60u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16F68u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16F70u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16F78u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16F80u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16F88u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16F90u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16F98u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16FA0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16FA8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16FB0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16FB8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16FC0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16FC8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16FD0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16FD8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16FE0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16FE8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16FF0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16FF8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17000u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17008u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17010u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17018u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17020u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17028u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1703Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17048u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17054u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1705Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17068u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1707Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17088u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17094u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1709Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B170A8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B170B0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B170B8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B170C0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B170C8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B170D0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1722Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1724Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B172FCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B173D4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B173F0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B173F8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17404u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1741Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17424u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1742Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17438u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17444u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17448u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17450u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17454u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1748Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17498u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B174A8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B174BCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B174C0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B174D8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B174E4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B174F0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17500u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1750Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1751Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17528u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17530u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17540u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17548u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17558u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17568u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17578u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B175A0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B175B0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B175B8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B175C0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B175C8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B175D0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B175D8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B175E0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B175E8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B175F0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B175F8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17600u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17608u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17610u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17618u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17620u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17628u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17630u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17648u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17650u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17654u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17678u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17680u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17688u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B176A0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B176A8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B176B0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B176B8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B179DCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17C58u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17C80u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17D48u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17D60u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17D70u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17D7Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17D84u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17DA0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17DC0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17DFCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17E20u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17E2Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17E44u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17E6Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17E98u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17ED0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17EECu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17EFCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17F04u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17F08u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17F14u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17F20u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17F2Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17F44u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17F58u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17F68u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17F80u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17F98u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17FCCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17FD8u, &recomp_unit_0196, "recomp_unit_0196");
}
} // namespace psprecomp
