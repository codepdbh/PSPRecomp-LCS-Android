#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0046[4052] = {
    1, 2, 0, 3, 0, 4, 0, 0, 0, 5, 0, 0, 6, 0, 7, 0, 8, 0, 9, 10, 0, 11, 0, 0, 0, 12, 0, 13, 0, 0, 0, 0,
    0, 0, 14, 0, 15, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 18, 19, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 23,
    0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 26, 0, 27, 0, 28, 0, 0, 29, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 34, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0,
    39, 0, 40, 0, 41, 0, 0, 42, 43, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0,
    0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 51,
    52, 0, 53, 0, 54, 0, 55, 0, 0, 56, 0, 0, 0, 57, 0, 58, 59, 0, 60, 0, 0, 61, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 66, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 70, 0, 71, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 75, 0, 76, 0, 0, 0, 77, 0, 78, 0, 0, 79, 0, 80,
    0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 86, 0, 87, 0, 88, 0, 0,
    89, 0, 90, 0, 0, 0, 91, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 97,
    0, 98, 0, 0, 99, 0, 100, 0, 0, 101, 0, 0, 102, 0, 103, 0, 104, 0, 0, 0, 0, 0, 105, 0, 106, 0, 107, 0, 108, 0, 109, 0,
    0, 110, 0, 111, 0, 112, 0, 113, 0, 0, 114, 0, 115, 0, 116, 117, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 121, 0, 0,
    122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 124, 0, 125, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 128, 0, 129, 130, 0,
    0, 0, 131, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 140, 0, 0,
    141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 154, 0, 155, 156, 0, 157, 0, 0, 158, 0, 159, 160, 0, 161, 0, 162, 0, 0, 163, 0, 164, 165, 0, 166, 0, 167,
    0, 0, 0, 168, 0, 169, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 172, 173, 0, 0, 174, 0, 0, 175, 0, 0, 0, 0, 176, 0, 177, 0,
    0, 178, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 181, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 185, 0, 186, 0, 187, 0, 0,
    188, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 192, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 194, 0, 195, 0, 196, 0, 0, 197, 0, 0, 198, 0, 199, 0, 200, 0, 201, 0, 202, 0, 203, 0, 0, 204, 0, 205, 0, 206, 0, 0,
    0, 0, 207, 0, 208, 0, 0, 209, 0, 210, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 216, 0,
    0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 221, 0, 0, 222, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 0, 227,
    0, 0, 228, 0, 229, 0, 230, 0, 0, 0, 0, 231, 232, 0, 0, 0, 233, 0, 234, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0,
    0, 239, 0, 240, 0, 241, 0, 242, 0, 243, 0, 244, 0, 0, 0, 245, 0, 0, 0, 246, 0, 247, 0, 0, 0, 248, 0, 249, 0, 0, 0, 250,
    0, 251, 0, 0, 0, 252, 0, 253, 0, 0, 0, 254, 0, 255, 0, 0, 0, 256, 0, 0, 257, 0, 0, 258, 0, 0, 0, 259, 0, 260, 0, 0,
    0, 261, 0, 262, 263, 0, 0, 264, 0, 265, 0, 0, 0, 266, 0, 267, 0, 0, 0, 268, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 0,
    271, 0, 272, 273, 0, 0, 274, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 278, 0, 0, 0, 279, 0, 280, 0, 281, 0, 282, 0,
    0, 283, 0, 0, 284, 0, 285, 286, 0, 287, 0, 0, 288, 0, 289, 0, 290, 0, 0, 291, 0, 0, 292, 0, 293, 294, 0, 295, 0, 0, 296, 0,
    297, 0, 298, 0, 0, 299, 0, 0, 300, 0, 301, 302, 0, 303, 0, 0, 304, 0, 305, 0, 306, 0, 0, 307, 0, 0, 308, 0, 309, 310, 0, 311,
    0, 0, 312, 0, 313, 0, 314, 0, 0, 315, 0, 0, 316, 0, 317, 318, 0, 319, 0, 0, 320, 0, 321, 0, 322, 0, 0, 323, 0, 0, 324, 0,
    325, 326, 0, 327, 0, 0, 328, 0, 329, 0, 330, 0, 0, 331, 0, 0, 332, 0, 333, 334, 0, 335, 0, 0, 336, 0, 337, 0, 338, 0, 0, 339,
    0, 0, 340, 0, 341, 342, 0, 343, 0, 0, 344, 0, 345, 0, 346, 0, 0, 347, 0, 0, 348, 0, 349, 350, 0, 351, 0, 0, 352, 0, 353, 0,
    354, 0, 0, 355, 0, 0, 356, 0, 357, 358, 0, 359, 0, 0, 360, 0, 361, 0, 362, 363, 0, 364, 0, 365, 0, 0, 366, 0, 367, 368, 0, 369,
    0, 370, 0, 0, 371, 0, 372, 373, 0, 374, 0, 0, 0, 375, 0, 376, 0, 0, 377, 0, 378, 379, 0, 380, 0, 381, 0, 382, 0, 0, 383, 0,
    0, 384, 0, 385, 386, 0, 387, 0, 0, 388, 389, 0, 390, 0, 391, 0, 0, 392, 0, 0, 0, 393, 0, 394, 0, 0, 0, 0, 0, 0, 0, 395,
    0, 0, 0, 0, 0, 0, 0, 396, 0, 397, 0, 0, 0, 398, 0, 399, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 403, 0,
    0, 0, 404, 0, 405, 406, 0, 407, 0, 0, 408, 0, 0, 409, 0, 410, 0, 0, 411, 0, 0, 0, 412, 0, 0, 413, 0, 0, 0, 0, 0, 414,
    0, 415, 0, 0, 416, 0, 417, 0, 418, 0, 419, 0, 420, 0, 421, 0, 0, 422, 0, 0, 0, 0, 0, 423, 0, 424, 0, 0, 0, 0, 425, 0,
    426, 0, 0, 0, 0, 0, 0, 427, 0, 428, 0, 0, 0, 0, 429, 0, 430, 0, 0, 0, 0, 0, 431, 432, 0, 433, 0, 0, 0, 0, 0, 434,
    0, 435, 0, 436, 0, 0, 0, 0, 0, 437, 0, 438, 0, 0, 439, 0, 440, 0, 0, 0, 0, 441, 0, 0, 0, 442, 0, 443, 444, 0, 445, 0,
    0, 446, 0, 0, 447, 0, 0, 0, 448, 0, 0, 0, 0, 0, 449, 0, 450, 0, 0, 0, 0, 0, 451, 0, 452, 0, 0, 453, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 456, 0, 0, 0, 0, 457, 0, 458, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 459, 0, 460, 0, 461, 0, 0, 0, 462, 0, 0, 0, 0, 463, 0, 0, 0, 464, 0, 0, 465, 0, 466, 0, 467, 0, 0, 468, 0,
    0, 0, 469, 0, 0, 470, 0, 0, 0, 0, 471, 0, 472, 0, 473, 0, 0, 0, 474, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    476, 477, 0, 0, 0, 0, 478, 0, 479, 0, 480, 0, 0, 481, 0, 482, 0, 0, 483, 0, 0, 0, 484, 0, 0, 485, 0, 0, 486, 0, 0, 487,
    488, 0, 489, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 491, 0, 0, 492, 0, 493, 0, 0, 0, 0, 494, 0, 0, 495, 0, 496, 0, 497,
    0, 498, 0, 0, 0, 499, 0, 500, 0, 501, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 504, 0, 505, 0, 506, 0, 0, 507,
    0, 508, 509, 0, 510, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 512, 0, 513, 0, 0, 514, 0, 0, 515, 0, 0, 516, 0, 0, 0, 517, 0,
    518, 519, 0, 520, 521, 0, 522, 0, 523, 0, 0, 524, 0, 0, 525, 0, 0, 0, 0, 526, 0, 0, 0, 527, 0, 528, 0, 0, 0, 529, 0, 0,
    0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 533,
    0, 0, 0, 0, 0, 534, 0, 0, 535, 0, 0, 0, 0, 536, 0, 537, 0, 538, 0, 539, 0, 540, 541, 0, 542, 0, 543, 0, 0, 0, 544, 0,
    545, 0, 546, 0, 0, 0, 547, 0, 548, 0, 549, 0, 550, 551, 0, 552, 0, 553, 0, 554, 0, 555, 0, 556, 0, 557, 0, 558, 0, 559, 0, 0,
    560, 0, 561, 0, 562, 0, 563, 0, 0, 0, 0, 564, 0, 565, 0, 0, 0, 566, 0, 0, 0, 0, 567, 0, 0, 0, 568, 0, 569, 570, 0, 571,
    0, 0, 572, 0, 0, 0, 0, 573, 0, 0, 0, 574, 0, 575, 576, 0, 577, 0, 578, 0, 0, 0, 579, 0, 0, 580, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 581, 0, 0, 0, 0, 582, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 584, 0, 0, 585, 0, 586, 0, 0, 587, 0, 0, 588, 589,
    0, 0, 590, 0, 591, 0, 592, 0, 0, 0, 0, 0, 0, 593, 0, 0, 594, 0, 0, 595, 0, 0, 0, 0, 596, 0, 0, 597, 0, 0, 0, 598,
    599, 0, 600, 0, 0, 601, 0, 602, 0, 0, 603, 0, 0, 604, 0, 605, 0, 0, 0, 0, 606, 0, 607, 0, 0, 608, 0, 0, 0, 609, 0, 0,
    610, 0, 0, 611, 0, 612, 0, 0, 0, 613, 0, 0, 614, 0, 615, 0, 0, 0, 616, 0, 0, 0, 617, 0, 618, 0, 0, 0, 0, 0, 0, 619,
    0, 0, 0, 0, 0, 620, 0, 0, 621, 0, 0, 622, 0, 0, 0, 0, 623, 0, 624, 0, 625, 0, 626, 0, 0, 0, 627, 0, 0, 628, 0, 629,
    630, 0, 631, 0, 632, 0, 0, 0, 0, 0, 633, 0, 0, 0, 634, 0, 635, 0, 0, 0, 636, 0, 0, 637, 0, 0, 0, 638, 639, 0, 0, 0,
    0, 0, 640, 0, 0, 0, 0, 641, 0, 642, 0, 643, 0, 0, 644, 0, 0, 645, 0, 0, 0, 646, 0, 647, 0, 648, 0, 0, 0, 0, 649, 0,
    0, 650, 0, 0, 651, 0, 652, 0, 653, 0, 0, 654, 0, 0, 0, 655, 0, 0, 656, 0, 657, 0, 658, 0, 0, 659, 0, 0, 660, 0, 661, 0,
    0, 0, 662, 0, 0, 663, 0, 664, 0, 0, 0, 665, 0, 0, 0, 666, 0, 667, 0, 0, 0, 0, 0, 0, 668, 0, 669, 0, 670, 0, 671, 0,
    0, 672, 0, 0, 673, 0, 674, 0, 675, 0, 676, 0, 0, 0, 0, 0, 0, 0, 677, 0, 678, 0, 679, 0, 680, 0, 0, 681, 0, 0, 0, 682,
    0, 683, 0, 0, 684, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 686, 0, 687, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 689, 0, 690, 0, 0, 691, 0, 0, 692, 0, 693,
    0, 694, 0, 0, 0, 695, 0, 0, 0, 696, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 697, 0, 698, 0, 0, 0, 0, 699, 0, 700, 0,
    701, 0, 0, 0, 702, 0, 0, 703, 0, 0, 0, 704, 0, 0, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0, 706, 0, 0, 707, 0, 708, 0, 709,
    0, 710, 0, 711, 0, 0, 0, 712, 0, 0, 0, 713, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 714, 0, 0, 0, 715, 0, 0, 0,
    716, 0, 0, 0, 717, 0, 0, 0, 718, 0, 0, 0, 0, 719, 0, 720, 0, 0, 721, 0, 0, 0, 0, 722, 0, 723, 0, 724, 0, 725, 0, 726,
    0, 727, 0, 728, 0, 729, 0, 730, 0, 0, 731, 0, 732, 0, 0, 0, 0, 733, 0, 0, 0, 734, 0, 0, 0, 735, 0, 0, 736, 0, 0, 737,
    0, 0, 0, 738, 0, 0, 0, 739, 0, 0, 0, 0, 0, 740, 0, 0, 0, 741, 0, 0, 0, 742, 0, 0, 0, 743, 0, 0, 0, 0, 744, 0,
    745, 0, 0, 0, 0, 0, 0, 0, 0, 0, 746, 0, 0, 747, 0, 748, 0, 749, 0, 750, 0, 0, 0, 751, 0, 0, 0, 752, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 753, 0, 0, 754, 0, 755, 0, 0, 0, 756, 0, 0, 0, 0, 0, 0, 0, 757, 0, 0, 758, 0, 0, 0, 759,
    0, 0, 0, 760, 0, 0, 0, 761, 0, 0, 0, 0, 762, 0, 763, 0, 764, 0, 765, 0, 0, 0, 0, 766, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 767, 0, 0, 0, 0, 0, 0, 768, 0, 0, 769, 0, 770, 0, 771, 0, 772, 0, 0,
    0, 0, 0, 0, 773, 0, 774, 0, 0, 775, 0, 0, 0, 0, 776, 0, 777, 0, 0, 0, 0, 778, 0, 779, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 780, 0, 781, 0, 782, 0, 783, 0, 0, 784, 0, 0, 785, 0, 0, 0, 0, 0, 786, 0, 0, 0, 0,
    787, 0, 788, 789, 0, 0, 790, 791, 0, 0, 0, 0, 792, 0, 793, 0, 0, 0, 0, 794, 0, 795, 0, 796, 0, 797, 0, 0, 0, 0, 798, 0,
    799, 0, 0, 0, 0, 800, 0, 801, 0, 802, 0, 803, 0, 0, 0, 804, 0, 0, 0, 0, 805, 0, 806, 0, 0, 0, 0, 807, 0, 808, 0, 0,
    0, 809, 0, 0, 0, 810, 0, 0, 0, 811, 0, 0, 812, 0, 813, 0, 0, 0, 814, 0, 0, 0, 815, 0, 0, 0, 0, 0, 0, 0, 0, 816,
    0, 817, 0, 0, 0, 818, 0, 0, 0, 819, 0, 820, 0, 0, 821, 822, 0, 0, 0, 0, 823, 0, 0, 824, 0, 0, 0, 825, 0, 0, 0, 0,
    826, 0, 0, 0, 0, 0, 827, 828, 0, 0, 0, 0, 0, 0, 829, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 830, 0, 0, 0,
    0, 0, 831, 0, 0, 0, 832, 0, 833, 0, 0, 834, 0, 0, 835, 0, 0, 836, 0, 837, 0, 0, 0, 0, 0, 0, 0, 0, 0, 838, 0, 839,
    0, 0, 0, 840, 0, 841, 0, 0, 0, 0, 0, 0, 0, 842, 0, 0, 843, 0, 844, 0, 845, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 846, 0, 847, 0, 848, 0, 0, 0, 849, 0, 0, 0, 0, 0, 0,
    850, 0, 0, 0, 0, 0, 851, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 852, 0, 0, 0, 853, 0, 854, 0, 0, 0, 855, 0, 0, 856, 0,
    857, 0, 858, 0, 0, 0, 0, 0, 859, 0, 0, 0, 0, 0, 0, 860, 0, 861, 0, 0, 0, 0, 0, 0, 862, 0, 0, 0, 863, 0, 864, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 865, 0, 0, 0, 0, 0, 0, 0, 0, 866, 0, 867, 0, 0, 0, 0, 0, 868, 0, 0, 0, 869, 0,
    870, 871, 0, 0, 872, 0, 0, 0, 0, 873, 0, 0, 874, 0, 875, 0, 876, 0, 0, 0, 0, 877, 0, 0, 878, 0, 879, 0, 0, 880, 0, 0,
    0, 881, 0, 0, 0, 0, 0, 0, 0, 882, 0, 0, 0, 883, 0, 0, 0, 0, 0, 884, 0, 0, 885, 0, 0, 0, 886, 887, 0, 0, 0, 888,
    0, 0, 889, 0, 890, 0, 0, 0, 0, 0, 0, 0, 0, 0, 891, 0, 0, 0, 0, 0, 0, 0, 0, 892, 0, 0, 0, 0, 0, 893, 0, 894,
    0, 895, 0, 896, 0, 897, 0, 898, 0, 0, 899, 0, 900, 0, 901, 0, 0, 0, 0, 0, 0, 902, 0, 903, 0, 0, 0, 0, 904, 0, 905, 0,
    906, 0, 0, 0, 0, 0, 0, 0, 0, 0, 907, 0, 0, 0, 0, 0, 0, 0, 0, 908, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 909, 0, 0, 910, 0, 0, 0, 0, 911, 0, 0, 0, 912, 0, 913, 914,
    0, 0, 915, 0, 916, 0, 0, 0, 0, 0, 0, 917, 0, 0, 0, 918, 0, 0, 0, 0, 919, 0, 920, 0, 921, 0, 0, 0, 922, 0, 0, 0,
    923, 0, 0, 0, 924, 0, 0, 0, 0, 0, 925, 0, 926, 0, 0, 0, 0, 927, 0, 928, 0, 0, 0, 0, 0, 0, 929, 0, 0, 0, 930, 0,
    0, 0, 0, 0, 931, 0, 0, 0, 0, 0, 932, 0, 0, 0, 0, 0, 933, 0, 934, 0, 0, 0, 0, 0, 0, 935, 0, 0, 0, 936, 0, 0,
    0, 937, 0, 0, 0, 938, 0, 0, 0, 939, 0, 0, 0, 0, 0, 940, 0, 0, 0, 0, 941, 0, 0, 0, 0, 0, 942, 0, 0, 0, 0, 0,
    0, 0, 943, 0, 944, 0, 0, 0, 0, 0, 945, 0, 0, 0, 0, 0, 0, 0, 0, 0, 946, 0, 0, 0, 0, 0, 947, 0, 0, 0, 0, 0,
    948, 0, 949, 0, 0, 0, 0, 950, 0, 0, 0, 951, 0, 952, 0, 0, 0, 0, 953, 0, 0, 0, 0, 0, 0, 0, 954, 0, 955, 0, 0, 0,
    0, 956, 0, 0, 0, 957, 0, 958, 0, 0, 0, 0, 959, 0, 0, 0, 0, 0, 0, 0, 960, 0, 0, 961, 0, 0, 0, 0, 0, 0, 962, 963,
    0, 0, 0, 964, 0, 965, 0, 0, 0, 966, 0, 0, 0, 967, 0, 0, 0, 968, 0, 0, 0, 969, 0, 970, 0, 0, 0, 971, 0, 972, 0, 0,
    973, 0, 0, 974, 0, 0, 0, 0, 0, 975, 0, 0, 0, 0, 976, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 977, 0, 0, 0, 0,
    978, 0, 0, 979, 0, 980, 0, 0, 981, 0, 982, 0, 0, 983, 984, 0, 985, 0, 0, 986, 0, 987, 0, 0, 0, 0, 0, 0, 0, 988, 0, 989,
    0, 0, 990, 0, 991, 0, 992, 0, 0, 0, 993, 0, 994, 0, 0, 0, 0, 995, 0, 996, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    997, 0, 0, 0, 0, 998, 0, 0, 999, 1000, 0, 0, 1001, 0, 0, 0, 1002, 0, 0, 0, 1003, 0, 1004, 0, 0, 0, 0, 1005, 0, 0, 0, 0,
    1006, 0, 1007, 0, 0, 0, 0, 0, 1008, 0, 1009, 0, 0, 1010, 0, 1011, 0, 1012, 0, 1013, 0, 1014, 0, 1015, 0, 0, 0, 1016, 0, 0, 0, 0,
    0, 1017, 0, 0, 0, 1018, 0, 0, 0, 1019, 0, 0, 1020, 0, 0, 0, 1021, 0, 1022, 1023, 0, 1024, 0, 1025, 0, 0, 0, 0, 0, 1026, 0, 0,
    0, 1027, 0, 1028, 1029, 0, 0, 0, 0, 1030, 0, 1031, 0, 0, 1032, 0, 1033, 0, 1034, 0, 0, 0, 0, 0, 0, 0, 0, 1035, 0, 0, 1036, 0,
    0, 0, 0, 0, 1037, 0, 0, 0, 0, 0, 1038, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1039, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 1040, 0, 0, 1041, 0, 0, 0, 1042, 0, 1043, 0, 0, 0, 0, 0, 0, 0, 1044, 0, 0, 0, 1045, 0, 0,
    1046, 0, 0, 0, 1047, 0, 1048, 0, 0, 1049, 0, 0, 0, 0, 1050, 0, 0, 0, 1051, 0, 1052, 0, 0, 0, 0, 1053, 0, 1054, 0, 0, 0, 0,
    1055, 0, 1056, 0, 0, 0, 1057, 0, 0, 1058, 1059, 0, 0, 0, 0, 1060, 0, 0, 1061, 0, 0, 0, 0, 0, 0, 1062, 0, 1063, 0, 0, 0, 0,
    1064, 0, 0, 0, 0, 1065, 0, 0, 0, 1066, 0, 1067, 0, 0, 0, 1068, 0, 1069, 0, 1070, 0, 1071, 0, 0, 1072, 0, 0, 1073, 0, 0, 0, 0,
    1074, 0, 0, 0, 1075, 0, 0, 0, 1076, 0, 0, 0, 1077, 0, 0, 0, 0, 1078, 0, 0, 0, 1079, 0, 0, 1080, 0, 1081, 0, 0, 0, 1082, 0,
    1083, 0, 0, 0, 0, 1084, 0, 1085, 0, 0, 0, 0, 1086, 0, 0, 1087, 0, 0, 0, 1088, 0, 0, 0, 1089, 0, 0, 1090, 0, 0, 1091, 0, 0,
    0, 1092, 0, 0, 0, 1093, 0, 0, 0, 0, 0, 1094, 0, 0, 0, 0, 0, 0, 0, 1095,
};
void recomp_unit_0046_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088BC004u;
        entry_id = (entry_delta < 16208u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0046[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088BC004;
    case 2u: goto L_088BC008;
    case 3u: goto L_088BC010;
    case 4u: goto L_088BC018;
    case 5u: goto L_088BC028;
    case 6u: goto L_088BC034;
    case 7u: goto L_088BC03C;
    case 8u: goto L_088BC044;
    case 9u: goto L_088BC04C;
    case 10u: goto L_088BC050;
    case 11u: goto L_088BC058;
    case 12u: goto L_088BC068;
    case 13u: goto L_088BC070;
    case 14u: goto L_088BC08C;
    case 15u: goto L_088BC094;
    case 16u: goto L_088BC0A0;
    case 17u: goto L_088BC0B4;
    case 18u: goto L_088BC0C0;
    case 19u: goto L_088BC0C4;
    case 20u: goto L_088BC0CC;
    case 21u: goto L_088BC0EC;
    case 22u: goto L_088BC0F4;
    case 23u: goto L_088BC100;
    case 24u: goto L_088BC114;
    case 25u: goto L_088BC124;
    case 26u: goto L_088BC130;
    case 27u: goto L_088BC138;
    case 28u: goto L_088BC140;
    case 29u: goto L_088BC14C;
    case 30u: goto L_088BC154;
    case 31u: goto L_088BC168;
    case 32u: goto L_088BC198;
    case 33u: goto L_088BC1A8;
    case 34u: goto L_088BC1B4;
    case 35u: goto L_088BC1BC;
    case 36u: goto L_088BC1D0;
    case 37u: goto L_088BC1E4;
    case 38u: goto L_088BC1F4;
    case 39u: goto L_088BC204;
    case 40u: goto L_088BC20C;
    case 41u: goto L_088BC214;
    case 42u: goto L_088BC220;
    case 43u: goto L_088BC224;
    case 44u: goto L_088BC234;
    case 45u: goto L_088BC248;
    case 46u: goto L_088BC26C;
    case 47u: goto L_088BC290;
    case 48u: goto L_088BC2A4;
    case 49u: goto L_088BC2E8;
    case 50u: goto L_088BC2F8;
    case 51u: goto L_088BC300;
    case 52u: goto L_088BC304;
    case 53u: goto L_088BC30C;
    case 54u: goto L_088BC314;
    case 55u: goto L_088BC31C;
    case 56u: goto L_088BC328;
    case 57u: goto L_088BC338;
    case 58u: goto L_088BC340;
    case 59u: goto L_088BC344;
    case 60u: goto L_088BC34C;
    case 61u: goto L_088BC358;
    case 62u: goto L_088BC360;
    case 63u: goto L_088BC36C;
    case 64u: goto L_088BC394;
    case 65u: goto L_088BC3A0;
    case 66u: goto L_088BC3B0;
    case 67u: goto L_088BC3B4;
    case 68u: goto L_088BC3D8;
    case 69u: goto L_088BC3E0;
    case 70u: goto L_088BC3F0;
    case 71u: goto L_088BC3F8;
    case 72u: goto L_088BC420;
    case 73u: goto L_088BC438;
    case 74u: goto L_088BC440;
    case 75u: goto L_088BC44C;
    case 76u: goto L_088BC454;
    case 77u: goto L_088BC464;
    case 78u: goto L_088BC46C;
    case 79u: goto L_088BC478;
    case 80u: goto L_088BC480;
    case 81u: goto L_088BC494;
    case 82u: goto L_088BC4A8;
    case 83u: goto L_088BC4BC;
    case 84u: goto L_088BC4C8;
    case 85u: goto L_088BC4D4;
    case 86u: goto L_088BC4E8;
    case 87u: goto L_088BC4F0;
    case 88u: goto L_088BC4F8;
    case 89u: goto L_088BC504;
    case 90u: goto L_088BC50C;
    case 91u: goto L_088BC51C;
    case 92u: goto L_088BC528;
    case 93u: goto L_088BC534;
    case 94u: goto L_088BC550;
    case 95u: goto L_088BC564;
    case 96u: goto L_088BC574;
    case 97u: goto L_088BC580;
    case 98u: goto L_088BC588;
    case 99u: goto L_088BC594;
    case 100u: goto L_088BC59C;
    case 101u: goto L_088BC5A8;
    case 102u: goto L_088BC5B4;
    case 103u: goto L_088BC5BC;
    case 104u: goto L_088BC5C4;
    case 105u: goto L_088BC5DC;
    case 106u: goto L_088BC5E4;
    case 107u: goto L_088BC5EC;
    case 108u: goto L_088BC5F4;
    case 109u: goto L_088BC5FC;
    case 110u: goto L_088BC608;
    case 111u: goto L_088BC610;
    case 112u: goto L_088BC618;
    case 113u: goto L_088BC620;
    case 114u: goto L_088BC62C;
    case 115u: goto L_088BC634;
    case 116u: goto L_088BC63C;
    case 117u: goto L_088BC640;
    case 118u: goto L_088BC648;
    case 119u: goto L_088BC65C;
    case 120u: goto L_088BC66C;
    case 121u: goto L_088BC678;
    case 122u: goto L_088BC684;
    case 123u: goto L_088BC6B0;
    case 124u: goto L_088BC6B8;
    case 125u: goto L_088BC6C0;
    case 126u: goto L_088BC6D0;
    case 127u: goto L_088BC6DC;
    case 128u: goto L_088BC6F0;
    case 129u: goto L_088BC6F8;
    case 130u: goto L_088BC6FC;
    case 131u: goto L_088BC70C;
    case 132u: goto L_088BC714;
    case 133u: goto L_088BC72C;
    case 134u: goto L_088BC748;
    case 135u: goto L_088BC754;
    case 136u: goto L_088BC7BC;
    case 137u: goto L_088BC7C4;
    case 138u: goto L_088BC7D0;
    case 139u: goto L_088BC7F0;
    case 140u: goto L_088BC7F8;
    case 141u: goto L_088BC804;
    case 142u: goto L_088BC834;
    case 143u: goto L_088BC84C;
    case 144u: goto L_088BC858;
    case 145u: goto L_088BC8A8;
    case 146u: goto L_088BC8B4;
    case 147u: goto L_088BC904;
    case 148u: goto L_088BC918;
    case 149u: goto L_088BC940;
    case 150u: goto L_088BC944;
    case 151u: goto L_088BC9CC;
    case 152u: goto L_088BC9D4;
    case 153u: goto L_088BC9F4;
    case 154u: goto L_088BCA1C;
    case 155u: goto L_088BCA24;
    case 156u: goto L_088BCA28;
    case 157u: goto L_088BCA30;
    case 158u: goto L_088BCA3C;
    case 159u: goto L_088BCA44;
    case 160u: goto L_088BCA48;
    case 161u: goto L_088BCA50;
    case 162u: goto L_088BCA58;
    case 163u: goto L_088BCA64;
    case 164u: goto L_088BCA6C;
    case 165u: goto L_088BCA70;
    case 166u: goto L_088BCA78;
    case 167u: goto L_088BCA80;
    case 168u: goto L_088BCA90;
    case 169u: goto L_088BCA98;
    case 170u: goto L_088BCAA4;
    case 171u: goto L_088BCAB8;
    case 172u: goto L_088BCAC4;
    case 173u: goto L_088BCAC8;
    case 174u: goto L_088BCAD4;
    case 175u: goto L_088BCAE0;
    case 176u: goto L_088BCAF4;
    case 177u: goto L_088BCAFC;
    case 178u: goto L_088BCB08;
    case 179u: goto L_088BCB1C;
    case 180u: goto L_088BCB28;
    case 181u: goto L_088BCB34;
    case 182u: goto L_088BCB38;
    case 183u: goto L_088BCB48;
    case 184u: goto L_088BCB60;
    case 185u: goto L_088BCB68;
    case 186u: goto L_088BCB70;
    case 187u: goto L_088BCB78;
    case 188u: goto L_088BCB84;
    case 189u: goto L_088BCB94;
    case 190u: goto L_088BCB9C;
    case 191u: goto L_088BCBC8;
    case 192u: goto L_088BCBD0;
    case 193u: goto L_088BCBD8;
    case 194u: goto L_088BCC0C;
    case 195u: goto L_088BCC14;
    case 196u: goto L_088BCC1C;
    case 197u: goto L_088BCC28;
    case 198u: goto L_088BCC34;
    case 199u: goto L_088BCC3C;
    case 200u: goto L_088BCC44;
    case 201u: goto L_088BCC4C;
    case 202u: goto L_088BCC54;
    case 203u: goto L_088BCC5C;
    case 204u: goto L_088BCC68;
    case 205u: goto L_088BCC70;
    case 206u: goto L_088BCC78;
    case 207u: goto L_088BCC8C;
    case 208u: goto L_088BCC94;
    case 209u: goto L_088BCCA0;
    case 210u: goto L_088BCCA8;
    case 211u: goto L_088BCCB0;
    case 212u: goto L_088BCCC8;
    case 213u: goto L_088BCDB0;
    case 214u: goto L_088BCDB4;
    case 215u: goto L_088BCDF4;
    case 216u: goto L_088BCDFC;
    case 217u: goto L_088BCE14;
    case 218u: goto L_088BCE30;
    case 219u: goto L_088BCE50;
    case 220u: goto L_088BCE64;
    case 221u: goto L_088BCE70;
    case 222u: goto L_088BCE7C;
    case 223u: goto L_088BCEBC;
    case 224u: goto L_088BCED0;
    case 225u: goto L_088BCEDC;
    case 226u: goto L_088BCEE8;
    case 227u: goto L_088BCF00;
    case 228u: goto L_088BCF0C;
    case 229u: goto L_088BCF14;
    case 230u: goto L_088BCF1C;
    case 231u: goto L_088BCF30;
    case 232u: goto L_088BCF34;
    case 233u: goto L_088BCF44;
    case 234u: goto L_088BCF4C;
    case 235u: goto L_088BCF54;
    case 236u: goto L_088BCF70;
    case 237u: goto L_088BCFB0;
    case 238u: goto L_088BCFF8;
    case 239u: goto L_088BD008;
    case 240u: goto L_088BD010;
    case 241u: goto L_088BD018;
    case 242u: goto L_088BD020;
    case 243u: goto L_088BD028;
    case 244u: goto L_088BD030;
    case 245u: goto L_088BD040;
    case 246u: goto L_088BD050;
    case 247u: goto L_088BD058;
    case 248u: goto L_088BD068;
    case 249u: goto L_088BD070;
    case 250u: goto L_088BD080;
    case 251u: goto L_088BD088;
    case 252u: goto L_088BD098;
    case 253u: goto L_088BD0A0;
    case 254u: goto L_088BD0B0;
    case 255u: goto L_088BD0B8;
    case 256u: goto L_088BD0C8;
    case 257u: goto L_088BD0D4;
    case 258u: goto L_088BD0E0;
    case 259u: goto L_088BD0F0;
    case 260u: goto L_088BD0F8;
    case 261u: goto L_088BD108;
    case 262u: goto L_088BD110;
    case 263u: goto L_088BD114;
    case 264u: goto L_088BD120;
    case 265u: goto L_088BD128;
    case 266u: goto L_088BD138;
    case 267u: goto L_088BD140;
    case 268u: goto L_088BD150;
    case 269u: goto L_088BD15C;
    case 270u: goto L_088BD170;
    case 271u: goto L_088BD184;
    case 272u: goto L_088BD18C;
    case 273u: goto L_088BD190;
    case 274u: goto L_088BD19C;
    case 275u: goto L_088BD1A4;
    case 276u: goto L_088BD1B4;
    case 277u: goto L_088BD1CC;
    case 278u: goto L_088BD1D4;
    case 279u: goto L_088BD1E4;
    case 280u: goto L_088BD1EC;
    case 281u: goto L_088BD1F4;
    case 282u: goto L_088BD1FC;
    case 283u: goto L_088BD208;
    case 284u: goto L_088BD214;
    case 285u: goto L_088BD21C;
    case 286u: goto L_088BD220;
    case 287u: goto L_088BD228;
    case 288u: goto L_088BD234;
    case 289u: goto L_088BD23C;
    case 290u: goto L_088BD244;
    case 291u: goto L_088BD250;
    case 292u: goto L_088BD25C;
    case 293u: goto L_088BD264;
    case 294u: goto L_088BD268;
    case 295u: goto L_088BD270;
    case 296u: goto L_088BD27C;
    case 297u: goto L_088BD284;
    case 298u: goto L_088BD28C;
    case 299u: goto L_088BD298;
    case 300u: goto L_088BD2A4;
    case 301u: goto L_088BD2AC;
    case 302u: goto L_088BD2B0;
    case 303u: goto L_088BD2B8;
    case 304u: goto L_088BD2C4;
    case 305u: goto L_088BD2CC;
    case 306u: goto L_088BD2D4;
    case 307u: goto L_088BD2E0;
    case 308u: goto L_088BD2EC;
    case 309u: goto L_088BD2F4;
    case 310u: goto L_088BD2F8;
    case 311u: goto L_088BD300;
    case 312u: goto L_088BD30C;
    case 313u: goto L_088BD314;
    case 314u: goto L_088BD31C;
    case 315u: goto L_088BD328;
    case 316u: goto L_088BD334;
    case 317u: goto L_088BD33C;
    case 318u: goto L_088BD340;
    case 319u: goto L_088BD348;
    case 320u: goto L_088BD354;
    case 321u: goto L_088BD35C;
    case 322u: goto L_088BD364;
    case 323u: goto L_088BD370;
    case 324u: goto L_088BD37C;
    case 325u: goto L_088BD384;
    case 326u: goto L_088BD388;
    case 327u: goto L_088BD390;
    case 328u: goto L_088BD39C;
    case 329u: goto L_088BD3A4;
    case 330u: goto L_088BD3AC;
    case 331u: goto L_088BD3B8;
    case 332u: goto L_088BD3C4;
    case 333u: goto L_088BD3CC;
    case 334u: goto L_088BD3D0;
    case 335u: goto L_088BD3D8;
    case 336u: goto L_088BD3E4;
    case 337u: goto L_088BD3EC;
    case 338u: goto L_088BD3F4;
    case 339u: goto L_088BD400;
    case 340u: goto L_088BD40C;
    case 341u: goto L_088BD414;
    case 342u: goto L_088BD418;
    case 343u: goto L_088BD420;
    case 344u: goto L_088BD42C;
    case 345u: goto L_088BD434;
    case 346u: goto L_088BD43C;
    case 347u: goto L_088BD448;
    case 348u: goto L_088BD454;
    case 349u: goto L_088BD45C;
    case 350u: goto L_088BD460;
    case 351u: goto L_088BD468;
    case 352u: goto L_088BD474;
    case 353u: goto L_088BD47C;
    case 354u: goto L_088BD484;
    case 355u: goto L_088BD490;
    case 356u: goto L_088BD49C;
    case 357u: goto L_088BD4A4;
    case 358u: goto L_088BD4A8;
    case 359u: goto L_088BD4B0;
    case 360u: goto L_088BD4BC;
    case 361u: goto L_088BD4C4;
    case 362u: goto L_088BD4CC;
    case 363u: goto L_088BD4D0;
    case 364u: goto L_088BD4D8;
    case 365u: goto L_088BD4E0;
    case 366u: goto L_088BD4EC;
    case 367u: goto L_088BD4F4;
    case 368u: goto L_088BD4F8;
    case 369u: goto L_088BD500;
    case 370u: goto L_088BD508;
    case 371u: goto L_088BD514;
    case 372u: goto L_088BD51C;
    case 373u: goto L_088BD520;
    case 374u: goto L_088BD528;
    case 375u: goto L_088BD538;
    case 376u: goto L_088BD540;
    case 377u: goto L_088BD54C;
    case 378u: goto L_088BD554;
    case 379u: goto L_088BD558;
    case 380u: goto L_088BD560;
    case 381u: goto L_088BD568;
    case 382u: goto L_088BD570;
    case 383u: goto L_088BD57C;
    case 384u: goto L_088BD588;
    case 385u: goto L_088BD590;
    case 386u: goto L_088BD594;
    case 387u: goto L_088BD59C;
    case 388u: goto L_088BD5A8;
    case 389u: goto L_088BD5AC;
    case 390u: goto L_088BD5B4;
    case 391u: goto L_088BD5BC;
    case 392u: goto L_088BD5C8;
    case 393u: goto L_088BD5D8;
    case 394u: goto L_088BD5E0;
    case 395u: goto L_088BD600;
    case 396u: goto L_088BD620;
    case 397u: goto L_088BD628;
    case 398u: goto L_088BD638;
    case 399u: goto L_088BD640;
    case 400u: goto L_088BD650;
    case 401u: goto L_088BD660;
    case 402u: goto L_088BD670;
    case 403u: goto L_088BD67C;
    case 404u: goto L_088BD68C;
    case 405u: goto L_088BD694;
    case 406u: goto L_088BD698;
    case 407u: goto L_088BD6A0;
    case 408u: goto L_088BD6AC;
    case 409u: goto L_088BD6B8;
    case 410u: goto L_088BD6C0;
    case 411u: goto L_088BD6CC;
    case 412u: goto L_088BD6DC;
    case 413u: goto L_088BD6E8;
    case 414u: goto L_088BD700;
    case 415u: goto L_088BD708;
    case 416u: goto L_088BD714;
    case 417u: goto L_088BD71C;
    case 418u: goto L_088BD724;
    case 419u: goto L_088BD72C;
    case 420u: goto L_088BD734;
    case 421u: goto L_088BD73C;
    case 422u: goto L_088BD748;
    case 423u: goto L_088BD760;
    case 424u: goto L_088BD768;
    case 425u: goto L_088BD77C;
    case 426u: goto L_088BD784;
    case 427u: goto L_088BD7A0;
    case 428u: goto L_088BD7A8;
    case 429u: goto L_088BD7BC;
    case 430u: goto L_088BD7C4;
    case 431u: goto L_088BD7DC;
    case 432u: goto L_088BD7E0;
    case 433u: goto L_088BD7E8;
    case 434u: goto L_088BD800;
    case 435u: goto L_088BD808;
    case 436u: goto L_088BD810;
    case 437u: goto L_088BD828;
    case 438u: goto L_088BD830;
    case 439u: goto L_088BD83C;
    case 440u: goto L_088BD844;
    case 441u: goto L_088BD858;
    case 442u: goto L_088BD868;
    case 443u: goto L_088BD870;
    case 444u: goto L_088BD874;
    case 445u: goto L_088BD87C;
    case 446u: goto L_088BD888;
    case 447u: goto L_088BD894;
    case 448u: goto L_088BD8A4;
    case 449u: goto L_088BD8BC;
    case 450u: goto L_088BD8C4;
    case 451u: goto L_088BD8DC;
    case 452u: goto L_088BD8E4;
    case 453u: goto L_088BD8F0;
    case 454u: goto L_088BD91C;
    case 455u: goto L_088BD940;
    case 456u: goto L_088BD948;
    case 457u: goto L_088BD95C;
    case 458u: goto L_088BD964;
    case 459u: goto L_088BD990;
    case 460u: goto L_088BD998;
    case 461u: goto L_088BD9A0;
    case 462u: goto L_088BD9B0;
    case 463u: goto L_088BD9C4;
    case 464u: goto L_088BD9D4;
    case 465u: goto L_088BD9E0;
    case 466u: goto L_088BD9E8;
    case 467u: goto L_088BD9F0;
    case 468u: goto L_088BD9FC;
    case 469u: goto L_088BDA0C;
    case 470u: goto L_088BDA18;
    case 471u: goto L_088BDA2C;
    case 472u: goto L_088BDA34;
    case 473u: goto L_088BDA3C;
    case 474u: goto L_088BDA4C;
    case 475u: goto L_088BDA5C;
    case 476u: goto L_088BDA84;
    case 477u: goto L_088BDA88;
    case 478u: goto L_088BDA9C;
    case 479u: goto L_088BDAA4;
    case 480u: goto L_088BDAAC;
    case 481u: goto L_088BDAB8;
    case 482u: goto L_088BDAC0;
    case 483u: goto L_088BDACC;
    case 484u: goto L_088BDADC;
    case 485u: goto L_088BDAE8;
    case 486u: goto L_088BDAF4;
    case 487u: goto L_088BDB00;
    case 488u: goto L_088BDB04;
    case 489u: goto L_088BDB0C;
    case 490u: goto L_088BDB24;
    case 491u: goto L_088BDB3C;
    case 492u: goto L_088BDB48;
    case 493u: goto L_088BDB50;
    case 494u: goto L_088BDB64;
    case 495u: goto L_088BDB70;
    case 496u: goto L_088BDB78;
    case 497u: goto L_088BDB80;
    case 498u: goto L_088BDB88;
    case 499u: goto L_088BDB98;
    case 500u: goto L_088BDBA0;
    case 501u: goto L_088BDBA8;
    case 502u: goto L_088BDBAC;
    case 503u: goto L_088BDBD8;
    case 504u: goto L_088BDBE4;
    case 505u: goto L_088BDBEC;
    case 506u: goto L_088BDBF4;
    case 507u: goto L_088BDC00;
    case 508u: goto L_088BDC08;
    case 509u: goto L_088BDC0C;
    case 510u: goto L_088BDC14;
    case 511u: goto L_088BDC34;
    case 512u: goto L_088BDC40;
    case 513u: goto L_088BDC48;
    case 514u: goto L_088BDC54;
    case 515u: goto L_088BDC60;
    case 516u: goto L_088BDC6C;
    case 517u: goto L_088BDC7C;
    case 518u: goto L_088BDC84;
    case 519u: goto L_088BDC88;
    case 520u: goto L_088BDC90;
    case 521u: goto L_088BDC94;
    case 522u: goto L_088BDC9C;
    case 523u: goto L_088BDCA4;
    case 524u: goto L_088BDCB0;
    case 525u: goto L_088BDCBC;
    case 526u: goto L_088BDCD0;
    case 527u: goto L_088BDCE0;
    case 528u: goto L_088BDCE8;
    case 529u: goto L_088BDCF8;
    case 530u: goto L_088BDD10;
    case 531u: goto L_088BDD50;
    case 532u: goto L_088BDD5C;
    case 533u: goto L_088BDD80;
    case 534u: goto L_088BDD98;
    case 535u: goto L_088BDDA4;
    case 536u: goto L_088BDDB8;
    case 537u: goto L_088BDDC0;
    case 538u: goto L_088BDDC8;
    case 539u: goto L_088BDDD0;
    case 540u: goto L_088BDDD8;
    case 541u: goto L_088BDDDC;
    case 542u: goto L_088BDDE4;
    case 543u: goto L_088BDDEC;
    case 544u: goto L_088BDDFC;
    case 545u: goto L_088BDE04;
    case 546u: goto L_088BDE0C;
    case 547u: goto L_088BDE1C;
    case 548u: goto L_088BDE24;
    case 549u: goto L_088BDE2C;
    case 550u: goto L_088BDE34;
    case 551u: goto L_088BDE38;
    case 552u: goto L_088BDE40;
    case 553u: goto L_088BDE48;
    case 554u: goto L_088BDE50;
    case 555u: goto L_088BDE58;
    case 556u: goto L_088BDE60;
    case 557u: goto L_088BDE68;
    case 558u: goto L_088BDE70;
    case 559u: goto L_088BDE78;
    case 560u: goto L_088BDE84;
    case 561u: goto L_088BDE8C;
    case 562u: goto L_088BDE94;
    case 563u: goto L_088BDE9C;
    case 564u: goto L_088BDEB0;
    case 565u: goto L_088BDEB8;
    case 566u: goto L_088BDEC8;
    case 567u: goto L_088BDEDC;
    case 568u: goto L_088BDEEC;
    case 569u: goto L_088BDEF4;
    case 570u: goto L_088BDEF8;
    case 571u: goto L_088BDF00;
    case 572u: goto L_088BDF0C;
    case 573u: goto L_088BDF20;
    case 574u: goto L_088BDF30;
    case 575u: goto L_088BDF38;
    case 576u: goto L_088BDF3C;
    case 577u: goto L_088BDF44;
    case 578u: goto L_088BDF4C;
    case 579u: goto L_088BDF5C;
    case 580u: goto L_088BDF68;
    case 581u: goto L_088BDF90;
    case 582u: goto L_088BDFA4;
    case 583u: goto L_088BDFB4;
    case 584u: goto L_088BDFD0;
    case 585u: goto L_088BDFDC;
    case 586u: goto L_088BDFE4;
    case 587u: goto L_088BDFF0;
    case 588u: goto L_088BDFFC;
    case 589u: goto L_088BE000;
    case 590u: goto L_088BE00C;
    case 591u: goto L_088BE014;
    case 592u: goto L_088BE01C;
    case 593u: goto L_088BE038;
    case 594u: goto L_088BE044;
    case 595u: goto L_088BE050;
    case 596u: goto L_088BE064;
    case 597u: goto L_088BE070;
    case 598u: goto L_088BE080;
    case 599u: goto L_088BE084;
    case 600u: goto L_088BE08C;
    case 601u: goto L_088BE098;
    case 602u: goto L_088BE0A0;
    case 603u: goto L_088BE0AC;
    case 604u: goto L_088BE0B8;
    case 605u: goto L_088BE0C0;
    case 606u: goto L_088BE0D4;
    case 607u: goto L_088BE0DC;
    case 608u: goto L_088BE0E8;
    case 609u: goto L_088BE0F8;
    case 610u: goto L_088BE104;
    case 611u: goto L_088BE110;
    case 612u: goto L_088BE118;
    case 613u: goto L_088BE128;
    case 614u: goto L_088BE134;
    case 615u: goto L_088BE13C;
    case 616u: goto L_088BE14C;
    case 617u: goto L_088BE15C;
    case 618u: goto L_088BE164;
    case 619u: goto L_088BE180;
    case 620u: goto L_088BE198;
    case 621u: goto L_088BE1A4;
    case 622u: goto L_088BE1B0;
    case 623u: goto L_088BE1C4;
    case 624u: goto L_088BE1CC;
    case 625u: goto L_088BE1D4;
    case 626u: goto L_088BE1DC;
    case 627u: goto L_088BE1EC;
    case 628u: goto L_088BE1F8;
    case 629u: goto L_088BE200;
    case 630u: goto L_088BE204;
    case 631u: goto L_088BE20C;
    case 632u: goto L_088BE214;
    case 633u: goto L_088BE22C;
    case 634u: goto L_088BE23C;
    case 635u: goto L_088BE244;
    case 636u: goto L_088BE254;
    case 637u: goto L_088BE260;
    case 638u: goto L_088BE270;
    case 639u: goto L_088BE274;
    case 640u: goto L_088BE28C;
    case 641u: goto L_088BE2A0;
    case 642u: goto L_088BE2A8;
    case 643u: goto L_088BE2B0;
    case 644u: goto L_088BE2BC;
    case 645u: goto L_088BE2C8;
    case 646u: goto L_088BE2D8;
    case 647u: goto L_088BE2E0;
    case 648u: goto L_088BE2E8;
    case 649u: goto L_088BE2FC;
    case 650u: goto L_088BE308;
    case 651u: goto L_088BE314;
    case 652u: goto L_088BE31C;
    case 653u: goto L_088BE324;
    case 654u: goto L_088BE330;
    case 655u: goto L_088BE340;
    case 656u: goto L_088BE34C;
    case 657u: goto L_088BE354;
    case 658u: goto L_088BE35C;
    case 659u: goto L_088BE368;
    case 660u: goto L_088BE374;
    case 661u: goto L_088BE37C;
    case 662u: goto L_088BE38C;
    case 663u: goto L_088BE398;
    case 664u: goto L_088BE3A0;
    case 665u: goto L_088BE3B0;
    case 666u: goto L_088BE3C0;
    case 667u: goto L_088BE3C8;
    case 668u: goto L_088BE3E4;
    case 669u: goto L_088BE3EC;
    case 670u: goto L_088BE3F4;
    case 671u: goto L_088BE3FC;
    case 672u: goto L_088BE408;
    case 673u: goto L_088BE414;
    case 674u: goto L_088BE41C;
    case 675u: goto L_088BE424;
    case 676u: goto L_088BE42C;
    case 677u: goto L_088BE44C;
    case 678u: goto L_088BE454;
    case 679u: goto L_088BE45C;
    case 680u: goto L_088BE464;
    case 681u: goto L_088BE470;
    case 682u: goto L_088BE480;
    case 683u: goto L_088BE488;
    case 684u: goto L_088BE494;
    case 685u: goto L_088BE4DC;
    case 686u: goto L_088BE4F4;
    case 687u: goto L_088BE4FC;
    case 688u: goto L_088BE528;
    case 689u: goto L_088BE558;
    case 690u: goto L_088BE560;
    case 691u: goto L_088BE56C;
    case 692u: goto L_088BE578;
    case 693u: goto L_088BE580;
    case 694u: goto L_088BE588;
    case 695u: goto L_088BE598;
    case 696u: goto L_088BE5A8;
    case 697u: goto L_088BE5D8;
    case 698u: goto L_088BE5E0;
    case 699u: goto L_088BE5F4;
    case 700u: goto L_088BE5FC;
    case 701u: goto L_088BE604;
    case 702u: goto L_088BE614;
    case 703u: goto L_088BE620;
    case 704u: goto L_088BE630;
    case 705u: goto L_088BE64C;
    case 706u: goto L_088BE664;
    case 707u: goto L_088BE670;
    case 708u: goto L_088BE678;
    case 709u: goto L_088BE680;
    case 710u: goto L_088BE688;
    case 711u: goto L_088BE690;
    case 712u: goto L_088BE6A0;
    case 713u: goto L_088BE6B0;
    case 714u: goto L_088BE6E4;
    case 715u: goto L_088BE6F4;
    case 716u: goto L_088BE704;
    case 717u: goto L_088BE714;
    case 718u: goto L_088BE724;
    case 719u: goto L_088BE738;
    case 720u: goto L_088BE740;
    case 721u: goto L_088BE74C;
    case 722u: goto L_088BE760;
    case 723u: goto L_088BE768;
    case 724u: goto L_088BE770;
    case 725u: goto L_088BE778;
    case 726u: goto L_088BE780;
    case 727u: goto L_088BE788;
    case 728u: goto L_088BE790;
    case 729u: goto L_088BE798;
    case 730u: goto L_088BE7A0;
    case 731u: goto L_088BE7AC;
    case 732u: goto L_088BE7B4;
    case 733u: goto L_088BE7C8;
    case 734u: goto L_088BE7D8;
    case 735u: goto L_088BE7E8;
    case 736u: goto L_088BE7F4;
    case 737u: goto L_088BE800;
    case 738u: goto L_088BE810;
    case 739u: goto L_088BE820;
    case 740u: goto L_088BE838;
    case 741u: goto L_088BE848;
    case 742u: goto L_088BE858;
    case 743u: goto L_088BE868;
    case 744u: goto L_088BE87C;
    case 745u: goto L_088BE884;
    case 746u: goto L_088BE8AC;
    case 747u: goto L_088BE8B8;
    case 748u: goto L_088BE8C0;
    case 749u: goto L_088BE8C8;
    case 750u: goto L_088BE8D0;
    case 751u: goto L_088BE8E0;
    case 752u: goto L_088BE8F0;
    case 753u: goto L_088BE920;
    case 754u: goto L_088BE92C;
    case 755u: goto L_088BE934;
    case 756u: goto L_088BE944;
    case 757u: goto L_088BE964;
    case 758u: goto L_088BE970;
    case 759u: goto L_088BE980;
    case 760u: goto L_088BE990;
    case 761u: goto L_088BE9A0;
    case 762u: goto L_088BE9B4;
    case 763u: goto L_088BE9BC;
    case 764u: goto L_088BE9C4;
    case 765u: goto L_088BE9CC;
    case 766u: goto L_088BE9E0;
    case 767u: goto L_088BEA38;
    case 768u: goto L_088BEA54;
    case 769u: goto L_088BEA60;
    case 770u: goto L_088BEA68;
    case 771u: goto L_088BEA70;
    case 772u: goto L_088BEA78;
    case 773u: goto L_088BEA94;
    case 774u: goto L_088BEA9C;
    case 775u: goto L_088BEAA8;
    case 776u: goto L_088BEABC;
    case 777u: goto L_088BEAC4;
    case 778u: goto L_088BEAD8;
    case 779u: goto L_088BEAE0;
    case 780u: goto L_088BEB28;
    case 781u: goto L_088BEB30;
    case 782u: goto L_088BEB38;
    case 783u: goto L_088BEB40;
    case 784u: goto L_088BEB4C;
    case 785u: goto L_088BEB58;
    case 786u: goto L_088BEB70;
    case 787u: goto L_088BEB84;
    case 788u: goto L_088BEB8C;
    case 789u: goto L_088BEB90;
    case 790u: goto L_088BEB9C;
    case 791u: goto L_088BEBA0;
    case 792u: goto L_088BEBB4;
    case 793u: goto L_088BEBBC;
    case 794u: goto L_088BEBD0;
    case 795u: goto L_088BEBD8;
    case 796u: goto L_088BEBE0;
    case 797u: goto L_088BEBE8;
    case 798u: goto L_088BEBFC;
    case 799u: goto L_088BEC04;
    case 800u: goto L_088BEC18;
    case 801u: goto L_088BEC20;
    case 802u: goto L_088BEC28;
    case 803u: goto L_088BEC30;
    case 804u: goto L_088BEC40;
    case 805u: goto L_088BEC54;
    case 806u: goto L_088BEC5C;
    case 807u: goto L_088BEC70;
    case 808u: goto L_088BEC78;
    case 809u: goto L_088BEC88;
    case 810u: goto L_088BEC98;
    case 811u: goto L_088BECA8;
    case 812u: goto L_088BECB4;
    case 813u: goto L_088BECBC;
    case 814u: goto L_088BECCC;
    case 815u: goto L_088BECDC;
    case 816u: goto L_088BED00;
    case 817u: goto L_088BED08;
    case 818u: goto L_088BED18;
    case 819u: goto L_088BED28;
    case 820u: goto L_088BED30;
    case 821u: goto L_088BED3C;
    case 822u: goto L_088BED40;
    case 823u: goto L_088BED54;
    case 824u: goto L_088BED60;
    case 825u: goto L_088BED70;
    case 826u: goto L_088BED84;
    case 827u: goto L_088BED9C;
    case 828u: goto L_088BEDA0;
    case 829u: goto L_088BEDBC;
    case 830u: goto L_088BEDF4;
    case 831u: goto L_088BEE0C;
    case 832u: goto L_088BEE1C;
    case 833u: goto L_088BEE24;
    case 834u: goto L_088BEE30;
    case 835u: goto L_088BEE3C;
    case 836u: goto L_088BEE48;
    case 837u: goto L_088BEE50;
    case 838u: goto L_088BEE78;
    case 839u: goto L_088BEE80;
    case 840u: goto L_088BEE90;
    case 841u: goto L_088BEE98;
    case 842u: goto L_088BEEB8;
    case 843u: goto L_088BEEC4;
    case 844u: goto L_088BEECC;
    case 845u: goto L_088BEED4;
    case 846u: goto L_088BEF48;
    case 847u: goto L_088BEF50;
    case 848u: goto L_088BEF58;
    case 849u: goto L_088BEF68;
    case 850u: goto L_088BEF84;
    case 851u: goto L_088BEF9C;
    case 852u: goto L_088BEFC8;
    case 853u: goto L_088BEFD8;
    case 854u: goto L_088BEFE0;
    case 855u: goto L_088BEFF0;
    case 856u: goto L_088BEFFC;
    case 857u: goto L_088BF004;
    case 858u: goto L_088BF00C;
    case 859u: goto L_088BF024;
    case 860u: goto L_088BF040;
    case 861u: goto L_088BF048;
    case 862u: goto L_088BF064;
    case 863u: goto L_088BF074;
    case 864u: goto L_088BF07C;
    case 865u: goto L_088BF0A8;
    case 866u: goto L_088BF0CC;
    case 867u: goto L_088BF0D4;
    case 868u: goto L_088BF0EC;
    case 869u: goto L_088BF0FC;
    case 870u: goto L_088BF104;
    case 871u: goto L_088BF108;
    case 872u: goto L_088BF114;
    case 873u: goto L_088BF128;
    case 874u: goto L_088BF134;
    case 875u: goto L_088BF13C;
    case 876u: goto L_088BF144;
    case 877u: goto L_088BF158;
    case 878u: goto L_088BF164;
    case 879u: goto L_088BF16C;
    case 880u: goto L_088BF178;
    case 881u: goto L_088BF188;
    case 882u: goto L_088BF1A8;
    case 883u: goto L_088BF1B8;
    case 884u: goto L_088BF1D0;
    case 885u: goto L_088BF1DC;
    case 886u: goto L_088BF1EC;
    case 887u: goto L_088BF1F0;
    case 888u: goto L_088BF200;
    case 889u: goto L_088BF20C;
    case 890u: goto L_088BF214;
    case 891u: goto L_088BF23C;
    case 892u: goto L_088BF260;
    case 893u: goto L_088BF278;
    case 894u: goto L_088BF280;
    case 895u: goto L_088BF288;
    case 896u: goto L_088BF290;
    case 897u: goto L_088BF298;
    case 898u: goto L_088BF2A0;
    case 899u: goto L_088BF2AC;
    case 900u: goto L_088BF2B4;
    case 901u: goto L_088BF2BC;
    case 902u: goto L_088BF2D8;
    case 903u: goto L_088BF2E0;
    case 904u: goto L_088BF2F4;
    case 905u: goto L_088BF2FC;
    case 906u: goto L_088BF304;
    case 907u: goto L_088BF32C;
    case 908u: goto L_088BF350;
    case 909u: goto L_088BF3C4;
    case 910u: goto L_088BF3D0;
    case 911u: goto L_088BF3E4;
    case 912u: goto L_088BF3F4;
    case 913u: goto L_088BF3FC;
    case 914u: goto L_088BF400;
    case 915u: goto L_088BF40C;
    case 916u: goto L_088BF414;
    case 917u: goto L_088BF430;
    case 918u: goto L_088BF440;
    case 919u: goto L_088BF454;
    case 920u: goto L_088BF45C;
    case 921u: goto L_088BF464;
    case 922u: goto L_088BF474;
    case 923u: goto L_088BF484;
    case 924u: goto L_088BF494;
    case 925u: goto L_088BF4AC;
    case 926u: goto L_088BF4B4;
    case 927u: goto L_088BF4C8;
    case 928u: goto L_088BF4D0;
    case 929u: goto L_088BF4EC;
    case 930u: goto L_088BF4FC;
    case 931u: goto L_088BF514;
    case 932u: goto L_088BF52C;
    case 933u: goto L_088BF544;
    case 934u: goto L_088BF54C;
    case 935u: goto L_088BF568;
    case 936u: goto L_088BF578;
    case 937u: goto L_088BF588;
    case 938u: goto L_088BF598;
    case 939u: goto L_088BF5A8;
    case 940u: goto L_088BF5C0;
    case 941u: goto L_088BF5D4;
    case 942u: goto L_088BF5EC;
    case 943u: goto L_088BF60C;
    case 944u: goto L_088BF614;
    case 945u: goto L_088BF62C;
    case 946u: goto L_088BF654;
    case 947u: goto L_088BF66C;
    case 948u: goto L_088BF684;
    case 949u: goto L_088BF68C;
    case 950u: goto L_088BF6A0;
    case 951u: goto L_088BF6B0;
    case 952u: goto L_088BF6B8;
    case 953u: goto L_088BF6CC;
    case 954u: goto L_088BF6EC;
    case 955u: goto L_088BF6F4;
    case 956u: goto L_088BF708;
    case 957u: goto L_088BF718;
    case 958u: goto L_088BF720;
    case 959u: goto L_088BF734;
    case 960u: goto L_088BF754;
    case 961u: goto L_088BF760;
    case 962u: goto L_088BF77C;
    case 963u: goto L_088BF780;
    case 964u: goto L_088BF790;
    case 965u: goto L_088BF798;
    case 966u: goto L_088BF7A8;
    case 967u: goto L_088BF7B8;
    case 968u: goto L_088BF7C8;
    case 969u: goto L_088BF7D8;
    case 970u: goto L_088BF7E0;
    case 971u: goto L_088BF7F0;
    case 972u: goto L_088BF7F8;
    case 973u: goto L_088BF804;
    case 974u: goto L_088BF810;
    case 975u: goto L_088BF828;
    case 976u: goto L_088BF83C;
    case 977u: goto L_088BF870;
    case 978u: goto L_088BF884;
    case 979u: goto L_088BF890;
    case 980u: goto L_088BF898;
    case 981u: goto L_088BF8A4;
    case 982u: goto L_088BF8AC;
    case 983u: goto L_088BF8B8;
    case 984u: goto L_088BF8BC;
    case 985u: goto L_088BF8C4;
    case 986u: goto L_088BF8D0;
    case 987u: goto L_088BF8D8;
    case 988u: goto L_088BF8F8;
    case 989u: goto L_088BF900;
    case 990u: goto L_088BF90C;
    case 991u: goto L_088BF914;
    case 992u: goto L_088BF91C;
    case 993u: goto L_088BF92C;
    case 994u: goto L_088BF934;
    case 995u: goto L_088BF948;
    case 996u: goto L_088BF950;
    case 997u: goto L_088BF984;
    case 998u: goto L_088BF998;
    case 999u: goto L_088BF9A4;
    case 1000u: goto L_088BF9A8;
    case 1001u: goto L_088BF9B4;
    case 1002u: goto L_088BF9C4;
    case 1003u: goto L_088BF9D4;
    case 1004u: goto L_088BF9DC;
    case 1005u: goto L_088BF9F0;
    case 1006u: goto L_088BFA04;
    case 1007u: goto L_088BFA0C;
    case 1008u: goto L_088BFA24;
    case 1009u: goto L_088BFA2C;
    case 1010u: goto L_088BFA38;
    case 1011u: goto L_088BFA40;
    case 1012u: goto L_088BFA48;
    case 1013u: goto L_088BFA50;
    case 1014u: goto L_088BFA58;
    case 1015u: goto L_088BFA60;
    case 1016u: goto L_088BFA70;
    case 1017u: goto L_088BFA88;
    case 1018u: goto L_088BFA98;
    case 1019u: goto L_088BFAA8;
    case 1020u: goto L_088BFAB4;
    case 1021u: goto L_088BFAC4;
    case 1022u: goto L_088BFACC;
    case 1023u: goto L_088BFAD0;
    case 1024u: goto L_088BFAD8;
    case 1025u: goto L_088BFAE0;
    case 1026u: goto L_088BFAF8;
    case 1027u: goto L_088BFB08;
    case 1028u: goto L_088BFB10;
    case 1029u: goto L_088BFB14;
    case 1030u: goto L_088BFB28;
    case 1031u: goto L_088BFB30;
    case 1032u: goto L_088BFB3C;
    case 1033u: goto L_088BFB44;
    case 1034u: goto L_088BFB4C;
    case 1035u: goto L_088BFB70;
    case 1036u: goto L_088BFB7C;
    case 1037u: goto L_088BFB94;
    case 1038u: goto L_088BFBAC;
    case 1039u: goto L_088BFBDC;
    case 1040u: goto L_088BFC24;
    case 1041u: goto L_088BFC30;
    case 1042u: goto L_088BFC40;
    case 1043u: goto L_088BFC48;
    case 1044u: goto L_088BFC68;
    case 1045u: goto L_088BFC78;
    case 1046u: goto L_088BFC84;
    case 1047u: goto L_088BFC94;
    case 1048u: goto L_088BFC9C;
    case 1049u: goto L_088BFCA8;
    case 1050u: goto L_088BFCBC;
    case 1051u: goto L_088BFCCC;
    case 1052u: goto L_088BFCD4;
    case 1053u: goto L_088BFCE8;
    case 1054u: goto L_088BFCF0;
    case 1055u: goto L_088BFD04;
    case 1056u: goto L_088BFD0C;
    case 1057u: goto L_088BFD1C;
    case 1058u: goto L_088BFD28;
    case 1059u: goto L_088BFD2C;
    case 1060u: goto L_088BFD40;
    case 1061u: goto L_088BFD4C;
    case 1062u: goto L_088BFD68;
    case 1063u: goto L_088BFD70;
    case 1064u: goto L_088BFD84;
    case 1065u: goto L_088BFD98;
    case 1066u: goto L_088BFDA8;
    case 1067u: goto L_088BFDB0;
    case 1068u: goto L_088BFDC0;
    case 1069u: goto L_088BFDC8;
    case 1070u: goto L_088BFDD0;
    case 1071u: goto L_088BFDD8;
    case 1072u: goto L_088BFDE4;
    case 1073u: goto L_088BFDF0;
    case 1074u: goto L_088BFE04;
    case 1075u: goto L_088BFE14;
    case 1076u: goto L_088BFE24;
    case 1077u: goto L_088BFE34;
    case 1078u: goto L_088BFE48;
    case 1079u: goto L_088BFE58;
    case 1080u: goto L_088BFE64;
    case 1081u: goto L_088BFE6C;
    case 1082u: goto L_088BFE7C;
    case 1083u: goto L_088BFE84;
    case 1084u: goto L_088BFE98;
    case 1085u: goto L_088BFEA0;
    case 1086u: goto L_088BFEB4;
    case 1087u: goto L_088BFEC0;
    case 1088u: goto L_088BFED0;
    case 1089u: goto L_088BFEE0;
    case 1090u: goto L_088BFEEC;
    case 1091u: goto L_088BFEF8;
    case 1092u: goto L_088BFF08;
    case 1093u: goto L_088BFF18;
    case 1094u: goto L_088BFF30;
    case 1095u: goto L_088BFF50;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088BC004:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20624)));
    goto L_088BC008;
L_088BC008:
    ctx.gpr[31] = (0x088BC010u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 39u, 0x08838234u>(ctx, &aot_mem) && ctx.pc == 0x088BC010u) goto L_088BC010;
    return;
L_088BC010:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC068;
      }
      goto L_088BC018;
    }
L_088BC018:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2952));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BC03C;
      }
      goto L_088BC028;
    }
L_088BC028:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20624)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC044;
      }
      goto L_088BC034;
    }
L_088BC034:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC050;
      }
      goto L_088BC03C;
    }
L_088BC03C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088BC070;
      }
      goto L_088BC044;
    }
L_088BC044:
    ctx.gpr[31] = (0x088BC04Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 699u, 0x08AFAF50u>(ctx, &aot_mem) && ctx.pc == 0x088BC04Cu) goto L_088BC04C;
    return;
L_088BC04C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20624)));
    goto L_088BC050;
L_088BC050:
    ctx.gpr[31] = (0x088BC058u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 167u, 0x08838AECu>(ctx, &aot_mem) && ctx.pc == 0x088BC058u) goto L_088BC058;
    return;
L_088BC058:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (ctx.gpr[2] ^ ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_088BC070;
      }
      goto L_088BC068;
    }
L_088BC068:
    ctx.gpr[2] = (ctx.gpr[17] ^ ctx.gpr[16]);
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_088BC070;
L_088BC070:
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
L_088BC08C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC094:
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC0C4;
      }
      goto L_088BC0A0;
    }
L_088BC0A0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27580)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_088BC0C0;
      }
      goto L_088BC0B4;
    }
L_088BC0B4:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_088BC0C0;
L_088BC0C0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(904), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088BC0C4;
L_088BC0C4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC0CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-6136)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(-6136));
      if (branch_taken) {
          goto L_088BC114;
      }
      goto L_088BC0EC;
    }
L_088BC0EC:
    ctx.gpr[31] = (0x088BC0F4u);
    // nop
    ctx.pc = 0x08B0B934u;
    return;
L_088BC0F4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088BC114;
      }
      goto L_088BC100;
    }
L_088BC100:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-6136)));
    ctx.gpr[31] = (0x088BC114u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11084));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 435u, 0x088BA5D4u>(ctx, &aot_mem) && ctx.pc == 0x088BC114u) goto L_088BC114;
    return;
L_088BC114:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BC140;
      }
      goto L_088BC124;
    }
L_088BC124:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC154;
      }
      goto L_088BC130;
    }
L_088BC130:
    ctx.gpr[31] = (0x088BC138u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 436u, 0x08AC702Cu>(ctx, &aot_mem) && ctx.pc == 0x088BC138u) goto L_088BC138;
    return;
L_088BC138:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC154;
      }
      goto L_088BC140;
    }
L_088BC140:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_088BC154;
      }
      goto L_088BC14C;
    }
L_088BC14C:
    ctx.gpr[31] = (0x088BC154u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08B0BCCCu;
    return;
L_088BC154:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC168:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6136));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11136));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[31] = (0x088BC198u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(20684)));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 435u, 0x088BA5D4u>(ctx, &aot_mem) && ctx.pc == 0x088BC198u) goto L_088BC198;
    return;
L_088BC198:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6876)));
    ctx.gpr[31] = (0x088BC1A8u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08B0BBE4u;
    return;
L_088BC1A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC1BC;
      }
      goto L_088BC1B4;
    }
L_088BC1B4:
    ctx.gpr[31] = (0x088BC1BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 464u, 0x08AC72A4u>(ctx, &aot_mem) && ctx.pc == 0x088BC1BCu) goto L_088BC1BC;
    return;
L_088BC1BC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC1D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BC1E4u);
    ctx.gpr[16] = (ctx.gpr[4] & 255u);
    goto L_088BC0CC;
L_088BC1E4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6876)));
    ctx.gpr[31] = (0x088BC1F4u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B0BBACu;
    return;
L_088BC1F4:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6880), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088BC214;
      }
      goto L_088BC204;
    }
L_088BC204:
    ctx.gpr[31] = (0x088BC20Cu);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0BBA4u;
    return;
L_088BC20C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088BC224;
      }
      goto L_088BC214;
    }
L_088BC214:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[31] = (0x088BC220u);
    ctx.gpr[4] = (0u | 1u);
    ctx.pc = 0x08B0BBA4u;
    return;
L_088BC220:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_088BC224;
L_088BC224:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC234:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BC248u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11172));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 435u, 0x088BA5D4u>(ctx, &aot_mem) && ctx.pc == 0x088BC248u) goto L_088BC248;
    return;
L_088BC248:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6880), ctx.gpr[4]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (0u | 512u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088BC26Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11196));
    ctx.pc = 0x08B0BB74u;
    return;
L_088BC26C:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6876), ctx.gpr[2]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x088BC290u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11216));
    ctx.pc = 0x08B0BAD4u;
    return;
L_088BC290:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6872), ctx.gpr[2]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC2A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    ctx.gpr[22] = (ctx.gpr[7] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    ctx.gpr[7] = (0u | 65u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[20] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[18] = (2230u << 16u);
      if (branch_taken) {
          goto L_088BC31C;
      }
      goto L_088BC2E8;
    }
L_088BC2E8:
    ctx.gpr[21] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-20624)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BC304;
      }
      goto L_088BC2F8;
    }
L_088BC2F8:
    ctx.gpr[31] = (0x088BC300u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 699u, 0x08AFAF50u>(ctx, &aot_mem) && ctx.pc == 0x088BC300u) goto L_088BC300;
    return;
L_088BC300:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-20624)));
    goto L_088BC304;
L_088BC304:
    ctx.gpr[31] = (0x088BC30Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 39u, 0x08838234u>(ctx, &aot_mem) && ctx.pc == 0x088BC30Cu) goto L_088BC30C;
    return;
L_088BC30C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BC31C;
      }
      goto L_088BC314;
    }
L_088BC314:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25471))))));
    goto L_088BC31C;
L_088BC31C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC34C;
      }
      goto L_088BC328;
    }
L_088BC328:
    ctx.gpr[21] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-20624)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_088BC344;
      }
      goto L_088BC338;
    }
L_088BC338:
    ctx.gpr[31] = (0x088BC340u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 699u, 0x08AFAF50u>(ctx, &aot_mem) && ctx.pc == 0x088BC340u) goto L_088BC340;
    return;
L_088BC340:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-20624)));
    goto L_088BC344;
L_088BC344:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_088BC34C;
L_088BC34C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-6876)));
    ctx.gpr[31] = (0x088BC358u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B0BBACu;
    return;
L_088BC358:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BC36C;
      }
      goto L_088BC360;
    }
L_088BC360:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-6876)));
    ctx.gpr[31] = (0x088BC36Cu);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08B0BBE4u;
    return;
L_088BC36C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16624)));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (2188u << 16u);
    ctx.gpr[7] = (0u | 32768u);
    ctx.gpr[8] = (0u | 16384u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11236));
    ctx.gpr[31] = (0x088BC394u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4676));
    ctx.pc = 0x08B0BB64u;
    return;
L_088BC394:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-6880), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088BC3B4;
      }
      goto L_088BC3A0;
    }
L_088BC3A0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088BC3B0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11256));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 435u, 0x088BA5D4u>(ctx, &aot_mem) && ctx.pc == 0x088BC3B0u) goto L_088BC3B0;
    return;
L_088BC3B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6880)));
    goto L_088BC3B4;
L_088BC3B4:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6136));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6136), ctx.gpr[7]);
    ctx.gpr[31] = (0x088BC3D8u);
    ctx.gpr[5] = (0u | 28u);
    ctx.pc = 0x08B0BB1Cu;
    return;
L_088BC3D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC3F8;
      }
      goto L_088BC3E0;
    }
L_088BC3E0:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(11308));
    ctx.gpr[31] = (0x088BC3F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 435u, 0x088BA5D4u>(ctx, &aot_mem) && ctx.pc == 0x088BC3F0u) goto L_088BC3F0;
    return;
L_088BC3F0:
    ctx.gpr[31] = (0x088BC3F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 435u, 0x088BA5D4u>(ctx, &aot_mem) && ctx.pc == 0x088BC3F8u) goto L_088BC3F8;
    return;
L_088BC3F8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC420:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BC438u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_088BC494;
L_088BC438:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BC46C;
      }
      goto L_088BC440;
    }
L_088BC440:
    ctx.gpr[16] = (2225u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(11340));
    goto L_088BC44C;
L_088BC44C:
    ctx.gpr[31] = (0x088BC454u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 435u, 0x088BA5D4u>(ctx, &aot_mem) && ctx.pc == 0x088BC454u) goto L_088BC454;
    return;
L_088BC454:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BC44C;
      }
      goto L_088BC464;
    }
L_088BC464:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC480;
      }
      goto L_088BC46C;
    }
L_088BC46C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088BC478u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11384));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 435u, 0x088BA5D4u>(ctx, &aot_mem) && ctx.pc == 0x088BC478u) goto L_088BC478;
    return;
L_088BC478:
    ctx.gpr[31] = (0x088BC480u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088BC168;
L_088BC480:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC494:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6880)));
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] ^ 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC4A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BC4BCu);
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    goto L_088BC4C8;
L_088BC4BC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC4C8:
    ctx.gpr[5] = (2227u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20840), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC4D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BC4E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11412));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 435u, 0x088BA5D4u>(ctx, &aot_mem) && ctx.pc == 0x088BC4E8u) goto L_088BC4E8;
    return;
L_088BC4E8:
    ctx.gpr[31] = (0x088BC4F0u);
    // nop
    goto L_088BC494;
L_088BC4F0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BC50C;
      }
      goto L_088BC4F8;
    }
L_088BC4F8:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088BC504u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11452));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 435u, 0x088BA5D4u>(ctx, &aot_mem) && ctx.pc == 0x088BC504u) goto L_088BC504;
    return;
L_088BC504:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC528;
      }
      goto L_088BC50C;
    }
L_088BC50C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6876)));
    ctx.gpr[31] = (0x088BC51Cu);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08B0BBE4u;
    return;
L_088BC51C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088BC528u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11476));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 435u, 0x088BA5D4u>(ctx, &aot_mem) && ctx.pc == 0x088BC528u) goto L_088BC528;
    return;
L_088BC528:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC534:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2235u << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1920))))));
    ctx.gpr[6] = (0u | 82u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088BC5A8;
      }
      goto L_088BC550;
    }
L_088BC550:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1920));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[7] = (0u | 73u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088BC5A8;
      }
      goto L_088BC564;
    }
L_088BC564:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[6] = (0u | 70u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088BC5A8;
      }
      goto L_088BC574;
    }
L_088BC574:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088BC5A8;
      }
      goto L_088BC580;
    }
L_088BC580:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC59C;
      }
      goto L_088BC588;
    }
L_088BC588:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088BC594u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11508));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 435u, 0x088BA5D4u>(ctx, &aot_mem) && ctx.pc == 0x088BC594u) goto L_088BC594;
    return;
L_088BC594:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC5A8;
      }
      goto L_088BC59C;
    }
L_088BC59C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088BC5A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11564));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 435u, 0x088BA5D4u>(ctx, &aot_mem) && ctx.pc == 0x088BC5A8u) goto L_088BC5A8;
    return;
L_088BC5A8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC5B4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC5BC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC5C4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2824));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(846)));
    ctx.gpr[5] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BC5EC;
      }
      goto L_088BC5DC;
    }
L_088BC5DC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BC5F4;
      }
      goto L_088BC5E4;
    }
L_088BC5E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC5FC;
      }
      goto L_088BC5EC;
    }
L_088BC5EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088BC640;
      }
      goto L_088BC5F4;
    }
L_088BC5F4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BC610;
      }
      goto L_088BC5FC;
    }
L_088BC5FC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 25 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 39 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BC618;
      }
      goto L_088BC608;
    }
L_088BC608:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC620;
      }
      goto L_088BC610;
    }
L_088BC610:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088BC640;
      }
      goto L_088BC618;
    }
L_088BC618:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BC634;
      }
      goto L_088BC620;
    }
L_088BC620:
    ctx.gpr[5] = (0u | 63u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BC63C;
      }
      goto L_088BC62C;
    }
L_088BC62C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088BC640;
      }
      goto L_088BC634;
    }
L_088BC634:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088BC640;
      }
      goto L_088BC63C;
    }
L_088BC63C:
    ctx.gpr[2] = (0u | 0u);
    goto L_088BC640;
L_088BC640:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC648:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BC65Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11620));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 435u, 0x088BA5D4u>(ctx, &aot_mem) && ctx.pc == 0x088BC65Cu) goto L_088BC65C;
    return;
L_088BC65C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6880)));
    ctx.gpr[31] = (0x088BC66Cu);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B0BAF4u;
    return;
L_088BC66C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088BC678u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11656));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 435u, 0x088BA5D4u>(ctx, &aot_mem) && ctx.pc == 0x088BC678u) goto L_088BC678;
    return;
L_088BC678:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC684:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BC9CC;
      }
      goto L_088BC6B0;
    }
L_088BC6B0:
    ctx.gpr[31] = (0x088BC6B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x088BC6B8u) goto L_088BC6B8;
    return;
L_088BC6B8:
    ctx.gpr[31] = (0x088BC6C0u);
    // nop
    goto L_088BC234;
L_088BC6C0:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x088BC6D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11688));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 432u, 0x08AC6FE4u>(ctx, &aot_mem) && ctx.pc == 0x088BC6D0u) goto L_088BC6D0;
    return;
L_088BC6D0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC6FC;
      }
      goto L_088BC6DC;
    }
L_088BC6DC:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 20480u);
    ctx.gpr[31] = (0x088BC6F0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21512));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 452u, 0x08AC716Cu>(ctx, &aot_mem) && ctx.pc == 0x088BC6F0u) goto L_088BC6F0;
    return;
L_088BC6F0:
    ctx.gpr[31] = (0x088BC6F8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 436u, 0x08AC702Cu>(ctx, &aot_mem) && ctx.pc == 0x088BC6F8u) goto L_088BC6F8;
    return;
L_088BC6F8:
    ctx.gpr[17] = (0u | 1u);
    goto L_088BC6FC;
L_088BC6FC:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 66 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(828), static_cast<std::uint8_t>(0u));
        goto L_088BC944;
    }
    goto L_088BC70C;
L_088BC70C:
    ctx.gpr[31] = (0x088BC714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x088BC714u) goto L_088BC714;
    return;
L_088BC714:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20852)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20848)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088BC72Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x088BC72Cu) goto L_088BC72C;
    return;
L_088BC72C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] << 10u);
      if (branch_taken) {
          goto L_088BC7F8;
      }
      goto L_088BC748;
    }
L_088BC748:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (17235u << 16u);
      if (branch_taken) {
          goto L_088BC7F8;
      }
      goto L_088BC754;
    }
L_088BC754:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18756));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (20527u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14896));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (18271u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20563));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (12101u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19777));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (17490u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21333));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (47u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21065));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[19] << 5u);
    ctx.gpr[4] = (ctx.gpr[19] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24808));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x088BC7BCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 393u, 0x08AED5D8u>(ctx, &aot_mem) && ctx.pc == 0x088BC7BCu) goto L_088BC7BC;
    return;
L_088BC7BC:
    ctx.gpr[31] = (0x088BC7C4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 432u, 0x08AC6FE4u>(ctx, &aot_mem) && ctx.pc == 0x088BC7C4u) goto L_088BC7C4;
    return;
L_088BC7C4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC7F8;
      }
      goto L_088BC7D0;
    }
L_088BC7D0:
    ctx.gpr[4] = (ctx.gpr[19] << 11u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21512));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088BC7F0u);
    ctx.gpr[6] = (0u | 2048u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 452u, 0x08AC716Cu>(ctx, &aot_mem) && ctx.pc == 0x088BC7F0u) goto L_088BC7F0;
    return;
L_088BC7F0:
    ctx.gpr[31] = (0x088BC7F8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 436u, 0x08AC702Cu>(ctx, &aot_mem) && ctx.pc == 0x088BC7F8u) goto L_088BC7F8;
    return;
L_088BC7F8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2269u << 16u);
      if (branch_taken) {
          goto L_088BC834;
      }
      goto L_088BC804;
    }
L_088BC804:
    ctx.gpr[4] = (ctx.gpr[19] << 11u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21512));
    ctx.gpr[4] = (0u + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088BC84C;
      }
      goto L_088BC834;
    }
L_088BC834:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (0u | 100u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    goto L_088BC84C;
L_088BC84C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 5u);
      if (branch_taken) {
          goto L_088BC8A8;
      }
      goto L_088BC858;
    }
L_088BC858:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[19]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.hi);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21924)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.hi);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088BC918;
      }
      goto L_088BC8A8;
    }
L_088BC8A8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 25 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 5u);
      if (branch_taken) {
          goto L_088BC904;
      }
      goto L_088BC8B4;
    }
L_088BC8B4:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[19]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.hi);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21924)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.hi);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088BC918;
      }
      goto L_088BC904;
    }
L_088BC904:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    goto L_088BC918;
L_088BC918:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 66 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BC70C;
      }
      goto L_088BC940;
    }
L_088BC940:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(828), static_cast<std::uint8_t>(0u));
    goto L_088BC944;
L_088BC944:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(832), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(836), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(837), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(840), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 67u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(844), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20688), 0u);
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(22112), 0u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(846), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(847), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(848), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(849), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(850), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u | 67u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(851), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(852), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(853), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(854), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(855), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(856), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(857), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(858), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(859), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(860), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(0u));
    goto L_088BC9CC;
L_088BC9CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088BC9D4;
      }
      goto L_088BC9D4;
    }
L_088BC9D4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC9F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20624)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BCA28;
      }
      goto L_088BCA1C;
    }
L_088BCA1C:
    ctx.gpr[31] = (0x088BCA24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 699u, 0x08AFAF50u>(ctx, &aot_mem) && ctx.pc == 0x088BCA24u) goto L_088BCA24;
    return;
L_088BCA24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20624)));
    goto L_088BCA28;
L_088BCA28:
    ctx.gpr[31] = (0x088BCA30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 15u, 0x08838104u>(ctx, &aot_mem) && ctx.pc == 0x088BCA30u) goto L_088BCA30;
    return;
L_088BCA30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20624)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BCA48;
      }
      goto L_088BCA3C;
    }
L_088BCA3C:
    ctx.gpr[31] = (0x088BCA44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 699u, 0x08AFAF50u>(ctx, &aot_mem) && ctx.pc == 0x088BCA44u) goto L_088BCA44;
    return;
L_088BCA44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20624)));
    goto L_088BCA48;
L_088BCA48:
    ctx.gpr[31] = (0x088BCA50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 168u, 0x08838AF4u>(ctx, &aot_mem) && ctx.pc == 0x088BCA50u) goto L_088BCA50;
    return;
L_088BCA50:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BCA80;
      }
      goto L_088BCA58;
    }
L_088BCA58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20624)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BCA70;
      }
      goto L_088BCA64;
    }
L_088BCA64:
    ctx.gpr[31] = (0x088BCA6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 699u, 0x08AFAF50u>(ctx, &aot_mem) && ctx.pc == 0x088BCA6Cu) goto L_088BCA6C;
    return;
L_088BCA6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20624)));
    goto L_088BCA70;
L_088BCA70:
    ctx.gpr[31] = (0x088BCA78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 39u, 0x08838234u>(ctx, &aot_mem) && ctx.pc == 0x088BCA78u) goto L_088BCA78;
    return;
L_088BCA78:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BCA98;
      }
      goto L_088BCA80;
    }
L_088BCA80:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(845)));
    ctx.gpr[5] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BCA98;
      }
      goto L_088BCA90;
    }
L_088BCA90:
    ctx.gpr[31] = (0x088BCA98u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 582u, 0x088BAE34u>(ctx, &aot_mem) && ctx.pc == 0x088BCA98u) goto L_088BCA98;
    return;
L_088BCA98:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(828)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BCAC8;
      }
      goto L_088BCAA4;
    }
L_088BCAA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(832)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(828), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_088BCAC4;
      }
      goto L_088BCAB8;
    }
L_088BCAB8:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_088BCAC4;
L_088BCAC4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(904), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088BCAC8;
L_088BCAC8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BCCB0;
      }
      goto L_088BCAD4;
    }
L_088BCAD4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BCCB0;
      }
      goto L_088BCAE0;
    }
L_088BCAE0:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(858)));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
      if (branch_taken) {
          goto L_088BCAFC;
      }
      goto L_088BCAF4;
    }
L_088BCAF4:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(847)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(859), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_088BCAFC;
L_088BCAFC:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(859)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BCC1C;
      }
      goto L_088BCB08;
    }
L_088BCB08:
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(858), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(857)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BCB38;
      }
      goto L_088BCB1C;
    }
L_088BCB1C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(21945)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BCB38;
      }
      goto L_088BCB28;
    }
L_088BCB28:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(21946)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BCB38;
      }
      goto L_088BCB34;
    }
L_088BCB34:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(857), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_088BCB38;
L_088BCB38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21948)));
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BCB70;
      }
      goto L_088BCB48;
    }
L_088BCB48:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20688), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(22112), 0u);
    ctx.gpr[31] = (0x088BCB60u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    goto L_088BC494;
L_088BCB60:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (0u | 67u);
      if (branch_taken) {
          goto L_088BCB78;
      }
      goto L_088BCB68;
    }
L_088BCB68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_088BCBD8;
      }
      goto L_088BCB70;
    }
L_088BCB70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BCCB0;
      }
      goto L_088BCB78;
    }
L_088BCB78:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BCBC8;
      }
      goto L_088BCB84;
    }
L_088BCB84:
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(20856)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BCBC8;
      }
      goto L_088BCB94;
    }
L_088BCB94:
    ctx.gpr[31] = (0x088BCB9Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088BC08C;
L_088BCB9C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6136));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(20856), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_088BCBC8;
L_088BCBC8:
    ctx.gpr[31] = (0x088BCBD0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_088BC420;
L_088BCBD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BCCB0;
      }
      goto L_088BCBD8;
    }
L_088BCBD8:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(20856), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(859)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(858), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(848), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(851), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(850), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(852), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(853), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 67u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(846), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(860)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BCC14;
      }
      goto L_088BCC0C;
    }
L_088BCC0C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BCCB0;
      }
      goto L_088BCC14;
    }
L_088BCC14:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(860), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BCCB0;
      }
      goto L_088BCC1C;
    }
L_088BCC1C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(21945)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BCC3C;
      }
      goto L_088BCC28;
    }
L_088BCC28:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(21946)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BCC3C;
      }
      goto L_088BCC34;
    }
L_088BCC34:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BCC5C;
      }
      goto L_088BCC3C;
    }
L_088BCC3C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BCC68;
      }
      goto L_088BCC44;
    }
L_088BCC44:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_088BCC94;
      }
      goto L_088BCC4C;
    }
L_088BCC4C:
    ctx.gpr[31] = (0x088BCC54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088BD91C;
L_088BCC54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BCCB0;
      }
      goto L_088BCC5C;
    }
L_088BCC5C:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(848), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BCCB0;
      }
      goto L_088BCC68;
    }
L_088BCC68:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BCCA8;
      }
      goto L_088BCC70;
    }
L_088BCC70:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BCC94;
      }
      goto L_088BCC78;
    }
L_088BCC78:
    ctx.gpr[4] = (0u | 127u);
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x088BCC8Cu);
    ctx.gpr[7] = (0u | 1u);
    goto L_088BC4A8;
L_088BCC8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BCCB0;
      }
      goto L_088BCC94;
    }
L_088BCC94:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088BCCA0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11732));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 435u, 0x088BA5D4u>(ctx, &aot_mem) && ctx.pc == 0x088BCCA0u) goto L_088BCCA0;
    return;
L_088BCCA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BCCB0;
      }
      goto L_088BCCA8;
    }
L_088BCCA8:
    ctx.gpr[31] = (0x088BCCB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088BDD10;
L_088BCCB0:
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
L_088BCCC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(836), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(837), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(840), ctx.gpr[5]);
    ctx.gpr[6] = (0u | 67u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(20688), 0u);
    ctx.gpr[7] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(22112), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(846), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(849), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(850), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u | 67u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(851), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(852), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(853), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(854), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(855), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(856), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(857), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(858), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(860), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(908)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(908), ctx.gpr[5]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(20692));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[19]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088BCDB4;
      }
      goto L_088BCDB0;
    }
L_088BCDB0:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(908), 0u);
    goto L_088BCDB4;
L_088BCDB4:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (2233u << 16u);
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (2225u << 16u);
    ctx.gpr[4] = (20224u << 16u);
    ctx.gpr[20] = (2225u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[23] = (0u | 5u);
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(10640));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(11760));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(11816));
    ctx.gpr[30] = (32768u << 16u);
    goto L_088BCDF4;
L_088BCDF4:
    ctx.gpr[31] = (0x088BCDFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x088BCDFCu) goto L_088BCDFC;
    return;
L_088BCDFC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20852)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20848)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088BCE14u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x088BCE14u) goto L_088BCE14;
    return;
L_088BCE14:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088BCE30u);
    ctx.gpr[16] = (ctx.gpr[16] << 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x088BCE30u) goto L_088BCE30;
    return;
L_088BCE30:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[24];
        goto L_088BCE50;
    }
    goto L_088BCE50;
L_088BCE50:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[26];
        goto L_088BCE70;
    }
    goto L_088BCE64;
L_088BCE64:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088BCE7C;
      }
      goto L_088BCE70;
    }
L_088BCE70:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[30]);
    goto L_088BCE7C;
L_088BCE7C:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[18]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[23]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[8] = (ctx.hi);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[22]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(21924)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[16] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BCEDC;
      }
      goto L_088BCEBC;
    }
L_088BCEBC:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088BCED0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x088BCED0u) goto L_088BCED0;
    return;
L_088BCED0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const std::uint32_t dividend = ctx.gpr[16]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[16] = (ctx.hi);
    goto L_088BCEDC;
L_088BCEDC:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088BCEE8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 435u, 0x088BA5D4u>(ctx, &aot_mem) && ctx.pc == 0x088BCEE8u) goto L_088BCEE8;
    return;
L_088BCEE8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_088BCDF4;
      }
      goto L_088BCF00;
    }
L_088BCF00:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[29] | 0u);
    goto L_088BCF0C;
L_088BCF0C:
    ctx.gpr[31] = (0x088BCF14u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 249u, 0x088452F8u>(ctx, &aot_mem) && ctx.pc == 0x088BCF14u) goto L_088BCF14;
    return;
L_088BCF14:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_088BCF34;
      }
      goto L_088BCF1C;
    }
L_088BCF1C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088BCF34;
      }
      goto L_088BCF30;
    }
L_088BCF30:
    ctx.gpr[16] = (0u | 1u);
    goto L_088BCF34;
L_088BCF34:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088BCF0C;
      }
      goto L_088BCF44;
    }
L_088BCF44:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BCF70;
      }
      goto L_088BCF4C;
    }
L_088BCF4C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    goto L_088BCF54;
L_088BCF54:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(864), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088BCF54;
      }
      goto L_088BCF70;
    }
L_088BCF70:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
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
L_088BCFB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[31]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6920)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6888)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_088BD040;
      }
      goto L_088BCFF8;
    }
L_088BCFF8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(117)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BD040;
      }
      goto L_088BD008;
    }
L_088BD008:
    ctx.gpr[31] = (0x088BD010u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 639u, 0x088BB0F0u>(ctx, &aot_mem) && ctx.pc == 0x088BD010u) goto L_088BD010;
    return;
L_088BD010:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD030;
      }
      goto L_088BD018;
    }
L_088BD018:
    ctx.gpr[31] = (0x088BD020u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x088BD020u) goto L_088BD020;
    return;
L_088BD020:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BD050;
      }
      goto L_088BD028;
    }
L_088BD028:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD0C8;
      }
      goto L_088BD030;
    }
L_088BD030:
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(20865), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BD8F0;
      }
      goto L_088BD040;
    }
L_088BD040:
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(20865), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BD8F0;
      }
      goto L_088BD050;
    }
L_088BD050:
    ctx.gpr[31] = (0x088BD058u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x088BD058u) goto L_088BD058;
    return;
L_088BD058:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BD030;
      }
      goto L_088BD068;
    }
L_088BD068:
    ctx.gpr[31] = (0x088BD070u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x088BD070u) goto L_088BD070;
    return;
L_088BD070:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 199u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BD030;
      }
      goto L_088BD080;
    }
L_088BD080:
    ctx.gpr[31] = (0x088BD088u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x088BD088u) goto L_088BD088;
    return;
L_088BD088:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 196u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BD030;
      }
      goto L_088BD098;
    }
L_088BD098:
    ctx.gpr[31] = (0x088BD0A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x088BD0A0u) goto L_088BD0A0;
    return;
L_088BD0A0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 157u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BD030;
      }
      goto L_088BD0B0;
    }
L_088BD0B0:
    ctx.gpr[31] = (0x088BD0B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x088BD0B8u) goto L_088BD0B8;
    return;
L_088BD0B8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 158u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BD030;
      }
      goto L_088BD0C8;
    }
L_088BD0C8:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x088BD0D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 337u, 0x08A5E008u>(ctx, &aot_mem) && ctx.pc == 0x088BD0D4u) goto L_088BD0D4;
    return;
L_088BD0D4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD0F8;
      }
      goto L_088BD0E0;
    }
L_088BD0E0:
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(672)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 23 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BD108;
      }
      goto L_088BD0F0;
    }
L_088BD0F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD114;
      }
      goto L_088BD0F8;
    }
L_088BD0F8:
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(20865), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BD8F0;
      }
      goto L_088BD108;
    }
L_088BD108:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD114;
      }
      goto L_088BD110;
    }
L_088BD110:
    ctx.gpr[18] = (0u | 10u);
    goto L_088BD114;
L_088BD114:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 65u);
      if (branch_taken) {
          goto L_088BD128;
      }
      goto L_088BD120;
    }
L_088BD120:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BD140;
      }
      goto L_088BD128;
    }
L_088BD128:
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20688)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(845)));
      if (branch_taken) {
          goto L_088BD150;
      }
      goto L_088BD138;
    }
L_088BD138:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD18C;
      }
      goto L_088BD140;
    }
L_088BD140:
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(20865), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BD8F0;
      }
      goto L_088BD150;
    }
L_088BD150:
    ctx.gpr[6] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088BD18C;
      }
      goto L_088BD15C;
    }
L_088BD15C:
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BD190;
      }
      goto L_088BD170;
    }
L_088BD170:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-11));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD170;
      }
      goto L_088BD184;
    }
L_088BD184:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD190;
      }
      goto L_088BD18C;
    }
L_088BD18C:
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088BD190;
L_088BD190:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 23 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (0u | 65u);
      if (branch_taken) {
          goto L_088BD1CC;
      }
      goto L_088BD19C;
    }
L_088BD19C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    ctx.gpr[19] = (2227u << 16u);
      if (branch_taken) {
          goto L_088BD1EC;
      }
      goto L_088BD1A4;
    }
L_088BD1A4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 10 ? 1u : 0u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (2227u << 16u);
      if (branch_taken) {
          goto L_088BD568;
      }
      goto L_088BD1B4;
    }
L_088BD1B4:
    ctx.gpr[18] = (ctx.gpr[18] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[18]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(12952)));
    jump_target = ctx.gpr[1];
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 2u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BD1CC:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088BD1EC;
      }
      goto L_088BD1D4;
    }
L_088BD1D4:
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20624)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD4C4;
      }
      goto L_088BD1E4;
    }
L_088BD1E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD4D0;
      }
      goto L_088BD1EC;
    }
L_088BD1EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD8F0;
      }
      goto L_088BD1F4;
    }
L_088BD1F4:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_088BD228;
      }
      goto L_088BD1FC;
    }
L_088BD1FC:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x088BD208u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088BD208u) goto L_088BD208;
    return;
L_088BD208:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD220;
      }
      goto L_088BD214;
    }
L_088BD214:
    ctx.gpr[31] = (0x088BD21Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x088BD21Cu) goto L_088BD21C;
    return;
L_088BD21C:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_088BD220;
L_088BD220:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24700), ctx.gpr[20]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_088BD228;
L_088BD228:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088BD234u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11836));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x088BD234u) goto L_088BD234;
    return;
L_088BD234:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088BD5AC;
      }
      goto L_088BD23C;
    }
L_088BD23C:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_088BD270;
      }
      goto L_088BD244;
    }
L_088BD244:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x088BD250u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088BD250u) goto L_088BD250;
    return;
L_088BD250:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD268;
      }
      goto L_088BD25C;
    }
L_088BD25C:
    ctx.gpr[31] = (0x088BD264u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x088BD264u) goto L_088BD264;
    return;
L_088BD264:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_088BD268;
L_088BD268:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24700), ctx.gpr[20]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_088BD270;
L_088BD270:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088BD27Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11844));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x088BD27Cu) goto L_088BD27C;
    return;
L_088BD27C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088BD5AC;
      }
      goto L_088BD284;
    }
L_088BD284:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_088BD2B8;
      }
      goto L_088BD28C;
    }
L_088BD28C:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x088BD298u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088BD298u) goto L_088BD298;
    return;
L_088BD298:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD2B0;
      }
      goto L_088BD2A4;
    }
L_088BD2A4:
    ctx.gpr[31] = (0x088BD2ACu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x088BD2ACu) goto L_088BD2AC;
    return;
L_088BD2AC:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_088BD2B0;
L_088BD2B0:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24700), ctx.gpr[20]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_088BD2B8;
L_088BD2B8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088BD2C4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11852));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x088BD2C4u) goto L_088BD2C4;
    return;
L_088BD2C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088BD5AC;
      }
      goto L_088BD2CC;
    }
L_088BD2CC:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_088BD300;
      }
      goto L_088BD2D4;
    }
L_088BD2D4:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x088BD2E0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088BD2E0u) goto L_088BD2E0;
    return;
L_088BD2E0:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD2F8;
      }
      goto L_088BD2EC;
    }
L_088BD2EC:
    ctx.gpr[31] = (0x088BD2F4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x088BD2F4u) goto L_088BD2F4;
    return;
L_088BD2F4:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_088BD2F8;
L_088BD2F8:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24700), ctx.gpr[20]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_088BD300;
L_088BD300:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088BD30Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11860));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x088BD30Cu) goto L_088BD30C;
    return;
L_088BD30C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088BD5AC;
      }
      goto L_088BD314;
    }
L_088BD314:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_088BD348;
      }
      goto L_088BD31C;
    }
L_088BD31C:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x088BD328u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088BD328u) goto L_088BD328;
    return;
L_088BD328:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD340;
      }
      goto L_088BD334;
    }
L_088BD334:
    ctx.gpr[31] = (0x088BD33Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x088BD33Cu) goto L_088BD33C;
    return;
L_088BD33C:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_088BD340;
L_088BD340:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24700), ctx.gpr[20]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_088BD348;
L_088BD348:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088BD354u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11868));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x088BD354u) goto L_088BD354;
    return;
L_088BD354:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088BD5AC;
      }
      goto L_088BD35C;
    }
L_088BD35C:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_088BD390;
      }
      goto L_088BD364;
    }
L_088BD364:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x088BD370u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088BD370u) goto L_088BD370;
    return;
L_088BD370:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD388;
      }
      goto L_088BD37C;
    }
L_088BD37C:
    ctx.gpr[31] = (0x088BD384u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x088BD384u) goto L_088BD384;
    return;
L_088BD384:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_088BD388;
L_088BD388:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24700), ctx.gpr[20]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_088BD390;
L_088BD390:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088BD39Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11876));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x088BD39Cu) goto L_088BD39C;
    return;
L_088BD39C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088BD5AC;
      }
      goto L_088BD3A4;
    }
L_088BD3A4:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_088BD3D8;
      }
      goto L_088BD3AC;
    }
L_088BD3AC:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x088BD3B8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088BD3B8u) goto L_088BD3B8;
    return;
L_088BD3B8:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD3D0;
      }
      goto L_088BD3C4;
    }
L_088BD3C4:
    ctx.gpr[31] = (0x088BD3CCu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x088BD3CCu) goto L_088BD3CC;
    return;
L_088BD3CC:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_088BD3D0;
L_088BD3D0:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24700), ctx.gpr[20]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_088BD3D8;
L_088BD3D8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088BD3E4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11884));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x088BD3E4u) goto L_088BD3E4;
    return;
L_088BD3E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088BD5AC;
      }
      goto L_088BD3EC;
    }
L_088BD3EC:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_088BD420;
      }
      goto L_088BD3F4;
    }
L_088BD3F4:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x088BD400u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088BD400u) goto L_088BD400;
    return;
L_088BD400:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD418;
      }
      goto L_088BD40C;
    }
L_088BD40C:
    ctx.gpr[31] = (0x088BD414u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x088BD414u) goto L_088BD414;
    return;
L_088BD414:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_088BD418;
L_088BD418:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24700), ctx.gpr[20]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_088BD420;
L_088BD420:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088BD42Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11892));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x088BD42Cu) goto L_088BD42C;
    return;
L_088BD42C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088BD5AC;
      }
      goto L_088BD434;
    }
L_088BD434:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_088BD468;
      }
      goto L_088BD43C;
    }
L_088BD43C:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x088BD448u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088BD448u) goto L_088BD448;
    return;
L_088BD448:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD460;
      }
      goto L_088BD454;
    }
L_088BD454:
    ctx.gpr[31] = (0x088BD45Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x088BD45Cu) goto L_088BD45C;
    return;
L_088BD45C:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_088BD460;
L_088BD460:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24700), ctx.gpr[20]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_088BD468;
L_088BD468:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088BD474u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11900));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x088BD474u) goto L_088BD474;
    return;
L_088BD474:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088BD5AC;
      }
      goto L_088BD47C;
    }
L_088BD47C:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_088BD4B0;
      }
      goto L_088BD484;
    }
L_088BD484:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x088BD490u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088BD490u) goto L_088BD490;
    return;
L_088BD490:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD4A8;
      }
      goto L_088BD49C;
    }
L_088BD49C:
    ctx.gpr[31] = (0x088BD4A4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x088BD4A4u) goto L_088BD4A4;
    return;
L_088BD4A4:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_088BD4A8;
L_088BD4A8:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24700), ctx.gpr[20]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_088BD4B0;
L_088BD4B0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088BD4BCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11908));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x088BD4BCu) goto L_088BD4BC;
    return;
L_088BD4BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088BD5AC;
      }
      goto L_088BD4C4;
    }
L_088BD4C4:
    ctx.gpr[31] = (0x088BD4CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 699u, 0x08AFAF50u>(ctx, &aot_mem) && ctx.pc == 0x088BD4CCu) goto L_088BD4CC;
    return;
L_088BD4CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20624)));
    goto L_088BD4D0;
L_088BD4D0:
    ctx.gpr[31] = (0x088BD4D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 168u, 0x08838AF4u>(ctx, &aot_mem) && ctx.pc == 0x088BD4D8u) goto L_088BD4D8;
    return;
L_088BD4D8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BD508;
      }
      goto L_088BD4E0;
    }
L_088BD4E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20624)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BD4F8;
      }
      goto L_088BD4EC;
    }
L_088BD4EC:
    ctx.gpr[31] = (0x088BD4F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 699u, 0x08AFAF50u>(ctx, &aot_mem) && ctx.pc == 0x088BD4F4u) goto L_088BD4F4;
    return;
L_088BD4F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20624)));
    goto L_088BD4F8;
L_088BD4F8:
    ctx.gpr[31] = (0x088BD500u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 39u, 0x08838234u>(ctx, &aot_mem) && ctx.pc == 0x088BD500u) goto L_088BD500;
    return;
L_088BD500:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BD540;
      }
      goto L_088BD508;
    }
L_088BD508:
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(845)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088BD520;
      }
      goto L_088BD514;
    }
L_088BD514:
    ctx.gpr[31] = (0x088BD51Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 582u, 0x088BAE34u>(ctx, &aot_mem) && ctx.pc == 0x088BD51Cu) goto L_088BD51C;
    return;
L_088BD51C:
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(845)));
    goto L_088BD520;
L_088BD520:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088BD538;
      }
      goto L_088BD528;
    }
L_088BD528:
    ctx.gpr[19] = (2227u << 16u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (2227u << 16u);
      if (branch_taken) {
          goto L_088BD568;
      }
      goto L_088BD538;
    }
L_088BD538:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD8F0;
      }
      goto L_088BD540;
    }
L_088BD540:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20624)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (2227u << 16u);
      if (branch_taken) {
          goto L_088BD558;
      }
      goto L_088BD54C;
    }
L_088BD54C:
    ctx.gpr[31] = (0x088BD554u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 699u, 0x08AFAF50u>(ctx, &aot_mem) && ctx.pc == 0x088BD554u) goto L_088BD554;
    return;
L_088BD554:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20624)));
    goto L_088BD558;
L_088BD558:
    ctx.gpr[31] = (0x088BD560u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 127u, 0x0883887Cu>(ctx, &aot_mem) && ctx.pc == 0x088BD560u) goto L_088BD560;
    return;
L_088BD560:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088BD5AC;
      }
      goto L_088BD568;
    }
L_088BD568:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_088BD59C;
      }
      goto L_088BD570;
    }
L_088BD570:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x088BD57Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088BD57Cu) goto L_088BD57C;
    return;
L_088BD57C:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD594;
      }
      goto L_088BD588;
    }
L_088BD588:
    ctx.gpr[31] = (0x088BD590u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x088BD590u) goto L_088BD590;
    return;
L_088BD590:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_088BD594;
L_088BD594:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24700), ctx.gpr[20]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_088BD59C;
L_088BD59C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088BD5A8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11916));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x088BD5A8u) goto L_088BD5A8;
    return;
L_088BD5A8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_088BD5AC;
L_088BD5AC:
    ctx.gpr[31] = (0x088BD5B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 463u, 0x08986CA0u>(ctx, &aot_mem) && ctx.pc == 0x088BD5B4u) goto L_088BD5B4;
    return;
L_088BD5B4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BD600;
      }
      goto L_088BD5BC;
    }
L_088BD5BC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(20866)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_088BD5E0;
      }
      goto L_088BD5C8;
    }
L_088BD5C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 67u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[20] = (2227u << 16u);
      if (branch_taken) {
          goto L_088BD620;
      }
      goto L_088BD5D8;
    }
L_088BD5D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD628;
      }
      goto L_088BD5E0;
    }
L_088BD5E0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(20866), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20864), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(20865), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BD8F0;
      }
      goto L_088BD600;
    }
L_088BD600:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20864), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 30u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(20866), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(20865), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BD8F0;
      }
      goto L_088BD620;
    }
L_088BD620:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(916), ctx.gpr[4]);
    goto L_088BD628;
L_088BD628:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20860)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BD638u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 880u, 0x088BBFCCu>(ctx, &aot_mem) && ctx.pc == 0x088BD638u) goto L_088BD638;
    return;
L_088BD638:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD670;
      }
      goto L_088BD640;
    }
L_088BD640:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20864)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD660;
      }
      goto L_088BD650;
    }
L_088BD650:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20864), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20864)));
      if (branch_taken) {
          goto L_088BD700;
      }
      goto L_088BD660;
    }
L_088BD660:
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(20865), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BD8F0;
      }
      goto L_088BD670;
    }
L_088BD670:
    ctx.gpr[4] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(20860), ctx.gpr[19]);
      if (branch_taken) {
          goto L_088BD6AC;
      }
      goto L_088BD67C;
    }
L_088BD67C:
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20624)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BD698;
      }
      goto L_088BD68C;
    }
L_088BD68C:
    ctx.gpr[31] = (0x088BD694u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 699u, 0x08AFAF50u>(ctx, &aot_mem) && ctx.pc == 0x088BD694u) goto L_088BD694;
    return;
L_088BD694:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20624)));
    goto L_088BD698;
L_088BD698:
    ctx.gpr[31] = (0x088BD6A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 167u, 0x08838AECu>(ctx, &aot_mem) && ctx.pc == 0x088BD6A0u) goto L_088BD6A0;
    return;
L_088BD6A0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(916)));
      if (branch_taken) {
          goto L_088BD6B8;
      }
      goto L_088BD6AC;
    }
L_088BD6AC:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(916)));
    goto L_088BD6B8;
L_088BD6B8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BD6DC;
      }
      goto L_088BD6C0;
    }
L_088BD6C0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_088BD6E8;
      }
      goto L_088BD6CC;
    }
L_088BD6CC:
    ctx.gpr[5] = (0u | 60u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20864), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20864)));
      if (branch_taken) {
          goto L_088BD700;
      }
      goto L_088BD6DC;
    }
L_088BD6DC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(916), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088BD8F0;
      }
      goto L_088BD6E8;
    }
L_088BD6E8:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20864), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(20865), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BD8F0;
      }
      goto L_088BD700;
    }
L_088BD700:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_088BD714;
      }
      goto L_088BD708;
    }
L_088BD708:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(20865)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BD7A8;
      }
      goto L_088BD714;
    }
L_088BD714:
    ctx.gpr[31] = (0x088BD71Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54EB8u>(ctx, &aot_mem) && ctx.pc == 0x088BD71Cu) goto L_088BD71C;
    return;
L_088BD71C:
    ctx.gpr[31] = (0x088BD724u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A54FD0u>(ctx, &aot_mem) && ctx.pc == 0x088BD724u) goto L_088BD724;
    return;
L_088BD724:
    ctx.gpr[31] = (0x088BD72Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55030u>(ctx, &aot_mem) && ctx.pc == 0x088BD72Cu) goto L_088BD72C;
    return;
L_088BD72C:
    ctx.gpr[31] = (0x088BD734u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x088BD734u) goto L_088BD734;
    return;
L_088BD734:
    ctx.gpr[31] = (0x088BD73Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54ECCu>(ctx, &aot_mem) && ctx.pc == 0x088BD73Cu) goto L_088BD73C;
    return;
L_088BD73C:
    ctx.gpr[4] = (17282u << 16u);
    ctx.gpr[31] = (0x088BD748u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A54FACu>(ctx, &aot_mem) && ctx.pc == 0x088BD748u) goto L_088BD748;
    return;
L_088BD748:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088BD760u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x088BD760u) goto L_088BD760;
    return;
L_088BD760:
    ctx.gpr[31] = (0x088BD768u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A550ACu>(ctx, &aot_mem) && ctx.pc == 0x088BD768u) goto L_088BD768;
    return;
L_088BD768:
    ctx.gpr[4] = (17264u << 16u);
    ctx.gpr[16] = (0u | 65u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[16];
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_088BD7BC;
      }
      goto L_088BD77C;
    }
L_088BD77C:
    ctx.gpr[31] = (0x088BD784u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x088BD784u) goto L_088BD784;
    return;
L_088BD784:
    ctx.gpr[4] = (16089u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16191u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 31982u);
    ctx.gpr[31] = (0x088BD7A0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x088BD7A0u) goto L_088BD7A0;
    return;
L_088BD7A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20688)));
      if (branch_taken) {
          goto L_088BD7E0;
      }
      goto L_088BD7A8;
    }
L_088BD7A8:
    ctx.gpr[7] = (0u | 60u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20864), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(20865), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BD8F0;
      }
      goto L_088BD7BC;
    }
L_088BD7BC:
    ctx.gpr[31] = (0x088BD7C4u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x088BD7C4u) goto L_088BD7C4;
    return;
L_088BD7C4:
    ctx.gpr[4] = (16225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16128u << 16u);
    ctx.gpr[31] = (0x088BD7DCu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x088BD7DCu) goto L_088BD7DC;
    return;
L_088BD7DC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20688)));
    goto L_088BD7E0;
L_088BD7E0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD810;
      }
      goto L_088BD7E8;
    }
L_088BD7E8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (0u | 77u);
    ctx.gpr[6] = (0u | 155u);
    ctx.gpr[7] = (0u | 210u);
    ctx.gpr[31] = (0x088BD800u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x088BD800u) goto L_088BD800;
    return;
L_088BD800:
    ctx.gpr[31] = (0x088BD808u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x088BD808u) goto L_088BD808;
    return;
L_088BD808:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD830;
      }
      goto L_088BD810;
    }
L_088BD810:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (0u | 77u);
    ctx.gpr[6] = (0u | 155u);
    ctx.gpr[7] = (0u | 210u);
    ctx.gpr[31] = (0x088BD828u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x088BD828u) goto L_088BD828;
    return;
L_088BD828:
    ctx.gpr[31] = (0x088BD830u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x088BD830u) goto L_088BD830;
    return;
L_088BD830:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088BD83Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 22u, 0x08A54234u>(ctx, &aot_mem) && ctx.pc == 0x088BD83Cu) goto L_088BD83C;
    return;
L_088BD83C:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088BD894;
      }
      goto L_088BD844;
    }
L_088BD844:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(178));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088BD858u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11924));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 14u, 0x08A541B8u>(ctx, &aot_mem) && ctx.pc == 0x088BD858u) goto L_088BD858;
    return;
L_088BD858:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20624)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BD874;
      }
      goto L_088BD868;
    }
L_088BD868:
    ctx.gpr[31] = (0x088BD870u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 699u, 0x08AFAF50u>(ctx, &aot_mem) && ctx.pc == 0x088BD870u) goto L_088BD870;
    return;
L_088BD870:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20624)));
    goto L_088BD874;
L_088BD874:
    ctx.gpr[31] = (0x088BD87Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 121u, 0x08838804u>(ctx, &aot_mem) && ctx.pc == 0x088BD87Cu) goto L_088BD87C;
    return;
L_088BD87C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 65 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BD894;
      }
      goto L_088BD888;
    }
L_088BD888:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088BD894u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 17u, 0x08A541E4u>(ctx, &aot_mem) && ctx.pc == 0x088BD894u) goto L_088BD894;
    return;
L_088BD894:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD8C4;
      }
      goto L_088BD8A4;
    }
L_088BD8A4:
    ctx.gpr[6] = (16960u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x088BD8BCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x088BD8BCu) goto L_088BD8BC;
    return;
L_088BD8BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD8DC;
      }
      goto L_088BD8C4;
    }
L_088BD8C4:
    ctx.gpr[6] = (16608u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x088BD8DCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x088BD8DCu) goto L_088BD8DC;
    return;
L_088BD8DC:
    ctx.gpr[31] = (0x088BD8E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 194u, 0x08A54DCCu>(ctx, &aot_mem) && ctx.pc == 0x088BD8E4u) goto L_088BD8E4;
    return;
L_088BD8E4:
    ctx.gpr[4] = (17392u << 16u);
    ctx.gpr[31] = (0x088BD8F0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A54FACu>(ctx, &aot_mem) && ctx.pc == 0x088BD8F0u) goto L_088BD8F0;
    return;
L_088BD8F0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BD91C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD9A0;
      }
      goto L_088BD940;
    }
L_088BD940:
    ctx.gpr[31] = (0x088BD948u);
    ctx.gpr[4] = (0u | 0u);
    goto L_088BC420;
L_088BD948:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6136));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x088BD95Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    goto L_088BC494;
L_088BD95C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_088BD990;
      }
      goto L_088BD964;
    }
L_088BD964:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20812), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 67u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 67u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(851), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[17] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(846), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(10640));
      if (branch_taken) {
          goto L_088BD9C4;
      }
      goto L_088BD990;
    }
L_088BD990:
    ctx.gpr[31] = (0x088BD998u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 806u, 0x088BBC44u>(ctx, &aot_mem) && ctx.pc == 0x088BD998u) goto L_088BD998;
    return;
L_088BD998:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BDCF8;
      }
      goto L_088BD9A0;
    }
L_088BD9A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (2233u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(10640));
      if (branch_taken) {
          goto L_088BD9C4;
      }
      goto L_088BD9B0;
    }
L_088BD9B0:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20812), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 67u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    goto L_088BD9C4;
L_088BD9C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21948)));
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BD9E8;
      }
      goto L_088BD9D4;
    }
L_088BD9D4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(850)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
      if (branch_taken) {
          goto L_088BD9F0;
      }
      goto L_088BD9E0;
    }
L_088BD9E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BDA0C;
      }
      goto L_088BD9E8;
    }
L_088BD9E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BDCF8;
      }
      goto L_088BD9F0;
    }
L_088BD9F0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(853)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BDA0C;
      }
      goto L_088BD9FC;
    }
L_088BD9FC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(845)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(849)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(851), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(852), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_088BDA0C;
L_088BDA0C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(851))))));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BDB78;
      }
      goto L_088BDA18;
    }
L_088BDA18:
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(850), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(853)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BDAAC;
      }
      goto L_088BDA2C;
    }
L_088BDA2C:
    ctx.gpr[31] = (0x088BDA34u);
    // nop
    goto L_088BC494;
L_088BDA34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BDAAC;
      }
      goto L_088BDA3C;
    }
L_088BDA3C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    ctx.gpr[5] = (0u | 67u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BDA88;
      }
      goto L_088BDA4C;
    }
L_088BDA4C:
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(20867)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_088BDA88;
      }
      goto L_088BDA5C;
    }
L_088BDA5C:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6136));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[31] = (0x088BDA84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088BC08C;
L_088BDA84:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(20867), static_cast<std::uint8_t>(ctx.gpr[18]));
    goto L_088BDA88;
L_088BDA88:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x088BDA9Cu);
    ctx.gpr[7] = (0u | 0u);
    goto L_088BC4A8;
L_088BDA9C:
    ctx.gpr[31] = (0x088BDAA4u);
    ctx.gpr[4] = (0u | 0u);
    goto L_088BC420;
L_088BDAA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BDCF8;
      }
      goto L_088BDAAC;
    }
L_088BDAAC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x088BDAB8u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20867), static_cast<std::uint8_t>(0u));
    goto L_088BC494;
L_088BDAB8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(851))))));
      if (branch_taken) {
          goto L_088BDACC;
      }
      goto L_088BDAC0;
    }
L_088BDAC0:
    ctx.gpr[17] = (0u | 67u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088BDADC;
      }
      goto L_088BDACC;
    }
L_088BDACC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(846), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(853), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(850), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BDCF8;
      }
      goto L_088BDADC;
    }
L_088BDADC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 24 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BDB00;
      }
      goto L_088BDAE8;
    }
L_088BDAE8:
    ctx.gpr[5] = (ctx.gpr[4] & 255u);
    ctx.gpr[31] = (0x088BDAF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 809u, 0x088BBC80u>(ctx, &aot_mem) && ctx.pc == 0x088BDAF4u) goto L_088BDAF4;
    return;
L_088BDAF4:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(851))))));
      if (branch_taken) {
          goto L_088BDB04;
      }
      goto L_088BDB00;
    }
L_088BDB00:
    ctx.gpr[5] = (0u | 0u);
    goto L_088BDB04;
L_088BDB04:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088BDCF8;
      }
      goto L_088BDB0C;
    }
L_088BDB0C:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088BDB24u);
    ctx.gpr[8] = (0u | 1u);
    goto L_088BC2A4;
L_088BDB24:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(851))))));
    ctx.gpr[6] = (0u | 64u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 100u);
      if (branch_taken) {
          goto L_088BDB48;
      }
      goto L_088BDB3C;
    }
L_088BDB3C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
      if (branch_taken) {
          goto L_088BDB50;
      }
      goto L_088BDB48;
    }
L_088BDB48:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    goto L_088BDB50;
L_088BDB50:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x088BDB64u);
    ctx.gpr[7] = (0u | 0u);
    goto L_088BC4A8;
L_088BDB64:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(851))))));
    ctx.gpr[31] = (0x088BDB70u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088BC094;
L_088BDB70:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(853), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_088BDCF8;
      }
      goto L_088BDB78;
    }
L_088BDB78:
    ctx.gpr[31] = (0x088BDB80u);
    // nop
    goto L_088BC494;
L_088BDB80:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BDCA4;
      }
      goto L_088BDB88;
    }
L_088BDB88:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 63 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 65 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BDBEC;
      }
      goto L_088BDB98;
    }
L_088BDB98:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BDC9C;
      }
      goto L_088BDBA0;
    }
L_088BDBA0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BDC9C;
      }
      goto L_088BDBA8;
    }
L_088BDBA8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_088BDBAC;
L_088BDBAC:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088BDBD8u);
    ctx.gpr[8] = (0u | 1u);
    goto L_088BC2A4;
L_088BDBD8:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088BDBE4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11928));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 435u, 0x088BA5D4u>(ctx, &aot_mem) && ctx.pc == 0x088BDBE4u) goto L_088BDBE4;
    return;
L_088BDBE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BDCF8;
      }
      goto L_088BDBEC;
    }
L_088BDBEC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 66 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BDC0C;
      }
      goto L_088BDBF4;
    }
L_088BDBF4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088BDBAC;
      }
      goto L_088BDC00;
    }
L_088BDC00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BDC48;
      }
      goto L_088BDC08;
    }
L_088BDC08:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 66 ? 1u : 0u);
    goto L_088BDC0C;
L_088BDC0C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BDC9C;
      }
      goto L_088BDC14;
    }
L_088BDC14:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088BDC34u);
    ctx.gpr[8] = (0u | 1u);
    goto L_088BC2A4;
L_088BDC34:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088BDC40u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11948));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 435u, 0x088BA5D4u>(ctx, &aot_mem) && ctx.pc == 0x088BDC40u) goto L_088BDC40;
    return;
L_088BDC40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BDCF8;
      }
      goto L_088BDC48;
    }
L_088BDC48:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(21945)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BDC94;
      }
      goto L_088BDC54;
    }
L_088BDC54:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BDC60u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 455u, 0x088BA77Cu>(ctx, &aot_mem) && ctx.pc == 0x088BDC60u) goto L_088BDC60;
    return;
L_088BDC60:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(913)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BDC90;
      }
      goto L_088BDC6C;
    }
L_088BDC6C:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20624)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20624)));
        goto L_088BDC88;
    }
    goto L_088BDC7C;
L_088BDC7C:
    ctx.gpr[31] = (0x088BDC84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 699u, 0x08AFAF50u>(ctx, &aot_mem) && ctx.pc == 0x088BDC84u) goto L_088BDC84;
    return;
L_088BDC84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20624)));
    goto L_088BDC88;
L_088BDC88:
    ctx.gpr[31] = (0x088BDC90u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 38u, 0x0883822Cu>(ctx, &aot_mem) && ctx.pc == 0x088BDC90u) goto L_088BDC90;
    return;
L_088BDC90:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(913), static_cast<std::uint8_t>(0u));
    goto L_088BDC94;
L_088BDC94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BDCF8;
      }
      goto L_088BDC9C;
    }
L_088BDC9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BDCF8;
      }
      goto L_088BDCA4;
    }
L_088BDCA4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088BDCBC;
      }
      goto L_088BDCB0;
    }
L_088BDCB0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BDCF8;
      }
      goto L_088BDCBC;
    }
L_088BDCBC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(7)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BDCE8;
      }
      goto L_088BDCD0;
    }
L_088BDCD0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_088BDCE0;
    }
    goto L_088BDCE0;
L_088BDCE0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    goto L_088BDCE8;
L_088BDCE8:
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x088BDCF8u);
    ctx.gpr[7] = (0u | 0u);
    goto L_088BC4A8;
L_088BDCF8:
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
L_088BDD10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.gpr[22] = (0u | 67u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(10640));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BDD50u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(920), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x088BDD50u) goto L_088BDD50;
    return;
L_088BDD50:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088BDD5Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 337u, 0x08A5E008u>(ctx, &aot_mem) && ctx.pc == 0x088BDD5Cu) goto L_088BDD5C;
    return;
L_088BDD5C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(854)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(854), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(855), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29200)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(17) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088BDDA4;
      }
      goto L_088BDD80;
    }
L_088BDD80:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(12992)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BDD98:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(854), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(854)));
      if (branch_taken) {
          goto L_088BDDDC;
      }
      goto L_088BDDA4;
    }
L_088BDDA4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BDDC0;
      }
      goto L_088BDDB8;
    }
L_088BDDB8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(854), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BDDD8;
      }
      goto L_088BDDC0;
    }
L_088BDDC0:
    ctx.gpr[31] = (0x088BDDC8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 639u, 0x088BB0F0u>(ctx, &aot_mem) && ctx.pc == 0x088BDDC8u) goto L_088BDDC8;
    return;
L_088BDDC8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BDDD8;
      }
      goto L_088BDDD0;
    }
L_088BDDD0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(854), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088BDDD8;
L_088BDDD8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(854)));
    goto L_088BDDDC;
L_088BDDDC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_088BDF68;
      }
      goto L_088BDDE4;
    }
L_088BDDE4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BDFD0;
      }
      goto L_088BDDEC;
    }
L_088BDDEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 55u);
      if (branch_taken) {
          goto L_088BDFD0;
      }
      goto L_088BDDFC;
    }
L_088BDDFC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BDFD0;
      }
      goto L_088BDE04;
    }
L_088BDE04:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BDE38;
      }
      goto L_088BDE0C;
    }
L_088BDE0C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 138u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BDE38;
      }
      goto L_088BDE1C;
    }
L_088BDE1C:
    ctx.gpr[31] = (0x088BDE24u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x088BDE24u) goto L_088BDE24;
    return;
L_088BDE24:
    ctx.gpr[31] = (0x088BDE2Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1044u, 0x08A97D90u>(ctx, &aot_mem) && ctx.pc == 0x088BDE2Cu) goto L_088BDE2C;
    return;
L_088BDE2C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BDE38;
      }
      goto L_088BDE34;
    }
L_088BDE34:
    ctx.gpr[20] = (0u | 1u);
    goto L_088BDE38;
L_088BDE38:
    ctx.gpr[31] = (0x088BDE40u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x088BDE40u) goto L_088BDE40;
    return;
L_088BDE40:
    ctx.gpr[31] = (0x088BDE48u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 31u, 0x08A98110u>(ctx, &aot_mem) && ctx.pc == 0x088BDE48u) goto L_088BDE48;
    return;
L_088BDE48:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BDE68;
      }
      goto L_088BDE50;
    }
L_088BDE50:
    ctx.gpr[31] = (0x088BDE58u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x088BDE58u) goto L_088BDE58;
    return;
L_088BDE58:
    ctx.gpr[31] = (0x088BDE60u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 38u, 0x08A9815Cu>(ctx, &aot_mem) && ctx.pc == 0x088BDE60u) goto L_088BDE60;
    return;
L_088BDE60:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BDFD0;
      }
      goto L_088BDE68;
    }
L_088BDE68:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BDFD0;
      }
      goto L_088BDE70;
    }
L_088BDE70:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BDFD0;
      }
      goto L_088BDE78;
    }
L_088BDE78:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BDE84u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 858u, 0x088BBEFCu>(ctx, &aot_mem) && ctx.pc == 0x088BDE84u) goto L_088BDE84;
    return;
L_088BDE84:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088BDFD0;
      }
      goto L_088BDE8C;
    }
L_088BDE8C:
    ctx.gpr[31] = (0x088BDE94u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 872u, 0x088BBF80u>(ctx, &aot_mem) && ctx.pc == 0x088BDE94u) goto L_088BDE94;
    return;
L_088BDE94:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BDFD0;
      }
      goto L_088BDE9C;
    }
L_088BDE9C:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(22112), ctx.gpr[4]);
    ctx.gpr[31] = (0x088BDEB0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x088BDEB0u) goto L_088BDEB0;
    return;
L_088BDEB0:
    ctx.gpr[31] = (0x088BDEB8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 31u, 0x08A98110u>(ctx, &aot_mem) && ctx.pc == 0x088BDEB8u) goto L_088BDEB8;
    return;
L_088BDEB8:
    ctx.gpr[21] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20688)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u | 65u);
      if (branch_taken) {
          goto L_088BDF0C;
      }
      goto L_088BDEC8;
    }
L_088BDEC8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20688), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BDF4C;
      }
      goto L_088BDEDC;
    }
L_088BDEDC:
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20624)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BDEF8;
      }
      goto L_088BDEEC;
    }
L_088BDEEC:
    ctx.gpr[31] = (0x088BDEF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 699u, 0x08AFAF50u>(ctx, &aot_mem) && ctx.pc == 0x088BDEF4u) goto L_088BDEF4;
    return;
L_088BDEF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20624)));
    goto L_088BDEF8;
L_088BDEF8:
    ctx.gpr[31] = (0x088BDF00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 174u, 0x08838B48u>(ctx, &aot_mem) && ctx.pc == 0x088BDF00u) goto L_088BDF00;
    return;
L_088BDF00:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BDF4C;
      }
      goto L_088BDF0C;
    }
L_088BDF0C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20688), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BDF4C;
      }
      goto L_088BDF20;
    }
L_088BDF20:
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20624)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BDF3C;
      }
      goto L_088BDF30;
    }
L_088BDF30:
    ctx.gpr[31] = (0x088BDF38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 699u, 0x08AFAF50u>(ctx, &aot_mem) && ctx.pc == 0x088BDF38u) goto L_088BDF38;
    return;
L_088BDF38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20624)));
    goto L_088BDF3C;
L_088BDF3C:
    ctx.gpr[31] = (0x088BDF44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 186u, 0x08838C1Cu>(ctx, &aot_mem) && ctx.pc == 0x088BDF44u) goto L_088BDF44;
    return;
L_088BDF44:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088BDF4C;
L_088BDF4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20688)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(11) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BDFD0;
      }
      goto L_088BDF5C;
    }
L_088BDF5C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20688), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088BDFD0;
      }
      goto L_088BDF68;
    }
L_088BDF68:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(856), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20688), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(22112), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BDFD0;
      }
      goto L_088BDF90;
    }
L_088BDF90:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(857)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BDFB4;
      }
      goto L_088BDFA4;
    }
L_088BDFA4:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6136));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    goto L_088BDFB4;
L_088BDFB4:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    goto L_088BDFD0;
L_088BDFD0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(857)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BDFE4;
      }
      goto L_088BDFDC;
    }
L_088BDFDC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(855), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(857), static_cast<std::uint8_t>(0u));
    goto L_088BDFE4;
L_088BDFE4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_088BE000;
      }
      goto L_088BDFF0;
    }
L_088BDFF0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(845)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_088BE000;
      }
      goto L_088BDFFC;
    }
L_088BDFFC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(855), static_cast<std::uint8_t>(0u));
    goto L_088BE000;
L_088BE000:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (0u | 0u);
      if (branch_taken) {
          goto L_088BE038;
      }
      goto L_088BE00C;
    }
L_088BE00C:
    ctx.gpr[31] = (0x088BE014u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 639u, 0x088BB0F0u>(ctx, &aot_mem) && ctx.pc == 0x088BE014u) goto L_088BE014;
    return;
L_088BE014:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE038;
      }
      goto L_088BE01C;
    }
L_088BE01C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(10)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(855), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    goto L_088BE038;
L_088BE038:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(854)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE408;
      }
      goto L_088BE044;
    }
L_088BE044:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(855)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE354;
      }
      goto L_088BE050;
    }
L_088BE050:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 66 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (2227u << 16u);
      if (branch_taken) {
          goto L_088BE0F8;
      }
      goto L_088BE064;
    }
L_088BE064:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088BE084;
      }
      goto L_088BE070;
    }
L_088BE070:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(845)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088BE084;
      }
      goto L_088BE080;
    }
L_088BE080:
    ctx.gpr[4] = (0u | 0u);
    goto L_088BE084;
L_088BE084:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE0F8;
      }
      goto L_088BE08C;
    }
L_088BE08C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BE098u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 706u, 0x088BB444u>(ctx, &aot_mem) && ctx.pc == 0x088BE098u) goto L_088BE098;
    return;
L_088BE098:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE0F8;
      }
      goto L_088BE0A0;
    }
L_088BE0A0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BE0C0;
      }
      goto L_088BE0AC;
    }
L_088BE0AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_088BE0DC;
      }
      goto L_088BE0B8;
    }
L_088BE0B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE0F8;
      }
      goto L_088BE0C0;
    }
L_088BE0C0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20688), 0u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(22112), 0u);
    ctx.gpr[31] = (0x088BE0D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 806u, 0x088BBC44u>(ctx, &aot_mem) && ctx.pc == 0x088BE0D4u) goto L_088BE0D4;
    return;
L_088BE0D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE4FC;
      }
      goto L_088BE0DC;
    }
L_088BE0DC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(851), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[31] = (0x088BE0E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 813u, 0x088BBCD8u>(ctx, &aot_mem) && ctx.pc == 0x088BE0E8u) goto L_088BE0E8;
    return;
L_088BE0E8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20688), 0u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(22112), 0u);
    goto L_088BE0F8;
L_088BE0F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE198;
      }
      goto L_088BE104;
    }
L_088BE104:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BE110u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 858u, 0x088BBEFCu>(ctx, &aot_mem) && ctx.pc == 0x088BE110u) goto L_088BE110;
    return;
L_088BE110:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088BE128;
      }
      goto L_088BE118;
    }
L_088BE118:
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
      if (branch_taken) {
          goto L_088BE15C;
      }
      goto L_088BE128;
    }
L_088BE128:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BE134u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 872u, 0x088BBF80u>(ctx, &aot_mem) && ctx.pc == 0x088BE134u) goto L_088BE134;
    return;
L_088BE134:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE14C;
      }
      goto L_088BE13C;
    }
L_088BE13C:
    ctx.gpr[4] = (0u | 24u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
      if (branch_taken) {
          goto L_088BE15C;
      }
      goto L_088BE14C;
    }
L_088BE14C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(837)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(672), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    goto L_088BE15C;
L_088BE15C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088BE180;
      }
      goto L_088BE164;
    }
L_088BE164:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(845)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), 0u);
    goto L_088BE180;
L_088BE180:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20688), 0u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(22112), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(836), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(845)));
      if (branch_taken) {
          goto L_088BE308;
      }
      goto L_088BE198;
    }
L_088BE198:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20688)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22112)));
      if (branch_taken) {
          goto L_088BE1C4;
      }
      goto L_088BE1A4;
    }
L_088BE1A4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(22112), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088BE1D4;
      }
      goto L_088BE1B0;
    }
L_088BE1B0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(22112), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088BE1D4;
      }
      goto L_088BE1C4;
    }
L_088BE1C4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE1D4;
      }
      goto L_088BE1CC;
    }
L_088BE1CC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(22112), ctx.gpr[4]);
    goto L_088BE1D4;
L_088BE1D4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE2B0;
      }
      goto L_088BE1DC;
    }
L_088BE1DC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    ctx.gpr[5] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[22] = (2230u << 16u);
      if (branch_taken) {
          goto L_088BE2B0;
      }
      goto L_088BE1EC;
    }
L_088BE1EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-20624)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BE204;
      }
      goto L_088BE1F8;
    }
L_088BE1F8:
    ctx.gpr[31] = (0x088BE200u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 699u, 0x08AFAF50u>(ctx, &aot_mem) && ctx.pc == 0x088BE200u) goto L_088BE200;
    return;
L_088BE200:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-20624)));
    goto L_088BE204;
L_088BE204:
    ctx.gpr[31] = (0x088BE20Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 39u, 0x08838234u>(ctx, &aot_mem) && ctx.pc == 0x088BE20Cu) goto L_088BE20C;
    return;
L_088BE20C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BE2B0;
      }
      goto L_088BE214;
    }
L_088BE214:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(672)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20688)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(11) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 10u);
      if (branch_taken) {
          goto L_088BE23C;
      }
      goto L_088BE22C;
    }
L_088BE22C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11));
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(11) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE22C;
      }
      goto L_088BE23C;
    }
L_088BE23C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BE260;
      }
      goto L_088BE244;
    }
L_088BE244:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22112)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BE2B0;
      }
      goto L_088BE254;
    }
L_088BE254:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BE2B0;
      }
      goto L_088BE260;
    }
L_088BE260:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[22] = (2227u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (2230u << 16u);
      if (branch_taken) {
          goto L_088BE274;
      }
      goto L_088BE270;
    }
L_088BE270:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    goto L_088BE274;
L_088BE274:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20868)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE2A8;
      }
      goto L_088BE28C;
    }
L_088BE28C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(19952)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088BE2A0u);
    ctx.gpr[6] = (0u | 194u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 941u, 0x08A9B848u>(ctx, &aot_mem) && ctx.pc == 0x088BE2A0u) goto L_088BE2A0;
    return;
L_088BE2A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(20868), ctx.gpr[4]);
    goto L_088BE2A8;
L_088BE2A8:
    ctx.gpr[31] = (0x088BE2B0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 378u, 0x08842964u>(ctx, &aot_mem) && ctx.pc == 0x088BE2B0u) goto L_088BE2B0;
    return;
L_088BE2B0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(845)));
      if (branch_taken) {
          goto L_088BE308;
      }
      goto L_088BE2BC;
    }
L_088BE2BC:
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088BE2C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 833u, 0x088BBDBCu>(ctx, &aot_mem) && ctx.pc == 0x088BE2C8u) goto L_088BE2C8;
    return;
L_088BE2C8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(845)));
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[4];
    ctx.gpr[5] = (0u | 10u);
      if (branch_taken) {
          goto L_088BE2FC;
      }
      goto L_088BE2D8;
    }
L_088BE2D8:
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BE2E8;
      }
      goto L_088BE2E0;
    }
L_088BE2E0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BE2FC;
      }
      goto L_088BE2E8;
    }
L_088BE2E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(19952)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088BE2FCu);
    ctx.gpr[6] = (0u | 177u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 941u, 0x08A9B848u>(ctx, &aot_mem) && ctx.pc == 0x088BE2FCu) goto L_088BE2FC;
    return;
L_088BE2FC:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(22112), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20688), 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(845)));
    goto L_088BE308;
L_088BE308:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 23 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BE324;
      }
      goto L_088BE314;
    }
L_088BE314:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE324;
      }
      goto L_088BE31C;
    }
L_088BE31C:
    ctx.gpr[31] = (0x088BE324u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 734u, 0x088BB618u>(ctx, &aot_mem) && ctx.pc == 0x088BE324u) goto L_088BE324;
    return;
L_088BE324:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(920)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BE340;
      }
      goto L_088BE330;
    }
L_088BE330:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088BE340u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_088BE528;
L_088BE340:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE480;
      }
      goto L_088BE34C;
    }
L_088BE34C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BE480;
      }
      goto L_088BE354;
    }
L_088BE354:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE3FC;
      }
      goto L_088BE35C;
    }
L_088BE35C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE3EC;
      }
      goto L_088BE368;
    }
L_088BE368:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BE374u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 858u, 0x088BBEFCu>(ctx, &aot_mem) && ctx.pc == 0x088BE374u) goto L_088BE374;
    return;
L_088BE374:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088BE38C;
      }
      goto L_088BE37C;
    }
L_088BE37C:
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
      if (branch_taken) {
          goto L_088BE3C0;
      }
      goto L_088BE38C;
    }
L_088BE38C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BE398u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 872u, 0x088BBF80u>(ctx, &aot_mem) && ctx.pc == 0x088BE398u) goto L_088BE398;
    return;
L_088BE398:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE3B0;
      }
      goto L_088BE3A0;
    }
L_088BE3A0:
    ctx.gpr[4] = (0u | 24u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
      if (branch_taken) {
          goto L_088BE3C0;
      }
      goto L_088BE3B0;
    }
L_088BE3B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(837)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(672), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    goto L_088BE3C0;
L_088BE3C0:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088BE3E4;
      }
      goto L_088BE3C8;
    }
L_088BE3C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(845)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    goto L_088BE3E4;
L_088BE3E4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(836), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BE480;
      }
      goto L_088BE3EC;
    }
L_088BE3EC:
    ctx.gpr[31] = (0x088BE3F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 813u, 0x088BBCD8u>(ctx, &aot_mem) && ctx.pc == 0x088BE3F4u) goto L_088BE3F4;
    return;
L_088BE3F4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_088BE480;
      }
      goto L_088BE3FC;
    }
L_088BE3FC:
    ctx.gpr[4] = (0u | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BE480;
      }
      goto L_088BE408;
    }
L_088BE408:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE45C;
      }
      goto L_088BE414;
    }
L_088BE414:
    ctx.gpr[31] = (0x088BE41Cu);
    ctx.gpr[4] = (0u | 0u);
    goto L_088BC420;
L_088BE41C:
    ctx.gpr[31] = (0x088BE424u);
    // nop
    goto L_088BC494;
L_088BE424:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_088BE44C;
      }
      goto L_088BE42C;
    }
L_088BE42C:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20812), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 67u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(851), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(846), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BE45C;
      }
      goto L_088BE44C;
    }
L_088BE44C:
    ctx.gpr[31] = (0x088BE454u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 806u, 0x088BBC44u>(ctx, &aot_mem) && ctx.pc == 0x088BE454u) goto L_088BE454;
    return;
L_088BE454:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE4FC;
      }
      goto L_088BE45C;
    }
L_088BE45C:
    ctx.gpr[31] = (0x088BE464u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 734u, 0x088BB618u>(ctx, &aot_mem) && ctx.pc == 0x088BE464u) goto L_088BE464;
    return;
L_088BE464:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(920)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BE480;
      }
      goto L_088BE470;
    }
L_088BE470:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088BE480u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_088BE528;
L_088BE480:
    ctx.gpr[31] = (0x088BE488u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 806u, 0x088BBC44u>(ctx, &aot_mem) && ctx.pc == 0x088BE488u) goto L_088BE488;
    return;
L_088BE488:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE4F4;
      }
      goto L_088BE494;
    }
L_088BE494:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(10)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[5] << 11u);
    ctx.gpr[5] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] >> 11u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] << 11u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088BE4F4;
      }
      goto L_088BE4DC;
    }
L_088BE4DC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (0u | 67u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088BE4F4;
L_088BE4F4:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(912), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088BE4FC;
L_088BE4FC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BE528:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(850)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BE560;
      }
      goto L_088BE558;
    }
L_088BE558:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(845)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(851), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088BE560;
L_088BE560:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22112)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BE578;
      }
      goto L_088BE56C;
    }
L_088BE56C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE604;
      }
      goto L_088BE578;
    }
L_088BE578:
    ctx.gpr[31] = (0x088BE580u);
    // nop
    goto L_088BC494;
L_088BE580:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE5FC;
      }
      goto L_088BE588;
    }
L_088BE588:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    ctx.gpr[5] = (0u | 67u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BE5E0;
      }
      goto L_088BE598;
    }
L_088BE598:
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(20872)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BE5E0;
      }
      goto L_088BE5A8;
    }
L_088BE5A8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6136));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[31] = (0x088BE5D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088BC08C;
L_088BE5D8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(20872), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088BE5E0;
L_088BE5E0:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x088BE5F4u);
    ctx.gpr[7] = (0u | 0u);
    goto L_088BC4A8;
L_088BE5F4:
    ctx.gpr[31] = (0x088BE5FCu);
    ctx.gpr[4] = (0u | 0u);
    goto L_088BC420;
L_088BE5FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BEDA0;
      }
      goto L_088BE604;
    }
L_088BE604:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20872)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE620;
      }
      goto L_088BE614;
    }
L_088BE614:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20872), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 67u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(846), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088BE620;
L_088BE620:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(851))))));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BE8C0;
      }
      goto L_088BE630;
    }
L_088BE630:
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(850), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x088BE64Cu);
    ctx.gpr[7] = (0u | 0u);
    goto L_088BC4A8;
L_088BE64C:
    ctx.gpr[19] = (2233u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(10640));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(21948)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BE678;
      }
      goto L_088BE664;
    }
L_088BE664:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(853)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE680;
      }
      goto L_088BE670;
    }
L_088BE670:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE7A0;
      }
      goto L_088BE678;
    }
L_088BE678:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BEDA0;
      }
      goto L_088BE680;
    }
L_088BE680:
    ctx.gpr[31] = (0x088BE688u);
    // nop
    goto L_088BC494;
L_088BE688:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE7A0;
      }
      goto L_088BE690;
    }
L_088BE690:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    ctx.gpr[5] = (0u | 67u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BE740;
      }
      goto L_088BE6A0;
    }
L_088BE6A0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20873)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BE74C;
      }
      goto L_088BE6B0;
    }
L_088BE6B0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6136));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20873), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[31] = (0x088BE6E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088BC08C;
L_088BE6E4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 13 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BE74C;
      }
      goto L_088BE6F4;
    }
L_088BE6F4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE74C;
      }
      goto L_088BE704;
    }
L_088BE704:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(851))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 13 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BE74C;
      }
      goto L_088BE714;
    }
L_088BE714:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(851))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE74C;
      }
      goto L_088BE724;
    }
L_088BE724:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19952)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088BE738u);
    ctx.gpr[6] = (0u | 178u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 941u, 0x08A9B848u>(ctx, &aot_mem) && ctx.pc == 0x088BE738u) goto L_088BE738;
    return;
L_088BE738:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE74C;
      }
      goto L_088BE740;
    }
L_088BE740:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088BE74Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11976));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x088BE74Cu) goto L_088BE74C;
    return;
L_088BE74C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x088BE760u);
    ctx.gpr[7] = (0u | 0u);
    goto L_088BC4A8;
L_088BE760:
    ctx.gpr[31] = (0x088BE768u);
    ctx.gpr[4] = (0u | 0u);
    goto L_088BC420;
L_088BE768:
    ctx.gpr[31] = (0x088BE770u);
    // nop
    goto L_088BC494;
L_088BE770:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BEDA0;
      }
      goto L_088BE778;
    }
L_088BE778:
    ctx.gpr[31] = (0x088BE780u);
    ctx.gpr[4] = (0u | 0u);
    goto L_088BC420;
L_088BE780:
    ctx.gpr[31] = (0x088BE788u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 585u, 0x08AB350Cu>(ctx, &aot_mem) && ctx.pc == 0x088BE788u) goto L_088BE788;
    return;
L_088BE788:
    ctx.gpr[31] = (0x088BE790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 278u, 0x089C1448u>(ctx, &aot_mem) && ctx.pc == 0x088BE790u) goto L_088BE790;
    return;
L_088BE790:
    ctx.gpr[31] = (0x088BE798u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 114u, 0x089C0910u>(ctx, &aot_mem) && ctx.pc == 0x088BE798u) goto L_088BE798;
    return;
L_088BE798:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE768;
      }
      goto L_088BE7A0;
    }
L_088BE7A0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x088BE7ACu);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20873), static_cast<std::uint8_t>(0u));
    goto L_088BC494;
L_088BE7AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE800;
      }
      goto L_088BE7B4;
    }
L_088BE7B4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(851))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(853), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(846), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(850), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BEDA0;
      }
      goto L_088BE7C8;
    }
L_088BE7C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(672)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BE7F4;
      }
      goto L_088BE7D8;
    }
L_088BE7D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(672)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 23 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE7F4;
      }
      goto L_088BE7E8;
    }
L_088BE7E8:
    ctx.gpr[4] = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(672), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BEDA0;
      }
      goto L_088BE7F4;
    }
L_088BE7F4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(672), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BEDA0;
      }
      goto L_088BE800;
    }
L_088BE800:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(851))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BE810u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 809u, 0x088BBC80u>(ctx, &aot_mem) && ctx.pc == 0x088BE810u) goto L_088BE810;
    return;
L_088BE810:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(851))))));
    ctx.gpr[6] = (0u | 67u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088BEDA0;
      }
      goto L_088BE820;
    }
L_088BE820:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(851))))));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088BE838u);
    ctx.gpr[8] = (0u | 1u);
    goto L_088BC2A4;
L_088BE838:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(845)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BE884;
      }
      goto L_088BE848;
    }
L_088BE848:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(845)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 23 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE884;
      }
      goto L_088BE858;
    }
L_088BE858:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BE868u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 778u, 0x088BB8D8u>(ctx, &aot_mem) && ctx.pc == 0x088BE868u) goto L_088BE868;
    return;
L_088BE868:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x088BE87Cu);
    ctx.gpr[7] = (0u | 1u);
    goto L_088BC4A8;
L_088BE87C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE8AC;
      }
      goto L_088BE884;
    }
L_088BE884:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 127u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x088BE8ACu);
    ctx.gpr[7] = (0u | 0u);
    goto L_088BC4A8;
L_088BE8AC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(851))))));
    ctx.gpr[31] = (0x088BE8B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088BC094;
L_088BE8B8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(853), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_088BEDA0;
      }
      goto L_088BE8C0;
    }
L_088BE8C0:
    ctx.gpr[31] = (0x088BE8C8u);
    // nop
    goto L_088BC494;
L_088BE8C8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BE970;
      }
      goto L_088BE8D0;
    }
L_088BE8D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 23 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE934;
      }
      goto L_088BE8E0;
    }
L_088BE8E0:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    ctx.gpr[31] = (0x088BE8F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12040));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 435u, 0x088BA5D4u>(ctx, &aot_mem) && ctx.pc == 0x088BE8F0u) goto L_088BE8F0;
    return;
L_088BE8F0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088BE920u);
    ctx.gpr[8] = (0u | 1u);
    goto L_088BC2A4;
L_088BE920:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088BE92Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11928));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 435u, 0x088BA5D4u>(ctx, &aot_mem) && ctx.pc == 0x088BE92Cu) goto L_088BE92C;
    return;
L_088BE92C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE970;
      }
      goto L_088BE934;
    }
L_088BE934:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    ctx.gpr[5] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BE970;
      }
      goto L_088BE944;
    }
L_088BE944:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088BE964u);
    ctx.gpr[8] = (0u | 1u);
    goto L_088BC2A4;
L_088BE964:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088BE970u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11948));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 435u, 0x088BA5D4u>(ctx, &aot_mem) && ctx.pc == 0x088BE970u) goto L_088BE970;
    return;
L_088BE970:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BE9BC;
      }
      goto L_088BE980;
    }
L_088BE980:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 23 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE9BC;
      }
      goto L_088BE990;
    }
L_088BE990:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BE9A0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 778u, 0x088BB8D8u>(ctx, &aot_mem) && ctx.pc == 0x088BE9A0u) goto L_088BE9A0;
    return;
L_088BE9A0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x088BE9B4u);
    ctx.gpr[7] = (0u | 1u);
    goto L_088BC4A8;
L_088BE9B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BEDA0;
      }
      goto L_088BE9BC;
    }
L_088BE9BC:
    ctx.gpr[31] = (0x088BE9C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 759u, 0x0891B6B8u>(ctx, &aot_mem) && ctx.pc == 0x088BE9C4u) goto L_088BE9C4;
    return;
L_088BE9C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BEBD8;
      }
      goto L_088BE9CC;
    }
L_088BE9CC:
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BED54;
      }
      goto L_088BE9E0;
    }
L_088BE9E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17725u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4096u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088BEBBC;
      }
      goto L_088BEA38;
    }
L_088BEA38:
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (2233u << 16u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(10640));
      if (branch_taken) {
          goto L_088BEAE0;
      }
      goto L_088BEA54;
    }
L_088BEA54:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088BEA60u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 284u, 0x08A6D3DCu>(ctx, &aot_mem) && ctx.pc == 0x088BEA60u) goto L_088BEA60;
    return;
L_088BEA60:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_088BEA78;
      }
      goto L_088BEA68;
    }
L_088BEA68:
    ctx.gpr[31] = (0x088BEA70u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 284u, 0x08A6D3DCu>(ctx, &aot_mem) && ctx.pc == 0x088BEA70u) goto L_088BEA70;
    return;
L_088BEA70:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BEA9C;
      }
      goto L_088BEA78;
    }
L_088BEA78:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x088BEA94u);
    ctx.gpr[7] = (0u | 0u);
    goto L_088BC4A8;
L_088BEA94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BEBD0;
      }
      goto L_088BEA9C;
    }
L_088BEA9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BEAC4;
      }
      goto L_088BEAA8;
    }
L_088BEAA8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x088BEABCu);
    ctx.gpr[7] = (0u | 0u);
    goto L_088BC4A8;
L_088BEABC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BEBD0;
      }
      goto L_088BEAC4;
    }
L_088BEAC4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x088BEAD8u);
    ctx.gpr[7] = (0u | 0u);
    goto L_088BC4A8;
L_088BEAD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BEBD0;
      }
      goto L_088BEAE0;
    }
L_088BEAE0:
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16948u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[15] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x088BEB28u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 284u, 0x08A6D3DCu>(ctx, &aot_mem) && ctx.pc == 0x088BEB28u) goto L_088BEB28;
    return;
L_088BEB28:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_088BEB40;
      }
      goto L_088BEB30;
    }
L_088BEB30:
    ctx.gpr[31] = (0x088BEB38u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 284u, 0x08A6D3DCu>(ctx, &aot_mem) && ctx.pc == 0x088BEB38u) goto L_088BEB38;
    return;
L_088BEB38:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BEB4C;
      }
      goto L_088BEB40;
    }
L_088BEB40:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088BEB4C;
L_088BEB4C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088BEB8C;
      }
      goto L_088BEB58;
    }
L_088BEB58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088BEB70u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 931u, 0x08A9B6B8u>(ctx, &aot_mem) && ctx.pc == 0x088BEB70u) goto L_088BEB70;
    return;
L_088BEB70:
    ctx.gpr[6] = (16988u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x088BEB84u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 916u, 0x08A9B564u>(ctx, &aot_mem) && ctx.pc == 0x088BEB84u) goto L_088BEB84;
    return;
L_088BEB84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088BEB90;
      }
      goto L_088BEB8C;
    }
L_088BEB8C:
    ctx.gpr[17] = (0u | 0u);
    goto L_088BEB90;
L_088BEB90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BEBA0;
      }
      goto L_088BEB9C;
    }
L_088BEB9C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    goto L_088BEBA0;
L_088BEBA0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x088BEBB4u);
    ctx.gpr[7] = (0u | 0u);
    goto L_088BC4A8;
L_088BEBB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BEBD0;
      }
      goto L_088BEBBC;
    }
L_088BEBBC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x088BEBD0u);
    ctx.gpr[7] = (0u | 0u);
    goto L_088BC4A8;
L_088BEBD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BED54;
      }
      goto L_088BEBD8;
    }
L_088BEBD8:
    ctx.gpr[31] = (0x088BEBE0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 773u, 0x088BB898u>(ctx, &aot_mem) && ctx.pc == 0x088BEBE0u) goto L_088BEBE0;
    return;
L_088BEBE0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BEC04;
      }
      goto L_088BEBE8;
    }
L_088BEBE8:
    ctx.gpr[4] = (0u | 127u);
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x088BEBFCu);
    ctx.gpr[7] = (0u | 0u);
    goto L_088BC4A8;
L_088BEBFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BED54;
      }
      goto L_088BEC04;
    }
L_088BEC04:
    ctx.gpr[17] = (2233u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(10640));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088BEC18u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 284u, 0x08A6D3DCu>(ctx, &aot_mem) && ctx.pc == 0x088BEC18u) goto L_088BEC18;
    return;
L_088BEC18:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088BEC30;
      }
      goto L_088BEC20;
    }
L_088BEC20:
    ctx.gpr[31] = (0x088BEC28u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 284u, 0x08A6D3DCu>(ctx, &aot_mem) && ctx.pc == 0x088BEC28u) goto L_088BEC28;
    return;
L_088BEC28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BEC78;
      }
      goto L_088BEC30;
    }
L_088BEC30:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 31 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BEC5C;
      }
      goto L_088BEC40;
    }
L_088BEC40:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x088BEC54u);
    ctx.gpr[7] = (0u | 0u);
    goto L_088BC4A8;
L_088BEC54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BEC70;
      }
      goto L_088BEC5C;
    }
L_088BEC5C:
    ctx.gpr[4] = (0u | 31u);
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x088BEC70u);
    ctx.gpr[7] = (0u | 0u);
    goto L_088BC4A8;
L_088BEC70:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(856), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BED54;
      }
      goto L_088BEC78;
    }
L_088BEC78:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(856))))));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BED28;
      }
      goto L_088BEC88;
    }
L_088BEC88:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(856))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BECCC;
      }
      goto L_088BEC98;
    }
L_088BEC98:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 31 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BECB4;
      }
      goto L_088BECA8;
    }
L_088BECA8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BECBC;
      }
      goto L_088BECB4;
    }
L_088BECB4:
    ctx.gpr[4] = (0u | 31u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088BECBC;
L_088BECBC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(856))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(856), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BED30;
      }
      goto L_088BECCC;
    }
L_088BECCC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(856))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 40 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BED18;
      }
      goto L_088BECDC;
    }
L_088BECDC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(856))))));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-49));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BED08;
      }
      goto L_088BED00;
    }
L_088BED00:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088BED08;
L_088BED08:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(856))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(856), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BED30;
      }
      goto L_088BED18;
    }
L_088BED18:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(856), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088BED30;
      }
      goto L_088BED28;
    }
L_088BED28:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088BED30;
L_088BED30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BED40;
      }
      goto L_088BED3C;
    }
L_088BED3C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    goto L_088BED40;
L_088BED40:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x088BED54u);
    ctx.gpr[7] = (0u | 0u);
    goto L_088BC4A8;
L_088BED54:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088BED70;
      }
      goto L_088BED60;
    }
L_088BED60:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BEDA0;
      }
      goto L_088BED70;
    }
L_088BED70:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(7)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BEDA0;
      }
      goto L_088BED84;
    }
L_088BED84:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(7)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(7)));
        goto L_088BED9C;
    }
    goto L_088BED9C;
L_088BED9C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088BEDA0;
L_088BEDA0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BEDBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    ctx.gpr[4] = (0u | 0u);
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
    ctx.gpr[31] = (0x088BEDF4u);
    ctx.gpr[5] = (0u | 0u);
    goto L_088BC5B4;
L_088BEDF4:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6136));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (17235u << 16u);
      if (branch_taken) {
          goto L_088BEED4;
      }
      goto L_088BEE0C;
    }
L_088BEE0C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20624)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088BEE24;
      }
      goto L_088BEE1C;
    }
L_088BEE1C:
    ctx.gpr[31] = (0x088BEE24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 699u, 0x08AFAF50u>(ctx, &aot_mem) && ctx.pc == 0x088BEE24u) goto L_088BEE24;
    return;
L_088BEE24:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[31] = (0x088BEE30u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20624)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 126u, 0x08838850u>(ctx, &aot_mem) && ctx.pc == 0x088BEE30u) goto L_088BEE30;
    return;
L_088BEE30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x088BEE3Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 411u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x088BEE3Cu) goto L_088BEE3C;
    return;
L_088BEE3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20624)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BEE50;
      }
      goto L_088BEE48;
    }
L_088BEE48:
    ctx.gpr[31] = (0x088BEE50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 699u, 0x08AFAF50u>(ctx, &aot_mem) && ctx.pc == 0x088BEE50u) goto L_088BEE50;
    return;
L_088BEE50:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20624)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6136));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x088BEE78u);
    ctx.gpr[6] = (0u | 511u);
    ctx.pc = 0x08B0BD24u;
    return;
L_088BEE78:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088BEF58;
      }
      goto L_088BEE80;
    }
L_088BEE80:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20624)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BEE98;
      }
      goto L_088BEE90;
    }
L_088BEE90:
    ctx.gpr[31] = (0x088BEE98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 699u, 0x08AFAF50u>(ctx, &aot_mem) && ctx.pc == 0x088BEE98u) goto L_088BEE98;
    return;
L_088BEE98:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-20624)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x088BEEB8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12060));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 435u, 0x088BA5D4u>(ctx, &aot_mem) && ctx.pc == 0x088BEEB8u) goto L_088BEEB8;
    return;
L_088BEEB8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x088BEEC4u);
    ctx.gpr[5] = (0u | 1u);
    goto L_088BC5BC;
L_088BEEC4:
    ctx.gpr[31] = (0x088BEECCu);
    ctx.gpr[4] = (0u | 0u);
    goto L_088BC1D0;
L_088BEECC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BFBAC;
      }
      goto L_088BEED4;
    }
L_088BEED4:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18756));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (20527u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14896));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (18271u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20563));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (12101u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19777));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (17490u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21333));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (47u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21065));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6136));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24808));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x088BEF48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 393u, 0x08AED5D8u>(ctx, &aot_mem) && ctx.pc == 0x088BEF48u) goto L_088BEF48;
    return;
L_088BEF48:
    ctx.gpr[31] = (0x088BEF50u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 432u, 0x08AC6FE4u>(ctx, &aot_mem) && ctx.pc == 0x088BEF50u) goto L_088BEF50;
    return;
L_088BEF50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088BEFE0;
      }
      goto L_088BEF58;
    }
L_088BEF58:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12084));
    ctx.gpr[31] = (0x088BEF68u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 435u, 0x088BA5D4u>(ctx, &aot_mem) && ctx.pc == 0x088BEF68u) goto L_088BEF68;
    return;
L_088BEF68:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6136));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BF00C;
      }
      goto L_088BEF84;
    }
L_088BEF84:
    ctx.gpr[4] = (2270u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23488));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088BEF9Cu);
    ctx.gpr[6] = (4u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x088BEF9Cu) goto L_088BEF9C;
    return;
L_088BEF9C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6136));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 11u);
    ctx.gpr[5] = (0u + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(21512));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BEFC8u);
    ctx.gpr[6] = (0u | 2048u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088BEFC8u) goto L_088BEFC8;
    return;
L_088BEFC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 2048u);
    ctx.gpr[31] = (0x088BEFD8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 440u, 0x08AC7074u>(ctx, &aot_mem) && ctx.pc == 0x088BEFD8u) goto L_088BEFD8;
    return;
L_088BEFD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BF0A8;
      }
      goto L_088BEFE0;
    }
L_088BEFE0:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x088BEFF0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12060));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 435u, 0x088BA5D4u>(ctx, &aot_mem) && ctx.pc == 0x088BEFF0u) goto L_088BEFF0;
    return;
L_088BEFF0:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x088BEFFCu);
    ctx.gpr[5] = (0u | 1u);
    goto L_088BC5BC;
L_088BEFFC:
    ctx.gpr[31] = (0x088BF004u);
    ctx.gpr[4] = (0u | 0u);
    goto L_088BC1D0;
L_088BF004:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BFBAC;
      }
      goto L_088BF00C;
    }
L_088BF00C:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6136));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BF048;
      }
      goto L_088BF024;
    }
L_088BF024:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6136));
    ctx.gpr[5] = (2270u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u | 2048u);
    ctx.gpr[31] = (0x088BF040u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-23488));
    ctx.pc = 0x08B0BCB4u;
    return;
L_088BF040:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BF0A8;
      }
      goto L_088BF048;
    }
L_088BF048:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6136));
    ctx.gpr[5] = (2270u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 2048u);
    ctx.gpr[31] = (0x088BF064u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-23488));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 452u, 0x08AC716Cu>(ctx, &aot_mem) && ctx.pc == 0x088BF064u) goto L_088BF064;
    return;
L_088BF064:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 25 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 39 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BF0A8;
      }
      goto L_088BF074;
    }
L_088BF074:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BF0A8;
      }
      goto L_088BF07C;
    }
L_088BF07C:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (2270u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-23488));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2824));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    goto L_088BF0A8;
L_088BF0A8:
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[4] = (0u | 2048u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(-6136));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (2270u << 16u);
    ctx.gpr[5] = (0u | 2048u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23488));
    ctx.gpr[31] = (0x088BF0CCu);
    ctx.gpr[6] = (4u << 16u);
    ctx.pc = 0x08B0B91Cu;
    return;
L_088BF0CC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-6136), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088BF144;
      }
      goto L_088BF0D4;
    }
L_088BF0D4:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6136));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BF114;
      }
      goto L_088BF0EC;
    }
L_088BF0EC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20624)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088BF108;
      }
      goto L_088BF0FC;
    }
L_088BF0FC:
    ctx.gpr[31] = (0x088BF104u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 699u, 0x08AFAF50u>(ctx, &aot_mem) && ctx.pc == 0x088BF104u) goto L_088BF104;
    return;
L_088BF104:
    ctx.gpr[5] = (2230u << 16u);
    goto L_088BF108;
L_088BF108:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-20624)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    goto L_088BF114;
L_088BF114:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6136)));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088BF128u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12096));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 435u, 0x088BA5D4u>(ctx, &aot_mem) && ctx.pc == 0x088BF128u) goto L_088BF128;
    return;
L_088BF128:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x088BF134u);
    ctx.gpr[5] = (0u | 2u);
    goto L_088BC5BC;
L_088BF134:
    ctx.gpr[31] = (0x088BF13Cu);
    ctx.gpr[4] = (0u | 0u);
    goto L_088BC1D0;
L_088BF13C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BFBAC;
      }
      goto L_088BF144;
    }
L_088BF144:
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6136)));
    ctx.gpr[31] = (0x088BF158u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12136));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 435u, 0x088BA5D4u>(ctx, &aot_mem) && ctx.pc == 0x088BF158u) goto L_088BF158;
    return;
L_088BF158:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6136)));
    ctx.gpr[31] = (0x088BF164u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.pc = 0x08B0B954u;
    return;
L_088BF164:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088BF178;
      }
      goto L_088BF16C;
    }
L_088BF16C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088BF178u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12156));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 435u, 0x088BA5D4u>(ctx, &aot_mem) && ctx.pc == 0x088BF178u) goto L_088BF178;
    return;
L_088BF178:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x088BF188u);
    ctx.gpr[5] = (0u | 3u);
    goto L_088BC5BC;
L_088BF188:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20840)));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6136)));
    ctx.gpr[31] = (0x088BF1A8u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(184));
    ctx.pc = 0x08B0B96Cu;
    return;
L_088BF1A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (ctx.gpr[4] << 12u);
    ctx.gpr[31] = (0x088BF1B8u);
    ctx.gpr[4] = (0u + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 581u, 0x08AEA7B8u>(ctx, &aot_mem) && ctx.pc == 0x088BF1B8u) goto L_088BF1B8;
    return;
L_088BF1B8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20900)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20896)));
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088BF1D0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 481u, 0x08AF656Cu>(ctx, &aot_mem) && ctx.pc == 0x088BF1D0u) goto L_088BF1D0;
    return;
L_088BF1D0:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088BF1DCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 532u, 0x08AF68C8u>(ctx, &aot_mem) && ctx.pc == 0x088BF1DCu) goto L_088BF1DC;
    return;
L_088BF1DC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BF1F0;
      }
      goto L_088BF1EC;
    }
L_088BF1EC:
    ctx.gpr[20] = (0u | 1u);
    goto L_088BF1F0;
L_088BF1F0:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12204));
    ctx.gpr[31] = (0x088BF200u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 435u, 0x088BA5D4u>(ctx, &aot_mem) && ctx.pc == 0x088BF200u) goto L_088BF200;
    return;
L_088BF200:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x088BF20Cu);
    ctx.gpr[5] = (0u | 1024u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 710u, 0x08AF737Cu>(ctx, &aot_mem) && ctx.pc == 0x088BF20Cu) goto L_088BF20C;
    return;
L_088BF20C:
    ctx.gpr[31] = (0x088BF214u);
    // nop
    goto L_088BFBDC;
L_088BF214:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[21] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(20684), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6876)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 17u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088BF23Cu);
    ctx.gpr[8] = (0u | 0u);
    ctx.pc = 0x08B0BB5Cu;
    return;
L_088BF23C:
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(20684), static_cast<std::uint8_t>(0u));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6136));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BFA38;
      }
      goto L_088BF260;
    }
L_088BF260:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6136));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BF2F4;
      }
      goto L_088BF278;
    }
L_088BF278:
    ctx.gpr[31] = (0x088BF280u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 311u, 0x08935868u>(ctx, &aot_mem) && ctx.pc == 0x088BF280u) goto L_088BF280;
    return;
L_088BF280:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BF298;
      }
      goto L_088BF288;
    }
L_088BF288:
    ctx.gpr[31] = (0x088BF290u);
    ctx.gpr[4] = (0u | 1000u);
    ctx.pc = 0x08B0BBF4u;
    return;
L_088BF290:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BF278;
      }
      goto L_088BF298;
    }
L_088BF298:
    ctx.gpr[31] = (0x088BF2A0u);
    // nop
    ctx.pc = 0x08B0B7BCu;
    return;
L_088BF2A0:
    ctx.gpr[4] = (ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BF2F4;
      }
      goto L_088BF2AC;
    }
L_088BF2AC:
    ctx.gpr[31] = (0x088BF2B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 492u, 0x08AC74A8u>(ctx, &aot_mem) && ctx.pc == 0x088BF2B4u) goto L_088BF2B4;
    return;
L_088BF2B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BF2F4;
      }
      goto L_088BF2BC;
    }
L_088BF2BC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(20874));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4381u);
    ctx.gpr[31] = (0x088BF2D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12224));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 435u, 0x088BA5D4u>(ctx, &aot_mem) && ctx.pc == 0x088BF2D8u) goto L_088BF2D8;
    return;
L_088BF2D8:
    ctx.gpr[31] = (0x088BF2E0u);
    ctx.gpr[4] = (0u | 32u);
    ctx.pc = 0x08B0B7C4u;
    return;
L_088BF2E0:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4384u);
    ctx.gpr[31] = (0x088BF2F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12244));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 435u, 0x088BA5D4u>(ctx, &aot_mem) && ctx.pc == 0x088BF2F4u) goto L_088BF2F4;
    return;
L_088BF2F4:
    ctx.gpr[31] = (0x088BF2FCu);
    // nop
    goto L_088BC5C4;
L_088BF2FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BF32C;
      }
      goto L_088BF304;
    }
L_088BF304:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5)));
    ctx.gpr[5] = (17150u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_088BF350;
      }
      goto L_088BF32C;
    }
L_088BF32C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (17150u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2227u << 16u);
    goto L_088BF350;
L_088BF350:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20840)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(7)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17150u << 16u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    ctx.gpr[4] = (2274u << 16u);
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23424));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6136)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(180));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(164));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[31] = (0x088BF3C4u);
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.pc = 0x08B0B944u;
    return;
L_088BF3C4:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[30]) >= 0;
    ctx.gpr[5] = (2269u << 16u);
      if (branch_taken) {
          goto L_088BF40C;
      }
      goto L_088BF3D0;
    }
L_088BF3D0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6136));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BF40C;
      }
      goto L_088BF3E4;
    }
L_088BF3E4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20624)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088BF400;
      }
      goto L_088BF3F4;
    }
L_088BF3F4:
    ctx.gpr[31] = (0x088BF3FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 699u, 0x08AFAF50u>(ctx, &aot_mem) && ctx.pc == 0x088BF3FCu) goto L_088BF3FC;
    return;
L_088BF3FC:
    ctx.gpr[5] = (2230u << 16u);
    goto L_088BF400;
L_088BF400:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-20624)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    goto L_088BF40C;
L_088BF40C:
    ctx.gpr[31] = (0x088BF414u);
    ctx.gpr[4] = (0u | 1u);
    goto L_088BC534;
L_088BF414:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6136));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[30]) >= 0;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088BF45C;
      }
      goto L_088BF430;
    }
L_088BF430:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6136)));
    ctx.gpr[31] = (0x088BF440u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.pc = 0x08B0B974u;
    return;
L_088BF440:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088BF454u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12268));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 435u, 0x088BA5D4u>(ctx, &aot_mem) && ctx.pc == 0x088BF454u) goto L_088BF454;
    return;
L_088BF454:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BFA38;
      }
      goto L_088BF45C;
    }
L_088BF45C:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BF654;
      }
      goto L_088BF464;
    }
L_088BF464:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BF654;
      }
      goto L_088BF474;
    }
L_088BF474:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BF654;
      }
      goto L_088BF484;
    }
L_088BF484:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BF654;
      }
      goto L_088BF494;
    }
L_088BF494:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6136)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(168));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(172));
    ctx.gpr[31] = (0x088BF4ACu);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.pc = 0x08B0B92Cu;
    return;
L_088BF4AC:
    ctx.gpr[31] = (0x088BF4B4u);
    ctx.gpr[4] = (0u | 1u);
    goto L_088BC534;
L_088BF4B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BF4D0;
      }
      goto L_088BF4C8;
    }
L_088BF4C8:
    ctx.gpr[4] = (8u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[4]);
    goto L_088BF4D0;
L_088BF4D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088BF4ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12292));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 435u, 0x088BA5D4u>(ctx, &aot_mem) && ctx.pc == 0x088BF4ECu) goto L_088BF4EC;
    return;
L_088BF4EC:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x088BF4FCu);
    ctx.gpr[5] = (0u | 4u);
    goto L_088BC5B4;
L_088BF4FC:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6136));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BF578;
      }
      goto L_088BF514;
    }
L_088BF514:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6136));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BF54C;
      }
      goto L_088BF52C;
    }
L_088BF52C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6136));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[31] = (0x088BF544u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 440u, 0x08AC7074u>(ctx, &aot_mem) && ctx.pc == 0x088BF544u) goto L_088BF544;
    return;
L_088BF544:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BF568;
      }
      goto L_088BF54C;
    }
L_088BF54C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6136));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088BF568u);
    ctx.gpr[8] = (0u | 0u);
    ctx.pc = 0x08B0BD2Cu;
    return;
L_088BF568:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6136));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_088BF578;
L_088BF578:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(2049) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BF598;
      }
      goto L_088BF588;
    }
L_088BF588:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2048));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[4]);
    goto L_088BF598;
L_088BF598:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[4] = (ctx.gpr[4] & 2047u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BF5D4;
      }
      goto L_088BF5A8;
    }
L_088BF5A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[4] = (ctx.gpr[4] & 2047u);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BF5D4;
      }
      goto L_088BF5C0;
    }
L_088BF5C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[4] = (ctx.gpr[4] & 2047u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[4]);
    goto L_088BF5D4;
L_088BF5D4:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6136));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BF614;
      }
      goto L_088BF5EC;
    }
L_088BF5EC:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6136));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088BF60Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 456u, 0x08AC71D4u>(ctx, &aot_mem) && ctx.pc == 0x088BF60Cu) goto L_088BF60C;
    return;
L_088BF60C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088BF62C;
      }
      goto L_088BF614;
    }
L_088BF614:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6136));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[31] = (0x088BF62Cu);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.pc = 0x08B0BCDCu;
    return;
L_088BF62C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6136));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[31] = (0x088BF654u);
    ctx.gpr[4] = (0u | 1u);
    goto L_088BC534;
L_088BF654:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] - ctx.gpr[19]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 1024 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BF754;
      }
      goto L_088BF66C;
    }
L_088BF66C:
    ctx.gpr[30] = (ctx.gpr[18] - ctx.gpr[19]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-64));
    ctx.gpr[30] = (ctx.gpr[30] & ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x088BF684u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 710u, 0x08AF737Cu>(ctx, &aot_mem) && ctx.pc == 0x088BF684u) goto L_088BF684;
    return;
L_088BF684:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[5] = (2269u << 16u);
      if (branch_taken) {
          goto L_088BF6CC;
      }
      goto L_088BF68C;
    }
L_088BF68C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6136));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BF6CC;
      }
      goto L_088BF6A0;
    }
L_088BF6A0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20624)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BF6B8;
      }
      goto L_088BF6B0;
    }
L_088BF6B0:
    ctx.gpr[31] = (0x088BF6B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 699u, 0x08AFAF50u>(ctx, &aot_mem) && ctx.pc == 0x088BF6B8u) goto L_088BF6B8;
    return;
L_088BF6B8:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-20624)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088BFA38;
      }
      goto L_088BF6CC;
    }
L_088BF6CC:
    ctx.gpr[4] = (2274u << 16u);
    ctx.gpr[7] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23424));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088BF6ECu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 716u, 0x08AF73ECu>(ctx, &aot_mem) && ctx.pc == 0x088BF6ECu) goto L_088BF6EC;
    return;
L_088BF6EC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[5] = (2269u << 16u);
      if (branch_taken) {
          goto L_088BF734;
      }
      goto L_088BF6F4;
    }
L_088BF6F4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6136));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BF734;
      }
      goto L_088BF708;
    }
L_088BF708:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20624)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BF720;
      }
      goto L_088BF718;
    }
L_088BF718:
    ctx.gpr[31] = (0x088BF720u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 699u, 0x08AFAF50u>(ctx, &aot_mem) && ctx.pc == 0x088BF720u) goto L_088BF720;
    return;
L_088BF720:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-20624)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088BFA38;
      }
      goto L_088BF734;
    }
L_088BF734:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6136));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[30]);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088BF754u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2824));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 658u, 0x088BB1E4u>(ctx, &aot_mem) && ctx.pc == 0x088BF754u) goto L_088BF754;
    return;
L_088BF754:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 8192 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BF780;
      }
      goto L_088BF760;
    }
L_088BF760:
    ctx.gpr[4] = (2274u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] - ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23424));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x088BF77Cu);
    ctx.gpr[6] = (ctx.gpr[18] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088BF77Cu) goto L_088BF77C;
    return;
L_088BF77C:
    ctx.gpr[19] = (0u | 0u);
    goto L_088BF780;
L_088BF780:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6136)));
    ctx.gpr[31] = (0x088BF790u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(164));
    ctx.pc = 0x08B0B95Cu;
    return;
L_088BF790:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BF7E0;
      }
      goto L_088BF798;
    }
L_088BF798:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BF7E0;
      }
      goto L_088BF7A8;
    }
L_088BF7A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BF7E0;
      }
      goto L_088BF7B8;
    }
L_088BF7B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BF7E0;
      }
      goto L_088BF7C8;
    }
L_088BF7C8:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[31] = (0x088BF7D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12364));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 435u, 0x088BA5D4u>(ctx, &aot_mem) && ctx.pc == 0x088BF7D8u) goto L_088BF7D8;
    return;
L_088BF7D8:
    ctx.gpr[31] = (0x088BF7E0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 484u, 0x08AC742Cu>(ctx, &aot_mem) && ctx.pc == 0x088BF7E0u) goto L_088BF7E0;
    return;
L_088BF7E0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BF8BC;
      }
      goto L_088BF7F0;
    }
L_088BF7F0:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BF8BC;
      }
      goto L_088BF7F8;
    }
L_088BF7F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BF810;
      }
      goto L_088BF804;
    }
L_088BF804:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088BF810u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12404));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 435u, 0x088BA5D4u>(ctx, &aot_mem) && ctx.pc == 0x088BF810u) goto L_088BF810;
    return;
L_088BF810:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6136));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BF898;
      }
      goto L_088BF828;
    }
L_088BF828:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6136));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x088BF83Cu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(200));
    ctx.pc = 0x08B0BCFCu;
    return;
L_088BF83C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20908)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20904)));
    ctx.gpr[8] = (ctx.gpr[5] ^ ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[8] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BF884;
      }
      goto L_088BF870;
    }
L_088BF870:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088BF890;
      }
      goto L_088BF884;
    }
L_088BF884:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088BF890u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12436));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 435u, 0x088BA5D4u>(ctx, &aot_mem) && ctx.pc == 0x088BF890u) goto L_088BF890;
    return;
L_088BF890:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_088BF8A4;
      }
      goto L_088BF898;
    }
L_088BF898:
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x088BF8A4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 480u, 0x08AC73D4u>(ctx, &aot_mem) && ctx.pc == 0x088BF8A4u) goto L_088BF8A4;
    return;
L_088BF8A4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BF8BC;
      }
      goto L_088BF8AC;
    }
L_088BF8AC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x088BF8B8u);
    ctx.gpr[5] = (0u | 5u);
    goto L_088BC5BC;
L_088BF8B8:
    ctx.gpr[16] = (0u | 0u);
    goto L_088BF8BC;
L_088BF8BC:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BF92C;
      }
      goto L_088BF8C4;
    }
L_088BF8C4:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(188));
    ctx.gpr[31] = (0x088BF8D0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 468u, 0x08AC72ECu>(ctx, &aot_mem) && ctx.pc == 0x088BF8D0u) goto L_088BF8D0;
    return;
L_088BF8D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BF914;
      }
      goto L_088BF8D8;
    }
L_088BF8D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[4]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[31] = (0x088BF8F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12456));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 435u, 0x088BA5D4u>(ctx, &aot_mem) && ctx.pc == 0x088BF8F8u) goto L_088BF8F8;
    return;
L_088BF8F8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BF9A8;
      }
      goto L_088BF900;
    }
L_088BF900:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x088BF90Cu);
    ctx.gpr[5] = (0u | 6u);
    goto L_088BC5BC;
L_088BF90C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_088BF9A8;
      }
      goto L_088BF914;
    }
L_088BF914:
    ctx.gpr[31] = (0x088BF91Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 472u, 0x08AC7344u>(ctx, &aot_mem) && ctx.pc == 0x088BF91Cu) goto L_088BF91C;
    return;
L_088BF91C:
    ctx.gpr[4] = (ctx.gpr[2] - ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088BF9A8;
      }
      goto L_088BF92C;
    }
L_088BF92C:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BF9A8;
      }
      goto L_088BF934;
    }
L_088BF934:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6136));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x088BF948u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.pc = 0x08B0BD34u;
    return;
L_088BF948:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BF9A8;
      }
      goto L_088BF950;
    }
L_088BF950:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20908)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20904)));
    ctx.gpr[8] = (ctx.gpr[5] ^ ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[8] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BF998;
      }
      goto L_088BF984;
    }
L_088BF984:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088BF9A4;
      }
      goto L_088BF998;
    }
L_088BF998:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088BF9A4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12436));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 435u, 0x088BA5D4u>(ctx, &aot_mem) && ctx.pc == 0x088BF9A4u) goto L_088BF9A4;
    return;
L_088BF9A4:
    ctx.gpr[22] = (0u | 0u);
    goto L_088BF9A8;
L_088BF9A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088BF9D4;
      }
      goto L_088BF9B4;
    }
L_088BF9B4:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[31] = (0x088BF9C4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12468));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 435u, 0x088BA5D4u>(ctx, &aot_mem) && ctx.pc == 0x088BF9C4u) goto L_088BF9C4;
    return;
L_088BF9C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[31] = (0x088BF9D4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6136)));
    ctx.pc = 0x08B0B94Cu;
    return;
L_088BF9D4:
    ctx.gpr[31] = (0x088BF9DCu);
    ctx.gpr[4] = (0u | 1u);
    goto L_088BC534;
L_088BF9DC:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6136));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BFA2C;
      }
      goto L_088BF9F0;
    }
L_088BF9F0:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6136));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088BFA0C;
      }
      goto L_088BFA04;
    }
L_088BFA04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BFA38;
      }
      goto L_088BFA0C;
    }
L_088BFA0C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6136));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (ctx.gpr[17] - ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088BFA2C;
      }
      goto L_088BFA24;
    }
L_088BFA24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BFA38;
      }
      goto L_088BFA2C;
    }
L_088BFA2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BF260;
      }
      goto L_088BFA38;
    }
L_088BFA38:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BFA58;
      }
      goto L_088BFA40;
    }
L_088BFA40:
    ctx.gpr[31] = (0x088BFA48u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 460u, 0x08AC725Cu>(ctx, &aot_mem) && ctx.pc == 0x088BFA48u) goto L_088BFA48;
    return;
L_088BFA48:
    ctx.gpr[31] = (0x088BFA50u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 476u, 0x08AC738Cu>(ctx, &aot_mem) && ctx.pc == 0x088BFA50u) goto L_088BFA50;
    return;
L_088BFA50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BFA70;
      }
      goto L_088BFA58;
    }
L_088BFA58:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BFA70;
      }
      goto L_088BFA60;
    }
L_088BFA60:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6136));
    ctx.gpr[31] = (0x088BFA70u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08B0BD0Cu;
    return;
L_088BFA70:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6136));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BFB28;
      }
      goto L_088BFA88;
    }
L_088BFA88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BFAA8;
      }
      goto L_088BFA98;
    }
L_088BFA98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BFAE0;
      }
      goto L_088BFAA8;
    }
L_088BFAA8:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088BFAB4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12492));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 435u, 0x088BA5D4u>(ctx, &aot_mem) && ctx.pc == 0x088BFAB4u) goto L_088BFAB4;
    return;
L_088BFAB4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20624)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088BFAD0;
      }
      goto L_088BFAC4;
    }
L_088BFAC4:
    ctx.gpr[31] = (0x088BFACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 699u, 0x08AFAF50u>(ctx, &aot_mem) && ctx.pc == 0x088BFACCu) goto L_088BFACC;
    return;
L_088BFACC:
    ctx.gpr[4] = (2230u << 16u);
    goto L_088BFAD0;
L_088BFAD0:
    ctx.gpr[31] = (0x088BFAD8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20624)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 174u, 0x08838B48u>(ctx, &aot_mem) && ctx.pc == 0x088BFAD8u) goto L_088BFAD8;
    return;
L_088BFAD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BFB28;
      }
      goto L_088BFAE0;
    }
L_088BFAE0:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6136));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088BFAF8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12516));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 435u, 0x088BA5D4u>(ctx, &aot_mem) && ctx.pc == 0x088BFAF8u) goto L_088BFAF8;
    return;
L_088BFAF8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20624)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_088BFB14;
      }
      goto L_088BFB08;
    }
L_088BFB08:
    ctx.gpr[31] = (0x088BFB10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 699u, 0x08AFAF50u>(ctx, &aot_mem) && ctx.pc == 0x088BFB10u) goto L_088BFB10;
    return;
L_088BFB10:
    ctx.gpr[4] = (2269u << 16u);
    goto L_088BFB14;
L_088BFB14:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6136));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-20624)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_088BFB28;
L_088BFB28:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BFB3C;
      }
      goto L_088BFB30;
    }
L_088BFB30:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x088BFB3Cu);
    ctx.gpr[5] = (0u | 7u);
    goto L_088BC5BC;
L_088BFB3C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    ctx.gpr[4] = (ctx.gpr[18] - ctx.gpr[19]);
      if (branch_taken) {
          goto L_088BFB94;
      }
      goto L_088BFB44;
    }
L_088BFB44:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088BFB94;
      }
      goto L_088BFB4C;
    }
L_088BFB4C:
    ctx.gpr[4] = (ctx.gpr[19] - ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1024));
    ctx.gpr[5] = (2274u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(-23424));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[31] = (0x088BFB70u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x088BFB70u) goto L_088BFB70;
    return;
L_088BFB70:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x088BFB7Cu);
    ctx.gpr[5] = (0u | 1024u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 710u, 0x08AF737Cu>(ctx, &aot_mem) && ctx.pc == 0x088BFB7Cu) goto L_088BFB7C;
    return;
L_088BFB7C:
    ctx.gpr[7] = (ctx.gpr[19] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[16]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088BFB94u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 716u, 0x08AF73ECu>(ctx, &aot_mem) && ctx.pc == 0x088BFB94u) goto L_088BFB94;
    return;
L_088BFB94:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2824));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[31] = (0x088BFBACu);
    ctx.gpr[4] = (0u | 1u);
    goto L_088BC1D0;
L_088BFBAC:
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
L_088BFBDC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    ctx.gpr[18] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6136)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BFC24u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.pc = 0x08B0B964u;
    return;
L_088BFC24:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-6136));
      if (branch_taken) {
          goto L_088BFC48;
      }
      goto L_088BFC30;
    }
L_088BFC30:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088BFC40u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12544));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 435u, 0x088BA5D4u>(ctx, &aot_mem) && ctx.pc == 0x088BFC40u) goto L_088BFC40;
    return;
L_088BFC40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BFF30;
      }
      goto L_088BFC48;
    }
L_088BFC48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12588));
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[31] = (0x088BFC68u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 435u, 0x088BA5D4u>(ctx, &aot_mem) && ctx.pc == 0x088BFC68u) goto L_088BFC68;
    return;
L_088BFC68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6136)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x088BFC78u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.pc = 0x08B0B924u;
    return;
L_088BFC78:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088BFC9C;
      }
      goto L_088BFC84;
    }
L_088BFC84:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088BFC94u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12624));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 435u, 0x088BA5D4u>(ctx, &aot_mem) && ctx.pc == 0x088BFC94u) goto L_088BFC94;
    return;
L_088BFC94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BFF30;
      }
      goto L_088BFC9C;
    }
L_088BFC9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BFDD8;
      }
      goto L_088BFCA8;
    }
L_088BFCA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[20] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[20];
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088BFCD4;
      }
      goto L_088BFCBC;
    }
L_088BFCBC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x088BFCCCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 440u, 0x08AC7074u>(ctx, &aot_mem) && ctx.pc == 0x088BFCCCu) goto L_088BFCCC;
    return;
L_088BFCCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BFCE8;
      }
      goto L_088BFCD4;
    }
L_088BFCD4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088BFCE8u);
    ctx.gpr[8] = (0u | 0u);
    ctx.pc = 0x08B0BD2Cu;
    return;
L_088BFCE8:
    ctx.gpr[31] = (0x088BFCF0u);
    ctx.gpr[4] = (0u | 1u);
    goto L_088BC534;
L_088BFCF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_088BFD0C;
      }
      goto L_088BFD04;
    }
L_088BFD04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (1u << 16u);
      if (branch_taken) {
          goto L_088BFD0C;
      }
      goto L_088BFD0C;
    }
L_088BFD0C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[6] & 2047u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088BFD2C;
      }
      goto L_088BFD1C;
    }
L_088BFD1C:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BFD2C;
      }
      goto L_088BFD28;
    }
L_088BFD28:
    ctx.gpr[16] = (ctx.gpr[5] - ctx.gpr[6]);
    goto L_088BFD2C;
L_088BFD2C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BFD40u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12676));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 435u, 0x088BA5D4u>(ctx, &aot_mem) && ctx.pc == 0x088BFD40u) goto L_088BFD40;
    return;
L_088BFD40:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[20];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_088BFD84;
      }
      goto L_088BFD4C;
    }
L_088BFD4C:
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x088BFD68u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 456u, 0x08AC71D4u>(ctx, &aot_mem) && ctx.pc == 0x088BFD68u) goto L_088BFD68;
    return;
L_088BFD68:
    ctx.gpr[31] = (0x088BFD70u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 476u, 0x08AC738Cu>(ctx, &aot_mem) && ctx.pc == 0x088BFD70u) goto L_088BFD70;
    return;
L_088BFD70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_088BFDA8;
      }
      goto L_088BFD84;
    }
L_088BFD84:
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x088BFD98u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.pc = 0x08B0BCB4u;
    return;
L_088BFD98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    goto L_088BFDA8;
L_088BFDA8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088BFDC8;
      }
      goto L_088BFDB0;
    }
L_088BFDB0:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BFDC0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12624));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 435u, 0x088BA5D4u>(ctx, &aot_mem) && ctx.pc == 0x088BFDC0u) goto L_088BFDC0;
    return;
L_088BFDC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BFF30;
      }
      goto L_088BFDC8;
    }
L_088BFDC8:
    ctx.gpr[31] = (0x088BFDD0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 78u, 0x08A28A10u>(ctx, &aot_mem) && ctx.pc == 0x088BFDD0u) goto L_088BFDD0;
    return;
L_088BFDD0:
    ctx.gpr[31] = (0x088BFDD8u);
    ctx.gpr[4] = (0u | 1u);
    goto L_088BC534;
L_088BFDD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BFEA0;
      }
      goto L_088BFDE4;
    }
L_088BFDE4:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088BFDF0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12704));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 435u, 0x088BA5D4u>(ctx, &aot_mem) && ctx.pc == 0x088BFDF0u) goto L_088BFDF0;
    return;
L_088BFDF0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
      if (branch_taken) {
          goto L_088BFE34;
      }
      goto L_088BFE04;
    }
L_088BFE04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088BFE14u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 440u, 0x08AC7074u>(ctx, &aot_mem) && ctx.pc == 0x088BFE14u) goto L_088BFE14;
    return;
L_088BFE14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x088BFE24u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 452u, 0x08AC716Cu>(ctx, &aot_mem) && ctx.pc == 0x088BFE24u) goto L_088BFE24;
    return;
L_088BFE24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_088BFE64;
      }
      goto L_088BFE34;
    }
L_088BFE34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088BFE48u);
    ctx.gpr[8] = (0u | 0u);
    ctx.pc = 0x08B0BD2Cu;
    return;
L_088BFE48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x088BFE58u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.pc = 0x08B0BCB4u;
    return;
L_088BFE58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    goto L_088BFE64;
L_088BFE64:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BFE84;
      }
      goto L_088BFE6C;
    }
L_088BFE6C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088BFE7Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12624));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 435u, 0x088BA5D4u>(ctx, &aot_mem) && ctx.pc == 0x088BFE7Cu) goto L_088BFE7C;
    return;
L_088BFE7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BFF30;
      }
      goto L_088BFE84;
    }
L_088BFE84:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[31] = (0x088BFE98u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 78u, 0x08A28A10u>(ctx, &aot_mem) && ctx.pc == 0x088BFE98u) goto L_088BFE98;
    return;
L_088BFE98:
    ctx.gpr[31] = (0x088BFEA0u);
    ctx.gpr[4] = (0u | 1u);
    goto L_088BC534;
L_088BFEA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6136)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BFEB4u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.pc = 0x08B0B93Cu;
    return;
L_088BFEB4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088BFED0;
      }
      goto L_088BFEC0;
    }
L_088BFEC0:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BFED0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12724));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 435u, 0x088BA5D4u>(ctx, &aot_mem) && ctx.pc == 0x088BFED0u) goto L_088BFED0;
    return;
L_088BFED0:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6136)));
    ctx.gpr[31] = (0x088BFEE0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12772));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 435u, 0x088BA5D4u>(ctx, &aot_mem) && ctx.pc == 0x088BFEE0u) goto L_088BFEE0;
    return;
L_088BFEE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6136)));
    ctx.gpr[31] = (0x088BFEECu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.pc = 0x08B0B954u;
    return;
L_088BFEEC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088BFF30;
      }
      goto L_088BFEF8;
    }
L_088BFEF8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088BFF08u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12796));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 435u, 0x088BA5D4u>(ctx, &aot_mem) && ctx.pc == 0x088BFF08u) goto L_088BFF08;
    return;
L_088BFF08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6136)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x088BFF18u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.pc = 0x08B0B97Cu;
    return;
L_088BFF18:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088BFF30u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12836));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 435u, 0x088BA5D4u>(ctx, &aot_mem) && ctx.pc == 0x088BFF30u) goto L_088BFF30;
    return;
L_088BFF30:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BFF50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20628)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20624)));
    ctx.gpr[2] = (2227u << 16u);
    ctx.gpr[6] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20632), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (2227u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20652)));
    ctx.gpr[3] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20664)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20660)));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[16] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20668), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20676), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[13] = (2227u << 16u);
    ctx.gpr[12] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(20640), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[10] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(20636), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[11] = (15744u << 16u);
    ctx.gpr[14] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[8] = (16281u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[15] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[8] | 39322u);
    ctx.pc = 0x088C0000u; return;
}

void recomp_unit_0046(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0046_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_46(Runtime &runtime) {
    runtime.register_generated_unit(46u, 0x088BC000u, 16384u, &recomp_unit_0046, &recomp_unit_0046_entry);
    runtime.register_function(0x088BC004u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC008u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC010u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC018u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC028u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC034u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC03Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC044u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC04Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC050u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC058u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC068u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC070u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC08Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC094u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC0A0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC0B4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC0C0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC0C4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC0CCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC0ECu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC0F4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC100u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC114u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC124u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC130u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC138u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC140u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC14Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC154u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC168u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC198u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC1A8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC1B4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC1BCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC1D0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC1E4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC1F4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC204u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC20Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC214u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC220u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC224u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC234u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC248u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC26Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC290u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC2A4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC2E8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC2F8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC300u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC304u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC30Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC314u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC31Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC328u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC338u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC340u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC344u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC34Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC358u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC360u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC36Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC394u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC3A0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC3B0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC3B4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC3D8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC3E0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC3F0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC3F8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC420u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC438u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC440u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC44Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC454u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC464u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC46Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC478u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC480u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC494u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC4A8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC4BCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC4C8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC4D4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC4E8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC4F0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC4F8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC504u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC50Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC51Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC528u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC534u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC550u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC564u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC574u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC580u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC588u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC594u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC59Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC5A8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC5B4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC5BCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC5C4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC5DCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC5E4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC5ECu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC5F4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC5FCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC608u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC610u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC618u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC620u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC62Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC634u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC63Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC640u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC648u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC65Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC66Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC678u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC684u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC6B0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC6B8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC6C0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC6D0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC6DCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC6F0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC6F8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC6FCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC70Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC714u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC72Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC748u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC754u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC7BCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC7C4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC7D0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC7F0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC7F8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC804u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC834u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC84Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC858u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC8A8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC8B4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC904u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC918u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC940u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC944u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC9CCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC9D4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC9F4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCA1Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCA24u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCA28u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCA30u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCA3Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCA44u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCA48u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCA50u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCA58u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCA64u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCA6Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCA70u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCA78u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCA80u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCA90u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCA98u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCAA4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCAB8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCAC4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCAC8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCAD4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCAE0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCAF4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCAFCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCB08u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCB1Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCB28u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCB34u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCB38u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCB48u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCB60u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCB68u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCB70u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCB78u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCB84u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCB94u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCB9Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCBC8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCBD0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCBD8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCC0Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCC14u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCC1Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCC28u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCC34u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCC3Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCC44u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCC4Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCC54u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCC5Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCC68u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCC70u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCC78u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCC8Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCC94u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCCA0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCCA8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCCB0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCCC8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCDB0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCDB4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCDF4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCDFCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCE14u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCE30u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCE50u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCE64u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCE70u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCE7Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCEBCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCED0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCEDCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCEE8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCF00u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCF0Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCF14u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCF1Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCF30u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCF34u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCF44u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCF4Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCF54u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCF70u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCFB0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCFF8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD008u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD010u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD018u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD020u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD028u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD030u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD040u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD050u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD058u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD068u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD070u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD080u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD088u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD098u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD0A0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD0B0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD0B8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD0C8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD0D4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD0E0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD0F0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD0F8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD108u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD110u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD114u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD120u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD128u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD138u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD140u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD150u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD15Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD170u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD184u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD18Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD190u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD19Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD1A4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD1B4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD1CCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD1D4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD1E4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD1ECu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD1F4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD1FCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD208u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD214u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD21Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD220u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD228u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD234u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD23Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD244u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD250u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD25Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD264u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD268u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD270u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD27Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD284u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD28Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD298u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD2A4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD2ACu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD2B0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD2B8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD2C4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD2CCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD2D4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD2E0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD2ECu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD2F4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD2F8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD300u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD30Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD314u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD31Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD328u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD334u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD33Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD340u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD348u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD354u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD35Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD364u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD370u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD37Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD384u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD388u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD390u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD39Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD3A4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD3ACu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD3B8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD3C4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD3CCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD3D0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD3D8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD3E4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD3ECu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD3F4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD400u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD40Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD414u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD418u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD420u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD42Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD434u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD43Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD448u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD454u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD45Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD460u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD468u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD474u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD47Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD484u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD490u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD49Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD4A4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD4A8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD4B0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD4BCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD4C4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD4CCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD4D0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD4D8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD4E0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD4ECu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD4F4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD4F8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD500u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD508u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD514u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD51Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD520u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD528u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD538u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD540u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD54Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD554u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD558u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD560u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD568u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD570u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD57Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD588u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD590u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD594u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD59Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD5A8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD5ACu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD5B4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD5BCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD5C8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD5D8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD5E0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD600u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD620u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD628u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD638u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD640u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD650u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD660u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD670u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD67Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD68Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD694u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD698u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD6A0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD6ACu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD6B8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD6C0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD6CCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD6DCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD6E8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD700u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD708u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD714u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD71Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD724u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD72Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD734u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD73Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD748u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD760u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD768u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD77Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD784u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD7A0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD7A8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD7BCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD7C4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD7DCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD7E0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD7E8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD800u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD808u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD810u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD828u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD830u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD83Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD844u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD858u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD868u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD870u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD874u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD87Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD888u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD894u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD8A4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD8BCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD8C4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD8DCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD8E4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD8F0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD91Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD940u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD948u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD95Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD964u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD990u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD998u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD9A0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD9B0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD9C4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD9D4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD9E0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD9E8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD9F0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD9FCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDA0Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDA18u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDA2Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDA34u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDA3Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDA4Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDA5Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDA84u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDA88u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDA9Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDAA4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDAACu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDAB8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDAC0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDACCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDADCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDAE8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDAF4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDB00u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDB04u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDB0Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDB24u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDB3Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDB48u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDB50u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDB64u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDB70u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDB78u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDB80u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDB88u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDB98u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDBA0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDBA8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDBACu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDBD8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDBE4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDBECu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDBF4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDC00u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDC08u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDC0Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDC14u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDC34u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDC40u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDC48u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDC54u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDC60u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDC6Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDC7Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDC84u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDC88u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDC90u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDC94u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDC9Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDCA4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDCB0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDCBCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDCD0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDCE0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDCE8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDCF8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDD10u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDD50u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDD5Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDD80u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDD98u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDDA4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDDB8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDDC0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDDC8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDDD0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDDD8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDDDCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDDE4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDDECu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDDFCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDE04u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDE0Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDE1Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDE24u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDE2Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDE34u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDE38u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDE40u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDE48u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDE50u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDE58u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDE60u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDE68u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDE70u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDE78u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDE84u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDE8Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDE94u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDE9Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDEB0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDEB8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDEC8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDEDCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDEECu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDEF4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDEF8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDF00u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDF0Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDF20u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDF30u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDF38u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDF3Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDF44u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDF4Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDF5Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDF68u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDF90u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDFA4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDFB4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDFD0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDFDCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDFE4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDFF0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDFFCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE000u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE00Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE014u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE01Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE038u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE044u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE050u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE064u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE070u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE080u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE084u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE08Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE098u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE0A0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE0ACu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE0B8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE0C0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE0D4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE0DCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE0E8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE0F8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE104u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE110u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE118u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE128u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE134u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE13Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE14Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE15Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE164u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE180u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE198u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE1A4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE1B0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE1C4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE1CCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE1D4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE1DCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE1ECu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE1F8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE200u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE204u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE20Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE214u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE22Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE23Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE244u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE254u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE260u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE270u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE274u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE28Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE2A0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE2A8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE2B0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE2BCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE2C8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE2D8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE2E0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE2E8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE2FCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE308u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE314u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE31Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE324u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE330u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE340u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE34Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE354u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE35Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE368u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE374u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE37Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE38Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE398u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE3A0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE3B0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE3C0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE3C8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE3E4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE3ECu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE3F4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE3FCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE408u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE414u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE41Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE424u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE42Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE44Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE454u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE45Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE464u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE470u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE480u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE488u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE494u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE4DCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE4F4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE4FCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE528u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE558u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE560u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE56Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE578u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE580u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE588u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE598u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE5A8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE5D8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE5E0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE5F4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE5FCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE604u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE614u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE620u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE630u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE64Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE664u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE670u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE678u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE680u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE688u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE690u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE6A0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE6B0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE6E4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE6F4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE704u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE714u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE724u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE738u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE740u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE74Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE760u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE768u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE770u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE778u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE780u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE788u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE790u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE798u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE7A0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE7ACu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE7B4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE7C8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE7D8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE7E8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE7F4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE800u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE810u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE820u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE838u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE848u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE858u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE868u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE87Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE884u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE8ACu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE8B8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE8C0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE8C8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE8D0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE8E0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE8F0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE920u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE92Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE934u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE944u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE964u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE970u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE980u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE990u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE9A0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE9B4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE9BCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE9C4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE9CCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE9E0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEA38u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEA54u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEA60u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEA68u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEA70u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEA78u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEA94u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEA9Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEAA8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEABCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEAC4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEAD8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEAE0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEB28u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEB30u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEB38u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEB40u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEB4Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEB58u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEB70u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEB84u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEB8Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEB90u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEB9Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEBA0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEBB4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEBBCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEBD0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEBD8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEBE0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEBE8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEBFCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEC04u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEC18u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEC20u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEC28u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEC30u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEC40u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEC54u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEC5Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEC70u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEC78u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEC88u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEC98u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BECA8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BECB4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BECBCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BECCCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BECDCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BED00u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BED08u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BED18u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BED28u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BED30u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BED3Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BED40u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BED54u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BED60u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BED70u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BED84u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BED9Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEDA0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEDBCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEDF4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEE0Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEE1Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEE24u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEE30u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEE3Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEE48u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEE50u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEE78u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEE80u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEE90u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEE98u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEEB8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEEC4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEECCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEED4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEF48u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEF50u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEF58u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEF68u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEF84u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEF9Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEFC8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEFD8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEFE0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEFF0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEFFCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF004u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF00Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF024u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF040u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF048u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF064u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF074u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF07Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF0A8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF0CCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF0D4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF0ECu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF0FCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF104u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF108u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF114u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF128u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF134u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF13Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF144u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF158u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF164u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF16Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF178u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF188u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF1A8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF1B8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF1D0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF1DCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF1ECu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF1F0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF200u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF20Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF214u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF23Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF260u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF278u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF280u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF288u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF290u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF298u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF2A0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF2ACu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF2B4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF2BCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF2D8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF2E0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF2F4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF2FCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF304u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF32Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF350u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF3C4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF3D0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF3E4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF3F4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF3FCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF400u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF40Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF414u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF430u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF440u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF454u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF45Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF464u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF474u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF484u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF494u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF4ACu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF4B4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF4C8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF4D0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF4ECu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF4FCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF514u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF52Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF544u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF54Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF568u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF578u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF588u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF598u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF5A8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF5C0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF5D4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF5ECu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF60Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF614u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF62Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF654u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF66Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF684u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF68Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF6A0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF6B0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF6B8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF6CCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF6ECu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF6F4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF708u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF718u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF720u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF734u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF754u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF760u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF77Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF780u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF790u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF798u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF7A8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF7B8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF7C8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF7D8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF7E0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF7F0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF7F8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF804u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF810u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF828u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF83Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF870u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF884u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF890u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF898u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF8A4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF8ACu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF8B8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF8BCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF8C4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF8D0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF8D8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF8F8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF900u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF90Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF914u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF91Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF92Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF934u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF948u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF950u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF984u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF998u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF9A4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF9A8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF9B4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF9C4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF9D4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF9DCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF9F0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFA04u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFA0Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFA24u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFA2Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFA38u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFA40u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFA48u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFA50u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFA58u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFA60u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFA70u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFA88u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFA98u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFAA8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFAB4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFAC4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFACCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFAD0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFAD8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFAE0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFAF8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFB08u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFB10u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFB14u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFB28u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFB30u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFB3Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFB44u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFB4Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFB70u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFB7Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFB94u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFBACu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFBDCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFC24u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFC30u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFC40u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFC48u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFC68u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFC78u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFC84u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFC94u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFC9Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFCA8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFCBCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFCCCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFCD4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFCE8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFCF0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFD04u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFD0Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFD1Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFD28u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFD2Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFD40u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFD4Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFD68u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFD70u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFD84u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFD98u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFDA8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFDB0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFDC0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFDC8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFDD0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFDD8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFDE4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFDF0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFE04u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFE14u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFE24u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFE34u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFE48u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFE58u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFE64u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFE6Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFE7Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFE84u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFE98u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFEA0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFEB4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFEC0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFED0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFEE0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFEECu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFEF8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFF08u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFF18u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFF30u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFF50u, &recomp_unit_0046, "recomp_unit_0046");
}
} // namespace psprecomp
