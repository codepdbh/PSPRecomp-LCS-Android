#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0165[4095] = {
    1, 0, 2, 0, 3, 0, 0, 4, 5, 6, 0, 7, 0, 0, 8, 0, 9, 10, 0, 11, 0, 0, 0, 0, 12, 0, 13, 0, 14, 0, 15, 0,
    16, 0, 17, 0, 18, 0, 19, 0, 0, 20, 0, 21, 0, 22, 0, 0, 23, 0, 24, 0, 25, 0, 26, 27, 0, 0, 0, 28, 0, 29, 0, 0,
    0, 30, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 33, 0, 34, 0, 35, 0, 36, 0, 37, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 40,
    0, 41, 0, 42, 0, 43, 0, 44, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 47, 0, 48, 0, 49, 0, 50, 0, 51, 0, 0, 52, 0, 0,
    0, 0, 53, 0, 0, 54, 0, 55, 0, 56, 0, 57, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 61, 0, 62, 0, 0, 63, 0, 64,
    65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 68, 0, 69, 0, 0, 70, 0, 71, 0, 72, 0, 73, 0, 0, 74, 75, 76, 0, 0, 0,
    77, 0, 78, 0, 0, 79, 0, 0, 80, 0, 81, 0, 0, 82, 0, 83, 0, 84, 0, 85, 0, 0, 86, 87, 88, 0, 89, 0, 0, 90, 0, 0,
    91, 0, 92, 0, 93, 0, 94, 0, 95, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0, 0, 99, 0, 100, 0, 101, 0, 0, 0, 0,
    0, 0, 102, 103, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 106, 0, 107, 0, 108, 0, 109, 0, 110, 0, 111, 0, 0, 0, 0, 112, 0,
    0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 119, 0,
    120, 0, 121, 0, 0, 122, 0, 123, 0, 0, 124, 0, 0, 125, 0, 126, 0, 127, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 131,
    0, 132, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 136, 0, 137, 0, 138, 0, 139, 0, 140, 141, 0, 0, 142, 0, 0, 0, 0,
    143, 0, 0, 144, 0, 145, 0, 146, 0, 147, 0, 148, 149, 0, 0, 150, 0, 0, 0, 151, 0, 152, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0,
    155, 0, 156, 0, 0, 157, 0, 0, 0, 158, 0, 159, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 162, 0, 163, 0, 0, 164, 0, 0, 0, 165,
    0, 166, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 169, 0, 170, 0, 0, 171, 0, 0, 0, 172, 0, 173, 0, 0, 0, 174, 0, 0, 0, 175,
    0, 0, 176, 0, 177, 0, 0, 178, 0, 0, 179, 0, 0, 180, 0, 181, 0, 182, 0, 0, 183, 184, 185, 0, 186, 0, 0, 0, 0, 0, 187, 0,
    188, 0, 189, 0, 190, 0, 191, 0, 192, 0, 0, 0, 193, 0, 194, 0, 0, 0, 195, 0, 196, 0, 0, 0, 197, 0, 0, 198, 0, 199, 0, 200,
    0, 201, 0, 202, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 205, 0, 206, 0, 207, 0, 208, 0, 209, 0, 210,
    0, 211, 0, 212, 0, 213, 0, 0, 0, 214, 0, 215, 0, 216, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 221, 0,
    222, 0, 223, 0, 224, 0, 225, 0, 226, 0, 0, 227, 0, 228, 0, 0, 229, 230, 231, 0, 0, 0, 232, 0, 0, 233, 0, 0, 234, 0, 235, 0,
    236, 0, 237, 0, 238, 0, 239, 0, 0, 240, 0, 0, 241, 0, 242, 0, 243, 0, 244, 0, 245, 0, 246, 0, 0, 0, 0, 0, 0, 247, 0, 248,
    0, 249, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 254, 0, 255, 0, 256, 0, 0, 0, 0,
    0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 259, 260, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0,
    263, 0, 264, 0, 0, 265, 0, 266, 0, 267, 0, 0, 0, 0, 268, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0,
    0, 272, 0, 273, 0, 0, 0, 0, 274, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278, 279,
    0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 281, 0, 282, 0, 283, 0, 284, 0, 0, 0, 285, 0, 286, 0, 0, 0, 287, 0, 288, 0, 0,
    0, 289, 290, 0, 0, 291, 0, 0, 292, 0, 293, 0, 294, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 0, 298, 299,
    0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 301, 0, 302, 0, 303, 304, 0, 0, 305, 0, 0, 306, 0, 307, 0, 308, 0, 0, 0, 0, 309,
    310, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 315, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 0,
    0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 320,
    0, 321, 0, 322, 0, 323, 0, 0, 0, 0, 0, 0, 324, 0, 325, 0, 326, 0, 327, 328, 0, 329, 0, 0, 330, 0, 331, 0, 332, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 333, 0, 334, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0,
    337, 0, 338, 339, 0, 340, 0, 341, 342, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 345, 0, 346, 0, 347, 0, 0, 0, 348,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 351, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0,
    355, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 358, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 361, 0, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 0, 364, 0,
    365, 366, 0, 0, 0, 0, 0, 367, 0, 0, 0, 368, 0, 369, 370, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 373, 374, 0, 0,
    0, 0, 0, 375, 0, 0, 0, 376, 0, 377, 378, 0, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 381, 382, 0, 0, 0, 0, 0, 383, 0, 0,
    0, 384, 0, 385, 386, 0, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 389, 390, 0, 0, 0, 0, 0, 391, 0, 0, 0, 392, 0, 393, 394, 0,
    0, 0, 0, 395, 0, 0, 0, 396, 0, 397, 398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 400, 0, 401, 402, 0, 0, 0, 0, 0, 403, 0, 0,
    0, 404, 0, 405, 406, 0, 0, 0, 0, 0, 407, 0, 0, 0, 408, 0, 409, 410, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0,
    0, 0, 0, 0, 0, 0, 413, 0, 0, 414, 0, 0, 415, 0, 0, 416, 0, 0, 417, 0, 418, 0, 0, 419, 0, 420, 0, 0, 421, 422, 0, 423,
    0, 0, 424, 0, 0, 425, 0, 0, 426, 0, 0, 427, 0, 0, 428, 0, 0, 429, 0, 0, 430, 0, 0, 431, 0, 0, 432, 0, 0, 433, 0, 0,
    434, 0, 0, 435, 0, 0, 436, 0, 0, 437, 0, 0, 438, 0, 0, 439, 0, 0, 440, 0, 0, 441, 0, 0, 442, 0, 0, 443, 0, 0, 0, 0,
    0, 444, 445, 0, 446, 0, 0, 0, 0, 447, 0, 0, 0, 0, 448, 0, 0, 0, 449, 0, 450, 0, 0, 451, 0, 452, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 456, 0, 0, 0, 0, 457,
    0, 458, 0, 0, 459, 0, 460, 0, 461, 0, 0, 0, 462, 0, 463, 0, 0, 464, 0, 465, 0, 0, 0, 466, 0, 467, 0, 0, 468, 0, 469, 0,
    0, 0, 470, 0, 471, 0, 0, 472, 0, 473, 0, 0, 0, 474, 0, 475, 0, 0, 476, 0, 477, 0, 0, 0, 478, 0, 479, 0, 0, 0, 480, 0,
    481, 0, 0, 0, 482, 0, 483, 0, 0, 484, 0, 485, 0, 0, 0, 486, 0, 487, 0, 0, 488, 0, 489, 0, 0, 0, 490, 0, 491, 0, 0, 492,
    0, 493, 0, 0, 0, 494, 0, 495, 0, 0, 496, 0, 497, 0, 0, 0, 498, 0, 499, 0, 0, 500, 0, 501, 0, 0, 0, 502, 0, 503, 0, 0,
    504, 0, 505, 0, 0, 0, 506, 0, 507, 0, 0, 508, 0, 509, 0, 0, 0, 510, 0, 511, 0, 0, 512, 0, 513, 0, 0, 0, 514, 0, 515, 0,
    0, 516, 0, 517, 0, 0, 0, 518, 0, 519, 0, 0, 520, 0, 521, 0, 0, 0, 522, 0, 523, 0, 0, 524, 0, 525, 0, 0, 0, 526, 0, 527,
    0, 0, 528, 0, 529, 0, 0, 0, 530, 0, 531, 0, 0, 532, 0, 533, 0, 0, 0, 534, 0, 535, 0, 0, 536, 0, 537, 0, 0, 0, 538, 0,
    539, 0, 0, 540, 0, 541, 0, 0, 0, 542, 0, 543, 0, 0, 544, 0, 545, 0, 0, 0, 546, 0, 547, 0, 0, 548, 0, 0, 0, 549, 0, 550,
    0, 0, 551, 0, 552, 0, 0, 0, 553, 0, 554, 0, 0, 555, 0, 556, 0, 0, 0, 557, 0, 558, 0, 0, 559, 0, 0, 0, 560, 0, 561, 0,
    0, 562, 0, 563, 0, 0, 0, 564, 0, 565, 0, 0, 566, 0, 567, 0, 0, 0, 568, 0, 569, 0, 0, 570, 0, 571, 0, 0, 0, 572, 0, 573,
    0, 0, 574, 0, 575, 0, 0, 0, 576, 0, 577, 0, 0, 578, 0, 579, 0, 0, 0, 580, 0, 581, 0, 0, 582, 0, 583, 0, 0, 0, 584, 0,
    585, 0, 0, 0, 0, 0, 0, 0, 0, 0, 586, 0, 0, 587, 0, 0, 588, 0, 589, 590, 591, 0, 0, 592, 0, 0, 0, 0, 593, 0, 594, 0,
    0, 0, 595, 0, 596, 0, 0, 0, 0, 0, 0, 0, 0, 0, 597, 0, 0, 598, 0, 0, 599, 0, 600, 601, 602, 0, 0, 603, 0, 0, 0, 0,
    604, 0, 605, 0, 0, 0, 606, 0, 607, 0, 0, 608, 0, 609, 0, 0, 0, 610, 0, 611, 0, 0, 612, 0, 613, 0, 0, 0, 614, 0, 615, 0,
    0, 616, 0, 0, 0, 617, 0, 618, 0, 0, 619, 0, 620, 0, 0, 0, 621, 0, 622, 0, 0, 623, 0, 624, 0, 0, 0, 625, 0, 626, 0, 0,
    627, 0, 628, 0, 0, 0, 629, 0, 630, 0, 0, 631, 0, 632, 0, 0, 0, 633, 0, 634, 0, 0, 635, 0, 636, 0, 0, 0, 637, 0, 638, 0,
    0, 639, 0, 640, 0, 0, 0, 641, 0, 642, 0, 0, 643, 0, 644, 0, 0, 0, 645, 0, 646, 0, 0, 647, 0, 648, 0, 0, 0, 649, 0, 650,
    0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 653, 0, 0, 0, 0, 0, 654, 0, 0, 655, 0, 656, 0, 0, 657, 0, 658, 0,
    659, 0, 660, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 662, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 663, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 666,
    0, 0, 0, 0, 667, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 670, 0, 0, 671, 0, 672, 0, 673, 0, 0, 0, 0, 0, 674, 0, 0, 0, 0, 0, 0, 675, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 676, 0, 0, 0, 0, 0, 0, 677, 0, 0, 678, 0, 679, 0, 0, 680, 0, 0, 681, 0, 682, 0,
    0, 0, 0, 683, 0, 0, 0, 0, 0, 684, 0, 0, 685, 0, 0, 686, 0, 0, 0, 687, 0, 0, 0, 688, 0, 689, 0, 690, 0, 0, 691, 0,
    0, 0, 692, 0, 0, 0, 0, 0, 0, 0, 0, 693, 0, 0, 694, 0, 0, 0, 0, 0, 695, 0, 0, 0, 0, 0, 0, 696, 0, 0, 0, 697,
    698, 0, 0, 0, 699, 0, 700, 0, 0, 701, 0, 0, 0, 702, 0, 703, 0, 0, 704, 0, 0, 0, 0, 0, 0, 705, 0, 0, 0, 0, 706, 0,
    0, 707, 0, 0, 708, 0, 0, 0, 709, 710, 0, 0, 711, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 712, 0, 713, 0,
    0, 714, 0, 0, 0, 715, 0, 0, 716, 0, 717, 0, 0, 718, 0, 719, 0, 720, 0, 721, 0, 0, 722, 0, 0, 0, 0, 0, 0, 723, 0, 0,
    0, 0, 0, 0, 0, 724, 0, 0, 0, 0, 0, 0, 0, 0, 725, 0, 0, 0, 726, 0, 727, 728, 0, 729, 0, 0, 0, 0, 0, 730, 0, 731,
    0, 732, 0, 0, 0, 0, 0, 0, 733, 0, 0, 0, 0, 0, 734, 0, 0, 735, 0, 0, 736, 0, 0, 0, 0, 0, 0, 0, 0, 0, 737, 738,
    0, 0, 0, 0, 0, 0, 739, 0, 0, 0, 740, 0, 0, 0, 741, 0, 0, 742, 0, 743, 0, 744, 0, 0, 0, 0, 0, 0, 745, 746, 0, 747,
    0, 0, 0, 0, 0, 0, 0, 0, 748, 0, 0, 0, 0, 749, 0, 0, 0, 750, 0, 0, 751, 0, 752, 0, 0, 753, 754, 0, 755, 0, 0, 756,
    0, 0, 757, 0, 0, 0, 0, 758, 0, 0, 759, 0, 0, 760, 0, 0, 761, 0, 0, 762, 0, 0, 763, 0, 0, 764, 0, 0, 765, 766, 0, 0,
    0, 0, 767, 0, 0, 0, 0, 0, 768, 0, 0, 0, 0, 0, 0, 0, 769, 0, 770, 0, 0, 771, 0, 0, 0, 772, 0, 0, 0, 0, 0, 773,
    0, 0, 774, 0, 0, 775, 0, 0, 0, 776, 777, 0, 0, 0, 0, 0, 778, 0, 0, 0, 0, 0, 779, 0, 0, 780, 0, 0, 0, 0, 0, 781,
    0, 0, 782, 0, 0, 0, 0, 0, 783, 0, 0, 784, 0, 0, 0, 0, 0, 785, 0, 0, 786, 0, 787, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 788, 0, 0, 789, 790, 0, 0, 791, 0, 0, 792, 0, 793, 0, 0, 0, 794, 0, 0, 0, 0, 0, 795, 0, 0, 0,
    796, 0, 0, 0, 797, 0, 0, 0, 798, 0, 0, 799, 0, 0, 800, 0, 0, 801, 0, 802, 0, 0, 803, 0, 0, 804, 0, 805, 0, 0, 806, 0,
    0, 807, 0, 808, 0, 0, 809, 810, 0, 811, 0, 0, 0, 812, 0, 813, 0, 814, 0, 815, 0, 816, 0, 817, 0, 0, 818, 0, 0, 0, 819, 0,
    820, 0, 821, 0, 822, 0, 0, 823, 0, 824, 0, 825, 0, 826, 0, 0, 0, 0, 827, 0, 0, 0, 0, 0, 0, 0, 828, 0, 0, 829, 0, 0,
    0, 0, 830, 0, 0, 0, 0, 0, 0, 831, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 832, 0, 833, 0, 0, 0, 0, 834,
    0, 0, 0, 0, 0, 835, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 836, 0, 0, 0, 0, 837, 0, 838, 0, 839, 0, 840, 0, 0, 841, 0,
    0, 842, 0, 0, 0, 0, 0, 0, 0, 843, 0, 0, 0, 0, 0, 0, 0, 0, 844, 0, 0, 845, 0, 0, 0, 0, 0, 846, 0, 847, 0, 0,
    848, 0, 0, 849, 0, 0, 0, 0, 0, 0, 0, 850, 0, 0, 0, 0, 0, 0, 0, 0, 851, 0, 0, 852, 0, 0, 0, 0, 0, 853, 0, 854,
    0, 0, 0, 0, 0, 0, 0, 855, 0, 856, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 857, 0, 858, 0, 859,
    0, 860, 0, 0, 861, 0, 862, 863, 0, 864, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 865, 0, 0, 866, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 867, 0, 0, 0, 0, 0, 868, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 869, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 870, 0, 0, 0, 0, 0, 0, 0, 0, 871, 0, 0, 872, 0, 873, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 874, 0, 0, 0, 0, 875, 0, 876, 0, 877, 0, 878, 0, 879, 0, 880, 0, 0, 881, 0, 0, 882, 0, 883, 0, 884, 0, 0, 0,
    885, 0, 0, 886, 0, 887, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 888, 0, 889, 0, 890, 0, 0, 0, 0, 0, 0, 0, 891, 0, 0, 0, 0, 892, 0, 0, 0, 0, 0, 0, 0, 0, 0, 893, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 894, 0,
    895, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 896, 0, 0, 0, 0, 0, 0, 0, 0, 0, 897, 0, 0, 0, 0, 0,
    0, 0, 0, 898, 0, 0, 0, 0, 0, 899, 0, 0, 0, 0, 0, 0, 900, 0, 0, 0, 0, 901, 0, 0, 0, 0, 0, 0, 902, 0, 0, 0,
    0, 903, 0, 0, 0, 904, 0, 0, 0, 0, 0, 905, 0, 0, 906, 0, 0, 0, 0, 0, 907, 0, 908, 0, 0, 0, 0, 909, 0, 0, 0, 0,
    910, 0, 0, 0, 0, 0, 0, 0, 0, 0, 911, 0, 0, 0, 912, 0, 0, 913, 0, 914, 915, 0, 0, 0, 0, 916, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 917, 0, 0, 0, 0, 0, 918, 0, 0, 0, 0, 0, 0, 919, 0, 0, 0, 0, 920, 0, 0, 0, 921, 0, 0,
    0, 0, 0, 922, 0, 0, 923, 0, 0, 0, 0, 924, 0, 0, 0, 0, 925, 0, 0, 0, 0, 0, 0, 0, 926, 0, 927, 0, 928, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 929, 0, 930, 0, 931, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 932, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 933,
    0, 0, 934, 0, 935, 0, 0, 0, 0, 0, 936, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 937, 0, 938, 0, 939, 0, 0, 0, 0, 940, 0, 0, 0, 0, 0, 941, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 942,
    0, 0, 943, 0, 944, 0, 945, 0, 946, 0, 947, 0, 0, 0, 0, 0, 0, 948, 0, 0, 949, 0, 0, 0, 950, 0, 0, 0, 951, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 952, 0, 0, 0, 953, 0, 954, 0, 0, 0, 0, 955, 0, 0, 0, 956, 0, 0, 0, 0, 0, 0, 957, 0, 0,
    0, 958, 0, 0, 0, 0, 0, 0, 959, 0, 0, 0, 960, 961, 0, 0, 0, 962, 0, 963, 0, 964, 0, 0, 0, 0, 965, 0, 0, 966, 0, 0,
    0, 0, 0, 0, 0, 967, 0, 0, 0, 0, 0, 0, 0, 0, 968, 0, 0, 0, 0, 0, 0, 0, 0, 0, 969, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 970, 0, 971, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 972, 0, 973, 0, 0, 0, 0, 974, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 975, 0, 976, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 977, 0, 978, 0, 0, 0, 0, 979, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 980, 0, 981, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 982, 0, 983, 0,
    0, 0, 0, 984, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 985,
    0, 986, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 987, 0, 988, 0, 0, 0, 0, 989, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 990, 0, 991, 0, 0, 0, 0, 992, 993, 0, 0,
    0, 0, 0, 994, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 995,
    0, 996, 0, 0, 0, 0, 997, 0, 0, 0, 0, 0, 0, 998, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 999, 0, 1000, 0, 0, 1001, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1002, 0, 0, 1003, 0, 0, 0, 0, 1004, 0, 0, 0, 0, 1005,
};
void recomp_unit_0165_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A98000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0165[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A98000;
    case 2u: goto L_08A98008;
    case 3u: goto L_08A98010;
    case 4u: goto L_08A9801C;
    case 5u: goto L_08A98020;
    case 6u: goto L_08A98024;
    case 7u: goto L_08A9802C;
    case 8u: goto L_08A98038;
    case 9u: goto L_08A98040;
    case 10u: goto L_08A98044;
    case 11u: goto L_08A9804C;
    case 12u: goto L_08A98060;
    case 13u: goto L_08A98068;
    case 14u: goto L_08A98070;
    case 15u: goto L_08A98078;
    case 16u: goto L_08A98080;
    case 17u: goto L_08A98088;
    case 18u: goto L_08A98090;
    case 19u: goto L_08A98098;
    case 20u: goto L_08A980A4;
    case 21u: goto L_08A980AC;
    case 22u: goto L_08A980B4;
    case 23u: goto L_08A980C0;
    case 24u: goto L_08A980C8;
    case 25u: goto L_08A980D0;
    case 26u: goto L_08A980D8;
    case 27u: goto L_08A980DC;
    case 28u: goto L_08A980EC;
    case 29u: goto L_08A980F4;
    case 30u: goto L_08A98104;
    case 31u: goto L_08A98110;
    case 32u: goto L_08A98124;
    case 33u: goto L_08A98130;
    case 34u: goto L_08A98138;
    case 35u: goto L_08A98140;
    case 36u: goto L_08A98148;
    case 37u: goto L_08A98150;
    case 38u: goto L_08A9815C;
    case 39u: goto L_08A98170;
    case 40u: goto L_08A9817C;
    case 41u: goto L_08A98184;
    case 42u: goto L_08A9818C;
    case 43u: goto L_08A98194;
    case 44u: goto L_08A9819C;
    case 45u: goto L_08A981A8;
    case 46u: goto L_08A981BC;
    case 47u: goto L_08A981C8;
    case 48u: goto L_08A981D0;
    case 49u: goto L_08A981D8;
    case 50u: goto L_08A981E0;
    case 51u: goto L_08A981E8;
    case 52u: goto L_08A981F4;
    case 53u: goto L_08A98208;
    case 54u: goto L_08A98214;
    case 55u: goto L_08A9821C;
    case 56u: goto L_08A98224;
    case 57u: goto L_08A9822C;
    case 58u: goto L_08A98234;
    case 59u: goto L_08A98240;
    case 60u: goto L_08A98258;
    case 61u: goto L_08A98260;
    case 62u: goto L_08A98268;
    case 63u: goto L_08A98274;
    case 64u: goto L_08A9827C;
    case 65u: goto L_08A98280;
    case 66u: goto L_08A98290;
    case 67u: goto L_08A982A8;
    case 68u: goto L_08A982B0;
    case 69u: goto L_08A982B8;
    case 70u: goto L_08A982C4;
    case 71u: goto L_08A982CC;
    case 72u: goto L_08A982D4;
    case 73u: goto L_08A982DC;
    case 74u: goto L_08A982E8;
    case 75u: goto L_08A982EC;
    case 76u: goto L_08A982F0;
    case 77u: goto L_08A98300;
    case 78u: goto L_08A98308;
    case 79u: goto L_08A98314;
    case 80u: goto L_08A98320;
    case 81u: goto L_08A98328;
    case 82u: goto L_08A98334;
    case 83u: goto L_08A9833C;
    case 84u: goto L_08A98344;
    case 85u: goto L_08A9834C;
    case 86u: goto L_08A98358;
    case 87u: goto L_08A9835C;
    case 88u: goto L_08A98360;
    case 89u: goto L_08A98368;
    case 90u: goto L_08A98374;
    case 91u: goto L_08A98380;
    case 92u: goto L_08A98388;
    case 93u: goto L_08A98390;
    case 94u: goto L_08A98398;
    case 95u: goto L_08A983A0;
    case 96u: goto L_08A983A8;
    case 97u: goto L_08A983C8;
    case 98u: goto L_08A983D0;
    case 99u: goto L_08A983DC;
    case 100u: goto L_08A983E4;
    case 101u: goto L_08A983EC;
    case 102u: goto L_08A98408;
    case 103u: goto L_08A9840C;
    case 104u: goto L_08A98424;
    case 105u: goto L_08A98430;
    case 106u: goto L_08A9843C;
    case 107u: goto L_08A98444;
    case 108u: goto L_08A9844C;
    case 109u: goto L_08A98454;
    case 110u: goto L_08A9845C;
    case 111u: goto L_08A98464;
    case 112u: goto L_08A98478;
    case 113u: goto L_08A9848C;
    case 114u: goto L_08A984A0;
    case 115u: goto L_08A984B0;
    case 116u: goto L_08A984C8;
    case 117u: goto L_08A984E4;
    case 118u: goto L_08A984F0;
    case 119u: goto L_08A984F8;
    case 120u: goto L_08A98500;
    case 121u: goto L_08A98508;
    case 122u: goto L_08A98514;
    case 123u: goto L_08A9851C;
    case 124u: goto L_08A98528;
    case 125u: goto L_08A98534;
    case 126u: goto L_08A9853C;
    case 127u: goto L_08A98544;
    case 128u: goto L_08A98550;
    case 129u: goto L_08A98568;
    case 130u: goto L_08A98574;
    case 131u: goto L_08A9857C;
    case 132u: goto L_08A98584;
    case 133u: goto L_08A98588;
    case 134u: goto L_08A9859C;
    case 135u: goto L_08A985B0;
    case 136u: goto L_08A985BC;
    case 137u: goto L_08A985C4;
    case 138u: goto L_08A985CC;
    case 139u: goto L_08A985D4;
    case 140u: goto L_08A985DC;
    case 141u: goto L_08A985E0;
    case 142u: goto L_08A985EC;
    case 143u: goto L_08A98600;
    case 144u: goto L_08A9860C;
    case 145u: goto L_08A98614;
    case 146u: goto L_08A9861C;
    case 147u: goto L_08A98624;
    case 148u: goto L_08A9862C;
    case 149u: goto L_08A98630;
    case 150u: goto L_08A9863C;
    case 151u: goto L_08A9864C;
    case 152u: goto L_08A98654;
    case 153u: goto L_08A98664;
    case 154u: goto L_08A98674;
    case 155u: goto L_08A98680;
    case 156u: goto L_08A98688;
    case 157u: goto L_08A98694;
    case 158u: goto L_08A986A4;
    case 159u: goto L_08A986AC;
    case 160u: goto L_08A986BC;
    case 161u: goto L_08A986CC;
    case 162u: goto L_08A986D8;
    case 163u: goto L_08A986E0;
    case 164u: goto L_08A986EC;
    case 165u: goto L_08A986FC;
    case 166u: goto L_08A98704;
    case 167u: goto L_08A98714;
    case 168u: goto L_08A98724;
    case 169u: goto L_08A98730;
    case 170u: goto L_08A98738;
    case 171u: goto L_08A98744;
    case 172u: goto L_08A98754;
    case 173u: goto L_08A9875C;
    case 174u: goto L_08A9876C;
    case 175u: goto L_08A9877C;
    case 176u: goto L_08A98788;
    case 177u: goto L_08A98790;
    case 178u: goto L_08A9879C;
    case 179u: goto L_08A987A8;
    case 180u: goto L_08A987B4;
    case 181u: goto L_08A987BC;
    case 182u: goto L_08A987C4;
    case 183u: goto L_08A987D0;
    case 184u: goto L_08A987D4;
    case 185u: goto L_08A987D8;
    case 186u: goto L_08A987E0;
    case 187u: goto L_08A987F8;
    case 188u: goto L_08A98800;
    case 189u: goto L_08A98808;
    case 190u: goto L_08A98810;
    case 191u: goto L_08A98818;
    case 192u: goto L_08A98820;
    case 193u: goto L_08A98830;
    case 194u: goto L_08A98838;
    case 195u: goto L_08A98848;
    case 196u: goto L_08A98850;
    case 197u: goto L_08A98860;
    case 198u: goto L_08A9886C;
    case 199u: goto L_08A98874;
    case 200u: goto L_08A9887C;
    case 201u: goto L_08A98884;
    case 202u: goto L_08A9888C;
    case 203u: goto L_08A98898;
    case 204u: goto L_08A988CC;
    case 205u: goto L_08A988D4;
    case 206u: goto L_08A988DC;
    case 207u: goto L_08A988E4;
    case 208u: goto L_08A988EC;
    case 209u: goto L_08A988F4;
    case 210u: goto L_08A988FC;
    case 211u: goto L_08A98904;
    case 212u: goto L_08A9890C;
    case 213u: goto L_08A98914;
    case 214u: goto L_08A98924;
    case 215u: goto L_08A9892C;
    case 216u: goto L_08A98934;
    case 217u: goto L_08A98938;
    case 218u: goto L_08A98948;
    case 219u: goto L_08A98960;
    case 220u: goto L_08A98970;
    case 221u: goto L_08A98978;
    case 222u: goto L_08A98980;
    case 223u: goto L_08A98988;
    case 224u: goto L_08A98990;
    case 225u: goto L_08A98998;
    case 226u: goto L_08A989A0;
    case 227u: goto L_08A989AC;
    case 228u: goto L_08A989B4;
    case 229u: goto L_08A989C0;
    case 230u: goto L_08A989C4;
    case 231u: goto L_08A989C8;
    case 232u: goto L_08A989D8;
    case 233u: goto L_08A989E4;
    case 234u: goto L_08A989F0;
    case 235u: goto L_08A989F8;
    case 236u: goto L_08A98A00;
    case 237u: goto L_08A98A08;
    case 238u: goto L_08A98A10;
    case 239u: goto L_08A98A18;
    case 240u: goto L_08A98A24;
    case 241u: goto L_08A98A30;
    case 242u: goto L_08A98A38;
    case 243u: goto L_08A98A40;
    case 244u: goto L_08A98A48;
    case 245u: goto L_08A98A50;
    case 246u: goto L_08A98A58;
    case 247u: goto L_08A98A74;
    case 248u: goto L_08A98A7C;
    case 249u: goto L_08A98A84;
    case 250u: goto L_08A98A90;
    case 251u: goto L_08A98AA8;
    case 252u: goto L_08A98AB0;
    case 253u: goto L_08A98AD4;
    case 254u: goto L_08A98ADC;
    case 255u: goto L_08A98AE4;
    case 256u: goto L_08A98AEC;
    case 257u: goto L_08A98B08;
    case 258u: goto L_08A98B24;
    case 259u: goto L_08A98B48;
    case 260u: goto L_08A98B4C;
    case 261u: goto L_08A98B5C;
    case 262u: goto L_08A98B78;
    case 263u: goto L_08A98B80;
    case 264u: goto L_08A98B88;
    case 265u: goto L_08A98B94;
    case 266u: goto L_08A98B9C;
    case 267u: goto L_08A98BA4;
    case 268u: goto L_08A98BB8;
    case 269u: goto L_08A98BBC;
    case 270u: goto L_08A98BD4;
    case 271u: goto L_08A98BF0;
    case 272u: goto L_08A98C04;
    case 273u: goto L_08A98C0C;
    case 274u: goto L_08A98C20;
    case 275u: goto L_08A98C24;
    case 276u: goto L_08A98C3C;
    case 277u: goto L_08A98C58;
    case 278u: goto L_08A98C78;
    case 279u: goto L_08A98C7C;
    case 280u: goto L_08A98C8C;
    case 281u: goto L_08A98CAC;
    case 282u: goto L_08A98CB4;
    case 283u: goto L_08A98CBC;
    case 284u: goto L_08A98CC4;
    case 285u: goto L_08A98CD4;
    case 286u: goto L_08A98CDC;
    case 287u: goto L_08A98CEC;
    case 288u: goto L_08A98CF4;
    case 289u: goto L_08A98D04;
    case 290u: goto L_08A98D08;
    case 291u: goto L_08A98D14;
    case 292u: goto L_08A98D20;
    case 293u: goto L_08A98D28;
    case 294u: goto L_08A98D30;
    case 295u: goto L_08A98D3C;
    case 296u: goto L_08A98D50;
    case 297u: goto L_08A98D64;
    case 298u: goto L_08A98D78;
    case 299u: goto L_08A98D7C;
    case 300u: goto L_08A98D8C;
    case 301u: goto L_08A98DAC;
    case 302u: goto L_08A98DB4;
    case 303u: goto L_08A98DBC;
    case 304u: goto L_08A98DC0;
    case 305u: goto L_08A98DCC;
    case 306u: goto L_08A98DD8;
    case 307u: goto L_08A98DE0;
    case 308u: goto L_08A98DE8;
    case 309u: goto L_08A98DFC;
    case 310u: goto L_08A98E00;
    case 311u: goto L_08A98E08;
    case 312u: goto L_08A98E1C;
    case 313u: goto L_08A98E30;
    case 314u: goto L_08A98E44;
    case 315u: goto L_08A98E48;
    case 316u: goto L_08A98E58;
    case 317u: goto L_08A98E6C;
    case 318u: goto L_08A98E88;
    case 319u: goto L_08A98ED8;
    case 320u: goto L_08A98EFC;
    case 321u: goto L_08A98F04;
    case 322u: goto L_08A98F0C;
    case 323u: goto L_08A98F14;
    case 324u: goto L_08A98F30;
    case 325u: goto L_08A98F38;
    case 326u: goto L_08A98F40;
    case 327u: goto L_08A98F48;
    case 328u: goto L_08A98F4C;
    case 329u: goto L_08A98F54;
    case 330u: goto L_08A98F60;
    case 331u: goto L_08A98F68;
    case 332u: goto L_08A98F70;
    case 333u: goto L_08A98F9C;
    case 334u: goto L_08A98FA4;
    case 335u: goto L_08A98FA8;
    case 336u: goto L_08A98FEC;
    case 337u: goto L_08A99000;
    case 338u: goto L_08A99008;
    case 339u: goto L_08A9900C;
    case 340u: goto L_08A99014;
    case 341u: goto L_08A9901C;
    case 342u: goto L_08A99020;
    case 343u: goto L_08A9903C;
    case 344u: goto L_08A99054;
    case 345u: goto L_08A9905C;
    case 346u: goto L_08A99064;
    case 347u: goto L_08A9906C;
    case 348u: goto L_08A9907C;
    case 349u: goto L_08A990B0;
    case 350u: goto L_08A990E8;
    case 351u: goto L_08A990F8;
    case 352u: goto L_08A9912C;
    case 353u: goto L_08A99164;
    case 354u: goto L_08A99178;
    case 355u: goto L_08A99180;
    case 356u: goto L_08A99188;
    case 357u: goto L_08A991CC;
    case 358u: goto L_08A991D4;
    case 359u: goto L_08A991DC;
    case 360u: goto L_08A9922C;
    case 361u: goto L_08A99240;
    case 362u: goto L_08A99254;
    case 363u: goto L_08A99268;
    case 364u: goto L_08A99278;
    case 365u: goto L_08A99280;
    case 366u: goto L_08A99284;
    case 367u: goto L_08A9929C;
    case 368u: goto L_08A992AC;
    case 369u: goto L_08A992B4;
    case 370u: goto L_08A992B8;
    case 371u: goto L_08A992D0;
    case 372u: goto L_08A992E8;
    case 373u: goto L_08A992F0;
    case 374u: goto L_08A992F4;
    case 375u: goto L_08A9930C;
    case 376u: goto L_08A9931C;
    case 377u: goto L_08A99324;
    case 378u: goto L_08A99328;
    case 379u: goto L_08A99340;
    case 380u: goto L_08A99350;
    case 381u: goto L_08A99358;
    case 382u: goto L_08A9935C;
    case 383u: goto L_08A99374;
    case 384u: goto L_08A99384;
    case 385u: goto L_08A9938C;
    case 386u: goto L_08A99390;
    case 387u: goto L_08A993A8;
    case 388u: goto L_08A993B8;
    case 389u: goto L_08A993C0;
    case 390u: goto L_08A993C4;
    case 391u: goto L_08A993DC;
    case 392u: goto L_08A993EC;
    case 393u: goto L_08A993F4;
    case 394u: goto L_08A993F8;
    case 395u: goto L_08A9940C;
    case 396u: goto L_08A9941C;
    case 397u: goto L_08A99424;
    case 398u: goto L_08A99428;
    case 399u: goto L_08A99440;
    case 400u: goto L_08A99450;
    case 401u: goto L_08A99458;
    case 402u: goto L_08A9945C;
    case 403u: goto L_08A99474;
    case 404u: goto L_08A99484;
    case 405u: goto L_08A9948C;
    case 406u: goto L_08A99490;
    case 407u: goto L_08A994A8;
    case 408u: goto L_08A994B8;
    case 409u: goto L_08A994C0;
    case 410u: goto L_08A994C4;
    case 411u: goto L_08A994E8;
    case 412u: goto L_08A994F8;
    case 413u: goto L_08A99518;
    case 414u: goto L_08A99524;
    case 415u: goto L_08A99530;
    case 416u: goto L_08A9953C;
    case 417u: goto L_08A99548;
    case 418u: goto L_08A99550;
    case 419u: goto L_08A9955C;
    case 420u: goto L_08A99564;
    case 421u: goto L_08A99570;
    case 422u: goto L_08A99574;
    case 423u: goto L_08A9957C;
    case 424u: goto L_08A99588;
    case 425u: goto L_08A99594;
    case 426u: goto L_08A995A0;
    case 427u: goto L_08A995AC;
    case 428u: goto L_08A995B8;
    case 429u: goto L_08A995C4;
    case 430u: goto L_08A995D0;
    case 431u: goto L_08A995DC;
    case 432u: goto L_08A995E8;
    case 433u: goto L_08A995F4;
    case 434u: goto L_08A99600;
    case 435u: goto L_08A9960C;
    case 436u: goto L_08A99618;
    case 437u: goto L_08A99624;
    case 438u: goto L_08A99630;
    case 439u: goto L_08A9963C;
    case 440u: goto L_08A99648;
    case 441u: goto L_08A99654;
    case 442u: goto L_08A99660;
    case 443u: goto L_08A9966C;
    case 444u: goto L_08A99684;
    case 445u: goto L_08A99688;
    case 446u: goto L_08A99690;
    case 447u: goto L_08A996A4;
    case 448u: goto L_08A996B8;
    case 449u: goto L_08A996C8;
    case 450u: goto L_08A996D0;
    case 451u: goto L_08A996DC;
    case 452u: goto L_08A996E4;
    case 453u: goto L_08A99710;
    case 454u: goto L_08A99738;
    case 455u: goto L_08A99754;
    case 456u: goto L_08A99768;
    case 457u: goto L_08A9977C;
    case 458u: goto L_08A99784;
    case 459u: goto L_08A99790;
    case 460u: goto L_08A99798;
    case 461u: goto L_08A997A0;
    case 462u: goto L_08A997B0;
    case 463u: goto L_08A997B8;
    case 464u: goto L_08A997C4;
    case 465u: goto L_08A997CC;
    case 466u: goto L_08A997DC;
    case 467u: goto L_08A997E4;
    case 468u: goto L_08A997F0;
    case 469u: goto L_08A997F8;
    case 470u: goto L_08A99808;
    case 471u: goto L_08A99810;
    case 472u: goto L_08A9981C;
    case 473u: goto L_08A99824;
    case 474u: goto L_08A99834;
    case 475u: goto L_08A9983C;
    case 476u: goto L_08A99848;
    case 477u: goto L_08A99850;
    case 478u: goto L_08A99860;
    case 479u: goto L_08A99868;
    case 480u: goto L_08A99878;
    case 481u: goto L_08A99880;
    case 482u: goto L_08A99890;
    case 483u: goto L_08A99898;
    case 484u: goto L_08A998A4;
    case 485u: goto L_08A998AC;
    case 486u: goto L_08A998BC;
    case 487u: goto L_08A998C4;
    case 488u: goto L_08A998D0;
    case 489u: goto L_08A998D8;
    case 490u: goto L_08A998E8;
    case 491u: goto L_08A998F0;
    case 492u: goto L_08A998FC;
    case 493u: goto L_08A99904;
    case 494u: goto L_08A99914;
    case 495u: goto L_08A9991C;
    case 496u: goto L_08A99928;
    case 497u: goto L_08A99930;
    case 498u: goto L_08A99940;
    case 499u: goto L_08A99948;
    case 500u: goto L_08A99954;
    case 501u: goto L_08A9995C;
    case 502u: goto L_08A9996C;
    case 503u: goto L_08A99974;
    case 504u: goto L_08A99980;
    case 505u: goto L_08A99988;
    case 506u: goto L_08A99998;
    case 507u: goto L_08A999A0;
    case 508u: goto L_08A999AC;
    case 509u: goto L_08A999B4;
    case 510u: goto L_08A999C4;
    case 511u: goto L_08A999CC;
    case 512u: goto L_08A999D8;
    case 513u: goto L_08A999E0;
    case 514u: goto L_08A999F0;
    case 515u: goto L_08A999F8;
    case 516u: goto L_08A99A04;
    case 517u: goto L_08A99A0C;
    case 518u: goto L_08A99A1C;
    case 519u: goto L_08A99A24;
    case 520u: goto L_08A99A30;
    case 521u: goto L_08A99A38;
    case 522u: goto L_08A99A48;
    case 523u: goto L_08A99A50;
    case 524u: goto L_08A99A5C;
    case 525u: goto L_08A99A64;
    case 526u: goto L_08A99A74;
    case 527u: goto L_08A99A7C;
    case 528u: goto L_08A99A88;
    case 529u: goto L_08A99A90;
    case 530u: goto L_08A99AA0;
    case 531u: goto L_08A99AA8;
    case 532u: goto L_08A99AB4;
    case 533u: goto L_08A99ABC;
    case 534u: goto L_08A99ACC;
    case 535u: goto L_08A99AD4;
    case 536u: goto L_08A99AE0;
    case 537u: goto L_08A99AE8;
    case 538u: goto L_08A99AF8;
    case 539u: goto L_08A99B00;
    case 540u: goto L_08A99B0C;
    case 541u: goto L_08A99B14;
    case 542u: goto L_08A99B24;
    case 543u: goto L_08A99B2C;
    case 544u: goto L_08A99B38;
    case 545u: goto L_08A99B40;
    case 546u: goto L_08A99B50;
    case 547u: goto L_08A99B58;
    case 548u: goto L_08A99B64;
    case 549u: goto L_08A99B74;
    case 550u: goto L_08A99B7C;
    case 551u: goto L_08A99B88;
    case 552u: goto L_08A99B90;
    case 553u: goto L_08A99BA0;
    case 554u: goto L_08A99BA8;
    case 555u: goto L_08A99BB4;
    case 556u: goto L_08A99BBC;
    case 557u: goto L_08A99BCC;
    case 558u: goto L_08A99BD4;
    case 559u: goto L_08A99BE0;
    case 560u: goto L_08A99BF0;
    case 561u: goto L_08A99BF8;
    case 562u: goto L_08A99C04;
    case 563u: goto L_08A99C0C;
    case 564u: goto L_08A99C1C;
    case 565u: goto L_08A99C24;
    case 566u: goto L_08A99C30;
    case 567u: goto L_08A99C38;
    case 568u: goto L_08A99C48;
    case 569u: goto L_08A99C50;
    case 570u: goto L_08A99C5C;
    case 571u: goto L_08A99C64;
    case 572u: goto L_08A99C74;
    case 573u: goto L_08A99C7C;
    case 574u: goto L_08A99C88;
    case 575u: goto L_08A99C90;
    case 576u: goto L_08A99CA0;
    case 577u: goto L_08A99CA8;
    case 578u: goto L_08A99CB4;
    case 579u: goto L_08A99CBC;
    case 580u: goto L_08A99CCC;
    case 581u: goto L_08A99CD4;
    case 582u: goto L_08A99CE0;
    case 583u: goto L_08A99CE8;
    case 584u: goto L_08A99CF8;
    case 585u: goto L_08A99D00;
    case 586u: goto L_08A99D28;
    case 587u: goto L_08A99D34;
    case 588u: goto L_08A99D40;
    case 589u: goto L_08A99D48;
    case 590u: goto L_08A99D4C;
    case 591u: goto L_08A99D50;
    case 592u: goto L_08A99D5C;
    case 593u: goto L_08A99D70;
    case 594u: goto L_08A99D78;
    case 595u: goto L_08A99D88;
    case 596u: goto L_08A99D90;
    case 597u: goto L_08A99DB8;
    case 598u: goto L_08A99DC4;
    case 599u: goto L_08A99DD0;
    case 600u: goto L_08A99DD8;
    case 601u: goto L_08A99DDC;
    case 602u: goto L_08A99DE0;
    case 603u: goto L_08A99DEC;
    case 604u: goto L_08A99E00;
    case 605u: goto L_08A99E08;
    case 606u: goto L_08A99E18;
    case 607u: goto L_08A99E20;
    case 608u: goto L_08A99E2C;
    case 609u: goto L_08A99E34;
    case 610u: goto L_08A99E44;
    case 611u: goto L_08A99E4C;
    case 612u: goto L_08A99E58;
    case 613u: goto L_08A99E60;
    case 614u: goto L_08A99E70;
    case 615u: goto L_08A99E78;
    case 616u: goto L_08A99E84;
    case 617u: goto L_08A99E94;
    case 618u: goto L_08A99E9C;
    case 619u: goto L_08A99EA8;
    case 620u: goto L_08A99EB0;
    case 621u: goto L_08A99EC0;
    case 622u: goto L_08A99EC8;
    case 623u: goto L_08A99ED4;
    case 624u: goto L_08A99EDC;
    case 625u: goto L_08A99EEC;
    case 626u: goto L_08A99EF4;
    case 627u: goto L_08A99F00;
    case 628u: goto L_08A99F08;
    case 629u: goto L_08A99F18;
    case 630u: goto L_08A99F20;
    case 631u: goto L_08A99F2C;
    case 632u: goto L_08A99F34;
    case 633u: goto L_08A99F44;
    case 634u: goto L_08A99F4C;
    case 635u: goto L_08A99F58;
    case 636u: goto L_08A99F60;
    case 637u: goto L_08A99F70;
    case 638u: goto L_08A99F78;
    case 639u: goto L_08A99F84;
    case 640u: goto L_08A99F8C;
    case 641u: goto L_08A99F9C;
    case 642u: goto L_08A99FA4;
    case 643u: goto L_08A99FB0;
    case 644u: goto L_08A99FB8;
    case 645u: goto L_08A99FC8;
    case 646u: goto L_08A99FD0;
    case 647u: goto L_08A99FDC;
    case 648u: goto L_08A99FE4;
    case 649u: goto L_08A99FF4;
    case 650u: goto L_08A99FFC;
    case 651u: goto L_08A9A00C;
    case 652u: goto L_08A9A028;
    case 653u: goto L_08A9A138;
    case 654u: goto L_08A9A150;
    case 655u: goto L_08A9A15C;
    case 656u: goto L_08A9A164;
    case 657u: goto L_08A9A170;
    case 658u: goto L_08A9A178;
    case 659u: goto L_08A9A180;
    case 660u: goto L_08A9A188;
    case 661u: goto L_08A9A21C;
    case 662u: goto L_08A9A248;
    case 663u: goto L_08A9A284;
    case 664u: goto L_08A9A2B0;
    case 665u: goto L_08A9A2E0;
    case 666u: goto L_08A9A2FC;
    case 667u: goto L_08A9A310;
    case 668u: goto L_08A9A344;
    case 669u: goto L_08A9A35C;
    case 670u: goto L_08A9A394;
    case 671u: goto L_08A9A3A0;
    case 672u: goto L_08A9A3A8;
    case 673u: goto L_08A9A3B0;
    case 674u: goto L_08A9A3C8;
    case 675u: goto L_08A9A3E4;
    case 676u: goto L_08A9A428;
    case 677u: goto L_08A9A444;
    case 678u: goto L_08A9A450;
    case 679u: goto L_08A9A458;
    case 680u: goto L_08A9A464;
    case 681u: goto L_08A9A470;
    case 682u: goto L_08A9A478;
    case 683u: goto L_08A9A48C;
    case 684u: goto L_08A9A4A4;
    case 685u: goto L_08A9A4B0;
    case 686u: goto L_08A9A4BC;
    case 687u: goto L_08A9A4CC;
    case 688u: goto L_08A9A4DC;
    case 689u: goto L_08A9A4E4;
    case 690u: goto L_08A9A4EC;
    case 691u: goto L_08A9A4F8;
    case 692u: goto L_08A9A508;
    case 693u: goto L_08A9A52C;
    case 694u: goto L_08A9A538;
    case 695u: goto L_08A9A550;
    case 696u: goto L_08A9A56C;
    case 697u: goto L_08A9A57C;
    case 698u: goto L_08A9A580;
    case 699u: goto L_08A9A590;
    case 700u: goto L_08A9A598;
    case 701u: goto L_08A9A5A4;
    case 702u: goto L_08A9A5B4;
    case 703u: goto L_08A9A5BC;
    case 704u: goto L_08A9A5C8;
    case 705u: goto L_08A9A5E4;
    case 706u: goto L_08A9A5F8;
    case 707u: goto L_08A9A604;
    case 708u: goto L_08A9A610;
    case 709u: goto L_08A9A620;
    case 710u: goto L_08A9A624;
    case 711u: goto L_08A9A630;
    case 712u: goto L_08A9A670;
    case 713u: goto L_08A9A678;
    case 714u: goto L_08A9A684;
    case 715u: goto L_08A9A694;
    case 716u: goto L_08A9A6A0;
    case 717u: goto L_08A9A6A8;
    case 718u: goto L_08A9A6B4;
    case 719u: goto L_08A9A6BC;
    case 720u: goto L_08A9A6C4;
    case 721u: goto L_08A9A6CC;
    case 722u: goto L_08A9A6D8;
    case 723u: goto L_08A9A6F4;
    case 724u: goto L_08A9A714;
    case 725u: goto L_08A9A738;
    case 726u: goto L_08A9A748;
    case 727u: goto L_08A9A750;
    case 728u: goto L_08A9A754;
    case 729u: goto L_08A9A75C;
    case 730u: goto L_08A9A774;
    case 731u: goto L_08A9A77C;
    case 732u: goto L_08A9A784;
    case 733u: goto L_08A9A7A0;
    case 734u: goto L_08A9A7B8;
    case 735u: goto L_08A9A7C4;
    case 736u: goto L_08A9A7D0;
    case 737u: goto L_08A9A7F8;
    case 738u: goto L_08A9A7FC;
    case 739u: goto L_08A9A818;
    case 740u: goto L_08A9A828;
    case 741u: goto L_08A9A838;
    case 742u: goto L_08A9A844;
    case 743u: goto L_08A9A84C;
    case 744u: goto L_08A9A854;
    case 745u: goto L_08A9A870;
    case 746u: goto L_08A9A874;
    case 747u: goto L_08A9A87C;
    case 748u: goto L_08A9A8A0;
    case 749u: goto L_08A9A8B4;
    case 750u: goto L_08A9A8C4;
    case 751u: goto L_08A9A8D0;
    case 752u: goto L_08A9A8D8;
    case 753u: goto L_08A9A8E4;
    case 754u: goto L_08A9A8E8;
    case 755u: goto L_08A9A8F0;
    case 756u: goto L_08A9A8FC;
    case 757u: goto L_08A9A908;
    case 758u: goto L_08A9A91C;
    case 759u: goto L_08A9A928;
    case 760u: goto L_08A9A934;
    case 761u: goto L_08A9A940;
    case 762u: goto L_08A9A94C;
    case 763u: goto L_08A9A958;
    case 764u: goto L_08A9A964;
    case 765u: goto L_08A9A970;
    case 766u: goto L_08A9A974;
    case 767u: goto L_08A9A988;
    case 768u: goto L_08A9A9A0;
    case 769u: goto L_08A9A9C0;
    case 770u: goto L_08A9A9C8;
    case 771u: goto L_08A9A9D4;
    case 772u: goto L_08A9A9E4;
    case 773u: goto L_08A9A9FC;
    case 774u: goto L_08A9AA08;
    case 775u: goto L_08A9AA14;
    case 776u: goto L_08A9AA24;
    case 777u: goto L_08A9AA28;
    case 778u: goto L_08A9AA40;
    case 779u: goto L_08A9AA58;
    case 780u: goto L_08A9AA64;
    case 781u: goto L_08A9AA7C;
    case 782u: goto L_08A9AA88;
    case 783u: goto L_08A9AAA0;
    case 784u: goto L_08A9AAAC;
    case 785u: goto L_08A9AAC4;
    case 786u: goto L_08A9AAD0;
    case 787u: goto L_08A9AAD8;
    case 788u: goto L_08A9AB18;
    case 789u: goto L_08A9AB24;
    case 790u: goto L_08A9AB28;
    case 791u: goto L_08A9AB34;
    case 792u: goto L_08A9AB40;
    case 793u: goto L_08A9AB48;
    case 794u: goto L_08A9AB58;
    case 795u: goto L_08A9AB70;
    case 796u: goto L_08A9AB80;
    case 797u: goto L_08A9AB90;
    case 798u: goto L_08A9ABA0;
    case 799u: goto L_08A9ABAC;
    case 800u: goto L_08A9ABB8;
    case 801u: goto L_08A9ABC4;
    case 802u: goto L_08A9ABCC;
    case 803u: goto L_08A9ABD8;
    case 804u: goto L_08A9ABE4;
    case 805u: goto L_08A9ABEC;
    case 806u: goto L_08A9ABF8;
    case 807u: goto L_08A9AC04;
    case 808u: goto L_08A9AC0C;
    case 809u: goto L_08A9AC18;
    case 810u: goto L_08A9AC1C;
    case 811u: goto L_08A9AC24;
    case 812u: goto L_08A9AC34;
    case 813u: goto L_08A9AC3C;
    case 814u: goto L_08A9AC44;
    case 815u: goto L_08A9AC4C;
    case 816u: goto L_08A9AC54;
    case 817u: goto L_08A9AC5C;
    case 818u: goto L_08A9AC68;
    case 819u: goto L_08A9AC78;
    case 820u: goto L_08A9AC80;
    case 821u: goto L_08A9AC88;
    case 822u: goto L_08A9AC90;
    case 823u: goto L_08A9AC9C;
    case 824u: goto L_08A9ACA4;
    case 825u: goto L_08A9ACAC;
    case 826u: goto L_08A9ACB4;
    case 827u: goto L_08A9ACC8;
    case 828u: goto L_08A9ACE8;
    case 829u: goto L_08A9ACF4;
    case 830u: goto L_08A9AD08;
    case 831u: goto L_08A9AD24;
    case 832u: goto L_08A9AD60;
    case 833u: goto L_08A9AD68;
    case 834u: goto L_08A9AD7C;
    case 835u: goto L_08A9AD94;
    case 836u: goto L_08A9ADC0;
    case 837u: goto L_08A9ADD4;
    case 838u: goto L_08A9ADDC;
    case 839u: goto L_08A9ADE4;
    case 840u: goto L_08A9ADEC;
    case 841u: goto L_08A9ADF8;
    case 842u: goto L_08A9AE04;
    case 843u: goto L_08A9AE24;
    case 844u: goto L_08A9AE48;
    case 845u: goto L_08A9AE54;
    case 846u: goto L_08A9AE6C;
    case 847u: goto L_08A9AE74;
    case 848u: goto L_08A9AE80;
    case 849u: goto L_08A9AE8C;
    case 850u: goto L_08A9AEAC;
    case 851u: goto L_08A9AED0;
    case 852u: goto L_08A9AEDC;
    case 853u: goto L_08A9AEF4;
    case 854u: goto L_08A9AEFC;
    case 855u: goto L_08A9AF1C;
    case 856u: goto L_08A9AF24;
    case 857u: goto L_08A9AF6C;
    case 858u: goto L_08A9AF74;
    case 859u: goto L_08A9AF7C;
    case 860u: goto L_08A9AF84;
    case 861u: goto L_08A9AF90;
    case 862u: goto L_08A9AF98;
    case 863u: goto L_08A9AF9C;
    case 864u: goto L_08A9AFA4;
    case 865u: goto L_08A9AFD0;
    case 866u: goto L_08A9AFDC;
    case 867u: goto L_08A9B008;
    case 868u: goto L_08A9B020;
    case 869u: goto L_08A9B050;
    case 870u: goto L_08A9B084;
    case 871u: goto L_08A9B0A8;
    case 872u: goto L_08A9B0B4;
    case 873u: goto L_08A9B0BC;
    case 874u: goto L_08A9B10C;
    case 875u: goto L_08A9B120;
    case 876u: goto L_08A9B128;
    case 877u: goto L_08A9B130;
    case 878u: goto L_08A9B138;
    case 879u: goto L_08A9B140;
    case 880u: goto L_08A9B148;
    case 881u: goto L_08A9B154;
    case 882u: goto L_08A9B160;
    case 883u: goto L_08A9B168;
    case 884u: goto L_08A9B170;
    case 885u: goto L_08A9B180;
    case 886u: goto L_08A9B18C;
    case 887u: goto L_08A9B194;
    case 888u: goto L_08A9B28C;
    case 889u: goto L_08A9B294;
    case 890u: goto L_08A9B29C;
    case 891u: goto L_08A9B2BC;
    case 892u: goto L_08A9B2D0;
    case 893u: goto L_08A9B2F8;
    case 894u: goto L_08A9B378;
    case 895u: goto L_08A9B380;
    case 896u: goto L_08A9B3C0;
    case 897u: goto L_08A9B3E8;
    case 898u: goto L_08A9B40C;
    case 899u: goto L_08A9B424;
    case 900u: goto L_08A9B440;
    case 901u: goto L_08A9B454;
    case 902u: goto L_08A9B470;
    case 903u: goto L_08A9B484;
    case 904u: goto L_08A9B494;
    case 905u: goto L_08A9B4AC;
    case 906u: goto L_08A9B4B8;
    case 907u: goto L_08A9B4D0;
    case 908u: goto L_08A9B4D8;
    case 909u: goto L_08A9B4EC;
    case 910u: goto L_08A9B500;
    case 911u: goto L_08A9B528;
    case 912u: goto L_08A9B538;
    case 913u: goto L_08A9B544;
    case 914u: goto L_08A9B54C;
    case 915u: goto L_08A9B550;
    case 916u: goto L_08A9B564;
    case 917u: goto L_08A9B59C;
    case 918u: goto L_08A9B5B4;
    case 919u: goto L_08A9B5D0;
    case 920u: goto L_08A9B5E4;
    case 921u: goto L_08A9B5F4;
    case 922u: goto L_08A9B60C;
    case 923u: goto L_08A9B618;
    case 924u: goto L_08A9B62C;
    case 925u: goto L_08A9B640;
    case 926u: goto L_08A9B660;
    case 927u: goto L_08A9B668;
    case 928u: goto L_08A9B670;
    case 929u: goto L_08A9B6A8;
    case 930u: goto L_08A9B6B0;
    case 931u: goto L_08A9B6B8;
    case 932u: goto L_08A9B71C;
    case 933u: goto L_08A9B77C;
    case 934u: goto L_08A9B788;
    case 935u: goto L_08A9B790;
    case 936u: goto L_08A9B7A8;
    case 937u: goto L_08A9B80C;
    case 938u: goto L_08A9B814;
    case 939u: goto L_08A9B81C;
    case 940u: goto L_08A9B830;
    case 941u: goto L_08A9B848;
    case 942u: goto L_08A9B87C;
    case 943u: goto L_08A9B888;
    case 944u: goto L_08A9B890;
    case 945u: goto L_08A9B898;
    case 946u: goto L_08A9B8A0;
    case 947u: goto L_08A9B8A8;
    case 948u: goto L_08A9B8C4;
    case 949u: goto L_08A9B8D0;
    case 950u: goto L_08A9B8E0;
    case 951u: goto L_08A9B8F0;
    case 952u: goto L_08A9B91C;
    case 953u: goto L_08A9B92C;
    case 954u: goto L_08A9B934;
    case 955u: goto L_08A9B948;
    case 956u: goto L_08A9B958;
    case 957u: goto L_08A9B974;
    case 958u: goto L_08A9B984;
    case 959u: goto L_08A9B9A0;
    case 960u: goto L_08A9B9B0;
    case 961u: goto L_08A9B9B4;
    case 962u: goto L_08A9B9C4;
    case 963u: goto L_08A9B9CC;
    case 964u: goto L_08A9B9D4;
    case 965u: goto L_08A9B9E8;
    case 966u: goto L_08A9B9F4;
    case 967u: goto L_08A9BA14;
    case 968u: goto L_08A9BA38;
    case 969u: goto L_08A9BA60;
    case 970u: goto L_08A9BAD0;
    case 971u: goto L_08A9BAD8;
    case 972u: goto L_08A9BB28;
    case 973u: goto L_08A9BB30;
    case 974u: goto L_08A9BB44;
    case 975u: goto L_08A9BBB4;
    case 976u: goto L_08A9BBBC;
    case 977u: goto L_08A9BC0C;
    case 978u: goto L_08A9BC14;
    case 979u: goto L_08A9BC28;
    case 980u: goto L_08A9BC98;
    case 981u: goto L_08A9BCA0;
    case 982u: goto L_08A9BCF0;
    case 983u: goto L_08A9BCF8;
    case 984u: goto L_08A9BD0C;
    case 985u: goto L_08A9BD7C;
    case 986u: goto L_08A9BD84;
    case 987u: goto L_08A9BDD4;
    case 988u: goto L_08A9BDDC;
    case 989u: goto L_08A9BDF0;
    case 990u: goto L_08A9BE54;
    case 991u: goto L_08A9BE5C;
    case 992u: goto L_08A9BE70;
    case 993u: goto L_08A9BE74;
    case 994u: goto L_08A9BE8C;
    case 995u: goto L_08A9BEFC;
    case 996u: goto L_08A9BF04;
    case 997u: goto L_08A9BF18;
    case 998u: goto L_08A9BF34;
    case 999u: goto L_08A9BF88;
    case 1000u: goto L_08A9BF90;
    case 1001u: goto L_08A9BF9C;
    case 1002u: goto L_08A9BFC4;
    case 1003u: goto L_08A9BFD0;
    case 1004u: goto L_08A9BFE4;
    case 1005u: goto L_08A9BFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A98000:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A98024;
      }
      goto L_08A98008;
    }
L_08A98008:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A98024;
      }
      goto L_08A98010;
    }
L_08A98010:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(94))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A98020;
      }
      goto L_08A9801C;
    }
L_08A9801C:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A98020;
L_08A98020:
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
    goto L_08A98024;
L_08A98024:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9802C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A98040;
      }
      goto L_08A98038;
    }
L_08A98038:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A98044;
      }
      goto L_08A98040;
    }
L_08A98040:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42))))));
    goto L_08A98044;
L_08A98044:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9804C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A98060u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 656u, 0x08A96CE8u>(ctx, &aot_mem) && ctx.pc == 0x08A98060u) goto L_08A98060;
    return;
L_08A98060:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A980AC;
      }
      goto L_08A98068;
    }
L_08A98068:
    ctx.gpr[31] = (0x08A98070u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 660u, 0x08A96D0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A98070u) goto L_08A98070;
    return;
L_08A98070:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A980AC;
      }
      goto L_08A98078;
    }
L_08A98078:
    ctx.gpr[31] = (0x08A98080u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 664u, 0x08A96D30u>(ctx, &aot_mem) && ctx.pc == 0x08A98080u) goto L_08A98080;
    return;
L_08A98080:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A980AC;
      }
      goto L_08A98088;
    }
L_08A98088:
    ctx.gpr[31] = (0x08A98090u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 668u, 0x08A96D54u>(ctx, &aot_mem) && ctx.pc == 0x08A98090u) goto L_08A98090;
    return;
L_08A98090:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A980AC;
      }
      goto L_08A98098;
    }
L_08A98098:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(36))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A980B4;
      }
      goto L_08A980A4;
    }
L_08A980A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A980C8;
      }
      goto L_08A980AC;
    }
L_08A980AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A980DC;
      }
      goto L_08A980B4;
    }
L_08A980B4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A980C8;
      }
      goto L_08A980C0;
    }
L_08A980C0:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A980C8;
L_08A980C8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A980D8;
      }
      goto L_08A980D0;
    }
L_08A980D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A980DC;
      }
      goto L_08A980D8;
    }
L_08A980D8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A980DC;
L_08A980DC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A980EC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A980F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A98104u);
    // nop
    goto L_08A9804C;
L_08A98104:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A98110:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A98140;
      }
      goto L_08A98124;
    }
L_08A98124:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(130)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A98138;
      }
      goto L_08A98130;
    }
L_08A98130:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A98148;
      }
      goto L_08A98138;
    }
L_08A98138:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A98150;
      }
      goto L_08A98140;
    }
L_08A98140:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A98150;
      }
      goto L_08A98148;
    }
L_08A98148:
    ctx.gpr[31] = (0x08A98150u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 712u, 0x08A96EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A98150u) goto L_08A98150;
    return;
L_08A98150:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9815C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9818C;
      }
      goto L_08A98170;
    }
L_08A98170:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(130)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A98184;
      }
      goto L_08A9817C;
    }
L_08A9817C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A98194;
      }
      goto L_08A98184;
    }
L_08A98184:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9819C;
      }
      goto L_08A9818C;
    }
L_08A9818C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9819C;
      }
      goto L_08A98194;
    }
L_08A98194:
    ctx.gpr[31] = (0x08A9819Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 692u, 0x08A96E30u>(ctx, &aot_mem) && ctx.pc == 0x08A9819Cu) goto L_08A9819C;
    return;
L_08A9819C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A981A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A981D8;
      }
      goto L_08A981BC;
    }
L_08A981BC:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(130)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A981D0;
      }
      goto L_08A981C8;
    }
L_08A981C8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A981E0;
      }
      goto L_08A981D0;
    }
L_08A981D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A981E8;
      }
      goto L_08A981D8;
    }
L_08A981D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A981E8;
      }
      goto L_08A981E0;
    }
L_08A981E0:
    ctx.gpr[31] = (0x08A981E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 692u, 0x08A96E30u>(ctx, &aot_mem) && ctx.pc == 0x08A981E8u) goto L_08A981E8;
    return;
L_08A981E8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A981F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A98224;
      }
      goto L_08A98208;
    }
L_08A98208:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(130)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9821C;
      }
      goto L_08A98214;
    }
L_08A98214:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9822C;
      }
      goto L_08A9821C;
    }
L_08A9821C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A98234;
      }
      goto L_08A98224;
    }
L_08A98224:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A98234;
      }
      goto L_08A9822C;
    }
L_08A9822C:
    ctx.gpr[31] = (0x08A98234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 712u, 0x08A96EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A98234u) goto L_08A98234;
    return;
L_08A98234:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A98240:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A98274;
      }
      goto L_08A98258;
    }
L_08A98258:
    ctx.gpr[31] = (0x08A98260u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A987E0;
L_08A98260:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9827C;
      }
      goto L_08A98268;
    }
L_08A98268:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A98280;
      }
      goto L_08A98274;
    }
L_08A98274:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A98280;
      }
      goto L_08A9827C;
    }
L_08A9827C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A98280;
L_08A98280:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A98290:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A982D4;
      }
      goto L_08A982A8;
    }
L_08A982A8:
    ctx.gpr[31] = (0x08A982B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A987E0;
L_08A982B0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A982CC;
      }
      goto L_08A982B8;
    }
L_08A982B8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A982DC;
      }
      goto L_08A982C4;
    }
L_08A982C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A982EC;
      }
      goto L_08A982CC;
    }
L_08A982CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A982F0;
      }
      goto L_08A982D4;
    }
L_08A982D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A982F0;
      }
      goto L_08A982DC;
    }
L_08A982DC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(64))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A982EC;
      }
      goto L_08A982E8;
    }
L_08A982E8:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A982EC;
L_08A982EC:
    ctx.gpr[2] = (ctx.gpr[4] & 255u);
    goto L_08A982F0;
L_08A982F0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A98300:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A98308:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A98344;
      }
      goto L_08A98314;
    }
L_08A98314:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(130)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9833C;
      }
      goto L_08A98320;
    }
L_08A98320:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9833C;
      }
      goto L_08A98328;
    }
L_08A98328:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(38))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9834C;
      }
      goto L_08A98334;
    }
L_08A98334:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9835C;
      }
      goto L_08A9833C;
    }
L_08A9833C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A98360;
      }
      goto L_08A98344;
    }
L_08A98344:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A98360;
      }
      goto L_08A9834C;
    }
L_08A9834C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9835C;
      }
      goto L_08A98358;
    }
L_08A98358:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A9835C;
L_08A9835C:
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
    goto L_08A98360;
L_08A98360:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A98368:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A98390;
      }
      goto L_08A98374;
    }
L_08A98374:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(130)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A98388;
      }
      goto L_08A98380;
    }
L_08A98380:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A98398;
      }
      goto L_08A98388;
    }
L_08A98388:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A983A0;
      }
      goto L_08A98390;
    }
L_08A98390:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A983A0;
      }
      goto L_08A98398;
    }
L_08A98398:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(38))))));
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    goto L_08A983A0;
L_08A983A0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A983A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A983E4;
      }
      goto L_08A983C8;
    }
L_08A983C8:
    ctx.gpr[31] = (0x08A983D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A98308;
L_08A983D0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[18] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A983EC;
      }
      goto L_08A983DC;
    }
L_08A983DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9840C;
      }
      goto L_08A983E4;
    }
L_08A983E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A984B0;
      }
      goto L_08A983EC;
    }
L_08A983EC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(176), ctx.gpr[17]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(176)));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(180), ctx.gpr[6]);
    ctx.gpr[31] = (0x08A98408u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20260));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 731u, 0x08A9383Cu>(ctx, &aot_mem) && ctx.pc == 0x08A98408u) goto L_08A98408;
    return;
L_08A98408:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(180)));
    goto L_08A9840C;
L_08A9840C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(176)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[18] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 750 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] - ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A98430;
      }
      goto L_08A98424;
    }
L_08A98424:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 750 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A98464;
      }
      goto L_08A98430;
    }
L_08A98430:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 751 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 51 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9845C;
      }
      goto L_08A9843C;
    }
L_08A9843C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 250 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9845C;
      }
      goto L_08A98444;
    }
L_08A98444:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9845C;
      }
      goto L_08A9844C;
    }
L_08A9844C:
    ctx.gpr[31] = (0x08A98454u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A98368;
L_08A98454:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9848C;
      }
      goto L_08A9845C;
    }
L_08A9845C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A984B0;
      }
      goto L_08A98464;
    }
L_08A98464:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A98478u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20228));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 731u, 0x08A9383Cu>(ctx, &aot_mem) && ctx.pc == 0x08A98478u) goto L_08A98478;
    return;
L_08A98478:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-10000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(180), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(176), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_08A984B0;
      }
      goto L_08A9848C;
    }
L_08A9848C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A984A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20200));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 731u, 0x08A9383Cu>(ctx, &aot_mem) && ctx.pc == 0x08A984A0u) goto L_08A984A0;
    return;
L_08A984A0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-10000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(180), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(176), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 1u);
    goto L_08A984B0;
L_08A984B0:
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
L_08A984C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A984F8;
      }
      goto L_08A984E4;
    }
L_08A984E4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(130)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A98584;
      }
      goto L_08A984F0;
    }
L_08A984F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A98500;
      }
      goto L_08A984F8;
    }
L_08A984F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A98588;
      }
      goto L_08A98500;
    }
L_08A98500:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A98584;
      }
      goto L_08A98508;
    }
L_08A98508:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A98584;
      }
      goto L_08A98514;
    }
L_08A98514:
    ctx.gpr[31] = (0x08A9851Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 859u, 0x08A97538u>(ctx, &aot_mem) && ctx.pc == 0x08A9851Cu) goto L_08A9851C;
    return;
L_08A9851C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.gpr[4] = (0u - ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A98534;
      }
      goto L_08A98528;
    }
L_08A98528:
    ctx.gpr[17] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
      if (branch_taken) {
          goto L_08A9853C;
      }
      goto L_08A98534;
    }
L_08A98534:
    ctx.gpr[17] = (ctx.gpr[17] << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    goto L_08A9853C;
L_08A9853C:
    ctx.gpr[31] = (0x08A98544u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 868u, 0x08A9759Cu>(ctx, &aot_mem) && ctx.pc == 0x08A98544u) goto L_08A98544;
    return;
L_08A98544:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.gpr[4] = (ctx.gpr[16] << 16u);
      if (branch_taken) {
          goto L_08A98568;
      }
      goto L_08A98550;
    }
L_08A98550:
    ctx.gpr[4] = (0u - ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (static_cast<std::int32_t>(ctx.gpr[17]) < 65 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A98574;
      }
      goto L_08A98568;
    }
L_08A98568:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[17] = (static_cast<std::int32_t>(ctx.gpr[17]) < 65 ? 1u : 0u);
    goto L_08A98574;
L_08A98574:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A98584;
      }
      goto L_08A9857C;
    }
L_08A9857C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A98588;
      }
      goto L_08A98584;
    }
L_08A98584:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A98588;
L_08A98588:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9859C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A985D4;
      }
      goto L_08A985B0;
    }
L_08A985B0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A985CC;
      }
      goto L_08A985BC;
    }
L_08A985BC:
    ctx.gpr[31] = (0x08A985C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 692u, 0x08A96E30u>(ctx, &aot_mem) && ctx.pc == 0x08A985C4u) goto L_08A985C4;
    return;
L_08A985C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A985DC;
      }
      goto L_08A985CC;
    }
L_08A985CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A985E0;
      }
      goto L_08A985D4;
    }
L_08A985D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A985E0;
      }
      goto L_08A985DC;
    }
L_08A985DC:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A985E0;
L_08A985E0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A985EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A98624;
      }
      goto L_08A98600;
    }
L_08A98600:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9861C;
      }
      goto L_08A9860C;
    }
L_08A9860C:
    ctx.gpr[31] = (0x08A98614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 712u, 0x08A96EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A98614u) goto L_08A98614;
    return;
L_08A98614:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9862C;
      }
      goto L_08A9861C;
    }
L_08A9861C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A98630;
      }
      goto L_08A98624;
    }
L_08A98624:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A98630;
      }
      goto L_08A9862C;
    }
L_08A9862C:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A98630;
L_08A98630:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9863C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9864Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A9864Cu) goto L_08A9864C;
    return;
L_08A9864C:
    ctx.gpr[31] = (0x08A98654u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 652u, 0x08A96CA4u>(ctx, &aot_mem) && ctx.pc == 0x08A98654u) goto L_08A98654;
    return;
L_08A98654:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < -15 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A98680;
      }
      goto L_08A98664;
    }
L_08A98664:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(25672))))));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < -5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A98680;
      }
      goto L_08A98674;
    }
L_08A98674:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(25672), static_cast<std::uint16_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A98688;
      }
      goto L_08A98680;
    }
L_08A98680:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(25672), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[2] = (0u | 0u);
    goto L_08A98688;
L_08A98688:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A98694:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A986A4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A986A4u) goto L_08A986A4;
    return;
L_08A986A4:
    ctx.gpr[31] = (0x08A986ACu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 652u, 0x08A96CA4u>(ctx, &aot_mem) && ctx.pc == 0x08A986ACu) goto L_08A986AC;
    return;
L_08A986AC:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A986D8;
      }
      goto L_08A986BC;
    }
L_08A986BC:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(25674))))));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A986D8;
      }
      goto L_08A986CC;
    }
L_08A986CC:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(25674), static_cast<std::uint16_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A986E0;
      }
      goto L_08A986D8;
    }
L_08A986D8:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(25674), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[2] = (0u | 0u);
    goto L_08A986E0;
L_08A986E0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A986EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A986FCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A986FCu) goto L_08A986FC;
    return;
L_08A986FC:
    ctx.gpr[31] = (0x08A98704u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 648u, 0x08A96C60u>(ctx, &aot_mem) && ctx.pc == 0x08A98704u) goto L_08A98704;
    return;
L_08A98704:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < -25 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A98730;
      }
      goto L_08A98714;
    }
L_08A98714:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(25676))))));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < -20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A98730;
      }
      goto L_08A98724;
    }
L_08A98724:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(25676), static_cast<std::uint16_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A98738;
      }
      goto L_08A98730;
    }
L_08A98730:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(25676), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[2] = (0u | 0u);
    goto L_08A98738;
L_08A98738:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A98744:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A98754u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A98754u) goto L_08A98754;
    return;
L_08A98754:
    ctx.gpr[31] = (0x08A9875Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 648u, 0x08A96C60u>(ctx, &aot_mem) && ctx.pc == 0x08A9875Cu) goto L_08A9875C;
    return;
L_08A9875C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 26 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A98788;
      }
      goto L_08A9876C;
    }
L_08A9876C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(25678))))));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A98788;
      }
      goto L_08A9877C;
    }
L_08A9877C:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(25678), static_cast<std::uint16_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A98790;
      }
      goto L_08A98788;
    }
L_08A98788:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(25678), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[2] = (0u | 0u);
    goto L_08A98790;
L_08A98790:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9879C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A987BC;
      }
      goto L_08A987A8;
    }
L_08A987A8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A987C4;
      }
      goto L_08A987B4;
    }
L_08A987B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A987D4;
      }
      goto L_08A987BC;
    }
L_08A987BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A987D8;
      }
      goto L_08A987C4;
    }
L_08A987C4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(60))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A987D4;
      }
      goto L_08A987D0;
    }
L_08A987D0:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A987D4;
L_08A987D4:
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
    goto L_08A987D8;
L_08A987D8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A987E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A98810;
      }
      goto L_08A987F8;
    }
L_08A987F8:
    ctx.gpr[31] = (0x08A98800u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1006u, 0x08A97C2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A98800u) goto L_08A98800;
    return;
L_08A98800:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A98818;
      }
      goto L_08A98808;
    }
L_08A98808:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A98860;
      }
      goto L_08A98810;
    }
L_08A98810:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A98938;
      }
      goto L_08A98818;
    }
L_08A98818:
    ctx.gpr[31] = (0x08A98820u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A98820u) goto L_08A98820;
    return;
L_08A98820:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A98860;
      }
      goto L_08A98830;
    }
L_08A98830:
    ctx.gpr[31] = (0x08A98838u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A98838u) goto L_08A98838;
    return;
L_08A98838:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A98874;
      }
      goto L_08A98848;
    }
L_08A98848:
    ctx.gpr[31] = (0x08A98850u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A98850u) goto L_08A98850;
    return;
L_08A98850:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A98874;
      }
      goto L_08A98860;
    }
L_08A98860:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
      if (branch_taken) {
          goto L_08A9887C;
      }
      goto L_08A9886C;
    }
L_08A9886C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A98924;
      }
      goto L_08A98874;
    }
L_08A98874:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A98938;
      }
      goto L_08A9887C;
    }
L_08A9887C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A98934;
      }
      goto L_08A98884;
    }
L_08A98884:
    ctx.gpr[31] = (0x08A9888Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A9888Cu) goto L_08A9888C;
    return;
L_08A9888C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3229)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A98934;
      }
      goto L_08A98898;
    }
L_08A98898:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 8u);
      if (branch_taken) {
          goto L_08A98934;
      }
      goto L_08A988CC;
    }
L_08A988CC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 16u);
      if (branch_taken) {
          goto L_08A98934;
      }
      goto L_08A988D4;
    }
L_08A988D4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 46u);
      if (branch_taken) {
          goto L_08A98934;
      }
      goto L_08A988DC;
    }
L_08A988DC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 34u);
      if (branch_taken) {
          goto L_08A98934;
      }
      goto L_08A988E4;
    }
L_08A988E4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A98934;
      }
      goto L_08A988EC;
    }
L_08A988EC:
    ctx.gpr[31] = (0x08A988F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 859u, 0x08A97538u>(ctx, &aot_mem) && ctx.pc == 0x08A988F4u) goto L_08A988F4;
    return;
L_08A988F4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9890C;
      }
      goto L_08A988FC;
    }
L_08A988FC:
    ctx.gpr[31] = (0x08A98904u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 868u, 0x08A9759Cu>(ctx, &aot_mem) && ctx.pc == 0x08A98904u) goto L_08A98904;
    return;
L_08A98904:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A98914;
      }
      goto L_08A9890C;
    }
L_08A9890C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A98938;
      }
      goto L_08A98914;
    }
L_08A98914:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A98938;
      }
      goto L_08A98924;
    }
L_08A98924:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A98934;
      }
      goto L_08A9892C;
    }
L_08A9892C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A98938;
      }
      goto L_08A98934;
    }
L_08A98934:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A98938;
L_08A98938:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A98948:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A98980;
      }
      goto L_08A98960;
    }
L_08A98960:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(130)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
        goto L_08A98988;
    }
    goto L_08A98970;
L_08A98970:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A98998;
      }
      goto L_08A98978;
    }
L_08A98978:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A989C8;
      }
      goto L_08A98980;
    }
L_08A98980:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A989C8;
      }
      goto L_08A98988;
    }
L_08A98988:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A98978;
      }
      goto L_08A98990;
    }
L_08A98990:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A989A0;
      }
      goto L_08A98998;
    }
L_08A98998:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A989C8;
      }
      goto L_08A989A0;
    }
L_08A989A0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08A989C4;
      }
      goto L_08A989AC;
    }
L_08A989AC:
    ctx.gpr[31] = (0x08A989B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 648u, 0x08A96C60u>(ctx, &aot_mem) && ctx.pc == 0x08A989B4u) goto L_08A989B4;
    return;
L_08A989B4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A989C4;
      }
      goto L_08A989C0;
    }
L_08A989C0:
    ctx.gpr[16] = (0u | 1u);
    goto L_08A989C4;
L_08A989C4:
    ctx.gpr[2] = (ctx.gpr[16] & 255u);
    goto L_08A989C8;
L_08A989C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A989D8:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A98A00;
      }
      goto L_08A989E4;
    }
L_08A989E4:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(130)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A989F8;
      }
      goto L_08A989F0;
    }
L_08A989F0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A98A08;
      }
      goto L_08A989F8;
    }
L_08A989F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A98A10;
      }
      goto L_08A98A00;
    }
L_08A98A00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A98A10;
      }
      goto L_08A98A08;
    }
L_08A98A08:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(38))))));
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    goto L_08A98A10;
L_08A98A10:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A98A18:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A98A40;
      }
      goto L_08A98A24;
    }
L_08A98A24:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(130)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A98A38;
      }
      goto L_08A98A30;
    }
L_08A98A30:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A98A48;
      }
      goto L_08A98A38;
    }
L_08A98A38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A98A50;
      }
      goto L_08A98A40;
    }
L_08A98A40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A98A50;
      }
      goto L_08A98A48;
    }
L_08A98A48:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42))))));
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    goto L_08A98A50;
L_08A98A50:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A98A58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(130)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A98B48;
      }
      goto L_08A98A74;
    }
L_08A98A74:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A98B48;
      }
      goto L_08A98A7C;
    }
L_08A98A7C:
    ctx.gpr[31] = (0x08A98A84u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A98A84u) goto L_08A98A84;
    return;
L_08A98A84:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A98AE4;
      }
      goto L_08A98A90;
    }
L_08A98A90:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2388))))));
    ctx.gpr[4] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A98AD4;
      }
      goto L_08A98AA8;
    }
L_08A98AA8:
    ctx.gpr[31] = (0x08A98AB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 648u, 0x08A96C60u>(ctx, &aot_mem) && ctx.pc == 0x08A98AB0u) goto L_08A98AB0;
    return;
L_08A98AB0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08A98B4C;
      }
      goto L_08A98AD4;
    }
L_08A98AD4:
    ctx.gpr[31] = (0x08A98ADCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 648u, 0x08A96C60u>(ctx, &aot_mem) && ctx.pc == 0x08A98ADCu) goto L_08A98ADC;
    return;
L_08A98ADC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A98B4C;
      }
      goto L_08A98AE4;
    }
L_08A98AE4:
    ctx.gpr[31] = (0x08A98AECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 648u, 0x08A96C60u>(ctx, &aot_mem) && ctx.pc == 0x08A98AECu) goto L_08A98AEC;
    return;
L_08A98AEC:
    ctx.gpr[4] = (2232u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2388))))));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08A98B24;
      }
      goto L_08A98B08;
    }
L_08A98B08:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(188)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08A98B4C;
      }
      goto L_08A98B24;
    }
L_08A98B24:
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08A98B4C;
      }
      goto L_08A98B48;
    }
L_08A98B48:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A98B4C;
L_08A98B4C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A98B5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(130)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A98C78;
      }
      goto L_08A98B78;
    }
L_08A98B78:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A98C78;
      }
      goto L_08A98B80;
    }
L_08A98B80:
    ctx.gpr[31] = (0x08A98B88u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A98B88u) goto L_08A98B88;
    return;
L_08A98B88:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A98C04;
      }
      goto L_08A98B94;
    }
L_08A98B94:
    ctx.gpr[31] = (0x08A98B9Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A98B9Cu) goto L_08A98B9C;
    return;
L_08A98B9C:
    ctx.gpr[31] = (0x08A98BA4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 652u, 0x08A96CA4u>(ctx, &aot_mem) && ctx.pc == 0x08A98BA4u) goto L_08A98BA4;
    return;
L_08A98BA4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25651)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08A98BBC;
      }
      goto L_08A98BB8;
    }
L_08A98BB8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    goto L_08A98BBC;
L_08A98BBC:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2388))))));
    ctx.gpr[4] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A98BF0;
      }
      goto L_08A98BD4;
    }
L_08A98BD4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08A98C7C;
      }
      goto L_08A98BF0;
    }
L_08A98BF0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08A98C7C;
      }
      goto L_08A98C04;
    }
L_08A98C04:
    ctx.gpr[31] = (0x08A98C0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 652u, 0x08A96CA4u>(ctx, &aot_mem) && ctx.pc == 0x08A98C0Cu) goto L_08A98C0C;
    return;
L_08A98C0C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25651)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08A98C24;
      }
      goto L_08A98C20;
    }
L_08A98C20:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    goto L_08A98C24;
L_08A98C24:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2388))))));
    ctx.gpr[4] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (16076u << 16u);
      if (branch_taken) {
          goto L_08A98C58;
      }
      goto L_08A98C3C;
    }
L_08A98C3C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(188)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08A98C7C;
      }
      goto L_08A98C58;
    }
L_08A98C58:
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08A98C7C;
      }
      goto L_08A98C78;
    }
L_08A98C78:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A98C7C;
L_08A98C7C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A98C8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 7 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A98D78;
      }
      goto L_08A98CAC;
    }
L_08A98CAC:
    ctx.gpr[31] = (0x08A98CB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1006u, 0x08A97C2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A98CB4u) goto L_08A98CB4;
    return;
L_08A98CB4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A98D08;
      }
      goto L_08A98CBC;
    }
L_08A98CBC:
    ctx.gpr[31] = (0x08A98CC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A98CC4u) goto L_08A98CC4;
    return;
L_08A98CC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A98D08;
      }
      goto L_08A98CD4;
    }
L_08A98CD4:
    ctx.gpr[31] = (0x08A98CDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A98CDCu) goto L_08A98CDC;
    return;
L_08A98CDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A98D04;
      }
      goto L_08A98CEC;
    }
L_08A98CEC:
    ctx.gpr[31] = (0x08A98CF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A98CF4u) goto L_08A98CF4;
    return;
L_08A98CF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A98D08;
      }
      goto L_08A98D04;
    }
L_08A98D04:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    goto L_08A98D08;
L_08A98D08:
    ctx.gpr[16] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(130)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A98D3C;
      }
      goto L_08A98D14;
    }
L_08A98D14:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A98D3C;
      }
      goto L_08A98D20;
    }
L_08A98D20:
    ctx.gpr[31] = (0x08A98D28u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A98D28u) goto L_08A98D28;
    return;
L_08A98D28:
    ctx.gpr[31] = (0x08A98D30u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 648u, 0x08A96C60u>(ctx, &aot_mem) && ctx.pc == 0x08A98D30u) goto L_08A98D30;
    return;
L_08A98D30:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08A98D3C;
      }
      goto L_08A98D3C;
    }
L_08A98D3C:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A98D64;
      }
      goto L_08A98D50;
    }
L_08A98D50:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08A98D7C;
      }
      goto L_08A98D64;
    }
L_08A98D64:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08A98D7C;
      }
      goto L_08A98D78;
    }
L_08A98D78:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A98D7C;
L_08A98D7C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A98D8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 7 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A98E44;
      }
      goto L_08A98DAC;
    }
L_08A98DAC:
    ctx.gpr[31] = (0x08A98DB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1006u, 0x08A97C2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A98DB4u) goto L_08A98DB4;
    return;
L_08A98DB4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A98DC0;
      }
      goto L_08A98DBC;
    }
L_08A98DBC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    goto L_08A98DC0;
L_08A98DC0:
    ctx.gpr[16] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(130)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A98E08;
      }
      goto L_08A98DCC;
    }
L_08A98DCC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A98E08;
      }
      goto L_08A98DD8;
    }
L_08A98DD8:
    ctx.gpr[31] = (0x08A98DE0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A98DE0u) goto L_08A98DE0;
    return;
L_08A98DE0:
    ctx.gpr[31] = (0x08A98DE8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 652u, 0x08A96CA4u>(ctx, &aot_mem) && ctx.pc == 0x08A98DE8u) goto L_08A98DE8;
    return;
L_08A98DE8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25651)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08A98E00;
      }
      goto L_08A98DFC;
    }
L_08A98DFC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    goto L_08A98E00;
L_08A98E00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A98E08;
      }
      goto L_08A98E08;
    }
L_08A98E08:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A98E30;
      }
      goto L_08A98E1C;
    }
L_08A98E1C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08A98E48;
      }
      goto L_08A98E30;
    }
L_08A98E30:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08A98E48;
      }
      goto L_08A98E44;
    }
L_08A98E44:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A98E48;
L_08A98E48:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A98E58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A98E6Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1101u, 0x08A97F90u>(ctx, &aot_mem) && ctx.pc == 0x08A98E6Cu) goto L_08A98E6C;
    return;
L_08A98E6C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(168), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(172), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A98E88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] << 16u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.gpr[9] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 12u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[11] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[31]);
    goto L_08A98ED8;
L_08A98ED8:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[11] = (ctx.gpr[5] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08A98ED8;
      }
      goto L_08A98EFC;
    }
L_08A98EFC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[10]));
      if (branch_taken) {
          goto L_08A98F0C;
      }
      goto L_08A98F04;
    }
L_08A98F04:
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-5826), static_cast<std::uint8_t>(0u));
    goto L_08A98F0C;
L_08A98F0C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A98F38;
      }
      goto L_08A98F14;
    }
L_08A98F14:
    ctx.gpr[17] = (2230u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20628)));
    ctx.gpr[5] = (17152u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A98F40;
      }
      goto L_08A98F30;
    }
L_08A98F30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A98F4C;
      }
      goto L_08A98F38;
    }
L_08A98F38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A996E4;
      }
      goto L_08A98F40;
    }
L_08A98F40:
    ctx.gpr[31] = (0x08A98F48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 542u, 0x08AFA5FCu>(ctx, &aot_mem) && ctx.pc == 0x08A98F48u) goto L_08A98F48;
    return;
L_08A98F48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20628)));
    goto L_08A98F4C;
L_08A98F4C:
    ctx.gpr[31] = (0x08A98F54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 582u, 0x08837FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A98F54u) goto L_08A98F54;
    return;
L_08A98F54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20628)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A98F70;
      }
      goto L_08A98F60;
    }
L_08A98F60:
    ctx.gpr[31] = (0x08A98F68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 542u, 0x08AFA5FCu>(ctx, &aot_mem) && ctx.pc == 0x08A98F68u) goto L_08A98F68;
    return;
L_08A98F68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20628)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    goto L_08A98F70;
L_08A98F70:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A98FA8;
      }
      goto L_08A98F9C;
    }
L_08A98F9C:
    ctx.gpr[31] = (0x08A98FA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 542u, 0x08AFA5FCu>(ctx, &aot_mem) && ctx.pc == 0x08A98FA4u) goto L_08A98FA4;
    return;
L_08A98FA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20628)));
    goto L_08A98FA8;
L_08A98FA8:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(64)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) & 0x7FFFFFFFu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(25644)));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08A99000;
      }
      goto L_08A98FEC;
    }
L_08A98FEC:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9900C;
      }
      goto L_08A99000;
    }
L_08A99000:
    ctx.gpr[31] = (0x08A99008u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0BA74u;
    return;
L_08A99008:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20628)));
    goto L_08A9900C;
L_08A9900C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08A99020;
      }
      goto L_08A99014;
    }
L_08A99014:
    ctx.gpr[31] = (0x08A9901Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 542u, 0x08AFA5FCu>(ctx, &aot_mem) && ctx.pc == 0x08A9901Cu) goto L_08A9901C;
    return;
L_08A9901C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20628)));
    goto L_08A99020;
L_08A99020:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[19] = (0u | 255u);
        goto L_08A9903C;
    }
    goto L_08A9903C;
L_08A9903C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(ctx.gpr[19]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(50))))));
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(13952)));
    ctx.gpr[5] = (2229u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(25640)));
      if (branch_taken) {
          goto L_08A9905C;
      }
      goto L_08A99054;
    }
L_08A99054:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A9905C;
L_08A9905C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9906C;
      }
      goto L_08A99064;
    }
L_08A99064:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    goto L_08A9906C;
L_08A9906C:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A990B0;
      }
      goto L_08A9907C;
    }
L_08A9907C:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[5]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::log2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::exp2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<32u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08A990E8;
      }
      goto L_08A990B0;
    }
L_08A990B0:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[5]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::log2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::exp2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<32u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08A990E8;
L_08A990E8:
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9912C;
      }
      goto L_08A990F8;
    }
L_08A990F8:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[6]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::log2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::exp2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<32u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A99164;
      }
      goto L_08A9912C;
    }
L_08A9912C:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[6]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::log2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::exp2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<32u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A99164;
L_08A99164:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20628)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A99188;
      }
      goto L_08A99178;
    }
L_08A99178:
    ctx.gpr[31] = (0x08A99180u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 542u, 0x08AFA5FCu>(ctx, &aot_mem) && ctx.pc == 0x08A99180u) goto L_08A99180;
    return;
L_08A99180:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20628)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    goto L_08A99188;
L_08A99188:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20628)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A991DC;
      }
      goto L_08A991CC;
    }
L_08A991CC:
    ctx.gpr[31] = (0x08A991D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 542u, 0x08AFA5FCu>(ctx, &aot_mem) && ctx.pc == 0x08A991D4u) goto L_08A991D4;
    return;
L_08A991D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20628)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    goto L_08A991DC;
L_08A991DC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 100 ? 1u : 0u);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[8]));
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[6] = (0u | 255u);
        goto L_08A9922C;
    }
    goto L_08A9922C;
L_08A9922C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < -99 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[6] = (0u | 255u);
        goto L_08A99240;
    }
    goto L_08A99240;
L_08A99240:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -99 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[6] = (0u | 255u);
        goto L_08A99254;
    }
    goto L_08A99254;
L_08A99254:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 100 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[6] = (0u | 255u);
        goto L_08A99268;
    }
    goto L_08A99268;
L_08A99268:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20628)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08A99284;
      }
      goto L_08A99278;
    }
L_08A99278:
    ctx.gpr[31] = (0x08A99280u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 542u, 0x08AFA5FCu>(ctx, &aot_mem) && ctx.pc == 0x08A99280u) goto L_08A99280;
    return;
L_08A99280:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20628)));
    goto L_08A99284;
L_08A99284:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[19] = (0u | 255u);
        goto L_08A9929C;
    }
    goto L_08A9929C;
L_08A9929C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20628)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08A992B8;
      }
      goto L_08A992AC;
    }
L_08A992AC:
    ctx.gpr[31] = (0x08A992B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 542u, 0x08AFA5FCu>(ctx, &aot_mem) && ctx.pc == 0x08A992B4u) goto L_08A992B4;
    return;
L_08A992B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20628)));
    goto L_08A992B8;
L_08A992B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[19] = (0u | 255u);
        goto L_08A992D0;
    }
    goto L_08A992D0;
L_08A992D0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[19]));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20628)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08A992F4;
      }
      goto L_08A992E8;
    }
L_08A992E8:
    ctx.gpr[31] = (0x08A992F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 542u, 0x08AFA5FCu>(ctx, &aot_mem) && ctx.pc == 0x08A992F0u) goto L_08A992F0;
    return;
L_08A992F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20628)));
    goto L_08A992F4;
L_08A992F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[19] = (0u | 255u);
        goto L_08A9930C;
    }
    goto L_08A9930C;
L_08A9930C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20628)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08A99328;
      }
      goto L_08A9931C;
    }
L_08A9931C:
    ctx.gpr[31] = (0x08A99324u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 542u, 0x08AFA5FCu>(ctx, &aot_mem) && ctx.pc == 0x08A99324u) goto L_08A99324;
    return;
L_08A99324:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20628)));
    goto L_08A99328;
L_08A99328:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[19] = (0u | 255u);
        goto L_08A99340;
    }
    goto L_08A99340;
L_08A99340:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20628)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9935C;
      }
      goto L_08A99350;
    }
L_08A99350:
    ctx.gpr[31] = (0x08A99358u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 542u, 0x08AFA5FCu>(ctx, &aot_mem) && ctx.pc == 0x08A99358u) goto L_08A99358;
    return;
L_08A99358:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20628)));
    goto L_08A9935C;
L_08A9935C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[19] = (0u | 255u);
        goto L_08A99374;
    }
    goto L_08A99374;
L_08A99374:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20628)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08A99390;
      }
      goto L_08A99384;
    }
L_08A99384:
    ctx.gpr[31] = (0x08A9938Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 542u, 0x08AFA5FCu>(ctx, &aot_mem) && ctx.pc == 0x08A9938Cu) goto L_08A9938C;
    return;
L_08A9938C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20628)));
    goto L_08A99390;
L_08A99390:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[19] = (0u | 255u);
        goto L_08A993A8;
    }
    goto L_08A993A8;
L_08A993A8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20628)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08A993C4;
      }
      goto L_08A993B8;
    }
L_08A993B8:
    ctx.gpr[31] = (0x08A993C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 542u, 0x08AFA5FCu>(ctx, &aot_mem) && ctx.pc == 0x08A993C0u) goto L_08A993C0;
    return;
L_08A993C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20628)));
    goto L_08A993C4;
L_08A993C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[19] = (0u | 255u);
        goto L_08A993DC;
    }
    goto L_08A993DC;
L_08A993DC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20628)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08A993F8;
      }
      goto L_08A993EC;
    }
L_08A993EC:
    ctx.gpr[31] = (0x08A993F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 542u, 0x08AFA5FCu>(ctx, &aot_mem) && ctx.pc == 0x08A993F4u) goto L_08A993F4;
    return;
L_08A993F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20628)));
    goto L_08A993F8;
L_08A993F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[19] = (0u | 255u);
        goto L_08A9940C;
    }
    goto L_08A9940C;
L_08A9940C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20628)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08A99428;
      }
      goto L_08A9941C;
    }
L_08A9941C:
    ctx.gpr[31] = (0x08A99424u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 542u, 0x08AFA5FCu>(ctx, &aot_mem) && ctx.pc == 0x08A99424u) goto L_08A99424;
    return;
L_08A99424:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20628)));
    goto L_08A99428;
L_08A99428:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[19] = (0u | 255u);
        goto L_08A99440;
    }
    goto L_08A99440;
L_08A99440:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20628)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9945C;
      }
      goto L_08A99450;
    }
L_08A99450:
    ctx.gpr[31] = (0x08A99458u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 542u, 0x08AFA5FCu>(ctx, &aot_mem) && ctx.pc == 0x08A99458u) goto L_08A99458;
    return;
L_08A99458:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20628)));
    goto L_08A9945C;
L_08A9945C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[19] = (0u | 255u);
        goto L_08A99474;
    }
    goto L_08A99474;
L_08A99474:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20628)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08A99490;
      }
      goto L_08A99484;
    }
L_08A99484:
    ctx.gpr[31] = (0x08A9948Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 542u, 0x08AFA5FCu>(ctx, &aot_mem) && ctx.pc == 0x08A9948Cu) goto L_08A9948C;
    return;
L_08A9948C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20628)));
    goto L_08A99490;
L_08A99490:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[19] = (0u | 255u);
        goto L_08A994A8;
    }
    goto L_08A994A8;
L_08A994A8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20628)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08A994C4;
      }
      goto L_08A994B8;
    }
L_08A994B8:
    ctx.gpr[31] = (0x08A994C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 542u, 0x08AFA5FCu>(ctx, &aot_mem) && ctx.pc == 0x08A994C0u) goto L_08A994C0;
    return;
L_08A994C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20628)));
    goto L_08A994C4;
L_08A994C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(6))))));
    ctx.gpr[5] = (ctx.gpr[5] & 8192u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(146)));
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[19] = (0u | 255u);
        goto L_08A994E8;
    }
    goto L_08A994E8;
L_08A994E8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[19]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(13952)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A99518;
      }
      goto L_08A994F8;
    }
L_08A994F8:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(40))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(42))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(20))))));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[9]));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[7]));
    goto L_08A99518;
L_08A99518:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(0u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_08A99574;
      }
      goto L_08A99524;
    }
L_08A99524:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9955C;
      }
      goto L_08A99530;
    }
L_08A99530:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(60))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99550;
      }
      goto L_08A9953C;
    }
L_08A9953C:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99550;
      }
      goto L_08A99548;
    }
L_08A99548:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_08A99574;
      }
      goto L_08A99550;
    }
L_08A99550:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A99574;
      }
      goto L_08A9955C;
    }
L_08A9955C:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99574;
      }
      goto L_08A99564;
    }
L_08A99564:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99574;
      }
      goto L_08A99570;
    }
L_08A99570:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    goto L_08A99574;
L_08A99574:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99660;
      }
      goto L_08A9957C;
    }
L_08A9957C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99660;
      }
      goto L_08A99588;
    }
L_08A99588:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99660;
      }
      goto L_08A99594;
    }
L_08A99594:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99660;
      }
      goto L_08A995A0;
    }
L_08A995A0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99660;
      }
      goto L_08A995AC;
    }
L_08A995AC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(20))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99660;
      }
      goto L_08A995B8;
    }
L_08A995B8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(22))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99660;
      }
      goto L_08A995C4;
    }
L_08A995C4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(24))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99660;
      }
      goto L_08A995D0;
    }
L_08A995D0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(40))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99660;
      }
      goto L_08A995DC;
    }
L_08A995DC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99660;
      }
      goto L_08A995E8;
    }
L_08A995E8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(44))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99660;
      }
      goto L_08A995F4;
    }
L_08A995F4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99660;
      }
      goto L_08A99600;
    }
L_08A99600:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(34))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99660;
      }
      goto L_08A9960C;
    }
L_08A9960C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(36))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99660;
      }
      goto L_08A99618;
    }
L_08A99618:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99660;
      }
      goto L_08A99624;
    }
L_08A99624:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99660;
      }
      goto L_08A99630;
    }
L_08A99630:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99660;
      }
      goto L_08A9963C;
    }
L_08A9963C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99660;
      }
      goto L_08A99648;
    }
L_08A99648:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(46))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99660;
      }
      goto L_08A99654;
    }
L_08A99654:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(48))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9966C;
      }
      goto L_08A99660;
    }
L_08A99660:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(164), ctx.gpr[4]);
    goto L_08A9966C;
L_08A9966C:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(146), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99688;
      }
      goto L_08A99684;
    }
L_08A99684:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(146), static_cast<std::uint8_t>(0u));
    goto L_08A99688;
L_08A99688:
    ctx.gpr[31] = (0x08A99690u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1016u, 0x08A97C88u>(ctx, &aot_mem) && ctx.pc == 0x08A99690u) goto L_08A99690;
    return;
L_08A99690:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(146)));
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(138), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    goto L_08A996A4;
L_08A996A4:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(102))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(104), static_cast<std::uint16_t>(ctx.gpr[6]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08A996A4;
      }
      goto L_08A996B8;
    }
L_08A996B8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-5828)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A996D0;
      }
      goto L_08A996C8;
    }
L_08A996C8:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29204), static_cast<std::uint8_t>(0u));
    goto L_08A996D0;
L_08A996D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(147)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A996E4;
      }
      goto L_08A996DC;
    }
L_08A996DC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(147), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A996E4;
L_08A996E4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A99710:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] << 24u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    goto L_08A99738;
L_08A99738:
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(149))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(150), static_cast<std::uint8_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_08A99738;
      }
      goto L_08A99754;
    }
L_08A99754:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(935)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99798;
      }
      goto L_08A99768;
    }
L_08A99768:
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(149));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A9977Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27071));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 457u, 0x08A960F4u>(ctx, &aot_mem) && ctx.pc == 0x08A9977Cu) goto L_08A9977C;
    return;
L_08A9977C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A997A0;
      }
      goto L_08A99784;
    }
L_08A99784:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99790u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 741u, 0x08A938F4u>(ctx, &aot_mem) && ctx.pc == 0x08A99790u) goto L_08A99790;
    return;
L_08A99790:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A00C;
      }
      goto L_08A99798;
    }
L_08A99798:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A00C;
      }
      goto L_08A997A0;
    }
L_08A997A0:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A997B0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27062));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 457u, 0x08A960F4u>(ctx, &aot_mem) && ctx.pc == 0x08A997B0u) goto L_08A997B0;
    return;
L_08A997B0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A997CC;
      }
      goto L_08A997B8;
    }
L_08A997B8:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A997C4u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 787u, 0x08A93B50u>(ctx, &aot_mem) && ctx.pc == 0x08A997C4u) goto L_08A997C4;
    return;
L_08A997C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A00C;
      }
      goto L_08A997CC;
    }
L_08A997CC:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A997DCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27053));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 457u, 0x08A960F4u>(ctx, &aot_mem) && ctx.pc == 0x08A997DCu) goto L_08A997DC;
    return;
L_08A997DC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A997F8;
      }
      goto L_08A997E4;
    }
L_08A997E4:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A997F0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 830u, 0x08A93D88u>(ctx, &aot_mem) && ctx.pc == 0x08A997F0u) goto L_08A997F0;
    return;
L_08A997F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A00C;
      }
      goto L_08A997F8;
    }
L_08A997F8:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99808u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27044));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 457u, 0x08A960F4u>(ctx, &aot_mem) && ctx.pc == 0x08A99808u) goto L_08A99808;
    return;
L_08A99808:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99824;
      }
      goto L_08A99810;
    }
L_08A99810:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A9981Cu);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 201u, 0x08A94E38u>(ctx, &aot_mem) && ctx.pc == 0x08A9981Cu) goto L_08A9981C;
    return;
L_08A9981C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A00C;
      }
      goto L_08A99824;
    }
L_08A99824:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99834u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27035));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 457u, 0x08A960F4u>(ctx, &aot_mem) && ctx.pc == 0x08A99834u) goto L_08A99834;
    return;
L_08A99834:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99850;
      }
      goto L_08A9983C;
    }
L_08A9983C:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99848u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 210u, 0x08A94F18u>(ctx, &aot_mem) && ctx.pc == 0x08A99848u) goto L_08A99848;
    return;
L_08A99848:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A00C;
      }
      goto L_08A99850;
    }
L_08A99850:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99860u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27026));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 457u, 0x08A960F4u>(ctx, &aot_mem) && ctx.pc == 0x08A99860u) goto L_08A99860;
    return;
L_08A99860:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99880;
      }
      goto L_08A99868;
    }
L_08A99868:
    ctx.gpr[4] = (0u | 32u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08A99878u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 33u, 0x08A94244u>(ctx, &aot_mem) && ctx.pc == 0x08A99878u) goto L_08A99878;
    return;
L_08A99878:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A00C;
      }
      goto L_08A99880;
    }
L_08A99880:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99890u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27017));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 457u, 0x08A960F4u>(ctx, &aot_mem) && ctx.pc == 0x08A99890u) goto L_08A99890;
    return;
L_08A99890:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A998AC;
      }
      goto L_08A99898;
    }
L_08A99898:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A998A4u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 220u, 0x08A94FE0u>(ctx, &aot_mem) && ctx.pc == 0x08A998A4u) goto L_08A998A4;
    return;
L_08A998A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A00C;
      }
      goto L_08A998AC;
    }
L_08A998AC:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A998BCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27008));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 457u, 0x08A960F4u>(ctx, &aot_mem) && ctx.pc == 0x08A998BCu) goto L_08A998BC;
    return;
L_08A998BC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A998D8;
      }
      goto L_08A998C4;
    }
L_08A998C4:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A998D0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 233u, 0x08A950B8u>(ctx, &aot_mem) && ctx.pc == 0x08A998D0u) goto L_08A998D0;
    return;
L_08A998D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A00C;
      }
      goto L_08A998D8;
    }
L_08A998D8:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A998E8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26999));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 457u, 0x08A960F4u>(ctx, &aot_mem) && ctx.pc == 0x08A998E8u) goto L_08A998E8;
    return;
L_08A998E8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99904;
      }
      goto L_08A998F0;
    }
L_08A998F0:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A998FCu);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 244u, 0x08A95170u>(ctx, &aot_mem) && ctx.pc == 0x08A998FCu) goto L_08A998FC;
    return;
L_08A998FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A00C;
      }
      goto L_08A99904;
    }
L_08A99904:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99914u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26990));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 457u, 0x08A960F4u>(ctx, &aot_mem) && ctx.pc == 0x08A99914u) goto L_08A99914;
    return;
L_08A99914:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99930;
      }
      goto L_08A9991C;
    }
L_08A9991C:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99928u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 254u, 0x08A9521Cu>(ctx, &aot_mem) && ctx.pc == 0x08A99928u) goto L_08A99928;
    return;
L_08A99928:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A00C;
      }
      goto L_08A99930;
    }
L_08A99930:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99940u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26981));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 457u, 0x08A960F4u>(ctx, &aot_mem) && ctx.pc == 0x08A99940u) goto L_08A99940;
    return;
L_08A99940:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9995C;
      }
      goto L_08A99948;
    }
L_08A99948:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99954u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 264u, 0x08A952C8u>(ctx, &aot_mem) && ctx.pc == 0x08A99954u) goto L_08A99954;
    return;
L_08A99954:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A00C;
      }
      goto L_08A9995C;
    }
L_08A9995C:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A9996Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26972));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 457u, 0x08A960F4u>(ctx, &aot_mem) && ctx.pc == 0x08A9996Cu) goto L_08A9996C;
    return;
L_08A9996C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99988;
      }
      goto L_08A99974;
    }
L_08A99974:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99980u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 274u, 0x08A95374u>(ctx, &aot_mem) && ctx.pc == 0x08A99980u) goto L_08A99980;
    return;
L_08A99980:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A00C;
      }
      goto L_08A99988;
    }
L_08A99988:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99998u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26963));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 457u, 0x08A960F4u>(ctx, &aot_mem) && ctx.pc == 0x08A99998u) goto L_08A99998;
    return;
L_08A99998:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A999B4;
      }
      goto L_08A999A0;
    }
L_08A999A0:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A999ACu);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 284u, 0x08A95420u>(ctx, &aot_mem) && ctx.pc == 0x08A999ACu) goto L_08A999AC;
    return;
L_08A999AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A00C;
      }
      goto L_08A999B4;
    }
L_08A999B4:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A999C4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26954));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 457u, 0x08A960F4u>(ctx, &aot_mem) && ctx.pc == 0x08A999C4u) goto L_08A999C4;
    return;
L_08A999C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A999E0;
      }
      goto L_08A999CC;
    }
L_08A999CC:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A999D8u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 94u, 0x08A9466Cu>(ctx, &aot_mem) && ctx.pc == 0x08A999D8u) goto L_08A999D8;
    return;
L_08A999D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A00C;
      }
      goto L_08A999E0;
    }
L_08A999E0:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A999F0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26945));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 457u, 0x08A960F4u>(ctx, &aot_mem) && ctx.pc == 0x08A999F0u) goto L_08A999F0;
    return;
L_08A999F0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99A0C;
      }
      goto L_08A999F8;
    }
L_08A999F8:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99A04u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 294u, 0x08A954CCu>(ctx, &aot_mem) && ctx.pc == 0x08A99A04u) goto L_08A99A04;
    return;
L_08A99A04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A00C;
      }
      goto L_08A99A0C;
    }
L_08A99A0C:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99A1Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26936));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 457u, 0x08A960F4u>(ctx, &aot_mem) && ctx.pc == 0x08A99A1Cu) goto L_08A99A1C;
    return;
L_08A99A1C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99A38;
      }
      goto L_08A99A24;
    }
L_08A99A24:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99A30u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 98u, 0x08A946A4u>(ctx, &aot_mem) && ctx.pc == 0x08A99A30u) goto L_08A99A30;
    return;
L_08A99A30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A00C;
      }
      goto L_08A99A38;
    }
L_08A99A38:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99A48u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26927));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 457u, 0x08A960F4u>(ctx, &aot_mem) && ctx.pc == 0x08A99A48u) goto L_08A99A48;
    return;
L_08A99A48:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99A64;
      }
      goto L_08A99A50;
    }
L_08A99A50:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99A5Cu);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 115u, 0x08A947D0u>(ctx, &aot_mem) && ctx.pc == 0x08A99A5Cu) goto L_08A99A5C;
    return;
L_08A99A5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A00C;
      }
      goto L_08A99A64;
    }
L_08A99A64:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99A74u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26918));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 457u, 0x08A960F4u>(ctx, &aot_mem) && ctx.pc == 0x08A99A74u) goto L_08A99A74;
    return;
L_08A99A74:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99A90;
      }
      goto L_08A99A7C;
    }
L_08A99A7C:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99A88u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 143u, 0x08A949E8u>(ctx, &aot_mem) && ctx.pc == 0x08A99A88u) goto L_08A99A88;
    return;
L_08A99A88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A00C;
      }
      goto L_08A99A90;
    }
L_08A99A90:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99AA0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26909));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 457u, 0x08A960F4u>(ctx, &aot_mem) && ctx.pc == 0x08A99AA0u) goto L_08A99AA0;
    return;
L_08A99AA0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99ABC;
      }
      goto L_08A99AA8;
    }
L_08A99AA8:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99AB4u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 158u, 0x08A94AF4u>(ctx, &aot_mem) && ctx.pc == 0x08A99AB4u) goto L_08A99AB4;
    return;
L_08A99AB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A00C;
      }
      goto L_08A99ABC;
    }
L_08A99ABC:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99ACCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26900));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 457u, 0x08A960F4u>(ctx, &aot_mem) && ctx.pc == 0x08A99ACCu) goto L_08A99ACC;
    return;
L_08A99ACC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99AE8;
      }
      goto L_08A99AD4;
    }
L_08A99AD4:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99AE0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 170u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08A99AE0u) goto L_08A99AE0;
    return;
L_08A99AE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A00C;
      }
      goto L_08A99AE8;
    }
L_08A99AE8:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99AF8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26891));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 457u, 0x08A960F4u>(ctx, &aot_mem) && ctx.pc == 0x08A99AF8u) goto L_08A99AF8;
    return;
L_08A99AF8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99B14;
      }
      goto L_08A99B00;
    }
L_08A99B00:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99B0Cu);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 179u, 0x08A94C88u>(ctx, &aot_mem) && ctx.pc == 0x08A99B0Cu) goto L_08A99B0C;
    return;
L_08A99B0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A00C;
      }
      goto L_08A99B14;
    }
L_08A99B14:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99B24u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26882));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 457u, 0x08A960F4u>(ctx, &aot_mem) && ctx.pc == 0x08A99B24u) goto L_08A99B24;
    return;
L_08A99B24:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99B40;
      }
      goto L_08A99B2C;
    }
L_08A99B2C:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99B38u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 190u, 0x08A94D60u>(ctx, &aot_mem) && ctx.pc == 0x08A99B38u) goto L_08A99B38;
    return;
L_08A99B38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A00C;
      }
      goto L_08A99B40;
    }
L_08A99B40:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99B50u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26873));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 457u, 0x08A960F4u>(ctx, &aot_mem) && ctx.pc == 0x08A99B50u) goto L_08A99B50;
    return;
L_08A99B50:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99B64;
      }
      goto L_08A99B58;
    }
L_08A99B58:
    ctx.gpr[4] = (0u | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A9A00C;
      }
      goto L_08A99B64;
    }
L_08A99B64:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99B74u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26864));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 457u, 0x08A960F4u>(ctx, &aot_mem) && ctx.pc == 0x08A99B74u) goto L_08A99B74;
    return;
L_08A99B74:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99B90;
      }
      goto L_08A99B7C;
    }
L_08A99B7C:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99B88u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 303u, 0x08A95580u>(ctx, &aot_mem) && ctx.pc == 0x08A99B88u) goto L_08A99B88;
    return;
L_08A99B88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A00C;
      }
      goto L_08A99B90;
    }
L_08A99B90:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99BA0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26855));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 457u, 0x08A960F4u>(ctx, &aot_mem) && ctx.pc == 0x08A99BA0u) goto L_08A99BA0;
    return;
L_08A99BA0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99BBC;
      }
      goto L_08A99BA8;
    }
L_08A99BA8:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99BB4u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 357u, 0x08A959B8u>(ctx, &aot_mem) && ctx.pc == 0x08A99BB4u) goto L_08A99BB4;
    return;
L_08A99BB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A00C;
      }
      goto L_08A99BBC;
    }
L_08A99BBC:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99BCCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26846));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 457u, 0x08A960F4u>(ctx, &aot_mem) && ctx.pc == 0x08A99BCCu) goto L_08A99BCC;
    return;
L_08A99BCC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99BE0;
      }
      goto L_08A99BD4;
    }
L_08A99BD4:
    ctx.gpr[4] = (0u | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A9A00C;
      }
      goto L_08A99BE0;
    }
L_08A99BE0:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99BF0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26837));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 457u, 0x08A960F4u>(ctx, &aot_mem) && ctx.pc == 0x08A99BF0u) goto L_08A99BF0;
    return;
L_08A99BF0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99C0C;
      }
      goto L_08A99BF8;
    }
L_08A99BF8:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99C04u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 366u, 0x08A95A64u>(ctx, &aot_mem) && ctx.pc == 0x08A99C04u) goto L_08A99C04;
    return;
L_08A99C04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A00C;
      }
      goto L_08A99C0C;
    }
L_08A99C0C:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99C1Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26828));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 457u, 0x08A960F4u>(ctx, &aot_mem) && ctx.pc == 0x08A99C1Cu) goto L_08A99C1C;
    return;
L_08A99C1C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99C38;
      }
      goto L_08A99C24;
    }
L_08A99C24:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99C30u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 377u, 0x08A95B30u>(ctx, &aot_mem) && ctx.pc == 0x08A99C30u) goto L_08A99C30;
    return;
L_08A99C30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A00C;
      }
      goto L_08A99C38;
    }
L_08A99C38:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99C48u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26819));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 457u, 0x08A960F4u>(ctx, &aot_mem) && ctx.pc == 0x08A99C48u) goto L_08A99C48;
    return;
L_08A99C48:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99C64;
      }
      goto L_08A99C50;
    }
L_08A99C50:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99C5Cu);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 386u, 0x08A95BDCu>(ctx, &aot_mem) && ctx.pc == 0x08A99C5Cu) goto L_08A99C5C;
    return;
L_08A99C5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A00C;
      }
      goto L_08A99C64;
    }
L_08A99C64:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99C74u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26810));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 457u, 0x08A960F4u>(ctx, &aot_mem) && ctx.pc == 0x08A99C74u) goto L_08A99C74;
    return;
L_08A99C74:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99C90;
      }
      goto L_08A99C7C;
    }
L_08A99C7C:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99C88u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 395u, 0x08A95C88u>(ctx, &aot_mem) && ctx.pc == 0x08A99C88u) goto L_08A99C88;
    return;
L_08A99C88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A00C;
      }
      goto L_08A99C90;
    }
L_08A99C90:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99CA0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26801));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 457u, 0x08A960F4u>(ctx, &aot_mem) && ctx.pc == 0x08A99CA0u) goto L_08A99CA0;
    return;
L_08A99CA0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99CBC;
      }
      goto L_08A99CA8;
    }
L_08A99CA8:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99CB4u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 404u, 0x08A95D3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A99CB4u) goto L_08A99CB4;
    return;
L_08A99CB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A00C;
      }
      goto L_08A99CBC;
    }
L_08A99CBC:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99CCCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26792));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 457u, 0x08A960F4u>(ctx, &aot_mem) && ctx.pc == 0x08A99CCCu) goto L_08A99CCC;
    return;
L_08A99CCC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99CE8;
      }
      goto L_08A99CD4;
    }
L_08A99CD4:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99CE0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 96u, 0x08A94688u>(ctx, &aot_mem) && ctx.pc == 0x08A99CE0u) goto L_08A99CE0;
    return;
L_08A99CE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A00C;
      }
      goto L_08A99CE8;
    }
L_08A99CE8:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99CF8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26738));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 457u, 0x08A960F4u>(ctx, &aot_mem) && ctx.pc == 0x08A99CF8u) goto L_08A99CF8;
    return;
L_08A99CF8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (0u | 32u);
      if (branch_taken) {
          goto L_08A99D78;
      }
      goto L_08A99D00;
    }
L_08A99D00:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13952)));
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(13952), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[16] = (2227u << 16u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-20368));
      if (branch_taken) {
          goto L_08A99D50;
      }
      goto L_08A99D28;
    }
L_08A99D28:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A99D34u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A99D34u) goto L_08A99D34;
    return;
L_08A99D34:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A99D4C;
      }
      goto L_08A99D40;
    }
L_08A99D40:
    ctx.gpr[31] = (0x08A99D48u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A99D48u) goto L_08A99D48;
    return;
L_08A99D48:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_08A99D4C;
L_08A99D4C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    goto L_08A99D50;
L_08A99D50:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A99D5Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A99D5Cu) goto L_08A99D5C;
    return;
L_08A99D5C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A99D70u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A99D70u) goto L_08A99D70;
    return;
L_08A99D70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A00C;
      }
      goto L_08A99D78;
    }
L_08A99D78:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99D88u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26729));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 457u, 0x08A960F4u>(ctx, &aot_mem) && ctx.pc == 0x08A99D88u) goto L_08A99D88;
    return;
L_08A99D88:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (0u | 32u);
      if (branch_taken) {
          goto L_08A99E08;
      }
      goto L_08A99D90;
    }
L_08A99D90:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13952)));
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(13952), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[16] = (2227u << 16u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-20368));
      if (branch_taken) {
          goto L_08A99DE0;
      }
      goto L_08A99DB8;
    }
L_08A99DB8:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A99DC4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A99DC4u) goto L_08A99DC4;
    return;
L_08A99DC4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A99DDC;
      }
      goto L_08A99DD0;
    }
L_08A99DD0:
    ctx.gpr[31] = (0x08A99DD8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A99DD8u) goto L_08A99DD8;
    return;
L_08A99DD8:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_08A99DDC;
L_08A99DDC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    goto L_08A99DE0;
L_08A99DE0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A99DECu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A99DECu) goto L_08A99DEC;
    return;
L_08A99DEC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A99E00u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A99E00u) goto L_08A99E00;
    return;
L_08A99E00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A00C;
      }
      goto L_08A99E08;
    }
L_08A99E08:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99E18u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26783));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 457u, 0x08A960F4u>(ctx, &aot_mem) && ctx.pc == 0x08A99E18u) goto L_08A99E18;
    return;
L_08A99E18:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99E34;
      }
      goto L_08A99E20;
    }
L_08A99E20:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99E2Cu);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 413u, 0x08A95DF0u>(ctx, &aot_mem) && ctx.pc == 0x08A99E2Cu) goto L_08A99E2C;
    return;
L_08A99E2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A00C;
      }
      goto L_08A99E34;
    }
L_08A99E34:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99E44u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26774));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 457u, 0x08A960F4u>(ctx, &aot_mem) && ctx.pc == 0x08A99E44u) goto L_08A99E44;
    return;
L_08A99E44:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99E60;
      }
      goto L_08A99E4C;
    }
L_08A99E4C:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99E58u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 422u, 0x08A95EA4u>(ctx, &aot_mem) && ctx.pc == 0x08A99E58u) goto L_08A99E58;
    return;
L_08A99E58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A00C;
      }
      goto L_08A99E60;
    }
L_08A99E60:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99E70u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26765));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 457u, 0x08A960F4u>(ctx, &aot_mem) && ctx.pc == 0x08A99E70u) goto L_08A99E70;
    return;
L_08A99E70:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99E84;
      }
      goto L_08A99E78;
    }
L_08A99E78:
    ctx.gpr[4] = (0u | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A9A00C;
      }
      goto L_08A99E84;
    }
L_08A99E84:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99E94u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26756));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 457u, 0x08A960F4u>(ctx, &aot_mem) && ctx.pc == 0x08A99E94u) goto L_08A99E94;
    return;
L_08A99E94:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99EB0;
      }
      goto L_08A99E9C;
    }
L_08A99E9C:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99EA8u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 448u, 0x08A96048u>(ctx, &aot_mem) && ctx.pc == 0x08A99EA8u) goto L_08A99EA8;
    return;
L_08A99EA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A00C;
      }
      goto L_08A99EB0;
    }
L_08A99EB0:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99EC0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26747));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 457u, 0x08A960F4u>(ctx, &aot_mem) && ctx.pc == 0x08A99EC0u) goto L_08A99EC0;
    return;
L_08A99EC0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99EDC;
      }
      goto L_08A99EC8;
    }
L_08A99EC8:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99ED4u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 312u, 0x08A95634u>(ctx, &aot_mem) && ctx.pc == 0x08A99ED4u) goto L_08A99ED4;
    return;
L_08A99ED4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A00C;
      }
      goto L_08A99EDC;
    }
L_08A99EDC:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99EECu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26720));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 457u, 0x08A960F4u>(ctx, &aot_mem) && ctx.pc == 0x08A99EECu) goto L_08A99EEC;
    return;
L_08A99EEC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99F08;
      }
      goto L_08A99EF4;
    }
L_08A99EF4:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99F00u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 321u, 0x08A956E8u>(ctx, &aot_mem) && ctx.pc == 0x08A99F00u) goto L_08A99F00;
    return;
L_08A99F00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A00C;
      }
      goto L_08A99F08;
    }
L_08A99F08:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99F18u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26711));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 457u, 0x08A960F4u>(ctx, &aot_mem) && ctx.pc == 0x08A99F18u) goto L_08A99F18;
    return;
L_08A99F18:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99F34;
      }
      goto L_08A99F20;
    }
L_08A99F20:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99F2Cu);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 330u, 0x08A9579Cu>(ctx, &aot_mem) && ctx.pc == 0x08A99F2Cu) goto L_08A99F2C;
    return;
L_08A99F2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A00C;
      }
      goto L_08A99F34;
    }
L_08A99F34:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99F44u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26702));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 457u, 0x08A960F4u>(ctx, &aot_mem) && ctx.pc == 0x08A99F44u) goto L_08A99F44;
    return;
L_08A99F44:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99F60;
      }
      goto L_08A99F4C;
    }
L_08A99F4C:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99F58u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 339u, 0x08A95850u>(ctx, &aot_mem) && ctx.pc == 0x08A99F58u) goto L_08A99F58;
    return;
L_08A99F58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A00C;
      }
      goto L_08A99F60;
    }
L_08A99F60:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99F70u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26693));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 457u, 0x08A960F4u>(ctx, &aot_mem) && ctx.pc == 0x08A99F70u) goto L_08A99F70;
    return;
L_08A99F70:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99F8C;
      }
      goto L_08A99F78;
    }
L_08A99F78:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99F84u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 348u, 0x08A95904u>(ctx, &aot_mem) && ctx.pc == 0x08A99F84u) goto L_08A99F84;
    return;
L_08A99F84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A00C;
      }
      goto L_08A99F8C;
    }
L_08A99F8C:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99F9Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26684));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 457u, 0x08A960F4u>(ctx, &aot_mem) && ctx.pc == 0x08A99F9Cu) goto L_08A99F9C;
    return;
L_08A99F9C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99FB8;
      }
      goto L_08A99FA4;
    }
L_08A99FA4:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99FB0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 874u, 0x08A93FC8u>(ctx, &aot_mem) && ctx.pc == 0x08A99FB0u) goto L_08A99FB0;
    return;
L_08A99FB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A00C;
      }
      goto L_08A99FB8;
    }
L_08A99FB8:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99FC8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26665));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 457u, 0x08A960F4u>(ctx, &aot_mem) && ctx.pc == 0x08A99FC8u) goto L_08A99FC8;
    return;
L_08A99FC8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99FE4;
      }
      goto L_08A99FD0;
    }
L_08A99FD0:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A99FDCu);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 24u, 0x08A94190u>(ctx, &aot_mem) && ctx.pc == 0x08A99FDCu) goto L_08A99FDC;
    return;
L_08A99FDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A00C;
      }
      goto L_08A99FE4;
    }
L_08A99FE4:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A99FF4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26674));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 457u, 0x08A960F4u>(ctx, &aot_mem) && ctx.pc == 0x08A99FF4u) goto L_08A99FF4;
    return;
L_08A99FF4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A00C;
      }
      goto L_08A99FFC;
    }
L_08A99FFC:
    ctx.gpr[4] = (0u | 32u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08A9A00Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 544u, 0x08A8E9B8u>(ctx, &aot_mem) && ctx.pc == 0x08A9A00Cu) goto L_08A9A00C;
    return;
L_08A9A00C:
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
L_08A9A028:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25572)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(25568)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[8] = (ctx.gpr[5] | 14571u);
    ctx.gpr[2] = (2229u << 16u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25576), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (2229u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(25596)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[3] = (2229u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(25608)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25604)));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(25612), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(25620), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[13] = (2229u << 16u);
    ctx.gpr[12] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(25584), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[10] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(25580), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[11] = (15744u << 16u);
    ctx.gpr[14] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[7] = (16281u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[15] = (2229u << 16u);
    ctx.gpr[3] = (ctx.gpr[7] | 39322u);
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(25588), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(25592), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[9] = (16268u << 16u);
    ctx.gpr[24] = (2229u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] | 52429u);
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(25600), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[25] = (2229u << 16u);
    ctx.gpr[17] = (2233u << 16u);
    ctx.gpr[18] = (2225u << 16u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[2] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-25184));
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-31976));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (0u | 192u);
    aot_mem.aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(25616), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9A138u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25624), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 341u, 0x08AF5A1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9A138u) goto L_08A9A138;
    return;
L_08A9A138:
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
L_08A9A150:
    ctx.gpr[4] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-6724), static_cast<std::uint16_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9A15C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9A164:
    ctx.gpr[4] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7812), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9A170:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9A178:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9A180:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9A188:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25692)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(25688)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(25716)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[11] = (2229u << 16u);
    ctx.gpr[10] = (2229u << 16u);
    ctx.gpr[7] = (16672u << 16u);
    ctx.gpr[8] = (15744u << 16u);
    ctx.gpr[2] = (2229u << 16u);
    ctx.gpr[3] = (2229u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(25696), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2229u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(25704), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(25700), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25708), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(25712), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(25720), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9A21C:
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
L_08A9A248:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[17] = (0u | 20u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(19968));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17220), 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08A9A284;
L_08A9A284:
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(17285), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(17286), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(18245), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(18246), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(19168), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(19188), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08A9A284;
      }
      goto L_08A9A2B0;
    }
L_08A9A2B0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(19208), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(19209), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(19210), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(19469), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(19470), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (2225u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(19468), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(19472));
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[6] = (0u | 48u);
    ctx.gpr[31] = (0x08A9A2E0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-31932));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 341u, 0x08AF5A1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9A2E0u) goto L_08A9A2E0;
    return;
L_08A9A2E0:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(-31900));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 14u);
    ctx.gpr[6] = (0u | 64u);
    ctx.gpr[31] = (0x08A9A2FCu);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 341u, 0x08AF5A1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9A2FCu) goto L_08A9A2FC;
    return;
L_08A9A2FC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(20864));
    ctx.gpr[5] = (0u | 14u);
    ctx.gpr[6] = (0u | 64u);
    ctx.gpr[31] = (0x08A9A310u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 341u, 0x08AF5A1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9A310u) goto L_08A9A310;
    return;
L_08A9A310:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21776), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21780), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(21784), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(21785), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21792), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21788), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21808), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21812), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21816), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21824), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[18]);
    goto L_08A9A344;
L_08A9A344:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(21760), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 14 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A9A344;
      }
      goto L_08A9A35C;
    }
L_08A9A35C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(21774), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (16694u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] | 61167u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 30u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(21944), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[31] = (0x08A9A394u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A9B470;
L_08A9A394:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A9A3A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A9B470;
L_08A9A3A0:
    ctx.gpr[31] = (0x08A9A3A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A9B2BC;
L_08A9A3A8:
    ctx.gpr[31] = (0x08A9A3B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A9B4B8;
L_08A9A3B0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (0u | 250u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08A9A3C8;
L_08A9A3C8:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5960), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(15952), ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[7] = (ctx.gpr[17] < static_cast<std::uint32_t>(250) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A9A3C8;
      }
      goto L_08A9A3E4;
    }
L_08A9A3E4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16952), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21948), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21956), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(17224), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21952), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_08A9A428:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A9A478;
      }
      goto L_08A9A444;
    }
L_08A9A444:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A458;
      }
      goto L_08A9A450;
    }
L_08A9A450:
    ctx.gpr[31] = (0x08A9A458u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A9A508;
L_08A9A458:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(17060));
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(17220), 0u);
        goto L_08A9A464;
    }
    goto L_08A9A464;
L_08A9A464:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A478;
      }
      goto L_08A9A470;
    }
L_08A9A470:
    ctx.gpr[31] = (0x08A9A478u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08A9A478u) goto L_08A9A478;
    return;
L_08A9A478:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9A48C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A9A4F8;
      }
      goto L_08A9A4A4;
    }
L_08A9A4A4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08A9A4B0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20112));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x08A9A4B0u) goto L_08A9A4B0;
    return;
L_08A9A4B0:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08A9A4BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 246u, 0x088B598Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9A4BCu) goto L_08A9A4BC;
    return;
L_08A9A4BC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A4F8;
      }
      goto L_08A9A4CC;
    }
L_08A9A4CC:
    ctx.gpr[4] = (0u | 20u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08A9A4DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 277u, 0x08A5DCA4u>(ctx, &aot_mem) && ctx.pc == 0x08A9A4DCu) goto L_08A9A4DC;
    return;
L_08A9A4DC:
    ctx.gpr[31] = (0x08A9A4E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 356u, 0x08842744u>(ctx, &aot_mem) && ctx.pc == 0x08A9A4E4u) goto L_08A9A4E4;
    return;
L_08A9A4E4:
    ctx.gpr[31] = (0x08A9A4ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 373u, 0x088428ECu>(ctx, &aot_mem) && ctx.pc == 0x08A9A4ECu) goto L_08A9A4EC;
    return;
L_08A9A4EC:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08A9A4F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2824));
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 122u, 0x088BC684u>(ctx, &aot_mem) && ctx.pc == 0x08A9A4F8u) goto L_08A9A4F8;
    return;
L_08A9A4F8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9A508:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A9A5C8;
      }
      goto L_08A9A52C;
    }
L_08A9A52C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08A9A538u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2824));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 449u, 0x088BA738u>(ctx, &aot_mem) && ctx.pc == 0x08A9A538u) goto L_08A9A538;
    return;
L_08A9A538:
    ctx.gpr[17] = (2233u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (0u | 250u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-25200));
    goto L_08A9A550;
L_08A9A550:
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(5960), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(15952), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(40));
    ctx.gpr[7] = (ctx.gpr[18] < static_cast<std::uint32_t>(250) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A9A550;
      }
      goto L_08A9A56C;
    }
L_08A9A56C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16952), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17220), 0u);
    ctx.gpr[31] = (0x08A9A57Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 308u, 0x08A5DEC0u>(ctx, &aot_mem) && ctx.pc == 0x08A9A57Cu) goto L_08A9A57C;
    return;
L_08A9A57C:
    ctx.gpr[18] = (0u | 0u);
    goto L_08A9A580;
L_08A9A580:
    ctx.gpr[19] = (ctx.gpr[18] & 255u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A9A590u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 302u, 0x088B5D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9A590u) goto L_08A9A590;
    return;
L_08A9A590:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A5A4;
      }
      goto L_08A9A598;
    }
L_08A9A598:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A9A5A4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 301u, 0x088B5D44u>(ctx, &aot_mem) && ctx.pc == 0x08A9A5A4u) goto L_08A9A5A4;
    return;
L_08A9A5A4:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] < static_cast<std::uint32_t>(67) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A580;
      }
      goto L_08A9A5B4;
    }
L_08A9A5B4:
    ctx.gpr[31] = (0x08A9A5BCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 267u, 0x088B5AC4u>(ctx, &aot_mem) && ctx.pc == 0x08A9A5BCu) goto L_08A9A5BC;
    return;
L_08A9A5BC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A9A5C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 336u, 0x08A5E000u>(ctx, &aot_mem) && ctx.pc == 0x08A9A5C8u) goto L_08A9A5C8;
    return;
L_08A9A5C8:
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
L_08A9A5E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9A5F8u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A9B4B8;
L_08A9A5F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A624;
      }
      goto L_08A9A604;
    }
L_08A9A604:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A9A610u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 261u, 0x08A5DB88u>(ctx, &aot_mem) && ctx.pc == 0x08A9A610u) goto L_08A9A610;
    return;
L_08A9A610:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A9A620u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2824));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 551u, 0x088BAC54u>(ctx, &aot_mem) && ctx.pc == 0x08A9A620u) goto L_08A9A620;
    return;
L_08A9A620:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    goto L_08A9A624;
L_08A9A624:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A684;
      }
      goto L_08A9A630;
    }
L_08A9A630:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21945)));
    ctx.gpr[6] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(21946), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4576));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(308)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-28456)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(305)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-6920)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[7] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(21945), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08A9A670u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A9BA38;
L_08A9A670:
    ctx.gpr[31] = (0x08A9A678u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A9AAD8;
L_08A9A678:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08A9A684u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2824));
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 153u, 0x088BC9F4u>(ctx, &aot_mem) && ctx.pc == 0x08A9A684u) goto L_08A9A684;
    return;
L_08A9A684:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9A694:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9A750;
      }
      goto L_08A9A6A0;
    }
L_08A9A6A0:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A6C4;
      }
      goto L_08A9A6A8;
    }
L_08A9A6A8:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A6BC;
      }
      goto L_08A9A6B4;
    }
L_08A9A6B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A9A6CC;
      }
      goto L_08A9A6BC;
    }
L_08A9A6BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A9A754;
      }
      goto L_08A9A6C4;
    }
L_08A9A6C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08A9A754;
      }
      goto L_08A9A6CC;
    }
L_08A9A6CC:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(5960)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A738;
      }
      goto L_08A9A6D8;
    }
L_08A9A6D8:
    ctx.gpr[8] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(5960), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(5961), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(5952), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(5956), ctx.gpr[6]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (0u | 209u);
    goto L_08A9A6F4;
L_08A9A6F4:
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(5962), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A6F4;
      }
      goto L_08A9A714;
    }
L_08A9A714:
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(5988), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16952));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(15952), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A9A754;
      }
      goto L_08A9A738;
    }
L_08A9A738:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[2] < static_cast<std::uint32_t>(250) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_08A9A6CC;
      }
      goto L_08A9A748;
    }
L_08A9A748:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-3));
      if (branch_taken) {
          goto L_08A9A754;
      }
      goto L_08A9A750;
    }
L_08A9A750:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-4));
    goto L_08A9A754;
L_08A9A754:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9A75C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A9A828;
      }
      goto L_08A9A774;
    }
L_08A9A774:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 250 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9A828;
      }
      goto L_08A9A77C;
    }
L_08A9A77C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A828;
      }
      goto L_08A9A784;
    }
L_08A9A784:
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(5960)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A828;
      }
      goto L_08A9A7A0;
    }
L_08A9A7A0:
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(5960), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16952)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A9A828;
      }
      goto L_08A9A7B8;
    }
L_08A9A7B8:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(15952)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A9A818;
      }
      goto L_08A9A7C4;
    }
L_08A9A7C4:
    ctx.gpr[5] = (ctx.gpr[6] < static_cast<std::uint32_t>(249) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A7FC;
      }
      goto L_08A9A7D0;
    }
L_08A9A7D0:
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(15952));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(15952));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-4));
    ctx.gpr[31] = (0x08A9A7F8u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08A9A7F8u) goto L_08A9A7F8;
    return;
L_08A9A7F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16952)));
    goto L_08A9A7FC;
L_08A9A7FC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16952), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 250u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(15952), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A9A828;
      }
      goto L_08A9A818;
    }
L_08A9A818:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A9A7B8;
      }
      goto L_08A9A828;
    }
L_08A9A828:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9A838:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08A9A874;
      }
      goto L_08A9A844;
    }
L_08A9A844:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 250 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9A874;
      }
      goto L_08A9A84C;
    }
L_08A9A84C:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A874;
      }
      goto L_08A9A854;
    }
L_08A9A854:
    ctx.gpr[7] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5960)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A874;
      }
      goto L_08A9A870;
    }
L_08A9A870:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5961), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_08A9A874;
L_08A9A874:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9A87C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A9A988;
      }
      goto L_08A9A8A0;
    }
L_08A9A8A0:
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.gpr[31] = (0x08A9A8B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A9B470;
L_08A9A8B4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.gpr[17] = (2227u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(17708));
      if (branch_taken) {
          goto L_08A9A8D8;
      }
      goto L_08A9A8C4;
    }
L_08A9A8C4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[31] = (0x08A9A8D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A9B470;
L_08A9A8D0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A9A8E8;
      }
      goto L_08A9A8D8;
    }
L_08A9A8D8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A9A8E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A9B470;
L_08A9A8E4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(ctx.gpr[18]));
    goto L_08A9A8E8;
L_08A9A8E8:
    ctx.gpr[31] = (0x08A9A8F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A9B2BC;
L_08A9A8F0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A9A8FCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 277u, 0x08A6D358u>(ctx, &aot_mem) && ctx.pc == 0x08A9A8FCu) goto L_08A9A8FC;
    return;
L_08A9A8FC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A9A908u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 277u, 0x08A6D358u>(ctx, &aot_mem) && ctx.pc == 0x08A9A908u) goto L_08A9A908;
    return;
L_08A9A908:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A9A91Cu);
    ctx.gpr[5] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 366u, 0x088B6130u>(ctx, &aot_mem) && ctx.pc == 0x08A9A91Cu) goto L_08A9A91C;
    return;
L_08A9A91C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A9A928u);
    ctx.gpr[5] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 366u, 0x088B6130u>(ctx, &aot_mem) && ctx.pc == 0x08A9A928u) goto L_08A9A928;
    return;
L_08A9A928:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A9A934u);
    ctx.gpr[5] = (0u | 22u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 366u, 0x088B6130u>(ctx, &aot_mem) && ctx.pc == 0x08A9A934u) goto L_08A9A934;
    return;
L_08A9A934:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A9A940u);
    ctx.gpr[5] = (0u | 23u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 366u, 0x088B6130u>(ctx, &aot_mem) && ctx.pc == 0x08A9A940u) goto L_08A9A940;
    return;
L_08A9A940:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A9A94Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 372u, 0x088B619Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9A94Cu) goto L_08A9A94C;
    return;
L_08A9A94C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A9A958u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 373u, 0x088B61A4u>(ctx, &aot_mem) && ctx.pc == 0x08A9A958u) goto L_08A9A958;
    return;
L_08A9A958:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08A9A964u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2824));
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 212u, 0x088BCCC8u>(ctx, &aot_mem) && ctx.pc == 0x08A9A964u) goto L_08A9A964;
    return;
L_08A9A964:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(17224), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A9A970u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 268u, 0x088B5ACCu>(ctx, &aot_mem) && ctx.pc == 0x08A9A970u) goto L_08A9A970;
    return;
L_08A9A970:
    ctx.gpr[16] = (0u | 0u);
    goto L_08A9A974;
L_08A9A974:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 56 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08A9A974;
      }
      goto L_08A9A988;
    }
L_08A9A988:
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
L_08A9A9A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A9AA28;
      }
      goto L_08A9A9C0;
    }
L_08A9A9C0:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A9A9C8;
L_08A9A9C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(5960)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9AA14;
      }
      goto L_08A9A9D4;
    }
L_08A9A9D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(5952)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(11) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9AA14;
      }
      goto L_08A9A9E4;
    }
L_08A9A9E4:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-20040)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9A9FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(5956)));
    ctx.gpr[31] = (0x08A9AA08u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 616u, 0x0896EDE8u>(ctx, &aot_mem) && ctx.pc == 0x08A9AA08u) goto L_08A9AA08;
    return;
L_08A9AA08:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A9AA14u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A9A75C;
L_08A9AA14:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] < static_cast<std::uint32_t>(250) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_08A9A9C8;
      }
      goto L_08A9AA24;
    }
L_08A9AA24:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17220), 0u);
    goto L_08A9AA28;
L_08A9AA28:
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
L_08A9AA40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9AA58u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 370u, 0x088B618Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9AA58u) goto L_08A9AA58;
    return;
L_08A9AA58:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9AA64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9AA7Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 371u, 0x088B6194u>(ctx, &aot_mem) && ctx.pc == 0x08A9AA7Cu) goto L_08A9AA7C;
    return;
L_08A9AA7C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9AA88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9AAA0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 372u, 0x088B619Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9AAA0u) goto L_08A9AAA0;
    return;
L_08A9AAA0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9AAAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9AAC4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 373u, 0x088B61A4u>(ctx, &aot_mem) && ctx.pc == 0x08A9AAC4u) goto L_08A9AAC4;
    return;
L_08A9AAC4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9AAD0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9AAD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(21948));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 5u);
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.hi);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-25200));
      if (branch_taken) {
          goto L_08A9AB24;
      }
      goto L_08A9AB18;
    }
L_08A9AB18:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A9AB28;
      }
      goto L_08A9AB24;
    }
L_08A9AB24:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    goto L_08A9AB28;
L_08A9AB28:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21945)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9AC24;
      }
      goto L_08A9AB34;
    }
L_08A9AB34:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21946)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9AC24;
      }
      goto L_08A9AB40;
    }
L_08A9AB40:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[18] = (0u | 1u);
    goto L_08A9AB48;
L_08A9AB48:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08A9AB58u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 366u, 0x088B6130u>(ctx, &aot_mem) && ctx.pc == 0x08A9AB58u) goto L_08A9AB58;
    return;
L_08A9AB58:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9AB48;
      }
      goto L_08A9AB70;
    }
L_08A9AB70:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 20u);
    ctx.gpr[31] = (0x08A9AB80u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 357u, 0x088B6074u>(ctx, &aot_mem) && ctx.pc == 0x08A9AB80u) goto L_08A9AB80;
    return;
L_08A9AB80:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 21u);
    ctx.gpr[31] = (0x08A9AB90u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 357u, 0x088B6074u>(ctx, &aot_mem) && ctx.pc == 0x08A9AB90u) goto L_08A9AB90;
    return;
L_08A9AB90:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 22u);
    ctx.gpr[31] = (0x08A9ABA0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 357u, 0x088B6074u>(ctx, &aot_mem) && ctx.pc == 0x08A9ABA0u) goto L_08A9ABA0;
    return;
L_08A9ABA0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A9ABACu);
    ctx.gpr[5] = (0u | 23u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 366u, 0x088B6130u>(ctx, &aot_mem) && ctx.pc == 0x08A9ABACu) goto L_08A9ABAC;
    return;
L_08A9ABAC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9ABC4;
      }
      goto L_08A9ABB8;
    }
L_08A9ABB8:
    ctx.gpr[5] = (0u | 19u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 20u);
      if (branch_taken) {
          goto L_08A9ABCC;
      }
      goto L_08A9ABC4;
    }
L_08A9ABC4:
    ctx.gpr[5] = (0u | 21u);
    ctx.gpr[4] = (0u | 22u);
    goto L_08A9ABCC;
L_08A9ABCC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A9ABD8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 366u, 0x088B6130u>(ctx, &aot_mem) && ctx.pc == 0x08A9ABD8u) goto L_08A9ABD8;
    return;
L_08A9ABD8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A9ABE4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 366u, 0x088B6130u>(ctx, &aot_mem) && ctx.pc == 0x08A9ABE4u) goto L_08A9ABE4;
    return;
L_08A9ABE4:
    ctx.gpr[31] = (0x08A9ABECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A9B470;
L_08A9ABEC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9AC0C;
      }
      goto L_08A9ABF8;
    }
L_08A9ABF8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[31] = (0x08A9AC04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A9B470;
L_08A9AC04:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A9AC1C;
      }
      goto L_08A9AC0C;
    }
L_08A9AC0C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A9AC18u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A9B470;
L_08A9AC18:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(ctx.gpr[18]));
    goto L_08A9AC1C;
L_08A9AC1C:
    ctx.gpr[31] = (0x08A9AC24u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A9B2BC;
L_08A9AC24:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A9AC3C;
      }
      goto L_08A9AC34;
    }
L_08A9AC34:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A9AC44;
      }
      goto L_08A9AC3C;
    }
L_08A9AC3C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A9AC44;
L_08A9AC44:
    ctx.gpr[31] = (0x08A9AC4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 350u, 0x08A6DA50u>(ctx, &aot_mem) && ctx.pc == 0x08A9AC4Cu) goto L_08A9AC4C;
    return;
L_08A9AC4C:
    ctx.gpr[31] = (0x08A9AC54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A9B470;
L_08A9AC54:
    ctx.gpr[31] = (0x08A9AC5Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A9AFA4;
L_08A9AC5C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21945)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9AC88;
      }
      goto L_08A9AC68;
    }
L_08A9AC68:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9AC80;
      }
      goto L_08A9AC78;
    }
L_08A9AC78:
    ctx.gpr[31] = (0x08A9AC80u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(17248));
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 305u, 0x08A6D54Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9AC80u) goto L_08A9AC80;
    return;
L_08A9AC80:
    ctx.gpr[31] = (0x08A9AC88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 308u, 0x08AB6150u>(ctx, &aot_mem) && ctx.pc == 0x08A9AC88u) goto L_08A9AC88;
    return;
L_08A9AC88:
    ctx.gpr[31] = (0x08A9AC90u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 21u, 0x08A9C1B4u>(ctx, &aot_mem) && ctx.pc == 0x08A9AC90u) goto L_08A9AC90;
    return;
L_08A9AC90:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21945)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9ACA4;
      }
      goto L_08A9AC9C;
    }
L_08A9AC9C:
    ctx.gpr[31] = (0x08A9ACA4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 292u, 0x08A6D438u>(ctx, &aot_mem) && ctx.pc == 0x08A9ACA4u) goto L_08A9ACA4;
    return;
L_08A9ACA4:
    ctx.gpr[31] = (0x08A9ACACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 58u, 0x08A9C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9ACACu) goto L_08A9ACAC;
    return;
L_08A9ACAC:
    ctx.gpr[31] = (0x08A9ACB4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 268u, 0x088B5ACCu>(ctx, &aot_mem) && ctx.pc == 0x08A9ACB4u) goto L_08A9ACB4;
    return;
L_08A9ACB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17220)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A9AD08;
      }
      goto L_08A9ACC8;
    }
L_08A9ACC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(17060)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5956)));
    ctx.gpr[31] = (0x08A9ACE8u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 616u, 0x0896EDE8u>(ctx, &aot_mem) && ctx.pc == 0x08A9ACE8u) goto L_08A9ACE8;
    return;
L_08A9ACE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(17060)));
    ctx.gpr[31] = (0x08A9ACF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A9A75C;
L_08A9ACF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17220)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A9ACC8;
      }
      goto L_08A9AD08;
    }
L_08A9AD08:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17220), 0u);
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
L_08A9AD24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9AD60u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 115u, 0x088ECFBCu>(ctx, &aot_mem) && ctx.pc == 0x08A9AD60u) goto L_08A9AD60;
    return;
L_08A9AD60:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9ADE4;
      }
      goto L_08A9AD68;
    }
L_08A9AD68:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[12])) && ctx.fpr[20] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9ADE4;
      }
      goto L_08A9AD7C;
    }
L_08A9AD7C:
    ctx.fpr[24] = ctx.fpr[22] - ctx.fpr[24];
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[24]) || std::isnan(ctx.fpr[12])) && ctx.fpr[24] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9ADE4;
      }
      goto L_08A9AD94;
    }
L_08A9AD94:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(21944)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[24] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) & 0x7FFFFFFFu);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9ADDC;
      }
      goto L_08A9ADC0;
    }
L_08A9ADC0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9ADEC;
      }
      goto L_08A9ADD4;
    }
L_08A9ADD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9AE74;
      }
      goto L_08A9ADDC;
    }
L_08A9ADDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A9AEFC;
      }
      goto L_08A9ADE4;
    }
L_08A9ADE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A9AEFC;
      }
      goto L_08A9ADEC;
    }
L_08A9ADEC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08A9AE04;
      }
      goto L_08A9ADF8;
    }
L_08A9ADF8:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08A9AE04;
L_08A9AE04:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16320u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A9AE24;
    }
    goto L_08A9AE24;
L_08A9AE24:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (20224u << 16u);
      if (branch_taken) {
          goto L_08A9AE54;
      }
      goto L_08A9AE48;
    }
L_08A9AE48:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A9AE6C;
      }
      goto L_08A9AE54;
    }
L_08A9AE54:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[2] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[2]);
    goto L_08A9AE6C;
L_08A9AE6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9AEFC;
      }
      goto L_08A9AE74;
    }
L_08A9AE74:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08A9AE8C;
      }
      goto L_08A9AE80;
    }
L_08A9AE80:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08A9AE8C;
L_08A9AE8C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49088u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A9AEAC;
    }
    goto L_08A9AEAC;
L_08A9AEAC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (20224u << 16u);
      if (branch_taken) {
          goto L_08A9AEDC;
      }
      goto L_08A9AED0;
    }
L_08A9AED0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A9AEF4;
      }
      goto L_08A9AEDC;
    }
L_08A9AEDC:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[2] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[2]);
    goto L_08A9AEF4;
L_08A9AEF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9AEFC;
      }
      goto L_08A9AEFC;
    }
L_08A9AEFC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9AF1C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[8] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A9AF74;
      }
      goto L_08A9AF24;
    }
L_08A9AF24:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(26072)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (ctx.gpr[9] + ctx.gpr[7]);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(26068)));
    ctx.gpr[10] = (ctx.hi);
    ctx.gpr[10] = (ctx.gpr[10] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[10]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(21924)));
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[2] = (ctx.hi);
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(26072), ctx.gpr[6]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[6] = (ctx.gpr[2] & 1u);
      if (branch_taken) {
          goto L_08A9AF7C;
      }
      goto L_08A9AF6C;
    }
L_08A9AF6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u - ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A9AF7C;
      }
      goto L_08A9AF74;
    }
L_08A9AF74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9AF9C;
      }
      goto L_08A9AF7C;
    }
L_08A9AF7C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9AF90;
      }
      goto L_08A9AF84;
    }
L_08A9AF84:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(26068), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(26068)));
    goto L_08A9AF90;
L_08A9AF90:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9AF9C;
      }
      goto L_08A9AF98;
    }
L_08A9AF98:
    ctx.gpr[2] = (0u - ctx.gpr[2]);
    goto L_08A9AF9C;
L_08A9AF9C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9AFA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16952)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[5] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A9B008;
      }
      goto L_08A9AFD0;
    }
L_08A9AFD0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(15952)));
    ctx.gpr[31] = (0x08A9AFDCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 345u, 0x08A5E074u>(ctx, &aot_mem) && ctx.pc == 0x08A9AFDCu) goto L_08A9AFDC;
    return;
L_08A9AFDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(15952)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5988), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16952)));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A9AFD0;
      }
      goto L_08A9B008;
    }
L_08A9B008:
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
L_08A9B020:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[6] < static_cast<std::uint32_t>(5661) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A9B0A8;
      }
      goto L_08A9B050;
    }
L_08A9B050:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (0u | 127u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4024)));
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
        goto L_08A9B0BC;
    }
    goto L_08A9B084;
L_08A9B084:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(4024)));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[18] << 5u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4024), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A9B10C;
      }
      goto L_08A9B0A8;
    }
L_08A9B0A8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08A9B0B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20080));
    goto L_08A9A21C;
L_08A9B0B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B29C;
      }
      goto L_08A9B0BC;
    }
L_08A9B0BC:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[8] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3983)));
    ctx.gpr[5] = (ctx.gpr[5] << 7u);
    ctx.gpr[6] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[18] << 5u);
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(220)));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B128;
      }
      goto L_08A9B10C;
    }
L_08A9B10C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(45)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B140;
      }
      goto L_08A9B120;
    }
L_08A9B120:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B130;
      }
      goto L_08A9B128;
    }
L_08A9B128:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B29C;
      }
      goto L_08A9B130;
    }
L_08A9B130:
    ctx.gpr[31] = (0x08A9B138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 417u, 0x08ACA8ACu>(ctx, &aot_mem) && ctx.pc == 0x08A9B138u) goto L_08A9B138;
    return;
L_08A9B138:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B148;
      }
      goto L_08A9B140;
    }
L_08A9B140:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(0u));
    goto L_08A9B148;
L_08A9B148:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B168;
      }
      goto L_08A9B154;
    }
L_08A9B154:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B168;
      }
      goto L_08A9B160;
    }
L_08A9B160:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(97)));
      if (branch_taken) {
          goto L_08A9B170;
      }
      goto L_08A9B168;
    }
L_08A9B168:
    ctx.gpr[20] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(0u));
    goto L_08A9B170;
L_08A9B170:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B194;
      }
      goto L_08A9B180;
    }
L_08A9B180:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(45)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B194;
      }
      goto L_08A9B18C;
    }
L_08A9B18C:
    ctx.gpr[4] = (0u | 30u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(99), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A9B194;
L_08A9B194:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (ctx.gpr[4] << 7u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(45)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(97)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(65), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(98)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(99)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(67), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(105)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(112))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(113)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A9B28Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A9B380;
L_08A9B28C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B29C;
      }
      goto L_08A9B294;
    }
L_08A9B294:
    ctx.gpr[31] = (0x08A9B29Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A9BE8C;
L_08A9B29C:
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
L_08A9B2BC:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.gpr[3] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[12] = (17224u << 16u);
      if (branch_taken) {
          goto L_08A9B378;
      }
      goto L_08A9B2D0;
    }
L_08A9B2D0:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(-5));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[12]);
    ctx.gpr[10] = (0u | 5662u);
    ctx.gpr[9] = (0u | 68u);
    ctx.gpr[8] = (0u | 5u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[6] = (0u | 63u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[12] = (ctx.gpr[3] << 5u);
    goto L_08A9B2F8;
L_08A9B2F8:
    ctx.gpr[13] = (ctx.gpr[12] + ctx.gpr[12]);
    ctx.gpr[12] = (ctx.gpr[12] + ctx.gpr[13]);
    ctx.gpr[12] = (ctx.gpr[4] + ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(4032), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(4036), 0u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(4040), ctx.gpr[10]);
    aot_mem.aot_store8(ctx.gpr[12] + static_cast<std::uint32_t>(4044), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[12] + static_cast<std::uint32_t>(4045), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(4048), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(4052), 0u);
    aot_mem.aot_store8(ctx.gpr[12] + static_cast<std::uint32_t>(4056), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(4060), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[12] + static_cast<std::uint32_t>(4104), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[12] + static_cast<std::uint32_t>(4105), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(4064), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(4068), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(4072), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[12] + static_cast<std::uint32_t>(4098), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[12] + static_cast<std::uint32_t>(4076), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(4108), 0u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(4100), 0u);
    aot_mem.aot_store8(ctx.gpr[12] + static_cast<std::uint32_t>(4112), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(4080), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(4084), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(4088), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[12] + static_cast<std::uint32_t>(4096), static_cast<std::uint8_t>(0u));
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[12] + static_cast<std::uint32_t>(4097), static_cast<std::uint8_t>(0u));
    ctx.gpr[3] = (ctx.gpr[3] & 255u);
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.gpr[12] = (ctx.gpr[3] << 5u);
      if (branch_taken) {
          goto L_08A9B2F8;
      }
      goto L_08A9B378;
    }
L_08A9B378:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9B380:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (ctx.gpr[6] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A9B454;
      }
      goto L_08A9B3C0;
    }
L_08A9B3C0:
    ctx.gpr[6] = (ctx.gpr[6] << 7u);
    ctx.gpr[7] = (0u - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[18] << 5u);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(220)));
    goto L_08A9B3E8;
L_08A9B3E8:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3984)));
    ctx.gpr[8] = (ctx.gpr[8] << 5u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(220)));
    ctx.gpr[8] = (ctx.gpr[6] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B440;
      }
      goto L_08A9B40C;
    }
L_08A9B40C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(3984));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3985));
    ctx.gpr[31] = (0x08A9B424u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08A9B424u) goto L_08A9B424;
    return;
L_08A9B424:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A9B454;
      }
      goto L_08A9B440;
    }
L_08A9B440:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A9B3E8;
      }
      goto L_08A9B454;
    }
L_08A9B454:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3984), static_cast<std::uint8_t>(ctx.gpr[18]));
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
L_08A9B470:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[8] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
      if (branch_taken) {
          goto L_08A9B4AC;
      }
      goto L_08A9B484;
    }
L_08A9B484:
    ctx.gpr[5] = (ctx.gpr[6] << 4u);
    ctx.gpr[9] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_08A9B494;
L_08A9B494:
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(3984), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B494;
      }
      goto L_08A9B4AC;
    }
L_08A9B4AC:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4024), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9B4B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    goto L_08A9B4D0;
L_08A9B4D0:
    ctx.gpr[31] = (0x08A9B4D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08A9B4D8u) goto L_08A9B4D8;
    return;
L_08A9B4D8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21924), ctx.gpr[2]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A9B4D0;
      }
      goto L_08A9B4EC;
    }
L_08A9B4EC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9B500:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-25200));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9B528u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 302u, 0x088B5D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9B528u) goto L_08A9B528;
    return;
L_08A9B528:
    ctx.gpr[4] = (ctx.gpr[2] << 24u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B54C;
      }
      goto L_08A9B538;
    }
L_08A9B538:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A9B544u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 296u, 0x088B5D04u>(ctx, &aot_mem) && ctx.pc == 0x08A9B544u) goto L_08A9B544;
    return;
L_08A9B544:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9B550;
      }
      goto L_08A9B54C;
    }
L_08A9B54C:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A9B550;
L_08A9B550:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9B564:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[4] = (15488u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 63u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A9B59Cu);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 240u, 0x08AECC20u>(ctx, &aot_mem) && ctx.pc == 0x08A9B59Cu) goto L_08A9B59C;
    return;
L_08A9B59C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26004));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (0u | 63u);
        goto L_08A9B5B4;
    }
    goto L_08A9B5B4;
L_08A9B5B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[16] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A9B5F4;
      }
      goto L_08A9B5D0;
    }
L_08A9B5D0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(63));
    ctx.gpr[16] = (0u | 107u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 107 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
        goto L_08A9B5E4;
    }
    goto L_08A9B5E4;
L_08A9B5E4:
    ctx.gpr[4] = (ctx.gpr[16] << 16u);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_08A9B618;
      }
      goto L_08A9B5F4;
    }
L_08A9B5F4:
    ctx.gpr[4] = (0u | 63u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[16]);
    ctx.gpr[16] = (0u | 20u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
        goto L_08A9B60C;
    }
    goto L_08A9B60C;
L_08A9B60C:
    ctx.gpr[4] = (ctx.gpr[16] << 16u);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
    goto L_08A9B618;
L_08A9B618:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9B62C:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A9B668;
      }
      goto L_08A9B640;
    }
L_08A9B640:
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
        goto L_08A9B670;
    }
    goto L_08A9B660;
L_08A9B660:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B6B0;
      }
      goto L_08A9B668;
    }
L_08A9B668:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9B6B0;
      }
      goto L_08A9B670;
    }
L_08A9B670:
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.gpr[2] = (0u | 127u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
        goto L_08A9B6A8;
    }
    goto L_08A9B6A8;
L_08A9B6A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_08A9B6B0;
      }
      goto L_08A9B6B0;
    }
L_08A9B6B0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9B6B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08A9B71Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 519u, 0x08A0695Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9B71Cu) goto L_08A9B71C;
    return;
L_08A9B71C:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B790;
      }
      goto L_08A9B77C;
    }
L_08A9B77C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B790;
      }
      goto L_08A9B788;
    }
L_08A9B788:
    ctx.gpr[31] = (0x08A9B790u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08A9B790u) goto L_08A9B790;
    return;
L_08A9B790:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9B7A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[9]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[11] & 255u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[17] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(10640));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9B80Cu);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A9B020;
L_08A9B80C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B81C;
      }
      goto L_08A9B814;
    }
L_08A9B814:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B830;
      }
      goto L_08A9B81C;
    }
L_08A9B81C:
    ctx.gpr[4] = (0u | 127u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A9B830u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A9B020;
L_08A9B830:
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
L_08A9B848:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] & 65535u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(17588)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A9B890;
      }
      goto L_08A9B87C;
    }
L_08A9B87C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B898;
      }
      goto L_08A9B888;
    }
L_08A9B888:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BA14;
      }
      goto L_08A9B890;
    }
L_08A9B890:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BA14;
      }
      goto L_08A9B898;
    }
L_08A9B898:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 250 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9BA14;
      }
      goto L_08A9B8A0;
    }
L_08A9B8A0:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BA14;
      }
      goto L_08A9B8A8;
    }
L_08A9B8A8:
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[7] = (ctx.gpr[5] << 3u);
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(5960)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BA14;
      }
      goto L_08A9B8C4;
    }
L_08A9B8C4:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[18]) < 208 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BA14;
      }
      goto L_08A9B8D0;
    }
L_08A9B8D0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(5952)));
    ctx.gpr[7] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A9B934;
      }
      goto L_08A9B8E0;
    }
L_08A9B8E0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17220)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 40 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B91C;
      }
      goto L_08A9B8F0;
    }
L_08A9B8F0:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(5962), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(5988), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(17220));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(17060), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A9BA14;
      }
      goto L_08A9B91C;
    }
L_08A9B91C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BA14;
      }
      goto L_08A9B92C;
    }
L_08A9B92C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BA14;
      }
      goto L_08A9B934;
    }
L_08A9B934:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(5988)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[7] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A9B9E8;
      }
      goto L_08A9B948;
    }
L_08A9B948:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(25796));
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[4]);
    goto L_08A9B958;
L_08A9B958:
    ctx.gpr[16] = (ctx.gpr[17] + ctx.gpr[16]);
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(5962)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B9D4;
      }
      goto L_08A9B974;
    }
L_08A9B974:
    ctx.gpr[19] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[19] = (ctx.gpr[17] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08A9B9B4;
      }
      goto L_08A9B984;
    }
L_08A9B984:
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(5964));
    ctx.gpr[20] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(5962));
    ctx.gpr[6] = (ctx.gpr[20] + ctx.gpr[20]);
    ctx.gpr[31] = (0x08A9B9A0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08A9B9A0u) goto L_08A9B9A0;
    return;
L_08A9B9A0:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(5976));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(5972));
    ctx.gpr[31] = (0x08A9B9B0u);
    ctx.gpr[6] = (ctx.gpr[20] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08A9B9B0u) goto L_08A9B9B0;
    return;
L_08A9B9B0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(5988)));
    goto L_08A9B9B4;
L_08A9B9B4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(5962), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(5972), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08A9B9CC;
      }
      goto L_08A9B9C4;
    }
L_08A9B9C4:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(5988), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A9B9CC;
L_08A9B9CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BA14;
      }
      goto L_08A9B9D4;
    }
L_08A9B9D4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A9B958;
      }
      goto L_08A9B9E8;
    }
L_08A9B9E8:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BA14;
      }
      goto L_08A9B9F4;
    }
L_08A9B9F4:
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(5962), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5972), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(5988), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A9BA14;
L_08A9BA14:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
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
L_08A9BA38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-336));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21948)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 7u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BB30;
      }
      goto L_08A9BA60;
    }
L_08A9BA60:
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
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16960));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16964), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x08A9BAD0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 478u, 0x088C68F4u>(ctx, &aot_mem) && ctx.pc == 0x08A9BAD0u) goto L_08A9BAD0;
    return;
L_08A9BAD0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BB28;
      }
      goto L_08A9BAD8;
    }
L_08A9BAD8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
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
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17040), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BE74;
      }
      goto L_08A9BB28;
    }
L_08A9BB28:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17040), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08A9BE74;
      }
      goto L_08A9BB30;
    }
L_08A9BB30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21948)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BC14;
      }
      goto L_08A9BB44;
    }
L_08A9BB44:
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
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16976));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16980), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x08A9BBB4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 478u, 0x088C68F4u>(ctx, &aot_mem) && ctx.pc == 0x08A9BBB4u) goto L_08A9BBB4;
    return;
L_08A9BBB4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BC0C;
      }
      goto L_08A9BBBC;
    }
L_08A9BBBC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
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
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17044), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BE74;
      }
      goto L_08A9BC0C;
    }
L_08A9BC0C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17044), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08A9BE74;
      }
      goto L_08A9BC14;
    }
L_08A9BC14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21948)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BCF8;
      }
      goto L_08A9BC28;
    }
L_08A9BC28:
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
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16992));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16992), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x08A9BC98u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 478u, 0x088C68F4u>(ctx, &aot_mem) && ctx.pc == 0x08A9BC98u) goto L_08A9BC98;
    return;
L_08A9BC98:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BCF0;
      }
      goto L_08A9BCA0;
    }
L_08A9BCA0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
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
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17048), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BE74;
      }
      goto L_08A9BCF0;
    }
L_08A9BCF0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17048), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08A9BE74;
      }
      goto L_08A9BCF8;
    }
L_08A9BCF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21948)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BDDC;
      }
      goto L_08A9BD0C;
    }
L_08A9BD0C:
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
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(17008));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17008), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x08A9BD7Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 478u, 0x088C68F4u>(ctx, &aot_mem) && ctx.pc == 0x08A9BD7Cu) goto L_08A9BD7C;
    return;
L_08A9BD7C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BDD4;
      }
      goto L_08A9BD84;
    }
L_08A9BD84:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
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
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17052), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BE74;
      }
      goto L_08A9BDD4;
    }
L_08A9BDD4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17052), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08A9BE74;
      }
      goto L_08A9BDDC;
    }
L_08A9BDDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21948)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BE74;
      }
      goto L_08A9BDF0;
    }
L_08A9BDF0:
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
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(17024));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17032), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x08A9BE54u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 95u, 0x088C06D4u>(ctx, &aot_mem) && ctx.pc == 0x08A9BE54u) goto L_08A9BE54;
    return;
L_08A9BE54:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BE70;
      }
      goto L_08A9BE5C;
    }
L_08A9BE5C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17056), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A9BE74;
      }
      goto L_08A9BE70;
    }
L_08A9BE70:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17056), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A9BE74;
L_08A9BE74:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9BE8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[30] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x08A9BEFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 759u, 0x0891B6B8u>(ctx, &aot_mem) && ctx.pc == 0x08A9BEFCu) goto L_08A9BEFC;
    return;
L_08A9BEFC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BF18;
      }
      goto L_08A9BF04;
    }
L_08A9BF04:
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 4u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] >> 1u);
      if (branch_taken) {
          goto L_08A9BF34;
      }
      goto L_08A9BF18;
    }
L_08A9BF18:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (0u >> 1u);
    ctx.gpr[5] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 4u));
    ctx.gpr[20] = (ctx.gpr[20] & 255u);
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 4u));
    goto L_08A9BF34;
L_08A9BF34:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (16347u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 34079u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (16475u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 34079u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (20352u << 16u);
    ctx.gpr[7] = (16968u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (15872u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[18] = (0u | 0u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[23] = (0u | 3u);
    ctx.gpr[21] = (0u | 5u);
    goto L_08A9BF88;
L_08A9BF88:
    ctx.gpr[31] = (0x08A9BF90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 759u, 0x0891B6B8u>(ctx, &aot_mem) && ctx.pc == 0x08A9BF90u) goto L_08A9BF90;
    return;
L_08A9BF90:
    ctx.gpr[17] = (ctx.gpr[18] << 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (ctx.gpr[16] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A9BFD0;
      }
      goto L_08A9BF9C;
    }
L_08A9BF9C:
    ctx.gpr[4] = (ctx.gpr[18] & 3u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21924)));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[23]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.hi);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[30];
        goto L_08A9BFC4;
    }
    goto L_08A9BFC4;
L_08A9BFC4:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(17040), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A9BFD0;
L_08A9BFD0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17040)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 19u, 0x08A9C144u>(ctx, &aot_mem); return;
      }
      goto L_08A9BFE4;
    }
L_08A9BFE4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17040)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 19u, 0x08A9C144u>(ctx, &aot_mem); return;
      }
      goto L_08A9BFF8;
    }
L_08A9BFF8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17040)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.pc = 0x08A9C000u; return;
}

void recomp_unit_0165(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0165_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_165(Runtime &runtime) {
    runtime.register_generated_unit(165u, 0x08A98000u, 16384u, &recomp_unit_0165, &recomp_unit_0165_entry);
    runtime.register_function(0x08A98000u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98008u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98010u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9801Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98020u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98024u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9802Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98038u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98040u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98044u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9804Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98060u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98068u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98070u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98078u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98080u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98088u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98090u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98098u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A980A4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A980ACu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A980B4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A980C0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A980C8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A980D0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A980D8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A980DCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A980ECu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A980F4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98104u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98110u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98124u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98130u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98138u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98140u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98148u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98150u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9815Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98170u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9817Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98184u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9818Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98194u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9819Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A981A8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A981BCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A981C8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A981D0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A981D8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A981E0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A981E8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A981F4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98208u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98214u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9821Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98224u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9822Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98234u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98240u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98258u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98260u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98268u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98274u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9827Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98280u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98290u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A982A8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A982B0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A982B8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A982C4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A982CCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A982D4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A982DCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A982E8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A982ECu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A982F0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98300u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98308u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98314u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98320u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98328u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98334u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9833Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98344u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9834Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98358u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9835Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98360u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98368u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98374u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98380u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98388u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98390u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98398u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A983A0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A983A8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A983C8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A983D0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A983DCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A983E4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A983ECu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98408u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9840Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98424u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98430u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9843Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98444u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9844Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98454u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9845Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98464u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98478u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9848Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A984A0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A984B0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A984C8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A984E4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A984F0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A984F8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98500u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98508u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98514u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9851Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98528u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98534u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9853Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98544u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98550u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98568u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98574u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9857Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98584u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98588u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9859Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A985B0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A985BCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A985C4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A985CCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A985D4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A985DCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A985E0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A985ECu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98600u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9860Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98614u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9861Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98624u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9862Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98630u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9863Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9864Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98654u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98664u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98674u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98680u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98688u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98694u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A986A4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A986ACu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A986BCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A986CCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A986D8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A986E0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A986ECu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A986FCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98704u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98714u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98724u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98730u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98738u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98744u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98754u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9875Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9876Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9877Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98788u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98790u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9879Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A987A8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A987B4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A987BCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A987C4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A987D0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A987D4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A987D8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A987E0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A987F8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98800u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98808u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98810u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98818u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98820u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98830u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98838u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98848u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98850u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98860u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9886Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98874u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9887Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98884u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9888Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98898u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A988CCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A988D4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A988DCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A988E4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A988ECu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A988F4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A988FCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98904u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9890Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98914u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98924u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9892Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98934u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98938u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98948u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98960u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98970u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98978u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98980u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98988u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98990u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98998u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A989A0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A989ACu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A989B4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A989C0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A989C4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A989C8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A989D8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A989E4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A989F0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A989F8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98A00u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98A08u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98A10u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98A18u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98A24u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98A30u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98A38u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98A40u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98A48u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98A50u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98A58u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98A74u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98A7Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98A84u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98A90u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98AA8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98AB0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98AD4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98ADCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98AE4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98AECu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98B08u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98B24u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98B48u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98B4Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98B5Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98B78u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98B80u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98B88u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98B94u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98B9Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98BA4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98BB8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98BBCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98BD4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98BF0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98C04u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98C0Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98C20u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98C24u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98C3Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98C58u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98C78u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98C7Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98C8Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98CACu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98CB4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98CBCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98CC4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98CD4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98CDCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98CECu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98CF4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98D04u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98D08u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98D14u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98D20u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98D28u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98D30u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98D3Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98D50u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98D64u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98D78u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98D7Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98D8Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98DACu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98DB4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98DBCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98DC0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98DCCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98DD8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98DE0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98DE8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98DFCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98E00u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98E08u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98E1Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98E30u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98E44u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98E48u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98E58u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98E6Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98E88u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98ED8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98EFCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98F04u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98F0Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98F14u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98F30u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98F38u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98F40u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98F48u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98F4Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98F54u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98F60u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98F68u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98F70u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98F9Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98FA4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98FA8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98FECu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99000u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99008u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9900Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99014u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9901Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99020u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9903Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99054u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9905Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99064u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9906Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9907Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A990B0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A990E8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A990F8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9912Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99164u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99178u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99180u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99188u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A991CCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A991D4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A991DCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9922Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99240u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99254u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99268u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99278u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99280u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99284u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9929Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A992ACu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A992B4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A992B8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A992D0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A992E8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A992F0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A992F4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9930Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9931Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99324u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99328u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99340u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99350u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99358u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9935Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99374u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99384u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9938Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99390u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A993A8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A993B8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A993C0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A993C4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A993DCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A993ECu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A993F4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A993F8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9940Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9941Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99424u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99428u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99440u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99450u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99458u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9945Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99474u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99484u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9948Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99490u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A994A8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A994B8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A994C0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A994C4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A994E8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A994F8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99518u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99524u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99530u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9953Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99548u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99550u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9955Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99564u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99570u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99574u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9957Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99588u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99594u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A995A0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A995ACu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A995B8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A995C4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A995D0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A995DCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A995E8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A995F4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99600u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9960Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99618u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99624u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99630u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9963Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99648u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99654u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99660u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9966Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99684u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99688u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99690u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A996A4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A996B8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A996C8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A996D0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A996DCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A996E4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99710u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99738u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99754u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99768u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9977Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99784u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99790u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99798u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A997A0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A997B0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A997B8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A997C4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A997CCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A997DCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A997E4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A997F0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A997F8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99808u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99810u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9981Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99824u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99834u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9983Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99848u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99850u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99860u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99868u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99878u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99880u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99890u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99898u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A998A4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A998ACu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A998BCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A998C4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A998D0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A998D8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A998E8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A998F0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A998FCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99904u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99914u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9991Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99928u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99930u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99940u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99948u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99954u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9995Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9996Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99974u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99980u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99988u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99998u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A999A0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A999ACu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A999B4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A999C4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A999CCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A999D8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A999E0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A999F0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A999F8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99A04u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99A0Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99A1Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99A24u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99A30u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99A38u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99A48u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99A50u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99A5Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99A64u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99A74u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99A7Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99A88u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99A90u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99AA0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99AA8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99AB4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99ABCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99ACCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99AD4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99AE0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99AE8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99AF8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99B00u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99B0Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99B14u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99B24u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99B2Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99B38u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99B40u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99B50u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99B58u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99B64u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99B74u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99B7Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99B88u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99B90u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99BA0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99BA8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99BB4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99BBCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99BCCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99BD4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99BE0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99BF0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99BF8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99C04u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99C0Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99C1Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99C24u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99C30u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99C38u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99C48u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99C50u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99C5Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99C64u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99C74u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99C7Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99C88u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99C90u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99CA0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99CA8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99CB4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99CBCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99CCCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99CD4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99CE0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99CE8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99CF8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99D00u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99D28u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99D34u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99D40u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99D48u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99D4Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99D50u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99D5Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99D70u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99D78u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99D88u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99D90u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99DB8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99DC4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99DD0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99DD8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99DDCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99DE0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99DECu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99E00u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99E08u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99E18u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99E20u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99E2Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99E34u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99E44u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99E4Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99E58u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99E60u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99E70u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99E78u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99E84u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99E94u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99E9Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99EA8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99EB0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99EC0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99EC8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99ED4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99EDCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99EECu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99EF4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99F00u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99F08u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99F18u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99F20u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99F2Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99F34u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99F44u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99F4Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99F58u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99F60u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99F70u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99F78u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99F84u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99F8Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99F9Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99FA4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99FB0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99FB8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99FC8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99FD0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99FDCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99FE4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99FF4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99FFCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A00Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A028u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A138u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A150u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A15Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A164u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A170u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A178u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A180u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A188u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A21Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A248u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A284u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A2B0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A2E0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A2FCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A310u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A344u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A35Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A394u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A3A0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A3A8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A3B0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A3C8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A3E4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A428u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A444u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A450u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A458u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A464u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A470u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A478u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A48Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A4A4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A4B0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A4BCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A4CCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A4DCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A4E4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A4ECu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A4F8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A508u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A52Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A538u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A550u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A56Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A57Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A580u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A590u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A598u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A5A4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A5B4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A5BCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A5C8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A5E4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A5F8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A604u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A610u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A620u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A624u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A630u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A670u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A678u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A684u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A694u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A6A0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A6A8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A6B4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A6BCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A6C4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A6CCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A6D8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A6F4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A714u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A738u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A748u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A750u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A754u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A75Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A774u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A77Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A784u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A7A0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A7B8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A7C4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A7D0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A7F8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A7FCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A818u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A828u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A838u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A844u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A84Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A854u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A870u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A874u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A87Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A8A0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A8B4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A8C4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A8D0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A8D8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A8E4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A8E8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A8F0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A8FCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A908u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A91Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A928u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A934u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A940u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A94Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A958u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A964u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A970u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A974u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A988u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A9A0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A9C0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A9C8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A9D4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A9E4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A9FCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AA08u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AA14u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AA24u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AA28u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AA40u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AA58u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AA64u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AA7Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AA88u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AAA0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AAACu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AAC4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AAD0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AAD8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AB18u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AB24u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AB28u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AB34u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AB40u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AB48u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AB58u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AB70u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AB80u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AB90u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ABA0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ABACu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ABB8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ABC4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ABCCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ABD8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ABE4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ABECu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ABF8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AC04u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AC0Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AC18u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AC1Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AC24u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AC34u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AC3Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AC44u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AC4Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AC54u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AC5Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AC68u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AC78u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AC80u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AC88u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AC90u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AC9Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ACA4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ACACu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ACB4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ACC8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ACE8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ACF4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AD08u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AD24u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AD60u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AD68u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AD7Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AD94u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ADC0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ADD4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ADDCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ADE4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ADECu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ADF8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AE04u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AE24u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AE48u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AE54u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AE6Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AE74u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AE80u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AE8Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AEACu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AED0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AEDCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AEF4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AEFCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AF1Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AF24u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AF6Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AF74u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AF7Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AF84u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AF90u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AF98u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AF9Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AFA4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AFD0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AFDCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B008u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B020u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B050u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B084u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B0A8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B0B4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B0BCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B10Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B120u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B128u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B130u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B138u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B140u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B148u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B154u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B160u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B168u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B170u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B180u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B18Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B194u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B28Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B294u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B29Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B2BCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B2D0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B2F8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B378u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B380u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B3C0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B3E8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B40Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B424u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B440u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B454u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B470u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B484u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B494u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B4ACu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B4B8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B4D0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B4D8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B4ECu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B500u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B528u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B538u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B544u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B54Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B550u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B564u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B59Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B5B4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B5D0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B5E4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B5F4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B60Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B618u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B62Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B640u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B660u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B668u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B670u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B6A8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B6B0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B6B8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B71Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B77Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B788u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B790u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B7A8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B80Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B814u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B81Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B830u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B848u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B87Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B888u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B890u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B898u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B8A0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B8A8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B8C4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B8D0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B8E0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B8F0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B91Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B92Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B934u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B948u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B958u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B974u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B984u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B9A0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B9B0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B9B4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B9C4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B9CCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B9D4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B9E8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B9F4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BA14u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BA38u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BA60u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BAD0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BAD8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BB28u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BB30u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BB44u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BBB4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BBBCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BC0Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BC14u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BC28u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BC98u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BCA0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BCF0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BCF8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BD0Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BD7Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BD84u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BDD4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BDDCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BDF0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BE54u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BE5Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BE70u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BE74u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BE8Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BEFCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BF04u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BF18u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BF34u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BF88u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BF90u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BF9Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BFC4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BFD0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BFE4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BFF8u, &recomp_unit_0165, "recomp_unit_0165");
}
} // namespace psprecomp
