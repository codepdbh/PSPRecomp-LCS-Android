#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0179[4095] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 8, 0, 0, 9, 0,
    0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0,
    0, 0, 0, 15, 0, 16, 0, 17, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22,
    0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0,
    0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 33, 0, 0, 0, 34,
    0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0,
    40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 44, 0, 45, 0, 0, 46, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 49, 0, 50, 0, 0, 51, 0, 52, 0, 53, 0, 54, 0, 0,
    55, 0, 56, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0,
    0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 70, 0, 71, 0, 0,
    0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 76, 0, 77, 0, 0, 78, 0, 79, 0, 0, 0, 0, 80, 0,
    81, 0, 82, 0, 0, 0, 83, 84, 0, 85, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0,
    0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 94, 0, 95, 0, 0, 96, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 99, 100, 0, 101, 0, 102, 0, 0, 103, 0, 104, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 107, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0,
    0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 118,
    0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 122, 0, 0, 123,
    0, 124, 0, 125, 0, 126, 0, 127, 0, 128, 0, 0, 0, 0, 0, 129, 0, 130, 0, 131, 0, 0, 0, 0, 132, 0, 133, 0, 134, 0, 135, 136,
    0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 139, 0, 0, 140, 0, 141, 142, 143, 0, 144, 0, 145, 0, 0, 146, 0,
    0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 150, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0,
    0, 153, 0, 154, 0, 155, 0, 156, 0, 157, 0, 158, 0, 159, 0, 160, 0, 161, 0, 162, 0, 0, 0, 163, 0, 164, 0, 165, 0, 166, 0, 167,
    0, 0, 168, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 175, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 179, 0, 0, 0, 180, 0,
    0, 181, 0, 182, 0, 0, 183, 0, 0, 0, 184, 0, 185, 0, 186, 0, 187, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 191, 0,
    192, 0, 193, 0, 194, 0, 0, 195, 0, 196, 0, 0, 0, 0, 197, 0, 198, 0, 199, 0, 200, 0, 201, 0, 0, 202, 0, 0, 203, 0, 0, 204,
    0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 208, 0, 0, 0, 209, 0, 0,
    0, 0, 210, 0, 211, 0, 212, 0, 213, 0, 214, 0, 215, 0, 0, 216, 0, 217, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 220,
    0, 221, 0, 222, 0, 223, 0, 224, 0, 225, 0, 226, 0, 227, 0, 0, 228, 0, 229, 0, 230, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0,
    0, 0, 0, 0, 233, 0, 0, 234, 0, 235, 0, 0, 236, 0, 0, 237, 0, 0, 0, 238, 0, 239, 240, 0, 241, 0, 242, 0, 243, 0, 244, 0,
    245, 0, 246, 0, 247, 0, 248, 0, 249, 0, 250, 0, 251, 0, 252, 0, 253, 0, 254, 0, 255, 0, 256, 0, 0, 257, 0, 258, 0, 259, 0, 260,
    0, 261, 0, 0, 262, 0, 263, 0, 0, 264, 0, 265, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 268, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 276, 0, 277, 0, 0, 278, 0, 0, 279,
    0, 0, 0, 0, 0, 0, 280, 281, 282, 0, 283, 0, 284, 0, 0, 285, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0,
    0, 289, 0, 290, 0, 291, 0, 292, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 295, 296, 0, 297, 0, 298, 0, 299, 0, 0, 0, 300,
    0, 0, 301, 0, 302, 303, 0, 0, 304, 0, 0, 305, 0, 306, 0, 307, 0, 308, 0, 0, 309, 0, 0, 310, 0, 311, 0, 312, 0, 313, 0, 0,
    0, 314, 0, 0, 315, 0, 316, 317, 0, 0, 0, 318, 0, 0, 0, 319, 0, 320, 0, 321, 0, 0, 322, 0, 323, 324, 0, 0, 325, 0, 0, 0,
    326, 0, 327, 0, 0, 0, 328, 0, 0, 329, 0, 0, 0, 0, 330, 0, 331, 0, 332, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 336, 0,
    337, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 340, 0, 341, 0, 342, 0, 343, 0, 0, 0, 0, 344, 0, 345, 0, 346, 0,
    347, 0, 348, 0, 349, 0, 350, 0, 351, 0, 352, 0, 353, 0, 354, 0, 0, 355, 0, 356, 0, 357, 0, 0, 358, 0, 359, 0, 360, 0, 0, 361,
    0, 362, 0, 363, 0, 0, 364, 0, 365, 0, 366, 0, 367, 0, 0, 368, 0, 369, 0, 0, 0, 370, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 372, 0, 373, 0, 374, 0, 375, 0, 376, 0, 377, 0, 378, 0, 379, 0, 380, 0, 381, 0, 382, 0, 0, 0, 0, 383, 0, 384, 0, 385,
    0, 386, 0, 0, 0, 0, 0, 387, 0, 388, 0, 0, 0, 0, 389, 0, 390, 0, 0, 391, 0, 392, 0, 393, 0, 394, 0, 395, 0, 396, 0, 0,
    397, 0, 0, 0, 0, 0, 398, 0, 399, 0, 0, 400, 0, 401, 0, 402, 0, 0, 403, 0, 0, 0, 0, 0, 404, 0, 405, 0, 406, 0, 407, 0,
    0, 0, 0, 408, 0, 409, 0, 410, 0, 411, 0, 412, 0, 413, 0, 414, 0, 415, 0, 416, 0, 417, 0, 418, 0, 419, 0, 0, 0, 0, 0, 420,
    0, 0, 0, 0, 0, 421, 0, 422, 0, 423, 0, 424, 0, 0, 425, 0, 426, 0, 427, 0, 0, 0, 0, 0, 0, 428, 0, 0, 429, 0, 430, 0,
    431, 0, 432, 0, 433, 0, 0, 434, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 436, 0, 437, 0, 0, 438, 0, 439, 0, 0, 440, 0, 0,
    441, 0, 0, 0, 442, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 446, 0, 447, 0, 448, 0, 0, 0, 449, 0, 450, 0, 451, 0, 0, 0, 0, 0, 0, 0,
    452, 0, 0, 0, 0, 453, 0, 454, 0, 0, 0, 0, 0, 455, 0, 0, 0, 456, 0, 457, 458, 0, 459, 0, 0, 460, 0, 0, 461, 0, 0, 462,
    0, 463, 0, 0, 0, 0, 0, 464, 0, 465, 466, 0, 467, 0, 468, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    470, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 473, 474, 475, 0, 476, 0, 0, 477, 0, 0, 478, 0, 479,
    480, 0, 0, 0, 0, 0, 481, 0, 0, 482, 483, 0, 0, 484, 0, 0, 0, 485, 0, 486, 0, 487, 0, 0, 488, 0, 0, 489, 0, 0, 490, 0,
    0, 0, 0, 0, 491, 0, 492, 0, 493, 0, 0, 494, 0, 495, 0, 0, 496, 0, 497, 498, 0, 0, 0, 499, 0, 0, 0, 500, 0, 501, 0, 0,
    502, 0, 0, 503, 0, 0, 504, 0, 505, 0, 0, 506, 0, 507, 0, 0, 0, 0, 0, 0, 508, 0, 509, 0, 510, 0, 0, 511, 0, 0, 512, 0,
    513, 0, 514, 0, 0, 515, 0, 516, 517, 0, 0, 0, 0, 0, 518, 0, 519, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 522, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0,
    525, 0, 0, 526, 0, 527, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 532, 0, 0, 0, 0, 533, 0, 534, 0, 535, 0, 0,
    536, 0, 0, 537, 0, 538, 0, 0, 539, 0, 540, 0, 0, 0, 0, 541, 0, 0, 542, 0, 0, 543, 0, 544, 0, 0, 545, 0, 546, 0, 0, 547,
    0, 548, 0, 549, 0, 0, 550, 0, 0, 551, 0, 0, 0, 0, 0, 0, 552, 0, 553, 0, 0, 554, 0, 0, 555, 0, 0, 556, 0, 0, 0, 0,
    557, 0, 0, 558, 0, 559, 0, 0, 560, 0, 0, 561, 0, 0, 0, 0, 562, 0, 563, 0, 0, 564, 0, 0, 565, 0, 0, 0, 0, 566, 0, 567,
    0, 0, 0, 568, 0, 0, 569, 0, 0, 570, 0, 0, 0, 0, 571, 0, 572, 0, 0, 573, 0, 574, 0, 0, 575, 0, 576, 0, 0, 577, 0, 578,
    0, 0, 579, 0, 580, 0, 0, 581, 0, 582, 0, 0, 583, 0, 584, 0, 0, 585, 0, 586, 0, 0, 587, 0, 0, 588, 0, 589, 0, 0, 590, 0,
    591, 0, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 0, 594, 0, 0, 595, 0, 0, 596, 0, 0,
    0, 597, 0, 598, 0, 0, 599, 0, 0, 0, 600, 0, 0, 0, 0, 0, 601, 0, 602, 0, 603, 0, 604, 0, 605, 0, 606, 0, 607, 0, 608, 0,
    0, 0, 609, 0, 0, 610, 0, 0, 611, 0, 612, 0, 0, 613, 0, 0, 614, 0, 615, 0, 616, 0, 0, 617, 0, 618, 0, 619, 0, 620, 0, 621,
    0, 622, 0, 623, 0, 624, 0, 625, 0, 626, 0, 627, 0, 628, 0, 0, 629, 0, 0, 630, 0, 0, 631, 0, 0, 0, 632, 0, 633, 0, 0, 634,
    0, 0, 0, 635, 0, 636, 0, 0, 0, 637, 0, 638, 0, 639, 0, 640, 0, 641, 0, 642, 0, 0, 643, 0, 644, 0, 0, 645, 0, 646, 0, 647,
    0, 0, 648, 0, 649, 0, 650, 0, 651, 0, 652, 0, 653, 0, 654, 0, 0, 655, 0, 656, 0, 0, 657, 0, 0, 658, 0, 0, 659, 0, 660, 0,
    661, 0, 0, 662, 0, 663, 0, 664, 0, 665, 0, 666, 0, 0, 667, 0, 0, 668, 0, 669, 0, 670, 0, 671, 0, 672, 0, 673, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 675, 0, 0, 0, 676, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 677, 0, 0, 0, 0, 678, 0, 0, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 680, 0, 0, 0, 0, 0, 0, 0, 0, 0, 681, 0, 0, 682, 0, 0, 0, 683, 684, 0, 0, 0, 0, 0, 685, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 689,
    0, 0, 0, 690, 0, 0, 0, 0, 0, 0, 0, 0, 691, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 692, 0, 693, 0, 694, 0, 0, 0, 0, 0, 0, 0, 0, 695, 0, 696, 697, 0, 0, 0, 0, 0, 0, 0, 0, 0, 698, 0, 699,
    0, 0, 0, 700, 0, 0, 701, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 702, 0, 703, 0, 704, 0, 705, 0, 706, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 707, 0, 708, 0, 709, 0, 710, 0, 711, 0, 0, 712, 713, 714, 0, 0, 0, 0, 0, 0, 0, 715, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 716, 0, 0, 0, 0, 0, 717, 0, 0, 0, 0, 0, 0, 0, 718, 0,
    0, 0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0, 0, 0, 0, 720, 0, 0, 0, 721, 0, 0, 0, 0, 0, 722, 0, 0, 723, 0, 724, 0,
    725, 0, 726, 0, 0, 727, 0, 0, 728, 0, 0, 729, 0, 0, 0, 730, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 731, 0, 732,
    733, 0, 0, 0, 0, 734, 0, 0, 0, 0, 0, 0, 0, 0, 735, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 736,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 737, 0, 0, 738, 0, 0, 0, 0, 739, 0, 0, 0, 0, 0, 0, 0, 740,
    0, 0, 0, 0, 741, 0, 0, 0, 0, 0, 0, 0, 0, 742, 0, 743, 0, 744, 745, 0, 0, 0, 0, 746, 0, 0, 0, 0, 0, 747, 0, 748,
    0, 0, 0, 0, 749, 0, 0, 750, 0, 751, 0, 0, 0, 0, 0, 0, 752, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 753, 0, 0, 754, 0, 755, 0, 756, 0, 0, 0, 757, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 758, 0, 0,
    759, 0, 0, 760, 0, 0, 0, 0, 0, 761, 0, 762, 0, 763, 0, 0, 764, 0, 765, 0, 0, 0, 766, 0, 0, 767, 0, 768, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 769, 0, 770, 0, 0, 771, 0, 772, 0, 773, 0, 0, 0, 0, 774, 0, 0, 775, 0, 776, 0, 0, 777, 0, 778,
    0, 0, 0, 0, 779, 0, 0, 780, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 781, 0, 0, 0, 782, 783, 0, 0, 0, 0, 0,
    0, 784, 0, 0, 785, 786, 0, 0, 0, 787, 0, 0, 0, 0, 788, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 789, 0, 0, 0, 790, 0, 791, 0, 0, 0, 0, 792, 793, 0, 0, 794, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 795, 0, 0, 0, 0, 796, 0, 0, 0, 797, 0, 0, 798, 0, 0, 799, 0, 0, 800, 801, 0, 0, 0, 0, 0, 802, 0, 0,
    803, 0, 0, 804, 0, 0, 805, 806, 0, 807, 0, 808, 0, 0, 0, 0, 809, 0, 0, 0, 810, 0, 0, 0, 811, 0, 0, 0, 0, 0, 812, 0,
    813, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 814, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 815, 0, 0, 0, 0, 816,
    0, 0, 0, 0, 0, 0, 817, 0, 818, 0, 0, 0, 0, 819, 0, 0, 0, 0, 0, 0, 0, 0, 820, 0, 821, 0, 822, 0, 0, 0, 0, 823,
    0, 0, 0, 0, 0, 0, 0, 0, 824, 0, 825, 0, 0, 826, 0, 0, 827, 0, 0, 0, 0, 828, 0, 0, 0, 829, 0, 0, 0, 0, 0, 830,
    0, 0, 831, 0, 0, 0, 832, 0, 0, 0, 0, 833, 0, 0, 834, 0, 835, 0, 0, 0, 836, 0, 0, 0, 837, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 838, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 839, 0, 840, 0, 0, 0, 0, 0, 0, 841, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 842, 0, 0, 0, 0, 0, 843, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 844, 0, 0, 0, 0, 845, 0, 0, 846, 847, 0, 848, 0, 0, 0, 0, 0, 0, 849, 0,
    0, 850, 0, 851, 0, 0, 0, 0, 0, 852, 0, 0, 0, 0, 853, 0, 0, 0, 0, 854, 0, 855, 0, 0, 856, 0, 857, 0, 0, 858, 0, 0,
    0, 0, 0, 0, 859, 0, 860, 0, 0, 861, 0, 862, 0, 0, 0, 0, 863, 0, 864, 0, 0, 0, 0, 0, 0, 0, 0, 0, 865, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 866, 0, 0,
    0, 0, 867, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 868, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 869, 0, 870, 0, 871, 0, 0, 0, 872, 0, 0, 0, 0, 0, 0, 0, 0, 0, 873, 0, 0, 0,
    0, 0, 0, 0, 874, 0, 0, 875, 0, 0, 0, 0, 0, 0, 0, 0, 876, 0, 877, 0, 0, 0, 0, 878, 0, 0, 0, 0, 0, 0, 879, 0,
    880, 881, 0, 0, 0, 882, 0, 0, 0, 0, 0, 0, 883, 0, 884, 0, 0, 885, 886, 0, 0, 0, 0, 887, 0, 0, 0, 0, 0, 888, 0, 889,
    0, 0, 0, 890, 891, 0, 0, 0, 892, 0, 0, 0, 0, 0, 893, 0, 0, 0, 894, 0, 895, 896, 0, 0, 897, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 898, 0, 0, 899, 0, 0, 0, 0, 0, 900, 0, 0, 0, 0, 0, 0, 901, 0, 902, 0, 0, 0, 0,
    903, 0, 0, 904, 0, 0, 905, 0, 0, 0, 0, 0, 0, 0, 0, 906, 0, 0, 0, 0, 0, 0, 0, 0, 0, 907, 0, 908, 0, 0, 0, 0,
    909, 0, 0, 0, 910, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 911, 0, 912, 0, 0, 0, 0, 913, 0, 0, 0, 914, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 915, 0, 916, 0, 0, 0, 0, 917, 0, 0, 0, 918, 0, 0, 0, 0, 0, 0,
    0, 0, 919, 0, 920, 0, 0, 0, 0, 921, 0, 0, 0, 922, 0, 0, 0, 0, 0, 923, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 924,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 925, 0, 926, 0, 0, 0, 0, 0, 927, 0, 0, 0, 0, 0, 928, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 929, 0, 930, 0, 0, 0, 0, 931, 0, 0, 932, 0, 933, 0, 0, 934, 0, 0, 935, 0, 0, 0, 0, 0, 0, 0, 0, 936, 0, 0,
    937, 0, 0, 938, 0, 0, 939, 0, 0, 940, 0, 0, 0, 941, 0, 0, 942, 0, 943, 0, 0, 944, 0, 0, 0, 0, 945, 0, 0, 946, 0, 0,
    947, 0, 0, 948, 0, 0, 0, 949, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 950, 0, 0, 951,
    0, 0, 952, 0, 0, 953, 0, 0, 954, 0, 0, 0, 955, 0, 0, 956, 0, 957, 0, 0, 958, 0, 0, 0, 0, 959, 0, 0, 960, 0, 0, 961,
    0, 0, 962, 0, 0, 0, 963, 0, 0, 0, 964, 0, 0, 965, 0, 0, 966, 0, 0, 967, 0, 0, 968, 0, 0, 0, 0, 969, 0, 0, 970,
};
void recomp_unit_0179_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AD0000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0179[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AD0000;
    case 2u: goto L_08AD0014;
    case 3u: goto L_08AD0028;
    case 4u: goto L_08AD002C;
    case 5u: goto L_08AD0040;
    case 6u: goto L_08AD0058;
    case 7u: goto L_08AD0064;
    case 8u: goto L_08AD006C;
    case 9u: goto L_08AD0078;
    case 10u: goto L_08AD0088;
    case 11u: goto L_08AD00B4;
    case 12u: goto L_08AD00C8;
    case 13u: goto L_08AD00D4;
    case 14u: goto L_08AD00EC;
    case 15u: goto L_08AD010C;
    case 16u: goto L_08AD0114;
    case 17u: goto L_08AD011C;
    case 18u: goto L_08AD0124;
    case 19u: goto L_08AD0138;
    case 20u: goto L_08AD0148;
    case 21u: goto L_08AD0164;
    case 22u: goto L_08AD017C;
    case 23u: goto L_08AD0194;
    case 24u: goto L_08AD01B4;
    case 25u: goto L_08AD01C4;
    case 26u: goto L_08AD01E0;
    case 27u: goto L_08AD01F0;
    case 28u: goto L_08AD0210;
    case 29u: goto L_08AD0220;
    case 30u: goto L_08AD023C;
    case 31u: goto L_08AD025C;
    case 32u: goto L_08AD0264;
    case 33u: goto L_08AD026C;
    case 34u: goto L_08AD027C;
    case 35u: goto L_08AD0294;
    case 36u: goto L_08AD02B4;
    case 37u: goto L_08AD02CC;
    case 38u: goto L_08AD02D8;
    case 39u: goto L_08AD02F0;
    case 40u: goto L_08AD0300;
    case 41u: goto L_08AD031C;
    case 42u: goto L_08AD0350;
    case 43u: goto L_08AD035C;
    case 44u: goto L_08AD0388;
    case 45u: goto L_08AD0390;
    case 46u: goto L_08AD039C;
    case 47u: goto L_08AD03AC;
    case 48u: goto L_08AD03B8;
    case 49u: goto L_08AD03C8;
    case 50u: goto L_08AD03D0;
    case 51u: goto L_08AD03DC;
    case 52u: goto L_08AD03E4;
    case 53u: goto L_08AD03EC;
    case 54u: goto L_08AD03F4;
    case 55u: goto L_08AD0400;
    case 56u: goto L_08AD0408;
    case 57u: goto L_08AD0410;
    case 58u: goto L_08AD0424;
    case 59u: goto L_08AD0440;
    case 60u: goto L_08AD0578;
    case 61u: goto L_08AD05A4;
    case 62u: goto L_08AD05E0;
    case 63u: goto L_08AD0604;
    case 64u: goto L_08AD0614;
    case 65u: goto L_08AD0628;
    case 66u: goto L_08AD0634;
    case 67u: goto L_08AD0640;
    case 68u: goto L_08AD0654;
    case 69u: goto L_08AD0660;
    case 70u: goto L_08AD066C;
    case 71u: goto L_08AD0674;
    case 72u: goto L_08AD068C;
    case 73u: goto L_08AD069C;
    case 74u: goto L_08AD06A8;
    case 75u: goto L_08AD06B4;
    case 76u: goto L_08AD06C8;
    case 77u: goto L_08AD06D0;
    case 78u: goto L_08AD06DC;
    case 79u: goto L_08AD06E4;
    case 80u: goto L_08AD06F8;
    case 81u: goto L_08AD0700;
    case 82u: goto L_08AD0708;
    case 83u: goto L_08AD0718;
    case 84u: goto L_08AD071C;
    case 85u: goto L_08AD0724;
    case 86u: goto L_08AD072C;
    case 87u: goto L_08AD0744;
    case 88u: goto L_08AD075C;
    case 89u: goto L_08AD0778;
    case 90u: goto L_08AD0794;
    case 91u: goto L_08AD07A8;
    case 92u: goto L_08AD07BC;
    case 93u: goto L_08AD07D0;
    case 94u: goto L_08AD0808;
    case 95u: goto L_08AD0810;
    case 96u: goto L_08AD081C;
    case 97u: goto L_08AD0828;
    case 98u: goto L_08AD0838;
    case 99u: goto L_08AD0848;
    case 100u: goto L_08AD084C;
    case 101u: goto L_08AD0854;
    case 102u: goto L_08AD085C;
    case 103u: goto L_08AD0868;
    case 104u: goto L_08AD0870;
    case 105u: goto L_08AD089C;
    case 106u: goto L_08AD08AC;
    case 107u: goto L_08AD08B4;
    case 108u: goto L_08AD08C4;
    case 109u: goto L_08AD08D4;
    case 110u: goto L_08AD08E4;
    case 111u: goto L_08AD08F4;
    case 112u: goto L_08AD0904;
    case 113u: goto L_08AD0914;
    case 114u: goto L_08AD092C;
    case 115u: goto L_08AD0944;
    case 116u: goto L_08AD0958;
    case 117u: goto L_08AD0968;
    case 118u: goto L_08AD097C;
    case 119u: goto L_08AD09A0;
    case 120u: goto L_08AD09D8;
    case 121u: goto L_08AD09E8;
    case 122u: goto L_08AD09F0;
    case 123u: goto L_08AD09FC;
    case 124u: goto L_08AD0A04;
    case 125u: goto L_08AD0A0C;
    case 126u: goto L_08AD0A14;
    case 127u: goto L_08AD0A1C;
    case 128u: goto L_08AD0A24;
    case 129u: goto L_08AD0A3C;
    case 130u: goto L_08AD0A44;
    case 131u: goto L_08AD0A4C;
    case 132u: goto L_08AD0A60;
    case 133u: goto L_08AD0A68;
    case 134u: goto L_08AD0A70;
    case 135u: goto L_08AD0A78;
    case 136u: goto L_08AD0A7C;
    case 137u: goto L_08AD0A90;
    case 138u: goto L_08AD0AB4;
    case 139u: goto L_08AD0AC0;
    case 140u: goto L_08AD0ACC;
    case 141u: goto L_08AD0AD4;
    case 142u: goto L_08AD0AD8;
    case 143u: goto L_08AD0ADC;
    case 144u: goto L_08AD0AE4;
    case 145u: goto L_08AD0AEC;
    case 146u: goto L_08AD0AF8;
    case 147u: goto L_08AD0B04;
    case 148u: goto L_08AD0B20;
    case 149u: goto L_08AD0B3C;
    case 150u: goto L_08AD0B44;
    case 151u: goto L_08AD0B50;
    case 152u: goto L_08AD0B6C;
    case 153u: goto L_08AD0B84;
    case 154u: goto L_08AD0B8C;
    case 155u: goto L_08AD0B94;
    case 156u: goto L_08AD0B9C;
    case 157u: goto L_08AD0BA4;
    case 158u: goto L_08AD0BAC;
    case 159u: goto L_08AD0BB4;
    case 160u: goto L_08AD0BBC;
    case 161u: goto L_08AD0BC4;
    case 162u: goto L_08AD0BCC;
    case 163u: goto L_08AD0BDC;
    case 164u: goto L_08AD0BE4;
    case 165u: goto L_08AD0BEC;
    case 166u: goto L_08AD0BF4;
    case 167u: goto L_08AD0BFC;
    case 168u: goto L_08AD0C08;
    case 169u: goto L_08AD0C14;
    case 170u: goto L_08AD0C20;
    case 171u: goto L_08AD0C34;
    case 172u: goto L_08AD0C58;
    case 173u: goto L_08AD0C88;
    case 174u: goto L_08AD0CA0;
    case 175u: goto L_08AD0CA8;
    case 176u: goto L_08AD0CB0;
    case 177u: goto L_08AD0CC8;
    case 178u: goto L_08AD0CE0;
    case 179u: goto L_08AD0CE8;
    case 180u: goto L_08AD0CF8;
    case 181u: goto L_08AD0D04;
    case 182u: goto L_08AD0D0C;
    case 183u: goto L_08AD0D18;
    case 184u: goto L_08AD0D28;
    case 185u: goto L_08AD0D30;
    case 186u: goto L_08AD0D38;
    case 187u: goto L_08AD0D40;
    case 188u: goto L_08AD0D48;
    case 189u: goto L_08AD0D58;
    case 190u: goto L_08AD0D70;
    case 191u: goto L_08AD0D78;
    case 192u: goto L_08AD0D80;
    case 193u: goto L_08AD0D88;
    case 194u: goto L_08AD0D90;
    case 195u: goto L_08AD0D9C;
    case 196u: goto L_08AD0DA4;
    case 197u: goto L_08AD0DB8;
    case 198u: goto L_08AD0DC0;
    case 199u: goto L_08AD0DC8;
    case 200u: goto L_08AD0DD0;
    case 201u: goto L_08AD0DD8;
    case 202u: goto L_08AD0DE4;
    case 203u: goto L_08AD0DF0;
    case 204u: goto L_08AD0DFC;
    case 205u: goto L_08AD0E18;
    case 206u: goto L_08AD0E34;
    case 207u: goto L_08AD0E5C;
    case 208u: goto L_08AD0E64;
    case 209u: goto L_08AD0E74;
    case 210u: goto L_08AD0E88;
    case 211u: goto L_08AD0E90;
    case 212u: goto L_08AD0E98;
    case 213u: goto L_08AD0EA0;
    case 214u: goto L_08AD0EA8;
    case 215u: goto L_08AD0EB0;
    case 216u: goto L_08AD0EBC;
    case 217u: goto L_08AD0EC4;
    case 218u: goto L_08AD0ECC;
    case 219u: goto L_08AD0ED8;
    case 220u: goto L_08AD0EFC;
    case 221u: goto L_08AD0F04;
    case 222u: goto L_08AD0F0C;
    case 223u: goto L_08AD0F14;
    case 224u: goto L_08AD0F1C;
    case 225u: goto L_08AD0F24;
    case 226u: goto L_08AD0F2C;
    case 227u: goto L_08AD0F34;
    case 228u: goto L_08AD0F40;
    case 229u: goto L_08AD0F48;
    case 230u: goto L_08AD0F50;
    case 231u: goto L_08AD0F5C;
    case 232u: goto L_08AD0F78;
    case 233u: goto L_08AD0F90;
    case 234u: goto L_08AD0F9C;
    case 235u: goto L_08AD0FA4;
    case 236u: goto L_08AD0FB0;
    case 237u: goto L_08AD0FBC;
    case 238u: goto L_08AD0FCC;
    case 239u: goto L_08AD0FD4;
    case 240u: goto L_08AD0FD8;
    case 241u: goto L_08AD0FE0;
    case 242u: goto L_08AD0FE8;
    case 243u: goto L_08AD0FF0;
    case 244u: goto L_08AD0FF8;
    case 245u: goto L_08AD1000;
    case 246u: goto L_08AD1008;
    case 247u: goto L_08AD1010;
    case 248u: goto L_08AD1018;
    case 249u: goto L_08AD1020;
    case 250u: goto L_08AD1028;
    case 251u: goto L_08AD1030;
    case 252u: goto L_08AD1038;
    case 253u: goto L_08AD1040;
    case 254u: goto L_08AD1048;
    case 255u: goto L_08AD1050;
    case 256u: goto L_08AD1058;
    case 257u: goto L_08AD1064;
    case 258u: goto L_08AD106C;
    case 259u: goto L_08AD1074;
    case 260u: goto L_08AD107C;
    case 261u: goto L_08AD1084;
    case 262u: goto L_08AD1090;
    case 263u: goto L_08AD1098;
    case 264u: goto L_08AD10A4;
    case 265u: goto L_08AD10AC;
    case 266u: goto L_08AD10B8;
    case 267u: goto L_08AD10DC;
    case 268u: goto L_08AD10E4;
    case 269u: goto L_08AD1118;
    case 270u: goto L_08AD1140;
    case 271u: goto L_08AD1180;
    case 272u: goto L_08AD11A8;
    case 273u: goto L_08AD11B0;
    case 274u: goto L_08AD11C4;
    case 275u: goto L_08AD11D4;
    case 276u: goto L_08AD11DC;
    case 277u: goto L_08AD11E4;
    case 278u: goto L_08AD11F0;
    case 279u: goto L_08AD11FC;
    case 280u: goto L_08AD1218;
    case 281u: goto L_08AD121C;
    case 282u: goto L_08AD1220;
    case 283u: goto L_08AD1228;
    case 284u: goto L_08AD1230;
    case 285u: goto L_08AD123C;
    case 286u: goto L_08AD1244;
    case 287u: goto L_08AD1260;
    case 288u: goto L_08AD1278;
    case 289u: goto L_08AD1284;
    case 290u: goto L_08AD128C;
    case 291u: goto L_08AD1294;
    case 292u: goto L_08AD129C;
    case 293u: goto L_08AD12B8;
    case 294u: goto L_08AD12C8;
    case 295u: goto L_08AD12D0;
    case 296u: goto L_08AD12D4;
    case 297u: goto L_08AD12DC;
    case 298u: goto L_08AD12E4;
    case 299u: goto L_08AD12EC;
    case 300u: goto L_08AD12FC;
    case 301u: goto L_08AD1308;
    case 302u: goto L_08AD1310;
    case 303u: goto L_08AD1314;
    case 304u: goto L_08AD1320;
    case 305u: goto L_08AD132C;
    case 306u: goto L_08AD1334;
    case 307u: goto L_08AD133C;
    case 308u: goto L_08AD1344;
    case 309u: goto L_08AD1350;
    case 310u: goto L_08AD135C;
    case 311u: goto L_08AD1364;
    case 312u: goto L_08AD136C;
    case 313u: goto L_08AD1374;
    case 314u: goto L_08AD1384;
    case 315u: goto L_08AD1390;
    case 316u: goto L_08AD1398;
    case 317u: goto L_08AD139C;
    case 318u: goto L_08AD13AC;
    case 319u: goto L_08AD13BC;
    case 320u: goto L_08AD13C4;
    case 321u: goto L_08AD13CC;
    case 322u: goto L_08AD13D8;
    case 323u: goto L_08AD13E0;
    case 324u: goto L_08AD13E4;
    case 325u: goto L_08AD13F0;
    case 326u: goto L_08AD1400;
    case 327u: goto L_08AD1408;
    case 328u: goto L_08AD1418;
    case 329u: goto L_08AD1424;
    case 330u: goto L_08AD1438;
    case 331u: goto L_08AD1440;
    case 332u: goto L_08AD1448;
    case 333u: goto L_08AD1450;
    case 334u: goto L_08AD1480;
    case 335u: goto L_08AD14E8;
    case 336u: goto L_08AD14F8;
    case 337u: goto L_08AD1500;
    case 338u: goto L_08AD151C;
    case 339u: goto L_08AD1534;
    case 340u: goto L_08AD153C;
    case 341u: goto L_08AD1544;
    case 342u: goto L_08AD154C;
    case 343u: goto L_08AD1554;
    case 344u: goto L_08AD1568;
    case 345u: goto L_08AD1570;
    case 346u: goto L_08AD1578;
    case 347u: goto L_08AD1580;
    case 348u: goto L_08AD1588;
    case 349u: goto L_08AD1590;
    case 350u: goto L_08AD1598;
    case 351u: goto L_08AD15A0;
    case 352u: goto L_08AD15A8;
    case 353u: goto L_08AD15B0;
    case 354u: goto L_08AD15B8;
    case 355u: goto L_08AD15C4;
    case 356u: goto L_08AD15CC;
    case 357u: goto L_08AD15D4;
    case 358u: goto L_08AD15E0;
    case 359u: goto L_08AD15E8;
    case 360u: goto L_08AD15F0;
    case 361u: goto L_08AD15FC;
    case 362u: goto L_08AD1604;
    case 363u: goto L_08AD160C;
    case 364u: goto L_08AD1618;
    case 365u: goto L_08AD1620;
    case 366u: goto L_08AD1628;
    case 367u: goto L_08AD1630;
    case 368u: goto L_08AD163C;
    case 369u: goto L_08AD1644;
    case 370u: goto L_08AD1654;
    case 371u: goto L_08AD1660;
    case 372u: goto L_08AD1688;
    case 373u: goto L_08AD1690;
    case 374u: goto L_08AD1698;
    case 375u: goto L_08AD16A0;
    case 376u: goto L_08AD16A8;
    case 377u: goto L_08AD16B0;
    case 378u: goto L_08AD16B8;
    case 379u: goto L_08AD16C0;
    case 380u: goto L_08AD16C8;
    case 381u: goto L_08AD16D0;
    case 382u: goto L_08AD16D8;
    case 383u: goto L_08AD16EC;
    case 384u: goto L_08AD16F4;
    case 385u: goto L_08AD16FC;
    case 386u: goto L_08AD1704;
    case 387u: goto L_08AD171C;
    case 388u: goto L_08AD1724;
    case 389u: goto L_08AD1738;
    case 390u: goto L_08AD1740;
    case 391u: goto L_08AD174C;
    case 392u: goto L_08AD1754;
    case 393u: goto L_08AD175C;
    case 394u: goto L_08AD1764;
    case 395u: goto L_08AD176C;
    case 396u: goto L_08AD1774;
    case 397u: goto L_08AD1780;
    case 398u: goto L_08AD1798;
    case 399u: goto L_08AD17A0;
    case 400u: goto L_08AD17AC;
    case 401u: goto L_08AD17B4;
    case 402u: goto L_08AD17BC;
    case 403u: goto L_08AD17C8;
    case 404u: goto L_08AD17E0;
    case 405u: goto L_08AD17E8;
    case 406u: goto L_08AD17F0;
    case 407u: goto L_08AD17F8;
    case 408u: goto L_08AD180C;
    case 409u: goto L_08AD1814;
    case 410u: goto L_08AD181C;
    case 411u: goto L_08AD1824;
    case 412u: goto L_08AD182C;
    case 413u: goto L_08AD1834;
    case 414u: goto L_08AD183C;
    case 415u: goto L_08AD1844;
    case 416u: goto L_08AD184C;
    case 417u: goto L_08AD1854;
    case 418u: goto L_08AD185C;
    case 419u: goto L_08AD1864;
    case 420u: goto L_08AD187C;
    case 421u: goto L_08AD1894;
    case 422u: goto L_08AD189C;
    case 423u: goto L_08AD18A4;
    case 424u: goto L_08AD18AC;
    case 425u: goto L_08AD18B8;
    case 426u: goto L_08AD18C0;
    case 427u: goto L_08AD18C8;
    case 428u: goto L_08AD18E4;
    case 429u: goto L_08AD18F0;
    case 430u: goto L_08AD18F8;
    case 431u: goto L_08AD1900;
    case 432u: goto L_08AD1908;
    case 433u: goto L_08AD1910;
    case 434u: goto L_08AD191C;
    case 435u: goto L_08AD1934;
    case 436u: goto L_08AD194C;
    case 437u: goto L_08AD1954;
    case 438u: goto L_08AD1960;
    case 439u: goto L_08AD1968;
    case 440u: goto L_08AD1974;
    case 441u: goto L_08AD1980;
    case 442u: goto L_08AD1990;
    case 443u: goto L_08AD199C;
    case 444u: goto L_08AD19D0;
    case 445u: goto L_08AD1A24;
    case 446u: goto L_08AD1A30;
    case 447u: goto L_08AD1A38;
    case 448u: goto L_08AD1A40;
    case 449u: goto L_08AD1A50;
    case 450u: goto L_08AD1A58;
    case 451u: goto L_08AD1A60;
    case 452u: goto L_08AD1A80;
    case 453u: goto L_08AD1A94;
    case 454u: goto L_08AD1A9C;
    case 455u: goto L_08AD1AB4;
    case 456u: goto L_08AD1AC4;
    case 457u: goto L_08AD1ACC;
    case 458u: goto L_08AD1AD0;
    case 459u: goto L_08AD1AD8;
    case 460u: goto L_08AD1AE4;
    case 461u: goto L_08AD1AF0;
    case 462u: goto L_08AD1AFC;
    case 463u: goto L_08AD1B04;
    case 464u: goto L_08AD1B1C;
    case 465u: goto L_08AD1B24;
    case 466u: goto L_08AD1B28;
    case 467u: goto L_08AD1B30;
    case 468u: goto L_08AD1B38;
    case 469u: goto L_08AD1B4C;
    case 470u: goto L_08AD1B80;
    case 471u: goto L_08AD1B8C;
    case 472u: goto L_08AD1BB0;
    case 473u: goto L_08AD1BCC;
    case 474u: goto L_08AD1BD0;
    case 475u: goto L_08AD1BD4;
    case 476u: goto L_08AD1BDC;
    case 477u: goto L_08AD1BE8;
    case 478u: goto L_08AD1BF4;
    case 479u: goto L_08AD1BFC;
    case 480u: goto L_08AD1C00;
    case 481u: goto L_08AD1C18;
    case 482u: goto L_08AD1C24;
    case 483u: goto L_08AD1C28;
    case 484u: goto L_08AD1C34;
    case 485u: goto L_08AD1C44;
    case 486u: goto L_08AD1C4C;
    case 487u: goto L_08AD1C54;
    case 488u: goto L_08AD1C60;
    case 489u: goto L_08AD1C6C;
    case 490u: goto L_08AD1C78;
    case 491u: goto L_08AD1C90;
    case 492u: goto L_08AD1C98;
    case 493u: goto L_08AD1CA0;
    case 494u: goto L_08AD1CAC;
    case 495u: goto L_08AD1CB4;
    case 496u: goto L_08AD1CC0;
    case 497u: goto L_08AD1CC8;
    case 498u: goto L_08AD1CCC;
    case 499u: goto L_08AD1CDC;
    case 500u: goto L_08AD1CEC;
    case 501u: goto L_08AD1CF4;
    case 502u: goto L_08AD1D00;
    case 503u: goto L_08AD1D0C;
    case 504u: goto L_08AD1D18;
    case 505u: goto L_08AD1D20;
    case 506u: goto L_08AD1D2C;
    case 507u: goto L_08AD1D34;
    case 508u: goto L_08AD1D50;
    case 509u: goto L_08AD1D58;
    case 510u: goto L_08AD1D60;
    case 511u: goto L_08AD1D6C;
    case 512u: goto L_08AD1D78;
    case 513u: goto L_08AD1D80;
    case 514u: goto L_08AD1D88;
    case 515u: goto L_08AD1D94;
    case 516u: goto L_08AD1D9C;
    case 517u: goto L_08AD1DA0;
    case 518u: goto L_08AD1DB8;
    case 519u: goto L_08AD1DC0;
    case 520u: goto L_08AD1DD4;
    case 521u: goto L_08AD1E24;
    case 522u: goto L_08AD1E30;
    case 523u: goto L_08AD1E44;
    case 524u: goto L_08AD1E70;
    case 525u: goto L_08AD1E80;
    case 526u: goto L_08AD1E8C;
    case 527u: goto L_08AD1E94;
    case 528u: goto L_08AD1EA8;
    case 529u: goto L_08AD1ED0;
    case 530u: goto L_08AD1EF0;
    case 531u: goto L_08AD1F44;
    case 532u: goto L_08AD1F50;
    case 533u: goto L_08AD1F64;
    case 534u: goto L_08AD1F6C;
    case 535u: goto L_08AD1F74;
    case 536u: goto L_08AD1F80;
    case 537u: goto L_08AD1F8C;
    case 538u: goto L_08AD1F94;
    case 539u: goto L_08AD1FA0;
    case 540u: goto L_08AD1FA8;
    case 541u: goto L_08AD1FBC;
    case 542u: goto L_08AD1FC8;
    case 543u: goto L_08AD1FD4;
    case 544u: goto L_08AD1FDC;
    case 545u: goto L_08AD1FE8;
    case 546u: goto L_08AD1FF0;
    case 547u: goto L_08AD1FFC;
    case 548u: goto L_08AD2004;
    case 549u: goto L_08AD200C;
    case 550u: goto L_08AD2018;
    case 551u: goto L_08AD2024;
    case 552u: goto L_08AD2040;
    case 553u: goto L_08AD2048;
    case 554u: goto L_08AD2054;
    case 555u: goto L_08AD2060;
    case 556u: goto L_08AD206C;
    case 557u: goto L_08AD2080;
    case 558u: goto L_08AD208C;
    case 559u: goto L_08AD2094;
    case 560u: goto L_08AD20A0;
    case 561u: goto L_08AD20AC;
    case 562u: goto L_08AD20C0;
    case 563u: goto L_08AD20C8;
    case 564u: goto L_08AD20D4;
    case 565u: goto L_08AD20E0;
    case 566u: goto L_08AD20F4;
    case 567u: goto L_08AD20FC;
    case 568u: goto L_08AD210C;
    case 569u: goto L_08AD2118;
    case 570u: goto L_08AD2124;
    case 571u: goto L_08AD2138;
    case 572u: goto L_08AD2140;
    case 573u: goto L_08AD214C;
    case 574u: goto L_08AD2154;
    case 575u: goto L_08AD2160;
    case 576u: goto L_08AD2168;
    case 577u: goto L_08AD2174;
    case 578u: goto L_08AD217C;
    case 579u: goto L_08AD2188;
    case 580u: goto L_08AD2190;
    case 581u: goto L_08AD219C;
    case 582u: goto L_08AD21A4;
    case 583u: goto L_08AD21B0;
    case 584u: goto L_08AD21B8;
    case 585u: goto L_08AD21C4;
    case 586u: goto L_08AD21CC;
    case 587u: goto L_08AD21D8;
    case 588u: goto L_08AD21E4;
    case 589u: goto L_08AD21EC;
    case 590u: goto L_08AD21F8;
    case 591u: goto L_08AD2200;
    case 592u: goto L_08AD2214;
    case 593u: goto L_08AD2250;
    case 594u: goto L_08AD225C;
    case 595u: goto L_08AD2268;
    case 596u: goto L_08AD2274;
    case 597u: goto L_08AD2284;
    case 598u: goto L_08AD228C;
    case 599u: goto L_08AD2298;
    case 600u: goto L_08AD22A8;
    case 601u: goto L_08AD22C0;
    case 602u: goto L_08AD22C8;
    case 603u: goto L_08AD22D0;
    case 604u: goto L_08AD22D8;
    case 605u: goto L_08AD22E0;
    case 606u: goto L_08AD22E8;
    case 607u: goto L_08AD22F0;
    case 608u: goto L_08AD22F8;
    case 609u: goto L_08AD2308;
    case 610u: goto L_08AD2314;
    case 611u: goto L_08AD2320;
    case 612u: goto L_08AD2328;
    case 613u: goto L_08AD2334;
    case 614u: goto L_08AD2340;
    case 615u: goto L_08AD2348;
    case 616u: goto L_08AD2350;
    case 617u: goto L_08AD235C;
    case 618u: goto L_08AD2364;
    case 619u: goto L_08AD236C;
    case 620u: goto L_08AD2374;
    case 621u: goto L_08AD237C;
    case 622u: goto L_08AD2384;
    case 623u: goto L_08AD238C;
    case 624u: goto L_08AD2394;
    case 625u: goto L_08AD239C;
    case 626u: goto L_08AD23A4;
    case 627u: goto L_08AD23AC;
    case 628u: goto L_08AD23B4;
    case 629u: goto L_08AD23C0;
    case 630u: goto L_08AD23CC;
    case 631u: goto L_08AD23D8;
    case 632u: goto L_08AD23E8;
    case 633u: goto L_08AD23F0;
    case 634u: goto L_08AD23FC;
    case 635u: goto L_08AD240C;
    case 636u: goto L_08AD2414;
    case 637u: goto L_08AD2424;
    case 638u: goto L_08AD242C;
    case 639u: goto L_08AD2434;
    case 640u: goto L_08AD243C;
    case 641u: goto L_08AD2444;
    case 642u: goto L_08AD244C;
    case 643u: goto L_08AD2458;
    case 644u: goto L_08AD2460;
    case 645u: goto L_08AD246C;
    case 646u: goto L_08AD2474;
    case 647u: goto L_08AD247C;
    case 648u: goto L_08AD2488;
    case 649u: goto L_08AD2490;
    case 650u: goto L_08AD2498;
    case 651u: goto L_08AD24A0;
    case 652u: goto L_08AD24A8;
    case 653u: goto L_08AD24B0;
    case 654u: goto L_08AD24B8;
    case 655u: goto L_08AD24C4;
    case 656u: goto L_08AD24CC;
    case 657u: goto L_08AD24D8;
    case 658u: goto L_08AD24E4;
    case 659u: goto L_08AD24F0;
    case 660u: goto L_08AD24F8;
    case 661u: goto L_08AD2500;
    case 662u: goto L_08AD250C;
    case 663u: goto L_08AD2514;
    case 664u: goto L_08AD251C;
    case 665u: goto L_08AD2524;
    case 666u: goto L_08AD252C;
    case 667u: goto L_08AD2538;
    case 668u: goto L_08AD2544;
    case 669u: goto L_08AD254C;
    case 670u: goto L_08AD2554;
    case 671u: goto L_08AD255C;
    case 672u: goto L_08AD2564;
    case 673u: goto L_08AD256C;
    case 674u: goto L_08AD259C;
    case 675u: goto L_08AD2690;
    case 676u: goto L_08AD26A0;
    case 677u: goto L_08AD2720;
    case 678u: goto L_08AD2734;
    case 679u: goto L_08AD2750;
    case 680u: goto L_08AD278C;
    case 681u: goto L_08AD27B4;
    case 682u: goto L_08AD27C0;
    case 683u: goto L_08AD27D0;
    case 684u: goto L_08AD27D4;
    case 685u: goto L_08AD27EC;
    case 686u: goto L_08AD2818;
    case 687u: goto L_08AD2850;
    case 688u: goto L_08AD2868;
    case 689u: goto L_08AD287C;
    case 690u: goto L_08AD288C;
    case 691u: goto L_08AD28B0;
    case 692u: goto L_08AD290C;
    case 693u: goto L_08AD2914;
    case 694u: goto L_08AD291C;
    case 695u: goto L_08AD2940;
    case 696u: goto L_08AD2948;
    case 697u: goto L_08AD294C;
    case 698u: goto L_08AD2974;
    case 699u: goto L_08AD297C;
    case 700u: goto L_08AD298C;
    case 701u: goto L_08AD2998;
    case 702u: goto L_08AD29CC;
    case 703u: goto L_08AD29D4;
    case 704u: goto L_08AD29DC;
    case 705u: goto L_08AD29E4;
    case 706u: goto L_08AD29EC;
    case 707u: goto L_08AD2A14;
    case 708u: goto L_08AD2A1C;
    case 709u: goto L_08AD2A24;
    case 710u: goto L_08AD2A2C;
    case 711u: goto L_08AD2A34;
    case 712u: goto L_08AD2A40;
    case 713u: goto L_08AD2A44;
    case 714u: goto L_08AD2A48;
    case 715u: goto L_08AD2A68;
    case 716u: goto L_08AD2AC0;
    case 717u: goto L_08AD2AD8;
    case 718u: goto L_08AD2AF8;
    case 719u: goto L_08AD2B1C;
    case 720u: goto L_08AD2B3C;
    case 721u: goto L_08AD2B4C;
    case 722u: goto L_08AD2B64;
    case 723u: goto L_08AD2B70;
    case 724u: goto L_08AD2B78;
    case 725u: goto L_08AD2B80;
    case 726u: goto L_08AD2B88;
    case 727u: goto L_08AD2B94;
    case 728u: goto L_08AD2BA0;
    case 729u: goto L_08AD2BAC;
    case 730u: goto L_08AD2BBC;
    case 731u: goto L_08AD2BF4;
    case 732u: goto L_08AD2BFC;
    case 733u: goto L_08AD2C00;
    case 734u: goto L_08AD2C14;
    case 735u: goto L_08AD2C38;
    case 736u: goto L_08AD2C7C;
    case 737u: goto L_08AD2CBC;
    case 738u: goto L_08AD2CC8;
    case 739u: goto L_08AD2CDC;
    case 740u: goto L_08AD2CFC;
    case 741u: goto L_08AD2D10;
    case 742u: goto L_08AD2D34;
    case 743u: goto L_08AD2D3C;
    case 744u: goto L_08AD2D44;
    case 745u: goto L_08AD2D48;
    case 746u: goto L_08AD2D5C;
    case 747u: goto L_08AD2D74;
    case 748u: goto L_08AD2D7C;
    case 749u: goto L_08AD2D90;
    case 750u: goto L_08AD2D9C;
    case 751u: goto L_08AD2DA4;
    case 752u: goto L_08AD2DC0;
    case 753u: goto L_08AD2E10;
    case 754u: goto L_08AD2E1C;
    case 755u: goto L_08AD2E24;
    case 756u: goto L_08AD2E2C;
    case 757u: goto L_08AD2E3C;
    case 758u: goto L_08AD2E74;
    case 759u: goto L_08AD2E80;
    case 760u: goto L_08AD2E8C;
    case 761u: goto L_08AD2EA4;
    case 762u: goto L_08AD2EAC;
    case 763u: goto L_08AD2EB4;
    case 764u: goto L_08AD2EC0;
    case 765u: goto L_08AD2EC8;
    case 766u: goto L_08AD2ED8;
    case 767u: goto L_08AD2EE4;
    case 768u: goto L_08AD2EEC;
    case 769u: goto L_08AD2F1C;
    case 770u: goto L_08AD2F24;
    case 771u: goto L_08AD2F30;
    case 772u: goto L_08AD2F38;
    case 773u: goto L_08AD2F40;
    case 774u: goto L_08AD2F54;
    case 775u: goto L_08AD2F60;
    case 776u: goto L_08AD2F68;
    case 777u: goto L_08AD2F74;
    case 778u: goto L_08AD2F7C;
    case 779u: goto L_08AD2F90;
    case 780u: goto L_08AD2F9C;
    case 781u: goto L_08AD2FD4;
    case 782u: goto L_08AD2FE4;
    case 783u: goto L_08AD2FE8;
    case 784u: goto L_08AD3004;
    case 785u: goto L_08AD3010;
    case 786u: goto L_08AD3014;
    case 787u: goto L_08AD3024;
    case 788u: goto L_08AD3038;
    case 789u: goto L_08AD3090;
    case 790u: goto L_08AD30A0;
    case 791u: goto L_08AD30A8;
    case 792u: goto L_08AD30BC;
    case 793u: goto L_08AD30C0;
    case 794u: goto L_08AD30CC;
    case 795u: goto L_08AD3110;
    case 796u: goto L_08AD3124;
    case 797u: goto L_08AD3134;
    case 798u: goto L_08AD3140;
    case 799u: goto L_08AD314C;
    case 800u: goto L_08AD3158;
    case 801u: goto L_08AD315C;
    case 802u: goto L_08AD3174;
    case 803u: goto L_08AD3180;
    case 804u: goto L_08AD318C;
    case 805u: goto L_08AD3198;
    case 806u: goto L_08AD319C;
    case 807u: goto L_08AD31A4;
    case 808u: goto L_08AD31AC;
    case 809u: goto L_08AD31C0;
    case 810u: goto L_08AD31D0;
    case 811u: goto L_08AD31E0;
    case 812u: goto L_08AD31F8;
    case 813u: goto L_08AD3200;
    case 814u: goto L_08AD322C;
    case 815u: goto L_08AD3268;
    case 816u: goto L_08AD327C;
    case 817u: goto L_08AD3298;
    case 818u: goto L_08AD32A0;
    case 819u: goto L_08AD32B4;
    case 820u: goto L_08AD32D8;
    case 821u: goto L_08AD32E0;
    case 822u: goto L_08AD32E8;
    case 823u: goto L_08AD32FC;
    case 824u: goto L_08AD3320;
    case 825u: goto L_08AD3328;
    case 826u: goto L_08AD3334;
    case 827u: goto L_08AD3340;
    case 828u: goto L_08AD3354;
    case 829u: goto L_08AD3364;
    case 830u: goto L_08AD337C;
    case 831u: goto L_08AD3388;
    case 832u: goto L_08AD3398;
    case 833u: goto L_08AD33AC;
    case 834u: goto L_08AD33B8;
    case 835u: goto L_08AD33C0;
    case 836u: goto L_08AD33D0;
    case 837u: goto L_08AD33E0;
    case 838u: goto L_08AD3420;
    case 839u: goto L_08AD34B4;
    case 840u: goto L_08AD34BC;
    case 841u: goto L_08AD34D8;
    case 842u: goto L_08AD354C;
    case 843u: goto L_08AD3564;
    case 844u: goto L_08AD35B0;
    case 845u: goto L_08AD35C4;
    case 846u: goto L_08AD35D0;
    case 847u: goto L_08AD35D4;
    case 848u: goto L_08AD35DC;
    case 849u: goto L_08AD35F8;
    case 850u: goto L_08AD3604;
    case 851u: goto L_08AD360C;
    case 852u: goto L_08AD3624;
    case 853u: goto L_08AD3638;
    case 854u: goto L_08AD364C;
    case 855u: goto L_08AD3654;
    case 856u: goto L_08AD3660;
    case 857u: goto L_08AD3668;
    case 858u: goto L_08AD3674;
    case 859u: goto L_08AD3690;
    case 860u: goto L_08AD3698;
    case 861u: goto L_08AD36A4;
    case 862u: goto L_08AD36AC;
    case 863u: goto L_08AD36C0;
    case 864u: goto L_08AD36C8;
    case 865u: goto L_08AD36F0;
    case 866u: goto L_08AD3774;
    case 867u: goto L_08AD3788;
    case 868u: goto L_08AD37C4;
    case 869u: goto L_08AD3828;
    case 870u: goto L_08AD3830;
    case 871u: goto L_08AD3838;
    case 872u: goto L_08AD3848;
    case 873u: goto L_08AD3870;
    case 874u: goto L_08AD3890;
    case 875u: goto L_08AD389C;
    case 876u: goto L_08AD38C0;
    case 877u: goto L_08AD38C8;
    case 878u: goto L_08AD38DC;
    case 879u: goto L_08AD38F8;
    case 880u: goto L_08AD3900;
    case 881u: goto L_08AD3904;
    case 882u: goto L_08AD3914;
    case 883u: goto L_08AD3930;
    case 884u: goto L_08AD3938;
    case 885u: goto L_08AD3944;
    case 886u: goto L_08AD3948;
    case 887u: goto L_08AD395C;
    case 888u: goto L_08AD3974;
    case 889u: goto L_08AD397C;
    case 890u: goto L_08AD398C;
    case 891u: goto L_08AD3990;
    case 892u: goto L_08AD39A0;
    case 893u: goto L_08AD39B8;
    case 894u: goto L_08AD39C8;
    case 895u: goto L_08AD39D0;
    case 896u: goto L_08AD39D4;
    case 897u: goto L_08AD39E0;
    case 898u: goto L_08AD3A24;
    case 899u: goto L_08AD3A30;
    case 900u: goto L_08AD3A48;
    case 901u: goto L_08AD3A64;
    case 902u: goto L_08AD3A6C;
    case 903u: goto L_08AD3A80;
    case 904u: goto L_08AD3A8C;
    case 905u: goto L_08AD3A98;
    case 906u: goto L_08AD3ABC;
    case 907u: goto L_08AD3AE4;
    case 908u: goto L_08AD3AEC;
    case 909u: goto L_08AD3B00;
    case 910u: goto L_08AD3B10;
    case 911u: goto L_08AD3B3C;
    case 912u: goto L_08AD3B44;
    case 913u: goto L_08AD3B58;
    case 914u: goto L_08AD3B68;
    case 915u: goto L_08AD3BB8;
    case 916u: goto L_08AD3BC0;
    case 917u: goto L_08AD3BD4;
    case 918u: goto L_08AD3BE4;
    case 919u: goto L_08AD3C08;
    case 920u: goto L_08AD3C10;
    case 921u: goto L_08AD3C24;
    case 922u: goto L_08AD3C34;
    case 923u: goto L_08AD3C4C;
    case 924u: goto L_08AD3C7C;
    case 925u: goto L_08AD3D08;
    case 926u: goto L_08AD3D10;
    case 927u: goto L_08AD3D28;
    case 928u: goto L_08AD3D40;
    case 929u: goto L_08AD3D88;
    case 930u: goto L_08AD3D90;
    case 931u: goto L_08AD3DA4;
    case 932u: goto L_08AD3DB0;
    case 933u: goto L_08AD3DB8;
    case 934u: goto L_08AD3DC4;
    case 935u: goto L_08AD3DD0;
    case 936u: goto L_08AD3DF4;
    case 937u: goto L_08AD3E00;
    case 938u: goto L_08AD3E0C;
    case 939u: goto L_08AD3E18;
    case 940u: goto L_08AD3E24;
    case 941u: goto L_08AD3E34;
    case 942u: goto L_08AD3E40;
    case 943u: goto L_08AD3E48;
    case 944u: goto L_08AD3E54;
    case 945u: goto L_08AD3E68;
    case 946u: goto L_08AD3E74;
    case 947u: goto L_08AD3E80;
    case 948u: goto L_08AD3E8C;
    case 949u: goto L_08AD3E9C;
    case 950u: goto L_08AD3EF0;
    case 951u: goto L_08AD3EFC;
    case 952u: goto L_08AD3F08;
    case 953u: goto L_08AD3F14;
    case 954u: goto L_08AD3F20;
    case 955u: goto L_08AD3F30;
    case 956u: goto L_08AD3F3C;
    case 957u: goto L_08AD3F44;
    case 958u: goto L_08AD3F50;
    case 959u: goto L_08AD3F64;
    case 960u: goto L_08AD3F70;
    case 961u: goto L_08AD3F7C;
    case 962u: goto L_08AD3F88;
    case 963u: goto L_08AD3F98;
    case 964u: goto L_08AD3FA8;
    case 965u: goto L_08AD3FB4;
    case 966u: goto L_08AD3FC0;
    case 967u: goto L_08AD3FCC;
    case 968u: goto L_08AD3FD8;
    case 969u: goto L_08AD3FEC;
    case 970u: goto L_08AD3FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AD0000:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(26))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08AD0014u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0014u) goto L_08AD0014;
    return;
L_08AD0014:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08AD0028u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-400));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 694u, 0x0890BD50u>(ctx, &aot_mem) && ctx.pc == 0x08AD0028u) goto L_08AD0028;
    return;
L_08AD0028:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_08AD002C;
L_08AD002C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD0040:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD0058u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B630u>(ctx, &aot_mem) && ctx.pc == 0x08AD0058u) goto L_08AD0058;
    return;
L_08AD0058:
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AD006C;
      }
      goto L_08AD0064;
    }
L_08AD0064:
    ctx.gpr[31] = (0x08AD006Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 941u, 0x08ACFF50u>(ctx, &aot_mem) && ctx.pc == 0x08AD006Cu) goto L_08AD006C;
    return;
L_08AD006C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD0078u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 399u, 0x088BA290u>(ctx, &aot_mem) && ctx.pc == 0x08AD0078u) goto L_08AD0078;
    return;
L_08AD0078:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD0088:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD00B4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 702u, 0x089BF670u>(ctx, &aot_mem) && ctx.pc == 0x08AD00B4u) goto L_08AD00B4;
    return;
L_08AD00B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08AD00C8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 453u, 0x088C2EF0u>(ctx, &aot_mem) && ctx.pc == 0x08AD00C8u) goto L_08AD00C8;
    return;
L_08AD00C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD00D4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD00D4u) goto L_08AD00D4;
    return;
L_08AD00D4:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD00EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(117)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08AD011C;
      }
      goto L_08AD010C;
    }
L_08AD010C:
    ctx.gpr[31] = (0x08AD0114u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08AD0114u) goto L_08AD0114;
    return;
L_08AD0114:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD0124;
      }
      goto L_08AD011C;
    }
L_08AD011C:
    ctx.gpr[31] = (0x08AD0124u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08AD0124u) goto L_08AD0124;
    return;
L_08AD0124:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD0138:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD0148u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B88Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0148u) goto L_08AD0148;
    return;
L_08AD0148:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16657), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD0164:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD017Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B88Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD017Cu) goto L_08AD017C;
    return;
L_08AD017C:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16657), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD0194u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B88Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0194u) goto L_08AD0194;
    return;
L_08AD0194:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16658), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD01B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD01C4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B88Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD01C4u) goto L_08AD01C4;
    return;
L_08AD01C4:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16660), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD01E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD01F0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08AD01F0u) goto L_08AD01F0;
    return;
L_08AD01F0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16659), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD0210:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD0220u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B88Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0220u) goto L_08AD0220;
    return;
L_08AD0220:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16661), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD023C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AD0264;
      }
      goto L_08AD025C;
    }
L_08AD025C:
    ctx.gpr[31] = (0x08AD0264u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0264u) goto L_08AD0264;
    return;
L_08AD0264:
    ctx.gpr[31] = (0x08AD026Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 299u, 0x08A09328u>(ctx, &aot_mem) && ctx.pc == 0x08AD026Cu) goto L_08AD026C;
    return;
L_08AD026C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD027Cu);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD027Cu) goto L_08AD027C;
    return;
L_08AD027C:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD0294:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD02B4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08AD02B4u) goto L_08AD02B4;
    return;
L_08AD02B4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AD02CCu);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 294u, 0x088A943Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD02CCu) goto L_08AD02CC;
    return;
L_08AD02CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD02D8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08AD02D8u) goto L_08AD02D8;
    return;
L_08AD02D8:
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
L_08AD02F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD0300u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B88Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0300u) goto L_08AD0300;
    return;
L_08AD0300:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16662), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD031C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[19] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(5992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD0350u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-5664))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD0350u) goto L_08AD0350;
    return;
L_08AD0350:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AD0388;
      }
      goto L_08AD035C;
    }
L_08AD035C:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9540));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9524));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6660));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_08AD0388;
L_08AD0388:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AD039C;
      }
      goto L_08AD0390;
    }
L_08AD0390:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08AD039C;
L_08AD039C:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AD03ACu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 237u, 0x088A90A8u>(ctx, &aot_mem) && ctx.pc == 0x08AD03ACu) goto L_08AD03AC;
    return;
L_08AD03AC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD03D0;
      }
      goto L_08AD03B8;
    }
L_08AD03B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AD03D0;
      }
      goto L_08AD03C8;
    }
L_08AD03C8:
    ctx.gpr[31] = (0x08AD03D0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08AD03D0u) goto L_08AD03D0;
    return;
L_08AD03D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08AD03EC;
    }
    goto L_08AD03DC;
L_08AD03DC:
    ctx.gpr[31] = (0x08AD03E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x08AD03E4u) goto L_08AD03E4;
    return;
L_08AD03E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08AD03EC;
L_08AD03EC:
    ctx.gpr[31] = (0x08AD03F4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x08AD03F4u) goto L_08AD03F4;
    return;
L_08AD03F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AD0410;
      }
      goto L_08AD0400;
    }
L_08AD0400:
    ctx.gpr[31] = (0x08AD0408u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x08AD0408u) goto L_08AD0408;
    return;
L_08AD0408:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[6] = (2230u << 16u);
    goto L_08AD0410;
L_08AD0410:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AD0424u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-29684));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 474u, 0x08A4B854u>(ctx, &aot_mem) && ctx.pc == 0x08AD0424u) goto L_08AD0424;
    return;
L_08AD0424:
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
L_08AD0440:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29740)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29744)));
    ctx.gpr[3] = (2230u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-29736), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29716)));
    ctx.gpr[12] = (2230u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-29704)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(-29708)));
    ctx.gpr[16] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-29700), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[17] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-29728), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-29692), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[8] = (16281u << 16u);
    ctx.gpr[6] = (ctx.gpr[8] | 39322u);
    ctx.gpr[2] = (2230u << 16u);
    ctx.gpr[8] = (0u | 59u);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-5664), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-5664)));
    ctx.gpr[10] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29732), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[9] = (16268u << 16u);
    ctx.gpr[11] = (15744u << 16u);
    ctx.gpr[13] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[8] << 2u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[14] = (2227u << 16u);
    ctx.gpr[7] = (ctx.gpr[9] | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[8] = (ctx.gpr[13] + static_cast<std::uint32_t>(6264));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[9] = (ctx.gpr[14] + static_cast<std::uint32_t>(-12724));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[15] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[24] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(-29724), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[25] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-29720), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(-29712), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[3] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-29696), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-29688), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD0578:
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
L_08AD05A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-336));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD05E0u);
    ctx.gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x08AD05E0u) goto L_08AD05E0;
    return;
L_08AD05E0:
    ctx.gpr[18] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-21008));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD0604u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12696));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFB6BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD0604u) goto L_08AD0604;
    return;
L_08AD0604:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD0614u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12672));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFB6BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD0614u) goto L_08AD0614;
    return;
L_08AD0614:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08AD0628u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12660));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 488u, 0x089661E8u>(ctx, &aot_mem) && ctx.pc == 0x08AD0628u) goto L_08AD0628;
    return;
L_08AD0628:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD0674;
      }
      goto L_08AD0634;
    }
L_08AD0634:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD0640u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12656));
    goto L_08AD0578;
L_08AD0640:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 64u);
    ctx.gpr[31] = (0x08AD0654u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6128));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x08AD0654u) goto L_08AD0654;
    return;
L_08AD0654:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AD0870;
      }
      goto L_08AD0660;
    }
L_08AD0660:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08AD066Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD066Cu) goto L_08AD066C;
    return;
L_08AD066C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD0870;
      }
      goto L_08AD0674;
    }
L_08AD0674:
    ctx.gpr[21] = (2227u << 16u);
    ctx.gpr[20] = (2232u << 16u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(280));
    ctx.gpr[23] = (0u | 18281u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-12628));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(5696));
    goto L_08AD068C;
L_08AD068C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[31] = (0x08AD069Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 524u, 0x089663F8u>(ctx, &aot_mem) && ctx.pc == 0x08AD069Cu) goto L_08AD069C;
    return;
L_08AD069C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD06A8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 566u, 0x08AEDFFCu>(ctx, &aot_mem) && ctx.pc == 0x08AD06A8u) goto L_08AD06A8;
    return;
L_08AD06A8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD068C;
      }
      goto L_08AD06B4;
    }
L_08AD06B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AD06DC;
      }
      goto L_08AD06C8;
    }
L_08AD06C8:
    ctx.gpr[31] = (0x08AD06D0u);
    // nop
    ctx.pc = 0x08B0BCCCu;
    return;
L_08AD06D0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AD06E4;
      }
      goto L_08AD06DC;
    }
L_08AD06DC:
    ctx.gpr[31] = (0x08AD06E4u);
    // nop
    ctx.pc = 0x08B0BD1Cu;
    return;
L_08AD06E4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[18]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 48 ? 1u : 0u);
    goto L_08AD06F8;
L_08AD06F8:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 58 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AD0708;
      }
      goto L_08AD0700;
    }
L_08AD0700:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD0718;
      }
      goto L_08AD0708;
    }
L_08AD0708:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 48 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AD06F8;
      }
      goto L_08AD0718;
    }
L_08AD0718:
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-32));
    goto L_08AD071C;
L_08AD071C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 58 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AD0808;
      }
      goto L_08AD0724;
    }
L_08AD0724:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD0808;
      }
      goto L_08AD072C;
    }
L_08AD072C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[5] = (ctx.gpr[5] << 24u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AD07A8;
      }
      goto L_08AD0744;
    }
L_08AD0744:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[7]);
    ctx.gpr[31] = (0x08AD075Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 803u, 0x08AA3CA4u>(ctx, &aot_mem) && ctx.pc == 0x08AD075Cu) goto L_08AD075C;
    return;
L_08AD075C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[7] = (ctx.gpr[2] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-32));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
      if (branch_taken) {
          goto L_08AD07D0;
      }
      goto L_08AD0778;
    }
L_08AD0778:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AD0794u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 704u, 0x08AA34C8u>(ctx, &aot_mem) && ctx.pc == 0x08AD0794u) goto L_08AD0794;
    return;
L_08AD0794:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-32));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
      if (branch_taken) {
          goto L_08AD07D0;
      }
      goto L_08AD07A8;
    }
L_08AD07A8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[8]);
    ctx.gpr[31] = (0x08AD07BCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x08AD07BCu) goto L_08AD07BC;
    return;
L_08AD07BC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    goto L_08AD07D0;
L_08AD07D0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 48 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AD071C;
      }
      goto L_08AD0808;
    }
L_08AD0808:
    ctx.gpr[31] = (0x08AD0810u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 226u, 0x08AECB54u>(ctx, &aot_mem) && ctx.pc == 0x08AD0810u) goto L_08AD0810;
    return;
L_08AD0810:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[16] == ctx.gpr[23]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
        goto L_08AD084C;
    }
    goto L_08AD081C;
L_08AD081C:
    ctx.gpr[19] = (2227u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-12612));
    goto L_08AD0828;
L_08AD0828:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD0838u);
    ctx.gpr[6] = (0u | 18281u);
    goto L_08AD0578;
L_08AD0838:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 50 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD0828;
      }
      goto L_08AD0848;
    }
L_08AD0848:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    goto L_08AD084C;
L_08AD084C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AD085C;
      }
      goto L_08AD0854;
    }
L_08AD0854:
    ctx.gpr[31] = (0x08AD085Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD085Cu) goto L_08AD085C;
    return;
L_08AD085C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AD0870;
      }
      goto L_08AD0868;
    }
L_08AD0868:
    ctx.gpr[31] = (0x08AD0870u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0870u) goto L_08AD0870;
    return;
L_08AD0870:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD089C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD08ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 181u, 0x088B8F9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD08ACu) goto L_08AD08AC;
    return;
L_08AD08AC:
    ctx.gpr[31] = (0x08AD08B4u);
    ctx.gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 319u, 0x08A8A178u>(ctx, &aot_mem) && ctx.pc == 0x08AD08B4u) goto L_08AD08B4;
    return;
L_08AD08B4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (0u | 80u);
    ctx.gpr[31] = (0x08AD08C4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12544));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD08C4u) goto L_08AD08C4;
    return;
L_08AD08C4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (0u | 80u);
    ctx.gpr[31] = (0x08AD08D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12524));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD08D4u) goto L_08AD08D4;
    return;
L_08AD08D4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (0u | 96u);
    ctx.gpr[31] = (0x08AD08E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12500));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD08E4u) goto L_08AD08E4;
    return;
L_08AD08E4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (0u | 96u);
    ctx.gpr[31] = (0x08AD08F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12480));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD08F4u) goto L_08AD08F4;
    return;
L_08AD08F4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (0u | 96u);
    ctx.gpr[31] = (0x08AD0904u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12456));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD0904u) goto L_08AD0904;
    return;
L_08AD0904:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD0914:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD092Cu);
    // nop
    goto L_08AD05A4;
L_08AD092C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[31] = (0x08AD0944u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 256u, 0x08839190u>(ctx, &aot_mem) && ctx.pc == 0x08AD0944u) goto L_08AD0944;
    return;
L_08AD0944:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(-7680));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AD09FC;
      }
      goto L_08AD0958;
    }
L_08AD0958:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (17658u << 16u);
    ctx.gpr[31] = (0x08AD0968u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 602u, 0x0887357Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0968u) goto L_08AD0968;
    return;
L_08AD0968:
    ctx.gpr[5] = (16230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 26214u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AD097Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 596u, 0x0887352Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD097Cu) goto L_08AD097C;
    return;
L_08AD097C:
    ctx.gpr[6] = (16179u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (16298u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 43691u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AD09A0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 276u, 0x08839298u>(ctx, &aot_mem) && ctx.pc == 0x08AD09A0u) goto L_08AD09A0;
    return;
L_08AD09A0:
    ctx.gpr[4] = (17948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (50716u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08AD09D8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 4u, 0x088780D0u>(ctx, &aot_mem) && ctx.pc == 0x08AD09D8u) goto L_08AD09D8;
    return;
L_08AD09D8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-7680), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AD0A04;
      }
      goto L_08AD09E8;
    }
L_08AD09E8:
    ctx.gpr[31] = (0x08AD09F0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 243u, 0x0883910Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD09F0u) goto L_08AD09F0;
    return;
L_08AD09F0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD0A7C;
      }
      goto L_08AD09FC;
    }
L_08AD09FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD0A7C;
      }
      goto L_08AD0A04;
    }
L_08AD0A04:
    ctx.gpr[31] = (0x08AD0A0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 7u, 0x088780F4u>(ctx, &aot_mem) && ctx.pc == 0x08AD0A0Cu) goto L_08AD0A0C;
    return;
L_08AD0A0C:
    ctx.gpr[31] = (0x08AD0A14u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7680)));
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 413u, 0x088CF2E8u>(ctx, &aot_mem) && ctx.pc == 0x08AD0A14u) goto L_08AD0A14;
    return;
L_08AD0A14:
    ctx.gpr[31] = (0x08AD0A1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 199u, 0x08A4CCE8u>(ctx, &aot_mem) && ctx.pc == 0x08AD0A1Cu) goto L_08AD0A1C;
    return;
L_08AD0A1C:
    ctx.gpr[31] = (0x08AD0A24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 245u, 0x08925AD8u>(ctx, &aot_mem) && ctx.pc == 0x08AD0A24u) goto L_08AD0A24;
    return;
L_08AD0A24:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AD0A3Cu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-12436));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 438u, 0x089C1E98u>(ctx, &aot_mem) && ctx.pc == 0x08AD0A3Cu) goto L_08AD0A3C;
    return;
L_08AD0A3C:
    ctx.gpr[31] = (0x08AD0A44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 609u, 0x0886B3BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD0A44u) goto L_08AD0A44;
    return;
L_08AD0A44:
    ctx.gpr[31] = (0x08AD0A4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 566u, 0x0892F88Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0A4Cu) goto L_08AD0A4C;
    return;
L_08AD0A4C:
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(2080));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD0A60u);
    ctx.gpr[5] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 165u, 0x088E8D6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0A60u) goto L_08AD0A60;
    return;
L_08AD0A60:
    ctx.gpr[31] = (0x08AD0A68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 32u, 0x08A542D4u>(ctx, &aot_mem) && ctx.pc == 0x08AD0A68u) goto L_08AD0A68;
    return;
L_08AD0A68:
    ctx.gpr[31] = (0x08AD0A70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 47u, 0x089884D8u>(ctx, &aot_mem) && ctx.pc == 0x08AD0A70u) goto L_08AD0A70;
    return;
L_08AD0A70:
    ctx.gpr[31] = (0x08AD0A78u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 166u, 0x088E8D74u>(ctx, &aot_mem) && ctx.pc == 0x08AD0A78u) goto L_08AD0A78;
    return;
L_08AD0A78:
    ctx.gpr[2] = (0u | 1u);
    goto L_08AD0A7C;
L_08AD0A7C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD0A90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD0ADC;
      }
      goto L_08AD0AB4;
    }
L_08AD0AB4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AD0AC0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD0AC0u) goto L_08AD0AC0;
    return;
L_08AD0AC0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD0AD8;
      }
      goto L_08AD0ACC;
    }
L_08AD0ACC:
    ctx.gpr[31] = (0x08AD0AD4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AD0AD4u) goto L_08AD0AD4;
    return;
L_08AD0AD4:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AD0AD8;
L_08AD0AD8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    goto L_08AD0ADC;
L_08AD0ADC:
    ctx.gpr[31] = (0x08AD0AE4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 436u, 0x08913CC8u>(ctx, &aot_mem) && ctx.pc == 0x08AD0AE4u) goto L_08AD0AE4;
    return;
L_08AD0AE4:
    ctx.gpr[31] = (0x08AD0AECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 700u, 0x0891B1A4u>(ctx, &aot_mem) && ctx.pc == 0x08AD0AECu) goto L_08AD0AEC;
    return;
L_08AD0AEC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD0AF8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21204)));
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 31u, 0x088D0520u>(ctx, &aot_mem) && ctx.pc == 0x08AD0AF8u) goto L_08AD0AF8;
    return;
L_08AD0AF8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x08AD0B04u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 89u, 0x088646A8u>(ctx, &aot_mem) && ctx.pc == 0x08AD0B04u) goto L_08AD0B04;
    return;
L_08AD0B04:
    ctx.gpr[2] = (0u | 1u);
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
L_08AD0B20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x08AD0B3Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 103u, 0x08864790u>(ctx, &aot_mem) && ctx.pc == 0x08AD0B3Cu) goto L_08AD0B3C;
    return;
L_08AD0B3C:
    ctx.gpr[31] = (0x08AD0B44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 326u, 0x08AB9B38u>(ctx, &aot_mem) && ctx.pc == 0x08AD0B44u) goto L_08AD0B44;
    return;
L_08AD0B44:
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-25840));
    goto L_08AD0B50;
L_08AD0B50:
    ctx.gpr[4] = (ctx.gpr[17] << 7u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[31] = (0x08AD0B6Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 234u, 0x089D5B7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0B6Cu) goto L_08AD0B6C;
    return;
L_08AD0B6C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[4] << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD0B50;
      }
      goto L_08AD0B84;
    }
L_08AD0B84:
    ctx.gpr[31] = (0x08AD0B8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 517u, 0x089422B8u>(ctx, &aot_mem) && ctx.pc == 0x08AD0B8Cu) goto L_08AD0B8C;
    return;
L_08AD0B8C:
    ctx.gpr[31] = (0x08AD0B94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 681u, 0x0893B734u>(ctx, &aot_mem) && ctx.pc == 0x08AD0B94u) goto L_08AD0B94;
    return;
L_08AD0B94:
    ctx.gpr[31] = (0x08AD0B9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 302u, 0x089E1AFCu>(ctx, &aot_mem) && ctx.pc == 0x08AD0B9Cu) goto L_08AD0B9C;
    return;
L_08AD0B9C:
    ctx.gpr[31] = (0x08AD0BA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 308u, 0x089E1B84u>(ctx, &aot_mem) && ctx.pc == 0x08AD0BA4u) goto L_08AD0BA4;
    return;
L_08AD0BA4:
    ctx.gpr[31] = (0x08AD0BACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 9u, 0x088C0190u>(ctx, &aot_mem) && ctx.pc == 0x08AD0BACu) goto L_08AD0BAC;
    return;
L_08AD0BAC:
    ctx.gpr[31] = (0x08AD0BB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 79u, 0x08A8C630u>(ctx, &aot_mem) && ctx.pc == 0x08AD0BB4u) goto L_08AD0BB4;
    return;
L_08AD0BB4:
    ctx.gpr[31] = (0x08AD0BBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 718u, 0x0891B30Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0BBCu) goto L_08AD0BBC;
    return;
L_08AD0BBC:
    ctx.gpr[31] = (0x08AD0BC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 370u, 0x089C5878u>(ctx, &aot_mem) && ctx.pc == 0x08AD0BC4u) goto L_08AD0BC4;
    return;
L_08AD0BC4:
    ctx.gpr[31] = (0x08AD0BCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 134u, 0x08968C60u>(ctx, &aot_mem) && ctx.pc == 0x08AD0BCCu) goto L_08AD0BCC;
    return;
L_08AD0BCC:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AD0BDCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4576));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 377u, 0x08AD99F0u>(ctx, &aot_mem) && ctx.pc == 0x08AD0BDCu) goto L_08AD0BDC;
    return;
L_08AD0BDC:
    ctx.gpr[31] = (0x08AD0BE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 567u, 0x089D24D4u>(ctx, &aot_mem) && ctx.pc == 0x08AD0BE4u) goto L_08AD0BE4;
    return;
L_08AD0BE4:
    ctx.gpr[31] = (0x08AD0BECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 404u, 0x08AE9B90u>(ctx, &aot_mem) && ctx.pc == 0x08AD0BECu) goto L_08AD0BEC;
    return;
L_08AD0BEC:
    ctx.gpr[31] = (0x08AD0BF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 252u, 0x08A256C8u>(ctx, &aot_mem) && ctx.pc == 0x08AD0BF4u) goto L_08AD0BF4;
    return;
L_08AD0BF4:
    ctx.gpr[31] = (0x08AD0BFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 320u, 0x08825FCCu>(ctx, &aot_mem) && ctx.pc == 0x08AD0BFCu) goto L_08AD0BFC;
    return;
L_08AD0BFC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08AD0C08u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 515u, 0x08B0B3C0u>(ctx, &aot_mem) && ctx.pc == 0x08AD0C08u) goto L_08AD0C08;
    return;
L_08AD0C08:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08AD0C14u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 519u, 0x08B0B418u>(ctx, &aot_mem) && ctx.pc == 0x08AD0C14u) goto L_08AD0C14;
    return;
L_08AD0C14:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08AD0C20u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 523u, 0x08B0B470u>(ctx, &aot_mem) && ctx.pc == 0x08AD0C20u) goto L_08AD0C20;
    return;
L_08AD0C20:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD0C34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD0C58u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12424));
    goto L_08AD0578;
L_08AD0C58:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27344)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08AD0C88u);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x08AD0C88u) goto L_08AD0C88;
    return;
L_08AD0C88:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08AD0CA0u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AD0CA0u) goto L_08AD0CA0;
    return;
L_08AD0CA0:
    ctx.gpr[31] = (0x08AD0CA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 700u, 0x0891B1A4u>(ctx, &aot_mem) && ctx.pc == 0x08AD0CA8u) goto L_08AD0CA8;
    return;
L_08AD0CA8:
    ctx.gpr[31] = (0x08AD0CB0u);
    // nop
    goto L_08AD36C0;
L_08AD0CB0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[18] = (2232u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16756), static_cast<std::uint8_t>(0u));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(13216));
    ctx.gpr[31] = (0x08AD0CC8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 130u, 0x08908F00u>(ctx, &aot_mem) && ctx.pc == 0x08AD0CC8u) goto L_08AD0CC8;
    return;
L_08AD0CC8:
    ctx.gpr[17] = (2233u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-4576));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1133)));
    ctx.gpr[16] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-7827));
      if (branch_taken) {
          goto L_08AD0CE8;
      }
      goto L_08AD0CE0;
    }
L_08AD0CE0:
    ctx.gpr[31] = (0x08AD0CE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 171u, 0x088B0ED0u>(ctx, &aot_mem) && ctx.pc == 0x08AD0CE8u) goto L_08AD0CE8;
    return;
L_08AD0CE8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1133)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[31] = (0x08AD0CF8u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08AD0E34;
L_08AD0CF8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1133)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AD0DE4;
      }
      goto L_08AD0D04;
    }
L_08AD0D04:
    ctx.gpr[31] = (0x08AD0D0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 126u, 0x088B0C90u>(ctx, &aot_mem) && ctx.pc == 0x08AD0D0Cu) goto L_08AD0D0C;
    return;
L_08AD0D0C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AD0D48;
      }
      goto L_08AD0D18;
    }
L_08AD0D18:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[31] = (0x08AD0D28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 148u, 0x08864AA0u>(ctx, &aot_mem) && ctx.pc == 0x08AD0D28u) goto L_08AD0D28;
    return;
L_08AD0D28:
    ctx.gpr[31] = (0x08AD0D30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 715u, 0x0896F860u>(ctx, &aot_mem) && ctx.pc == 0x08AD0D30u) goto L_08AD0D30;
    return;
L_08AD0D30:
    ctx.gpr[31] = (0x08AD0D38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 456u, 0x08916510u>(ctx, &aot_mem) && ctx.pc == 0x08AD0D38u) goto L_08AD0D38;
    return;
L_08AD0D38:
    ctx.gpr[31] = (0x08AD0D40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 294u, 0x08AA5688u>(ctx, &aot_mem) && ctx.pc == 0x08AD0D40u) goto L_08AD0D40;
    return;
L_08AD0D40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD0DE4;
      }
      goto L_08AD0D48;
    }
L_08AD0D48:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-5663)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AD0DA4;
      }
      goto L_08AD0D58;
    }
L_08AD0D58:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-5663), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD0D70u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 386u, 0x088EE7ACu>(ctx, &aot_mem) && ctx.pc == 0x08AD0D70u) goto L_08AD0D70;
    return;
L_08AD0D70:
    ctx.gpr[31] = (0x08AD0D78u);
    // nop
    goto L_08AD0B20;
L_08AD0D78:
    ctx.gpr[31] = (0x08AD0D80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 719u, 0x0891B314u>(ctx, &aot_mem) && ctx.pc == 0x08AD0D80u) goto L_08AD0D80;
    return;
L_08AD0D80:
    ctx.gpr[31] = (0x08AD0D88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 700u, 0x0891B1A4u>(ctx, &aot_mem) && ctx.pc == 0x08AD0D88u) goto L_08AD0D88;
    return;
L_08AD0D88:
    ctx.gpr[31] = (0x08AD0D90u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08AD0E34;
L_08AD0D90:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x08AD0D9Cu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7060), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 454u, 0x08A8E258u>(ctx, &aot_mem) && ctx.pc == 0x08AD0D9Cu) goto L_08AD0D9C;
    return;
L_08AD0D9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD0DE4;
      }
      goto L_08AD0DA4;
    }
L_08AD0DA4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD0DB8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 386u, 0x088EE7ACu>(ctx, &aot_mem) && ctx.pc == 0x08AD0DB8u) goto L_08AD0DB8;
    return;
L_08AD0DB8:
    ctx.gpr[31] = (0x08AD0DC0u);
    // nop
    goto L_08AD0B20;
L_08AD0DC0:
    ctx.gpr[31] = (0x08AD0DC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 719u, 0x0891B314u>(ctx, &aot_mem) && ctx.pc == 0x08AD0DC8u) goto L_08AD0DC8;
    return;
L_08AD0DC8:
    ctx.gpr[31] = (0x08AD0DD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 700u, 0x0891B1A4u>(ctx, &aot_mem) && ctx.pc == 0x08AD0DD0u) goto L_08AD0DD0;
    return;
L_08AD0DD0:
    ctx.gpr[31] = (0x08AD0DD8u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08AD0E34;
L_08AD0DD8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x08AD0DE4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7060), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 454u, 0x08A8E258u>(ctx, &aot_mem) && ctx.pc == 0x08AD0DE4u) goto L_08AD0DE4;
    return;
L_08AD0DE4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08AD0DF0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1133), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 720u, 0x0891B328u>(ctx, &aot_mem) && ctx.pc == 0x08AD0DF0u) goto L_08AD0DF0;
    return;
L_08AD0DF0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD0DFCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 150u, 0x08864AC0u>(ctx, &aot_mem) && ctx.pc == 0x08AD0DFCu) goto L_08AD0DFC;
    return;
L_08AD0DFC:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16657), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16658), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD0E18u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12396));
    goto L_08AD0578;
L_08AD0E18:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD0E34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD0E5Cu);
    ctx.gpr[4] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 54u, 0x0883C330u>(ctx, &aot_mem) && ctx.pc == 0x08AD0E5Cu) goto L_08AD0E5C;
    return;
L_08AD0E5C:
    ctx.gpr[31] = (0x08AD0E64u);
    ctx.gpr[19] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 51u, 0x08A8C42Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0E64u) goto L_08AD0E64;
    return;
L_08AD0E64:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[31] = (0x08AD0E74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 130u, 0x08908F00u>(ctx, &aot_mem) && ctx.pc == 0x08AD0E74u) goto L_08AD0E74;
    return;
L_08AD0E74:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7680));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AD0E88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 288u, 0x088EDFF0u>(ctx, &aot_mem) && ctx.pc == 0x08AD0E88u) goto L_08AD0E88;
    return;
L_08AD0E88:
    ctx.gpr[31] = (0x08AD0E90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 72u, 0x08A28958u>(ctx, &aot_mem) && ctx.pc == 0x08AD0E90u) goto L_08AD0E90;
    return;
L_08AD0E90:
    ctx.gpr[31] = (0x08AD0E98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 552u, 0x08932CC8u>(ctx, &aot_mem) && ctx.pc == 0x08AD0E98u) goto L_08AD0E98;
    return;
L_08AD0E98:
    ctx.gpr[31] = (0x08AD0EA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 149u, 0x0883CA74u>(ctx, &aot_mem) && ctx.pc == 0x08AD0EA0u) goto L_08AD0EA0;
    return;
L_08AD0EA0:
    ctx.gpr[31] = (0x08AD0EA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 176u, 0x08878EA0u>(ctx, &aot_mem) && ctx.pc == 0x08AD0EA8u) goto L_08AD0EA8;
    return;
L_08AD0EA8:
    ctx.gpr[31] = (0x08AD0EB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 166u, 0x08A24CA8u>(ctx, &aot_mem) && ctx.pc == 0x08AD0EB0u) goto L_08AD0EB0;
    return;
L_08AD0EB0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x08AD0EBCu);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6867), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 417u, 0x08986688u>(ctx, &aot_mem) && ctx.pc == 0x08AD0EBCu) goto L_08AD0EBC;
    return;
L_08AD0EBC:
    ctx.gpr[31] = (0x08AD0EC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 608u, 0x08966A88u>(ctx, &aot_mem) && ctx.pc == 0x08AD0EC4u) goto L_08AD0EC4;
    return;
L_08AD0EC4:
    ctx.gpr[31] = (0x08AD0ECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 18u, 0x089EC26Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0ECCu) goto L_08AD0ECC;
    return;
L_08AD0ECC:
    ctx.gpr[4] = (17136u << 16u);
    ctx.gpr[31] = (0x08AD0ED8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 162u, 0x0883CBECu>(ctx, &aot_mem) && ctx.pc == 0x08AD0ED8u) goto L_08AD0ED8;
    return;
L_08AD0ED8:
    ctx.gpr[4] = (17402u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[18] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7620), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20156)));
    ctx.gpr[16] = (2275u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2080));
      if (branch_taken) {
          goto L_08AD0F04;
      }
      goto L_08AD0EFC;
    }
L_08AD0EFC:
    ctx.gpr[31] = (0x08AD0F04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 444u, 0x08AFDDC0u>(ctx, &aot_mem) && ctx.pc == 0x08AD0F04u) goto L_08AD0F04;
    return;
L_08AD0F04:
    ctx.gpr[31] = (0x08AD0F0Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20156)));
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 2u, 0x0895000Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0F0Cu) goto L_08AD0F0C;
    return;
L_08AD0F0C:
    ctx.gpr[31] = (0x08AD0F14u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 807u, 0x089C7450u>(ctx, &aot_mem) && ctx.pc == 0x08AD0F14u) goto L_08AD0F14;
    return;
L_08AD0F14:
    ctx.gpr[31] = (0x08AD0F1Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 836u, 0x089C7654u>(ctx, &aot_mem) && ctx.pc == 0x08AD0F1Cu) goto L_08AD0F1C;
    return;
L_08AD0F1C:
    ctx.gpr[31] = (0x08AD0F24u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 836u, 0x089C7654u>(ctx, &aot_mem) && ctx.pc == 0x08AD0F24u) goto L_08AD0F24;
    return;
L_08AD0F24:
    ctx.gpr[31] = (0x08AD0F2Cu);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 836u, 0x089C7654u>(ctx, &aot_mem) && ctx.pc == 0x08AD0F2Cu) goto L_08AD0F2C;
    return;
L_08AD0F2C:
    ctx.gpr[31] = (0x08AD0F34u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 711u, 0x089CAF64u>(ctx, &aot_mem) && ctx.pc == 0x08AD0F34u) goto L_08AD0F34;
    return;
L_08AD0F34:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x08AD0F40u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29200), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 495u, 0x08A923CCu>(ctx, &aot_mem) && ctx.pc == 0x08AD0F40u) goto L_08AD0F40;
    return;
L_08AD0F40:
    ctx.gpr[31] = (0x08AD0F48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 113u, 0x08850BFCu>(ctx, &aot_mem) && ctx.pc == 0x08AD0F48u) goto L_08AD0F48;
    return;
L_08AD0F48:
    ctx.gpr[31] = (0x08AD0F50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 221u, 0x08A9D0A4u>(ctx, &aot_mem) && ctx.pc == 0x08AD0F50u) goto L_08AD0F50;
    return;
L_08AD0F50:
    ctx.gpr[17] = (2233u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-25840));
    goto L_08AD0F5C;
L_08AD0F5C:
    ctx.gpr[4] = (ctx.gpr[18] << 7u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[18] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[31] = (0x08AD0F78u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 234u, 0x089D5B7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0F78u) goto L_08AD0F78;
    return;
L_08AD0F78:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[4] << 16u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD0F5C;
      }
      goto L_08AD0F90;
    }
L_08AD0F90:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x08AD0F9Cu);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 495u, 0x089326E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD0F9Cu) goto L_08AD0F9C;
    return;
L_08AD0F9C:
    ctx.gpr[31] = (0x08AD0FA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 668u, 0x08806B98u>(ctx, &aot_mem) && ctx.pc == 0x08AD0FA4u) goto L_08AD0FA4;
    return;
L_08AD0FA4:
    ctx.gpr[4] = (2274u << 16u);
    ctx.gpr[31] = (0x08AD0FB0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19632));
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 32u, 0x08930238u>(ctx, &aot_mem) && ctx.pc == 0x08AD0FB0u) goto L_08AD0FB0;
    return;
L_08AD0FB0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD0FBCu);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 165u, 0x088E8D6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0FBCu) goto L_08AD0FBC;
    return;
L_08AD0FBC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD0FD8;
      }
      goto L_08AD0FCC;
    }
L_08AD0FCC:
    ctx.gpr[31] = (0x08AD0FD4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 404u, 0x08961D90u>(ctx, &aot_mem) && ctx.pc == 0x08AD0FD4u) goto L_08AD0FD4;
    return;
L_08AD0FD4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_08AD0FD8;
L_08AD0FD8:
    ctx.gpr[31] = (0x08AD0FE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 611u, 0x08AC3A98u>(ctx, &aot_mem) && ctx.pc == 0x08AD0FE0u) goto L_08AD0FE0;
    return;
L_08AD0FE0:
    ctx.gpr[31] = (0x08AD0FE8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 166u, 0x088E8D74u>(ctx, &aot_mem) && ctx.pc == 0x08AD0FE8u) goto L_08AD0FE8;
    return;
L_08AD0FE8:
    ctx.gpr[31] = (0x08AD0FF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 700u, 0x0891B1A4u>(ctx, &aot_mem) && ctx.pc == 0x08AD0FF0u) goto L_08AD0FF0;
    return;
L_08AD0FF0:
    ctx.gpr[31] = (0x08AD0FF8u);
    // nop
    goto L_08AD2C14;
L_08AD0FF8:
    ctx.gpr[31] = (0x08AD1000u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 529u, 0x08A43398u>(ctx, &aot_mem) && ctx.pc == 0x08AD1000u) goto L_08AD1000;
    return;
L_08AD1000:
    ctx.gpr[31] = (0x08AD1008u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 587u, 0x08ABB5F0u>(ctx, &aot_mem) && ctx.pc == 0x08AD1008u) goto L_08AD1008;
    return;
L_08AD1008:
    ctx.gpr[31] = (0x08AD1010u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 637u, 0x08917604u>(ctx, &aot_mem) && ctx.pc == 0x08AD1010u) goto L_08AD1010;
    return;
L_08AD1010:
    ctx.gpr[31] = (0x08AD1018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 69u, 0x08A811C8u>(ctx, &aot_mem) && ctx.pc == 0x08AD1018u) goto L_08AD1018;
    return;
L_08AD1018:
    ctx.gpr[31] = (0x08AD1020u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 308u, 0x08A828E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD1020u) goto L_08AD1020;
    return;
L_08AD1020:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1030;
      }
      goto L_08AD1028;
    }
L_08AD1028:
    ctx.gpr[31] = (0x08AD1030u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 673u, 0x0893B628u>(ctx, &aot_mem) && ctx.pc == 0x08AD1030u) goto L_08AD1030;
    return;
L_08AD1030:
    ctx.gpr[31] = (0x08AD1038u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 306u, 0x08825E64u>(ctx, &aot_mem) && ctx.pc == 0x08AD1038u) goto L_08AD1038;
    return;
L_08AD1038:
    ctx.gpr[31] = (0x08AD1040u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 111u, 0x089F8D6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD1040u) goto L_08AD1040;
    return;
L_08AD1040:
    ctx.gpr[31] = (0x08AD1048u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 679u, 0x0886BAF0u>(ctx, &aot_mem) && ctx.pc == 0x08AD1048u) goto L_08AD1048;
    return;
L_08AD1048:
    ctx.gpr[31] = (0x08AD1050u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 405u, 0x08ABA280u>(ctx, &aot_mem) && ctx.pc == 0x08AD1050u) goto L_08AD1050;
    return;
L_08AD1050:
    ctx.gpr[31] = (0x08AD1058u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 80u, 0x08998674u>(ctx, &aot_mem) && ctx.pc == 0x08AD1058u) goto L_08AD1058;
    return;
L_08AD1058:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD1064u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12360));
    goto L_08AD0578;
L_08AD1064:
    ctx.gpr[31] = (0x08AD106Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 361u, 0x0897A7ACu>(ctx, &aot_mem) && ctx.pc == 0x08AD106Cu) goto L_08AD106C;
    return;
L_08AD106C:
    ctx.gpr[31] = (0x08AD1074u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 294u, 0x08AA5688u>(ctx, &aot_mem) && ctx.pc == 0x08AD1074u) goto L_08AD1074;
    return;
L_08AD1074:
    ctx.gpr[31] = (0x08AD107Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 715u, 0x0896F860u>(ctx, &aot_mem) && ctx.pc == 0x08AD107Cu) goto L_08AD107C;
    return;
L_08AD107C:
    ctx.gpr[31] = (0x08AD1084u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 456u, 0x08916510u>(ctx, &aot_mem) && ctx.pc == 0x08AD1084u) goto L_08AD1084;
    return;
L_08AD1084:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD1090u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12320));
    goto L_08AD0578;
L_08AD1090:
    ctx.gpr[31] = (0x08AD1098u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08AD1098u) goto L_08AD1098;
    return;
L_08AD1098:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD10A4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 632u, 0x08A96B44u>(ctx, &aot_mem) && ctx.pc == 0x08AD10A4u) goto L_08AD10A4;
    return;
L_08AD10A4:
    ctx.gpr[31] = (0x08AD10ACu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08AD10ACu) goto L_08AD10AC;
    return;
L_08AD10AC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD10B8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 632u, 0x08A96B44u>(ctx, &aot_mem) && ctx.pc == 0x08AD10B8u) goto L_08AD10B8;
    return;
L_08AD10B8:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
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
L_08AD10DC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD10E4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29200)));
    ctx.gpr[5] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[4] ^ 2u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[2] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD1118:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29200)));
    ctx.gpr[5] = (ctx.gpr[4] ^ 2u);
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[2] = (ctx.gpr[6] | ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD1140:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD1180u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12252));
    goto L_08AD0578;
L_08AD1180:
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[19] = (2232u << 16u);
    ctx.gpr[20] = (2233u << 16u);
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[23] = (0u | 23u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(5992));
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(-4576));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[30] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AD11B0;
      }
      goto L_08AD11A8;
    }
L_08AD11A8:
    ctx.gpr[31] = (0x08AD11B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD11B0u) goto L_08AD11B0;
    return;
L_08AD11B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD11D4;
      }
      goto L_08AD11C4;
    }
L_08AD11C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AD11DC;
      }
      goto L_08AD11D4;
    }
L_08AD11D4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08AD11DC;
L_08AD11DC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD11F0;
      }
      goto L_08AD11E4;
    }
L_08AD11E4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD11F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12180));
    goto L_08AD0578;
L_08AD11F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD121C;
      }
      goto L_08AD11FC;
    }
L_08AD11FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AD1220;
      }
      goto L_08AD1218;
    }
L_08AD1218:
    ctx.gpr[4] = (0u | 1u);
    goto L_08AD121C;
L_08AD121C:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08AD1220;
L_08AD1220:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1230;
      }
      goto L_08AD1228;
    }
L_08AD1228:
    ctx.gpr[31] = (0x08AD1230u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 399u, 0x088AD91Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD1230u) goto L_08AD1230;
    return;
L_08AD1230:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08AD123Cu);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(27772), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 410u, 0x089C1AC4u>(ctx, &aot_mem) && ctx.pc == 0x08AD123Cu) goto L_08AD123C;
    return;
L_08AD123C:
    ctx.gpr[31] = (0x08AD1244u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 170u, 0x08AE4E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD1244u) goto L_08AD1244;
    return;
L_08AD1244:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-25518), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-25519), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[31] = (0x08AD1260u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 647u, 0x08ADE738u>(ctx, &aot_mem) && ctx.pc == 0x08AD1260u) goto L_08AD1260;
    return;
L_08AD1260:
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(308), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(1380), ctx.gpr[23]);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(1424), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD129C;
      }
      goto L_08AD1278;
    }
L_08AD1278:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD128C;
      }
      goto L_08AD1284;
    }
L_08AD1284:
    ctx.gpr[31] = (0x08AD128Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD128Cu) goto L_08AD128C;
    return;
L_08AD128C:
    ctx.gpr[31] = (0x08AD1294u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 343u, 0x08A09680u>(ctx, &aot_mem) && ctx.pc == 0x08AD1294u) goto L_08AD1294;
    return;
L_08AD1294:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD12E4;
      }
      goto L_08AD129C;
    }
L_08AD129C:
    ctx.gpr[4] = (0u | 24u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(1424), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(305), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[31] = (0x08AD12B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12276));
    goto L_08AD0578;
L_08AD12B8:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(140), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
        goto L_08AD12D4;
    }
    goto L_08AD12C8;
L_08AD12C8:
    ctx.gpr[31] = (0x08AD12D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD12D0u) goto L_08AD12D0;
    return;
L_08AD12D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    goto L_08AD12D4;
L_08AD12D4:
    ctx.gpr[31] = (0x08AD12DCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 342u, 0x08A09678u>(ctx, &aot_mem) && ctx.pc == 0x08AD12DCu) goto L_08AD12DC;
    return;
L_08AD12DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1424;
      }
      goto L_08AD12E4;
    }
L_08AD12E4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD12FC;
      }
      goto L_08AD12EC;
    }
L_08AD12EC:
    ctx.gpr[4] = (0u | 27u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(1424), static_cast<std::uint8_t>(ctx.gpr[22]));
      if (branch_taken) {
          goto L_08AD1424;
      }
      goto L_08AD12FC;
    }
L_08AD12FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
        goto L_08AD1314;
    }
    goto L_08AD1308;
L_08AD1308:
    ctx.gpr[31] = (0x08AD1310u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD1310u) goto L_08AD1310;
    return;
L_08AD1310:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    goto L_08AD1314;
L_08AD1314:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1350;
      }
      goto L_08AD1320;
    }
L_08AD1320:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1334;
      }
      goto L_08AD132C;
    }
L_08AD132C:
    ctx.gpr[31] = (0x08AD1334u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD1334u) goto L_08AD1334;
    return;
L_08AD1334:
    ctx.gpr[31] = (0x08AD133Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 279u, 0x08A09200u>(ctx, &aot_mem) && ctx.pc == 0x08AD133Cu) goto L_08AD133C;
    return;
L_08AD133C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1350;
      }
      goto L_08AD1344;
    }
L_08AD1344:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(1380), ctx.gpr[23]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(1424), static_cast<std::uint8_t>(ctx.gpr[22]));
      if (branch_taken) {
          goto L_08AD1424;
      }
      goto L_08AD1350;
    }
L_08AD1350:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1364;
      }
      goto L_08AD135C;
    }
L_08AD135C:
    ctx.gpr[31] = (0x08AD1364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD1364u) goto L_08AD1364;
    return;
L_08AD1364:
    ctx.gpr[31] = (0x08AD136Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 279u, 0x08A09200u>(ctx, &aot_mem) && ctx.pc == 0x08AD136Cu) goto L_08AD136C;
    return;
L_08AD136C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1384;
      }
      goto L_08AD1374;
    }
L_08AD1374:
    ctx.gpr[4] = (0u | 17u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(1424), static_cast<std::uint8_t>(ctx.gpr[22]));
      if (branch_taken) {
          goto L_08AD1424;
      }
      goto L_08AD1384;
    }
L_08AD1384:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
        goto L_08AD139C;
    }
    goto L_08AD1390;
L_08AD1390:
    ctx.gpr[31] = (0x08AD1398u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD1398u) goto L_08AD1398;
    return;
L_08AD1398:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    goto L_08AD139C;
L_08AD139C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD13BC;
      }
      goto L_08AD13AC;
    }
L_08AD13AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AD13C4;
      }
      goto L_08AD13BC;
    }
L_08AD13BC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08AD13C4;
L_08AD13C4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1400;
      }
      goto L_08AD13CC;
    }
L_08AD13CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
        goto L_08AD13E4;
    }
    goto L_08AD13D8;
L_08AD13D8:
    ctx.gpr[31] = (0x08AD13E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD13E0u) goto L_08AD13E0;
    return;
L_08AD13E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    goto L_08AD13E4;
L_08AD13E4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1400;
      }
      goto L_08AD13F0;
    }
L_08AD13F0:
    ctx.gpr[4] = (0u | 26u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(1424), static_cast<std::uint8_t>(ctx.gpr[22]));
      if (branch_taken) {
          goto L_08AD1424;
      }
      goto L_08AD1400;
    }
L_08AD1400:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1418;
      }
      goto L_08AD1408;
    }
L_08AD1408:
    ctx.gpr[4] = (0u | 26u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(1424), static_cast<std::uint8_t>(ctx.gpr[22]));
      if (branch_taken) {
          goto L_08AD1424;
      }
      goto L_08AD1418;
    }
L_08AD1418:
    ctx.gpr[4] = (0u | 14u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(1424), static_cast<std::uint8_t>(0u));
    goto L_08AD1424;
L_08AD1424:
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-4576), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-20648)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1440;
      }
      goto L_08AD1438;
    }
L_08AD1438:
    ctx.gpr[31] = (0x08AD1440u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA4BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD1440u) goto L_08AD1440;
    return;
L_08AD1440:
    ctx.gpr[31] = (0x08AD1448u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-20648)));
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 479u, 0x0882BC80u>(ctx, &aot_mem) && ctx.pc == 0x08AD1448u) goto L_08AD1448;
    return;
L_08AD1448:
    ctx.gpr[31] = (0x08AD1450u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 771u, 0x089C30ECu>(ctx, &aot_mem) && ctx.pc == 0x08AD1450u) goto L_08AD1450;
    return;
L_08AD1450:
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
L_08AD1480:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.gpr[18] = (2275u << 16u);
    ctx.gpr[19] = (2227u << 16u);
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[21] = (2232u << 16u);
    ctx.gpr[16] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(2080));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-12140));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-12120));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(13216));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[30] = (2230u << 16u);
    ctx.gpr[22] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD14E8u);
    ctx.gpr[23] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 423u, 0x089C1BE8u>(ctx, &aot_mem) && ctx.pc == 0x08AD14E8u) goto L_08AD14E8;
    return;
L_08AD14E8:
    ctx.gpr[4] = (2278u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD14F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6352));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 411u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD14F8u) goto L_08AD14F8;
    return;
L_08AD14F8:
    ctx.gpr[31] = (0x08AD1500u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 546u, 0x08A06B50u>(ctx, &aot_mem) && ctx.pc == 0x08AD1500u) goto L_08AD1500;
    return;
L_08AD1500:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(-7060), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29200), 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD151Cu);
    ctx.gpr[5] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 165u, 0x088E8D6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD151Cu) goto L_08AD151C;
    return;
L_08AD151C:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AD1534u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-12096));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 438u, 0x089C1E98u>(ctx, &aot_mem) && ctx.pc == 0x08AD1534u) goto L_08AD1534;
    return;
L_08AD1534:
    ctx.gpr[31] = (0x08AD153Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 166u, 0x088E8D74u>(ctx, &aot_mem) && ctx.pc == 0x08AD153Cu) goto L_08AD153C;
    return;
L_08AD153C:
    ctx.gpr[31] = (0x08AD1544u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 51u, 0x08A8C42Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD1544u) goto L_08AD1544;
    return;
L_08AD1544:
    ctx.gpr[31] = (0x08AD154Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 652u, 0x0883B674u>(ctx, &aot_mem) && ctx.pc == 0x08AD154Cu) goto L_08AD154C;
    return;
L_08AD154C:
    ctx.gpr[31] = (0x08AD1554u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 130u, 0x08908F00u>(ctx, &aot_mem) && ctx.pc == 0x08AD1554u) goto L_08AD1554;
    return;
L_08AD1554:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7680));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AD1568u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 288u, 0x088EDFF0u>(ctx, &aot_mem) && ctx.pc == 0x08AD1568u) goto L_08AD1568;
    return;
L_08AD1568:
    ctx.gpr[31] = (0x08AD1570u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 72u, 0x08A28958u>(ctx, &aot_mem) && ctx.pc == 0x08AD1570u) goto L_08AD1570;
    return;
L_08AD1570:
    ctx.gpr[31] = (0x08AD1578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 405u, 0x08ABA280u>(ctx, &aot_mem) && ctx.pc == 0x08AD1578u) goto L_08AD1578;
    return;
L_08AD1578:
    ctx.gpr[31] = (0x08AD1580u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 552u, 0x08932CC8u>(ctx, &aot_mem) && ctx.pc == 0x08AD1580u) goto L_08AD1580;
    return;
L_08AD1580:
    ctx.gpr[31] = (0x08AD1588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 452u, 0x08A8E228u>(ctx, &aot_mem) && ctx.pc == 0x08AD1588u) goto L_08AD1588;
    return;
L_08AD1588:
    ctx.gpr[31] = (0x08AD1590u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 404u, 0x08AE9B90u>(ctx, &aot_mem) && ctx.pc == 0x08AD1590u) goto L_08AD1590;
    return;
L_08AD1590:
    ctx.gpr[31] = (0x08AD1598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 149u, 0x0883CA74u>(ctx, &aot_mem) && ctx.pc == 0x08AD1598u) goto L_08AD1598;
    return;
L_08AD1598:
    ctx.gpr[31] = (0x08AD15A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 176u, 0x08878EA0u>(ctx, &aot_mem) && ctx.pc == 0x08AD15A0u) goto L_08AD15A0;
    return;
L_08AD15A0:
    ctx.gpr[31] = (0x08AD15A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 483u, 0x0887AF3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD15A8u) goto L_08AD15A8;
    return;
L_08AD15A8:
    ctx.gpr[31] = (0x08AD15B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 654u, 0x08A9A150u>(ctx, &aot_mem) && ctx.pc == 0x08AD15B0u) goto L_08AD15B0;
    return;
L_08AD15B0:
    ctx.gpr[31] = (0x08AD15B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 166u, 0x08A24CA8u>(ctx, &aot_mem) && ctx.pc == 0x08AD15B8u) goto L_08AD15B8;
    return;
L_08AD15B8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD15C4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 165u, 0x088E8D6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD15C4u) goto L_08AD15C4;
    return;
L_08AD15C4:
    ctx.gpr[31] = (0x08AD15CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 8u, 0x088C0144u>(ctx, &aot_mem) && ctx.pc == 0x08AD15CCu) goto L_08AD15CC;
    return;
L_08AD15CC:
    ctx.gpr[31] = (0x08AD15D4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 166u, 0x088E8D74u>(ctx, &aot_mem) && ctx.pc == 0x08AD15D4u) goto L_08AD15D4;
    return;
L_08AD15D4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD15E0u);
    ctx.gpr[5] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 165u, 0x088E8D6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD15E0u) goto L_08AD15E0;
    return;
L_08AD15E0:
    ctx.gpr[31] = (0x08AD15E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 120u, 0x08998B54u>(ctx, &aot_mem) && ctx.pc == 0x08AD15E8u) goto L_08AD15E8;
    return;
L_08AD15E8:
    ctx.gpr[31] = (0x08AD15F0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 166u, 0x088E8D74u>(ctx, &aot_mem) && ctx.pc == 0x08AD15F0u) goto L_08AD15F0;
    return;
L_08AD15F0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD15FCu);
    ctx.gpr[5] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 165u, 0x088E8D6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD15FCu) goto L_08AD15FC;
    return;
L_08AD15FC:
    ctx.gpr[31] = (0x08AD1604u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 11u, 0x089EC188u>(ctx, &aot_mem) && ctx.pc == 0x08AD1604u) goto L_08AD1604;
    return;
L_08AD1604:
    ctx.gpr[31] = (0x08AD160Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 166u, 0x088E8D74u>(ctx, &aot_mem) && ctx.pc == 0x08AD160Cu) goto L_08AD160C;
    return;
L_08AD160C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD1618u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 165u, 0x088E8D6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD1618u) goto L_08AD1618;
    return;
L_08AD1618:
    ctx.gpr[31] = (0x08AD1620u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 69u, 0x08A811C8u>(ctx, &aot_mem) && ctx.pc == 0x08AD1620u) goto L_08AD1620;
    return;
L_08AD1620:
    ctx.gpr[31] = (0x08AD1628u);
    // nop
    goto L_08AD2C14;
L_08AD1628:
    ctx.gpr[31] = (0x08AD1630u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 166u, 0x088E8D74u>(ctx, &aot_mem) && ctx.pc == 0x08AD1630u) goto L_08AD1630;
    return;
L_08AD1630:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
    goto L_08AD163C;
L_08AD163C:
    ctx.gpr[31] = (0x08AD1644u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 234u, 0x089D5B7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD1644u) goto L_08AD1644;
    return;
L_08AD1644:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(368));
      if (branch_taken) {
          goto L_08AD163C;
      }
      goto L_08AD1654;
    }
L_08AD1654:
    ctx.gpr[4] = (17136u << 16u);
    ctx.gpr[31] = (0x08AD1660u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 162u, 0x0883CBECu>(ctx, &aot_mem) && ctx.pc == 0x08AD1660u) goto L_08AD1660;
    return;
L_08AD1660:
    ctx.gpr[5] = (17402u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7620), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AD1688u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12088));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 438u, 0x089C1E98u>(ctx, &aot_mem) && ctx.pc == 0x08AD1688u) goto L_08AD1688;
    return;
L_08AD1688:
    ctx.gpr[31] = (0x08AD1690u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 711u, 0x089CAF64u>(ctx, &aot_mem) && ctx.pc == 0x08AD1690u) goto L_08AD1690;
    return;
L_08AD1690:
    ctx.gpr[31] = (0x08AD1698u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 2u, 0x089C8010u>(ctx, &aot_mem) && ctx.pc == 0x08AD1698u) goto L_08AD1698;
    return;
L_08AD1698:
    ctx.gpr[31] = (0x08AD16A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 875u, 0x089C78ECu>(ctx, &aot_mem) && ctx.pc == 0x08AD16A0u) goto L_08AD16A0;
    return;
L_08AD16A0:
    ctx.gpr[31] = (0x08AD16A8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 711u, 0x089CAF64u>(ctx, &aot_mem) && ctx.pc == 0x08AD16A8u) goto L_08AD16A8;
    return;
L_08AD16A8:
    ctx.gpr[31] = (0x08AD16B0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 711u, 0x089CAF64u>(ctx, &aot_mem) && ctx.pc == 0x08AD16B0u) goto L_08AD16B0;
    return;
L_08AD16B0:
    ctx.gpr[31] = (0x08AD16B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 503u, 0x08ACE2C8u>(ctx, &aot_mem) && ctx.pc == 0x08AD16B8u) goto L_08AD16B8;
    return;
L_08AD16B8:
    ctx.gpr[31] = (0x08AD16C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 495u, 0x08A923CCu>(ctx, &aot_mem) && ctx.pc == 0x08AD16C0u) goto L_08AD16C0;
    return;
L_08AD16C0:
    ctx.gpr[31] = (0x08AD16C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 36u, 0x089C82B4u>(ctx, &aot_mem) && ctx.pc == 0x08AD16C8u) goto L_08AD16C8;
    return;
L_08AD16C8:
    ctx.gpr[31] = (0x08AD16D0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 711u, 0x089CAF64u>(ctx, &aot_mem) && ctx.pc == 0x08AD16D0u) goto L_08AD16D0;
    return;
L_08AD16D0:
    ctx.gpr[31] = (0x08AD16D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 220u, 0x08AA98BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD16D8u) goto L_08AD16D8;
    return;
L_08AD16D8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD16ECu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 438u, 0x089C1E98u>(ctx, &aot_mem) && ctx.pc == 0x08AD16ECu) goto L_08AD16EC;
    return;
L_08AD16EC:
    ctx.gpr[31] = (0x08AD16F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 608u, 0x08966A88u>(ctx, &aot_mem) && ctx.pc == 0x08AD16F4u) goto L_08AD16F4;
    return;
L_08AD16F4:
    ctx.gpr[31] = (0x08AD16FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 617u, 0x08966BACu>(ctx, &aot_mem) && ctx.pc == 0x08AD16FCu) goto L_08AD16FC;
    return;
L_08AD16FC:
    ctx.gpr[31] = (0x08AD1704u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 113u, 0x08850BFCu>(ctx, &aot_mem) && ctx.pc == 0x08AD1704u) goto L_08AD1704;
    return;
L_08AD1704:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AD171Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12072));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 438u, 0x089C1E98u>(ctx, &aot_mem) && ctx.pc == 0x08AD171Cu) goto L_08AD171C;
    return;
L_08AD171C:
    ctx.gpr[31] = (0x08AD1724u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 110u, 0x089E88FCu>(ctx, &aot_mem) && ctx.pc == 0x08AD1724u) goto L_08AD1724;
    return;
L_08AD1724:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD1738u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 438u, 0x089C1E98u>(ctx, &aot_mem) && ctx.pc == 0x08AD1738u) goto L_08AD1738;
    return;
L_08AD1738:
    ctx.gpr[31] = (0x08AD1740u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 221u, 0x08A9D0A4u>(ctx, &aot_mem) && ctx.pc == 0x08AD1740u) goto L_08AD1740;
    return;
L_08AD1740:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x08AD174Cu);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 313u, 0x089F9FBCu>(ctx, &aot_mem) && ctx.pc == 0x08AD174Cu) goto L_08AD174C;
    return;
L_08AD174C:
    ctx.gpr[31] = (0x08AD1754u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 120u, 0x089290A8u>(ctx, &aot_mem) && ctx.pc == 0x08AD1754u) goto L_08AD1754;
    return;
L_08AD1754:
    ctx.gpr[31] = (0x08AD175Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 149u, 0x08868EB4u>(ctx, &aot_mem) && ctx.pc == 0x08AD175Cu) goto L_08AD175C;
    return;
L_08AD175C:
    ctx.gpr[31] = (0x08AD1764u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 225u, 0x08AE52BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD1764u) goto L_08AD1764;
    return;
L_08AD1764:
    ctx.gpr[31] = (0x08AD176Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 495u, 0x089326E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD176Cu) goto L_08AD176C;
    return;
L_08AD176C:
    ctx.gpr[31] = (0x08AD1774u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 668u, 0x08806B98u>(ctx, &aot_mem) && ctx.pc == 0x08AD1774u) goto L_08AD1774;
    return;
L_08AD1774:
    ctx.gpr[4] = (2274u << 16u);
    ctx.gpr[31] = (0x08AD1780u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19632));
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 32u, 0x08930238u>(ctx, &aot_mem) && ctx.pc == 0x08AD1780u) goto L_08AD1780;
    return;
L_08AD1780:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AD1798u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12048));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 438u, 0x089C1E98u>(ctx, &aot_mem) && ctx.pc == 0x08AD1798u) goto L_08AD1798;
    return;
L_08AD1798:
    ctx.gpr[31] = (0x08AD17A0u);
    ctx.gpr[4] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 54u, 0x0883C330u>(ctx, &aot_mem) && ctx.pc == 0x08AD17A0u) goto L_08AD17A0;
    return;
L_08AD17A0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD17ACu);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 165u, 0x088E8D6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD17ACu) goto L_08AD17AC;
    return;
L_08AD17AC:
    ctx.gpr[31] = (0x08AD17B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 320u, 0x088456DCu>(ctx, &aot_mem) && ctx.pc == 0x08AD17B4u) goto L_08AD17B4;
    return;
L_08AD17B4:
    ctx.gpr[31] = (0x08AD17BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 673u, 0x0893B628u>(ctx, &aot_mem) && ctx.pc == 0x08AD17BCu) goto L_08AD17BC;
    return;
L_08AD17BC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD17E8;
      }
      goto L_08AD17C8;
    }
L_08AD17C8:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4576));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1133)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[31] = (0x08AD17E0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 404u, 0x08961D90u>(ctx, &aot_mem) && ctx.pc == 0x08AD17E0u) goto L_08AD17E0;
    return;
L_08AD17E0:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1133), static_cast<std::uint8_t>(0u));
    goto L_08AD17E8;
L_08AD17E8:
    ctx.gpr[31] = (0x08AD17F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 611u, 0x08AC3A98u>(ctx, &aot_mem) && ctx.pc == 0x08AD17F0u) goto L_08AD17F0;
    return;
L_08AD17F0:
    ctx.gpr[31] = (0x08AD17F8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 166u, 0x088E8D74u>(ctx, &aot_mem) && ctx.pc == 0x08AD17F8u) goto L_08AD17F8;
    return;
L_08AD17F8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD180Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 438u, 0x089C1E98u>(ctx, &aot_mem) && ctx.pc == 0x08AD180Cu) goto L_08AD180C;
    return;
L_08AD180C:
    ctx.gpr[31] = (0x08AD1814u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 529u, 0x08A43398u>(ctx, &aot_mem) && ctx.pc == 0x08AD1814u) goto L_08AD1814;
    return;
L_08AD1814:
    ctx.gpr[31] = (0x08AD181Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 361u, 0x0897A7ACu>(ctx, &aot_mem) && ctx.pc == 0x08AD181Cu) goto L_08AD181C;
    return;
L_08AD181C:
    ctx.gpr[31] = (0x08AD1824u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 587u, 0x08ABB5F0u>(ctx, &aot_mem) && ctx.pc == 0x08AD1824u) goto L_08AD1824;
    return;
L_08AD1824:
    ctx.gpr[31] = (0x08AD182Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 637u, 0x08917604u>(ctx, &aot_mem) && ctx.pc == 0x08AD182Cu) goto L_08AD182C;
    return;
L_08AD182C:
    ctx.gpr[31] = (0x08AD1834u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 308u, 0x08A828E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD1834u) goto L_08AD1834;
    return;
L_08AD1834:
    ctx.gpr[31] = (0x08AD183Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 99u, 0x08A886ACu>(ctx, &aot_mem) && ctx.pc == 0x08AD183Cu) goto L_08AD183C;
    return;
L_08AD183C:
    ctx.gpr[31] = (0x08AD1844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 406u, 0x08836500u>(ctx, &aot_mem) && ctx.pc == 0x08AD1844u) goto L_08AD1844;
    return;
L_08AD1844:
    ctx.gpr[31] = (0x08AD184Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 306u, 0x08825E64u>(ctx, &aot_mem) && ctx.pc == 0x08AD184Cu) goto L_08AD184C;
    return;
L_08AD184C:
    ctx.gpr[31] = (0x08AD1854u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 111u, 0x089F8D6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD1854u) goto L_08AD1854;
    return;
L_08AD1854:
    ctx.gpr[31] = (0x08AD185Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 679u, 0x0886BAF0u>(ctx, &aot_mem) && ctx.pc == 0x08AD185Cu) goto L_08AD185C;
    return;
L_08AD185C:
    ctx.gpr[31] = (0x08AD1864u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 305u, 0x089653D4u>(ctx, &aot_mem) && ctx.pc == 0x08AD1864u) goto L_08AD1864;
    return;
L_08AD1864:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AD187Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12032));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 438u, 0x089C1E98u>(ctx, &aot_mem) && ctx.pc == 0x08AD187Cu) goto L_08AD187C;
    return;
L_08AD187C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AD1894u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12004));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 438u, 0x089C1E98u>(ctx, &aot_mem) && ctx.pc == 0x08AD1894u) goto L_08AD1894;
    return;
L_08AD1894:
    ctx.gpr[31] = (0x08AD189Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 715u, 0x0896F860u>(ctx, &aot_mem) && ctx.pc == 0x08AD189Cu) goto L_08AD189C;
    return;
L_08AD189C:
    ctx.gpr[31] = (0x08AD18A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 456u, 0x08916510u>(ctx, &aot_mem) && ctx.pc == 0x08AD18A4u) goto L_08AD18A4;
    return;
L_08AD18A4:
    ctx.gpr[31] = (0x08AD18ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 294u, 0x08AA5688u>(ctx, &aot_mem) && ctx.pc == 0x08AD18ACu) goto L_08AD18AC;
    return;
L_08AD18AC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD18B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11976));
    goto L_08AD0578;
L_08AD18B8:
    ctx.gpr[31] = (0x08AD18C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 549u, 0x08A8EA10u>(ctx, &aot_mem) && ctx.pc == 0x08AD18C0u) goto L_08AD18C0;
    return;
L_08AD18C0:
    ctx.gpr[31] = (0x08AD18C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 656u, 0x08A9A164u>(ctx, &aot_mem) && ctx.pc == 0x08AD18C8u) goto L_08AD18C8;
    return;
L_08AD18C8:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11964));
    ctx.gpr[31] = (0x08AD18E4u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-11948));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 438u, 0x089C1E98u>(ctx, &aot_mem) && ctx.pc == 0x08AD18E4u) goto L_08AD18E4;
    return;
L_08AD18E4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1910;
      }
      goto L_08AD18F0;
    }
L_08AD18F0:
    ctx.gpr[31] = (0x08AD18F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 28u, 0x089581D4u>(ctx, &aot_mem) && ctx.pc == 0x08AD18F8u) goto L_08AD18F8;
    return;
L_08AD18F8:
    ctx.gpr[31] = (0x08AD1900u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 472u, 0x08962494u>(ctx, &aot_mem) && ctx.pc == 0x08AD1900u) goto L_08AD1900;
    return;
L_08AD1900:
    ctx.gpr[31] = (0x08AD1908u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 207u, 0x08900C78u>(ctx, &aot_mem) && ctx.pc == 0x08AD1908u) goto L_08AD1908;
    return;
L_08AD1908:
    ctx.gpr[31] = (0x08AD1910u);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 567u, 0x089C66B0u>(ctx, &aot_mem) && ctx.pc == 0x08AD1910u) goto L_08AD1910;
    return;
L_08AD1910:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD191Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11940));
    goto L_08AD0578;
L_08AD191C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AD1934u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11928));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 438u, 0x089C1E98u>(ctx, &aot_mem) && ctx.pc == 0x08AD1934u) goto L_08AD1934;
    return;
L_08AD1934:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-7060)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7836), ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD194Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11916));
    goto L_08AD0578;
L_08AD194C:
    ctx.gpr[31] = (0x08AD1954u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08AD1954u) goto L_08AD1954;
    return;
L_08AD1954:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD1960u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 632u, 0x08A96B44u>(ctx, &aot_mem) && ctx.pc == 0x08AD1960u) goto L_08AD1960;
    return;
L_08AD1960:
    ctx.gpr[31] = (0x08AD1968u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08AD1968u) goto L_08AD1968;
    return;
L_08AD1968:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD1974u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 632u, 0x08A96B44u>(ctx, &aot_mem) && ctx.pc == 0x08AD1974u) goto L_08AD1974;
    return;
L_08AD1974:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD1980u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11904));
    goto L_08AD0578;
L_08AD1980:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AD1990u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 150u, 0x08864AC0u>(ctx, &aot_mem) && ctx.pc == 0x08AD1990u) goto L_08AD1990;
    return;
L_08AD1990:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD199Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11892));
    goto L_08AD0578;
L_08AD199C:
    ctx.gpr[2] = (ctx.gpr[23] | 0u);
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
L_08AD19D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[16]);
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-4576));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1133)));
    ctx.gpr[19] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-26208));
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[18] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (2232u << 16u);
      if (branch_taken) {
          goto L_08AD1AD0;
      }
      goto L_08AD1A24;
    }
L_08AD1A24:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1A58;
      }
      goto L_08AD1A30;
    }
L_08AD1A30:
    ctx.gpr[31] = (0x08AD1A38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 28u, 0x089581D4u>(ctx, &aot_mem) && ctx.pc == 0x08AD1A38u) goto L_08AD1A38;
    return;
L_08AD1A38:
    ctx.gpr[31] = (0x08AD1A40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 472u, 0x08962494u>(ctx, &aot_mem) && ctx.pc == 0x08AD1A40u) goto L_08AD1A40;
    return;
L_08AD1A40:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[31] = (0x08AD1A50u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 207u, 0x08900C78u>(ctx, &aot_mem) && ctx.pc == 0x08AD1A50u) goto L_08AD1A50;
    return;
L_08AD1A50:
    ctx.gpr[31] = (0x08AD1A58u);
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 567u, 0x089C66B0u>(ctx, &aot_mem) && ctx.pc == 0x08AD1A58u) goto L_08AD1A58;
    return;
L_08AD1A58:
    ctx.gpr[31] = (0x08AD1A60u);
    // nop
    goto L_08AD10DC;
L_08AD1A60:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1A9C;
      }
      goto L_08AD1A80;
    }
L_08AD1A80:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x08AD1A94u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11880));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 660u, 0x089C6C8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD1A94u) goto L_08AD1A94;
    return;
L_08AD1A94:
    ctx.gpr[31] = (0x08AD1A9Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 711u, 0x089CAF64u>(ctx, &aot_mem) && ctx.pc == 0x08AD1A9Cu) goto L_08AD1A9C;
    return;
L_08AD1A9C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(21945), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1ACC;
      }
      goto L_08AD1AB4;
    }
L_08AD1AB4:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[31] = (0x08AD1AC4u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 207u, 0x08900C78u>(ctx, &aot_mem) && ctx.pc == 0x08AD1AC4u) goto L_08AD1AC4;
    return;
L_08AD1AC4:
    ctx.gpr[31] = (0x08AD1ACCu);
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 567u, 0x089C66B0u>(ctx, &aot_mem) && ctx.pc == 0x08AD1ACCu) goto L_08AD1ACC;
    return;
L_08AD1ACC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1133), static_cast<std::uint8_t>(0u));
    goto L_08AD1AD0;
L_08AD1AD0:
    ctx.gpr[31] = (0x08AD1AD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 514u, 0x08A96424u>(ctx, &aot_mem) && ctx.pc == 0x08AD1AD8u) goto L_08AD1AD8;
    return;
L_08AD1AD8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(296)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08AD1AFC;
      }
      goto L_08AD1AE4;
    }
L_08AD1AE4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(297)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1AFC;
      }
      goto L_08AD1AF0;
    }
L_08AD1AF0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AD1AFCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 127u, 0x089D53ACu>(ctx, &aot_mem) && ctx.pc == 0x08AD1AFCu) goto L_08AD1AFC;
    return;
L_08AD1AFC:
    ctx.gpr[31] = (0x08AD1B04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 63u, 0x08824748u>(ctx, &aot_mem) && ctx.pc == 0x08AD1B04u) goto L_08AD1B04;
    return;
L_08AD1B04:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-6888)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(936)));
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-6896)));
        goto L_08AD1B28;
    }
    goto L_08AD1B1C;
L_08AD1B1C:
    ctx.gpr[31] = (0x08AD1B24u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 699u, 0x08ADAE64u>(ctx, &aot_mem) && ctx.pc == 0x08AD1B24u) goto L_08AD1B24;
    return;
L_08AD1B24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-6896)));
    goto L_08AD1B28;
L_08AD1B28:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1B80;
      }
      goto L_08AD1B30;
    }
L_08AD1B30:
    ctx.gpr[31] = (0x08AD1B38u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(-6896), ctx.gpr[20]);
    ctx.pc = 0x08B0BBC4u;
    return;
L_08AD1B38:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AD1B4Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08B0BAECu;
    return;
L_08AD1B4C:
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
    ctx.gpr[4] = (2232u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6892), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AD1B80;
L_08AD1B80:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD21F8;
      }
      goto L_08AD1B8C;
    }
L_08AD1B8C:
    ctx.gpr[22] = (2232u << 16u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(100)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[23] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AD1BD0;
      }
      goto L_08AD1BB0;
    }
L_08AD1BB0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AD1BD4;
      }
      goto L_08AD1BCC;
    }
L_08AD1BCC:
    ctx.gpr[4] = (0u | 1u);
    goto L_08AD1BD0;
L_08AD1BD0:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08AD1BD4;
L_08AD1BD4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1C28;
      }
      goto L_08AD1BDC;
    }
L_08AD1BDC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(225)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1C28;
      }
      goto L_08AD1BE8;
    }
L_08AD1BE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20652)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20652)));
        goto L_08AD1C00;
    }
    goto L_08AD1BF4;
L_08AD1BF4:
    ctx.gpr[31] = (0x08AD1BFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD1BFCu) goto L_08AD1BFC;
    return;
L_08AD1BFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20652)));
    goto L_08AD1C00;
L_08AD1C00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1C28;
      }
      goto L_08AD1C18;
    }
L_08AD1C18:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD1C24u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11872));
    goto L_08AD0578;
L_08AD1C24:
    ctx.gpr[21] = (0u | 1u);
    goto L_08AD1C28;
L_08AD1C28:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(225)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1C6C;
      }
      goto L_08AD1C34;
    }
L_08AD1C34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1C6C;
      }
      goto L_08AD1C44;
    }
L_08AD1C44:
    ctx.gpr[31] = (0x08AD1C4Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 629u, 0x088A7C18u>(ctx, &aot_mem) && ctx.pc == 0x08AD1C4Cu) goto L_08AD1C4C;
    return;
L_08AD1C4C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1C6C;
      }
      goto L_08AD1C54;
    }
L_08AD1C54:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD1C60u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11836));
    goto L_08AD0578;
L_08AD1C60:
    ctx.gpr[21] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08AD1CB4;
      }
      goto L_08AD1C6C;
    }
L_08AD1C6C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(225)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1CB4;
      }
      goto L_08AD1C78;
    }
L_08AD1C78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1CB4;
      }
      goto L_08AD1C90;
    }
L_08AD1C90:
    ctx.gpr[31] = (0x08AD1C98u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 56u, 0x088A8304u>(ctx, &aot_mem) && ctx.pc == 0x08AD1C98u) goto L_08AD1C98;
    return;
L_08AD1C98:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1CB4;
      }
      goto L_08AD1CA0;
    }
L_08AD1CA0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD1CACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11800));
    goto L_08AD0578;
L_08AD1CAC:
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_08AD1CB4;
L_08AD1CB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20652)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20652)));
        goto L_08AD1CCC;
    }
    goto L_08AD1CC0;
L_08AD1CC0:
    ctx.gpr[31] = (0x08AD1CC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD1CC8u) goto L_08AD1CC8;
    return;
L_08AD1CC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20652)));
    goto L_08AD1CCC;
L_08AD1CCC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD1CEC;
      }
      goto L_08AD1CDC;
    }
L_08AD1CDC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AD1CF4;
      }
      goto L_08AD1CEC;
    }
L_08AD1CEC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08AD1CF4;
L_08AD1CF4:
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[21]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1D20;
      }
      goto L_08AD1D00;
    }
L_08AD1D00:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1D20;
      }
      goto L_08AD1D0C;
    }
L_08AD1D0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD1D34;
      }
      goto L_08AD1D18;
    }
L_08AD1D18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AD1D58;
      }
      goto L_08AD1D20;
    }
L_08AD1D20:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AD1D2Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08AD1140;
L_08AD1D2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD256C;
      }
      goto L_08AD1D34;
    }
L_08AD1D34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AD1D58;
      }
      goto L_08AD1D50;
    }
L_08AD1D50:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08AD1D58;
L_08AD1D58:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1FBC;
      }
      goto L_08AD1D60;
    }
L_08AD1D60:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD1D6Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11748));
    goto L_08AD0578;
L_08AD1D6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20652)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1D80;
      }
      goto L_08AD1D78;
    }
L_08AD1D78:
    ctx.gpr[31] = (0x08AD1D80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD1D80u) goto L_08AD1D80;
    return;
L_08AD1D80:
    ctx.gpr[31] = (0x08AD1D88u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20652)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 778u, 0x08A07F4Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD1D88u) goto L_08AD1D88;
    return;
L_08AD1D88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20652)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20652)));
        goto L_08AD1DA0;
    }
    goto L_08AD1D94;
L_08AD1D94:
    ctx.gpr[31] = (0x08AD1D9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD1D9Cu) goto L_08AD1D9C;
    return;
L_08AD1D9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20652)));
    goto L_08AD1DA0;
L_08AD1DA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1ED0;
      }
      goto L_08AD1DB8;
    }
L_08AD1DB8:
    ctx.gpr[31] = (0x08AD1DC0u);
    // nop
    ctx.pc = 0x08B0BBC4u;
    return;
L_08AD1DC0:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AD1DD4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08B0BAECu;
    return;
L_08AD1DD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (13702u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 14269u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (2232u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6892)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD1E8C;
      }
      goto L_08AD1E24;
    }
L_08AD1E24:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD1E30u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11712));
    ctx.pc = 0x08B0BBC4u;
    return;
L_08AD1E30:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AD1E44u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08B0BAECu;
    return;
L_08AD1E44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6892)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[31] = (0x08AD1E70u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08AD1E70u) goto L_08AD1E70;
    return;
L_08AD1E70:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD1E80u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    goto L_08AD0578;
L_08AD1E80:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08AD1E8Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08AD1140;
L_08AD1E8C:
    ctx.gpr[31] = (0x08AD1E94u);
    // nop
    ctx.pc = 0x08B0BBC4u;
    return;
L_08AD1E94:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AD1EA8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08B0BAECu;
    return;
L_08AD1EA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-6892), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AD256C;
      }
      goto L_08AD1ED0;
    }
L_08AD1ED0:
    ctx.gpr[21] = (2227u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-11672));
    ctx.gpr[23] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD1EF0u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 438u, 0x089C1E98u>(ctx, &aot_mem) && ctx.pc == 0x08AD1EF0u) goto L_08AD1EF0;
    return;
L_08AD1EF0:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(28))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(ctx.gpr[23]));
    ctx.gpr[31] = (0x08AD1F44u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 862u, 0x088ABC8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD1F44u) goto L_08AD1F44;
    return;
L_08AD1F44:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1F94;
      }
      goto L_08AD1F50;
    }
L_08AD1F50:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD1F64u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 438u, 0x089C1E98u>(ctx, &aot_mem) && ctx.pc == 0x08AD1F64u) goto L_08AD1F64;
    return;
L_08AD1F64:
    ctx.gpr[31] = (0x08AD1F6Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 557u, 0x088AE40Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD1F6Cu) goto L_08AD1F6C;
    return;
L_08AD1F6C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1FA8;
      }
      goto L_08AD1F74;
    }
L_08AD1F74:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD1F80u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11660));
    goto L_08AD0578;
L_08AD1F80:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AD1F8Cu);
    ctx.gpr[5] = (0u | 0u);
    goto L_08AD1140;
L_08AD1F8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD256C;
      }
      goto L_08AD1F94;
    }
L_08AD1F94:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AD1FA0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08AD1140;
L_08AD1FA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD256C;
      }
      goto L_08AD1FA8;
    }
L_08AD1FA8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD1FBCu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 438u, 0x089C1E98u>(ctx, &aot_mem) && ctx.pc == 0x08AD1FBCu) goto L_08AD1FBC;
    return;
L_08AD1FBC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1FDC;
      }
      goto L_08AD1FC8;
    }
L_08AD1FC8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(225)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1FF0;
      }
      goto L_08AD1FD4;
    }
L_08AD1FD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD21EC;
      }
      goto L_08AD1FDC;
    }
L_08AD1FDC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AD1FE8u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08AD1140;
L_08AD1FE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD256C;
      }
      goto L_08AD1FF0;
    }
L_08AD1FF0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD1FFCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11628));
    goto L_08AD0578;
L_08AD1FFC:
    ctx.gpr[31] = (0x08AD2004u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 584u, 0x088A7940u>(ctx, &aot_mem) && ctx.pc == 0x08AD2004u) goto L_08AD2004;
    return;
L_08AD2004:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD21CC;
      }
      goto L_08AD200C;
    }
L_08AD200C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD21B8;
      }
      goto L_08AD2018;
    }
L_08AD2018:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD2024u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11584));
    goto L_08AD0578;
L_08AD2024:
    ctx.gpr[21] = (2227u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-11672));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD2040u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 438u, 0x089C1E98u>(ctx, &aot_mem) && ctx.pc == 0x08AD2040u) goto L_08AD2040;
    return;
L_08AD2040:
    ctx.gpr[31] = (0x08AD2048u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 428u, 0x08986958u>(ctx, &aot_mem) && ctx.pc == 0x08AD2048u) goto L_08AD2048;
    return;
L_08AD2048:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD21A4;
      }
      goto L_08AD2054;
    }
L_08AD2054:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2190;
      }
      goto L_08AD2060;
    }
L_08AD2060:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD206Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11564));
    goto L_08AD0578;
L_08AD206C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD2080u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 438u, 0x089C1E98u>(ctx, &aot_mem) && ctx.pc == 0x08AD2080u) goto L_08AD2080;
    return;
L_08AD2080:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD217C;
      }
      goto L_08AD208C;
    }
L_08AD208C:
    ctx.gpr[31] = (0x08AD2094u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 404u, 0x08961D90u>(ctx, &aot_mem) && ctx.pc == 0x08AD2094u) goto L_08AD2094;
    return;
L_08AD2094:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2168;
      }
      goto L_08AD20A0;
    }
L_08AD20A0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD20ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11544));
    goto L_08AD0578;
L_08AD20AC:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD20C0u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 438u, 0x089C1E98u>(ctx, &aot_mem) && ctx.pc == 0x08AD20C0u) goto L_08AD20C0;
    return;
L_08AD20C0:
    ctx.gpr[31] = (0x08AD20C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 472u, 0x08962494u>(ctx, &aot_mem) && ctx.pc == 0x08AD20C8u) goto L_08AD20C8;
    return;
L_08AD20C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2154;
      }
      goto L_08AD20D4;
    }
L_08AD20D4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD20E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11524));
    goto L_08AD0578;
L_08AD20E0:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD20F4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 438u, 0x089C1E98u>(ctx, &aot_mem) && ctx.pc == 0x08AD20F4u) goto L_08AD20F4;
    return;
L_08AD20F4:
    ctx.gpr[31] = (0x08AD20FCu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 641u, 0x088AEAB4u>(ctx, &aot_mem) && ctx.pc == 0x08AD20FCu) goto L_08AD20FC;
    return;
L_08AD20FC:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[31] = (0x08AD210Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 567u, 0x089C66B0u>(ctx, &aot_mem) && ctx.pc == 0x08AD210Cu) goto L_08AD210C;
    return;
L_08AD210C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2140;
      }
      goto L_08AD2118;
    }
L_08AD2118:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD2124u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11504));
    goto L_08AD0578;
L_08AD2124:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD2138u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 438u, 0x089C1E98u>(ctx, &aot_mem) && ctx.pc == 0x08AD2138u) goto L_08AD2138;
    return;
L_08AD2138:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD21EC;
      }
      goto L_08AD2140;
    }
L_08AD2140:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AD214Cu);
    ctx.gpr[5] = (0u | 0u);
    goto L_08AD1140;
L_08AD214C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD256C;
      }
      goto L_08AD2154;
    }
L_08AD2154:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AD2160u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08AD1140;
L_08AD2160:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD256C;
      }
      goto L_08AD2168;
    }
L_08AD2168:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AD2174u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08AD1140;
L_08AD2174:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD256C;
      }
      goto L_08AD217C;
    }
L_08AD217C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AD2188u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08AD1140;
L_08AD2188:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD256C;
      }
      goto L_08AD2190;
    }
L_08AD2190:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AD219Cu);
    ctx.gpr[5] = (0u | 0u);
    goto L_08AD1140;
L_08AD219C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD256C;
      }
      goto L_08AD21A4;
    }
L_08AD21A4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AD21B0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08AD1140;
L_08AD21B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD256C;
      }
      goto L_08AD21B8;
    }
L_08AD21B8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AD21C4u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08AD1140;
L_08AD21C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD256C;
      }
      goto L_08AD21CC;
    }
L_08AD21CC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD21E4;
      }
      goto L_08AD21D8;
    }
L_08AD21D8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AD21E4u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08AD1140;
L_08AD21E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD256C;
      }
      goto L_08AD21EC;
    }
L_08AD21EC:
    ctx.gpr[19] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AD2250;
      }
      goto L_08AD21F8;
    }
L_08AD21F8:
    ctx.gpr[31] = (0x08AD2200u);
    // nop
    ctx.pc = 0x08B0BBC4u;
    return;
L_08AD2200:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AD2214u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08B0BAECu;
    return;
L_08AD2214:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (13702u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 14269u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[19] = (2227u << 16u);
    ctx.gpr[20] = (2230u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6892), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AD2250;
L_08AD2250:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1133)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD22A8;
      }
      goto L_08AD225C;
    }
L_08AD225C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD2268u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13820)));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 199u, 0x08871544u>(ctx, &aot_mem) && ctx.pc == 0x08AD2268u) goto L_08AD2268;
    return;
L_08AD2268:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.gpr[31] = (0x08AD2274u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.pc = 0x08B0BAE4u;
    return;
L_08AD2274:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[31] = (0x08AD2284u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.pc = 0x08B0BBDCu;
    return;
L_08AD2284:
    ctx.gpr[31] = (0x08AD228Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 381u, 0x089C5924u>(ctx, &aot_mem) && ctx.pc == 0x08AD228Cu) goto L_08AD228C;
    return;
L_08AD228C:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.gpr[31] = (0x08AD2298u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.pc = 0x08B0BAE4u;
    return;
L_08AD2298:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.gpr[31] = (0x08AD22A8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.pc = 0x08B0BBDCu;
    return;
L_08AD22A8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-6920)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(5396), 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-6888)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD256C;
      }
      goto L_08AD22C0;
    }
L_08AD22C0:
    ctx.gpr[31] = (0x08AD22C8u);
    // nop
    goto L_08AD36C0;
L_08AD22C8:
    ctx.gpr[31] = (0x08AD22D0u);
    // nop
    goto L_08AD36C8;
L_08AD22D0:
    ctx.gpr[31] = (0x08AD22D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 77u, 0x08A54554u>(ctx, &aot_mem) && ctx.pc == 0x08AD22D8u) goto L_08AD22D8;
    return;
L_08AD22D8:
    ctx.gpr[31] = (0x08AD22E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 655u, 0x08A9A15Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD22E0u) goto L_08AD22E0;
    return;
L_08AD22E0:
    ctx.gpr[31] = (0x08AD22E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 657u, 0x08A9A170u>(ctx, &aot_mem) && ctx.pc == 0x08AD22E8u) goto L_08AD22E8;
    return;
L_08AD22E8:
    ctx.gpr[31] = (0x08AD22F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 521u, 0x08A9646Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD22F0u) goto L_08AD22F0;
    return;
L_08AD22F0:
    ctx.gpr[31] = (0x08AD22F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 61u, 0x0883C458u>(ctx, &aot_mem) && ctx.pc == 0x08AD22F8u) goto L_08AD22F8;
    return;
L_08AD22F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27772)));
    ctx.gpr[18] = (2275u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(2080));
      if (branch_taken) {
          goto L_08AD2314;
      }
      goto L_08AD2308;
    }
L_08AD2308:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08AD2314u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 245u, 0x088A9138u>(ctx, &aot_mem) && ctx.pc == 0x08AD2314u) goto L_08AD2314;
    return;
L_08AD2314:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1133)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2328;
      }
      goto L_08AD2320;
    }
L_08AD2320:
    ctx.gpr[31] = (0x08AD2328u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 678u, 0x08933FA0u>(ctx, &aot_mem) && ctx.pc == 0x08AD2328u) goto L_08AD2328;
    return;
L_08AD2328:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD2334u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 165u, 0x088E8D6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD2334u) goto L_08AD2334;
    return;
L_08AD2334:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2348;
      }
      goto L_08AD2340;
    }
L_08AD2340:
    ctx.gpr[31] = (0x08AD2348u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 472u, 0x08962494u>(ctx, &aot_mem) && ctx.pc == 0x08AD2348u) goto L_08AD2348;
    return;
L_08AD2348:
    ctx.gpr[31] = (0x08AD2350u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 166u, 0x088E8D74u>(ctx, &aot_mem) && ctx.pc == 0x08AD2350u) goto L_08AD2350;
    return;
L_08AD2350:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1133)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD23A4;
      }
      goto L_08AD235C;
    }
L_08AD235C:
    ctx.gpr[31] = (0x08AD2364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 409u, 0x08ABA2D0u>(ctx, &aot_mem) && ctx.pc == 0x08AD2364u) goto L_08AD2364;
    return;
L_08AD2364:
    ctx.gpr[31] = (0x08AD236Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 161u, 0x08971254u>(ctx, &aot_mem) && ctx.pc == 0x08AD236Cu) goto L_08AD236C;
    return;
L_08AD236C:
    ctx.gpr[31] = (0x08AD2374u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 496u, 0x089169A0u>(ctx, &aot_mem) && ctx.pc == 0x08AD2374u) goto L_08AD2374;
    return;
L_08AD2374:
    ctx.gpr[31] = (0x08AD237Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 626u, 0x08AA7CC4u>(ctx, &aot_mem) && ctx.pc == 0x08AD237Cu) goto L_08AD237C;
    return;
L_08AD237C:
    ctx.gpr[31] = (0x08AD2384u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 251u, 0x08A45B0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD2384u) goto L_08AD2384;
    return;
L_08AD2384:
    ctx.gpr[31] = (0x08AD238Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 638u, 0x08917610u>(ctx, &aot_mem) && ctx.pc == 0x08AD238Cu) goto L_08AD238C;
    return;
L_08AD238C:
    ctx.gpr[31] = (0x08AD2394u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 235u, 0x08AE5390u>(ctx, &aot_mem) && ctx.pc == 0x08AD2394u) goto L_08AD2394;
    return;
L_08AD2394:
    ctx.gpr[31] = (0x08AD239Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 498u, 0x0893272Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD239Cu) goto L_08AD239C;
    return;
L_08AD239C:
    ctx.gpr[31] = (0x08AD23A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 673u, 0x08806C5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD23A4u) goto L_08AD23A4;
    return;
L_08AD23A4:
    ctx.gpr[31] = (0x08AD23ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 499u, 0x08A9245Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD23ACu) goto L_08AD23AC;
    return;
L_08AD23AC:
    ctx.gpr[31] = (0x08AD23B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 394u, 0x0899A418u>(ctx, &aot_mem) && ctx.pc == 0x08AD23B4u) goto L_08AD23B4;
    return;
L_08AD23B4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08AD23C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24800));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 643u, 0x0884EA04u>(ctx, &aot_mem) && ctx.pc == 0x08AD23C0u) goto L_08AD23C0;
    return;
L_08AD23C0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1133)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD240C;
      }
      goto L_08AD23CC;
    }
L_08AD23CC:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.gpr[31] = (0x08AD23D8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.pc = 0x08B0BAE4u;
    return;
L_08AD23D8:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.gpr[31] = (0x08AD23E8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.pc = 0x08B0BBDCu;
    return;
L_08AD23E8:
    ctx.gpr[31] = (0x08AD23F0u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 224u, 0x08A9D198u>(ctx, &aot_mem) && ctx.pc == 0x08AD23F0u) goto L_08AD23F0;
    return;
L_08AD23F0:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.gpr[31] = (0x08AD23FCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.pc = 0x08B0BAE4u;
    return;
L_08AD23FC:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.gpr[31] = (0x08AD240Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.pc = 0x08B0BBDCu;
    return;
L_08AD240C:
    ctx.gpr[31] = (0x08AD2414u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 118u, 0x08850C38u>(ctx, &aot_mem) && ctx.pc == 0x08AD2414u) goto L_08AD2414;
    return;
L_08AD2414:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(935)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD242C;
      }
      goto L_08AD2424;
    }
L_08AD2424:
    ctx.gpr[31] = (0x08AD242Cu);
    // nop
    goto L_08AD2CDC;
L_08AD242C:
    ctx.gpr[31] = (0x08AD2434u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 403u, 0x0897AAACu>(ctx, &aot_mem) && ctx.pc == 0x08AD2434u) goto L_08AD2434;
    return;
L_08AD2434:
    ctx.gpr[31] = (0x08AD243Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 416u, 0x088365B4u>(ctx, &aot_mem) && ctx.pc == 0x08AD243Cu) goto L_08AD243C;
    return;
L_08AD243C:
    ctx.gpr[31] = (0x08AD2444u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 334u, 0x08AB9C08u>(ctx, &aot_mem) && ctx.pc == 0x08AD2444u) goto L_08AD2444;
    return;
L_08AD2444:
    ctx.gpr[31] = (0x08AD244Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 698u, 0x0886BC80u>(ctx, &aot_mem) && ctx.pc == 0x08AD244Cu) goto L_08AD244C;
    return;
L_08AD244C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1133)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2460;
      }
      goto L_08AD2458;
    }
L_08AD2458:
    ctx.gpr[31] = (0x08AD2460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 154u, 0x0883CAB8u>(ctx, &aot_mem) && ctx.pc == 0x08AD2460u) goto L_08AD2460;
    return;
L_08AD2460:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD246Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 165u, 0x088E8D6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD246Cu) goto L_08AD246C;
    return;
L_08AD246C:
    ctx.gpr[31] = (0x08AD2474u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 618u, 0x088C7AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD2474u) goto L_08AD2474;
    return;
L_08AD2474:
    ctx.gpr[31] = (0x08AD247Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 166u, 0x088E8D74u>(ctx, &aot_mem) && ctx.pc == 0x08AD247Cu) goto L_08AD247C;
    return;
L_08AD247C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[31] = (0x08AD2488u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16920));
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 41u, 0x088B026Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD2488u) goto L_08AD2488;
    return;
L_08AD2488:
    ctx.gpr[31] = (0x08AD2490u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 309u, 0x08A828E8u>(ctx, &aot_mem) && ctx.pc == 0x08AD2490u) goto L_08AD2490;
    return;
L_08AD2490:
    ctx.gpr[31] = (0x08AD2498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 74u, 0x08A81260u>(ctx, &aot_mem) && ctx.pc == 0x08AD2498u) goto L_08AD2498;
    return;
L_08AD2498:
    ctx.gpr[31] = (0x08AD24A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 692u, 0x0893B7F8u>(ctx, &aot_mem) && ctx.pc == 0x08AD24A0u) goto L_08AD24A0;
    return;
L_08AD24A0:
    ctx.gpr[31] = (0x08AD24A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 117u, 0x08A88864u>(ctx, &aot_mem) && ctx.pc == 0x08AD24A8u) goto L_08AD24A8;
    return;
L_08AD24A8:
    ctx.gpr[31] = (0x08AD24B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 325u, 0x0882600Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD24B0u) goto L_08AD24B0;
    return;
L_08AD24B0:
    ctx.gpr[31] = (0x08AD24B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 114u, 0x089F8D94u>(ctx, &aot_mem) && ctx.pc == 0x08AD24B8u) goto L_08AD24B8;
    return;
L_08AD24B8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08AD24C4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22912)));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 272u, 0x08A7D700u>(ctx, &aot_mem) && ctx.pc == 0x08AD24C4u) goto L_08AD24C4;
    return;
L_08AD24C4:
    ctx.gpr[31] = (0x08AD24CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 312u, 0x08ACA220u>(ctx, &aot_mem) && ctx.pc == 0x08AD24CCu) goto L_08AD24CC;
    return;
L_08AD24CC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1133)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD24F0;
      }
      goto L_08AD24D8;
    }
L_08AD24D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(308)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD24F0;
      }
      goto L_08AD24E4;
    }
L_08AD24E4:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08AD24F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 207u, 0x08900C78u>(ctx, &aot_mem) && ctx.pc == 0x08AD24F0u) goto L_08AD24F0;
    return;
L_08AD24F0:
    ctx.gpr[31] = (0x08AD24F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 129u, 0x08A8CAB8u>(ctx, &aot_mem) && ctx.pc == 0x08AD24F8u) goto L_08AD24F8;
    return;
L_08AD24F8:
    ctx.gpr[31] = (0x08AD2500u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 349u, 0x08965704u>(ctx, &aot_mem) && ctx.pc == 0x08AD2500u) goto L_08AD2500;
    return;
L_08AD2500:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1133)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2538;
      }
      goto L_08AD250C;
    }
L_08AD250C:
    ctx.gpr[31] = (0x08AD2514u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 339u, 0x089FA1E4u>(ctx, &aot_mem) && ctx.pc == 0x08AD2514u) goto L_08AD2514;
    return;
L_08AD2514:
    ctx.gpr[31] = (0x08AD251Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 294u, 0x089F9E74u>(ctx, &aot_mem) && ctx.pc == 0x08AD251Cu) goto L_08AD251C;
    return;
L_08AD251C:
    ctx.gpr[31] = (0x08AD2524u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 295u, 0x0892A5B8u>(ctx, &aot_mem) && ctx.pc == 0x08AD2524u) goto L_08AD2524;
    return;
L_08AD2524:
    ctx.gpr[31] = (0x08AD252Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 303u, 0x0892A64Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD252Cu) goto L_08AD252C;
    return;
L_08AD252C:
    ctx.gpr[4] = (2274u << 16u);
    ctx.gpr[31] = (0x08AD2538u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19632));
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 67u, 0x089305D8u>(ctx, &aot_mem) && ctx.pc == 0x08AD2538u) goto L_08AD2538;
    return;
L_08AD2538:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD2544u);
    ctx.gpr[5] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 165u, 0x088E8D6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD2544u) goto L_08AD2544;
    return;
L_08AD2544:
    ctx.gpr[31] = (0x08AD254Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 299u, 0x089EA104u>(ctx, &aot_mem) && ctx.pc == 0x08AD254Cu) goto L_08AD254C;
    return;
L_08AD254C:
    ctx.gpr[31] = (0x08AD2554u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 129u, 0x089E8A54u>(ctx, &aot_mem) && ctx.pc == 0x08AD2554u) goto L_08AD2554;
    return;
L_08AD2554:
    ctx.gpr[31] = (0x08AD255Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 359u, 0x089EA4C0u>(ctx, &aot_mem) && ctx.pc == 0x08AD255Cu) goto L_08AD255C;
    return;
L_08AD255C:
    ctx.gpr[31] = (0x08AD2564u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 373u, 0x089EA624u>(ctx, &aot_mem) && ctx.pc == 0x08AD2564u) goto L_08AD2564;
    return;
L_08AD2564:
    ctx.gpr[31] = (0x08AD256Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 166u, 0x088E8D74u>(ctx, &aot_mem) && ctx.pc == 0x08AD256Cu) goto L_08AD256C;
    return;
L_08AD256C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD259C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29268)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29272)));
    ctx.gpr[2] = (2230u << 16u);
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29264), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29244)));
    ctx.gpr[3] = (2230u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-29232)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-29236)));
    ctx.gpr[24] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[16] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-29228), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-29220), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[13] = (2230u << 16u);
    ctx.gpr[12] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(-29256), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[10] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-29260), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[11] = (15744u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[11]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[14] = (2230u << 16u);
    ctx.gpr[8] = (16281u << 16u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(-29252), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[9] = (16268u << 16u);
    ctx.gpr[15] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[8] | 39322u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[9] | 52429u);
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(-29240), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[25] = (2230u << 16u);
    ctx.gpr[2] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(-29224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29216), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD2690:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD26A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[7] = (0u | 8u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x08AD2720u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 270u, 0x088C1A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD2720u) goto L_08AD2720;
    return;
L_08AD2720:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(96))))));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD27D0;
      }
      goto L_08AD2734;
    }
L_08AD2734:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-11332)));
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    goto L_08AD2750;
L_08AD2750:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(64)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(48));
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[17] + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(40)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08AD27C0;
      }
      goto L_08AD278C;
    }
L_08AD278C:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(24)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    ctx.fpr[17] = ctx.fpr[12] + ctx.fpr[17];
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[17] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD27C0;
      }
      goto L_08AD27B4;
    }
L_08AD27B4:
    ctx.gpr[2] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08AD27D4;
      }
      goto L_08AD27C0;
    }
L_08AD27C0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AD2750;
      }
      goto L_08AD27D0;
    }
L_08AD27D0:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AD27D4;
L_08AD27D4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD27EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x08AD2818u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 195u, 0x089D58E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD2818u) goto L_08AD2818;
    return;
L_08AD2818:
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = ctx.fpr[24] - ctx.fpr[12];
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[13];
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[14] + ctx.fpr[15];
    ctx.fpr[20] = std::sqrt(ctx.fpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AD294C;
      }
      goto L_08AD2850;
    }
L_08AD2850:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD287C;
      }
      goto L_08AD2868;
    }
L_08AD2868:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AD287C;
L_08AD287C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08AD294C;
      }
      goto L_08AD288C;
    }
L_08AD288C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (17189u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD294C;
      }
      goto L_08AD28B0;
    }
L_08AD28B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-464));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<12u, 4u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 4u;
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
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 14u, vfpu_side); }
    ctx.vfpu_ctrl[1u] = 0x00000000u;
    ctx.execute_vfpu_vcmp_ct<14u, 0u, 4u, 3u>();
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // vflush: architectural no-op that retains VFPU prefixes
      if (branch_taken) {
          goto L_08AD2914;
      }
      goto L_08AD290C;
    }
L_08AD290C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08AD2914;
L_08AD2914:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD294C;
      }
      goto L_08AD291C;
    }
L_08AD291C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08AD2940u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 318u, 0x08AB184Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD2940u) goto L_08AD2940;
    return;
L_08AD2940:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD294C;
      }
      goto L_08AD2948;
    }
L_08AD2948:
    ctx.gpr[17] = (0u | 1u);
    goto L_08AD294C;
L_08AD294C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (17116u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD297C;
      }
      goto L_08AD2974;
    }
L_08AD2974:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2A34;
      }
      goto L_08AD297C;
    }
L_08AD297C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-5960)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2A2C;
      }
      goto L_08AD298C;
    }
L_08AD298C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(42)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD29D4;
      }
      goto L_08AD2998;
    }
L_08AD2998:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (17116u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_08AD29DC;
    }
    goto L_08AD29CC;
L_08AD29CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD29E4;
      }
      goto L_08AD29D4;
    }
L_08AD29D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD2A48;
      }
      goto L_08AD29DC;
    }
L_08AD29DC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2A1C;
      }
      goto L_08AD29E4;
    }
L_08AD29E4:
    ctx.gpr[31] = (0x08AD29ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 171u, 0x089D575Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD29ECu) goto L_08AD29EC;
    return;
L_08AD29EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD2A24;
      }
      goto L_08AD2A14;
    }
L_08AD2A14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD2A48;
      }
      goto L_08AD2A1C;
    }
L_08AD2A1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD2A48;
      }
      goto L_08AD2A24;
    }
L_08AD2A24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AD2A48;
      }
      goto L_08AD2A2C;
    }
L_08AD2A2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AD2A48;
      }
      goto L_08AD2A34;
    }
L_08AD2A34:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(42)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2A44;
      }
      goto L_08AD2A40;
    }
L_08AD2A40:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(0u));
    goto L_08AD2A44;
L_08AD2A44:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AD2A48;
L_08AD2A48:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD2A68:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[11]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(0u));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD2AC0:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5656)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5656), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD2AD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 65535u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08AD2AF8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AD2690;
L_08AD2AF8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5656)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5656), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD2B1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AD2B88;
      }
      goto L_08AD2B3C;
    }
L_08AD2B3C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-5960)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08AD2B64;
      }
      goto L_08AD2B4C;
    }
L_08AD2B4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2B88;
      }
      goto L_08AD2B64;
    }
L_08AD2B64:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AD2B88;
      }
      goto L_08AD2B70;
    }
L_08AD2B70:
    ctx.gpr[31] = (0x08AD2B78u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AD27EC;
L_08AD2B78:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2B88;
      }
      goto L_08AD2B80;
    }
L_08AD2B80:
    ctx.gpr[31] = (0x08AD2B88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AD2DC0;
L_08AD2B88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AD2C00;
      }
      goto L_08AD2B94;
    }
L_08AD2B94:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08AD2BA0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08AD2BA0u) goto L_08AD2BA0;
    return;
L_08AD2BA0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2BFC;
      }
      goto L_08AD2BAC;
    }
L_08AD2BAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 496u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2C00;
      }
      goto L_08AD2BBC;
    }
L_08AD2BBC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (0u | 60000u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(598), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AD2C00;
      }
      goto L_08AD2BF4;
    }
L_08AD2BF4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AD2C00;
      }
      goto L_08AD2BFC;
    }
L_08AD2BFC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    goto L_08AD2C00;
L_08AD2C00:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD2C14:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5660), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5656), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-5652), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-5960), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD2C38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    ctx.gpr[10] = (ctx.gpr[10] & 65535u);
    ctx.gpr[11] = (ctx.gpr[11] & 65535u);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5660)));
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[2]) < 195 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.gpr[3] = (ctx.gpr[11] | 0u);
      if (branch_taken) {
          goto L_08AD2CC8;
      }
      goto L_08AD2C7C;
    }
L_08AD2C7C:
    ctx.gpr[11] = (ctx.gpr[10] | 0u);
    ctx.gpr[10] = (ctx.gpr[9] | 0u);
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] << 4u);
    ctx.gpr[2] = (ctx.gpr[4] - ctx.gpr[2]);
    ctx.gpr[2] = (ctx.gpr[2] << 2u);
    ctx.gpr[4] = (ctx.gpr[2] - ctx.gpr[4]);
    ctx.gpr[2] = (2277u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-5440));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[2]);
    ctx.gpr[31] = (0x08AD2CBCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_08AD2A68;
L_08AD2CBC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5660)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5660), ctx.gpr[2]);
    goto L_08AD2CC8;
L_08AD2CC8:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD2CDC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD2CFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 186u, 0x089D5860u>(ctx, &aot_mem) && ctx.pc == 0x08AD2CFCu) goto L_08AD2CFC;
    return;
L_08AD2CFC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(936)));
    ctx.gpr[4] = (ctx.gpr[2] | ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2D3C;
      }
      goto L_08AD2D10;
    }
L_08AD2D10:
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-5652)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(-5652), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-5652)));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[17] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[16] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AD2D44;
      }
      goto L_08AD2D34;
    }
L_08AD2D34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2D48;
      }
      goto L_08AD2D3C;
    }
L_08AD2D3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2DA4;
      }
      goto L_08AD2D44;
    }
L_08AD2D44:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(-5652), static_cast<std::uint8_t>(0u));
    goto L_08AD2D48;
L_08AD2D48:
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-5652)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5660)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2277u << 16u);
      if (branch_taken) {
          goto L_08AD2D90;
      }
      goto L_08AD2D5C;
    }
L_08AD2D5C:
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5440));
    ctx.gpr[4] = (ctx.gpr[18] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[19]);
    goto L_08AD2D74;
L_08AD2D74:
    ctx.gpr[31] = (0x08AD2D7Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08AD2B1C;
L_08AD2D7C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5660)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(176));
      if (branch_taken) {
          goto L_08AD2D74;
      }
      goto L_08AD2D90;
    }
L_08AD2D90:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-5960)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AD2DA4;
      }
      goto L_08AD2D9C;
    }
L_08AD2D9C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-5960), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AD2DA4;
L_08AD2DA4:
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
L_08AD2DC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-288));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[31]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17172)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AD2E24;
      }
      goto L_08AD2E10;
    }
L_08AD2E10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AD2E2C;
      }
      goto L_08AD2E1C;
    }
L_08AD2E1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2F54;
      }
      goto L_08AD2E24;
    }
L_08AD2E24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD33E0;
      }
      goto L_08AD2E2C;
    }
L_08AD2E2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08AD2E80;
      }
      goto L_08AD2E3C;
    }
L_08AD2E3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2E80;
      }
      goto L_08AD2E74;
    }
L_08AD2E74:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u - ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AD2ED8;
      }
      goto L_08AD2E80;
    }
L_08AD2E80:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[31] = (0x08AD2E8Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD2E8Cu) goto L_08AD2E8C;
    return;
L_08AD2E8C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13820)));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD2EA4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 390u, 0x088724BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD2EA4u) goto L_08AD2EA4;
    return;
L_08AD2EA4:
    ctx.gpr[31] = (0x08AD2EACu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 309u, 0x089EDE80u>(ctx, &aot_mem) && ctx.pc == 0x08AD2EACu) goto L_08AD2EAC;
    return;
L_08AD2EAC:
    ctx.gpr[31] = (0x08AD2EB4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 234u, 0x089ED960u>(ctx, &aot_mem) && ctx.pc == 0x08AD2EB4u) goto L_08AD2EB4;
    return;
L_08AD2EB4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AD2EC8;
      }
      goto L_08AD2EC0;
    }
L_08AD2EC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD33E0;
      }
      goto L_08AD2EC8;
    }
L_08AD2EC8:
    ctx.gpr[4] = (0u - ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[16]));
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(ctx.gpr[16]));
    goto L_08AD2ED8;
L_08AD2ED8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD2EE4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08AD26A0;
L_08AD2EE4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2F40;
      }
      goto L_08AD2EEC;
    }
L_08AD2EEC:
    ctx.gpr[4] = (ctx.gpr[19] << 4u);
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2F38;
      }
      goto L_08AD2F1C;
    }
L_08AD2F1C:
    ctx.gpr[31] = (0x08AD2F24u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 112u, 0x08A28CB0u>(ctx, &aot_mem) && ctx.pc == 0x08AD2F24u) goto L_08AD2F24;
    return;
L_08AD2F24:
    ctx.gpr[4] = (49864u << 16u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AD2F90;
      }
      goto L_08AD2F30;
    }
L_08AD2F30:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08AD3024;
      }
      goto L_08AD2F38;
    }
L_08AD2F38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD33E0;
      }
      goto L_08AD2F40;
    }
L_08AD2F40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD33E0;
      }
      goto L_08AD2F54;
    }
L_08AD2F54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AD2F60u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08AD26A0;
L_08AD2F60:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2F7C;
      }
      goto L_08AD2F68;
    }
L_08AD2F68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AD2F74u);
    ctx.gpr[5] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08AD2F74u) goto L_08AD2F74;
    return;
L_08AD2F74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AD2EEC;
      }
      goto L_08AD2F7C;
    }
L_08AD2F7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD33E0;
      }
      goto L_08AD2F90;
    }
L_08AD2F90:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AD2F9Cu);
    ctx.gpr[4] = (0u | 1424u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 510u, 0x0889E8B4u>(ctx, &aot_mem) && ctx.pc == 0x08AD2F9Cu) goto L_08AD2F9C;
    return;
L_08AD2F9C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[26] = std::bit_cast<float>(0u);
    ctx.gpr[30] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[23] = (0u | 1u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29140)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29144)));
      if (branch_taken) {
          goto L_08AD2FE8;
      }
      goto L_08AD2FD4;
    }
L_08AD2FD4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AD2FE4u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 403u, 0x08A4DE78u>(ctx, &aot_mem) && ctx.pc == 0x08AD2FE4u) goto L_08AD2FE4;
    return;
L_08AD2FE4:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AD2FE8;
L_08AD2FE8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08AD3014;
      }
      goto L_08AD3004;
    }
L_08AD3004:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AD3010u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x08AD3010u) goto L_08AD3010;
    return;
L_08AD3010:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AD3014;
L_08AD3014:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] | 128u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(598), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AD3200;
      }
      goto L_08AD3024;
    }
L_08AD3024:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD30A8;
      }
      goto L_08AD3038;
    }
L_08AD3038:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x08AD3090u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 95u, 0x088C06D4u>(ctx, &aot_mem) && ctx.pc == 0x08AD3090u) goto L_08AD3090;
    return;
L_08AD3090:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD30C0;
      }
      goto L_08AD30A0;
    }
L_08AD30A0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
      if (branch_taken) {
          goto L_08AD30C0;
      }
      goto L_08AD30A8;
    }
L_08AD30A8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08AD30BCu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 453u, 0x088C2EF0u>(ctx, &aot_mem) && ctx.pc == 0x08AD30BCu) goto L_08AD30BC;
    return;
L_08AD30BC:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AD30C0;
L_08AD30C0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD31C0;
      }
      goto L_08AD30CC;
    }
L_08AD30CC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (16457u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 4059u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (17204u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[26] = std::bit_cast<float>(0u);
    ctx.gpr[30] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[23] = (0u | 1u);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29140)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29144)));
      if (branch_taken) {
          goto L_08AD3124;
      }
      goto L_08AD3110;
    }
L_08AD3110:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AD3124;
L_08AD3124:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AD3174;
      }
      goto L_08AD3134;
    }
L_08AD3134:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AD3140u);
    ctx.gpr[4] = (0u | 1472u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 510u, 0x0889E8B4u>(ctx, &aot_mem) && ctx.pc == 0x08AD3140u) goto L_08AD3140;
    return;
L_08AD3140:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AD315C;
      }
      goto L_08AD314C;
    }
L_08AD314C:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AD3158u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 565u, 0x08A378CCu>(ctx, &aot_mem) && ctx.pc == 0x08AD3158u) goto L_08AD3158;
    return;
L_08AD3158:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AD315C;
L_08AD315C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1333), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08AD31A4;
      }
      goto L_08AD3174;
    }
L_08AD3174:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AD3180u);
    ctx.gpr[4] = (0u | 1760u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 510u, 0x0889E8B4u>(ctx, &aot_mem) && ctx.pc == 0x08AD3180u) goto L_08AD3180;
    return;
L_08AD3180:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AD319C;
      }
      goto L_08AD318C;
    }
L_08AD318C:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AD3198u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 357u, 0x0880E120u>(ctx, &aot_mem) && ctx.pc == 0x08AD3198u) goto L_08AD3198;
    return;
L_08AD3198:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AD319C;
L_08AD319C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    goto L_08AD31A4;
L_08AD31A4:
    ctx.gpr[31] = (0x08AD31ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 847u, 0x08A2FC04u>(ctx, &aot_mem) && ctx.pc == 0x08AD31ACu) goto L_08AD31AC;
    return;
L_08AD31AC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AD3200;
      }
      goto L_08AD31C0;
    }
L_08AD31C0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11472));
    ctx.gpr[31] = (0x08AD31D0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08AD31D0u) goto L_08AD31D0;
    return;
L_08AD31D0:
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD31E0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08AD31E0u) goto L_08AD31E0;
    return;
L_08AD31E0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AD31F8u);
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD31F8u) goto L_08AD31F8;
    return;
L_08AD31F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD33E0;
      }
      goto L_08AD3200;
    }
L_08AD3200:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08AD322Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 847u, 0x08A2FC04u>(ctx, &aot_mem) && ctx.pc == 0x08AD322Cu) goto L_08AD322C;
    return;
L_08AD322C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = ctx.fpr[20] + ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[24];
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08AD3268u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x08AD3268u) goto L_08AD3268;
    return;
L_08AD3268:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[31] = (0x08AD327Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x08AD327Cu) goto L_08AD327C;
    return;
L_08AD327C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(660), ctx.gpr[23]);
    ctx.gpr[31] = (0x08AD3298u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x08AD3298u) goto L_08AD3298;
    return;
L_08AD3298:
    ctx.gpr[31] = (0x08AD32A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08AD32A0u) goto L_08AD32A0;
    return;
L_08AD32A0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AD32B4u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x08AD32B4u) goto L_08AD32B4;
    return;
L_08AD32B4:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(25)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD32E0;
      }
      goto L_08AD32D8;
    }
L_08AD32D8:
    ctx.gpr[4] = (0u | 65535u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(500), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08AD32E0;
L_08AD32E0:
    ctx.gpr[31] = (0x08AD32E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08AD32E8u) goto L_08AD32E8;
    return;
L_08AD32E8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AD32FCu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x08AD32FCu) goto L_08AD32FC;
    return;
L_08AD32FC:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(26)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD3328;
      }
      goto L_08AD3320;
    }
L_08AD3320:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(660), ctx.gpr[4]);
    goto L_08AD3328;
L_08AD3328:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(20))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08AD3354;
      }
      goto L_08AD3334;
    }
L_08AD3334:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(22))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08AD3354;
      }
      goto L_08AD3340;
    }
L_08AD3340:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(20))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(496), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(22))))));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(497), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AD337C;
      }
      goto L_08AD3354;
    }
L_08AD3354:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < -1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD337C;
      }
      goto L_08AD3364;
    }
L_08AD3364:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(496)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(497)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08AD337C;
L_08AD337C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08AD3388u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 313u, 0x08925F24u>(ctx, &aot_mem) && ctx.pc == 0x08AD3388u) goto L_08AD3388;
    return;
L_08AD3388:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x08AD3398u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 509u, 0x08AFE25Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD3398u) goto L_08AD3398;
    return;
L_08AD3398:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < -1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD33B8;
      }
      goto L_08AD33AC;
    }
L_08AD33AC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08AD33B8;
L_08AD33B8:
    ctx.gpr[31] = (0x08AD33C0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08AD2690;
L_08AD33C0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD33E0;
      }
      goto L_08AD33D0;
    }
L_08AD33D0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5656)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5656), ctx.gpr[5]);
    goto L_08AD33E0;
L_08AD33E0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3420:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29180)));
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29176), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29184)));
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29172), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29168), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29164), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16014u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14571u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29160), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29156)));
    ctx.gpr[4] = (15744u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD34B4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD34BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD34D8u);
    ctx.gpr[4] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD34D8u) goto L_08AD34D8;
    return;
L_08AD34D8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13492));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(44));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD354Cu);
    ctx.gpr[5] = (0u | 3u);
    goto L_08AD3654;
L_08AD354C:
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
L_08AD3564:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[16])) && ctx.fpr[12] == ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD35D0;
      }
      goto L_08AD35B0;
    }
L_08AD35B0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD35D0;
      }
      goto L_08AD35C4;
    }
L_08AD35C4:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AD35D4;
      }
      goto L_08AD35D0;
    }
L_08AD35D0:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    goto L_08AD35D4;
L_08AD35D4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD35DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD35F8u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AD364C;
L_08AD35F8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08AD360C;
      }
      goto L_08AD3604;
    }
L_08AD3604:
    ctx.gpr[31] = (0x08AD360Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 115u, 0x08A5CFD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD360Cu) goto L_08AD360C;
    return;
L_08AD360C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3624:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD3638u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 169u, 0x08A5D36Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD3638u) goto L_08AD3638;
    return;
L_08AD3638:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD364C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3654:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3660:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3668:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3674:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AD36AC;
      }
      goto L_08AD3690;
    }
L_08AD3690:
    ctx.gpr[31] = (0x08AD3698u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AD38DC;
L_08AD3698:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD36AC;
      }
      goto L_08AD36A4;
    }
L_08AD36A4:
    ctx.gpr[31] = (0x08AD36ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08AD36ACu) goto L_08AD36AC;
    return;
L_08AD36AC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD36C0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD36C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5640), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5636), 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7680));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD36F0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 607u, 0x088735C4u>(ctx, &aot_mem) && ctx.pc == 0x08AD36F0u) goto L_08AD36F0;
    return;
L_08AD36F0:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[0];
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[9] = (18303u << 16u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[9] = (ctx.gpr[9] | 64000u);
    ctx.gpr[10] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[8] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-5644), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-5648), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (15112u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.gpr[7] = (15216u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 34953u);
    ctx.gpr[7] = (ctx.gpr[7] | 61681u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[11] = (2230u << 16u);
    ctx.gpr[2] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-29100), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29096), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3774:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29096), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3788:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5640)));
    ctx.gpr[10] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(20400));
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD37C4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[10]);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 24u, 0x08AD45B4u>(ctx, &aot_mem) && ctx.pc == 0x08AD37C4u) goto L_08AD37C4;
    return;
L_08AD37C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5640)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5636)));
    ctx.gpr[7] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-28752));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[4] & 65535u);
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(3));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[9]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5636)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5640)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-5636), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08AD3828u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5640), ctx.gpr[4]);
    goto L_08AD3848;
L_08AD3828:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD3838;
      }
      goto L_08AD3830;
    }
L_08AD3830:
    ctx.gpr[31] = (0x08AD3838u);
    // nop
    goto L_08AD3870;
L_08AD3838:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3848:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5640)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 381 ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5636)));
    ctx.gpr[2] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 1019 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3870:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5640)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AD38C8;
      }
      goto L_08AD3890;
    }
L_08AD3890:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x08AD389Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AD389Cu) goto L_08AD389C;
    return;
L_08AD389C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5640)));
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[7] = (2233u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5636)));
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20400));
    ctx.gpr[31] = (0x08AD38C0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-28752));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 23u, 0x0886823Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD38C0u) goto L_08AD38C0;
    return;
L_08AD38C0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5640), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-5636), 0u);
    goto L_08AD38C8;
L_08AD38C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD38DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD3904;
      }
      goto L_08AD38F8;
    }
L_08AD38F8:
    ctx.gpr[31] = (0x08AD3900u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 107u, 0x08A0D0E4u>(ctx, &aot_mem) && ctx.pc == 0x08AD3900u) goto L_08AD3900;
    return;
L_08AD3900:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_08AD3904;
L_08AD3904:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3914:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD3930u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    goto L_08AD38DC;
L_08AD3930:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD3948;
      }
      goto L_08AD3938;
    }
L_08AD3938:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD3944u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x08AD3944u) goto L_08AD3944;
    return;
L_08AD3944:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08AD3948;
L_08AD3948:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD395C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AD3990;
      }
      goto L_08AD3974;
    }
L_08AD3974:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD3990;
      }
      goto L_08AD397C;
    }
L_08AD397C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AD398Cu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x08AD398Cu) goto L_08AD398C;
    return;
L_08AD398C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08AD3990;
L_08AD3990:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD39A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AD39D0;
      }
      goto L_08AD39B8;
    }
L_08AD39B8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AD39C8u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 108u, 0x08A0D0ECu>(ctx, &aot_mem) && ctx.pc == 0x08AD39C8u) goto L_08AD39C8;
    return;
L_08AD39C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD39D4;
      }
      goto L_08AD39D0;
    }
L_08AD39D0:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AD39D4;
L_08AD39D4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD39E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (0u | 6u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD3A24u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AD3A24u) goto L_08AD3A24;
    return;
L_08AD3A24:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08AD3A30u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AD3A30u) goto L_08AD3A30;
    return;
L_08AD3A30:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[14] = ctx.fpr[22] + ctx.fpr[26];
    ctx.fpr[15] = ctx.fpr[20] + ctx.fpr[24];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08AD3A48u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x08AD3A48u) goto L_08AD3A48;
    return;
L_08AD3A48:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD3A64u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 19u, 0x08AD4114u>(ctx, &aot_mem) && ctx.pc == 0x08AD3A64u) goto L_08AD3A64;
    return;
L_08AD3A64:
    ctx.gpr[31] = (0x08AD3A6Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AD3D90;
L_08AD3A6C:
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08AD3A80u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15264));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 3u, 0x08868074u>(ctx, &aot_mem) && ctx.pc == 0x08AD3A80u) goto L_08AD3A80;
    return;
L_08AD3A80:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08AD3A8Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AD3A8Cu) goto L_08AD3A8C;
    return;
L_08AD3A8C:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08AD3A98u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AD3A98u) goto L_08AD3A98;
    return;
L_08AD3A98:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3ABC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD3AE4u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 19u, 0x08AD4114u>(ctx, &aot_mem) && ctx.pc == 0x08AD3AE4u) goto L_08AD3AE4;
    return;
L_08AD3AE4:
    ctx.gpr[31] = (0x08AD3AECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AD3D90;
L_08AD3AEC:
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08AD3B00u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15264));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 3u, 0x08868074u>(ctx, &aot_mem) && ctx.pc == 0x08AD3B00u) goto L_08AD3B00;
    return;
L_08AD3B00:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3B10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD3B3Cu);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 19u, 0x08AD4114u>(ctx, &aot_mem) && ctx.pc == 0x08AD3B3Cu) goto L_08AD3B3C;
    return;
L_08AD3B3C:
    ctx.gpr[31] = (0x08AD3B44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AD3D90;
L_08AD3B44:
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08AD3B58u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15264));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 3u, 0x08868074u>(ctx, &aot_mem) && ctx.pc == 0x08AD3B58u) goto L_08AD3B58;
    return;
L_08AD3B58:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3B68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29100)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29096)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.gpr[31] = (0x08AD3BB8u);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 22u, 0x08AD42A4u>(ctx, &aot_mem) && ctx.pc == 0x08AD3BB8u) goto L_08AD3BB8;
    return;
L_08AD3BB8:
    ctx.gpr[31] = (0x08AD3BC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AD3D90;
L_08AD3BC0:
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08AD3BD4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15264));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 3u, 0x08868074u>(ctx, &aot_mem) && ctx.pc == 0x08AD3BD4u) goto L_08AD3BD4;
    return;
L_08AD3BD4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3BE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD3C08u);
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 23u, 0x08AD43D4u>(ctx, &aot_mem) && ctx.pc == 0x08AD3C08u) goto L_08AD3C08;
    return;
L_08AD3C08:
    ctx.gpr[31] = (0x08AD3C10u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AD3D90;
L_08AD3C10:
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08AD3C24u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15264));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 3u, 0x08868074u>(ctx, &aot_mem) && ctx.pc == 0x08AD3C24u) goto L_08AD3C24;
    return;
L_08AD3C24:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3C34:
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[10] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-5644)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (16256u << 16u);
      if (branch_taken) {
          goto L_08AD3D08;
      }
      goto L_08AD3C4C;
    }
L_08AD3C4C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[9] = (ctx.gpr[5] | 0u);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[8] = (2277u << 16u);
    ctx.gpr[11] = (18176u << 16u);
    ctx.gpr[2] = (16128u << 16u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-15264));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08AD3C7C;
L_08AD3C7C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[11]));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[11]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[12];
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[11]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[11]));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AD3C7C;
      }
      goto L_08AD3D08;
    }
L_08AD3D08:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3D10:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[9] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-5644)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD3D88;
      }
      goto L_08AD3D28;
    }
L_08AD3D28:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (2277u << 16u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-15264));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AD3D40;
L_08AD3D40:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[10]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AD3D40;
      }
      goto L_08AD3D88;
    }
L_08AD3D88:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3D90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD3DB8;
      }
      goto L_08AD3DA4;
    }
L_08AD3DA4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08AD3DB0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AD3DB0u) goto L_08AD3DB0;
    return;
L_08AD3DB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD3DC4;
      }
      goto L_08AD3DB8;
    }
L_08AD3DB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AD3DC4u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AD3DC4u) goto L_08AD3DC4;
    return;
L_08AD3DC4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3DD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[9] = (ctx.gpr[6] & 255u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD3DF4u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 19u, 0x08AD4114u>(ctx, &aot_mem) && ctx.pc == 0x08AD3DF4u) goto L_08AD3DF4;
    return;
L_08AD3DF4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08AD3E00u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AD3E00u) goto L_08AD3E00;
    return;
L_08AD3E00:
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[31] = (0x08AD3E0Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AD3E0Cu) goto L_08AD3E0C;
    return;
L_08AD3E0C:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08AD3E18u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AD3E18u) goto L_08AD3E18;
    return;
L_08AD3E18:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08AD3E24u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AD3E24u) goto L_08AD3E24;
    return;
L_08AD3E24:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (0u | 255u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AD3E48;
      }
      goto L_08AD3E34;
    }
L_08AD3E34:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x08AD3E40u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AD3E40u) goto L_08AD3E40;
    return;
L_08AD3E40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD3E54;
      }
      goto L_08AD3E48;
    }
L_08AD3E48:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x08AD3E54u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AD3E54u) goto L_08AD3E54;
    return;
L_08AD3E54:
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08AD3E68u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15264));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 3u, 0x08868074u>(ctx, &aot_mem) && ctx.pc == 0x08AD3E68u) goto L_08AD3E68;
    return;
L_08AD3E68:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08AD3E74u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AD3E74u) goto L_08AD3E74;
    return;
L_08AD3E74:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08AD3E80u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AD3E80u) goto L_08AD3E80;
    return;
L_08AD3E80:
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[31] = (0x08AD3E8Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AD3E8Cu) goto L_08AD3E8C;
    return;
L_08AD3E8C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3E9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29100)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29096)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.gpr[31] = (0x08AD3EF0u);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 22u, 0x08AD42A4u>(ctx, &aot_mem) && ctx.pc == 0x08AD3EF0u) goto L_08AD3EF0;
    return;
L_08AD3EF0:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08AD3EFCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AD3EFCu) goto L_08AD3EFC;
    return;
L_08AD3EFC:
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[31] = (0x08AD3F08u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AD3F08u) goto L_08AD3F08;
    return;
L_08AD3F08:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08AD3F14u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AD3F14u) goto L_08AD3F14;
    return;
L_08AD3F14:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08AD3F20u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AD3F20u) goto L_08AD3F20;
    return;
L_08AD3F20:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (0u | 255u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AD3F44;
      }
      goto L_08AD3F30;
    }
L_08AD3F30:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x08AD3F3Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AD3F3Cu) goto L_08AD3F3C;
    return;
L_08AD3F3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD3F50;
      }
      goto L_08AD3F44;
    }
L_08AD3F44:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x08AD3F50u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AD3F50u) goto L_08AD3F50;
    return;
L_08AD3F50:
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08AD3F64u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15264));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 3u, 0x08868074u>(ctx, &aot_mem) && ctx.pc == 0x08AD3F64u) goto L_08AD3F64;
    return;
L_08AD3F64:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08AD3F70u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AD3F70u) goto L_08AD3F70;
    return;
L_08AD3F70:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08AD3F7Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AD3F7Cu) goto L_08AD3F7C;
    return;
L_08AD3F7C:
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[31] = (0x08AD3F88u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AD3F88u) goto L_08AD3F88;
    return;
L_08AD3F88:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3F98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD3FA8u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 19u, 0x08AD4114u>(ctx, &aot_mem) && ctx.pc == 0x08AD3FA8u) goto L_08AD3FA8;
    return;
L_08AD3FA8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08AD3FB4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AD3FB4u) goto L_08AD3FB4;
    return;
L_08AD3FB4:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08AD3FC0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AD3FC0u) goto L_08AD3FC0;
    return;
L_08AD3FC0:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08AD3FCCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AD3FCCu) goto L_08AD3FCC;
    return;
L_08AD3FCC:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x08AD3FD8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AD3FD8u) goto L_08AD3FD8;
    return;
L_08AD3FD8:
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08AD3FECu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15264));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 3u, 0x08868074u>(ctx, &aot_mem) && ctx.pc == 0x08AD3FECu) goto L_08AD3FEC;
    return;
L_08AD3FEC:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08AD3FF8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AD3FF8u) goto L_08AD3FF8;
    return;
L_08AD3FF8:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08AD4004u);
    ctx.gpr[5] = (0u | 1u);
    (void)rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0179(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0179_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_179(Runtime &runtime) {
    runtime.register_generated_unit(179u, 0x08AD0000u, 16384u, &recomp_unit_0179, &recomp_unit_0179_entry);
    runtime.register_function(0x08AD0000u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0014u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0028u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD002Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0040u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0058u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0064u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD006Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0078u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0088u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD00B4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD00C8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD00D4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD00ECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD010Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0114u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD011Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0124u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0138u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0148u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0164u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD017Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0194u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD01B4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD01C4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD01E0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD01F0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0210u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0220u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD023Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD025Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0264u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD026Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD027Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0294u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD02B4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD02CCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD02D8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD02F0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0300u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD031Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0350u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD035Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0388u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0390u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD039Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD03ACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD03B8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD03C8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD03D0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD03DCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD03E4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD03ECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD03F4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0400u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0408u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0410u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0424u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0440u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0578u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD05A4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD05E0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0604u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0614u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0628u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0634u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0640u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0654u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0660u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD066Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0674u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD068Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD069Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD06A8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD06B4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD06C8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD06D0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD06DCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD06E4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD06F8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0700u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0708u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0718u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD071Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0724u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD072Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0744u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD075Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0778u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0794u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD07A8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD07BCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD07D0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0808u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0810u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD081Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0828u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0838u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0848u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD084Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0854u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD085Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0868u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0870u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD089Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD08ACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD08B4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD08C4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD08D4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD08E4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD08F4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0904u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0914u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD092Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0944u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0958u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0968u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD097Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD09A0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD09D8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD09E8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD09F0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD09FCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0A04u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0A0Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0A14u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0A1Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0A24u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0A3Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0A44u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0A4Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0A60u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0A68u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0A70u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0A78u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0A7Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0A90u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0AB4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0AC0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0ACCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0AD4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0AD8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0ADCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0AE4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0AECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0AF8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0B04u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0B20u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0B3Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0B44u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0B50u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0B6Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0B84u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0B8Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0B94u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0B9Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0BA4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0BACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0BB4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0BBCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0BC4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0BCCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0BDCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0BE4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0BECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0BF4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0BFCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0C08u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0C14u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0C20u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0C34u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0C58u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0C88u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0CA0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0CA8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0CB0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0CC8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0CE0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0CE8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0CF8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0D04u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0D0Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0D18u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0D28u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0D30u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0D38u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0D40u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0D48u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0D58u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0D70u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0D78u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0D80u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0D88u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0D90u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0D9Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0DA4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0DB8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0DC0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0DC8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0DD0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0DD8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0DE4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0DF0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0DFCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0E18u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0E34u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0E5Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0E64u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0E74u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0E88u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0E90u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0E98u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0EA0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0EA8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0EB0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0EBCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0EC4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0ECCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0ED8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0EFCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0F04u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0F0Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0F14u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0F1Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0F24u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0F2Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0F34u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0F40u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0F48u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0F50u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0F5Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0F78u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0F90u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0F9Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0FA4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0FB0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0FBCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0FCCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0FD4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0FD8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0FE0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0FE8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0FF0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0FF8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1000u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1008u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1010u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1018u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1020u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1028u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1030u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1038u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1040u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1048u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1050u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1058u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1064u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD106Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1074u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD107Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1084u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1090u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1098u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD10A4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD10ACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD10B8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD10DCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD10E4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1118u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1140u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1180u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD11A8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD11B0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD11C4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD11D4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD11DCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD11E4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD11F0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD11FCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1218u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD121Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1220u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1228u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1230u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD123Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1244u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1260u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1278u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1284u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD128Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1294u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD129Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD12B8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD12C8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD12D0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD12D4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD12DCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD12E4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD12ECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD12FCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1308u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1310u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1314u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1320u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD132Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1334u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD133Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1344u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1350u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD135Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1364u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD136Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1374u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1384u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1390u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1398u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD139Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD13ACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD13BCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD13C4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD13CCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD13D8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD13E0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD13E4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD13F0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1400u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1408u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1418u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1424u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1438u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1440u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1448u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1450u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1480u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD14E8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD14F8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1500u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD151Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1534u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD153Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1544u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD154Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1554u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1568u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1570u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1578u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1580u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1588u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1590u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1598u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD15A0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD15A8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD15B0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD15B8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD15C4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD15CCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD15D4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD15E0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD15E8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD15F0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD15FCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1604u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD160Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1618u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1620u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1628u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1630u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD163Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1644u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1654u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1660u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1688u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1690u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1698u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD16A0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD16A8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD16B0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD16B8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD16C0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD16C8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD16D0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD16D8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD16ECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD16F4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD16FCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1704u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD171Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1724u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1738u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1740u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD174Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1754u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD175Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1764u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD176Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1774u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1780u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1798u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD17A0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD17ACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD17B4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD17BCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD17C8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD17E0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD17E8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD17F0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD17F8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD180Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1814u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD181Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1824u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD182Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1834u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD183Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1844u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD184Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1854u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD185Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1864u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD187Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1894u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD189Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD18A4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD18ACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD18B8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD18C0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD18C8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD18E4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD18F0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD18F8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1900u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1908u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1910u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD191Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1934u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD194Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1954u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1960u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1968u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1974u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1980u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1990u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD199Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD19D0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1A24u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1A30u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1A38u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1A40u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1A50u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1A58u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1A60u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1A80u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1A94u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1A9Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1AB4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1AC4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1ACCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1AD0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1AD8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1AE4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1AF0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1AFCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1B04u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1B1Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1B24u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1B28u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1B30u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1B38u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1B4Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1B80u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1B8Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1BB0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1BCCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1BD0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1BD4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1BDCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1BE8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1BF4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1BFCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1C00u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1C18u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1C24u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1C28u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1C34u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1C44u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1C4Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1C54u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1C60u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1C6Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1C78u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1C90u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1C98u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1CA0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1CACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1CB4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1CC0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1CC8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1CCCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1CDCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1CECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1CF4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1D00u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1D0Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1D18u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1D20u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1D2Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1D34u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1D50u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1D58u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1D60u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1D6Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1D78u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1D80u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1D88u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1D94u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1D9Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1DA0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1DB8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1DC0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1DD4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1E24u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1E30u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1E44u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1E70u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1E80u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1E8Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1E94u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1EA8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1ED0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1EF0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1F44u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1F50u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1F64u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1F6Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1F74u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1F80u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1F8Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1F94u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1FA0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1FA8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1FBCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1FC8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1FD4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1FDCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1FE8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1FF0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1FFCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2004u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD200Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2018u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2024u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2040u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2048u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2054u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2060u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD206Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2080u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD208Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2094u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD20A0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD20ACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD20C0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD20C8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD20D4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD20E0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD20F4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD20FCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD210Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2118u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2124u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2138u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2140u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD214Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2154u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2160u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2168u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2174u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD217Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2188u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2190u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD219Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD21A4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD21B0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD21B8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD21C4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD21CCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD21D8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD21E4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD21ECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD21F8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2200u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2214u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2250u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD225Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2268u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2274u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2284u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD228Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2298u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD22A8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD22C0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD22C8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD22D0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD22D8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD22E0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD22E8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD22F0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD22F8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2308u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2314u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2320u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2328u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2334u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2340u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2348u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2350u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD235Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2364u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD236Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2374u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD237Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2384u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD238Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2394u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD239Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD23A4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD23ACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD23B4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD23C0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD23CCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD23D8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD23E8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD23F0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD23FCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD240Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2414u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2424u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD242Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2434u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD243Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2444u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD244Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2458u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2460u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD246Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2474u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD247Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2488u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2490u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2498u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD24A0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD24A8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD24B0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD24B8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD24C4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD24CCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD24D8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD24E4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD24F0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD24F8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2500u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD250Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2514u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD251Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2524u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD252Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2538u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2544u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD254Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2554u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD255Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2564u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD256Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD259Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2690u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD26A0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2720u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2734u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2750u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD278Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD27B4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD27C0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD27D0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD27D4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD27ECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2818u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2850u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2868u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD287Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD288Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD28B0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD290Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2914u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD291Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2940u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2948u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD294Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2974u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD297Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD298Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2998u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD29CCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD29D4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD29DCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD29E4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD29ECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2A14u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2A1Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2A24u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2A2Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2A34u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2A40u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2A44u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2A48u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2A68u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2AC0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2AD8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2AF8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2B1Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2B3Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2B4Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2B64u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2B70u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2B78u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2B80u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2B88u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2B94u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2BA0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2BACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2BBCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2BF4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2BFCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2C00u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2C14u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2C38u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2C7Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2CBCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2CC8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2CDCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2CFCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2D10u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2D34u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2D3Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2D44u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2D48u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2D5Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2D74u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2D7Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2D90u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2D9Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2DA4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2DC0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2E10u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2E1Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2E24u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2E2Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2E3Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2E74u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2E80u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2E8Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2EA4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2EACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2EB4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2EC0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2EC8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2ED8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2EE4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2EECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2F1Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2F24u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2F30u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2F38u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2F40u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2F54u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2F60u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2F68u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2F74u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2F7Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2F90u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2F9Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2FD4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2FE4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2FE8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3004u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3010u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3014u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3024u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3038u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3090u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD30A0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD30A8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD30BCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD30C0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD30CCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3110u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3124u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3134u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3140u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD314Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3158u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD315Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3174u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3180u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD318Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3198u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD319Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD31A4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD31ACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD31C0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD31D0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD31E0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD31F8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3200u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD322Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3268u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD327Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3298u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD32A0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD32B4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD32D8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD32E0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD32E8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD32FCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3320u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3328u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3334u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3340u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3354u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3364u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD337Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3388u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3398u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD33ACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD33B8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD33C0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD33D0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD33E0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3420u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD34B4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD34BCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD34D8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD354Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3564u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD35B0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD35C4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD35D0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD35D4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD35DCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD35F8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3604u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD360Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3624u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3638u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD364Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3654u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3660u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3668u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3674u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3690u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3698u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD36A4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD36ACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD36C0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD36C8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD36F0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3774u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3788u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD37C4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3828u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3830u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3838u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3848u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3870u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3890u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD389Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD38C0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD38C8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD38DCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD38F8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3900u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3904u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3914u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3930u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3938u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3944u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3948u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD395Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3974u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD397Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD398Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3990u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD39A0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD39B8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD39C8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD39D0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD39D4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD39E0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3A24u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3A30u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3A48u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3A64u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3A6Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3A80u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3A8Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3A98u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3ABCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3AE4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3AECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3B00u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3B10u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3B3Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3B44u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3B58u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3B68u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3BB8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3BC0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3BD4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3BE4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3C08u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3C10u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3C24u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3C34u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3C4Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3C7Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3D08u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3D10u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3D28u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3D40u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3D88u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3D90u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3DA4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3DB0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3DB8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3DC4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3DD0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3DF4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3E00u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3E0Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3E18u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3E24u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3E34u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3E40u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3E48u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3E54u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3E68u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3E74u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3E80u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3E8Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3E9Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3EF0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3EFCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3F08u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3F14u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3F20u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3F30u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3F3Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3F44u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3F50u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3F64u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3F70u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3F7Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3F88u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3F98u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3FA8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3FB4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3FC0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3FCCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3FD8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3FECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3FF8u, &recomp_unit_0179, "recomp_unit_0179");
}
} // namespace psprecomp
