#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0010[4095] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 5, 0, 0, 6, 0, 7, 0, 8, 0, 9, 0, 10, 0, 0, 0, 0, 11,
    0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0,
    0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 21, 0, 22, 0, 23, 0, 0, 0, 0, 0, 24, 0,
    0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 27, 0, 28, 0, 29, 0, 30, 0, 31, 0, 0, 32, 0, 0, 0, 0, 33, 0, 34, 0,
    0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 38, 0, 39, 0, 40, 0, 41, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0,
    0, 44, 0, 45, 0, 46, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 51, 0, 0, 52, 0, 53, 0,
    54, 0, 55, 0, 0, 56, 0, 57, 0, 58, 0, 59, 0, 60, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 63, 64,
    0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 70, 71, 0, 72, 0, 0, 73, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 77, 0, 78, 0,
    0, 0, 0, 79, 0, 0, 80, 0, 0, 81, 0, 82, 83, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 88, 0, 0,
    89, 0, 0, 90, 0, 91, 92, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0,
    96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 101, 0, 102,
    0, 0, 103, 0, 104, 0, 0, 0, 0, 105, 0, 0, 106, 0, 107, 108, 0, 109, 0, 110, 0, 0, 0, 111, 0, 112, 0, 113, 0, 0, 0, 0,
    0, 0, 114, 0, 0, 115, 0, 116, 117, 0, 118, 0, 0, 119, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 122, 0, 123, 0, 0, 0, 124, 0,
    0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 131,
    0, 0, 0, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 137, 0, 0, 0, 0, 0,
    0, 138, 0, 139, 0, 0, 0, 0, 0, 140, 0, 141, 0, 142, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 147,
    0, 0, 148, 0, 149, 150, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0,
    0, 0, 155, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 159, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 163, 0,
    164, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0,
    171, 0, 172, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 175, 0, 0, 176, 0, 0, 0, 177, 0, 178, 0, 0, 179, 0, 180, 0, 0,
    0, 0, 181, 0, 182, 0, 0, 0, 183, 184, 0, 0, 0, 0, 0, 185, 0, 0, 186, 0, 0, 187, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0,
    0, 190, 0, 0, 191, 0, 192, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 196, 0, 0, 197, 0, 198, 0, 199, 0, 200, 0, 0,
    0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 203, 0, 204, 205, 0, 0, 206, 0, 207, 0, 0, 0, 0, 0, 208, 209,
    0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 212, 0, 213, 0, 214, 0, 0,
    215, 0, 0, 0, 0, 216, 217, 218, 0, 219, 0, 220, 0, 221, 222, 0, 223, 0, 224, 0, 225, 0, 226, 0, 0, 0, 0, 227, 0, 0, 228, 0,
    0, 0, 0, 0, 229, 0, 230, 231, 0, 0, 232, 0, 0, 233, 0, 234, 0, 235, 0, 236, 0, 0, 237, 0, 0, 0, 0, 238, 239, 240, 0, 241,
    0, 0, 242, 0, 243, 244, 0, 245, 0, 0, 246, 0, 247, 0, 0, 0, 248, 0, 249, 0, 250, 0, 251, 0, 0, 0, 0, 252, 0, 0, 253, 0,
    0, 254, 0, 255, 0, 256, 0, 257, 0, 0, 0, 0, 258, 0, 0, 259, 0, 260, 0, 261, 0, 262, 0, 0, 0, 263, 0, 0, 264, 265, 266, 0,
    267, 0, 0, 0, 0, 268, 0, 0, 269, 0, 270, 0, 271, 0, 0, 0, 272, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0,
    0, 276, 0, 0, 277, 0, 278, 279, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 283, 0, 284, 0, 285, 0, 0, 286,
    0, 0, 287, 0, 288, 0, 289, 0, 290, 0, 0, 291, 0, 0, 0, 0, 292, 293, 294, 0, 295, 0, 0, 296, 0, 297, 298, 0, 299, 0, 0, 300,
    0, 301, 0, 0, 0, 302, 0, 303, 0, 0, 0, 304, 0, 305, 0, 0, 0, 0, 306, 0, 0, 307, 0, 0, 308, 0, 309, 0, 310, 0, 311, 0,
    0, 0, 0, 312, 0, 0, 0, 313, 0, 314, 0, 315, 0, 316, 0, 0, 0, 317, 0, 0, 318, 319, 320, 0, 321, 0, 0, 0, 0, 322, 0, 0,
    0, 323, 0, 0, 324, 0, 325, 326, 0, 327, 0, 0, 0, 328, 0, 329, 0, 330, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 333, 0,
    334, 335, 0, 336, 0, 0, 337, 0, 338, 0, 339, 0, 340, 0, 0, 341, 0, 0, 342, 0, 0, 0, 0, 343, 0, 344, 0, 0, 345, 0, 0, 0,
    0, 346, 347, 348, 0, 349, 0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 352, 353, 0, 354, 0, 0, 0, 0, 0, 355, 0, 356, 0, 0, 357, 0,
    358, 0, 359, 0, 360, 0, 361, 0, 362, 363, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0,
    0, 0, 368, 0, 369, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 372, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0,
    375, 376, 0, 0, 377, 0, 0, 378, 0, 0, 0, 0, 379, 380, 381, 0, 382, 0, 0, 383, 0, 384, 0, 0, 0, 385, 0, 0, 386, 0, 0, 387,
    0, 0, 0, 0, 0, 0, 388, 389, 0, 0, 390, 0, 0, 391, 0, 0, 392, 0, 393, 394, 0, 395, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0,
    0, 0, 0, 398, 0, 0, 399, 0, 0, 400, 0, 0, 0, 0, 0, 0, 401, 402, 0, 0, 403, 0, 0, 404, 0, 0, 405, 0, 406, 407, 0, 408,
    0, 0, 409, 0, 0, 0, 0, 0, 410, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 0, 413, 0, 414, 0, 415, 0, 0, 416, 0, 0, 0, 0,
    0, 417, 0, 418, 0, 419, 0, 0, 0, 420, 0, 0, 421, 0, 0, 422, 0, 423, 0, 424, 0, 0, 425, 0, 0, 0, 0, 0, 426, 0, 427, 0,
    428, 0, 0, 429, 0, 430, 0, 431, 0, 0, 432, 0, 0, 433, 0, 0, 434, 0, 0, 435, 0, 436, 437, 0, 438, 0, 0, 439, 0, 0, 0, 0,
    440, 0, 441, 0, 0, 442, 0, 443, 444, 0, 445, 0, 446, 0, 447, 0, 0, 448, 0, 0, 449, 0, 450, 451, 0, 0, 452, 0, 453, 0, 0, 0,
    0, 454, 0, 455, 0, 0, 456, 0, 457, 0, 0, 458, 0, 0, 459, 0, 460, 461, 0, 0, 462, 0, 463, 0, 0, 0, 0, 464, 0, 0, 465, 0,
    0, 0, 466, 0, 0, 467, 0, 0, 468, 0, 469, 470, 471, 0, 0, 0, 472, 0, 0, 0, 0, 473, 0, 0, 0, 474, 0, 0, 475, 0, 0, 476,
    0, 0, 0, 0, 0, 0, 477, 478, 0, 0, 479, 0, 0, 480, 0, 0, 481, 0, 482, 483, 0, 484, 0, 0, 485, 0, 0, 0, 0, 0, 486, 0,
    0, 0, 0, 487, 0, 0, 488, 0, 0, 489, 0, 0, 0, 0, 0, 0, 490, 491, 0, 0, 492, 0, 0, 493, 0, 0, 494, 0, 495, 496, 0, 497,
    0, 0, 498, 0, 0, 0, 0, 0, 499, 0, 500, 0, 501, 0, 0, 502, 0, 0, 503, 0, 504, 505, 0, 0, 506, 0, 507, 0, 0, 0, 0, 508,
    0, 509, 0, 510, 0, 0, 0, 0, 0, 511, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 515, 0, 516, 517, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    519, 0, 520, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 523, 0, 524, 525, 0, 526, 0, 0, 527, 0, 528, 529, 0, 530, 0, 531, 0,
    532, 0, 533, 0, 534, 0, 535, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 537, 0, 538, 0, 539, 0, 540, 0, 541, 0, 542, 0, 0,
    543, 0, 0, 0, 0, 544, 545, 546, 0, 547, 0, 548, 0, 549, 0, 550, 0, 551, 0, 0, 552, 0, 0, 553, 0, 0, 0, 0, 554, 0, 555, 0,
    0, 556, 0, 0, 0, 0, 557, 558, 559, 0, 560, 0, 561, 0, 562, 0, 563, 0, 564, 0, 565, 0, 0, 0, 0, 0, 0, 0, 566, 0, 567, 568,
    0, 569, 0, 570, 0, 0, 571, 0, 572, 573, 0, 574, 0, 0, 575, 0, 576, 0, 0, 577, 0, 578, 0, 0, 0, 0, 0, 579, 0, 0, 0, 580,
    0, 0, 581, 0, 582, 0, 583, 0, 0, 584, 0, 585, 0, 586, 0, 587, 0, 0, 588, 0, 0, 589, 0, 0, 0, 0, 590, 0, 591, 0, 0, 592,
    0, 0, 0, 0, 593, 594, 595, 0, 596, 0, 0, 0, 0, 0, 597, 0, 598, 0, 0, 0, 599, 0, 0, 0, 600, 0, 601, 0, 0, 0, 0, 602,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 604, 0, 605, 0, 606, 0, 607, 0, 608, 0, 0, 0, 0, 609, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 610, 0, 0, 611, 0, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 613, 0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 616, 617, 0, 618, 0, 619, 0, 0, 620, 0, 621, 622, 0,
    623, 0, 0, 624, 0, 625, 0, 0, 626, 0, 627, 0, 0, 0, 0, 0, 628, 0, 0, 0, 629, 0, 0, 0, 0, 0, 630, 0, 0, 0, 0, 631,
    0, 0, 0, 632, 0, 0, 0, 0, 0, 633, 0, 634, 0, 635, 0, 636, 0, 637, 0, 638, 0, 639, 640, 0, 641, 0, 642, 0, 0, 0, 0, 0,
    643, 644, 0, 0, 645, 0, 0, 0, 646, 0, 0, 0, 0, 0, 647, 0, 0, 0, 648, 0, 649, 0, 650, 0, 651, 0, 0, 0, 0, 652, 0, 0,
    0, 653, 0, 654, 0, 655, 0, 656, 0, 657, 0, 0, 0, 0, 658, 0, 0, 0, 659, 0, 0, 660, 0, 661, 0, 662, 0, 663, 0, 0, 0, 0,
    0, 664, 0, 0, 0, 665, 0, 666, 0, 667, 0, 668, 669, 0, 0, 0, 670, 0, 671, 0, 0, 672, 0, 673, 0, 674, 0, 0, 0, 0, 0, 675,
    0, 676, 0, 0, 677, 0, 0, 0, 0, 678, 679, 0, 0, 680, 0, 681, 0, 682, 0, 683, 0, 684, 0, 0, 0, 0, 685, 686, 0, 687, 0, 0,
    688, 0, 689, 0, 690, 0, 691, 0, 692, 693, 0, 0, 694, 0, 695, 0, 696, 0, 0, 697, 0, 0, 698, 0, 0, 0, 0, 699, 700, 701, 0, 702,
    0, 703, 0, 0, 704, 0, 0, 0, 0, 705, 0, 706, 0, 0, 707, 0, 0, 0, 0, 708, 709, 710, 0, 711, 712, 0, 713, 0, 714, 0, 715, 0,
    716, 0, 0, 717, 0, 0, 0, 0, 718, 719, 0, 720, 0, 721, 0, 722, 0, 0, 723, 0, 724, 0, 725, 0, 0, 726, 0, 0, 727, 0, 728, 0,
    0, 729, 0, 730, 0, 731, 0, 732, 0, 0, 733, 0, 734, 0, 735, 0, 0, 736, 0, 737, 0, 0, 738, 0, 0, 739, 0, 740, 0, 741, 0, 0,
    0, 742, 0, 0, 0, 0, 0, 743, 0, 0, 0, 744, 0, 0, 745, 0, 746, 0, 747, 0, 748, 0, 749, 0, 0, 0, 750, 0, 0, 751, 0, 752,
    0, 753, 0, 754, 0, 755, 0, 0, 756, 0, 757, 0, 758, 0, 0, 759, 0, 760, 0, 761, 0, 762, 0, 0, 763, 0, 764, 0, 765, 0, 0, 766,
    0, 767, 0, 0, 0, 768, 0, 0, 769, 0, 770, 0, 771, 0, 0, 0, 0, 0, 772, 0, 773, 0, 0, 774, 0, 0, 775, 0, 776, 0, 777, 0,
    0, 0, 778, 0, 779, 0, 780, 0, 0, 781, 0, 782, 0, 783, 0, 0, 784, 0, 0, 0, 0, 0, 785, 0, 786, 0, 0, 787, 0, 0, 788, 0,
    0, 0, 0, 789, 0, 0, 0, 0, 0, 790, 0, 791, 0, 792, 0, 0, 793, 0, 794, 0, 795, 0, 0, 0, 796, 0, 797, 0, 798, 0, 0, 0,
    0, 0, 799, 0, 800, 0, 0, 801, 0, 0, 802, 0, 803, 0, 804, 0, 0, 0, 805, 0, 806, 0, 807, 0, 0, 808, 0, 809, 0, 810, 0, 0,
    811, 0, 0, 0, 0, 0, 812, 0, 813, 0, 0, 814, 0, 0, 815, 0, 0, 0, 0, 816, 0, 0, 0, 0, 0, 817, 0, 818, 0, 819, 0, 0,
    820, 0, 821, 0, 822, 0, 0, 0, 823, 0, 824, 0, 825, 0, 0, 826, 0, 0, 827, 0, 828, 0, 829, 0, 830, 0, 831, 0, 832, 0, 0, 833,
    0, 0, 834, 0, 835, 0, 836, 0, 837, 0, 0, 838, 0, 0, 839, 0, 840, 0, 841, 0, 0, 842, 0, 843, 0, 0, 0, 0, 844, 0, 845, 0,
    846, 0, 0, 847, 0, 0, 0, 848, 849, 0, 850, 0, 851, 0, 0, 0, 852, 0, 0, 853, 0, 854, 0, 855, 0, 0, 856, 0, 0, 0, 857, 0,
    0, 858, 0, 859, 0, 860, 0, 0, 861, 0, 0, 862, 0, 863, 0, 864, 0, 865, 0, 866, 0, 867, 0, 868, 0, 0, 869, 0, 870, 0, 871, 0,
    0, 872, 0, 873, 0, 874, 0, 875, 0, 0, 876, 0, 877, 0, 878, 0, 0, 879, 0, 880, 0, 0, 0, 881, 0, 0, 882, 0, 883, 0, 884, 0,
    0, 885, 0, 886, 0, 0, 887, 0, 0, 888, 0, 889, 0, 890, 0, 0, 891, 0, 892, 0, 0, 893, 0, 894, 0, 0, 895, 0, 0, 896, 0, 897,
    0, 898, 0, 0, 899, 0, 900, 0, 0, 901, 0, 0, 0, 902, 0, 0, 903, 0, 904, 0, 905, 0, 906, 0, 907, 0, 908, 0, 909, 0, 0, 910,
    0, 0, 0, 0, 911, 912, 0, 913, 0, 914, 0, 0, 915, 0, 0, 916, 0, 917, 0, 918, 0, 0, 919, 0, 0, 920, 0, 921, 0, 0, 922, 0,
    923, 0, 0, 924, 0, 0, 925, 0, 926, 0, 927, 0, 928, 0, 0, 929, 0, 930, 0, 931, 0, 0, 932, 0, 933, 0, 0, 934, 0, 0, 935, 0,
    936, 0, 937, 0, 0, 0, 938, 0, 0, 0, 0, 0, 939, 0, 0, 0, 940, 0, 0, 941, 0, 942, 0, 943, 0, 944, 0, 945, 0, 0, 0, 946,
    0, 0, 947, 0, 948, 0, 949, 0, 950, 0, 0, 951, 0, 0, 952, 0, 953, 0, 954, 0, 0, 955, 0, 956, 0, 957, 0, 0, 958, 0, 0, 959,
    0, 960, 0, 961, 0, 0, 962, 0, 963, 0, 0, 0, 964, 0, 0, 965, 0, 966, 0, 967, 0, 0, 0, 0, 0, 968, 0, 969, 0, 0, 0, 970,
    0, 0, 971, 0, 972, 0, 973, 0, 0, 0, 974, 0, 975, 0, 976, 0, 0, 977, 0, 978, 0, 979, 0, 0, 980, 0, 0, 0, 0, 0, 981, 0,
    982, 0, 0, 983, 0, 0, 984, 0, 0, 0, 0, 985, 0, 0, 0, 0, 0, 986, 0, 987, 0, 0, 988, 0, 0, 989, 0, 990, 0, 991, 0, 0,
    0, 992, 0, 993, 0, 994, 0, 0, 0, 0, 0, 995, 0, 996, 0, 0, 0, 997, 0, 0, 998, 0, 999, 0, 1000, 0, 0, 0, 1001, 0, 1002, 0,
    1003, 0, 0, 1004, 0, 1005, 0, 1006, 0, 0, 1007, 0, 0, 0, 0, 0, 1008, 0, 1009, 0, 0, 1010, 0, 0, 1011, 0, 0, 0, 0, 1012, 0, 0,
    0, 0, 0, 1013, 0, 1014, 0, 0, 1015, 0, 0, 1016, 0, 1017, 0, 1018, 0, 0, 0, 1019, 0, 1020, 0, 1021, 0, 0, 1022, 0, 0, 1023, 0, 1024,
    0, 1025, 0, 1026, 0, 1027, 0, 1028, 0, 0, 0, 1029, 0, 1030, 0, 1031, 0, 1032, 0, 1033, 0, 0, 1034, 0, 0, 1035, 0, 1036, 0, 1037, 0, 0,
    1038, 0, 1039, 0, 0, 0, 0, 1040, 0, 1041, 0, 1042, 0, 0, 1043, 0, 0, 0, 1044, 1045, 0, 1046, 0, 1047, 0, 0, 0, 1048, 0, 0, 1049, 0,
    1050, 0, 1051, 0, 0, 1052, 0, 0, 0, 1053, 0, 0, 1054, 0, 1055, 0, 1056, 0, 0, 1057, 0, 1058, 0, 0, 1059, 0, 0, 1060, 0, 1061, 0, 1062,
    0, 0, 1063, 0, 1064, 0, 0, 1065, 0, 1066, 0, 0, 1067, 0, 0, 1068, 0, 1069, 0, 1070, 0, 0, 1071, 0, 1072, 0, 0, 1073, 0, 0, 1074, 0,
    1075, 0, 1076, 0, 1077, 0, 1078, 0, 1079, 0, 0, 1080, 0, 0, 1081, 0, 1082, 0, 1083, 0, 0, 1084, 0, 1085, 0, 1086, 0, 0, 1087, 0, 0, 1088,
    0, 1089, 0, 1090, 0, 0, 1091, 0, 1092, 0, 0, 0, 1093, 0, 0, 1094, 0, 1095, 0, 1096, 0, 0, 1097, 0, 0, 0, 1098, 0, 0, 1099, 0, 1100,
    0, 1101, 0, 0, 0, 1102, 0, 0, 1103, 1104, 1105, 0, 1106, 0, 0, 1107, 0, 1108, 0, 0, 1109, 0, 0, 1110, 0, 1111, 0, 0, 1112, 0, 1113, 0,
    1114, 0, 0, 1115, 0, 0, 1116, 0, 0, 0, 0, 1117, 1118, 1119, 0, 1120, 0, 1121, 0, 0, 1122, 0, 0, 0, 0, 1123, 0, 1124, 0, 0, 1125, 0,
    0, 0, 0, 1126, 1127, 1128, 0, 1129, 0, 1130, 0, 1131, 1132, 0, 1133, 0, 0, 1134, 0, 0, 0, 0, 0, 1135, 0, 0, 1136, 0, 1137, 1138, 0, 1139,
    0, 0, 1140, 1141, 0, 0, 1142, 0, 0, 0, 0, 1143, 0, 0, 1144, 0, 1145, 1146, 0, 1147, 0, 0, 1148, 0, 0, 0, 0, 0, 0, 0, 0, 1149,
    0, 0, 0, 0, 0, 0, 1150, 0, 0, 1151, 0, 0, 1152, 0, 1153, 1154, 0, 1155, 0, 0, 1156, 0, 1157, 1158, 0, 1159, 0, 0, 0, 1160, 0, 1161,
    0, 0, 1162, 0, 0, 0, 1163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1165, 0, 0, 0, 0, 0, 1166, 0, 1167, 0, 1168, 0, 0, 1169, 0, 0, 0, 0, 0, 1170, 0,
    1171, 0, 0, 1172, 0, 0, 0, 0, 0, 0, 1173, 0, 1174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1175, 0, 1176, 0, 0, 0,
    0, 0, 0, 0, 1177, 0, 0, 0, 0, 1178, 0, 0, 0, 0, 0, 1179, 0, 1180, 0, 0, 0, 0, 1181, 0, 0, 1182, 0, 0, 1183, 0, 1184, 1185,
    1186, 0, 0, 0, 0, 1187, 0, 0, 0, 0, 1188, 0, 0, 0, 0, 0, 1189, 1190, 0, 1191, 0, 0, 0, 0, 1192, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1194, 0, 0, 1195, 0, 0, 0, 1196, 0,
    1197, 0, 0, 0, 0, 0, 1198, 0, 0, 1199, 0, 0, 1200, 0, 1201, 1202, 1203, 0, 0, 1204, 0, 0, 0, 0, 1205, 0, 0, 0, 0, 1206, 0, 1207,
    0, 0, 0, 0, 0, 1208, 0, 0, 1209, 0, 0, 1210, 0, 1211, 1212, 1213, 0, 0, 1214, 0, 0, 0, 0, 1215, 0, 0, 0, 0, 1216, 1217, 0, 1218,
    0, 0, 0, 1219, 0, 1220, 1221, 0, 1222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1223, 0, 0, 0, 1224, 0, 0, 0, 1225, 1226, 1227,
    0, 0, 0, 1228, 0, 0, 1229, 0, 1230, 1231, 0, 1232, 0, 0, 0, 0, 1233, 0, 0, 0, 0, 0, 0, 1234, 0, 0, 1235, 0, 1236, 0, 1237, 0,
    0, 0, 0, 1238, 0, 0, 0, 1239, 0, 0, 0, 1240, 1241, 1242, 0, 1243, 0, 0, 1244, 0, 0, 0, 0, 0, 1245, 0, 0, 0, 0, 0, 0, 0,
    0, 1246, 0, 0, 0, 0, 0, 0, 1247, 0, 1248, 0, 0, 0, 0, 0, 0, 0, 0, 1249, 0, 0, 1250, 0, 0, 0, 0, 0, 1251, 0, 0, 0,
    0, 0, 0, 0, 1252, 0, 0, 0, 1253, 0, 0, 1254, 0, 1255, 1256, 0, 0, 1257, 0, 0, 0, 0, 1258, 0, 0, 1259, 0, 0, 0, 0, 0, 0,
    1260, 0, 0, 1261, 0, 1262, 1263, 0, 1264, 0, 0, 0, 0, 1265, 0, 0, 0, 1266, 0, 0, 0, 1267, 1268, 1269, 0, 1270, 0, 0, 0, 0, 0, 0,
    0, 0, 1271, 0, 1272, 0, 0, 0, 0, 0, 0, 1273, 0, 0, 1274, 0, 0, 1275, 0, 1276, 1277, 0, 1278, 0, 0, 1279, 0, 0, 0, 0, 1280, 0,
    0, 0, 1281, 0, 0, 1282, 0, 0, 0, 1283, 0, 0, 0, 0, 1284, 0, 0, 1285, 0, 0, 0, 0, 0, 0, 1286, 0, 1287, 0, 0, 0, 0, 0,
    1288, 0, 0, 1289, 0, 0, 1290, 0, 1291, 1292, 1293, 0, 0, 0, 1294, 0, 0, 0, 0, 1295, 0, 1296, 0, 0, 0, 0, 1297, 0, 0, 0, 0, 1298,
    0, 0, 0, 1299, 0, 0, 1300, 0, 0, 1301, 0, 1302, 1303, 1304, 0, 0, 1305, 0, 0, 0, 0, 1306, 0, 0, 0, 1307, 0, 0, 0, 1308, 0, 1309,
    0, 1310, 0, 0, 1311, 0, 0, 0, 0, 0, 1312, 0, 1313, 0, 1314, 0, 1315, 0, 0, 1316, 0, 0, 1317, 0, 0, 1318, 0, 1319, 1320, 0, 1321,
};
void recomp_unit_0010_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0882C000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0010[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0882C000;
    case 2u: goto L_0882C010;
    case 3u: goto L_0882C02C;
    case 4u: goto L_0882C034;
    case 5u: goto L_0882C03C;
    case 6u: goto L_0882C048;
    case 7u: goto L_0882C050;
    case 8u: goto L_0882C058;
    case 9u: goto L_0882C060;
    case 10u: goto L_0882C068;
    case 11u: goto L_0882C07C;
    case 12u: goto L_0882C084;
    case 13u: goto L_0882C0CC;
    case 14u: goto L_0882C0D4;
    case 15u: goto L_0882C0EC;
    case 16u: goto L_0882C0F4;
    case 17u: goto L_0882C108;
    case 18u: goto L_0882C110;
    case 19u: goto L_0882C138;
    case 20u: goto L_0882C14C;
    case 21u: goto L_0882C150;
    case 22u: goto L_0882C158;
    case 23u: goto L_0882C160;
    case 24u: goto L_0882C178;
    case 25u: goto L_0882C18C;
    case 26u: goto L_0882C1AC;
    case 27u: goto L_0882C1B0;
    case 28u: goto L_0882C1B8;
    case 29u: goto L_0882C1C0;
    case 30u: goto L_0882C1C8;
    case 31u: goto L_0882C1D0;
    case 32u: goto L_0882C1DC;
    case 33u: goto L_0882C1F0;
    case 34u: goto L_0882C1F8;
    case 35u: goto L_0882C204;
    case 36u: goto L_0882C21C;
    case 37u: goto L_0882C22C;
    case 38u: goto L_0882C234;
    case 39u: goto L_0882C23C;
    case 40u: goto L_0882C244;
    case 41u: goto L_0882C24C;
    case 42u: goto L_0882C254;
    case 43u: goto L_0882C268;
    case 44u: goto L_0882C284;
    case 45u: goto L_0882C28C;
    case 46u: goto L_0882C294;
    case 47u: goto L_0882C29C;
    case 48u: goto L_0882C2A4;
    case 49u: goto L_0882C2C8;
    case 50u: goto L_0882C2D0;
    case 51u: goto L_0882C2E4;
    case 52u: goto L_0882C2F0;
    case 53u: goto L_0882C2F8;
    case 54u: goto L_0882C300;
    case 55u: goto L_0882C308;
    case 56u: goto L_0882C314;
    case 57u: goto L_0882C31C;
    case 58u: goto L_0882C324;
    case 59u: goto L_0882C32C;
    case 60u: goto L_0882C334;
    case 61u: goto L_0882C33C;
    case 62u: goto L_0882C354;
    case 63u: goto L_0882C378;
    case 64u: goto L_0882C37C;
    case 65u: goto L_0882C384;
    case 66u: goto L_0882C38C;
    case 67u: goto L_0882C3B0;
    case 68u: goto L_0882C3B8;
    case 69u: goto L_0882C3CC;
    case 70u: goto L_0882C3DC;
    case 71u: goto L_0882C3E0;
    case 72u: goto L_0882C3E8;
    case 73u: goto L_0882C3F4;
    case 74u: goto L_0882C424;
    case 75u: goto L_0882C454;
    case 76u: goto L_0882C468;
    case 77u: goto L_0882C470;
    case 78u: goto L_0882C478;
    case 79u: goto L_0882C48C;
    case 80u: goto L_0882C498;
    case 81u: goto L_0882C4A4;
    case 82u: goto L_0882C4AC;
    case 83u: goto L_0882C4B0;
    case 84u: goto L_0882C4B8;
    case 85u: goto L_0882C4C4;
    case 86u: goto L_0882C4DC;
    case 87u: goto L_0882C4E4;
    case 88u: goto L_0882C4F4;
    case 89u: goto L_0882C500;
    case 90u: goto L_0882C50C;
    case 91u: goto L_0882C514;
    case 92u: goto L_0882C518;
    case 93u: goto L_0882C520;
    case 94u: goto L_0882C548;
    case 95u: goto L_0882C560;
    case 96u: goto L_0882C580;
    case 97u: goto L_0882C5B0;
    case 98u: goto L_0882C5B8;
    case 99u: goto L_0882C5D4;
    case 100u: goto L_0882C5E8;
    case 101u: goto L_0882C5F4;
    case 102u: goto L_0882C5FC;
    case 103u: goto L_0882C608;
    case 104u: goto L_0882C610;
    case 105u: goto L_0882C624;
    case 106u: goto L_0882C630;
    case 107u: goto L_0882C638;
    case 108u: goto L_0882C63C;
    case 109u: goto L_0882C644;
    case 110u: goto L_0882C64C;
    case 111u: goto L_0882C65C;
    case 112u: goto L_0882C664;
    case 113u: goto L_0882C66C;
    case 114u: goto L_0882C688;
    case 115u: goto L_0882C694;
    case 116u: goto L_0882C69C;
    case 117u: goto L_0882C6A0;
    case 118u: goto L_0882C6A8;
    case 119u: goto L_0882C6B4;
    case 120u: goto L_0882C6C0;
    case 121u: goto L_0882C6CC;
    case 122u: goto L_0882C6E0;
    case 123u: goto L_0882C6E8;
    case 124u: goto L_0882C6F8;
    case 125u: goto L_0882C710;
    case 126u: goto L_0882C72C;
    case 127u: goto L_0882C734;
    case 128u: goto L_0882C750;
    case 129u: goto L_0882C758;
    case 130u: goto L_0882C774;
    case 131u: goto L_0882C77C;
    case 132u: goto L_0882C798;
    case 133u: goto L_0882C7A0;
    case 134u: goto L_0882C7BC;
    case 135u: goto L_0882C7C4;
    case 136u: goto L_0882C7E0;
    case 137u: goto L_0882C7E8;
    case 138u: goto L_0882C804;
    case 139u: goto L_0882C80C;
    case 140u: goto L_0882C824;
    case 141u: goto L_0882C82C;
    case 142u: goto L_0882C834;
    case 143u: goto L_0882C83C;
    case 144u: goto L_0882C850;
    case 145u: goto L_0882C864;
    case 146u: goto L_0882C870;
    case 147u: goto L_0882C87C;
    case 148u: goto L_0882C888;
    case 149u: goto L_0882C890;
    case 150u: goto L_0882C894;
    case 151u: goto L_0882C89C;
    case 152u: goto L_0882C8B0;
    case 153u: goto L_0882C8D0;
    case 154u: goto L_0882C8EC;
    case 155u: goto L_0882C908;
    case 156u: goto L_0882C910;
    case 157u: goto L_0882C924;
    case 158u: goto L_0882C93C;
    case 159u: goto L_0882C944;
    case 160u: goto L_0882C94C;
    case 161u: goto L_0882C958;
    case 162u: goto L_0882C970;
    case 163u: goto L_0882C978;
    case 164u: goto L_0882C980;
    case 165u: goto L_0882C98C;
    case 166u: goto L_0882C9A4;
    case 167u: goto L_0882C9AC;
    case 168u: goto L_0882C9C0;
    case 169u: goto L_0882C9EC;
    case 170u: goto L_0882C9F8;
    case 171u: goto L_0882CA00;
    case 172u: goto L_0882CA08;
    case 173u: goto L_0882CA14;
    case 174u: goto L_0882CA30;
    case 175u: goto L_0882CA3C;
    case 176u: goto L_0882CA48;
    case 177u: goto L_0882CA58;
    case 178u: goto L_0882CA60;
    case 179u: goto L_0882CA6C;
    case 180u: goto L_0882CA74;
    case 181u: goto L_0882CA88;
    case 182u: goto L_0882CA90;
    case 183u: goto L_0882CAA0;
    case 184u: goto L_0882CAA4;
    case 185u: goto L_0882CABC;
    case 186u: goto L_0882CAC8;
    case 187u: goto L_0882CAD4;
    case 188u: goto L_0882CADC;
    case 189u: goto L_0882CAEC;
    case 190u: goto L_0882CB04;
    case 191u: goto L_0882CB10;
    case 192u: goto L_0882CB18;
    case 193u: goto L_0882CB20;
    case 194u: goto L_0882CB30;
    case 195u: goto L_0882CB48;
    case 196u: goto L_0882CB50;
    case 197u: goto L_0882CB5C;
    case 198u: goto L_0882CB64;
    case 199u: goto L_0882CB6C;
    case 200u: goto L_0882CB74;
    case 201u: goto L_0882CB8C;
    case 202u: goto L_0882CBBC;
    case 203u: goto L_0882CBC0;
    case 204u: goto L_0882CBC8;
    case 205u: goto L_0882CBCC;
    case 206u: goto L_0882CBD8;
    case 207u: goto L_0882CBE0;
    case 208u: goto L_0882CBF8;
    case 209u: goto L_0882CBFC;
    case 210u: goto L_0882CC14;
    case 211u: goto L_0882CC5C;
    case 212u: goto L_0882CC64;
    case 213u: goto L_0882CC6C;
    case 214u: goto L_0882CC74;
    case 215u: goto L_0882CC80;
    case 216u: goto L_0882CC94;
    case 217u: goto L_0882CC98;
    case 218u: goto L_0882CC9C;
    case 219u: goto L_0882CCA4;
    case 220u: goto L_0882CCAC;
    case 221u: goto L_0882CCB4;
    case 222u: goto L_0882CCB8;
    case 223u: goto L_0882CCC0;
    case 224u: goto L_0882CCC8;
    case 225u: goto L_0882CCD0;
    case 226u: goto L_0882CCD8;
    case 227u: goto L_0882CCEC;
    case 228u: goto L_0882CCF8;
    case 229u: goto L_0882CD10;
    case 230u: goto L_0882CD18;
    case 231u: goto L_0882CD1C;
    case 232u: goto L_0882CD28;
    case 233u: goto L_0882CD34;
    case 234u: goto L_0882CD3C;
    case 235u: goto L_0882CD44;
    case 236u: goto L_0882CD4C;
    case 237u: goto L_0882CD58;
    case 238u: goto L_0882CD6C;
    case 239u: goto L_0882CD70;
    case 240u: goto L_0882CD74;
    case 241u: goto L_0882CD7C;
    case 242u: goto L_0882CD88;
    case 243u: goto L_0882CD90;
    case 244u: goto L_0882CD94;
    case 245u: goto L_0882CD9C;
    case 246u: goto L_0882CDA8;
    case 247u: goto L_0882CDB0;
    case 248u: goto L_0882CDC0;
    case 249u: goto L_0882CDC8;
    case 250u: goto L_0882CDD0;
    case 251u: goto L_0882CDD8;
    case 252u: goto L_0882CDEC;
    case 253u: goto L_0882CDF8;
    case 254u: goto L_0882CE04;
    case 255u: goto L_0882CE0C;
    case 256u: goto L_0882CE14;
    case 257u: goto L_0882CE1C;
    case 258u: goto L_0882CE30;
    case 259u: goto L_0882CE3C;
    case 260u: goto L_0882CE44;
    case 261u: goto L_0882CE4C;
    case 262u: goto L_0882CE54;
    case 263u: goto L_0882CE64;
    case 264u: goto L_0882CE70;
    case 265u: goto L_0882CE74;
    case 266u: goto L_0882CE78;
    case 267u: goto L_0882CE80;
    case 268u: goto L_0882CE94;
    case 269u: goto L_0882CEA0;
    case 270u: goto L_0882CEA8;
    case 271u: goto L_0882CEB0;
    case 272u: goto L_0882CEC0;
    case 273u: goto L_0882CEC8;
    case 274u: goto L_0882CEDC;
    case 275u: goto L_0882CEF8;
    case 276u: goto L_0882CF04;
    case 277u: goto L_0882CF10;
    case 278u: goto L_0882CF18;
    case 279u: goto L_0882CF1C;
    case 280u: goto L_0882CF20;
    case 281u: goto L_0882CF30;
    case 282u: goto L_0882CF54;
    case 283u: goto L_0882CF60;
    case 284u: goto L_0882CF68;
    case 285u: goto L_0882CF70;
    case 286u: goto L_0882CF7C;
    case 287u: goto L_0882CF88;
    case 288u: goto L_0882CF90;
    case 289u: goto L_0882CF98;
    case 290u: goto L_0882CFA0;
    case 291u: goto L_0882CFAC;
    case 292u: goto L_0882CFC0;
    case 293u: goto L_0882CFC4;
    case 294u: goto L_0882CFC8;
    case 295u: goto L_0882CFD0;
    case 296u: goto L_0882CFDC;
    case 297u: goto L_0882CFE4;
    case 298u: goto L_0882CFE8;
    case 299u: goto L_0882CFF0;
    case 300u: goto L_0882CFFC;
    case 301u: goto L_0882D004;
    case 302u: goto L_0882D014;
    case 303u: goto L_0882D01C;
    case 304u: goto L_0882D02C;
    case 305u: goto L_0882D034;
    case 306u: goto L_0882D048;
    case 307u: goto L_0882D054;
    case 308u: goto L_0882D060;
    case 309u: goto L_0882D068;
    case 310u: goto L_0882D070;
    case 311u: goto L_0882D078;
    case 312u: goto L_0882D08C;
    case 313u: goto L_0882D09C;
    case 314u: goto L_0882D0A4;
    case 315u: goto L_0882D0AC;
    case 316u: goto L_0882D0B4;
    case 317u: goto L_0882D0C4;
    case 318u: goto L_0882D0D0;
    case 319u: goto L_0882D0D4;
    case 320u: goto L_0882D0D8;
    case 321u: goto L_0882D0E0;
    case 322u: goto L_0882D0F4;
    case 323u: goto L_0882D104;
    case 324u: goto L_0882D110;
    case 325u: goto L_0882D118;
    case 326u: goto L_0882D11C;
    case 327u: goto L_0882D124;
    case 328u: goto L_0882D134;
    case 329u: goto L_0882D13C;
    case 330u: goto L_0882D144;
    case 331u: goto L_0882D154;
    case 332u: goto L_0882D16C;
    case 333u: goto L_0882D178;
    case 334u: goto L_0882D180;
    case 335u: goto L_0882D184;
    case 336u: goto L_0882D18C;
    case 337u: goto L_0882D198;
    case 338u: goto L_0882D1A0;
    case 339u: goto L_0882D1A8;
    case 340u: goto L_0882D1B0;
    case 341u: goto L_0882D1BC;
    case 342u: goto L_0882D1C8;
    case 343u: goto L_0882D1DC;
    case 344u: goto L_0882D1E4;
    case 345u: goto L_0882D1F0;
    case 346u: goto L_0882D204;
    case 347u: goto L_0882D208;
    case 348u: goto L_0882D20C;
    case 349u: goto L_0882D214;
    case 350u: goto L_0882D228;
    case 351u: goto L_0882D238;
    case 352u: goto L_0882D240;
    case 353u: goto L_0882D244;
    case 354u: goto L_0882D24C;
    case 355u: goto L_0882D264;
    case 356u: goto L_0882D26C;
    case 357u: goto L_0882D278;
    case 358u: goto L_0882D280;
    case 359u: goto L_0882D288;
    case 360u: goto L_0882D290;
    case 361u: goto L_0882D298;
    case 362u: goto L_0882D2A0;
    case 363u: goto L_0882D2A4;
    case 364u: goto L_0882D2AC;
    case 365u: goto L_0882D2D4;
    case 366u: goto L_0882D2E0;
    case 367u: goto L_0882D2F0;
    case 368u: goto L_0882D308;
    case 369u: goto L_0882D310;
    case 370u: goto L_0882D324;
    case 371u: goto L_0882D358;
    case 372u: goto L_0882D360;
    case 373u: goto L_0882D388;
    case 374u: goto L_0882D3F8;
    case 375u: goto L_0882D400;
    case 376u: goto L_0882D404;
    case 377u: goto L_0882D410;
    case 378u: goto L_0882D41C;
    case 379u: goto L_0882D430;
    case 380u: goto L_0882D434;
    case 381u: goto L_0882D438;
    case 382u: goto L_0882D440;
    case 383u: goto L_0882D44C;
    case 384u: goto L_0882D454;
    case 385u: goto L_0882D464;
    case 386u: goto L_0882D470;
    case 387u: goto L_0882D47C;
    case 388u: goto L_0882D498;
    case 389u: goto L_0882D49C;
    case 390u: goto L_0882D4A8;
    case 391u: goto L_0882D4B4;
    case 392u: goto L_0882D4C0;
    case 393u: goto L_0882D4C8;
    case 394u: goto L_0882D4CC;
    case 395u: goto L_0882D4D4;
    case 396u: goto L_0882D4E0;
    case 397u: goto L_0882D4F8;
    case 398u: goto L_0882D50C;
    case 399u: goto L_0882D518;
    case 400u: goto L_0882D524;
    case 401u: goto L_0882D540;
    case 402u: goto L_0882D544;
    case 403u: goto L_0882D550;
    case 404u: goto L_0882D55C;
    case 405u: goto L_0882D568;
    case 406u: goto L_0882D570;
    case 407u: goto L_0882D574;
    case 408u: goto L_0882D57C;
    case 409u: goto L_0882D588;
    case 410u: goto L_0882D5A0;
    case 411u: goto L_0882D5A8;
    case 412u: goto L_0882D5B8;
    case 413u: goto L_0882D5D0;
    case 414u: goto L_0882D5D8;
    case 415u: goto L_0882D5E0;
    case 416u: goto L_0882D5EC;
    case 417u: goto L_0882D604;
    case 418u: goto L_0882D60C;
    case 419u: goto L_0882D614;
    case 420u: goto L_0882D624;
    case 421u: goto L_0882D630;
    case 422u: goto L_0882D63C;
    case 423u: goto L_0882D644;
    case 424u: goto L_0882D64C;
    case 425u: goto L_0882D658;
    case 426u: goto L_0882D670;
    case 427u: goto L_0882D678;
    case 428u: goto L_0882D680;
    case 429u: goto L_0882D68C;
    case 430u: goto L_0882D694;
    case 431u: goto L_0882D69C;
    case 432u: goto L_0882D6A8;
    case 433u: goto L_0882D6B4;
    case 434u: goto L_0882D6C0;
    case 435u: goto L_0882D6CC;
    case 436u: goto L_0882D6D4;
    case 437u: goto L_0882D6D8;
    case 438u: goto L_0882D6E0;
    case 439u: goto L_0882D6EC;
    case 440u: goto L_0882D700;
    case 441u: goto L_0882D708;
    case 442u: goto L_0882D714;
    case 443u: goto L_0882D71C;
    case 444u: goto L_0882D720;
    case 445u: goto L_0882D728;
    case 446u: goto L_0882D730;
    case 447u: goto L_0882D738;
    case 448u: goto L_0882D744;
    case 449u: goto L_0882D750;
    case 450u: goto L_0882D758;
    case 451u: goto L_0882D75C;
    case 452u: goto L_0882D768;
    case 453u: goto L_0882D770;
    case 454u: goto L_0882D784;
    case 455u: goto L_0882D78C;
    case 456u: goto L_0882D798;
    case 457u: goto L_0882D7A0;
    case 458u: goto L_0882D7AC;
    case 459u: goto L_0882D7B8;
    case 460u: goto L_0882D7C0;
    case 461u: goto L_0882D7C4;
    case 462u: goto L_0882D7D0;
    case 463u: goto L_0882D7D8;
    case 464u: goto L_0882D7EC;
    case 465u: goto L_0882D7F8;
    case 466u: goto L_0882D808;
    case 467u: goto L_0882D814;
    case 468u: goto L_0882D820;
    case 469u: goto L_0882D828;
    case 470u: goto L_0882D82C;
    case 471u: goto L_0882D830;
    case 472u: goto L_0882D840;
    case 473u: goto L_0882D854;
    case 474u: goto L_0882D864;
    case 475u: goto L_0882D870;
    case 476u: goto L_0882D87C;
    case 477u: goto L_0882D898;
    case 478u: goto L_0882D89C;
    case 479u: goto L_0882D8A8;
    case 480u: goto L_0882D8B4;
    case 481u: goto L_0882D8C0;
    case 482u: goto L_0882D8C8;
    case 483u: goto L_0882D8CC;
    case 484u: goto L_0882D8D4;
    case 485u: goto L_0882D8E0;
    case 486u: goto L_0882D8F8;
    case 487u: goto L_0882D90C;
    case 488u: goto L_0882D918;
    case 489u: goto L_0882D924;
    case 490u: goto L_0882D940;
    case 491u: goto L_0882D944;
    case 492u: goto L_0882D950;
    case 493u: goto L_0882D95C;
    case 494u: goto L_0882D968;
    case 495u: goto L_0882D970;
    case 496u: goto L_0882D974;
    case 497u: goto L_0882D97C;
    case 498u: goto L_0882D988;
    case 499u: goto L_0882D9A0;
    case 500u: goto L_0882D9A8;
    case 501u: goto L_0882D9B0;
    case 502u: goto L_0882D9BC;
    case 503u: goto L_0882D9C8;
    case 504u: goto L_0882D9D0;
    case 505u: goto L_0882D9D4;
    case 506u: goto L_0882D9E0;
    case 507u: goto L_0882D9E8;
    case 508u: goto L_0882D9FC;
    case 509u: goto L_0882DA04;
    case 510u: goto L_0882DA0C;
    case 511u: goto L_0882DA24;
    case 512u: goto L_0882DA30;
    case 513u: goto L_0882DA64;
    case 514u: goto L_0882DAA0;
    case 515u: goto L_0882DAB4;
    case 516u: goto L_0882DABC;
    case 517u: goto L_0882DAC0;
    case 518u: goto L_0882DAC8;
    case 519u: goto L_0882DB00;
    case 520u: goto L_0882DB08;
    case 521u: goto L_0882DB10;
    case 522u: goto L_0882DB34;
    case 523u: goto L_0882DB3C;
    case 524u: goto L_0882DB44;
    case 525u: goto L_0882DB48;
    case 526u: goto L_0882DB50;
    case 527u: goto L_0882DB5C;
    case 528u: goto L_0882DB64;
    case 529u: goto L_0882DB68;
    case 530u: goto L_0882DB70;
    case 531u: goto L_0882DB78;
    case 532u: goto L_0882DB80;
    case 533u: goto L_0882DB88;
    case 534u: goto L_0882DB90;
    case 535u: goto L_0882DB98;
    case 536u: goto L_0882DBB4;
    case 537u: goto L_0882DBCC;
    case 538u: goto L_0882DBD4;
    case 539u: goto L_0882DBDC;
    case 540u: goto L_0882DBE4;
    case 541u: goto L_0882DBEC;
    case 542u: goto L_0882DBF4;
    case 543u: goto L_0882DC00;
    case 544u: goto L_0882DC14;
    case 545u: goto L_0882DC18;
    case 546u: goto L_0882DC1C;
    case 547u: goto L_0882DC24;
    case 548u: goto L_0882DC2C;
    case 549u: goto L_0882DC34;
    case 550u: goto L_0882DC3C;
    case 551u: goto L_0882DC44;
    case 552u: goto L_0882DC50;
    case 553u: goto L_0882DC5C;
    case 554u: goto L_0882DC70;
    case 555u: goto L_0882DC78;
    case 556u: goto L_0882DC84;
    case 557u: goto L_0882DC98;
    case 558u: goto L_0882DC9C;
    case 559u: goto L_0882DCA0;
    case 560u: goto L_0882DCA8;
    case 561u: goto L_0882DCB0;
    case 562u: goto L_0882DCB8;
    case 563u: goto L_0882DCC0;
    case 564u: goto L_0882DCC8;
    case 565u: goto L_0882DCD0;
    case 566u: goto L_0882DCF0;
    case 567u: goto L_0882DCF8;
    case 568u: goto L_0882DCFC;
    case 569u: goto L_0882DD04;
    case 570u: goto L_0882DD0C;
    case 571u: goto L_0882DD18;
    case 572u: goto L_0882DD20;
    case 573u: goto L_0882DD24;
    case 574u: goto L_0882DD2C;
    case 575u: goto L_0882DD38;
    case 576u: goto L_0882DD40;
    case 577u: goto L_0882DD4C;
    case 578u: goto L_0882DD54;
    case 579u: goto L_0882DD6C;
    case 580u: goto L_0882DD7C;
    case 581u: goto L_0882DD88;
    case 582u: goto L_0882DD90;
    case 583u: goto L_0882DD98;
    case 584u: goto L_0882DDA4;
    case 585u: goto L_0882DDAC;
    case 586u: goto L_0882DDB4;
    case 587u: goto L_0882DDBC;
    case 588u: goto L_0882DDC8;
    case 589u: goto L_0882DDD4;
    case 590u: goto L_0882DDE8;
    case 591u: goto L_0882DDF0;
    case 592u: goto L_0882DDFC;
    case 593u: goto L_0882DE10;
    case 594u: goto L_0882DE14;
    case 595u: goto L_0882DE18;
    case 596u: goto L_0882DE20;
    case 597u: goto L_0882DE38;
    case 598u: goto L_0882DE40;
    case 599u: goto L_0882DE50;
    case 600u: goto L_0882DE60;
    case 601u: goto L_0882DE68;
    case 602u: goto L_0882DE7C;
    case 603u: goto L_0882DEB0;
    case 604u: goto L_0882DEBC;
    case 605u: goto L_0882DEC4;
    case 606u: goto L_0882DECC;
    case 607u: goto L_0882DED4;
    case 608u: goto L_0882DEDC;
    case 609u: goto L_0882DEF0;
    case 610u: goto L_0882DF40;
    case 611u: goto L_0882DF4C;
    case 612u: goto L_0882DF60;
    case 613u: goto L_0882DF8C;
    case 614u: goto L_0882DF9C;
    case 615u: goto L_0882DFC4;
    case 616u: goto L_0882DFCC;
    case 617u: goto L_0882DFD0;
    case 618u: goto L_0882DFD8;
    case 619u: goto L_0882DFE0;
    case 620u: goto L_0882DFEC;
    case 621u: goto L_0882DFF4;
    case 622u: goto L_0882DFF8;
    case 623u: goto L_0882E000;
    case 624u: goto L_0882E00C;
    case 625u: goto L_0882E014;
    case 626u: goto L_0882E020;
    case 627u: goto L_0882E028;
    case 628u: goto L_0882E040;
    case 629u: goto L_0882E050;
    case 630u: goto L_0882E068;
    case 631u: goto L_0882E07C;
    case 632u: goto L_0882E08C;
    case 633u: goto L_0882E0A4;
    case 634u: goto L_0882E0AC;
    case 635u: goto L_0882E0B4;
    case 636u: goto L_0882E0BC;
    case 637u: goto L_0882E0C4;
    case 638u: goto L_0882E0CC;
    case 639u: goto L_0882E0D4;
    case 640u: goto L_0882E0D8;
    case 641u: goto L_0882E0E0;
    case 642u: goto L_0882E0E8;
    case 643u: goto L_0882E100;
    case 644u: goto L_0882E104;
    case 645u: goto L_0882E110;
    case 646u: goto L_0882E120;
    case 647u: goto L_0882E138;
    case 648u: goto L_0882E148;
    case 649u: goto L_0882E150;
    case 650u: goto L_0882E158;
    case 651u: goto L_0882E160;
    case 652u: goto L_0882E174;
    case 653u: goto L_0882E184;
    case 654u: goto L_0882E18C;
    case 655u: goto L_0882E194;
    case 656u: goto L_0882E19C;
    case 657u: goto L_0882E1A4;
    case 658u: goto L_0882E1B8;
    case 659u: goto L_0882E1C8;
    case 660u: goto L_0882E1D4;
    case 661u: goto L_0882E1DC;
    case 662u: goto L_0882E1E4;
    case 663u: goto L_0882E1EC;
    case 664u: goto L_0882E204;
    case 665u: goto L_0882E214;
    case 666u: goto L_0882E21C;
    case 667u: goto L_0882E224;
    case 668u: goto L_0882E22C;
    case 669u: goto L_0882E230;
    case 670u: goto L_0882E240;
    case 671u: goto L_0882E248;
    case 672u: goto L_0882E254;
    case 673u: goto L_0882E25C;
    case 674u: goto L_0882E264;
    case 675u: goto L_0882E27C;
    case 676u: goto L_0882E284;
    case 677u: goto L_0882E290;
    case 678u: goto L_0882E2A4;
    case 679u: goto L_0882E2A8;
    case 680u: goto L_0882E2B4;
    case 681u: goto L_0882E2BC;
    case 682u: goto L_0882E2C4;
    case 683u: goto L_0882E2CC;
    case 684u: goto L_0882E2D4;
    case 685u: goto L_0882E2E8;
    case 686u: goto L_0882E2EC;
    case 687u: goto L_0882E2F4;
    case 688u: goto L_0882E300;
    case 689u: goto L_0882E308;
    case 690u: goto L_0882E310;
    case 691u: goto L_0882E318;
    case 692u: goto L_0882E320;
    case 693u: goto L_0882E324;
    case 694u: goto L_0882E330;
    case 695u: goto L_0882E338;
    case 696u: goto L_0882E340;
    case 697u: goto L_0882E34C;
    case 698u: goto L_0882E358;
    case 699u: goto L_0882E36C;
    case 700u: goto L_0882E370;
    case 701u: goto L_0882E374;
    case 702u: goto L_0882E37C;
    case 703u: goto L_0882E384;
    case 704u: goto L_0882E390;
    case 705u: goto L_0882E3A4;
    case 706u: goto L_0882E3AC;
    case 707u: goto L_0882E3B8;
    case 708u: goto L_0882E3CC;
    case 709u: goto L_0882E3D0;
    case 710u: goto L_0882E3D4;
    case 711u: goto L_0882E3DC;
    case 712u: goto L_0882E3E0;
    case 713u: goto L_0882E3E8;
    case 714u: goto L_0882E3F0;
    case 715u: goto L_0882E3F8;
    case 716u: goto L_0882E400;
    case 717u: goto L_0882E40C;
    case 718u: goto L_0882E420;
    case 719u: goto L_0882E424;
    case 720u: goto L_0882E42C;
    case 721u: goto L_0882E434;
    case 722u: goto L_0882E43C;
    case 723u: goto L_0882E448;
    case 724u: goto L_0882E450;
    case 725u: goto L_0882E458;
    case 726u: goto L_0882E464;
    case 727u: goto L_0882E470;
    case 728u: goto L_0882E478;
    case 729u: goto L_0882E484;
    case 730u: goto L_0882E48C;
    case 731u: goto L_0882E494;
    case 732u: goto L_0882E49C;
    case 733u: goto L_0882E4A8;
    case 734u: goto L_0882E4B0;
    case 735u: goto L_0882E4B8;
    case 736u: goto L_0882E4C4;
    case 737u: goto L_0882E4CC;
    case 738u: goto L_0882E4D8;
    case 739u: goto L_0882E4E4;
    case 740u: goto L_0882E4EC;
    case 741u: goto L_0882E4F4;
    case 742u: goto L_0882E504;
    case 743u: goto L_0882E51C;
    case 744u: goto L_0882E52C;
    case 745u: goto L_0882E538;
    case 746u: goto L_0882E540;
    case 747u: goto L_0882E548;
    case 748u: goto L_0882E550;
    case 749u: goto L_0882E558;
    case 750u: goto L_0882E568;
    case 751u: goto L_0882E574;
    case 752u: goto L_0882E57C;
    case 753u: goto L_0882E584;
    case 754u: goto L_0882E58C;
    case 755u: goto L_0882E594;
    case 756u: goto L_0882E5A0;
    case 757u: goto L_0882E5A8;
    case 758u: goto L_0882E5B0;
    case 759u: goto L_0882E5BC;
    case 760u: goto L_0882E5C4;
    case 761u: goto L_0882E5CC;
    case 762u: goto L_0882E5D4;
    case 763u: goto L_0882E5E0;
    case 764u: goto L_0882E5E8;
    case 765u: goto L_0882E5F0;
    case 766u: goto L_0882E5FC;
    case 767u: goto L_0882E604;
    case 768u: goto L_0882E614;
    case 769u: goto L_0882E620;
    case 770u: goto L_0882E628;
    case 771u: goto L_0882E630;
    case 772u: goto L_0882E648;
    case 773u: goto L_0882E650;
    case 774u: goto L_0882E65C;
    case 775u: goto L_0882E668;
    case 776u: goto L_0882E670;
    case 777u: goto L_0882E678;
    case 778u: goto L_0882E688;
    case 779u: goto L_0882E690;
    case 780u: goto L_0882E698;
    case 781u: goto L_0882E6A4;
    case 782u: goto L_0882E6AC;
    case 783u: goto L_0882E6B4;
    case 784u: goto L_0882E6C0;
    case 785u: goto L_0882E6D8;
    case 786u: goto L_0882E6E0;
    case 787u: goto L_0882E6EC;
    case 788u: goto L_0882E6F8;
    case 789u: goto L_0882E70C;
    case 790u: goto L_0882E724;
    case 791u: goto L_0882E72C;
    case 792u: goto L_0882E734;
    case 793u: goto L_0882E740;
    case 794u: goto L_0882E748;
    case 795u: goto L_0882E750;
    case 796u: goto L_0882E760;
    case 797u: goto L_0882E768;
    case 798u: goto L_0882E770;
    case 799u: goto L_0882E788;
    case 800u: goto L_0882E790;
    case 801u: goto L_0882E79C;
    case 802u: goto L_0882E7A8;
    case 803u: goto L_0882E7B0;
    case 804u: goto L_0882E7B8;
    case 805u: goto L_0882E7C8;
    case 806u: goto L_0882E7D0;
    case 807u: goto L_0882E7D8;
    case 808u: goto L_0882E7E4;
    case 809u: goto L_0882E7EC;
    case 810u: goto L_0882E7F4;
    case 811u: goto L_0882E800;
    case 812u: goto L_0882E818;
    case 813u: goto L_0882E820;
    case 814u: goto L_0882E82C;
    case 815u: goto L_0882E838;
    case 816u: goto L_0882E84C;
    case 817u: goto L_0882E864;
    case 818u: goto L_0882E86C;
    case 819u: goto L_0882E874;
    case 820u: goto L_0882E880;
    case 821u: goto L_0882E888;
    case 822u: goto L_0882E890;
    case 823u: goto L_0882E8A0;
    case 824u: goto L_0882E8A8;
    case 825u: goto L_0882E8B0;
    case 826u: goto L_0882E8BC;
    case 827u: goto L_0882E8C8;
    case 828u: goto L_0882E8D0;
    case 829u: goto L_0882E8D8;
    case 830u: goto L_0882E8E0;
    case 831u: goto L_0882E8E8;
    case 832u: goto L_0882E8F0;
    case 833u: goto L_0882E8FC;
    case 834u: goto L_0882E908;
    case 835u: goto L_0882E910;
    case 836u: goto L_0882E918;
    case 837u: goto L_0882E920;
    case 838u: goto L_0882E92C;
    case 839u: goto L_0882E938;
    case 840u: goto L_0882E940;
    case 841u: goto L_0882E948;
    case 842u: goto L_0882E954;
    case 843u: goto L_0882E95C;
    case 844u: goto L_0882E970;
    case 845u: goto L_0882E978;
    case 846u: goto L_0882E980;
    case 847u: goto L_0882E98C;
    case 848u: goto L_0882E99C;
    case 849u: goto L_0882E9A0;
    case 850u: goto L_0882E9A8;
    case 851u: goto L_0882E9B0;
    case 852u: goto L_0882E9C0;
    case 853u: goto L_0882E9CC;
    case 854u: goto L_0882E9D4;
    case 855u: goto L_0882E9DC;
    case 856u: goto L_0882E9E8;
    case 857u: goto L_0882E9F8;
    case 858u: goto L_0882EA04;
    case 859u: goto L_0882EA0C;
    case 860u: goto L_0882EA14;
    case 861u: goto L_0882EA20;
    case 862u: goto L_0882EA2C;
    case 863u: goto L_0882EA34;
    case 864u: goto L_0882EA3C;
    case 865u: goto L_0882EA44;
    case 866u: goto L_0882EA4C;
    case 867u: goto L_0882EA54;
    case 868u: goto L_0882EA5C;
    case 869u: goto L_0882EA68;
    case 870u: goto L_0882EA70;
    case 871u: goto L_0882EA78;
    case 872u: goto L_0882EA84;
    case 873u: goto L_0882EA8C;
    case 874u: goto L_0882EA94;
    case 875u: goto L_0882EA9C;
    case 876u: goto L_0882EAA8;
    case 877u: goto L_0882EAB0;
    case 878u: goto L_0882EAB8;
    case 879u: goto L_0882EAC4;
    case 880u: goto L_0882EACC;
    case 881u: goto L_0882EADC;
    case 882u: goto L_0882EAE8;
    case 883u: goto L_0882EAF0;
    case 884u: goto L_0882EAF8;
    case 885u: goto L_0882EB04;
    case 886u: goto L_0882EB0C;
    case 887u: goto L_0882EB18;
    case 888u: goto L_0882EB24;
    case 889u: goto L_0882EB2C;
    case 890u: goto L_0882EB34;
    case 891u: goto L_0882EB40;
    case 892u: goto L_0882EB48;
    case 893u: goto L_0882EB54;
    case 894u: goto L_0882EB5C;
    case 895u: goto L_0882EB68;
    case 896u: goto L_0882EB74;
    case 897u: goto L_0882EB7C;
    case 898u: goto L_0882EB84;
    case 899u: goto L_0882EB90;
    case 900u: goto L_0882EB98;
    case 901u: goto L_0882EBA4;
    case 902u: goto L_0882EBB4;
    case 903u: goto L_0882EBC0;
    case 904u: goto L_0882EBC8;
    case 905u: goto L_0882EBD0;
    case 906u: goto L_0882EBD8;
    case 907u: goto L_0882EBE0;
    case 908u: goto L_0882EBE8;
    case 909u: goto L_0882EBF0;
    case 910u: goto L_0882EBFC;
    case 911u: goto L_0882EC10;
    case 912u: goto L_0882EC14;
    case 913u: goto L_0882EC1C;
    case 914u: goto L_0882EC24;
    case 915u: goto L_0882EC30;
    case 916u: goto L_0882EC3C;
    case 917u: goto L_0882EC44;
    case 918u: goto L_0882EC4C;
    case 919u: goto L_0882EC58;
    case 920u: goto L_0882EC64;
    case 921u: goto L_0882EC6C;
    case 922u: goto L_0882EC78;
    case 923u: goto L_0882EC80;
    case 924u: goto L_0882EC8C;
    case 925u: goto L_0882EC98;
    case 926u: goto L_0882ECA0;
    case 927u: goto L_0882ECA8;
    case 928u: goto L_0882ECB0;
    case 929u: goto L_0882ECBC;
    case 930u: goto L_0882ECC4;
    case 931u: goto L_0882ECCC;
    case 932u: goto L_0882ECD8;
    case 933u: goto L_0882ECE0;
    case 934u: goto L_0882ECEC;
    case 935u: goto L_0882ECF8;
    case 936u: goto L_0882ED00;
    case 937u: goto L_0882ED08;
    case 938u: goto L_0882ED18;
    case 939u: goto L_0882ED30;
    case 940u: goto L_0882ED40;
    case 941u: goto L_0882ED4C;
    case 942u: goto L_0882ED54;
    case 943u: goto L_0882ED5C;
    case 944u: goto L_0882ED64;
    case 945u: goto L_0882ED6C;
    case 946u: goto L_0882ED7C;
    case 947u: goto L_0882ED88;
    case 948u: goto L_0882ED90;
    case 949u: goto L_0882ED98;
    case 950u: goto L_0882EDA0;
    case 951u: goto L_0882EDAC;
    case 952u: goto L_0882EDB8;
    case 953u: goto L_0882EDC0;
    case 954u: goto L_0882EDC8;
    case 955u: goto L_0882EDD4;
    case 956u: goto L_0882EDDC;
    case 957u: goto L_0882EDE4;
    case 958u: goto L_0882EDF0;
    case 959u: goto L_0882EDFC;
    case 960u: goto L_0882EE04;
    case 961u: goto L_0882EE0C;
    case 962u: goto L_0882EE18;
    case 963u: goto L_0882EE20;
    case 964u: goto L_0882EE30;
    case 965u: goto L_0882EE3C;
    case 966u: goto L_0882EE44;
    case 967u: goto L_0882EE4C;
    case 968u: goto L_0882EE64;
    case 969u: goto L_0882EE6C;
    case 970u: goto L_0882EE7C;
    case 971u: goto L_0882EE88;
    case 972u: goto L_0882EE90;
    case 973u: goto L_0882EE98;
    case 974u: goto L_0882EEA8;
    case 975u: goto L_0882EEB0;
    case 976u: goto L_0882EEB8;
    case 977u: goto L_0882EEC4;
    case 978u: goto L_0882EECC;
    case 979u: goto L_0882EED4;
    case 980u: goto L_0882EEE0;
    case 981u: goto L_0882EEF8;
    case 982u: goto L_0882EF00;
    case 983u: goto L_0882EF0C;
    case 984u: goto L_0882EF18;
    case 985u: goto L_0882EF2C;
    case 986u: goto L_0882EF44;
    case 987u: goto L_0882EF4C;
    case 988u: goto L_0882EF58;
    case 989u: goto L_0882EF64;
    case 990u: goto L_0882EF6C;
    case 991u: goto L_0882EF74;
    case 992u: goto L_0882EF84;
    case 993u: goto L_0882EF8C;
    case 994u: goto L_0882EF94;
    case 995u: goto L_0882EFAC;
    case 996u: goto L_0882EFB4;
    case 997u: goto L_0882EFC4;
    case 998u: goto L_0882EFD0;
    case 999u: goto L_0882EFD8;
    case 1000u: goto L_0882EFE0;
    case 1001u: goto L_0882EFF0;
    case 1002u: goto L_0882EFF8;
    case 1003u: goto L_0882F000;
    case 1004u: goto L_0882F00C;
    case 1005u: goto L_0882F014;
    case 1006u: goto L_0882F01C;
    case 1007u: goto L_0882F028;
    case 1008u: goto L_0882F040;
    case 1009u: goto L_0882F048;
    case 1010u: goto L_0882F054;
    case 1011u: goto L_0882F060;
    case 1012u: goto L_0882F074;
    case 1013u: goto L_0882F08C;
    case 1014u: goto L_0882F094;
    case 1015u: goto L_0882F0A0;
    case 1016u: goto L_0882F0AC;
    case 1017u: goto L_0882F0B4;
    case 1018u: goto L_0882F0BC;
    case 1019u: goto L_0882F0CC;
    case 1020u: goto L_0882F0D4;
    case 1021u: goto L_0882F0DC;
    case 1022u: goto L_0882F0E8;
    case 1023u: goto L_0882F0F4;
    case 1024u: goto L_0882F0FC;
    case 1025u: goto L_0882F104;
    case 1026u: goto L_0882F10C;
    case 1027u: goto L_0882F114;
    case 1028u: goto L_0882F11C;
    case 1029u: goto L_0882F12C;
    case 1030u: goto L_0882F134;
    case 1031u: goto L_0882F13C;
    case 1032u: goto L_0882F144;
    case 1033u: goto L_0882F14C;
    case 1034u: goto L_0882F158;
    case 1035u: goto L_0882F164;
    case 1036u: goto L_0882F16C;
    case 1037u: goto L_0882F174;
    case 1038u: goto L_0882F180;
    case 1039u: goto L_0882F188;
    case 1040u: goto L_0882F19C;
    case 1041u: goto L_0882F1A4;
    case 1042u: goto L_0882F1AC;
    case 1043u: goto L_0882F1B8;
    case 1044u: goto L_0882F1C8;
    case 1045u: goto L_0882F1CC;
    case 1046u: goto L_0882F1D4;
    case 1047u: goto L_0882F1DC;
    case 1048u: goto L_0882F1EC;
    case 1049u: goto L_0882F1F8;
    case 1050u: goto L_0882F200;
    case 1051u: goto L_0882F208;
    case 1052u: goto L_0882F214;
    case 1053u: goto L_0882F224;
    case 1054u: goto L_0882F230;
    case 1055u: goto L_0882F238;
    case 1056u: goto L_0882F240;
    case 1057u: goto L_0882F24C;
    case 1058u: goto L_0882F254;
    case 1059u: goto L_0882F260;
    case 1060u: goto L_0882F26C;
    case 1061u: goto L_0882F274;
    case 1062u: goto L_0882F27C;
    case 1063u: goto L_0882F288;
    case 1064u: goto L_0882F290;
    case 1065u: goto L_0882F29C;
    case 1066u: goto L_0882F2A4;
    case 1067u: goto L_0882F2B0;
    case 1068u: goto L_0882F2BC;
    case 1069u: goto L_0882F2C4;
    case 1070u: goto L_0882F2CC;
    case 1071u: goto L_0882F2D8;
    case 1072u: goto L_0882F2E0;
    case 1073u: goto L_0882F2EC;
    case 1074u: goto L_0882F2F8;
    case 1075u: goto L_0882F300;
    case 1076u: goto L_0882F308;
    case 1077u: goto L_0882F310;
    case 1078u: goto L_0882F318;
    case 1079u: goto L_0882F320;
    case 1080u: goto L_0882F32C;
    case 1081u: goto L_0882F338;
    case 1082u: goto L_0882F340;
    case 1083u: goto L_0882F348;
    case 1084u: goto L_0882F354;
    case 1085u: goto L_0882F35C;
    case 1086u: goto L_0882F364;
    case 1087u: goto L_0882F370;
    case 1088u: goto L_0882F37C;
    case 1089u: goto L_0882F384;
    case 1090u: goto L_0882F38C;
    case 1091u: goto L_0882F398;
    case 1092u: goto L_0882F3A0;
    case 1093u: goto L_0882F3B0;
    case 1094u: goto L_0882F3BC;
    case 1095u: goto L_0882F3C4;
    case 1096u: goto L_0882F3CC;
    case 1097u: goto L_0882F3D8;
    case 1098u: goto L_0882F3E8;
    case 1099u: goto L_0882F3F4;
    case 1100u: goto L_0882F3FC;
    case 1101u: goto L_0882F404;
    case 1102u: goto L_0882F414;
    case 1103u: goto L_0882F420;
    case 1104u: goto L_0882F424;
    case 1105u: goto L_0882F428;
    case 1106u: goto L_0882F430;
    case 1107u: goto L_0882F43C;
    case 1108u: goto L_0882F444;
    case 1109u: goto L_0882F450;
    case 1110u: goto L_0882F45C;
    case 1111u: goto L_0882F464;
    case 1112u: goto L_0882F470;
    case 1113u: goto L_0882F478;
    case 1114u: goto L_0882F480;
    case 1115u: goto L_0882F48C;
    case 1116u: goto L_0882F498;
    case 1117u: goto L_0882F4AC;
    case 1118u: goto L_0882F4B0;
    case 1119u: goto L_0882F4B4;
    case 1120u: goto L_0882F4BC;
    case 1121u: goto L_0882F4C4;
    case 1122u: goto L_0882F4D0;
    case 1123u: goto L_0882F4E4;
    case 1124u: goto L_0882F4EC;
    case 1125u: goto L_0882F4F8;
    case 1126u: goto L_0882F50C;
    case 1127u: goto L_0882F510;
    case 1128u: goto L_0882F514;
    case 1129u: goto L_0882F51C;
    case 1130u: goto L_0882F524;
    case 1131u: goto L_0882F52C;
    case 1132u: goto L_0882F530;
    case 1133u: goto L_0882F538;
    case 1134u: goto L_0882F544;
    case 1135u: goto L_0882F55C;
    case 1136u: goto L_0882F568;
    case 1137u: goto L_0882F570;
    case 1138u: goto L_0882F574;
    case 1139u: goto L_0882F57C;
    case 1140u: goto L_0882F588;
    case 1141u: goto L_0882F58C;
    case 1142u: goto L_0882F598;
    case 1143u: goto L_0882F5AC;
    case 1144u: goto L_0882F5B8;
    case 1145u: goto L_0882F5C0;
    case 1146u: goto L_0882F5C4;
    case 1147u: goto L_0882F5CC;
    case 1148u: goto L_0882F5D8;
    case 1149u: goto L_0882F5FC;
    case 1150u: goto L_0882F618;
    case 1151u: goto L_0882F624;
    case 1152u: goto L_0882F630;
    case 1153u: goto L_0882F638;
    case 1154u: goto L_0882F63C;
    case 1155u: goto L_0882F644;
    case 1156u: goto L_0882F650;
    case 1157u: goto L_0882F658;
    case 1158u: goto L_0882F65C;
    case 1159u: goto L_0882F664;
    case 1160u: goto L_0882F674;
    case 1161u: goto L_0882F67C;
    case 1162u: goto L_0882F688;
    case 1163u: goto L_0882F698;
    case 1164u: goto L_0882F6CC;
    case 1165u: goto L_0882F72C;
    case 1166u: goto L_0882F744;
    case 1167u: goto L_0882F74C;
    case 1168u: goto L_0882F754;
    case 1169u: goto L_0882F760;
    case 1170u: goto L_0882F778;
    case 1171u: goto L_0882F780;
    case 1172u: goto L_0882F78C;
    case 1173u: goto L_0882F7A8;
    case 1174u: goto L_0882F7B0;
    case 1175u: goto L_0882F7E8;
    case 1176u: goto L_0882F7F0;
    case 1177u: goto L_0882F810;
    case 1178u: goto L_0882F824;
    case 1179u: goto L_0882F83C;
    case 1180u: goto L_0882F844;
    case 1181u: goto L_0882F858;
    case 1182u: goto L_0882F864;
    case 1183u: goto L_0882F870;
    case 1184u: goto L_0882F878;
    case 1185u: goto L_0882F87C;
    case 1186u: goto L_0882F880;
    case 1187u: goto L_0882F894;
    case 1188u: goto L_0882F8A8;
    case 1189u: goto L_0882F8C0;
    case 1190u: goto L_0882F8C4;
    case 1191u: goto L_0882F8CC;
    case 1192u: goto L_0882F8E0;
    case 1193u: goto L_0882F934;
    case 1194u: goto L_0882F95C;
    case 1195u: goto L_0882F968;
    case 1196u: goto L_0882F978;
    case 1197u: goto L_0882F980;
    case 1198u: goto L_0882F998;
    case 1199u: goto L_0882F9A4;
    case 1200u: goto L_0882F9B0;
    case 1201u: goto L_0882F9B8;
    case 1202u: goto L_0882F9BC;
    case 1203u: goto L_0882F9C0;
    case 1204u: goto L_0882F9CC;
    case 1205u: goto L_0882F9E0;
    case 1206u: goto L_0882F9F4;
    case 1207u: goto L_0882F9FC;
    case 1208u: goto L_0882FA14;
    case 1209u: goto L_0882FA20;
    case 1210u: goto L_0882FA2C;
    case 1211u: goto L_0882FA34;
    case 1212u: goto L_0882FA38;
    case 1213u: goto L_0882FA3C;
    case 1214u: goto L_0882FA48;
    case 1215u: goto L_0882FA5C;
    case 1216u: goto L_0882FA70;
    case 1217u: goto L_0882FA74;
    case 1218u: goto L_0882FA7C;
    case 1219u: goto L_0882FA8C;
    case 1220u: goto L_0882FA94;
    case 1221u: goto L_0882FA98;
    case 1222u: goto L_0882FAA0;
    case 1223u: goto L_0882FAD4;
    case 1224u: goto L_0882FAE4;
    case 1225u: goto L_0882FAF4;
    case 1226u: goto L_0882FAF8;
    case 1227u: goto L_0882FAFC;
    case 1228u: goto L_0882FB0C;
    case 1229u: goto L_0882FB18;
    case 1230u: goto L_0882FB20;
    case 1231u: goto L_0882FB24;
    case 1232u: goto L_0882FB2C;
    case 1233u: goto L_0882FB40;
    case 1234u: goto L_0882FB5C;
    case 1235u: goto L_0882FB68;
    case 1236u: goto L_0882FB70;
    case 1237u: goto L_0882FB78;
    case 1238u: goto L_0882FB8C;
    case 1239u: goto L_0882FB9C;
    case 1240u: goto L_0882FBAC;
    case 1241u: goto L_0882FBB0;
    case 1242u: goto L_0882FBB4;
    case 1243u: goto L_0882FBBC;
    case 1244u: goto L_0882FBC8;
    case 1245u: goto L_0882FBE0;
    case 1246u: goto L_0882FC04;
    case 1247u: goto L_0882FC20;
    case 1248u: goto L_0882FC28;
    case 1249u: goto L_0882FC4C;
    case 1250u: goto L_0882FC58;
    case 1251u: goto L_0882FC70;
    case 1252u: goto L_0882FC90;
    case 1253u: goto L_0882FCA0;
    case 1254u: goto L_0882FCAC;
    case 1255u: goto L_0882FCB4;
    case 1256u: goto L_0882FCB8;
    case 1257u: goto L_0882FCC4;
    case 1258u: goto L_0882FCD8;
    case 1259u: goto L_0882FCE4;
    case 1260u: goto L_0882FD00;
    case 1261u: goto L_0882FD0C;
    case 1262u: goto L_0882FD14;
    case 1263u: goto L_0882FD18;
    case 1264u: goto L_0882FD20;
    case 1265u: goto L_0882FD34;
    case 1266u: goto L_0882FD44;
    case 1267u: goto L_0882FD54;
    case 1268u: goto L_0882FD58;
    case 1269u: goto L_0882FD5C;
    case 1270u: goto L_0882FD64;
    case 1271u: goto L_0882FD88;
    case 1272u: goto L_0882FD90;
    case 1273u: goto L_0882FDAC;
    case 1274u: goto L_0882FDB8;
    case 1275u: goto L_0882FDC4;
    case 1276u: goto L_0882FDCC;
    case 1277u: goto L_0882FDD0;
    case 1278u: goto L_0882FDD8;
    case 1279u: goto L_0882FDE4;
    case 1280u: goto L_0882FDF8;
    case 1281u: goto L_0882FE08;
    case 1282u: goto L_0882FE14;
    case 1283u: goto L_0882FE24;
    case 1284u: goto L_0882FE38;
    case 1285u: goto L_0882FE44;
    case 1286u: goto L_0882FE60;
    case 1287u: goto L_0882FE68;
    case 1288u: goto L_0882FE80;
    case 1289u: goto L_0882FE8C;
    case 1290u: goto L_0882FE98;
    case 1291u: goto L_0882FEA0;
    case 1292u: goto L_0882FEA4;
    case 1293u: goto L_0882FEA8;
    case 1294u: goto L_0882FEB8;
    case 1295u: goto L_0882FECC;
    case 1296u: goto L_0882FED4;
    case 1297u: goto L_0882FEE8;
    case 1298u: goto L_0882FEFC;
    case 1299u: goto L_0882FF0C;
    case 1300u: goto L_0882FF18;
    case 1301u: goto L_0882FF24;
    case 1302u: goto L_0882FF2C;
    case 1303u: goto L_0882FF30;
    case 1304u: goto L_0882FF34;
    case 1305u: goto L_0882FF40;
    case 1306u: goto L_0882FF54;
    case 1307u: goto L_0882FF64;
    case 1308u: goto L_0882FF74;
    case 1309u: goto L_0882FF7C;
    case 1310u: goto L_0882FF84;
    case 1311u: goto L_0882FF90;
    case 1312u: goto L_0882FFA8;
    case 1313u: goto L_0882FFB0;
    case 1314u: goto L_0882FFB8;
    case 1315u: goto L_0882FFC0;
    case 1316u: goto L_0882FFCC;
    case 1317u: goto L_0882FFD8;
    case 1318u: goto L_0882FFE4;
    case 1319u: goto L_0882FFEC;
    case 1320u: goto L_0882FFF0;
    case 1321u: goto L_0882FFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0882C000:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882C010:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0882C02Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x0882C02Cu) goto L_0882C02C;
    return;
L_0882C02C:
    ctx.gpr[31] = (0x0882C034u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 762u, 0x08A970E0u>(ctx, &aot_mem) && ctx.pc == 0x0882C034u) goto L_0882C034;
    return;
L_0882C034:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[17] = (2230u << 16u);
      if (branch_taken) {
          goto L_0882C060;
      }
      goto L_0882C03C;
    }
L_0882C03C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882C050;
      }
      goto L_0882C048;
    }
L_0882C048:
    ctx.gpr[31] = (0x0882C050u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x0882C050u) goto L_0882C050;
    return;
L_0882C050:
    ctx.gpr[31] = (0x0882C058u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 279u, 0x08A09200u>(ctx, &aot_mem) && ctx.pc == 0x0882C058u) goto L_0882C058;
    return;
L_0882C058:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882C068;
      }
      goto L_0882C060;
    }
L_0882C060:
    ctx.gpr[31] = (0x0882C068u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 497u, 0x0882BE40u>(ctx, &aot_mem) && ctx.pc == 0x0882C068u) goto L_0882C068;
    return;
L_0882C068:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882C07C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882C084:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[6] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27780)));
    ctx.gpr[19] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(5992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0882C0EC;
      }
      goto L_0882C0CC;
    }
L_0882C0CC:
    ctx.gpr[31] = (0x0882C0D4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 97u, 0x088A84FCu>(ctx, &aot_mem) && ctx.pc == 0x0882C0D4u) goto L_0882C0D4;
    return;
L_0882C0D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0882C108;
      }
      goto L_0882C0EC;
    }
L_0882C0EC:
    ctx.gpr[31] = (0x0882C0F4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 99u, 0x088A850Cu>(ctx, &aot_mem) && ctx.pc == 0x0882C0F4u) goto L_0882C0F4;
    return;
L_0882C0F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0882C108;
L_0882C108:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (2229u << 16u);
      if (branch_taken) {
          goto L_0882C1C8;
      }
      goto L_0882C110;
    }
L_0882C110:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(27776)));
    ctx.gpr[23] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(19148));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[23]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0882C1C8;
      }
      goto L_0882C138;
    }
L_0882C138:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1992)));
    ctx.gpr[22] = (0u | 65u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) >= 0;
    ctx.gpr[21] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_0882C150;
      }
      goto L_0882C14C;
    }
L_0882C14C:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(1992), ctx.gpr[5]);
    goto L_0882C150;
L_0882C150:
    ctx.gpr[20] = (2225u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-12256));
    goto L_0882C158;
L_0882C158:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] << 4u);
      if (branch_taken) {
          goto L_0882C1B8;
      }
      goto L_0882C160;
    }
L_0882C160:
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0882C1B8;
      }
      goto L_0882C178;
    }
L_0882C178:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0882C18Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 407u, 0x0882B86Cu>(ctx, &aot_mem) && ctx.pc == 0x0882C18Cu) goto L_0882C18C;
    return;
L_0882C18C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(27776)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[5] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(27776), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[22];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0882C1B0;
      }
      goto L_0882C1AC;
    }
L_0882C1AC:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(27776), 0u);
    goto L_0882C1B0;
L_0882C1B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(27776)));
      if (branch_taken) {
          goto L_0882C158;
      }
      goto L_0882C1B8;
    }
L_0882C1B8:
    ctx.gpr[31] = (0x0882C1C0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 66u, 0x088B84BCu>(ctx, &aot_mem) && ctx.pc == 0x0882C1C0u) goto L_0882C1C0;
    return;
L_0882C1C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C1F8;
      }
      goto L_0882C1C8;
    }
L_0882C1C8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (2227u << 16u);
      if (branch_taken) {
          goto L_0882C1F8;
      }
      goto L_0882C1D0;
    }
L_0882C1D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1992)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0882C1F8;
      }
      goto L_0882C1DC;
    }
L_0882C1DC:
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(27776), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27776)));
    ctx.gpr[31] = (0x0882C1F0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 66u, 0x088B84BCu>(ctx, &aot_mem) && ctx.pc == 0x0882C1F0u) goto L_0882C1F0;
    return;
L_0882C1F0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1992), ctx.gpr[4]);
    goto L_0882C1F8;
L_0882C1F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0882C23C;
      }
      goto L_0882C204;
    }
L_0882C204:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882C23C;
      }
      goto L_0882C21C;
    }
L_0882C21C:
    ctx.gpr[17] = (2233u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-4576));
    ctx.gpr[31] = (0x0882C22Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 296u, 0x08AD9614u>(ctx, &aot_mem) && ctx.pc == 0x0882C22Cu) goto L_0882C22C;
    return;
L_0882C22C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882C254;
      }
      goto L_0882C234;
    }
L_0882C234:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C244;
      }
      goto L_0882C23C;
    }
L_0882C23C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C3F4;
      }
      goto L_0882C244;
    }
L_0882C244:
    ctx.gpr[31] = (0x0882C24Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 408u, 0x0882B898u>(ctx, &aot_mem) && ctx.pc == 0x0882C24Cu) goto L_0882C24C;
    return;
L_0882C24C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C31C;
      }
      goto L_0882C254;
    }
L_0882C254:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 196u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0882C268u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x0882C268u) goto L_0882C268;
    return;
L_0882C268:
    ctx.gpr[19] = (2229u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(27776)));
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(19148));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (0u | 64u);
      if (branch_taken) {
          goto L_0882C28C;
      }
      goto L_0882C284;
    }
L_0882C284:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(27776), ctx.gpr[16]);
      if (branch_taken) {
          goto L_0882C294;
      }
      goto L_0882C28C;
    }
L_0882C28C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(27776), ctx.gpr[4]);
    goto L_0882C294;
L_0882C294:
    ctx.gpr[20] = (2225u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-12224));
    goto L_0882C29C;
L_0882C29C:
    ctx.gpr[31] = (0x0882C2A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 506u, 0x08AB2D4Cu>(ctx, &aot_mem) && ctx.pc == 0x0882C2A4u) goto L_0882C2A4;
    return;
L_0882C2A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(27776)));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[21] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C308;
      }
      goto L_0882C2C8;
    }
L_0882C2C8:
    ctx.gpr[31] = (0x0882C2D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 506u, 0x08AB2D4Cu>(ctx, &aot_mem) && ctx.pc == 0x0882C2D0u) goto L_0882C2D0;
    return;
L_0882C2D0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(27776)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0882C2E4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 407u, 0x0882B86Cu>(ctx, &aot_mem) && ctx.pc == 0x0882C2E4u) goto L_0882C2E4;
    return;
L_0882C2E4:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(27776)));
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882C2F8;
      }
      goto L_0882C2F0;
    }
L_0882C2F0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(27776), ctx.gpr[16]);
      if (branch_taken) {
          goto L_0882C300;
      }
      goto L_0882C2F8;
    }
L_0882C2F8:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(27776), ctx.gpr[4]);
    goto L_0882C300;
L_0882C300:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C29C;
      }
      goto L_0882C308;
    }
L_0882C308:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0882C314u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 66u, 0x088B84BCu>(ctx, &aot_mem) && ctx.pc == 0x0882C314u) goto L_0882C314;
    return;
L_0882C314:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C3F4;
      }
      goto L_0882C31C;
    }
L_0882C31C:
    ctx.gpr[31] = (0x0882C324u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 322u, 0x08AD96FCu>(ctx, &aot_mem) && ctx.pc == 0x0882C324u) goto L_0882C324;
    return;
L_0882C324:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882C33C;
      }
      goto L_0882C32C;
    }
L_0882C32C:
    ctx.gpr[31] = (0x0882C334u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 416u, 0x0882B8F8u>(ctx, &aot_mem) && ctx.pc == 0x0882C334u) goto L_0882C334;
    return;
L_0882C334:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C3F4;
      }
      goto L_0882C33C;
    }
L_0882C33C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 196u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0882C354u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x0882C354u) goto L_0882C354;
    return;
L_0882C354:
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27776)));
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (0u | 65u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(27776), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(19148));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_0882C37C;
      }
      goto L_0882C378;
    }
L_0882C378:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(27776), 0u);
    goto L_0882C37C;
L_0882C37C:
    ctx.gpr[21] = (2225u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-12192));
    goto L_0882C384;
L_0882C384:
    ctx.gpr[31] = (0x0882C38Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 506u, 0x08AB2D4Cu>(ctx, &aot_mem) && ctx.pc == 0x0882C38Cu) goto L_0882C38C;
    return;
L_0882C38C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27776)));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[20] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C3E8;
      }
      goto L_0882C3B0;
    }
L_0882C3B0:
    ctx.gpr[31] = (0x0882C3B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 506u, 0x08AB2D4Cu>(ctx, &aot_mem) && ctx.pc == 0x0882C3B8u) goto L_0882C3B8;
    return;
L_0882C3B8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27776)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0882C3CCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 407u, 0x0882B86Cu>(ctx, &aot_mem) && ctx.pc == 0x0882C3CCu) goto L_0882C3CC;
    return;
L_0882C3CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27776)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(27776), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0882C3E0;
      }
      goto L_0882C3DC;
    }
L_0882C3DC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(27776), 0u);
    goto L_0882C3E0;
L_0882C3E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C384;
      }
      goto L_0882C3E8;
    }
L_0882C3E8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0882C3F4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 66u, 0x088B84BCu>(ctx, &aot_mem) && ctx.pc == 0x0882C3F4u) goto L_0882C3F4;
    return;
L_0882C3F4:
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
L_0882C424:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x0882C454u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 148u, 0x088B8A70u>(ctx, &aot_mem) && ctx.pc == 0x0882C454u) goto L_0882C454;
    return;
L_0882C454:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[31] = (0x0882C468u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0882C8D0;
L_0882C468:
    ctx.gpr[31] = (0x0882C470u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 206u, 0x08A54EE8u>(ctx, &aot_mem) && ctx.pc == 0x0882C470u) goto L_0882C470;
    return;
L_0882C470:
    ctx.gpr[31] = (0x0882C478u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 207u, 0x08A54EF8u>(ctx, &aot_mem) && ctx.pc == 0x0882C478u) goto L_0882C478;
    return;
L_0882C478:
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24700)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
      if (branch_taken) {
          goto L_0882C4B8;
      }
      goto L_0882C48C;
    }
L_0882C48C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0882C498u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0882C498u) goto L_0882C498;
    return;
L_0882C498:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C4B0;
      }
      goto L_0882C4A4;
    }
L_0882C4A4:
    ctx.gpr[31] = (0x0882C4ACu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0882C4ACu) goto L_0882C4AC;
    return;
L_0882C4AC:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0882C4B0;
L_0882C4B0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_0882C4B8;
L_0882C4B8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[31] = (0x0882C4C4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12160));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0882C4C4u) goto L_0882C4C4;
    return;
L_0882C4C4:
    ctx.gpr[6] = (17164u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x0882C4DCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0882C4DCu) goto L_0882C4DC;
    return;
L_0882C4DC:
    ctx.gpr[31] = (0x0882C4E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 208u, 0x08A54F14u>(ctx, &aot_mem) && ctx.pc == 0x0882C4E4u) goto L_0882C4E4;
    return;
L_0882C4E4:
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
      if (branch_taken) {
          goto L_0882C520;
      }
      goto L_0882C4F4;
    }
L_0882C4F4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0882C500u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0882C500u) goto L_0882C500;
    return;
L_0882C500:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C518;
      }
      goto L_0882C50C;
    }
L_0882C50C:
    ctx.gpr[31] = (0x0882C514u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0882C514u) goto L_0882C514;
    return;
L_0882C514:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_0882C518;
L_0882C518:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0882C520;
L_0882C520:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27776)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(19148));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[31] = (0x0882C548u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0882C548u) goto L_0882C548;
    return;
L_0882C548:
    ctx.gpr[6] = (17169u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x0882C560u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0882C560u) goto L_0882C560;
    return;
L_0882C560:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882C580:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x0882C5B0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-28446), static_cast<std::uint8_t>(ctx.gpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 423u, 0x089C1BE8u>(ctx, &aot_mem) && ctx.pc == 0x0882C5B0u) goto L_0882C5B0;
    return;
L_0882C5B0:
    ctx.gpr[31] = (0x0882C5B8u);
    // nop
    ctx.pc = 0x08B0B7BCu;
    return;
L_0882C5B8:
    ctx.gpr[18] = (2225u << 16u);
    ctx.gpr[16] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] & 32u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-12152));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(5992));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (2230u << 16u);
      if (branch_taken) {
          goto L_0882C5E8;
      }
      goto L_0882C5D4;
    }
L_0882C5D4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0882C5E8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 438u, 0x089C1E98u>(ctx, &aot_mem) && ctx.pc == 0x0882C5E8u) goto L_0882C5E8;
    return;
L_0882C5E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0882C5FC;
      }
      goto L_0882C5F4;
    }
L_0882C5F4:
    ctx.gpr[31] = (0x0882C5FCu);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B0B69Cu;
    return;
L_0882C5FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0882C610;
      }
      goto L_0882C608;
    }
L_0882C608:
    ctx.gpr[31] = (0x0882C610u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B0B69Cu;
    return;
L_0882C610:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    ctx.gpr[31] = (0x0882C624u);
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 92u, 0x088B8680u>(ctx, &aot_mem) && ctx.pc == 0x0882C624u) goto L_0882C624;
    return;
L_0882C624:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882C63C;
      }
      goto L_0882C630;
    }
L_0882C630:
    ctx.gpr[31] = (0x0882C638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x0882C638u) goto L_0882C638;
    return;
L_0882C638:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    goto L_0882C63C;
L_0882C63C:
    ctx.gpr[31] = (0x0882C644u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 298u, 0x08A09320u>(ctx, &aot_mem) && ctx.pc == 0x0882C644u) goto L_0882C644;
    return;
L_0882C644:
    ctx.gpr[31] = (0x0882C64Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 633u, 0x08973F88u>(ctx, &aot_mem) && ctx.pc == 0x0882C64Cu) goto L_0882C64C;
    return;
L_0882C64C:
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(27772), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[31] = (0x0882C65Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 74u, 0x088A843Cu>(ctx, &aot_mem) && ctx.pc == 0x0882C65Cu) goto L_0882C65C;
    return;
L_0882C65C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882C688;
      }
      goto L_0882C664;
    }
L_0882C664:
    ctx.gpr[31] = (0x0882C66Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 83u, 0x088A848Cu>(ctx, &aot_mem) && ctx.pc == 0x0882C66Cu) goto L_0882C66C;
    return;
L_0882C66C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1876));
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0882C688u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12140));
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 407u, 0x0882B86Cu>(ctx, &aot_mem) && ctx.pc == 0x0882C688u) goto L_0882C688;
    return;
L_0882C688:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882C6A0;
      }
      goto L_0882C694;
    }
L_0882C694:
    ctx.gpr[31] = (0x0882C69Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x0882C69Cu) goto L_0882C69C;
    return;
L_0882C69C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    goto L_0882C6A0;
L_0882C6A0:
    ctx.gpr[31] = (0x0882C6A8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 87u, 0x08A08618u>(ctx, &aot_mem) && ctx.pc == 0x0882C6A8u) goto L_0882C6A8;
    return;
L_0882C6A8:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x0882C6B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4576));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 241u, 0x08AD930Cu>(ctx, &aot_mem) && ctx.pc == 0x0882C6B4u) goto L_0882C6B4;
    return;
L_0882C6B4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0882C6C0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-25519), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.pc = 0x08B0B7BCu;
    return;
L_0882C6C0:
    ctx.gpr[4] = (ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882C6E0;
      }
      goto L_0882C6CC;
    }
L_0882C6CC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0882C6E0u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 438u, 0x089C1E98u>(ctx, &aot_mem) && ctx.pc == 0x0882C6E0u) goto L_0882C6E0;
    return;
L_0882C6E0:
    ctx.gpr[31] = (0x0882C6E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 83u, 0x088A848Cu>(ctx, &aot_mem) && ctx.pc == 0x0882C6E8u) goto L_0882C6E8;
    return;
L_0882C6E8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C80C;
      }
      goto L_0882C6F8;
    }
L_0882C6F8:
    ctx.gpr[16] = (ctx.gpr[16] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[16]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-10528)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882C710:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12092));
    ctx.gpr[31] = (0x0882C72Cu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-12080));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 438u, 0x089C1E98u>(ctx, &aot_mem) && ctx.pc == 0x0882C72Cu) goto L_0882C72C;
    return;
L_0882C72C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C824;
      }
      goto L_0882C734;
    }
L_0882C734:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12072));
    ctx.gpr[31] = (0x0882C750u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-12064));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 438u, 0x089C1E98u>(ctx, &aot_mem) && ctx.pc == 0x0882C750u) goto L_0882C750;
    return;
L_0882C750:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C824;
      }
      goto L_0882C758;
    }
L_0882C758:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12056));
    ctx.gpr[31] = (0x0882C774u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-12052));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 438u, 0x089C1E98u>(ctx, &aot_mem) && ctx.pc == 0x0882C774u) goto L_0882C774;
    return;
L_0882C774:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C824;
      }
      goto L_0882C77C;
    }
L_0882C77C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12044));
    ctx.gpr[31] = (0x0882C798u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-12040));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 438u, 0x089C1E98u>(ctx, &aot_mem) && ctx.pc == 0x0882C798u) goto L_0882C798;
    return;
L_0882C798:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C824;
      }
      goto L_0882C7A0;
    }
L_0882C7A0:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12032));
    ctx.gpr[31] = (0x0882C7BCu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-12024));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 438u, 0x089C1E98u>(ctx, &aot_mem) && ctx.pc == 0x0882C7BCu) goto L_0882C7BC;
    return;
L_0882C7BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C824;
      }
      goto L_0882C7C4;
    }
L_0882C7C4:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12016));
    ctx.gpr[31] = (0x0882C7E0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-12004));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 438u, 0x089C1E98u>(ctx, &aot_mem) && ctx.pc == 0x0882C7E0u) goto L_0882C7E0;
    return;
L_0882C7E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C824;
      }
      goto L_0882C7E8;
    }
L_0882C7E8:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11996));
    ctx.gpr[31] = (0x0882C804u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-11984));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 438u, 0x089C1E98u>(ctx, &aot_mem) && ctx.pc == 0x0882C804u) goto L_0882C804;
    return;
L_0882C804:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C824;
      }
      goto L_0882C80C;
    }
L_0882C80C:
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x0882C824u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-11976));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 438u, 0x089C1E98u>(ctx, &aot_mem) && ctx.pc == 0x0882C824u) goto L_0882C824;
    return;
L_0882C824:
    ctx.gpr[31] = (0x0882C82Cu);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0BA94u;
    return;
L_0882C82C:
    ctx.gpr[31] = (0x0882C834u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 158u, 0x08974AC4u>(ctx, &aot_mem) && ctx.pc == 0x0882C834u) goto L_0882C834;
    return;
L_0882C834:
    ctx.gpr[31] = (0x0882C83Cu);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0BA7Cu;
    return;
L_0882C83C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0882C850u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 438u, 0x089C1E98u>(ctx, &aot_mem) && ctx.pc == 0x0882C850u) goto L_0882C850;
    return;
L_0882C850:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882C864u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 150u, 0x08864AC0u>(ctx, &aot_mem) && ctx.pc == 0x0882C864u) goto L_0882C864;
    return;
L_0882C864:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882C870u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 117u, 0x08864858u>(ctx, &aot_mem) && ctx.pc == 0x0882C870u) goto L_0882C870;
    return;
L_0882C870:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882C87Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 113u, 0x08864820u>(ctx, &aot_mem) && ctx.pc == 0x0882C87Cu) goto L_0882C87C;
    return;
L_0882C87C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882C894;
      }
      goto L_0882C888;
    }
L_0882C888:
    ctx.gpr[31] = (0x0882C890u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x0882C890u) goto L_0882C890;
    return;
L_0882C890:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    goto L_0882C894;
L_0882C894:
    ctx.gpr[31] = (0x0882C89Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 778u, 0x08A07F4Cu>(ctx, &aot_mem) && ctx.pc == 0x0882C89Cu) goto L_0882C89C;
    return;
L_0882C89C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0882C8B0u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 438u, 0x089C1E98u>(ctx, &aot_mem) && ctx.pc == 0x0882C8B0u) goto L_0882C8B0;
    return;
L_0882C8B0:
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
L_0882C8D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x0882C8ECu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x0882C8ECu) goto L_0882C8EC;
    return;
L_0882C8EC:
    ctx.gpr[4] = (16058u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 34854u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16202u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49283u);
    ctx.gpr[31] = (0x0882C908u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x0882C908u) goto L_0882C908;
    return;
L_0882C908:
    ctx.gpr[31] = (0x0882C910u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x0882C910u) goto L_0882C910;
    return;
L_0882C910:
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-4576));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882C924u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 348u, 0x08AD97E4u>(ctx, &aot_mem) && ctx.pc == 0x0882C924u) goto L_0882C924;
    return;
L_0882C924:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0882C93Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0882C93Cu) goto L_0882C93C;
    return;
L_0882C93C:
    ctx.gpr[31] = (0x0882C944u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A550ACu>(ctx, &aot_mem) && ctx.pc == 0x0882C944u) goto L_0882C944;
    return;
L_0882C944:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882C980;
      }
      goto L_0882C94C;
    }
L_0882C94C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882C958u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 348u, 0x08AD97E4u>(ctx, &aot_mem) && ctx.pc == 0x0882C958u) goto L_0882C958;
    return;
L_0882C958:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (0u | 118u);
    ctx.gpr[6] = (0u | 176u);
    ctx.gpr[31] = (0x0882C970u);
    ctx.gpr[7] = (0u | 220u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0882C970u) goto L_0882C970;
    return;
L_0882C970:
    ctx.gpr[31] = (0x0882C978u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x0882C978u) goto L_0882C978;
    return;
L_0882C978:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C9AC;
      }
      goto L_0882C980;
    }
L_0882C980:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882C98Cu);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 348u, 0x08AD97E4u>(ctx, &aot_mem) && ctx.pc == 0x0882C98Cu) goto L_0882C98C;
    return;
L_0882C98C:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x0882C9A4u);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0882C9A4u) goto L_0882C9A4;
    return;
L_0882C9A4:
    ctx.gpr[31] = (0x0882C9ACu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x0882C9ACu) goto L_0882C9AC;
    return;
L_0882C9AC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882C9C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(5992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0882C9F8;
      }
      goto L_0882C9EC;
    }
L_0882C9EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882C9F8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 84u, 0x088A8494u>(ctx, &aot_mem) && ctx.pc == 0x0882C9F8u) goto L_0882C9F8;
    return;
L_0882C9F8:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882CA08;
      }
      goto L_0882CA00;
    }
L_0882CA00:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0882CA08;
L_0882CA08:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0882CA14u);
    ctx.gpr[5] = (0u | 0u);
    goto L_0882CB8C;
L_0882CA14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882CA30u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 92u, 0x088A84D4u>(ctx, &aot_mem) && ctx.pc == 0x0882CA30u) goto L_0882CA30;
    return;
L_0882CA30:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882CA3Cu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 88u, 0x088A84B4u>(ctx, &aot_mem) && ctx.pc == 0x0882CA3Cu) goto L_0882CA3C;
    return;
L_0882CA3C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882CA48u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 90u, 0x088A84C4u>(ctx, &aot_mem) && ctx.pc == 0x0882CA48u) goto L_0882CA48;
    return;
L_0882CA48:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882CA74;
      }
      goto L_0882CA58;
    }
L_0882CA58:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_0882CA6C;
      }
      goto L_0882CA60;
    }
L_0882CA60:
    ctx.gpr[17] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0882CA74;
      }
      goto L_0882CA6C;
    }
L_0882CA6C:
    ctx.gpr[17] = (ctx.gpr[17] | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    goto L_0882CA74;
L_0882CA74:
    ctx.gpr[4] = (ctx.gpr[17] & 4u);
    ctx.gpr[5] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882CAA4;
      }
      goto L_0882CA88;
    }
L_0882CA88:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 4u);
      if (branch_taken) {
          goto L_0882CAA0;
      }
      goto L_0882CA90;
    }
L_0882CA90:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0882CAA4;
      }
      goto L_0882CAA0;
    }
L_0882CAA0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    goto L_0882CAA4;
L_0882CAA4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 160u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(54), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882CABCu);
    ctx.gpr[5] = (0u | 5000u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 94u, 0x088A84E4u>(ctx, &aot_mem) && ctx.pc == 0x0882CABCu) goto L_0882CABC;
    return;
L_0882CABC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882CAC8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 96u, 0x088A84F4u>(ctx, &aot_mem) && ctx.pc == 0x0882CAC8u) goto L_0882CAC8;
    return;
L_0882CAC8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882CAD4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 98u, 0x088A8504u>(ctx, &aot_mem) && ctx.pc == 0x0882CAD4u) goto L_0882CAD4;
    return;
L_0882CAD4:
    ctx.gpr[31] = (0x0882CADCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 83u, 0x088A848Cu>(ctx, &aot_mem) && ctx.pc == 0x0882CADCu) goto L_0882CADC;
    return;
L_0882CADC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CB74;
      }
      goto L_0882CAEC;
    }
L_0882CAEC:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-10496)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882CB04:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882CB10u);
    ctx.gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 88u, 0x088A84B4u>(ctx, &aot_mem) && ctx.pc == 0x0882CB10u) goto L_0882CB10;
    return;
L_0882CB10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CB74;
      }
      goto L_0882CB18;
    }
L_0882CB18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CB74;
      }
      goto L_0882CB20;
    }
L_0882CB20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0882CB74;
      }
      goto L_0882CB30;
    }
L_0882CB30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[31] = (0x0882CB48u);
    ctx.gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 88u, 0x088A84B4u>(ctx, &aot_mem) && ctx.pc == 0x0882CB48u) goto L_0882CB48;
    return;
L_0882CB48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CB74;
      }
      goto L_0882CB50;
    }
L_0882CB50:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882CB5Cu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 88u, 0x088A84B4u>(ctx, &aot_mem) && ctx.pc == 0x0882CB5Cu) goto L_0882CB5C;
    return;
L_0882CB5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CB74;
      }
      goto L_0882CB64;
    }
L_0882CB64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CB74;
      }
      goto L_0882CB6C;
    }
L_0882CB6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CB74;
      }
      goto L_0882CB74;
    }
L_0882CB74:
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
L_0882CB8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(5992));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] & 7u);
    ctx.gpr[16] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882CBC0;
      }
      goto L_0882CBBC;
    }
L_0882CBBC:
    ctx.gpr[16] = (0u | 0u);
    goto L_0882CBC0;
L_0882CBC0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0882CBCC;
      }
      goto L_0882CBC8;
    }
L_0882CBC8:
    ctx.gpr[16] = (0u | 2u);
    goto L_0882CBCC;
L_0882CBCC:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0882CBFC;
      }
      goto L_0882CBD8;
    }
L_0882CBD8:
    ctx.gpr[31] = (0x0882CBE0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 83u, 0x088A848Cu>(ctx, &aot_mem) && ctx.pc == 0x0882CBE0u) goto L_0882CBE0;
    return;
L_0882CBE0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1876));
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CBFC;
      }
      goto L_0882CBF8;
    }
L_0882CBF8:
    ctx.gpr[16] = (ctx.gpr[16] | 128u);
    goto L_0882CBFC;
L_0882CBFC:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882CC14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(59), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
        goto L_0882CC6C;
    }
    goto L_0882CC5C;
L_0882CC5C:
    ctx.gpr[31] = (0x0882CC64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x0882CC64u) goto L_0882CC64;
    return;
L_0882CC64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    goto L_0882CC6C;
L_0882CC6C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0882CC94;
      }
      goto L_0882CC74;
    }
L_0882CC74:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (0u | 1u);
        goto L_0882CC98;
    }
    goto L_0882CC80;
L_0882CC80:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (2209u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-26624));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_0882CC9C;
      }
      goto L_0882CC94;
    }
L_0882CC94:
    ctx.gpr[5] = (0u | 1u);
    goto L_0882CC98;
L_0882CC98:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_0882CC9C;
L_0882CC9C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882D01C;
      }
      goto L_0882CCA4;
    }
L_0882CCA4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882CCB8;
      }
      goto L_0882CCAC;
    }
L_0882CCAC:
    ctx.gpr[31] = (0x0882CCB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x0882CCB4u) goto L_0882CCB4;
    return;
L_0882CCB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    goto L_0882CCB8;
L_0882CCB8:
    ctx.gpr[31] = (0x0882CCC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 279u, 0x08A09200u>(ctx, &aot_mem) && ctx.pc == 0x0882CCC0u) goto L_0882CCC0;
    return;
L_0882CCC0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D358;
      }
      goto L_0882CCC8;
    }
L_0882CCC8:
    ctx.gpr[31] = (0x0882CCD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 312u, 0x08935874u>(ctx, &aot_mem) && ctx.pc == 0x0882CCD0u) goto L_0882CCD0;
    return;
L_0882CCD0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D358;
      }
      goto L_0882CCD8;
    }
L_0882CCD8:
    ctx.gpr[18] = (2233u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-4576));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CDC8;
      }
      goto L_0882CCEC;
    }
L_0882CCEC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x0882CCF8u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 7u, 0x08958070u>(ctx, &aot_mem) && ctx.pc == 0x0882CCF8u) goto L_0882CCF8;
    return;
L_0882CCF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[19] = (2225u << 16u);
    ctx.gpr[18] = (2225u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-11960));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-11948));
      if (branch_taken) {
          goto L_0882CD1C;
      }
      goto L_0882CD10;
    }
L_0882CD10:
    ctx.gpr[31] = (0x0882CD18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x0882CD18u) goto L_0882CD18;
    return;
L_0882CD18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    goto L_0882CD1C;
L_0882CD1C:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0882CD28u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 771u, 0x08A07E68u>(ctx, &aot_mem) && ctx.pc == 0x0882CD28u) goto L_0882CD28;
    return;
L_0882CD28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
        goto L_0882CD44;
    }
    goto L_0882CD34;
L_0882CD34:
    ctx.gpr[31] = (0x0882CD3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x0882CD3Cu) goto L_0882CD3C;
    return;
L_0882CD3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    goto L_0882CD44;
L_0882CD44:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0882CD6C;
      }
      goto L_0882CD4C;
    }
L_0882CD4C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (0u | 1u);
        goto L_0882CD70;
    }
    goto L_0882CD58;
L_0882CD58:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (2209u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-26624));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_0882CD74;
      }
      goto L_0882CD6C;
    }
L_0882CD6C:
    ctx.gpr[5] = (0u | 1u);
    goto L_0882CD70;
L_0882CD70:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_0882CD74;
L_0882CD74:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882CDB0;
      }
      goto L_0882CD7C;
    }
L_0882CD7C:
    ctx.gpr[18] = (2225u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-11936));
      if (branch_taken) {
          goto L_0882CD94;
      }
      goto L_0882CD88;
    }
L_0882CD88:
    ctx.gpr[31] = (0x0882CD90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x0882CD90u) goto L_0882CD90;
    return;
L_0882CD90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    goto L_0882CD94;
L_0882CD94:
    ctx.gpr[31] = (0x0882CD9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 297u, 0x08A09318u>(ctx, &aot_mem) && ctx.pc == 0x0882CD9Cu) goto L_0882CD9C;
    return;
L_0882CD9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0882CDA8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 407u, 0x0882B86Cu>(ctx, &aot_mem) && ctx.pc == 0x0882CDA8u) goto L_0882CDA8;
    return;
L_0882CDA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CDC0;
      }
      goto L_0882CDB0;
    }
L_0882CDB0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), 0u);
    goto L_0882CDC0;
L_0882CDC0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
      if (branch_taken) {
          goto L_0882D358;
      }
      goto L_0882CDC8;
    }
L_0882CDC8:
    ctx.gpr[31] = (0x0882CDD0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 274u, 0x08AD954Cu>(ctx, &aot_mem) && ctx.pc == 0x0882CDD0u) goto L_0882CDD0;
    return;
L_0882CDD0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CE0C;
      }
      goto L_0882CDD8;
    }
L_0882CDD8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 196u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0882CDECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x0882CDECu) goto L_0882CDEC;
    return;
L_0882CDEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_0882CE04;
      }
      goto L_0882CDF8;
    }
L_0882CDF8:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0882CE0C;
      }
      goto L_0882CE04;
    }
L_0882CE04:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    goto L_0882CE0C;
L_0882CE0C:
    ctx.gpr[31] = (0x0882CE14u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 285u, 0x08AD95B0u>(ctx, &aot_mem) && ctx.pc == 0x0882CE14u) goto L_0882CE14;
    return;
L_0882CE14:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CE4C;
      }
      goto L_0882CE1C;
    }
L_0882CE1C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 196u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0882CE30u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x0882CE30u) goto L_0882CE30;
    return;
L_0882CE30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0882CE44;
      }
      goto L_0882CE3C;
    }
L_0882CE3C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
      if (branch_taken) {
          goto L_0882CE4C;
      }
      goto L_0882CE44;
    }
L_0882CE44:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    goto L_0882CE4C;
L_0882CE4C:
    ctx.gpr[31] = (0x0882CE54u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x0882CE54u) goto L_0882CE54;
    return;
L_0882CE54:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0882CE74;
      }
      goto L_0882CE64;
    }
L_0882CE64:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_0882CE78;
      }
      goto L_0882CE70;
    }
L_0882CE70:
    ctx.gpr[5] = (0u | 1u);
    goto L_0882CE74;
L_0882CE74:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_0882CE78;
L_0882CE78:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D358;
      }
      goto L_0882CE80;
    }
L_0882CE80:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 195u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0882CE94u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x0882CE94u) goto L_0882CE94;
    return;
L_0882CE94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882CEB0;
      }
      goto L_0882CEA0;
    }
L_0882CEA0:
    ctx.gpr[31] = (0x0882CEA8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 497u, 0x0882BE40u>(ctx, &aot_mem) && ctx.pc == 0x0882CEA8u) goto L_0882CEA8;
    return;
L_0882CEA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D358;
      }
      goto L_0882CEB0;
    }
L_0882CEB0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(256), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x0882CEC0u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 7u, 0x08958070u>(ctx, &aot_mem) && ctx.pc == 0x0882CEC0u) goto L_0882CEC0;
    return;
L_0882CEC0:
    ctx.gpr[31] = (0x0882CEC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 33u, 0x08968250u>(ctx, &aot_mem) && ctx.pc == 0x0882CEC8u) goto L_0882CEC8;
    return;
L_0882CEC8:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-25504), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0882CEDCu);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7728), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 303u, 0x08879C64u>(ctx, &aot_mem) && ctx.pc == 0x0882CEDCu) goto L_0882CEDC;
    return;
L_0882CEDC:
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[18] = (2225u << 16u);
    ctx.gpr[19] = (2225u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-11960));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-11948));
      if (branch_taken) {
          goto L_0882CF20;
      }
      goto L_0882CEF8;
    }
L_0882CEF8:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[31] = (0x0882CF04u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0882CF04u) goto L_0882CF04;
    return;
L_0882CF04:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CF1C;
      }
      goto L_0882CF10;
    }
L_0882CF10:
    ctx.gpr[31] = (0x0882CF18u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0882CF18u) goto L_0882CF18;
    return;
L_0882CF18:
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    goto L_0882CF1C;
L_0882CF1C:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24700), ctx.gpr[21]);
    goto L_0882CF20;
L_0882CF20:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0882CF30u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11904));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0882CF30u) goto L_0882CF30;
    return;
L_0882CF30:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0882CF54u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 495u, 0x0887AFFCu>(ctx, &aot_mem) && ctx.pc == 0x0882CF54u) goto L_0882CF54;
    return;
L_0882CF54:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_0882CF70;
      }
      goto L_0882CF60;
    }
L_0882CF60:
    ctx.gpr[31] = (0x0882CF68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x0882CF68u) goto L_0882CF68;
    return;
L_0882CF68:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_0882CF70;
L_0882CF70:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0882CF7Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 771u, 0x08A07E68u>(ctx, &aot_mem) && ctx.pc == 0x0882CF7Cu) goto L_0882CF7C;
    return;
L_0882CF7C:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    if (ctx.gpr[20] != 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(18))))));
        goto L_0882CF98;
    }
    goto L_0882CF88;
L_0882CF88:
    ctx.gpr[31] = (0x0882CF90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x0882CF90u) goto L_0882CF90;
    return;
L_0882CF90:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(18))))));
    goto L_0882CF98;
L_0882CF98:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0882CFC0;
      }
      goto L_0882CFA0;
    }
L_0882CFA0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 1u);
        goto L_0882CFC4;
    }
    goto L_0882CFAC;
L_0882CFAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (2209u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-26624));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0882CFC8;
      }
      goto L_0882CFC0;
    }
L_0882CFC0:
    ctx.gpr[4] = (0u | 1u);
    goto L_0882CFC4;
L_0882CFC4:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0882CFC8;
L_0882CFC8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882D004;
      }
      goto L_0882CFD0;
    }
L_0882CFD0:
    ctx.gpr[18] = (2225u << 16u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-11936));
      if (branch_taken) {
          goto L_0882CFE8;
      }
      goto L_0882CFDC;
    }
L_0882CFDC:
    ctx.gpr[31] = (0x0882CFE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x0882CFE4u) goto L_0882CFE4;
    return;
L_0882CFE4:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    goto L_0882CFE8;
L_0882CFE8:
    ctx.gpr[31] = (0x0882CFF0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 297u, 0x08A09318u>(ctx, &aot_mem) && ctx.pc == 0x0882CFF0u) goto L_0882CFF0;
    return;
L_0882CFF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0882CFFCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 407u, 0x0882B86Cu>(ctx, &aot_mem) && ctx.pc == 0x0882CFFCu) goto L_0882CFFC;
    return;
L_0882CFFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D014;
      }
      goto L_0882D004;
    }
L_0882D004:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), 0u);
    goto L_0882D014;
L_0882D014:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
      if (branch_taken) {
          goto L_0882D358;
      }
      goto L_0882D01C;
    }
L_0882D01C:
    ctx.gpr[18] = (2233u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-4576));
    ctx.gpr[31] = (0x0882D02Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 274u, 0x08AD954Cu>(ctx, &aot_mem) && ctx.pc == 0x0882D02Cu) goto L_0882D02C;
    return;
L_0882D02C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D068;
      }
      goto L_0882D034;
    }
L_0882D034:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 196u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0882D048u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x0882D048u) goto L_0882D048;
    return;
L_0882D048:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882D060;
      }
      goto L_0882D054;
    }
L_0882D054:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0882D068;
      }
      goto L_0882D060;
    }
L_0882D060:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    goto L_0882D068;
L_0882D068:
    ctx.gpr[31] = (0x0882D070u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 285u, 0x08AD95B0u>(ctx, &aot_mem) && ctx.pc == 0x0882D070u) goto L_0882D070;
    return;
L_0882D070:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D0AC;
      }
      goto L_0882D078;
    }
L_0882D078:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 196u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0882D08Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x0882D08Cu) goto L_0882D08C;
    return;
L_0882D08C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0882D0A4;
      }
      goto L_0882D09C;
    }
L_0882D09C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
      if (branch_taken) {
          goto L_0882D0AC;
      }
      goto L_0882D0A4;
    }
L_0882D0A4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    goto L_0882D0AC;
L_0882D0AC:
    ctx.gpr[31] = (0x0882D0B4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x0882D0B4u) goto L_0882D0B4;
    return;
L_0882D0B4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0882D0D4;
      }
      goto L_0882D0C4;
    }
L_0882D0C4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_0882D0D8;
      }
      goto L_0882D0D0;
    }
L_0882D0D0:
    ctx.gpr[5] = (0u | 1u);
    goto L_0882D0D4;
L_0882D0D4:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_0882D0D8;
L_0882D0D8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D16C;
      }
      goto L_0882D0E0;
    }
L_0882D0E0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 195u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0882D0F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x0882D0F4u) goto L_0882D0F4;
    return;
L_0882D0F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0882D13C;
      }
      goto L_0882D104;
    }
L_0882D104:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882D11C;
      }
      goto L_0882D110;
    }
L_0882D110:
    ctx.gpr[31] = (0x0882D118u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x0882D118u) goto L_0882D118;
    return;
L_0882D118:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    goto L_0882D11C;
L_0882D11C:
    ctx.gpr[31] = (0x0882D124u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 49u, 0x08A082E0u>(ctx, &aot_mem) && ctx.pc == 0x0882D124u) goto L_0882D124;
    return;
L_0882D124:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882D134u);
    ctx.gpr[5] = (0u | 0u);
    goto L_0882C9C0;
L_0882D134:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D16C;
      }
      goto L_0882D13C;
    }
L_0882D13C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882D16C;
      }
      goto L_0882D144;
    }
L_0882D144:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882D154u);
    ctx.gpr[5] = (0u | 0u);
    goto L_0882C9C0;
L_0882D154:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1768));
    ctx.gpr[31] = (0x0882D16Cu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1776));
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 488u, 0x0882BD3Cu>(ctx, &aot_mem) && ctx.pc == 0x0882D16Cu) goto L_0882D16C;
    return;
L_0882D16C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882D184;
      }
      goto L_0882D178;
    }
L_0882D178:
    ctx.gpr[31] = (0x0882D180u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x0882D180u) goto L_0882D180;
    return;
L_0882D180:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    goto L_0882D184;
L_0882D184:
    ctx.gpr[31] = (0x0882D18Cu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 778u, 0x08A07F4Cu>(ctx, &aot_mem) && ctx.pc == 0x0882D18Cu) goto L_0882D18C;
    return;
L_0882D18C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3164)));
        goto L_0882D1A8;
    }
    goto L_0882D198;
L_0882D198:
    ctx.gpr[31] = (0x0882D1A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x0882D1A0u) goto L_0882D1A0;
    return;
L_0882D1A0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3164)));
    goto L_0882D1A8;
L_0882D1A8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0882D204;
      }
      goto L_0882D1B0;
    }
L_0882D1B0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882D1DC;
      }
      goto L_0882D1BC;
    }
L_0882D1BC:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882D1DC;
      }
      goto L_0882D1C8;
    }
L_0882D1C8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (2209u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-25292));
    if (ctx.gpr[8] == ctx.gpr[7]) {
    ctx.gpr[5] = (0u | 1u);
        goto L_0882D208;
    }
    goto L_0882D1DC;
L_0882D1DC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_0882D20C;
      }
      goto L_0882D1E4;
    }
L_0882D1E4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_0882D20C;
      }
      goto L_0882D1F0;
    }
L_0882D1F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (2209u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-25300));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_0882D20C;
      }
      goto L_0882D204;
    }
L_0882D204:
    ctx.gpr[5] = (0u | 1u);
    goto L_0882D208;
L_0882D208:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_0882D20C;
L_0882D20C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D358;
      }
      goto L_0882D214;
    }
L_0882D214:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(88));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0882D228u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x0882D228u) goto L_0882D228;
    return;
L_0882D228:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882D244;
      }
      goto L_0882D238;
    }
L_0882D238:
    ctx.gpr[31] = (0x0882D240u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x0882D240u) goto L_0882D240;
    return;
L_0882D240:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    goto L_0882D244;
L_0882D244:
    ctx.gpr[31] = (0x0882D24Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 326u, 0x08A09544u>(ctx, &aot_mem) && ctx.pc == 0x0882D24Cu) goto L_0882D24C;
    return;
L_0882D24C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1784));
    ctx.gpr[31] = (0x0882D264u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1792));
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 488u, 0x0882BD3Cu>(ctx, &aot_mem) && ctx.pc == 0x0882D264u) goto L_0882D264;
    return;
L_0882D264:
    ctx.gpr[31] = (0x0882D26Cu);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 54u, 0x088B83C4u>(ctx, &aot_mem) && ctx.pc == 0x0882D26Cu) goto L_0882D26C;
    return;
L_0882D26C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
        goto L_0882D288;
    }
    goto L_0882D278;
L_0882D278:
    ctx.gpr[31] = (0x0882D280u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x0882D280u) goto L_0882D280;
    return;
L_0882D280:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_0882D288;
L_0882D288:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882D358;
      }
      goto L_0882D290;
    }
L_0882D290:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882D2A4;
      }
      goto L_0882D298;
    }
L_0882D298:
    ctx.gpr[31] = (0x0882D2A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x0882D2A0u) goto L_0882D2A0;
    return;
L_0882D2A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    goto L_0882D2A4;
L_0882D2A4:
    ctx.gpr[31] = (0x0882D2ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 289u, 0x08A0928Cu>(ctx, &aot_mem) && ctx.pc == 0x0882D2ACu) goto L_0882D2AC;
    return;
L_0882D2AC:
    ctx.gpr[7] = (3u << 16u);
    ctx.gpr[8] = (3u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 66u);
    ctx.gpr[6] = (0u | 16384u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(3392));
    ctx.gpr[31] = (0x0882D2D4u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(3392));
    ctx.pc = 0x08B0B6F4u;
    return;
L_0882D2D4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0882D308;
      }
      goto L_0882D2E0;
    }
L_0882D2E0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0882D2F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11896));
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 407u, 0x0882B86Cu>(ctx, &aot_mem) && ctx.pc == 0x0882D2F0u) goto L_0882D2F0;
    return;
L_0882D2F0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1752));
    ctx.gpr[31] = (0x0882D308u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1760));
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 488u, 0x0882BD3Cu>(ctx, &aot_mem) && ctx.pc == 0x0882D308u) goto L_0882D308;
    return;
L_0882D308:
    ctx.gpr[31] = (0x0882D310u);
    // nop
    ctx.pc = 0x08B0BBC4u;
    return;
L_0882D310:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x0882D324u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08B0BAECu;
    return;
L_0882D324:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (13702u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 14269u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1872), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0882D358;
L_0882D358:
    ctx.gpr[31] = (0x0882D360u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0882C010;
L_0882D360:
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
L_0882D388:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[5] = (16079u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 16882u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16225u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 18350u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[17] = (2233u << 16u);
    ctx.gpr[5] = (17264u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-4576));
    ctx.gpr[21] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (2227u << 16u);
      if (branch_taken) {
          goto L_0882D404;
      }
      goto L_0882D3F8;
    }
L_0882D3F8:
    ctx.gpr[31] = (0x0882D400u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x0882D400u) goto L_0882D400;
    return;
L_0882D400:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20652)));
    goto L_0882D404;
L_0882D404:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0882D430;
      }
      goto L_0882D410;
    }
L_0882D410:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
        goto L_0882D434;
    }
    goto L_0882D41C;
L_0882D41C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (2209u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-26624));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_0882D438;
      }
      goto L_0882D430;
    }
L_0882D430:
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    goto L_0882D434;
L_0882D434:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_0882D438;
L_0882D438:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D5A8;
      }
      goto L_0882D440;
    }
L_0882D440:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1424)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D5A8;
      }
      goto L_0882D44C;
    }
L_0882D44C:
    ctx.gpr[31] = (0x0882D454u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54ECCu>(ctx, &aot_mem) && ctx.pc == 0x0882D454u) goto L_0882D454;
    return;
L_0882D454:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[31] = (0x0882D464u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0882C8D0;
L_0882D464:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0882D470u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x0882D470u) goto L_0882D470;
    return;
L_0882D470:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u | 60u);
      if (branch_taken) {
          goto L_0882D49C;
      }
      goto L_0882D47C;
    }
L_0882D47C:
    ctx.gpr[4] = (16120u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46473u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16263u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 11010u);
    ctx.gpr[31] = (0x0882D498u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x0882D498u) goto L_0882D498;
    return;
L_0882D498:
    ctx.gpr[17] = (0u | 58u);
    goto L_0882D49C;
L_0882D49C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_0882D4D4;
      }
      goto L_0882D4A8;
    }
L_0882D4A8:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x0882D4B4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0882D4B4u) goto L_0882D4B4;
    return;
L_0882D4B4:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D4CC;
      }
      goto L_0882D4C0;
    }
L_0882D4C0:
    ctx.gpr[31] = (0x0882D4C8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0882D4C8u) goto L_0882D4C8;
    return;
L_0882D4C8:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_0882D4CC;
L_0882D4CC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[19]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_0882D4D4;
L_0882D4D4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0882D4E0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11852));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0882D4E0u) goto L_0882D4E0;
    return;
L_0882D4E0:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0882D4F8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0882D4F8u) goto L_0882D4F8;
    return;
L_0882D4F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[31] = (0x0882D50Cu);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0882C8D0;
L_0882D50C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0882D518u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x0882D518u) goto L_0882D518;
    return;
L_0882D518:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    ctx.gpr[17] = (0u | 80u);
      if (branch_taken) {
          goto L_0882D544;
      }
      goto L_0882D524;
    }
L_0882D524:
    ctx.gpr[4] = (16120u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46473u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16263u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 11010u);
    ctx.gpr[31] = (0x0882D540u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x0882D540u) goto L_0882D540;
    return;
L_0882D540:
    ctx.gpr[17] = (0u | 78u);
    goto L_0882D544;
L_0882D544:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_0882D57C;
      }
      goto L_0882D550;
    }
L_0882D550:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0882D55Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0882D55Cu) goto L_0882D55C;
    return;
L_0882D55C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D574;
      }
      goto L_0882D568;
    }
L_0882D568:
    ctx.gpr[31] = (0x0882D570u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0882D570u) goto L_0882D570;
    return;
L_0882D570:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_0882D574;
L_0882D574:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_0882D57C;
L_0882D57C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882D588u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11844));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0882D588u) goto L_0882D588;
    return;
L_0882D588:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0882D5A0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0882D5A0u) goto L_0882D5A0;
    return;
L_0882D5A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882DA30;
      }
      goto L_0882D5A8;
    }
L_0882D5A8:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0882D5B8u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 348u, 0x08AD97E4u>(ctx, &aot_mem) && ctx.pc == 0x0882D5B8u) goto L_0882D5B8;
    return;
L_0882D5B8:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 118u);
    ctx.gpr[6] = (0u | 176u);
    ctx.gpr[31] = (0x0882D5D0u);
    ctx.gpr[7] = (0u | 220u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0882D5D0u) goto L_0882D5D0;
    return;
L_0882D5D0:
    ctx.gpr[31] = (0x0882D5D8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x0882D5D8u) goto L_0882D5D8;
    return;
L_0882D5D8:
    ctx.gpr[31] = (0x0882D5E0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x0882D5E0u) goto L_0882D5E0;
    return;
L_0882D5E0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0882D5ECu);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 348u, 0x08AD97E4u>(ctx, &aot_mem) && ctx.pc == 0x0882D5ECu) goto L_0882D5EC;
    return;
L_0882D5EC:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0882D604u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0882D604u) goto L_0882D604;
    return;
L_0882D604:
    ctx.gpr[31] = (0x0882D60Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A550ACu>(ctx, &aot_mem) && ctx.pc == 0x0882D60Cu) goto L_0882D60C;
    return;
L_0882D60C:
    ctx.gpr[31] = (0x0882D614u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x0882D614u) goto L_0882D614;
    return;
L_0882D614:
    ctx.gpr[4] = (17385u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.gpr[31] = (0x0882D624u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 214u, 0x08A54F6Cu>(ctx, &aot_mem) && ctx.pc == 0x0882D624u) goto L_0882D624;
    return;
L_0882D624:
    ctx.gpr[4] = (16720u << 16u);
    ctx.gpr[31] = (0x0882D630u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 209u, 0x08A54F2Cu>(ctx, &aot_mem) && ctx.pc == 0x0882D630u) goto L_0882D630;
    return;
L_0882D630:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0882D63Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x0882D63Cu) goto L_0882D63C;
    return;
L_0882D63C:
    ctx.gpr[31] = (0x0882D644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 208u, 0x08A54F14u>(ctx, &aot_mem) && ctx.pc == 0x0882D644u) goto L_0882D644;
    return;
L_0882D644:
    ctx.gpr[31] = (0x0882D64Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x0882D64Cu) goto L_0882D64C;
    return;
L_0882D64C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0882D658u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 348u, 0x08AD97E4u>(ctx, &aot_mem) && ctx.pc == 0x0882D658u) goto L_0882D658;
    return;
L_0882D658:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0882D670u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0882D670u) goto L_0882D670;
    return;
L_0882D670:
    ctx.gpr[31] = (0x0882D678u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A550ACu>(ctx, &aot_mem) && ctx.pc == 0x0882D678u) goto L_0882D678;
    return;
L_0882D678:
    ctx.gpr[31] = (0x0882D680u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54ECCu>(ctx, &aot_mem) && ctx.pc == 0x0882D680u) goto L_0882D680;
    return;
L_0882D680:
    ctx.gpr[4] = (17254u << 16u);
    ctx.gpr[31] = (0x0882D68Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A54FACu>(ctx, &aot_mem) && ctx.pc == 0x0882D68Cu) goto L_0882D68C;
    return;
L_0882D68C:
    ctx.gpr[31] = (0x0882D694u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 240u, 0x08A55194u>(ctx, &aot_mem) && ctx.pc == 0x0882D694u) goto L_0882D694;
    return;
L_0882D694:
    ctx.gpr[31] = (0x0882D69Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 312u, 0x08935874u>(ctx, &aot_mem) && ctx.pc == 0x0882D69Cu) goto L_0882D69C;
    return;
L_0882D69C:
    ctx.gpr[4] = (17008u << 16u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0882D708;
      }
      goto L_0882D6A8;
    }
L_0882D6A8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_0882D6E0;
      }
      goto L_0882D6B4;
    }
L_0882D6B4:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0882D6C0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0882D6C0u) goto L_0882D6C0;
    return;
L_0882D6C0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D6D8;
      }
      goto L_0882D6CC;
    }
L_0882D6CC:
    ctx.gpr[31] = (0x0882D6D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0882D6D4u) goto L_0882D6D4;
    return;
L_0882D6D4:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0882D6D8;
L_0882D6D8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_0882D6E0;
L_0882D6E0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882D6ECu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11836));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0882D6ECu) goto L_0882D6EC;
    return;
L_0882D6EC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x0882D700u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0882D700u) goto L_0882D700;
    return;
L_0882D700:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D9FC;
      }
      goto L_0882D708;
    }
L_0882D708:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20652)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882D720;
      }
      goto L_0882D714;
    }
L_0882D714:
    ctx.gpr[31] = (0x0882D71Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x0882D71Cu) goto L_0882D71C;
    return;
L_0882D71C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20652)));
    goto L_0882D720;
L_0882D720:
    ctx.gpr[31] = (0x0882D728u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 279u, 0x08A09200u>(ctx, &aot_mem) && ctx.pc == 0x0882D728u) goto L_0882D728;
    return;
L_0882D728:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
      if (branch_taken) {
          goto L_0882D78C;
      }
      goto L_0882D730;
    }
L_0882D730:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_0882D768;
      }
      goto L_0882D738;
    }
L_0882D738:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0882D744u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0882D744u) goto L_0882D744;
    return;
L_0882D744:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D75C;
      }
      goto L_0882D750;
    }
L_0882D750:
    ctx.gpr[31] = (0x0882D758u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0882D758u) goto L_0882D758;
    return;
L_0882D758:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0882D75C;
L_0882D75C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (2225u << 16u);
    goto L_0882D768;
L_0882D768:
    ctx.gpr[31] = (0x0882D770u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11828));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0882D770u) goto L_0882D770;
    return;
L_0882D770:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x0882D784u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0882D784u) goto L_0882D784;
    return;
L_0882D784:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D9FC;
      }
      goto L_0882D78C;
    }
L_0882D78C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882D9A8;
      }
      goto L_0882D798;
    }
L_0882D798:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_0882D7D0;
      }
      goto L_0882D7A0;
    }
L_0882D7A0:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x0882D7ACu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0882D7ACu) goto L_0882D7AC;
    return;
L_0882D7AC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D7C4;
      }
      goto L_0882D7B8;
    }
L_0882D7B8:
    ctx.gpr[31] = (0x0882D7C0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0882D7C0u) goto L_0882D7C0;
    return;
L_0882D7C0:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_0882D7C4;
L_0882D7C4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (2225u << 16u);
    goto L_0882D7D0;
L_0882D7D0:
    ctx.gpr[31] = (0x0882D7D8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11820));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0882D7D8u) goto L_0882D7D8;
    return;
L_0882D7D8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x0882D7ECu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0882D7ECu) goto L_0882D7EC;
    return;
L_0882D7EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1424)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D9FC;
      }
      goto L_0882D7F8;
    }
L_0882D7F8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[4] = (17136u << 16u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0882D830;
      }
      goto L_0882D808;
    }
L_0882D808:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0882D814u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0882D814u) goto L_0882D814;
    return;
L_0882D814:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D82C;
      }
      goto L_0882D820;
    }
L_0882D820:
    ctx.gpr[31] = (0x0882D828u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0882D828u) goto L_0882D828;
    return;
L_0882D828:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    goto L_0882D82C;
L_0882D82C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    goto L_0882D830;
L_0882D830:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0882D840u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11812));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0882D840u) goto L_0882D840;
    return;
L_0882D840:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x0882D854u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0882D854u) goto L_0882D854;
    return;
L_0882D854:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[31] = (0x0882D864u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0882C8D0;
L_0882D864:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0882D870u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x0882D870u) goto L_0882D870;
    return;
L_0882D870:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u | 170u);
      if (branch_taken) {
          goto L_0882D89C;
      }
      goto L_0882D87C;
    }
L_0882D87C:
    ctx.gpr[4] = (16120u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46473u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16263u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 11010u);
    ctx.gpr[31] = (0x0882D898u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x0882D898u) goto L_0882D898;
    return;
L_0882D898:
    ctx.gpr[17] = (0u | 168u);
    goto L_0882D89C;
L_0882D89C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_0882D8D4;
      }
      goto L_0882D8A8;
    }
L_0882D8A8:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x0882D8B4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0882D8B4u) goto L_0882D8B4;
    return;
L_0882D8B4:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D8CC;
      }
      goto L_0882D8C0;
    }
L_0882D8C0:
    ctx.gpr[31] = (0x0882D8C8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0882D8C8u) goto L_0882D8C8;
    return;
L_0882D8C8:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_0882D8CC;
L_0882D8CC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[19]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_0882D8D4;
L_0882D8D4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0882D8E0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11804));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0882D8E0u) goto L_0882D8E0;
    return;
L_0882D8E0:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0882D8F8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0882D8F8u) goto L_0882D8F8;
    return;
L_0882D8F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[31] = (0x0882D90Cu);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0882C8D0;
L_0882D90C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0882D918u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x0882D918u) goto L_0882D918;
    return;
L_0882D918:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    ctx.gpr[17] = (0u | 190u);
      if (branch_taken) {
          goto L_0882D944;
      }
      goto L_0882D924;
    }
L_0882D924:
    ctx.gpr[4] = (16120u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46473u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16263u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 11010u);
    ctx.gpr[31] = (0x0882D940u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x0882D940u) goto L_0882D940;
    return;
L_0882D940:
    ctx.gpr[17] = (0u | 188u);
    goto L_0882D944;
L_0882D944:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_0882D97C;
      }
      goto L_0882D950;
    }
L_0882D950:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0882D95Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0882D95Cu) goto L_0882D95C;
    return;
L_0882D95C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D974;
      }
      goto L_0882D968;
    }
L_0882D968:
    ctx.gpr[31] = (0x0882D970u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0882D970u) goto L_0882D970;
    return;
L_0882D970:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_0882D974;
L_0882D974:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_0882D97C;
L_0882D97C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882D988u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11796));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0882D988u) goto L_0882D988;
    return;
L_0882D988:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0882D9A0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0882D9A0u) goto L_0882D9A0;
    return;
L_0882D9A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D9FC;
      }
      goto L_0882D9A8;
    }
L_0882D9A8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_0882D9E0;
      }
      goto L_0882D9B0;
    }
L_0882D9B0:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0882D9BCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0882D9BCu) goto L_0882D9BC;
    return;
L_0882D9BC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D9D4;
      }
      goto L_0882D9C8;
    }
L_0882D9C8:
    ctx.gpr[31] = (0x0882D9D0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0882D9D0u) goto L_0882D9D0;
    return;
L_0882D9D0:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0882D9D4;
L_0882D9D4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (2225u << 16u);
    goto L_0882D9E0;
L_0882D9E0:
    ctx.gpr[31] = (0x0882D9E8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11788));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0882D9E8u) goto L_0882D9E8;
    return;
L_0882D9E8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x0882D9FCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0882D9FCu) goto L_0882D9FC;
    return;
L_0882D9FC:
    ctx.gpr[31] = (0x0882DA04u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 240u, 0x08A55194u>(ctx, &aot_mem) && ctx.pc == 0x0882DA04u) goto L_0882DA04;
    return;
L_0882DA04:
    ctx.gpr[31] = (0x0882DA0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 206u, 0x08A54EE8u>(ctx, &aot_mem) && ctx.pc == 0x0882DA0Cu) goto L_0882DA0C;
    return;
L_0882DA0C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0882DA24u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 214u, 0x08A54F6Cu>(ctx, &aot_mem) && ctx.pc == 0x0882DA24u) goto L_0882DA24;
    return;
L_0882DA24:
    ctx.gpr[4] = (16672u << 16u);
    ctx.gpr[31] = (0x0882DA30u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 209u, 0x08A54F2Cu>(ctx, &aot_mem) && ctx.pc == 0x0882DA30u) goto L_0882DA30;
    return;
L_0882DA30:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882DA64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-240));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[31]);
    ctx.gpr[31] = (0x0882DAA0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_0882CB8C;
L_0882DAA0:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0882DAC0;
      }
      goto L_0882DAB4;
    }
L_0882DAB4:
    ctx.gpr[31] = (0x0882DABCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x0882DABCu) goto L_0882DABC;
    return;
L_0882DABC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    goto L_0882DAC0;
L_0882DAC0:
    ctx.gpr[31] = (0x0882DAC8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 126u, 0x08A088B4u>(ctx, &aot_mem) && ctx.pc == 0x0882DAC8u) goto L_0882DAC8;
    return;
L_0882DAC8:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[7] = (2224u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(42));
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[6] = (0u | 10u);
    ctx.gpr[31] = (0x0882DB00u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-23876));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 341u, 0x08AF5A1Cu>(ctx, &aot_mem) && ctx.pc == 0x0882DB00u) goto L_0882DB00;
    return;
L_0882DB00:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
      if (branch_taken) {
          goto L_0882DB34;
      }
      goto L_0882DB08;
    }
L_0882DB08:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 17u);
    goto L_0882DB10;
L_0882DB10:
    ctx.gpr[7] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[29] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0882DB10;
      }
      goto L_0882DB34;
    }
L_0882DB34:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882DB48;
      }
      goto L_0882DB3C;
    }
L_0882DB3C:
    ctx.gpr[31] = (0x0882DB44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x0882DB44u) goto L_0882DB44;
    return;
L_0882DB44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    goto L_0882DB48;
L_0882DB48:
    ctx.gpr[31] = (0x0882DB50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 778u, 0x08A07F4Cu>(ctx, &aot_mem) && ctx.pc == 0x0882DB50u) goto L_0882DB50;
    return;
L_0882DB50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882DB68;
      }
      goto L_0882DB5C;
    }
L_0882DB5C:
    ctx.gpr[31] = (0x0882DB64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x0882DB64u) goto L_0882DB64;
    return;
L_0882DB64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    goto L_0882DB68;
L_0882DB68:
    ctx.gpr[31] = (0x0882DB70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 279u, 0x08A09200u>(ctx, &aot_mem) && ctx.pc == 0x0882DB70u) goto L_0882DB70;
    return;
L_0882DB70:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882DB98;
      }
      goto L_0882DB78;
    }
L_0882DB78:
    ctx.gpr[31] = (0x0882DB80u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x0882DB80u) goto L_0882DB80;
    return;
L_0882DB80:
    ctx.gpr[31] = (0x0882DB88u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 762u, 0x08A970E0u>(ctx, &aot_mem) && ctx.pc == 0x0882DB88u) goto L_0882DB88;
    return;
L_0882DB88:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882DCD0;
      }
      goto L_0882DB90;
    }
L_0882DB90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
      if (branch_taken) {
          goto L_0882DBD4;
      }
      goto L_0882DB98;
    }
L_0882DB98:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), ctx.gpr[18]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    ctx.gpr[5] = (0u | 197u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0882DBB4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x0882DBB4u) goto L_0882DBB4;
    return;
L_0882DBB4:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1752));
    ctx.gpr[31] = (0x0882DBCCu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1760));
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 488u, 0x0882BD3Cu>(ctx, &aot_mem) && ctx.pc == 0x0882DBCCu) goto L_0882DBCC;
    return;
L_0882DBCC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
      if (branch_taken) {
          goto L_0882F698;
      }
      goto L_0882DBD4;
    }
L_0882DBD4:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(18))))));
        goto L_0882DBEC;
    }
    goto L_0882DBDC;
L_0882DBDC:
    ctx.gpr[31] = (0x0882DBE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x0882DBE4u) goto L_0882DBE4;
    return;
L_0882DBE4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(18))))));
    goto L_0882DBEC;
L_0882DBEC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0882DC14;
      }
      goto L_0882DBF4;
    }
L_0882DBF4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 1u);
        goto L_0882DC18;
    }
    goto L_0882DC00;
L_0882DC00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (2209u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-26624));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0882DC1C;
      }
      goto L_0882DC14;
    }
L_0882DC14:
    ctx.gpr[4] = (0u | 1u);
    goto L_0882DC18;
L_0882DC18:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0882DC1C;
L_0882DC1C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882DCD0;
      }
      goto L_0882DC24;
    }
L_0882DC24:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3164)));
        goto L_0882DC3C;
    }
    goto L_0882DC2C;
L_0882DC2C:
    ctx.gpr[31] = (0x0882DC34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x0882DC34u) goto L_0882DC34;
    return;
L_0882DC34:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3164)));
    goto L_0882DC3C;
L_0882DC3C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0882DC98;
      }
      goto L_0882DC44;
    }
L_0882DC44:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882DC70;
      }
      goto L_0882DC50;
    }
L_0882DC50:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882DC70;
      }
      goto L_0882DC5C;
    }
L_0882DC5C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (2209u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-25292));
    if (ctx.gpr[8] == ctx.gpr[7]) {
    ctx.gpr[4] = (0u | 1u);
        goto L_0882DC9C;
    }
    goto L_0882DC70;
L_0882DC70:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_0882DCA0;
    }
    goto L_0882DC78;
L_0882DC78:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_0882DCA0;
    }
    goto L_0882DC84;
L_0882DC84:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (2209u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-25300));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0882DCA0;
      }
      goto L_0882DC98;
    }
L_0882DC98:
    ctx.gpr[4] = (0u | 1u);
    goto L_0882DC9C;
L_0882DC9C:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0882DCA0;
L_0882DCA0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882DCD0;
      }
      goto L_0882DCA8;
    }
L_0882DCA8:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0882DCC0;
      }
      goto L_0882DCB0;
    }
L_0882DCB0:
    ctx.gpr[31] = (0x0882DCB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x0882DCB8u) goto L_0882DCB8;
    return;
L_0882DCB8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    goto L_0882DCC0;
L_0882DCC0:
    ctx.gpr[31] = (0x0882DCC8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 126u, 0x08A088B4u>(ctx, &aot_mem) && ctx.pc == 0x0882DCC8u) goto L_0882DCC8;
    return;
L_0882DCC8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882DE40;
      }
      goto L_0882DCD0;
    }
L_0882DCD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[21] = (2230u << 16u);
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[19] = (2227u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1752));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1760));
      if (branch_taken) {
          goto L_0882DCFC;
      }
      goto L_0882DCF0;
    }
L_0882DCF0:
    ctx.gpr[31] = (0x0882DCF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x0882DCF8u) goto L_0882DCF8;
    return;
L_0882DCF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    goto L_0882DCFC;
L_0882DCFC:
    ctx.gpr[31] = (0x0882DD04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 279u, 0x08A09200u>(ctx, &aot_mem) && ctx.pc == 0x0882DD04u) goto L_0882DD04;
    return;
L_0882DD04:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882DD54;
      }
      goto L_0882DD0C;
    }
L_0882DD0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882DD24;
      }
      goto L_0882DD18;
    }
L_0882DD18:
    ctx.gpr[31] = (0x0882DD20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x0882DD20u) goto L_0882DD20;
    return;
L_0882DD20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    goto L_0882DD24;
L_0882DD24:
    ctx.gpr[31] = (0x0882DD2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 139u, 0x08A089D8u>(ctx, &aot_mem) && ctx.pc == 0x0882DD2Cu) goto L_0882DD2C;
    return;
L_0882DD2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0882DD40;
      }
      goto L_0882DD38;
    }
L_0882DD38:
    ctx.gpr[31] = (0x0882DD40u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B0B69Cu;
    return;
L_0882DD40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0882DD54;
      }
      goto L_0882DD4C;
    }
L_0882DD4C:
    ctx.gpr[31] = (0x0882DD54u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B0B69Cu;
    return;
L_0882DD54:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 197u);
    ctx.gpr[31] = (0x0882DD6Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x0882DD6Cu) goto L_0882DD6C;
    return;
L_0882DD6C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0882DD7Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 488u, 0x0882BD3Cu>(ctx, &aot_mem) && ctx.pc == 0x0882DD7Cu) goto L_0882DD7C;
    return;
L_0882DD7C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[31] = (0x0882DD88u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x0882DD88u) goto L_0882DD88;
    return;
L_0882DD88:
    ctx.gpr[31] = (0x0882DD90u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 762u, 0x08A970E0u>(ctx, &aot_mem) && ctx.pc == 0x0882DD90u) goto L_0882DD90;
    return;
L_0882DD90:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882DE38;
      }
      goto L_0882DD98;
    }
L_0882DD98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3164)));
        goto L_0882DDB4;
    }
    goto L_0882DDA4;
L_0882DDA4:
    ctx.gpr[31] = (0x0882DDACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x0882DDACu) goto L_0882DDAC;
    return;
L_0882DDAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3164)));
    goto L_0882DDB4;
L_0882DDB4:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0882DE10;
      }
      goto L_0882DDBC;
    }
L_0882DDBC:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882DDE8;
      }
      goto L_0882DDC8;
    }
L_0882DDC8:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882DDE8;
      }
      goto L_0882DDD4;
    }
L_0882DDD4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (2209u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-25292));
    if (ctx.gpr[8] == ctx.gpr[7]) {
    ctx.gpr[5] = (0u | 1u);
        goto L_0882DE14;
    }
    goto L_0882DDE8;
L_0882DDE8:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
        goto L_0882DE18;
    }
    goto L_0882DDF0;
L_0882DDF0:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
        goto L_0882DE18;
    }
    goto L_0882DDFC;
L_0882DDFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (2209u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-25300));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_0882DE18;
      }
      goto L_0882DE10;
    }
L_0882DE10:
    ctx.gpr[5] = (0u | 1u);
    goto L_0882DE14;
L_0882DE14:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_0882DE18;
L_0882DE18:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882DE38;
      }
      goto L_0882DE20;
    }
L_0882DE20:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (0u | 23u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4576));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1424), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0882DE38;
L_0882DE38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F698;
      }
      goto L_0882DE40;
    }
L_0882DE40:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0882DE50u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 1115u, 0x08833940u>(ctx, &aot_mem) && ctx.pc == 0x0882DE50u) goto L_0882DE50;
    return;
L_0882DE50:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882DEB0;
      }
      goto L_0882DE60;
    }
L_0882DE60:
    ctx.gpr[31] = (0x0882DE68u);
    // nop
    ctx.pc = 0x08B0BBC4u;
    return;
L_0882DE68:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(168));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(172));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x0882DE7Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08B0BAECu;
    return;
L_0882DE7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[5] = (13702u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 14269u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1872), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0882DEB0;
L_0882DEB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
        goto L_0882DECC;
    }
    goto L_0882DEBC;
L_0882DEBC:
    ctx.gpr[31] = (0x0882DEC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x0882DEC4u) goto L_0882DEC4;
    return;
L_0882DEC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_0882DECC;
L_0882DECC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882E068;
      }
      goto L_0882DED4;
    }
L_0882DED4:
    ctx.gpr[31] = (0x0882DEDCu);
    // nop
    ctx.pc = 0x08B0BBC4u;
    return;
L_0882DEDC:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x0882DEF0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08B0BAECu;
    return;
L_0882DEF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[5] = (13702u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 14269u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1872)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0882E068;
      }
      goto L_0882DF40;
    }
L_0882DF40:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0882DF4Cu);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11780));
    ctx.pc = 0x08B0BBC4u;
    return;
L_0882DF4C:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(184));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(188));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x0882DF60u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08B0BAECu;
    return;
L_0882DF60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1872)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[31] = (0x0882DF8Cu);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x0882DF8Cu) goto L_0882DF8C;
    return;
L_0882DF8C:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0882DF9Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 407u, 0x0882B86Cu>(ctx, &aot_mem) && ctx.pc == 0x0882DF9Cu) goto L_0882DF9C;
    return;
L_0882DF9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[19] = (2227u << 16u);
    ctx.gpr[21] = (2227u << 16u);
    ctx.gpr[22] = (2233u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1752));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1760));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-4576));
      if (branch_taken) {
          goto L_0882DFD0;
      }
      goto L_0882DFC4;
    }
L_0882DFC4:
    ctx.gpr[31] = (0x0882DFCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x0882DFCCu) goto L_0882DFCC;
    return;
L_0882DFCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    goto L_0882DFD0;
L_0882DFD0:
    ctx.gpr[31] = (0x0882DFD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 279u, 0x08A09200u>(ctx, &aot_mem) && ctx.pc == 0x0882DFD8u) goto L_0882DFD8;
    return;
L_0882DFD8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E028;
      }
      goto L_0882DFE0;
    }
L_0882DFE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882DFF8;
      }
      goto L_0882DFEC;
    }
L_0882DFEC:
    ctx.gpr[31] = (0x0882DFF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x0882DFF4u) goto L_0882DFF4;
    return;
L_0882DFF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    goto L_0882DFF8;
L_0882DFF8:
    ctx.gpr[31] = (0x0882E000u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 139u, 0x08A089D8u>(ctx, &aot_mem) && ctx.pc == 0x0882E000u) goto L_0882E000;
    return;
L_0882E000:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0882E014;
      }
      goto L_0882E00C;
    }
L_0882E00C:
    ctx.gpr[31] = (0x0882E014u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B0B69Cu;
    return;
L_0882E014:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0882E028;
      }
      goto L_0882E020;
    }
L_0882E020:
    ctx.gpr[31] = (0x0882E028u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B0B69Cu;
    return;
L_0882E028:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 197u);
    ctx.gpr[31] = (0x0882E040u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x0882E040u) goto L_0882E040;
    return;
L_0882E040:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0882E050u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 488u, 0x0882BD3Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E050u) goto L_0882E050;
    return;
L_0882E050:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (0u | 23u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(1424), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0882F698;
      }
      goto L_0882E068;
    }
L_0882E068:
    ctx.gpr[21] = (2232u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(5992));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x0882E07Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 83u, 0x088A848Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E07Cu) goto L_0882E07C;
    return;
L_0882E07C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E0D8;
      }
      goto L_0882E08C;
    }
L_0882E08C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-10464)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882E0A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 7u);
      if (branch_taken) {
          goto L_0882E0D8;
      }
      goto L_0882E0AC;
    }
L_0882E0AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 7u);
      if (branch_taken) {
          goto L_0882E0D8;
      }
      goto L_0882E0B4;
    }
L_0882E0B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 4u);
      if (branch_taken) {
          goto L_0882E0D8;
      }
      goto L_0882E0BC;
    }
L_0882E0BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 6u);
      if (branch_taken) {
          goto L_0882E0D8;
      }
      goto L_0882E0C4;
    }
L_0882E0C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 4u);
      if (branch_taken) {
          goto L_0882E0D8;
      }
      goto L_0882E0CC;
    }
L_0882E0CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 4u);
      if (branch_taken) {
          goto L_0882E0D8;
      }
      goto L_0882E0D4;
    }
L_0882E0D4:
    ctx.gpr[20] = (0u | 4u);
    goto L_0882E0D8;
L_0882E0D8:
    ctx.gpr[31] = (0x0882E0E0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 83u, 0x088A848Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E0E0u) goto L_0882E0E0;
    return;
L_0882E0E0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882E104;
      }
      goto L_0882E0E8;
    }
L_0882E0E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E104;
      }
      goto L_0882E100;
    }
L_0882E100:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(2));
    goto L_0882E104;
L_0882E104:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882E110u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_0882C084;
L_0882E110:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.gpr[22] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_0882E1C8;
      }
      goto L_0882E120;
    }
L_0882E120:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E1C8;
      }
      goto L_0882E138;
    }
L_0882E138:
    ctx.gpr[23] = (2233u << 16u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-4576));
    ctx.gpr[31] = (0x0882E148u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 296u, 0x08AD9614u>(ctx, &aot_mem) && ctx.pc == 0x0882E148u) goto L_0882E148;
    return;
L_0882E148:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882E160;
      }
      goto L_0882E150;
    }
L_0882E150:
    ctx.gpr[31] = (0x0882E158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 408u, 0x0882B898u>(ctx, &aot_mem) && ctx.pc == 0x0882E158u) goto L_0882E158;
    return;
L_0882E158:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E184;
      }
      goto L_0882E160;
    }
L_0882E160:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 196u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0882E174u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x0882E174u) goto L_0882E174;
    return;
L_0882E174:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27780)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27780), ctx.gpr[5]);
    goto L_0882E184;
L_0882E184:
    ctx.gpr[31] = (0x0882E18Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 322u, 0x08AD96FCu>(ctx, &aot_mem) && ctx.pc == 0x0882E18Cu) goto L_0882E18C;
    return;
L_0882E18C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882E1A4;
      }
      goto L_0882E194;
    }
L_0882E194:
    ctx.gpr[31] = (0x0882E19Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 416u, 0x0882B8F8u>(ctx, &aot_mem) && ctx.pc == 0x0882E19Cu) goto L_0882E19C;
    return;
L_0882E19C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E1C8;
      }
      goto L_0882E1A4;
    }
L_0882E1A4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 196u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0882E1B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x0882E1B8u) goto L_0882E1B8;
    return;
L_0882E1B8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27780)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27780), ctx.gpr[5]);
    goto L_0882E1C8;
L_0882E1C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
        goto L_0882E1E4;
    }
    goto L_0882E1D4;
L_0882E1D4:
    ctx.gpr[31] = (0x0882E1DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E1DCu) goto L_0882E1DC;
    return;
L_0882E1DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_0882E1E4;
L_0882E1E4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882E264;
      }
      goto L_0882E1EC;
    }
L_0882E1EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E25C;
      }
      goto L_0882E204;
    }
L_0882E204:
    ctx.gpr[18] = (2233u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-4576));
    ctx.gpr[31] = (0x0882E214u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 274u, 0x08AD954Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E214u) goto L_0882E214;
    return;
L_0882E214:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882E22C;
      }
      goto L_0882E21C;
    }
L_0882E21C:
    ctx.gpr[31] = (0x0882E224u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 285u, 0x08AD95B0u>(ctx, &aot_mem) && ctx.pc == 0x0882E224u) goto L_0882E224;
    return;
L_0882E224:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E230;
      }
      goto L_0882E22C;
    }
L_0882E22C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    goto L_0882E230;
L_0882E230:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E248;
      }
      goto L_0882E240;
    }
L_0882E240:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_0882E248;
L_0882E248:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F618;
      }
      goto L_0882E254;
    }
L_0882E254:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
      if (branch_taken) {
          goto L_0882F618;
      }
      goto L_0882E25C;
    }
L_0882E25C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
      if (branch_taken) {
          goto L_0882F618;
      }
      goto L_0882E264;
    }
L_0882E264:
    ctx.gpr[22] = (ctx.gpr[20] + static_cast<std::uint32_t>(2));
    ctx.gpr[20] = (2233u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-4576));
    ctx.gpr[23] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x0882E27Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 274u, 0x08AD954Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E27Cu) goto L_0882E27C;
    return;
L_0882E27C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E2BC;
      }
      goto L_0882E284;
    }
L_0882E284:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0882E2A8;
      }
      goto L_0882E290;
    }
L_0882E290:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 196u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0882E2A4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x0882E2A4u) goto L_0882E2A4;
    return;
L_0882E2A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    goto L_0882E2A8;
L_0882E2A8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0882E2BC;
      }
      goto L_0882E2B4;
    }
L_0882E2B4:
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    goto L_0882E2BC;
L_0882E2BC:
    ctx.gpr[31] = (0x0882E2C4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 285u, 0x08AD95B0u>(ctx, &aot_mem) && ctx.pc == 0x0882E2C4u) goto L_0882E2C4;
    return;
L_0882E2C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_0882E2F4;
      }
      goto L_0882E2CC;
    }
L_0882E2CC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0882E2EC;
      }
      goto L_0882E2D4;
    }
L_0882E2D4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 196u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0882E2E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x0882E2E8u) goto L_0882E2E8;
    return;
L_0882E2E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    goto L_0882E2EC;
L_0882E2EC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    goto L_0882E2F4;
L_0882E2F4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E308;
      }
      goto L_0882E300;
    }
L_0882E300:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_0882E308;
L_0882E308:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0882E318;
      }
      goto L_0882E310;
    }
L_0882E310:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_0882E318;
L_0882E318:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0882E324;
      }
      goto L_0882E320;
    }
L_0882E320:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    goto L_0882E324;
L_0882E324:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(18))))));
        goto L_0882E340;
    }
    goto L_0882E330;
L_0882E330:
    ctx.gpr[31] = (0x0882E338u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E338u) goto L_0882E338;
    return;
L_0882E338:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(18))))));
    goto L_0882E340;
L_0882E340:
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0882E36C;
      }
      goto L_0882E34C;
    }
L_0882E34C:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[5] = (0u | 1u);
        goto L_0882E370;
    }
    goto L_0882E358;
L_0882E358:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.gpr[9] = (2209u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-26624));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[8];
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_0882E374;
      }
      goto L_0882E36C;
    }
L_0882E36C:
    ctx.gpr[5] = (0u | 1u);
    goto L_0882E370;
L_0882E370:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_0882E374;
L_0882E374:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_0882E3D4;
    }
    goto L_0882E37C;
L_0882E37C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882E3A4;
      }
      goto L_0882E384;
    }
L_0882E384:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882E3A4;
      }
      goto L_0882E390;
    }
L_0882E390:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (2209u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-26616));
    if (ctx.gpr[8] == ctx.gpr[5]) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_0882E3D4;
    }
    goto L_0882E3A4;
L_0882E3A4:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (0u | 1u);
        goto L_0882E3D0;
    }
    goto L_0882E3AC;
L_0882E3AC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 1u);
        goto L_0882E3D0;
    }
    goto L_0882E3B8;
L_0882E3B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (2209u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-25968));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0882E3D4;
      }
      goto L_0882E3CC;
    }
L_0882E3CC:
    ctx.gpr[4] = (0u | 1u);
    goto L_0882E3D0;
L_0882E3D0:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0882E3D4;
L_0882E3D4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882E3E0;
      }
      goto L_0882E3DC;
    }
L_0882E3DC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    goto L_0882E3E0;
L_0882E3E0:
    ctx.gpr[31] = (0x0882E3E8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 296u, 0x08AD9614u>(ctx, &aot_mem) && ctx.pc == 0x0882E3E8u) goto L_0882E3E8;
    return;
L_0882E3E8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882E400;
      }
      goto L_0882E3F0;
    }
L_0882E3F0:
    ctx.gpr[31] = (0x0882E3F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 408u, 0x0882B898u>(ctx, &aot_mem) && ctx.pc == 0x0882E3F8u) goto L_0882E3F8;
    return;
L_0882E3F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EBD0;
      }
      goto L_0882E400;
    }
L_0882E400:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0882E424;
      }
      goto L_0882E40C;
    }
L_0882E40C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 196u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0882E420u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x0882E420u) goto L_0882E420;
    return;
L_0882E420:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    goto L_0882E424;
L_0882E424:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882E478;
      }
      goto L_0882E42C;
    }
L_0882E42C:
    ctx.gpr[31] = (0x0882E434u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 83u, 0x088A848Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E434u) goto L_0882E434;
    return;
L_0882E434:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882E450;
      }
      goto L_0882E43C;
    }
L_0882E43C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0882E448u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 82u, 0x088A8484u>(ctx, &aot_mem) && ctx.pc == 0x0882E448u) goto L_0882E448;
    return;
L_0882E448:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E464;
      }
      goto L_0882E450;
    }
L_0882E450:
    ctx.gpr[31] = (0x0882E458u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 83u, 0x088A848Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E458u) goto L_0882E458;
    return;
L_0882E458:
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0882E464u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 82u, 0x088A8484u>(ctx, &aot_mem) && ctx.pc == 0x0882E464u) goto L_0882E464;
    return;
L_0882E464:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882E470u);
    ctx.gpr[5] = (0u | 1u);
    goto L_0882C9C0;
L_0882E470:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F3FC;
      }
      goto L_0882E478;
    }
L_0882E478:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0882E4CC;
      }
      goto L_0882E484;
    }
L_0882E484:
    ctx.gpr[31] = (0x0882E48Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 87u, 0x088A84ACu>(ctx, &aot_mem) && ctx.pc == 0x0882E48Cu) goto L_0882E48C;
    return;
L_0882E48C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882E4B0;
      }
      goto L_0882E494;
    }
L_0882E494:
    ctx.gpr[31] = (0x0882E49Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 506u, 0x08AB2D4Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E49Cu) goto L_0882E49C;
    return;
L_0882E49C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0882E4A8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 84u, 0x088A8494u>(ctx, &aot_mem) && ctx.pc == 0x0882E4A8u) goto L_0882E4A8;
    return;
L_0882E4A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F3FC;
      }
      goto L_0882E4B0;
    }
L_0882E4B0:
    ctx.gpr[31] = (0x0882E4B8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 87u, 0x088A84ACu>(ctx, &aot_mem) && ctx.pc == 0x0882E4B8u) goto L_0882E4B8;
    return;
L_0882E4B8:
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0882E4C4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 84u, 0x088A8494u>(ctx, &aot_mem) && ctx.pc == 0x0882E4C4u) goto L_0882E4C4;
    return;
L_0882E4C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F3FC;
      }
      goto L_0882E4CC;
    }
L_0882E4CC:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0882E4EC;
      }
      goto L_0882E4D8;
    }
L_0882E4D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882E4E4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0882CB8C;
L_0882E4E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F3FC;
      }
      goto L_0882E4EC;
    }
L_0882E4EC:
    ctx.gpr[31] = (0x0882E4F4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 83u, 0x088A848Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E4F4u) goto L_0882E4F4;
    return;
L_0882E4F4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0882F3FC;
      }
      goto L_0882E504;
    }
L_0882E504:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-10432)));
    jump_target = ctx.gpr[1];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882E51C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E8A8;
      }
      goto L_0882E52C;
    }
L_0882E52C:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0882E584;
      }
      goto L_0882E538;
    }
L_0882E538:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0882E5C4;
      }
      goto L_0882E540;
    }
L_0882E540:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882E604;
      }
      goto L_0882E548;
    }
L_0882E548:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0882E630;
      }
      goto L_0882E550;
    }
L_0882E550:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0882E770;
      }
      goto L_0882E558;
    }
L_0882E558:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
      if (branch_taken) {
          goto L_0882E574;
      }
      goto L_0882E568;
    }
L_0882E568:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0882E57C;
      }
      goto L_0882E574;
    }
L_0882E574:
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    goto L_0882E57C;
L_0882E57C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E8A8;
      }
      goto L_0882E584;
    }
L_0882E584:
    ctx.gpr[31] = (0x0882E58Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 89u, 0x088A84BCu>(ctx, &aot_mem) && ctx.pc == 0x0882E58Cu) goto L_0882E58C;
    return;
L_0882E58C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_0882E5A8;
      }
      goto L_0882E594;
    }
L_0882E594:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0882E5A0u);
    ctx.gpr[5] = (0u | 50u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 88u, 0x088A84B4u>(ctx, &aot_mem) && ctx.pc == 0x0882E5A0u) goto L_0882E5A0;
    return;
L_0882E5A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E5BC;
      }
      goto L_0882E5A8;
    }
L_0882E5A8:
    ctx.gpr[31] = (0x0882E5B0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 89u, 0x088A84BCu>(ctx, &aot_mem) && ctx.pc == 0x0882E5B0u) goto L_0882E5B0;
    return;
L_0882E5B0:
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0882E5BCu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 88u, 0x088A84B4u>(ctx, &aot_mem) && ctx.pc == 0x0882E5BCu) goto L_0882E5BC;
    return;
L_0882E5BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E8A8;
      }
      goto L_0882E5C4;
    }
L_0882E5C4:
    ctx.gpr[31] = (0x0882E5CCu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 91u, 0x088A84CCu>(ctx, &aot_mem) && ctx.pc == 0x0882E5CCu) goto L_0882E5CC;
    return;
L_0882E5CC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_0882E5E8;
      }
      goto L_0882E5D4;
    }
L_0882E5D4:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0882E5E0u);
    ctx.gpr[5] = (0u | 60u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 90u, 0x088A84C4u>(ctx, &aot_mem) && ctx.pc == 0x0882E5E0u) goto L_0882E5E0;
    return;
L_0882E5E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E5FC;
      }
      goto L_0882E5E8;
    }
L_0882E5E8:
    ctx.gpr[31] = (0x0882E5F0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 91u, 0x088A84CCu>(ctx, &aot_mem) && ctx.pc == 0x0882E5F0u) goto L_0882E5F0;
    return;
L_0882E5F0:
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0882E5FCu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 90u, 0x088A84C4u>(ctx, &aot_mem) && ctx.pc == 0x0882E5FCu) goto L_0882E5FC;
    return;
L_0882E5FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E8A8;
      }
      goto L_0882E604;
    }
L_0882E604:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_0882E620;
      }
      goto L_0882E614;
    }
L_0882E614:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0882E628;
      }
      goto L_0882E620;
    }
L_0882E620:
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    goto L_0882E628;
L_0882E628:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E8A8;
      }
      goto L_0882E630;
    }
L_0882E630:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E768;
      }
      goto L_0882E648;
    }
L_0882E648:
    ctx.gpr[31] = (0x0882E650u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 97u, 0x088A84FCu>(ctx, &aot_mem) && ctx.pc == 0x0882E650u) goto L_0882E650;
    return;
L_0882E650:
    ctx.gpr[20] = (2227u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1884));
      if (branch_taken) {
          goto L_0882E670;
      }
      goto L_0882E65C;
    }
L_0882E65C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0882E668u);
    ctx.gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 96u, 0x088A84F4u>(ctx, &aot_mem) && ctx.pc == 0x0882E668u) goto L_0882E668;
    return;
L_0882E668:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E688;
      }
      goto L_0882E670;
    }
L_0882E670:
    ctx.gpr[31] = (0x0882E678u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 97u, 0x088A84FCu>(ctx, &aot_mem) && ctx.pc == 0x0882E678u) goto L_0882E678;
    return;
L_0882E678:
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[31] = (0x0882E688u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 96u, 0x088A84F4u>(ctx, &aot_mem) && ctx.pc == 0x0882E688u) goto L_0882E688;
    return;
L_0882E688:
    ctx.gpr[18] = (2225u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-11752));
    goto L_0882E690;
L_0882E690:
    ctx.gpr[31] = (0x0882E698u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 97u, 0x088A84FCu>(ctx, &aot_mem) && ctx.pc == 0x0882E698u) goto L_0882E698;
    return;
L_0882E698:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0882E6A4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 99u, 0x088A850Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E6A4u) goto L_0882E6A4;
    return;
L_0882E6A4:
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0882E6D8;
      }
      goto L_0882E6AC;
    }
L_0882E6AC:
    ctx.gpr[31] = (0x0882E6B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 506u, 0x08AB2D4Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E6B4u) goto L_0882E6B4;
    return;
L_0882E6B4:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0882E6C0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 97u, 0x088A84FCu>(ctx, &aot_mem) && ctx.pc == 0x0882E6C0u) goto L_0882E6C0;
    return;
L_0882E6C0:
    ctx.gpr[4] = (ctx.gpr[2] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E768;
      }
      goto L_0882E6D8;
    }
L_0882E6D8:
    ctx.gpr[31] = (0x0882E6E0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 97u, 0x088A84FCu>(ctx, &aot_mem) && ctx.pc == 0x0882E6E0u) goto L_0882E6E0;
    return;
L_0882E6E0:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0882E6ECu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 99u, 0x088A850Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E6ECu) goto L_0882E6EC;
    return;
L_0882E6EC:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0882E6F8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 97u, 0x088A84FCu>(ctx, &aot_mem) && ctx.pc == 0x0882E6F8u) goto L_0882E6F8;
    return;
L_0882E6F8:
    ctx.gpr[4] = (ctx.gpr[2] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[20]);
    ctx.gpr[31] = (0x0882E70Cu);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 506u, 0x08AB2D4Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E70Cu) goto L_0882E70C;
    return;
L_0882E70C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0882E724u);
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 407u, 0x0882B86Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E724u) goto L_0882E724;
    return;
L_0882E724:
    ctx.gpr[31] = (0x0882E72Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 97u, 0x088A84FCu>(ctx, &aot_mem) && ctx.pc == 0x0882E72Cu) goto L_0882E72C;
    return;
L_0882E72C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
      if (branch_taken) {
          goto L_0882E748;
      }
      goto L_0882E734;
    }
L_0882E734:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0882E740u);
    ctx.gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 96u, 0x088A84F4u>(ctx, &aot_mem) && ctx.pc == 0x0882E740u) goto L_0882E740;
    return;
L_0882E740:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E760;
      }
      goto L_0882E748;
    }
L_0882E748:
    ctx.gpr[31] = (0x0882E750u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 97u, 0x088A84FCu>(ctx, &aot_mem) && ctx.pc == 0x0882E750u) goto L_0882E750;
    return;
L_0882E750:
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[31] = (0x0882E760u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 96u, 0x088A84F4u>(ctx, &aot_mem) && ctx.pc == 0x0882E760u) goto L_0882E760;
    return;
L_0882E760:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E690;
      }
      goto L_0882E768;
    }
L_0882E768:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E8A8;
      }
      goto L_0882E770;
    }
L_0882E770:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E8A8;
      }
      goto L_0882E788;
    }
L_0882E788:
    ctx.gpr[31] = (0x0882E790u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 99u, 0x088A850Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E790u) goto L_0882E790;
    return;
L_0882E790:
    ctx.gpr[20] = (2227u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1884));
      if (branch_taken) {
          goto L_0882E7B0;
      }
      goto L_0882E79C;
    }
L_0882E79C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0882E7A8u);
    ctx.gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 98u, 0x088A8504u>(ctx, &aot_mem) && ctx.pc == 0x0882E7A8u) goto L_0882E7A8;
    return;
L_0882E7A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E7C8;
      }
      goto L_0882E7B0;
    }
L_0882E7B0:
    ctx.gpr[31] = (0x0882E7B8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 99u, 0x088A850Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E7B8u) goto L_0882E7B8;
    return;
L_0882E7B8:
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[31] = (0x0882E7C8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 98u, 0x088A8504u>(ctx, &aot_mem) && ctx.pc == 0x0882E7C8u) goto L_0882E7C8;
    return;
L_0882E7C8:
    ctx.gpr[18] = (2225u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-11716));
    goto L_0882E7D0;
L_0882E7D0:
    ctx.gpr[31] = (0x0882E7D8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 97u, 0x088A84FCu>(ctx, &aot_mem) && ctx.pc == 0x0882E7D8u) goto L_0882E7D8;
    return;
L_0882E7D8:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0882E7E4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 99u, 0x088A850Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E7E4u) goto L_0882E7E4;
    return;
L_0882E7E4:
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0882E818;
      }
      goto L_0882E7EC;
    }
L_0882E7EC:
    ctx.gpr[31] = (0x0882E7F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 506u, 0x08AB2D4Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E7F4u) goto L_0882E7F4;
    return;
L_0882E7F4:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0882E800u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 99u, 0x088A850Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E800u) goto L_0882E800;
    return;
L_0882E800:
    ctx.gpr[4] = (ctx.gpr[2] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E8A8;
      }
      goto L_0882E818;
    }
L_0882E818:
    ctx.gpr[31] = (0x0882E820u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 97u, 0x088A84FCu>(ctx, &aot_mem) && ctx.pc == 0x0882E820u) goto L_0882E820;
    return;
L_0882E820:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0882E82Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 99u, 0x088A850Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E82Cu) goto L_0882E82C;
    return;
L_0882E82C:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0882E838u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 99u, 0x088A850Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E838u) goto L_0882E838;
    return;
L_0882E838:
    ctx.gpr[4] = (ctx.gpr[2] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[20]);
    ctx.gpr[31] = (0x0882E84Cu);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 506u, 0x08AB2D4Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E84Cu) goto L_0882E84C;
    return;
L_0882E84C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0882E864u);
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 407u, 0x0882B86Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E864u) goto L_0882E864;
    return;
L_0882E864:
    ctx.gpr[31] = (0x0882E86Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 99u, 0x088A850Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E86Cu) goto L_0882E86C;
    return;
L_0882E86C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
      if (branch_taken) {
          goto L_0882E888;
      }
      goto L_0882E874;
    }
L_0882E874:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0882E880u);
    ctx.gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 98u, 0x088A8504u>(ctx, &aot_mem) && ctx.pc == 0x0882E880u) goto L_0882E880;
    return;
L_0882E880:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E8A0;
      }
      goto L_0882E888;
    }
L_0882E888:
    ctx.gpr[31] = (0x0882E890u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 99u, 0x088A850Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E890u) goto L_0882E890;
    return;
L_0882E890:
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[31] = (0x0882E8A0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 98u, 0x088A8504u>(ctx, &aot_mem) && ctx.pc == 0x0882E8A0u) goto L_0882E8A0;
    return;
L_0882E8A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E7D0;
      }
      goto L_0882E8A8;
    }
L_0882E8A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F3FC;
      }
      goto L_0882E8B0;
    }
L_0882E8B0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
      if (branch_taken) {
          goto L_0882E8D8;
      }
      goto L_0882E8BC;
    }
L_0882E8BC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0882E9D4;
      }
      goto L_0882E8C8;
    }
L_0882E8C8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882E8F0;
      }
      goto L_0882E8D0;
    }
L_0882E8D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E918;
      }
      goto L_0882E8D8;
    }
L_0882E8D8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
      if (branch_taken) {
          goto L_0882E95C;
      }
      goto L_0882E8E0;
    }
L_0882E8E0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882E9B0;
      }
      goto L_0882E8E8;
    }
L_0882E8E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E9D4;
      }
      goto L_0882E8F0;
    }
L_0882E8F0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_0882E908;
      }
      goto L_0882E8FC;
    }
L_0882E8FC:
    ctx.gpr[4] = (0u | 7u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0882E910;
      }
      goto L_0882E908;
    }
L_0882E908:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0882E910;
L_0882E910:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E9D4;
      }
      goto L_0882E918;
    }
L_0882E918:
    ctx.gpr[31] = (0x0882E920u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 89u, 0x088A84BCu>(ctx, &aot_mem) && ctx.pc == 0x0882E920u) goto L_0882E920;
    return;
L_0882E920:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E940;
      }
      goto L_0882E92C;
    }
L_0882E92C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0882E938u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 88u, 0x088A84B4u>(ctx, &aot_mem) && ctx.pc == 0x0882E938u) goto L_0882E938;
    return;
L_0882E938:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E954;
      }
      goto L_0882E940;
    }
L_0882E940:
    ctx.gpr[31] = (0x0882E948u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 89u, 0x088A84BCu>(ctx, &aot_mem) && ctx.pc == 0x0882E948u) goto L_0882E948;
    return;
L_0882E948:
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0882E954u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 88u, 0x088A84B4u>(ctx, &aot_mem) && ctx.pc == 0x0882E954u) goto L_0882E954;
    return;
L_0882E954:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E9D4;
      }
      goto L_0882E95C;
    }
L_0882E95C:
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(54)));
    ctx.gpr[20] = (2225u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-11680));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_0882E970;
L_0882E970:
    ctx.gpr[31] = (0x0882E978u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 429u, 0x08932218u>(ctx, &aot_mem) && ctx.pc == 0x0882E978u) goto L_0882E978;
    return;
L_0882E978:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882E9A8;
      }
      goto L_0882E980;
    }
L_0882E980:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0882E98Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 407u, 0x0882B86Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E98Cu) goto L_0882E98C;
    return;
L_0882E98C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[18] < static_cast<std::uint32_t>(130) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E9A0;
      }
      goto L_0882E99C;
    }
L_0882E99C:
    ctx.gpr[18] = (0u | 216u);
    goto L_0882E9A0;
L_0882E9A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0882E970;
      }
      goto L_0882E9A8;
    }
L_0882E9A8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(54), static_cast<std::uint16_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_0882E9D4;
      }
      goto L_0882E9B0;
    }
L_0882E9B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
      if (branch_taken) {
          goto L_0882E9CC;
      }
      goto L_0882E9C0;
    }
L_0882E9C0:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0882E9D4;
      }
      goto L_0882E9CC;
    }
L_0882E9CC:
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    goto L_0882E9D4;
L_0882E9D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F3FC;
      }
      goto L_0882E9DC;
    }
L_0882E9DC:
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0882EA0C;
      }
      goto L_0882E9E8;
    }
L_0882E9E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_0882EA04;
      }
      goto L_0882E9F8;
    }
L_0882E9F8:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0882EA0C;
      }
      goto L_0882EA04;
    }
L_0882EA04:
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    goto L_0882EA0C;
L_0882EA0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F3FC;
      }
      goto L_0882EA14;
    }
L_0882EA14:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_0882EA34;
      }
      goto L_0882EA20;
    }
L_0882EA20:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882EAF0;
      }
      goto L_0882EA2C;
    }
L_0882EA2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EA4C;
      }
      goto L_0882EA34;
    }
L_0882EA34:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
      if (branch_taken) {
          goto L_0882EA8C;
      }
      goto L_0882EA3C;
    }
L_0882EA3C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882EACC;
      }
      goto L_0882EA44;
    }
L_0882EA44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EAF0;
      }
      goto L_0882EA4C;
    }
L_0882EA4C:
    ctx.gpr[31] = (0x0882EA54u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 93u, 0x088A84DCu>(ctx, &aot_mem) && ctx.pc == 0x0882EA54u) goto L_0882EA54;
    return;
L_0882EA54:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_0882EA70;
      }
      goto L_0882EA5C;
    }
L_0882EA5C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0882EA68u);
    ctx.gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 92u, 0x088A84D4u>(ctx, &aot_mem) && ctx.pc == 0x0882EA68u) goto L_0882EA68;
    return;
L_0882EA68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EA84;
      }
      goto L_0882EA70;
    }
L_0882EA70:
    ctx.gpr[31] = (0x0882EA78u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 93u, 0x088A84DCu>(ctx, &aot_mem) && ctx.pc == 0x0882EA78u) goto L_0882EA78;
    return;
L_0882EA78:
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0882EA84u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 92u, 0x088A84D4u>(ctx, &aot_mem) && ctx.pc == 0x0882EA84u) goto L_0882EA84;
    return;
L_0882EA84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EAF0;
      }
      goto L_0882EA8C;
    }
L_0882EA8C:
    ctx.gpr[31] = (0x0882EA94u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 91u, 0x088A84CCu>(ctx, &aot_mem) && ctx.pc == 0x0882EA94u) goto L_0882EA94;
    return;
L_0882EA94:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_0882EAB0;
      }
      goto L_0882EA9C;
    }
L_0882EA9C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0882EAA8u);
    ctx.gpr[5] = (0u | 60u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 90u, 0x088A84C4u>(ctx, &aot_mem) && ctx.pc == 0x0882EAA8u) goto L_0882EAA8;
    return;
L_0882EAA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EAC4;
      }
      goto L_0882EAB0;
    }
L_0882EAB0:
    ctx.gpr[31] = (0x0882EAB8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 91u, 0x088A84CCu>(ctx, &aot_mem) && ctx.pc == 0x0882EAB8u) goto L_0882EAB8;
    return;
L_0882EAB8:
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0882EAC4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 90u, 0x088A84C4u>(ctx, &aot_mem) && ctx.pc == 0x0882EAC4u) goto L_0882EAC4;
    return;
L_0882EAC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EAF0;
      }
      goto L_0882EACC;
    }
L_0882EACC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_0882EAE8;
      }
      goto L_0882EADC;
    }
L_0882EADC:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0882EAF0;
      }
      goto L_0882EAE8;
    }
L_0882EAE8:
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    goto L_0882EAF0;
L_0882EAF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F3FC;
      }
      goto L_0882EAF8;
    }
L_0882EAF8:
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0882EB40;
      }
      goto L_0882EB04;
    }
L_0882EB04:
    ctx.gpr[31] = (0x0882EB0Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 89u, 0x088A84BCu>(ctx, &aot_mem) && ctx.pc == 0x0882EB0Cu) goto L_0882EB0C;
    return;
L_0882EB0C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EB2C;
      }
      goto L_0882EB18;
    }
L_0882EB18:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0882EB24u);
    ctx.gpr[5] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 88u, 0x088A84B4u>(ctx, &aot_mem) && ctx.pc == 0x0882EB24u) goto L_0882EB24;
    return;
L_0882EB24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EB40;
      }
      goto L_0882EB2C;
    }
L_0882EB2C:
    ctx.gpr[31] = (0x0882EB34u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 89u, 0x088A84BCu>(ctx, &aot_mem) && ctx.pc == 0x0882EB34u) goto L_0882EB34;
    return;
L_0882EB34:
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0882EB40u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 88u, 0x088A84B4u>(ctx, &aot_mem) && ctx.pc == 0x0882EB40u) goto L_0882EB40;
    return;
L_0882EB40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F3FC;
      }
      goto L_0882EB48;
    }
L_0882EB48:
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0882EB90;
      }
      goto L_0882EB54;
    }
L_0882EB54:
    ctx.gpr[31] = (0x0882EB5Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 95u, 0x088A84ECu>(ctx, &aot_mem) && ctx.pc == 0x0882EB5Cu) goto L_0882EB5C;
    return;
L_0882EB5C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 1001 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EB7C;
      }
      goto L_0882EB68;
    }
L_0882EB68:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0882EB74u);
    ctx.gpr[5] = (0u | 20000u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 94u, 0x088A84E4u>(ctx, &aot_mem) && ctx.pc == 0x0882EB74u) goto L_0882EB74;
    return;
L_0882EB74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EB90;
      }
      goto L_0882EB7C;
    }
L_0882EB7C:
    ctx.gpr[31] = (0x0882EB84u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 95u, 0x088A84ECu>(ctx, &aot_mem) && ctx.pc == 0x0882EB84u) goto L_0882EB84;
    return;
L_0882EB84:
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1000));
    ctx.gpr[31] = (0x0882EB90u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 94u, 0x088A84E4u>(ctx, &aot_mem) && ctx.pc == 0x0882EB90u) goto L_0882EB90;
    return;
L_0882EB90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F3FC;
      }
      goto L_0882EB98;
    }
L_0882EB98:
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0882EBC8;
      }
      goto L_0882EBA4;
    }
L_0882EBA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_0882EBC0;
      }
      goto L_0882EBB4;
    }
L_0882EBB4:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0882EBC8;
      }
      goto L_0882EBC0;
    }
L_0882EBC0:
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    goto L_0882EBC8;
L_0882EBC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F3FC;
      }
      goto L_0882EBD0;
    }
L_0882EBD0:
    ctx.gpr[31] = (0x0882EBD8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 322u, 0x08AD96FCu>(ctx, &aot_mem) && ctx.pc == 0x0882EBD8u) goto L_0882EBD8;
    return;
L_0882EBD8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882EBF0;
      }
      goto L_0882EBE0;
    }
L_0882EBE0:
    ctx.gpr[31] = (0x0882EBE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 416u, 0x0882B8F8u>(ctx, &aot_mem) && ctx.pc == 0x0882EBE8u) goto L_0882EBE8;
    return;
L_0882EBE8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F3FC;
      }
      goto L_0882EBF0;
    }
L_0882EBF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0882EC14;
      }
      goto L_0882EBFC;
    }
L_0882EBFC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 196u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0882EC10u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x0882EC10u) goto L_0882EC10;
    return;
L_0882EC10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    goto L_0882EC14;
L_0882EC14:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882EC6C;
      }
      goto L_0882EC1C;
    }
L_0882EC1C:
    ctx.gpr[31] = (0x0882EC24u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 83u, 0x088A848Cu>(ctx, &aot_mem) && ctx.pc == 0x0882EC24u) goto L_0882EC24;
    return;
L_0882EC24:
    ctx.gpr[4] = (ctx.gpr[2] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882EC44;
      }
      goto L_0882EC30;
    }
L_0882EC30:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0882EC3Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 82u, 0x088A8484u>(ctx, &aot_mem) && ctx.pc == 0x0882EC3Cu) goto L_0882EC3C;
    return;
L_0882EC3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EC58;
      }
      goto L_0882EC44;
    }
L_0882EC44:
    ctx.gpr[31] = (0x0882EC4Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 83u, 0x088A848Cu>(ctx, &aot_mem) && ctx.pc == 0x0882EC4Cu) goto L_0882EC4C;
    return;
L_0882EC4C:
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x0882EC58u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 82u, 0x088A8484u>(ctx, &aot_mem) && ctx.pc == 0x0882EC58u) goto L_0882EC58;
    return;
L_0882EC58:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882EC64u);
    ctx.gpr[5] = (0u | 1u);
    goto L_0882C9C0;
L_0882EC64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F3FC;
      }
      goto L_0882EC6C;
    }
L_0882EC6C:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0882ECE0;
      }
      goto L_0882EC78;
    }
L_0882EC78:
    ctx.gpr[31] = (0x0882EC80u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 87u, 0x088A84ACu>(ctx, &aot_mem) && ctx.pc == 0x0882EC80u) goto L_0882EC80;
    return;
L_0882EC80:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0882EC8Cu);
    ctx.gpr[20] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 506u, 0x08AB2D4Cu>(ctx, &aot_mem) && ctx.pc == 0x0882EC8Cu) goto L_0882EC8C;
    return;
L_0882EC8C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[20] ? 1u : 0u);
      if (branch_taken) {
          goto L_0882ECA8;
      }
      goto L_0882EC98;
    }
L_0882EC98:
    ctx.gpr[31] = (0x0882ECA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 506u, 0x08AB2D4Cu>(ctx, &aot_mem) && ctx.pc == 0x0882ECA0u) goto L_0882ECA0;
    return;
L_0882ECA0:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[20] ? 1u : 0u);
    goto L_0882ECA8;
L_0882ECA8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882ECC4;
      }
      goto L_0882ECB0;
    }
L_0882ECB0:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0882ECBCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 84u, 0x088A8494u>(ctx, &aot_mem) && ctx.pc == 0x0882ECBCu) goto L_0882ECBC;
    return;
L_0882ECBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F3FC;
      }
      goto L_0882ECC4;
    }
L_0882ECC4:
    ctx.gpr[31] = (0x0882ECCCu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 87u, 0x088A84ACu>(ctx, &aot_mem) && ctx.pc == 0x0882ECCCu) goto L_0882ECCC;
    return;
L_0882ECCC:
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x0882ECD8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 84u, 0x088A8494u>(ctx, &aot_mem) && ctx.pc == 0x0882ECD8u) goto L_0882ECD8;
    return;
L_0882ECD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F3FC;
      }
      goto L_0882ECE0;
    }
L_0882ECE0:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0882ED00;
      }
      goto L_0882ECEC;
    }
L_0882ECEC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882ECF8u);
    ctx.gpr[5] = (0u | 1u);
    goto L_0882CB8C;
L_0882ECF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F3FC;
      }
      goto L_0882ED00;
    }
L_0882ED00:
    ctx.gpr[31] = (0x0882ED08u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 83u, 0x088A848Cu>(ctx, &aot_mem) && ctx.pc == 0x0882ED08u) goto L_0882ED08;
    return;
L_0882ED08:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0882F3FC;
      }
      goto L_0882ED18;
    }
L_0882ED18:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-10400)));
    jump_target = ctx.gpr[1];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882ED30:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F0D4;
      }
      goto L_0882ED40;
    }
L_0882ED40:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0882ED98;
      }
      goto L_0882ED4C;
    }
L_0882ED4C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0882EDDC;
      }
      goto L_0882ED54;
    }
L_0882ED54:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882EE20;
      }
      goto L_0882ED5C;
    }
L_0882ED5C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0882EE4C;
      }
      goto L_0882ED64;
    }
L_0882ED64:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0882EF94;
      }
      goto L_0882ED6C;
    }
L_0882ED6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
      if (branch_taken) {
          goto L_0882ED88;
      }
      goto L_0882ED7C;
    }
L_0882ED7C:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0882ED90;
      }
      goto L_0882ED88;
    }
L_0882ED88:
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    goto L_0882ED90;
L_0882ED90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F0D4;
      }
      goto L_0882ED98;
    }
L_0882ED98:
    ctx.gpr[31] = (0x0882EDA0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 89u, 0x088A84BCu>(ctx, &aot_mem) && ctx.pc == 0x0882EDA0u) goto L_0882EDA0;
    return;
L_0882EDA0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 50 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882EDC0;
      }
      goto L_0882EDAC;
    }
L_0882EDAC:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0882EDB8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 88u, 0x088A84B4u>(ctx, &aot_mem) && ctx.pc == 0x0882EDB8u) goto L_0882EDB8;
    return;
L_0882EDB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EDD4;
      }
      goto L_0882EDC0;
    }
L_0882EDC0:
    ctx.gpr[31] = (0x0882EDC8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 89u, 0x088A84BCu>(ctx, &aot_mem) && ctx.pc == 0x0882EDC8u) goto L_0882EDC8;
    return;
L_0882EDC8:
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x0882EDD4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 88u, 0x088A84B4u>(ctx, &aot_mem) && ctx.pc == 0x0882EDD4u) goto L_0882EDD4;
    return;
L_0882EDD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F0D4;
      }
      goto L_0882EDDC;
    }
L_0882EDDC:
    ctx.gpr[31] = (0x0882EDE4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 91u, 0x088A84CCu>(ctx, &aot_mem) && ctx.pc == 0x0882EDE4u) goto L_0882EDE4;
    return;
L_0882EDE4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 60 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882EE04;
      }
      goto L_0882EDF0;
    }
L_0882EDF0:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0882EDFCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 90u, 0x088A84C4u>(ctx, &aot_mem) && ctx.pc == 0x0882EDFCu) goto L_0882EDFC;
    return;
L_0882EDFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EE18;
      }
      goto L_0882EE04;
    }
L_0882EE04:
    ctx.gpr[31] = (0x0882EE0Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 91u, 0x088A84CCu>(ctx, &aot_mem) && ctx.pc == 0x0882EE0Cu) goto L_0882EE0C;
    return;
L_0882EE0C:
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x0882EE18u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 90u, 0x088A84C4u>(ctx, &aot_mem) && ctx.pc == 0x0882EE18u) goto L_0882EE18;
    return;
L_0882EE18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F0D4;
      }
      goto L_0882EE20;
    }
L_0882EE20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_0882EE3C;
      }
      goto L_0882EE30;
    }
L_0882EE30:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0882EE44;
      }
      goto L_0882EE3C;
    }
L_0882EE3C:
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    goto L_0882EE44;
L_0882EE44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F0D4;
      }
      goto L_0882EE4C;
    }
L_0882EE4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EF8C;
      }
      goto L_0882EE64;
    }
L_0882EE64:
    ctx.gpr[31] = (0x0882EE6Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 97u, 0x088A84FCu>(ctx, &aot_mem) && ctx.pc == 0x0882EE6Cu) goto L_0882EE6C;
    return;
L_0882EE6C:
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1884));
      if (branch_taken) {
          goto L_0882EE90;
      }
      goto L_0882EE7C;
    }
L_0882EE7C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0882EE88u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 96u, 0x088A84F4u>(ctx, &aot_mem) && ctx.pc == 0x0882EE88u) goto L_0882EE88;
    return;
L_0882EE88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EEA8;
      }
      goto L_0882EE90;
    }
L_0882EE90:
    ctx.gpr[31] = (0x0882EE98u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 97u, 0x088A84FCu>(ctx, &aot_mem) && ctx.pc == 0x0882EE98u) goto L_0882EE98;
    return;
L_0882EE98:
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[31] = (0x0882EEA8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 96u, 0x088A84F4u>(ctx, &aot_mem) && ctx.pc == 0x0882EEA8u) goto L_0882EEA8;
    return;
L_0882EEA8:
    ctx.gpr[18] = (2225u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-11644));
    goto L_0882EEB0;
L_0882EEB0:
    ctx.gpr[31] = (0x0882EEB8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 97u, 0x088A84FCu>(ctx, &aot_mem) && ctx.pc == 0x0882EEB8u) goto L_0882EEB8;
    return;
L_0882EEB8:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0882EEC4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 99u, 0x088A850Cu>(ctx, &aot_mem) && ctx.pc == 0x0882EEC4u) goto L_0882EEC4;
    return;
L_0882EEC4:
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0882EEF8;
      }
      goto L_0882EECC;
    }
L_0882EECC:
    ctx.gpr[31] = (0x0882EED4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 506u, 0x08AB2D4Cu>(ctx, &aot_mem) && ctx.pc == 0x0882EED4u) goto L_0882EED4;
    return;
L_0882EED4:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0882EEE0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 97u, 0x088A84FCu>(ctx, &aot_mem) && ctx.pc == 0x0882EEE0u) goto L_0882EEE0;
    return;
L_0882EEE0:
    ctx.gpr[4] = (ctx.gpr[2] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EF8C;
      }
      goto L_0882EEF8;
    }
L_0882EEF8:
    ctx.gpr[31] = (0x0882EF00u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 97u, 0x088A84FCu>(ctx, &aot_mem) && ctx.pc == 0x0882EF00u) goto L_0882EF00;
    return;
L_0882EF00:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0882EF0Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 99u, 0x088A850Cu>(ctx, &aot_mem) && ctx.pc == 0x0882EF0Cu) goto L_0882EF0C;
    return;
L_0882EF0C:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0882EF18u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 97u, 0x088A84FCu>(ctx, &aot_mem) && ctx.pc == 0x0882EF18u) goto L_0882EF18;
    return;
L_0882EF18:
    ctx.gpr[4] = (ctx.gpr[2] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[20]);
    ctx.gpr[31] = (0x0882EF2Cu);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 506u, 0x08AB2D4Cu>(ctx, &aot_mem) && ctx.pc == 0x0882EF2Cu) goto L_0882EF2C;
    return;
L_0882EF2C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0882EF44u);
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 407u, 0x0882B86Cu>(ctx, &aot_mem) && ctx.pc == 0x0882EF44u) goto L_0882EF44;
    return;
L_0882EF44:
    ctx.gpr[31] = (0x0882EF4Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 97u, 0x088A84FCu>(ctx, &aot_mem) && ctx.pc == 0x0882EF4Cu) goto L_0882EF4C;
    return;
L_0882EF4C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
      if (branch_taken) {
          goto L_0882EF6C;
      }
      goto L_0882EF58;
    }
L_0882EF58:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0882EF64u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 96u, 0x088A84F4u>(ctx, &aot_mem) && ctx.pc == 0x0882EF64u) goto L_0882EF64;
    return;
L_0882EF64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EF84;
      }
      goto L_0882EF6C;
    }
L_0882EF6C:
    ctx.gpr[31] = (0x0882EF74u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 97u, 0x088A84FCu>(ctx, &aot_mem) && ctx.pc == 0x0882EF74u) goto L_0882EF74;
    return;
L_0882EF74:
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[31] = (0x0882EF84u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 96u, 0x088A84F4u>(ctx, &aot_mem) && ctx.pc == 0x0882EF84u) goto L_0882EF84;
    return;
L_0882EF84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EEB0;
      }
      goto L_0882EF8C;
    }
L_0882EF8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F0D4;
      }
      goto L_0882EF94;
    }
L_0882EF94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F0D4;
      }
      goto L_0882EFAC;
    }
L_0882EFAC:
    ctx.gpr[31] = (0x0882EFB4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 99u, 0x088A850Cu>(ctx, &aot_mem) && ctx.pc == 0x0882EFB4u) goto L_0882EFB4;
    return;
L_0882EFB4:
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1884));
      if (branch_taken) {
          goto L_0882EFD8;
      }
      goto L_0882EFC4;
    }
L_0882EFC4:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0882EFD0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 98u, 0x088A8504u>(ctx, &aot_mem) && ctx.pc == 0x0882EFD0u) goto L_0882EFD0;
    return;
L_0882EFD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EFF0;
      }
      goto L_0882EFD8;
    }
L_0882EFD8:
    ctx.gpr[31] = (0x0882EFE0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 99u, 0x088A850Cu>(ctx, &aot_mem) && ctx.pc == 0x0882EFE0u) goto L_0882EFE0;
    return;
L_0882EFE0:
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[31] = (0x0882EFF0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 98u, 0x088A8504u>(ctx, &aot_mem) && ctx.pc == 0x0882EFF0u) goto L_0882EFF0;
    return;
L_0882EFF0:
    ctx.gpr[20] = (2225u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-11608));
    goto L_0882EFF8;
L_0882EFF8:
    ctx.gpr[31] = (0x0882F000u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 97u, 0x088A84FCu>(ctx, &aot_mem) && ctx.pc == 0x0882F000u) goto L_0882F000;
    return;
L_0882F000:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0882F00Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 99u, 0x088A850Cu>(ctx, &aot_mem) && ctx.pc == 0x0882F00Cu) goto L_0882F00C;
    return;
L_0882F00C:
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0882F040;
      }
      goto L_0882F014;
    }
L_0882F014:
    ctx.gpr[31] = (0x0882F01Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 506u, 0x08AB2D4Cu>(ctx, &aot_mem) && ctx.pc == 0x0882F01Cu) goto L_0882F01C;
    return;
L_0882F01C:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0882F028u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 99u, 0x088A850Cu>(ctx, &aot_mem) && ctx.pc == 0x0882F028u) goto L_0882F028;
    return;
L_0882F028:
    ctx.gpr[4] = (ctx.gpr[2] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F0D4;
      }
      goto L_0882F040;
    }
L_0882F040:
    ctx.gpr[31] = (0x0882F048u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 97u, 0x088A84FCu>(ctx, &aot_mem) && ctx.pc == 0x0882F048u) goto L_0882F048;
    return;
L_0882F048:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0882F054u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 99u, 0x088A850Cu>(ctx, &aot_mem) && ctx.pc == 0x0882F054u) goto L_0882F054;
    return;
L_0882F054:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0882F060u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 99u, 0x088A850Cu>(ctx, &aot_mem) && ctx.pc == 0x0882F060u) goto L_0882F060;
    return;
L_0882F060:
    ctx.gpr[4] = (ctx.gpr[2] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[18]);
    ctx.gpr[31] = (0x0882F074u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 506u, 0x08AB2D4Cu>(ctx, &aot_mem) && ctx.pc == 0x0882F074u) goto L_0882F074;
    return;
L_0882F074:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0882F08Cu);
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 407u, 0x0882B86Cu>(ctx, &aot_mem) && ctx.pc == 0x0882F08Cu) goto L_0882F08C;
    return;
L_0882F08C:
    ctx.gpr[31] = (0x0882F094u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 99u, 0x088A850Cu>(ctx, &aot_mem) && ctx.pc == 0x0882F094u) goto L_0882F094;
    return;
L_0882F094:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
      if (branch_taken) {
          goto L_0882F0B4;
      }
      goto L_0882F0A0;
    }
L_0882F0A0:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0882F0ACu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 98u, 0x088A8504u>(ctx, &aot_mem) && ctx.pc == 0x0882F0ACu) goto L_0882F0AC;
    return;
L_0882F0AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F0CC;
      }
      goto L_0882F0B4;
    }
L_0882F0B4:
    ctx.gpr[31] = (0x0882F0BCu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 99u, 0x088A850Cu>(ctx, &aot_mem) && ctx.pc == 0x0882F0BCu) goto L_0882F0BC;
    return;
L_0882F0BC:
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[31] = (0x0882F0CCu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 98u, 0x088A8504u>(ctx, &aot_mem) && ctx.pc == 0x0882F0CCu) goto L_0882F0CC;
    return;
L_0882F0CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EFF8;
      }
      goto L_0882F0D4;
    }
L_0882F0D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F3FC;
      }
      goto L_0882F0DC;
    }
L_0882F0DC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
      if (branch_taken) {
          goto L_0882F104;
      }
      goto L_0882F0E8;
    }
L_0882F0E8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0882F200;
      }
      goto L_0882F0F4;
    }
L_0882F0F4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882F11C;
      }
      goto L_0882F0FC;
    }
L_0882F0FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F144;
      }
      goto L_0882F104;
    }
L_0882F104:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
      if (branch_taken) {
          goto L_0882F188;
      }
      goto L_0882F10C;
    }
L_0882F10C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882F1DC;
      }
      goto L_0882F114;
    }
L_0882F114:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F200;
      }
      goto L_0882F11C;
    }
L_0882F11C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882F134;
      }
      goto L_0882F12C;
    }
L_0882F12C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0882F13C;
      }
      goto L_0882F134;
    }
L_0882F134:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0882F13C;
L_0882F13C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F200;
      }
      goto L_0882F144;
    }
L_0882F144:
    ctx.gpr[31] = (0x0882F14Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 89u, 0x088A84BCu>(ctx, &aot_mem) && ctx.pc == 0x0882F14Cu) goto L_0882F14C;
    return;
L_0882F14C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882F16C;
      }
      goto L_0882F158;
    }
L_0882F158:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0882F164u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 88u, 0x088A84B4u>(ctx, &aot_mem) && ctx.pc == 0x0882F164u) goto L_0882F164;
    return;
L_0882F164:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F180;
      }
      goto L_0882F16C;
    }
L_0882F16C:
    ctx.gpr[31] = (0x0882F174u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 89u, 0x088A84BCu>(ctx, &aot_mem) && ctx.pc == 0x0882F174u) goto L_0882F174;
    return;
L_0882F174:
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x0882F180u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 88u, 0x088A84B4u>(ctx, &aot_mem) && ctx.pc == 0x0882F180u) goto L_0882F180;
    return;
L_0882F180:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F200;
      }
      goto L_0882F188;
    }
L_0882F188:
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(54)));
    ctx.gpr[20] = (2225u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-11572));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_0882F19C;
L_0882F19C:
    ctx.gpr[31] = (0x0882F1A4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 429u, 0x08932218u>(ctx, &aot_mem) && ctx.pc == 0x0882F1A4u) goto L_0882F1A4;
    return;
L_0882F1A4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882F1D4;
      }
      goto L_0882F1AC;
    }
L_0882F1AC:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0882F1B8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 407u, 0x0882B86Cu>(ctx, &aot_mem) && ctx.pc == 0x0882F1B8u) goto L_0882F1B8;
    return;
L_0882F1B8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] < static_cast<std::uint32_t>(217) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882F1CC;
      }
      goto L_0882F1C8;
    }
L_0882F1C8:
    ctx.gpr[18] = (0u | 130u);
    goto L_0882F1CC;
L_0882F1CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0882F19C;
      }
      goto L_0882F1D4;
    }
L_0882F1D4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(54), static_cast<std::uint16_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_0882F200;
      }
      goto L_0882F1DC;
    }
L_0882F1DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
      if (branch_taken) {
          goto L_0882F1F8;
      }
      goto L_0882F1EC;
    }
L_0882F1EC:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0882F200;
      }
      goto L_0882F1F8;
    }
L_0882F1F8:
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    goto L_0882F200;
L_0882F200:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F3FC;
      }
      goto L_0882F208;
    }
L_0882F208:
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0882F238;
      }
      goto L_0882F214;
    }
L_0882F214:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_0882F230;
      }
      goto L_0882F224;
    }
L_0882F224:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0882F238;
      }
      goto L_0882F230;
    }
L_0882F230:
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    goto L_0882F238;
L_0882F238:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F3FC;
      }
      goto L_0882F240;
    }
L_0882F240:
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0882F288;
      }
      goto L_0882F24C;
    }
L_0882F24C:
    ctx.gpr[31] = (0x0882F254u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 89u, 0x088A84BCu>(ctx, &aot_mem) && ctx.pc == 0x0882F254u) goto L_0882F254;
    return;
L_0882F254:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882F274;
      }
      goto L_0882F260;
    }
L_0882F260:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0882F26Cu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 88u, 0x088A84B4u>(ctx, &aot_mem) && ctx.pc == 0x0882F26Cu) goto L_0882F26C;
    return;
L_0882F26C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F288;
      }
      goto L_0882F274;
    }
L_0882F274:
    ctx.gpr[31] = (0x0882F27Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 89u, 0x088A84BCu>(ctx, &aot_mem) && ctx.pc == 0x0882F27Cu) goto L_0882F27C;
    return;
L_0882F27C:
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x0882F288u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 88u, 0x088A84B4u>(ctx, &aot_mem) && ctx.pc == 0x0882F288u) goto L_0882F288;
    return;
L_0882F288:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F3FC;
      }
      goto L_0882F290;
    }
L_0882F290:
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0882F2D8;
      }
      goto L_0882F29C;
    }
L_0882F29C:
    ctx.gpr[31] = (0x0882F2A4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 95u, 0x088A84ECu>(ctx, &aot_mem) && ctx.pc == 0x0882F2A4u) goto L_0882F2A4;
    return;
L_0882F2A4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 20000 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882F2C4;
      }
      goto L_0882F2B0;
    }
L_0882F2B0:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0882F2BCu);
    ctx.gpr[5] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 94u, 0x088A84E4u>(ctx, &aot_mem) && ctx.pc == 0x0882F2BCu) goto L_0882F2BC;
    return;
L_0882F2BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F2D8;
      }
      goto L_0882F2C4;
    }
L_0882F2C4:
    ctx.gpr[31] = (0x0882F2CCu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 95u, 0x088A84ECu>(ctx, &aot_mem) && ctx.pc == 0x0882F2CCu) goto L_0882F2CC;
    return;
L_0882F2CC:
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(1000));
    ctx.gpr[31] = (0x0882F2D8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 94u, 0x088A84E4u>(ctx, &aot_mem) && ctx.pc == 0x0882F2D8u) goto L_0882F2D8;
    return;
L_0882F2D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F3FC;
      }
      goto L_0882F2E0;
    }
L_0882F2E0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_0882F300;
      }
      goto L_0882F2EC;
    }
L_0882F2EC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882F3C4;
      }
      goto L_0882F2F8;
    }
L_0882F2F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F318;
      }
      goto L_0882F300;
    }
L_0882F300:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
      if (branch_taken) {
          goto L_0882F35C;
      }
      goto L_0882F308;
    }
L_0882F308:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882F3A0;
      }
      goto L_0882F310;
    }
L_0882F310:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F3C4;
      }
      goto L_0882F318;
    }
L_0882F318:
    ctx.gpr[31] = (0x0882F320u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 93u, 0x088A84DCu>(ctx, &aot_mem) && ctx.pc == 0x0882F320u) goto L_0882F320;
    return;
L_0882F320:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882F340;
      }
      goto L_0882F32C;
    }
L_0882F32C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0882F338u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 92u, 0x088A84D4u>(ctx, &aot_mem) && ctx.pc == 0x0882F338u) goto L_0882F338;
    return;
L_0882F338:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F354;
      }
      goto L_0882F340;
    }
L_0882F340:
    ctx.gpr[31] = (0x0882F348u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 93u, 0x088A84DCu>(ctx, &aot_mem) && ctx.pc == 0x0882F348u) goto L_0882F348;
    return;
L_0882F348:
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x0882F354u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 92u, 0x088A84D4u>(ctx, &aot_mem) && ctx.pc == 0x0882F354u) goto L_0882F354;
    return;
L_0882F354:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F3C4;
      }
      goto L_0882F35C;
    }
L_0882F35C:
    ctx.gpr[31] = (0x0882F364u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 91u, 0x088A84CCu>(ctx, &aot_mem) && ctx.pc == 0x0882F364u) goto L_0882F364;
    return;
L_0882F364:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 60 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882F384;
      }
      goto L_0882F370;
    }
L_0882F370:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0882F37Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 90u, 0x088A84C4u>(ctx, &aot_mem) && ctx.pc == 0x0882F37Cu) goto L_0882F37C;
    return;
L_0882F37C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F398;
      }
      goto L_0882F384;
    }
L_0882F384:
    ctx.gpr[31] = (0x0882F38Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 91u, 0x088A84CCu>(ctx, &aot_mem) && ctx.pc == 0x0882F38Cu) goto L_0882F38C;
    return;
L_0882F38C:
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x0882F398u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 90u, 0x088A84C4u>(ctx, &aot_mem) && ctx.pc == 0x0882F398u) goto L_0882F398;
    return;
L_0882F398:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F3C4;
      }
      goto L_0882F3A0;
    }
L_0882F3A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_0882F3BC;
      }
      goto L_0882F3B0;
    }
L_0882F3B0:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0882F3C4;
      }
      goto L_0882F3BC;
    }
L_0882F3BC:
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    goto L_0882F3C4;
L_0882F3C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F3FC;
      }
      goto L_0882F3CC;
    }
L_0882F3CC:
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0882F3FC;
      }
      goto L_0882F3D8;
    }
L_0882F3D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_0882F3F4;
      }
      goto L_0882F3E8;
    }
L_0882F3E8:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0882F3FC;
      }
      goto L_0882F3F4;
    }
L_0882F3F4:
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    goto L_0882F3FC;
L_0882F3FC:
    ctx.gpr[31] = (0x0882F404u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x0882F404u) goto L_0882F404;
    return;
L_0882F404:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0882F424;
      }
      goto L_0882F414;
    }
L_0882F414:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_0882F428;
      }
      goto L_0882F420;
    }
L_0882F420:
    ctx.gpr[5] = (0u | 1u);
    goto L_0882F424;
L_0882F424:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_0882F428;
L_0882F428:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F618;
      }
      goto L_0882F430;
    }
L_0882F430:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0882F444;
      }
      goto L_0882F43C;
    }
L_0882F43C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_0882F45C;
      }
      goto L_0882F444;
    }
L_0882F444:
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0882F45C;
      }
      goto L_0882F450;
    }
L_0882F450:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882F45Cu);
    ctx.gpr[5] = (0u | 0u);
    goto L_0882C9C0;
L_0882F45C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F618;
      }
      goto L_0882F464;
    }
L_0882F464:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(18))))));
        goto L_0882F480;
    }
    goto L_0882F470;
L_0882F470:
    ctx.gpr[31] = (0x0882F478u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x0882F478u) goto L_0882F478;
    return;
L_0882F478:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(18))))));
    goto L_0882F480;
L_0882F480:
    ctx.gpr[5] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0882F4AC;
      }
      goto L_0882F48C;
    }
L_0882F48C:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[6] = (0u | 1u);
        goto L_0882F4B0;
    }
    goto L_0882F498;
L_0882F498:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.gpr[9] = (2209u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-26624));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[8];
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_0882F4B4;
      }
      goto L_0882F4AC;
    }
L_0882F4AC:
    ctx.gpr[6] = (0u | 1u);
    goto L_0882F4B0;
L_0882F4B0:
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    goto L_0882F4B4;
L_0882F4B4:
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
        goto L_0882F514;
    }
    goto L_0882F4BC;
L_0882F4BC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882F4E4;
      }
      goto L_0882F4C4;
    }
L_0882F4C4:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882F4E4;
      }
      goto L_0882F4D0;
    }
L_0882F4D0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (2209u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-26616));
    if (ctx.gpr[8] == ctx.gpr[6]) {
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
        goto L_0882F514;
    }
    goto L_0882F4E4;
L_0882F4E4:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (0u | 1u);
        goto L_0882F510;
    }
    goto L_0882F4EC;
L_0882F4EC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (0u | 1u);
        goto L_0882F510;
    }
    goto L_0882F4F8;
L_0882F4F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (2209u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-25968));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_0882F514;
      }
      goto L_0882F50C;
    }
L_0882F50C:
    ctx.gpr[5] = (0u | 1u);
    goto L_0882F510;
L_0882F510:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_0882F514;
L_0882F514:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F618;
      }
      goto L_0882F51C;
    }
L_0882F51C:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882F530;
      }
      goto L_0882F524;
    }
L_0882F524:
    ctx.gpr[31] = (0x0882F52Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x0882F52Cu) goto L_0882F52C;
    return;
L_0882F52C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    goto L_0882F530;
L_0882F530:
    ctx.gpr[31] = (0x0882F538u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 299u, 0x08A09328u>(ctx, &aot_mem) && ctx.pc == 0x0882F538u) goto L_0882F538;
    return;
L_0882F538:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0882F58C;
      }
      goto L_0882F544;
    }
L_0882F544:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F598;
      }
      goto L_0882F55C;
    }
L_0882F55C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882F574;
      }
      goto L_0882F568;
    }
L_0882F568:
    ctx.gpr[31] = (0x0882F570u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x0882F570u) goto L_0882F570;
    return;
L_0882F570:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    goto L_0882F574;
L_0882F574:
    ctx.gpr[31] = (0x0882F57Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 310u, 0x08A09408u>(ctx, &aot_mem) && ctx.pc == 0x0882F57Cu) goto L_0882F57C;
    return;
L_0882F57C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F598;
      }
      goto L_0882F588;
    }
L_0882F588:
    ctx.gpr[4] = (2227u << 16u);
    goto L_0882F58C;
L_0882F58C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16654)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F618;
      }
      goto L_0882F598;
    }
L_0882F598:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(88));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0882F5ACu);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x0882F5ACu) goto L_0882F5AC;
    return;
L_0882F5AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(120));
      if (branch_taken) {
          goto L_0882F5C4;
      }
      goto L_0882F5B8;
    }
L_0882F5B8:
    ctx.gpr[31] = (0x0882F5C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x0882F5C0u) goto L_0882F5C0;
    return;
L_0882F5C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    goto L_0882F5C4;
L_0882F5C4:
    ctx.gpr[31] = (0x0882F5CCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 126u, 0x08A088B4u>(ctx, &aot_mem) && ctx.pc == 0x0882F5CCu) goto L_0882F5CC;
    return;
L_0882F5CC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 17u);
    goto L_0882F5D8;
L_0882F5D8:
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[18] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0882F5D8;
      }
      goto L_0882F5FC;
    }
L_0882F5FC:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1800));
    ctx.gpr[31] = (0x0882F618u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1808));
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 488u, 0x0882BD3Cu>(ctx, &aot_mem) && ctx.pc == 0x0882F618u) goto L_0882F618;
    return;
L_0882F618:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882F624u);
    ctx.gpr[5] = (0u | 0u);
    goto L_0882CB8C;
L_0882F624:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882F63C;
      }
      goto L_0882F630;
    }
L_0882F630:
    ctx.gpr[31] = (0x0882F638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x0882F638u) goto L_0882F638;
    return;
L_0882F638:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    goto L_0882F63C;
L_0882F63C:
    ctx.gpr[31] = (0x0882F644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 603u, 0x08A0AA2Cu>(ctx, &aot_mem) && ctx.pc == 0x0882F644u) goto L_0882F644;
    return;
L_0882F644:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882F65C;
      }
      goto L_0882F650;
    }
L_0882F650:
    ctx.gpr[31] = (0x0882F658u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x0882F658u) goto L_0882F658;
    return;
L_0882F658:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    goto L_0882F65C;
L_0882F65C:
    ctx.gpr[31] = (0x0882F664u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 126u, 0x08A088B4u>(ctx, &aot_mem) && ctx.pc == 0x0882F664u) goto L_0882F664;
    return;
L_0882F664:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0882F674u);
    ctx.gpr[6] = (0u | 136u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 371u, 0x08AED4A0u>(ctx, &aot_mem) && ctx.pc == 0x0882F674u) goto L_0882F674;
    return;
L_0882F674:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F698;
      }
      goto L_0882F67C;
    }
L_0882F67C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0882F688u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11536));
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 407u, 0x0882B86Cu>(ctx, &aot_mem) && ctx.pc == 0x0882F688u) goto L_0882F688;
    return;
L_0882F688:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(88));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0882F698u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x0882F698u) goto L_0882F698;
    return;
L_0882F698:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882F6CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(980), ctx.gpr[23]);
    ctx.gpr[23] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(956), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-4576));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(952), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(928), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(932), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(936), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(940), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(944), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(948), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(960), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(964), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(968), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(972), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(976), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(984), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(988), ctx.gpr[31]);
    ctx.gpr[31] = (0x0882F72Cu);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 348u, 0x08AD97E4u>(ctx, &aot_mem) && ctx.pc == 0x0882F72Cu) goto L_0882F72C;
    return;
L_0882F72C:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 118u);
    ctx.gpr[6] = (0u | 176u);
    ctx.gpr[31] = (0x0882F744u);
    ctx.gpr[7] = (0u | 220u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0882F744u) goto L_0882F744;
    return;
L_0882F744:
    ctx.gpr[31] = (0x0882F74Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x0882F74Cu) goto L_0882F74C;
    return;
L_0882F74C:
    ctx.gpr[31] = (0x0882F754u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x0882F754u) goto L_0882F754;
    return;
L_0882F754:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0882F760u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 348u, 0x08AD97E4u>(ctx, &aot_mem) && ctx.pc == 0x0882F760u) goto L_0882F760;
    return;
L_0882F760:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0882F778u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0882F778u) goto L_0882F778;
    return;
L_0882F778:
    ctx.gpr[31] = (0x0882F780u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A550ACu>(ctx, &aot_mem) && ctx.pc == 0x0882F780u) goto L_0882F780;
    return;
L_0882F780:
    ctx.gpr[30] = (0u | 1u);
    ctx.gpr[31] = (0x0882F78Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x0882F78Cu) goto L_0882F78C;
    return;
L_0882F78C:
    ctx.gpr[4] = (16058u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 34854u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16202u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49283u);
    ctx.gpr[31] = (0x0882F7A8u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x0882F7A8u) goto L_0882F7A8;
    return;
L_0882F7A8:
    ctx.gpr[31] = (0x0882F7B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 206u, 0x08A54EE8u>(ctx, &aot_mem) && ctx.pc == 0x0882F7B0u) goto L_0882F7B0;
    return;
L_0882F7B0:
    ctx.gpr[5] = (17382u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17264u << 16u);
    ctx.gpr[16] = (2230u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[19] = (2232u << 16u);
    ctx.gpr[5] = (17000u << 16u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(5992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(924), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (2227u << 16u);
      if (branch_taken) {
          goto L_0882F7F0;
      }
      goto L_0882F7E8;
    }
L_0882F7E8:
    ctx.gpr[31] = (0x0882F7F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x0882F7F0u) goto L_0882F7F0;
    return;
L_0882F7F0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(912), ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FE44;
      }
      goto L_0882F810;
    }
L_0882F810:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(920), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0882F824u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 348u, 0x08AD97E4u>(ctx, &aot_mem) && ctx.pc == 0x0882F824u) goto L_0882F824;
    return;
L_0882F824:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(604));
    ctx.gpr[5] = (0u | 118u);
    ctx.gpr[6] = (0u | 176u);
    ctx.gpr[31] = (0x0882F83Cu);
    ctx.gpr[7] = (0u | 220u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0882F83Cu) goto L_0882F83C;
    return;
L_0882F83C:
    ctx.gpr[31] = (0x0882F844u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x0882F844u) goto L_0882F844;
    return;
L_0882F844:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (17342u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_0882F880;
      }
      goto L_0882F858;
    }
L_0882F858:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0882F864u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0882F864u) goto L_0882F864;
    return;
L_0882F864:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F87C;
      }
      goto L_0882F870;
    }
L_0882F870:
    ctx.gpr[31] = (0x0882F878u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0882F878u) goto L_0882F878;
    return;
L_0882F878:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0882F87C;
L_0882F87C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    goto L_0882F880;
L_0882F880:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(912), ctx.gpr[19]);
    ctx.gpr[31] = (0x0882F894u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11492));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0882F894u) goto L_0882F894;
    return;
L_0882F894:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0882F8A8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0882F8A8u) goto L_0882F8A8;
    return;
L_0882F8A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882F8C4;
      }
      goto L_0882F8C0;
    }
L_0882F8C0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(920), ctx.gpr[30]);
    goto L_0882F8C4;
L_0882F8C4:
    ctx.gpr[31] = (0x0882F8CCu);
    ctx.gpr[4] = (0u | 0u);
    goto L_0882C8D0;
L_0882F8CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(920)));
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(1160));
      if (branch_taken) {
          goto L_0882FE38;
      }
      goto L_0882F8E0;
    }
L_0882F8E0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(908), ctx.gpr[4]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11484));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(904), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(900), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(896), ctx.gpr[4]);
    ctx.gpr[4] = (17348u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1884));
    ctx.gpr[4] = (16688u << 16u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(612));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(636));
    ctx.gpr[19] = (0u | 13u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(916), ctx.gpr[5]);
    goto L_0882F934;
L_0882F934:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(912)));
    ctx.gpr[4] = (ctx.gpr[30] & 65535u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(892), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(916)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (2227u << 16u);
      if (branch_taken) {
          goto L_0882FA74;
      }
      goto L_0882F95C;
    }
L_0882F95C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0882F968u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 100u, 0x088A8514u>(ctx, &aot_mem) && ctx.pc == 0x0882F968u) goto L_0882F968;
    return;
L_0882F968:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(608));
    ctx.gpr[31] = (0x0882F978u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(608), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x0882F978u) goto L_0882F978;
    return;
L_0882F978:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882F9FC;
      }
      goto L_0882F980;
    }
L_0882F980:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(61));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
      if (branch_taken) {
          goto L_0882F9C0;
      }
      goto L_0882F998;
    }
L_0882F998:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0882F9A4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0882F9A4u) goto L_0882F9A4;
    return;
L_0882F9A4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F9BC;
      }
      goto L_0882F9B0;
    }
L_0882F9B0:
    ctx.gpr[31] = (0x0882F9B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0882F9B8u) goto L_0882F9B8;
    return;
L_0882F9B8:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0882F9BC;
L_0882F9BC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    goto L_0882F9C0;
L_0882F9C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x0882F9CCu);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 97u, 0x088A84FCu>(ctx, &aot_mem) && ctx.pc == 0x0882F9CCu) goto L_0882F9CC;
    return;
L_0882F9CC:
    ctx.gpr[4] = (ctx.gpr[2] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0882F9E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0882F9E0u) goto L_0882F9E0;
    return;
L_0882F9E0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0882F9F4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0882F9F4u) goto L_0882F9F4;
    return;
L_0882F9F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FA70;
      }
      goto L_0882F9FC;
    }
L_0882F9FC:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(61));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
      if (branch_taken) {
          goto L_0882FA3C;
      }
      goto L_0882FA14;
    }
L_0882FA14:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0882FA20u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0882FA20u) goto L_0882FA20;
    return;
L_0882FA20:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FA38;
      }
      goto L_0882FA2C;
    }
L_0882FA2C:
    ctx.gpr[31] = (0x0882FA34u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0882FA34u) goto L_0882FA34;
    return;
L_0882FA34:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0882FA38;
L_0882FA38:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    goto L_0882FA3C;
L_0882FA3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x0882FA48u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 99u, 0x088A850Cu>(ctx, &aot_mem) && ctx.pc == 0x0882FA48u) goto L_0882FA48;
    return;
L_0882FA48:
    ctx.gpr[4] = (ctx.gpr[2] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0882FA5Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0882FA5Cu) goto L_0882FA5C;
    return;
L_0882FA5C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0882FA70u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0882FA70u) goto L_0882FA70;
    return;
L_0882FA70:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(13));
    goto L_0882FA74;
L_0882FA74:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    goto L_0882FA7C;
L_0882FA7C:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
        goto L_0882FA98;
    }
    goto L_0882FA8C;
L_0882FA8C:
    ctx.gpr[31] = (0x0882FA94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x0882FA94u) goto L_0882FA94;
    return;
L_0882FA94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    goto L_0882FA98;
L_0882FA98:
    ctx.gpr[31] = (0x0882FAA0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 126u, 0x08A088B4u>(ctx, &aot_mem) && ctx.pc == 0x0882FAA0u) goto L_0882FAA0;
    return;
L_0882FAA0:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(612), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(614), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(615), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (ctx.gpr[2] + static_cast<std::uint32_t>(10));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(616), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(617), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0882FAF8;
      }
      goto L_0882FAD4;
    }
L_0882FAD4:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_0882FAFC;
    }
    goto L_0882FAE4;
L_0882FAE4:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0882FAFC;
      }
      goto L_0882FAF4;
    }
L_0882FAF4:
    ctx.gpr[4] = (0u | 1u);
    goto L_0882FAF8;
L_0882FAF8:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0882FAFC;
L_0882FAFC:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FE14;
      }
      goto L_0882FB0C;
    }
L_0882FB0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
        goto L_0882FB24;
    }
    goto L_0882FB18;
L_0882FB18:
    ctx.gpr[31] = (0x0882FB20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x0882FB20u) goto L_0882FB20;
    return;
L_0882FB20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    goto L_0882FB24;
L_0882FB24:
    ctx.gpr[31] = (0x0882FB2Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 126u, 0x08A088B4u>(ctx, &aot_mem) && ctx.pc == 0x0882FB2Cu) goto L_0882FB2C;
    return;
L_0882FB2C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_0882FB5C;
      }
      goto L_0882FB40;
    }
L_0882FB40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(912)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882FE14;
      }
      goto L_0882FB5C;
    }
L_0882FB5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882FB70;
      }
      goto L_0882FB68;
    }
L_0882FB68:
    ctx.gpr[31] = (0x0882FB70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x0882FB70u) goto L_0882FB70;
    return;
L_0882FB70:
    ctx.gpr[31] = (0x0882FB78u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 289u, 0x08A0928Cu>(ctx, &aot_mem) && ctx.pc == 0x0882FB78u) goto L_0882FB78;
    return;
L_0882FB78:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_0882FBB0;
      }
      goto L_0882FB8C;
    }
L_0882FB8C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[4] = (ctx.gpr[7] & 255u);
        goto L_0882FBB4;
    }
    goto L_0882FB9C;
L_0882FB9C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[7] & 255u);
      if (branch_taken) {
          goto L_0882FBB4;
      }
      goto L_0882FBAC;
    }
L_0882FBAC:
    ctx.gpr[7] = (0u | 1u);
    goto L_0882FBB0;
L_0882FBB0:
    ctx.gpr[4] = (ctx.gpr[7] & 255u);
    goto L_0882FBB4;
L_0882FBB4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FC04;
      }
      goto L_0882FBBC;
    }
L_0882FBBC:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0882FBC8u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 348u, 0x08AD97E4u>(ctx, &aot_mem) && ctx.pc == 0x0882FBC8u) goto L_0882FBC8;
    return;
L_0882FBC8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(660));
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x0882FBE0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0882FBE0u) goto L_0882FBE0;
    return;
L_0882FBE0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(624), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(625), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(626), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(627), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0882FC90;
      }
      goto L_0882FC04;
    }
L_0882FC04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(912)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FC4C;
      }
      goto L_0882FC20;
    }
L_0882FC20:
    ctx.gpr[31] = (0x0882FC28u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(892)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 100u, 0x088A8514u>(ctx, &aot_mem) && ctx.pc == 0x0882FC28u) goto L_0882FC28;
    return;
L_0882FC28:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(624), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(625), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(626), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(627), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0882FC90;
      }
      goto L_0882FC4C;
    }
L_0882FC4C:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0882FC58u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 348u, 0x08AD97E4u>(ctx, &aot_mem) && ctx.pc == 0x0882FC58u) goto L_0882FC58;
    return;
L_0882FC58:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(664));
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[5] = (0u | 118u);
    ctx.gpr[6] = (0u | 176u);
    ctx.gpr[31] = (0x0882FC70u);
    ctx.gpr[7] = (0u | 220u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0882FC70u) goto L_0882FC70;
    return;
L_0882FC70:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(624), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(625), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(626), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(627), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0882FC90;
L_0882FC90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(620));
    ctx.gpr[31] = (0x0882FCA0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(620), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x0882FCA0u) goto L_0882FCA0;
    return;
L_0882FCA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
        goto L_0882FCB8;
    }
    goto L_0882FCAC;
L_0882FCAC:
    ctx.gpr[31] = (0x0882FCB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x0882FCB4u) goto L_0882FCB4;
    return;
L_0882FCB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    goto L_0882FCB8;
L_0882FCB8:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(628));
    ctx.gpr[31] = (0x0882FCC4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 222u, 0x08A08E2Cu>(ctx, &aot_mem) && ctx.pc == 0x0882FCC4u) goto L_0882FCC4;
    return;
L_0882FCC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(628)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882FD90;
      }
      goto L_0882FCD8;
    }
L_0882FCD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(632)));
    ctx.gpr[31] = (0x0882FCE4u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 14u, 0x08A541B8u>(ctx, &aot_mem) && ctx.pc == 0x0882FCE4u) goto L_0882FCE4;
    return;
L_0882FCE4:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(61));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0882FD00u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0882FD00u) goto L_0882FD00;
    return;
L_0882FD00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
        goto L_0882FD18;
    }
    goto L_0882FD0C;
L_0882FD0C:
    ctx.gpr[31] = (0x0882FD14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x0882FD14u) goto L_0882FD14;
    return;
L_0882FD14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    goto L_0882FD18;
L_0882FD18:
    ctx.gpr[31] = (0x0882FD20u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 126u, 0x08A088B4u>(ctx, &aot_mem) && ctx.pc == 0x0882FD20u) goto L_0882FD20;
    return;
L_0882FD20:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_0882FD58;
      }
      goto L_0882FD34;
    }
L_0882FD34:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[4] = (ctx.gpr[7] & 255u);
        goto L_0882FD5C;
    }
    goto L_0882FD44;
L_0882FD44:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[7] & 255u);
      if (branch_taken) {
          goto L_0882FD5C;
      }
      goto L_0882FD54;
    }
L_0882FD54:
    ctx.gpr[7] = (0u | 1u);
    goto L_0882FD58;
L_0882FD58:
    ctx.gpr[4] = (ctx.gpr[7] & 255u);
    goto L_0882FD5C;
L_0882FD5C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FDF8;
      }
      goto L_0882FD64;
    }
L_0882FD64:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(61));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(624));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(908)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x0882FD88u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 897u, 0x08AD39E0u>(ctx, &aot_mem) && ctx.pc == 0x0882FD88u) goto L_0882FD88;
    return;
L_0882FD88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FDF8;
      }
      goto L_0882FD90;
    }
L_0882FD90:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(61));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
      if (branch_taken) {
          goto L_0882FDD8;
      }
      goto L_0882FDAC;
    }
L_0882FDAC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0882FDB8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0882FDB8u) goto L_0882FDB8;
    return;
L_0882FDB8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FDD0;
      }
      goto L_0882FDC4;
    }
L_0882FDC4:
    ctx.gpr[31] = (0x0882FDCCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0882FDCCu) goto L_0882FDCC;
    return;
L_0882FDCC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0882FDD0;
L_0882FDD0:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    goto L_0882FDD8;
L_0882FDD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0882FDE4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(904)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0882FDE4u) goto L_0882FDE4;
    return;
L_0882FDE4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0882FDF8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0882FDF8u) goto L_0882FDF8;
    return;
L_0882FDF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(632)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(13));
      if (branch_taken) {
          goto L_0882FE14;
      }
      goto L_0882FE08;
    }
L_0882FE08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(896)));
    ctx.gpr[31] = (0x0882FE14u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(632)));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x0882FE14u) goto L_0882FE14;
    return;
L_0882FE14:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_0882FA7C;
      }
      goto L_0882FE24;
    }
L_0882FE24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(920)));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882F934;
      }
      goto L_0882FE38;
    }
L_0882FE38:
    ctx.gpr[4] = (17264u << 16u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0882FE44;
L_0882FE44:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(924)));
    ctx.gpr[5] = (17000u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[31] = (0x0882FE60u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0882C8D0;
L_0882FE60:
    ctx.gpr[31] = (0x0882FE68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 207u, 0x08A54EF8u>(ctx, &aot_mem) && ctx.pc == 0x0882FE68u) goto L_0882FE68;
    return;
L_0882FE68:
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[5] = (17164u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[30] = (0u | 1u);
      if (branch_taken) {
          goto L_0882FEA8;
      }
      goto L_0882FE80;
    }
L_0882FE80:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0882FE8Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0882FE8Cu) goto L_0882FE8C;
    return;
L_0882FE8C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FEA4;
      }
      goto L_0882FE98;
    }
L_0882FE98:
    ctx.gpr[31] = (0x0882FEA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0882FEA0u) goto L_0882FEA0;
    return;
L_0882FEA0:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0882FEA4;
L_0882FEA4:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    goto L_0882FEA8;
L_0882FEA8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0882FEB8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11476));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0882FEB8u) goto L_0882FEB8;
    return;
L_0882FEB8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0882FECCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0882FECCu) goto L_0882FECC;
    return;
L_0882FECC:
    ctx.gpr[31] = (0x0882FED4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 208u, 0x08A54F14u>(ctx, &aot_mem) && ctx.pc == 0x0882FED4u) goto L_0882FED4;
    return;
L_0882FED4:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(912)));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11468));
    ctx.gpr[31] = (0x0882FEE8u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 83u, 0x088A848Cu>(ctx, &aot_mem) && ctx.pc == 0x0882FEE8u) goto L_0882FEE8;
    return;
L_0882FEE8:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(548));
    ctx.gpr[6] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0882FEFCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x0882FEFCu) goto L_0882FEFC;
    return;
L_0882FEFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[5] = (17169u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_0882FF34;
      }
      goto L_0882FF0C;
    }
L_0882FF0C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0882FF18u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0882FF18u) goto L_0882FF18;
    return;
L_0882FF18:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FF30;
      }
      goto L_0882FF24;
    }
L_0882FF24:
    ctx.gpr[31] = (0x0882FF2Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0882FF2Cu) goto L_0882FF2C;
    return;
L_0882FF2C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0882FF30;
L_0882FF30:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    goto L_0882FF34;
L_0882FF34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0882FF40u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0882FF40u) goto L_0882FF40;
    return;
L_0882FF40:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0882FF54u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0882FF54u) goto L_0882FF54;
    return;
L_0882FF54:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0882FF64u);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11460));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 83u, 0x088A848Cu>(ctx, &aot_mem) && ctx.pc == 0x0882FF64u) goto L_0882FF64;
    return;
L_0882FF64:
    ctx.gpr[6] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0882FF74u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x0882FF74u) goto L_0882FF74;
    return;
L_0882FF74:
    ctx.gpr[31] = (0x0882FF7Cu);
    ctx.gpr[4] = (0u | 0u);
    goto L_0882C8D0;
L_0882FF7C:
    ctx.gpr[31] = (0x0882FF84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54ECCu>(ctx, &aot_mem) && ctx.pc == 0x0882FF84u) goto L_0882FF84;
    return;
L_0882FF84:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0882FF90u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 348u, 0x08AD97E4u>(ctx, &aot_mem) && ctx.pc == 0x0882FF90u) goto L_0882FF90;
    return;
L_0882FF90:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (0u | 217u);
    ctx.gpr[6] = (0u | 174u);
    ctx.gpr[31] = (0x0882FFA8u);
    ctx.gpr[7] = (0u | 87u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0882FFA8u) goto L_0882FFA8;
    return;
L_0882FFA8:
    ctx.gpr[31] = (0x0882FFB0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x0882FFB0u) goto L_0882FFB0;
    return;
L_0882FFB0:
    ctx.gpr[31] = (0x0882FFB8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 214u, 0x08A54F6Cu>(ctx, &aot_mem) && ctx.pc == 0x0882FFB8u) goto L_0882FFB8;
    return;
L_0882FFB8:
    ctx.gpr[31] = (0x0882FFC0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A54FACu>(ctx, &aot_mem) && ctx.pc == 0x0882FFC0u) goto L_0882FFC0;
    return;
L_0882FFC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24700)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24700)));
        goto L_0882FFF8;
    }
    goto L_0882FFCC;
L_0882FFCC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0882FFD8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0882FFD8u) goto L_0882FFD8;
    return;
L_0882FFD8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FFF0;
      }
      goto L_0882FFE4;
    }
L_0882FFE4:
    ctx.gpr[31] = (0x0882FFECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0882FFECu) goto L_0882FFEC;
    return;
L_0882FFEC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0882FFF0;
L_0882FFF0:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24700)));
    goto L_0882FFF8;
L_0882FFF8:
    ctx.gpr[31] = (0x08830000u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0010(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0010_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_10(Runtime &runtime) {
    runtime.register_generated_unit(10u, 0x0882C000u, 16384u, &recomp_unit_0010, &recomp_unit_0010_entry);
    runtime.register_function(0x0882C000u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C010u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C02Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C034u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C03Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C048u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C050u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C058u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C060u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C068u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C07Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C084u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C0CCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C0D4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C0ECu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C0F4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C108u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C110u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C138u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C14Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C150u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C158u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C160u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C178u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C18Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C1ACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C1B0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C1B8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C1C0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C1C8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C1D0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C1DCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C1F0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C1F8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C204u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C21Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C22Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C234u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C23Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C244u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C24Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C254u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C268u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C284u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C28Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C294u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C29Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C2A4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C2C8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C2D0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C2E4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C2F0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C2F8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C300u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C308u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C314u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C31Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C324u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C32Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C334u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C33Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C354u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C378u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C37Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C384u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C38Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C3B0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C3B8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C3CCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C3DCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C3E0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C3E8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C3F4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C424u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C454u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C468u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C470u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C478u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C48Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C498u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C4A4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C4ACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C4B0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C4B8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C4C4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C4DCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C4E4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C4F4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C500u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C50Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C514u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C518u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C520u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C548u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C560u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C580u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C5B0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C5B8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C5D4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C5E8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C5F4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C5FCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C608u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C610u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C624u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C630u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C638u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C63Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C644u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C64Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C65Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C664u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C66Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C688u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C694u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C69Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C6A0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C6A8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C6B4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C6C0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C6CCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C6E0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C6E8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C6F8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C710u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C72Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C734u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C750u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C758u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C774u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C77Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C798u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C7A0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C7BCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C7C4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C7E0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C7E8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C804u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C80Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C824u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C82Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C834u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C83Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C850u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C864u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C870u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C87Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C888u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C890u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C894u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C89Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C8B0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C8D0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C8ECu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C908u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C910u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C924u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C93Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C944u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C94Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C958u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C970u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C978u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C980u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C98Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C9A4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C9ACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C9C0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C9ECu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C9F8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CA00u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CA08u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CA14u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CA30u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CA3Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CA48u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CA58u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CA60u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CA6Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CA74u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CA88u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CA90u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CAA0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CAA4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CABCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CAC8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CAD4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CADCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CAECu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CB04u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CB10u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CB18u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CB20u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CB30u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CB48u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CB50u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CB5Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CB64u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CB6Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CB74u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CB8Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CBBCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CBC0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CBC8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CBCCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CBD8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CBE0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CBF8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CBFCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CC14u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CC5Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CC64u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CC6Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CC74u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CC80u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CC94u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CC98u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CC9Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CCA4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CCACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CCB4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CCB8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CCC0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CCC8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CCD0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CCD8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CCECu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CCF8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CD10u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CD18u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CD1Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CD28u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CD34u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CD3Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CD44u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CD4Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CD58u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CD6Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CD70u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CD74u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CD7Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CD88u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CD90u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CD94u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CD9Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CDA8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CDB0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CDC0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CDC8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CDD0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CDD8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CDECu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CDF8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CE04u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CE0Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CE14u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CE1Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CE30u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CE3Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CE44u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CE4Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CE54u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CE64u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CE70u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CE74u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CE78u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CE80u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CE94u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CEA0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CEA8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CEB0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CEC0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CEC8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CEDCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CEF8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CF04u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CF10u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CF18u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CF1Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CF20u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CF30u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CF54u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CF60u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CF68u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CF70u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CF7Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CF88u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CF90u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CF98u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CFA0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CFACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CFC0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CFC4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CFC8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CFD0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CFDCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CFE4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CFE8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CFF0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CFFCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D004u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D014u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D01Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D02Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D034u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D048u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D054u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D060u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D068u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D070u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D078u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D08Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D09Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D0A4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D0ACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D0B4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D0C4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D0D0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D0D4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D0D8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D0E0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D0F4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D104u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D110u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D118u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D11Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D124u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D134u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D13Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D144u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D154u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D16Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D178u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D180u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D184u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D18Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D198u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D1A0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D1A8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D1B0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D1BCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D1C8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D1DCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D1E4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D1F0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D204u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D208u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D20Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D214u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D228u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D238u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D240u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D244u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D24Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D264u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D26Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D278u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D280u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D288u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D290u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D298u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D2A0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D2A4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D2ACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D2D4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D2E0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D2F0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D308u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D310u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D324u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D358u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D360u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D388u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D3F8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D400u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D404u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D410u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D41Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D430u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D434u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D438u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D440u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D44Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D454u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D464u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D470u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D47Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D498u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D49Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D4A8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D4B4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D4C0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D4C8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D4CCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D4D4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D4E0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D4F8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D50Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D518u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D524u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D540u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D544u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D550u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D55Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D568u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D570u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D574u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D57Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D588u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D5A0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D5A8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D5B8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D5D0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D5D8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D5E0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D5ECu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D604u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D60Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D614u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D624u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D630u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D63Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D644u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D64Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D658u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D670u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D678u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D680u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D68Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D694u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D69Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D6A8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D6B4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D6C0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D6CCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D6D4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D6D8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D6E0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D6ECu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D700u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D708u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D714u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D71Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D720u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D728u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D730u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D738u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D744u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D750u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D758u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D75Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D768u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D770u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D784u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D78Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D798u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D7A0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D7ACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D7B8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D7C0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D7C4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D7D0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D7D8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D7ECu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D7F8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D808u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D814u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D820u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D828u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D82Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D830u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D840u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D854u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D864u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D870u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D87Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D898u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D89Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D8A8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D8B4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D8C0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D8C8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D8CCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D8D4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D8E0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D8F8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D90Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D918u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D924u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D940u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D944u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D950u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D95Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D968u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D970u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D974u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D97Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D988u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D9A0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D9A8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D9B0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D9BCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D9C8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D9D0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D9D4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D9E0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D9E8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D9FCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DA04u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DA0Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DA24u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DA30u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DA64u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DAA0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DAB4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DABCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DAC0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DAC8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DB00u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DB08u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DB10u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DB34u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DB3Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DB44u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DB48u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DB50u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DB5Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DB64u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DB68u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DB70u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DB78u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DB80u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DB88u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DB90u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DB98u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DBB4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DBCCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DBD4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DBDCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DBE4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DBECu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DBF4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DC00u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DC14u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DC18u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DC1Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DC24u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DC2Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DC34u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DC3Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DC44u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DC50u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DC5Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DC70u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DC78u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DC84u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DC98u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DC9Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DCA0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DCA8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DCB0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DCB8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DCC0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DCC8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DCD0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DCF0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DCF8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DCFCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DD04u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DD0Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DD18u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DD20u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DD24u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DD2Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DD38u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DD40u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DD4Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DD54u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DD6Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DD7Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DD88u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DD90u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DD98u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DDA4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DDACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DDB4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DDBCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DDC8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DDD4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DDE8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DDF0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DDFCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DE10u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DE14u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DE18u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DE20u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DE38u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DE40u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DE50u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DE60u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DE68u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DE7Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DEB0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DEBCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DEC4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DECCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DED4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DEDCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DEF0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DF40u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DF4Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DF60u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DF8Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DF9Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DFC4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DFCCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DFD0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DFD8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DFE0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DFECu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DFF4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DFF8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E000u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E00Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E014u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E020u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E028u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E040u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E050u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E068u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E07Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E08Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E0A4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E0ACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E0B4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E0BCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E0C4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E0CCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E0D4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E0D8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E0E0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E0E8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E100u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E104u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E110u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E120u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E138u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E148u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E150u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E158u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E160u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E174u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E184u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E18Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E194u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E19Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E1A4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E1B8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E1C8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E1D4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E1DCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E1E4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E1ECu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E204u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E214u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E21Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E224u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E22Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E230u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E240u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E248u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E254u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E25Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E264u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E27Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E284u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E290u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E2A4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E2A8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E2B4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E2BCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E2C4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E2CCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E2D4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E2E8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E2ECu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E2F4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E300u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E308u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E310u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E318u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E320u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E324u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E330u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E338u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E340u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E34Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E358u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E36Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E370u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E374u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E37Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E384u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E390u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E3A4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E3ACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E3B8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E3CCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E3D0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E3D4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E3DCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E3E0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E3E8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E3F0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E3F8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E400u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E40Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E420u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E424u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E42Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E434u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E43Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E448u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E450u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E458u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E464u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E470u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E478u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E484u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E48Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E494u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E49Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E4A8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E4B0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E4B8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E4C4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E4CCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E4D8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E4E4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E4ECu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E4F4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E504u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E51Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E52Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E538u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E540u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E548u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E550u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E558u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E568u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E574u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E57Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E584u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E58Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E594u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E5A0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E5A8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E5B0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E5BCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E5C4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E5CCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E5D4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E5E0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E5E8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E5F0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E5FCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E604u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E614u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E620u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E628u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E630u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E648u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E650u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E65Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E668u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E670u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E678u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E688u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E690u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E698u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E6A4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E6ACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E6B4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E6C0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E6D8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E6E0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E6ECu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E6F8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E70Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E724u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E72Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E734u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E740u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E748u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E750u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E760u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E768u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E770u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E788u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E790u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E79Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E7A8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E7B0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E7B8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E7C8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E7D0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E7D8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E7E4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E7ECu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E7F4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E800u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E818u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E820u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E82Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E838u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E84Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E864u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E86Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E874u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E880u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E888u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E890u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E8A0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E8A8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E8B0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E8BCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E8C8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E8D0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E8D8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E8E0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E8E8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E8F0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E8FCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E908u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E910u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E918u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E920u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E92Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E938u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E940u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E948u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E954u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E95Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E970u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E978u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E980u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E98Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E99Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E9A0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E9A8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E9B0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E9C0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E9CCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E9D4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E9DCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E9E8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E9F8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EA04u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EA0Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EA14u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EA20u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EA2Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EA34u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EA3Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EA44u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EA4Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EA54u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EA5Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EA68u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EA70u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EA78u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EA84u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EA8Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EA94u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EA9Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EAA8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EAB0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EAB8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EAC4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EACCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EADCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EAE8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EAF0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EAF8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EB04u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EB0Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EB18u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EB24u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EB2Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EB34u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EB40u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EB48u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EB54u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EB5Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EB68u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EB74u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EB7Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EB84u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EB90u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EB98u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EBA4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EBB4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EBC0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EBC8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EBD0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EBD8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EBE0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EBE8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EBF0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EBFCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EC10u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EC14u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EC1Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EC24u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EC30u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EC3Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EC44u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EC4Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EC58u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EC64u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EC6Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EC78u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EC80u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EC8Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EC98u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882ECA0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882ECA8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882ECB0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882ECBCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882ECC4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882ECCCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882ECD8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882ECE0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882ECECu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882ECF8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882ED00u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882ED08u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882ED18u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882ED30u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882ED40u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882ED4Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882ED54u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882ED5Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882ED64u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882ED6Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882ED7Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882ED88u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882ED90u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882ED98u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EDA0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EDACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EDB8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EDC0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EDC8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EDD4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EDDCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EDE4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EDF0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EDFCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EE04u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EE0Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EE18u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EE20u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EE30u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EE3Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EE44u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EE4Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EE64u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EE6Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EE7Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EE88u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EE90u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EE98u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EEA8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EEB0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EEB8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EEC4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EECCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EED4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EEE0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EEF8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EF00u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EF0Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EF18u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EF2Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EF44u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EF4Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EF58u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EF64u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EF6Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EF74u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EF84u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EF8Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EF94u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EFACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EFB4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EFC4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EFD0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EFD8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EFE0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EFF0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EFF8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F000u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F00Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F014u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F01Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F028u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F040u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F048u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F054u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F060u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F074u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F08Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F094u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F0A0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F0ACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F0B4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F0BCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F0CCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F0D4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F0DCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F0E8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F0F4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F0FCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F104u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F10Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F114u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F11Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F12Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F134u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F13Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F144u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F14Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F158u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F164u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F16Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F174u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F180u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F188u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F19Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F1A4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F1ACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F1B8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F1C8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F1CCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F1D4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F1DCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F1ECu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F1F8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F200u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F208u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F214u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F224u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F230u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F238u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F240u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F24Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F254u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F260u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F26Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F274u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F27Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F288u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F290u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F29Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F2A4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F2B0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F2BCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F2C4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F2CCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F2D8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F2E0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F2ECu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F2F8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F300u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F308u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F310u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F318u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F320u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F32Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F338u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F340u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F348u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F354u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F35Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F364u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F370u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F37Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F384u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F38Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F398u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F3A0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F3B0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F3BCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F3C4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F3CCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F3D8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F3E8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F3F4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F3FCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F404u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F414u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F420u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F424u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F428u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F430u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F43Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F444u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F450u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F45Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F464u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F470u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F478u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F480u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F48Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F498u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F4ACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F4B0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F4B4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F4BCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F4C4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F4D0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F4E4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F4ECu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F4F8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F50Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F510u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F514u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F51Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F524u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F52Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F530u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F538u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F544u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F55Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F568u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F570u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F574u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F57Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F588u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F58Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F598u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F5ACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F5B8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F5C0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F5C4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F5CCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F5D8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F5FCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F618u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F624u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F630u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F638u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F63Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F644u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F650u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F658u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F65Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F664u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F674u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F67Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F688u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F698u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F6CCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F72Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F744u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F74Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F754u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F760u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F778u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F780u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F78Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F7A8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F7B0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F7E8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F7F0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F810u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F824u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F83Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F844u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F858u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F864u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F870u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F878u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F87Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F880u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F894u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F8A8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F8C0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F8C4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F8CCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F8E0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F934u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F95Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F968u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F978u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F980u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F998u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F9A4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F9B0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F9B8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F9BCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F9C0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F9CCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F9E0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F9F4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F9FCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FA14u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FA20u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FA2Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FA34u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FA38u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FA3Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FA48u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FA5Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FA70u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FA74u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FA7Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FA8Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FA94u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FA98u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FAA0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FAD4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FAE4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FAF4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FAF8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FAFCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FB0Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FB18u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FB20u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FB24u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FB2Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FB40u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FB5Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FB68u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FB70u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FB78u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FB8Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FB9Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FBACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FBB0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FBB4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FBBCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FBC8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FBE0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FC04u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FC20u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FC28u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FC4Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FC58u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FC70u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FC90u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FCA0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FCACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FCB4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FCB8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FCC4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FCD8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FCE4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FD00u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FD0Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FD14u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FD18u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FD20u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FD34u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FD44u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FD54u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FD58u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FD5Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FD64u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FD88u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FD90u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FDACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FDB8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FDC4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FDCCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FDD0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FDD8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FDE4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FDF8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FE08u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FE14u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FE24u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FE38u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FE44u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FE60u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FE68u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FE80u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FE8Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FE98u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FEA0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FEA4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FEA8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FEB8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FECCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FED4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FEE8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FEFCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FF0Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FF18u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FF24u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FF2Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FF30u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FF34u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FF40u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FF54u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FF64u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FF74u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FF7Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FF84u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FF90u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FFA8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FFB0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FFB8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FFC0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FFCCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FFD8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FFE4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FFECu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FFF0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FFF8u, &recomp_unit_0010, "recomp_unit_0010");
}
} // namespace psprecomp
