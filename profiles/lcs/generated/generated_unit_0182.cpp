#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0182[4092] = {
    1, 0, 2, 0, 3, 0, 4, 0, 5, 0, 6, 0, 7, 0, 8, 0, 9, 0, 10, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 17, 0,
    18, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 21, 0, 22, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 25, 26,
    0, 27, 0, 28, 0, 29, 0, 30, 0, 31, 0, 32, 33, 0, 0, 0, 34, 35, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 38, 0, 39, 0,
    40, 0, 41, 0, 42, 0, 43, 0, 44, 0, 45, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    49, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 54, 0, 0, 0, 0, 55,
    0, 0, 0, 56, 0, 0, 0, 57, 0, 58, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 61, 62, 0, 63, 0, 64,
    0, 65, 0, 66, 0, 67, 0, 68, 69, 0, 0, 0, 70, 71, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 74, 0, 75, 0, 76, 0, 77, 0,
    78, 0, 79, 0, 80, 0, 81, 0, 82, 0, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0,
    0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 90, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0,
    0, 93, 0, 94, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 97, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0,
    0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 0, 0, 103,
    0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 109, 0, 110, 0, 0, 0, 111, 0, 112, 0, 113, 0, 114, 0, 0, 115, 0, 116,
    0, 117, 0, 118, 0, 119, 0, 120, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 124, 0, 125, 0, 126, 0, 127, 0, 128, 0, 0, 0,
    0, 0, 129, 0, 130, 0, 0, 131, 0, 0, 0, 132, 0, 133, 0, 134, 0, 135, 0, 0, 136, 0, 0, 137, 0, 138, 0, 139, 0, 140, 0, 141,
    0, 142, 0, 143, 0, 0, 0, 0, 0, 144, 0, 145, 0, 146, 0, 147, 0, 148, 0, 149, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0,
    0, 153, 0, 0, 0, 154, 0, 155, 0, 156, 0, 157, 0, 0, 158, 0, 0, 0, 159, 0, 160, 0, 161, 0, 0, 0, 162, 0, 163, 0, 164, 0,
    0, 165, 0, 166, 0, 167, 0, 168, 0, 169, 0, 0, 170, 0, 171, 0, 0, 0, 172, 0, 173, 0, 174, 0, 175, 0, 0, 0, 176, 0, 0, 177,
    178, 179, 0, 180, 0, 181, 0, 182, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 185, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0,
    189, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 193, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 197, 0,
    0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 201, 0, 0, 0, 202, 0, 203, 0, 204, 0, 205, 0, 0, 0, 206, 0, 207, 0, 208, 0, 209, 0, 0, 210, 0, 0, 0, 0, 0,
    211, 0, 0, 0, 212, 0, 213, 0, 214, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218,
    0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 222, 0, 223, 0, 224, 0, 0, 0, 225, 0, 226, 0, 0, 0, 0, 227, 0,
    228, 0, 0, 0, 0, 229, 0, 230, 0, 0, 0, 0, 231, 0, 232, 0, 0, 0, 0, 233, 0, 234, 0, 235, 0, 0, 236, 0, 237, 0, 238, 0,
    0, 239, 0, 240, 0, 241, 0, 0, 242, 0, 243, 0, 244, 0, 0, 245, 0, 246, 0, 0, 0, 247, 0, 0, 248, 0, 249, 0, 250, 0, 251, 0,
    0, 252, 0, 0, 0, 0, 0, 253, 254, 0, 0, 255, 0, 256, 0, 0, 0, 257, 0, 0, 258, 259, 260, 0, 261, 0, 0, 0, 0, 262, 0, 0,
    0, 0, 0, 263, 0, 0, 264, 0, 265, 266, 0, 0, 267, 0, 268, 269, 0, 270, 0, 271, 0, 272, 0, 273, 274, 0, 0, 275, 0, 0, 0, 276,
    0, 0, 0, 0, 0, 0, 0, 277, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 281, 0, 282, 0, 283, 0, 0, 284, 0, 0,
    0, 0, 285, 0, 0, 0, 286, 0, 0, 287, 0, 288, 0, 289, 0, 290, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 294, 0,
    295, 0, 296, 0, 297, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 301, 0, 302, 0, 303, 0, 304, 0, 0, 305, 0, 0, 0,
    0, 306, 0, 0, 0, 307, 0, 0, 308, 0, 309, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 312, 0, 313, 314, 0, 315, 0, 0, 316, 0,
    0, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 320, 0, 0, 321, 0, 0, 322, 0, 323, 0, 0, 324, 0, 0, 325,
    0, 0, 326, 0, 0, 327, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0, 0, 330, 0, 0, 331, 0, 0, 332, 0, 333, 0, 0, 334, 0,
    0, 335, 0, 0, 336, 0, 337, 0, 0, 0, 338, 0, 0, 0, 339, 0, 340, 341, 0, 342, 0, 343, 344, 0, 345, 0, 346, 0, 347, 0, 348, 0,
    349, 0, 350, 0, 351, 352, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 355, 0, 356, 0,
    357, 0, 0, 0, 0, 358, 0, 359, 0, 0, 0, 0, 360, 0, 361, 0, 0, 0, 362, 0, 0, 363, 364, 365, 0, 366, 0, 0, 0, 367, 0, 0,
    0, 368, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 371, 0,
    372, 0, 373, 0, 0, 0, 0, 374, 0, 375, 0, 376, 0, 377, 0, 0, 0, 378, 0, 0, 0, 0, 379, 0, 380, 0, 0, 0, 0, 381, 0, 382,
    0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 385, 0, 386, 0, 0,
    0, 0, 387, 0, 0, 0, 388, 0, 389, 0, 390, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 396, 0, 0, 0, 0, 397, 0, 0, 398, 0, 399, 0,
    0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 403, 0, 404, 0, 0, 0, 0, 405, 0, 0, 0, 406, 0, 407, 0, 0, 408, 0, 409, 0, 410, 411,
    0, 412, 0, 413, 414, 0, 415, 0, 416, 0, 417, 0, 0, 0, 418, 0, 419, 0, 0, 0, 420, 0, 0, 421, 0, 0, 0, 0, 422, 0, 0, 0,
    423, 0, 424, 0, 425, 0, 0, 426, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 429, 0, 0, 0, 430,
    0, 0, 0, 0, 0, 431, 0, 432, 433, 0, 0, 0, 434, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0,
    438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 440, 0, 0, 441, 0, 442, 0, 443, 444, 0, 0, 0,
    445, 0, 446, 0, 447, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 450, 0, 451, 0, 0, 452, 0, 453, 0, 454, 455, 0, 0, 0, 456, 0, 457, 0, 458, 459, 0, 460, 0, 461, 462, 0, 463, 464, 0,
    465, 466, 0, 467, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 470, 0, 0, 471, 0,
    472, 0, 473, 0, 0, 0, 0, 474, 0, 475, 0, 476, 0, 0, 0, 0, 477, 0, 0, 478, 0, 0, 0, 479, 0, 0, 0, 0, 480, 0, 0, 0,
    0, 481, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 484, 0, 0, 0, 485, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    487, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 490, 0, 491, 0, 0, 492, 0, 493, 0, 494, 0, 0, 0, 495, 0, 0, 0,
    0, 496, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 499, 500, 0, 0, 0, 501, 0, 0, 0, 502, 0, 0, 0, 503, 0, 0,
    0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 506, 0, 0, 507, 0, 0, 0, 508, 0, 0,
    0, 509, 0, 0, 510, 0, 0, 0, 511, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 515, 0, 0, 0, 516, 0, 0, 517, 0, 518, 0, 519, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 521, 0, 522, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 527, 0, 0,
    0, 528, 0, 0, 0, 0, 0, 0, 0, 529, 0, 530, 0, 531, 0, 532, 0, 0, 0, 0, 533, 0, 534, 0, 535, 0, 536, 0, 0, 0, 0, 0,
    0, 537, 0, 0, 0, 538, 0, 0, 0, 0, 539, 0, 0, 540, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 544, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 546, 0, 547, 0, 0, 0, 548, 0, 549, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 551, 0, 0, 0, 552, 0, 0, 0, 0, 553, 0, 0, 554, 0, 555, 0, 556, 0, 557, 558, 0, 0, 559, 0, 0, 0, 560, 0, 561, 0,
    0, 0, 562, 0, 0, 0, 563, 0, 0, 564, 0, 0, 565, 0, 0, 0, 0, 0, 0, 566, 0, 567, 0, 0, 0, 568, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 569, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 571, 0, 572, 0, 573, 0, 0, 0, 0, 0, 0, 0, 574, 0, 575, 0,
    576, 0, 0, 0, 0, 0, 0, 0, 577, 0, 578, 0, 579, 0, 0, 0, 0, 0, 0, 0, 580, 0, 581, 0, 582, 0, 0, 0, 0, 0, 0, 0,
    583, 0, 584, 0, 585, 0, 586, 0, 0, 0, 0, 587, 0, 588, 0, 589, 0, 590, 0, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 592, 0,
    0, 593, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 594, 0, 0, 595, 0, 596, 0, 0, 0, 0, 0, 0, 0,
    597, 0, 0, 0, 598, 0, 599, 600, 0, 0, 601, 0, 602, 0, 603, 0, 604, 0, 605, 0, 0, 606, 0, 0, 0, 607, 0, 608, 0, 609, 0, 0,
    610, 611, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 612, 0, 613, 0, 614, 0, 615, 0, 0, 0, 616, 0, 617, 618,
    0, 0, 619, 0, 0, 0, 0, 0, 0, 0, 0, 620, 0, 0, 621, 0, 0, 622, 0, 0, 0, 0, 623, 0, 624, 0, 0, 0, 0, 0, 625, 0,
    0, 0, 0, 0, 626, 0, 627, 0, 628, 0, 629, 0, 0, 630, 631, 0, 632, 0, 633, 0, 0, 0, 634, 635, 0, 636, 637, 0, 638, 0, 0, 0,
    0, 639, 0, 0, 640, 0, 0, 0, 0, 641, 0, 642, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    644, 0, 645, 646, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 648, 0, 649,
    650, 0, 651, 0, 652, 0, 0, 653, 0, 0, 0, 654, 0, 0, 655, 0, 656, 0, 657, 0, 658, 0, 0, 659, 0, 0, 0, 0, 0, 0, 0, 0,
    660, 0, 661, 0, 662, 0, 0, 0, 663, 0, 664, 0, 0, 665, 666, 0, 667, 0, 668, 0, 669, 0, 0, 670, 0, 671, 0, 0, 0, 672, 0, 0,
    0, 0, 673, 0, 674, 0, 0, 0, 675, 0, 676, 0, 0, 0, 677, 0, 0, 678, 679, 680, 0, 681, 0, 0, 0, 682, 0, 683, 0, 684, 0, 0,
    685, 686, 0, 687, 0, 0, 688, 0, 0, 0, 0, 0, 689, 0, 0, 0, 0, 0, 0, 690, 0, 0, 691, 0, 0, 692, 0, 0, 0, 0, 693, 0,
    0, 0, 0, 694, 0, 0, 0, 0, 695, 0, 0, 696, 0, 0, 697, 0, 0, 698, 0, 699, 0, 700, 0, 701, 0, 0, 702, 0, 703, 0, 0, 0,
    0, 0, 0, 704, 705, 0, 0, 0, 0, 0, 706, 707, 0, 0, 708, 0, 0, 709, 0, 0, 710, 0, 711, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 712, 0, 0, 0, 0, 713, 0, 0, 0, 714, 0, 715, 716, 0, 717, 718, 0, 0, 719, 0, 720, 0, 0, 721, 0, 722, 0, 723, 0,
    724, 0, 0, 0, 0, 0, 0, 0, 0, 725, 0, 726, 0, 727, 0, 0, 0, 0, 0, 0, 728, 0, 729, 0, 730, 0, 0, 0, 0, 0, 731, 0,
    732, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 733, 0, 0, 734, 0, 0, 735, 0, 0, 0,
    736, 0, 737, 738, 0, 739, 0, 740, 741, 0, 0, 0, 742, 0, 743, 0, 744, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 745, 0, 0, 0,
    0, 0, 0, 746, 0, 0, 747, 0, 0, 748, 0, 749, 0, 750, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 751, 0, 0, 0, 0, 0, 0, 752,
    0, 0, 0, 753, 0, 754, 0, 0, 0, 755, 0, 756, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 757, 0, 0, 0, 0, 0, 0, 758, 0, 0,
    0, 759, 0, 760, 0, 0, 0, 761, 0, 0, 0, 0, 0, 0, 0, 0, 762, 763, 0, 0, 0, 764, 0, 765, 0, 0, 0, 0, 766, 0, 0, 0,
    767, 0, 0, 0, 0, 0, 768, 0, 0, 769, 0, 0, 770, 0, 0, 771, 0, 772, 0, 0, 773, 0, 774, 0, 0, 775, 0, 0, 776, 0, 0, 0,
    777, 0, 0, 0, 0, 0, 778, 0, 0, 779, 0, 0, 780, 0, 0, 781, 0, 782, 0, 783, 0, 0, 784, 0, 0, 785, 0, 0, 786, 0, 787, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 788, 0, 0, 0, 0, 0, 0, 789, 0, 0, 0, 790, 0, 0, 791, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 792, 793, 0, 0, 0, 794, 0, 795, 0, 0, 0, 0, 796, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 797,
    0, 0, 0, 798, 0, 0, 0, 0, 0, 799, 0, 0, 0, 0, 800, 0, 0, 0, 801, 0, 0, 802, 0, 0, 803, 0, 0, 804, 0, 805, 0, 0,
    0, 806, 0, 807, 808, 0, 0, 809, 0, 0, 810, 0, 0, 0, 0, 811, 812, 813, 0, 814, 0, 815, 0, 816, 0, 817, 0, 818, 0, 819, 0, 820,
    0, 821, 0, 822, 0, 0, 823, 0, 0, 824, 0, 0, 0, 0, 825, 0, 826, 0, 0, 827, 0, 0, 0, 0, 828, 829, 830, 0, 831, 0, 0, 0,
    0, 832, 0, 833, 0, 834, 0, 835, 0, 836, 0, 837, 0, 0, 838, 0, 0, 0, 0, 839, 840, 841, 0, 842, 0, 843, 0, 844, 0, 845, 0, 846,
    0, 847, 0, 848, 0, 849, 0, 850, 0, 0, 851, 0, 0, 852, 0, 0, 0, 0, 853, 0, 854, 0, 0, 855, 0, 0, 0, 0, 856, 857, 858, 0,
    859, 0, 860, 0, 861, 0, 862, 0, 863, 0, 0, 864, 0, 0, 0, 0, 865, 866, 867, 0, 868, 0, 869, 0, 870, 0, 871, 0, 872, 0, 873, 0,
    874, 0, 875, 0, 876, 0, 0, 877, 0, 0, 878, 0, 0, 0, 0, 879, 0, 880, 0, 0, 881, 0, 0, 0, 0, 882, 883, 884, 0, 885, 0, 886,
    0, 887, 0, 888, 0, 889, 0, 0, 890, 0, 0, 0, 0, 891, 892, 893, 0, 894, 0, 0, 895, 0, 0, 896, 0, 897, 0, 0, 0, 0, 0, 898,
    0, 0, 899, 0, 0, 900, 0, 0, 901, 0, 902, 0, 903, 0, 904, 0, 0, 905, 0, 0, 0, 0, 906, 907, 908, 0, 909, 0, 910, 0, 911, 0,
    912, 0, 913, 0, 914, 0, 915, 0, 916, 0, 917, 0, 0, 918, 0, 0, 919, 0, 0, 0, 0, 920, 0, 921, 0, 0, 922, 0, 0, 0, 0, 923,
    924, 925, 0, 926, 0, 927, 0, 928, 0, 929, 0, 930, 0, 0, 931, 0, 0, 932, 0, 0, 0, 0, 933, 0, 934, 0, 0, 935, 0, 0, 0, 0,
    936, 937, 938, 0, 939, 0, 0, 940, 0, 941, 0, 0, 942, 0, 0, 943, 0, 0, 944, 0, 945, 0, 0, 946, 0, 947, 0, 0, 948, 0, 0, 949,
    0, 0, 950, 0, 0, 0, 0, 0, 0, 951, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 952, 0, 953, 0, 0, 954, 0, 0, 955, 0, 0,
    956, 0, 957, 0, 0, 0, 958, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 959, 0, 0, 0, 0, 0, 0, 960,
    0, 0, 0, 0, 0, 961, 0, 0, 0, 962, 0, 963, 0, 0, 0, 0, 964, 0, 965, 0, 0, 966, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 967, 0, 0, 0, 0, 0, 0, 968, 0, 0, 0, 0, 0, 969, 0, 0, 0, 970, 0, 971, 0, 0, 0, 0, 972, 0, 0, 0,
    973, 0, 0, 0, 0, 0, 0, 974, 0, 0, 0, 0, 0, 975, 0, 976, 0, 0, 977, 0, 0, 978, 0, 979, 0, 0, 980, 0, 0, 981, 0, 0,
    982, 0, 0, 983, 0, 0, 984, 0, 0, 0, 0, 985, 0, 986, 0, 0, 0, 987, 0, 988, 0, 989, 0, 990, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 991, 0, 0, 992, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 993, 0, 994, 0, 0, 0, 0, 995, 996, 0, 997, 0, 998, 0, 0, 999, 0, 1000, 0, 0, 0, 1001, 0,
    0, 1002, 0, 0, 1003, 0, 1004, 1005, 0, 1006, 0, 0, 1007, 0, 0, 1008, 0, 1009, 0, 1010, 0, 1011, 0, 0, 0, 0, 0, 0, 1012, 0, 0, 1013,
    0, 1014, 0, 1015, 0, 0, 0, 0, 0, 0, 1016, 0, 1017, 0, 1018, 0, 0, 0, 0, 0, 1019, 0, 1020, 0, 0, 0, 0, 0, 0, 1021, 0, 1022,
    0, 0, 1023, 0, 0, 1024, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1025, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 1026, 0, 1027, 0, 1028, 0, 1029, 0, 1030, 0, 0, 0, 0, 0, 1031, 0, 0, 1032, 0, 0, 0, 1033, 0, 1034, 0, 1035, 0, 1036,
    0, 1037, 0, 1038, 0, 1039, 0, 1040, 0, 0, 0, 1041, 0, 1042, 1043, 0, 1044, 0, 1045, 0, 0, 0, 1046, 0, 0, 0, 1047, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 1048, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1049, 0, 1050, 0, 1051, 0, 1052, 0, 1053, 0, 0, 0, 0, 0, 0, 1054,
    0, 0, 0, 0, 0, 0, 0, 1055, 0, 1056, 0, 0, 0, 1057, 0, 0, 1058, 0, 0, 1059, 0, 1060, 1061, 0, 0, 1062, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 1063, 0, 0, 0, 0, 0, 0, 1064, 1065, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1066, 0, 0, 1067, 0, 0, 0, 1068,
    0, 0, 0, 0, 0, 1069, 0, 1070, 0, 1071, 0, 1072, 0, 1073, 0, 0, 0, 0, 0, 0, 1074, 0, 0, 1075, 0, 0, 0, 0, 0, 1076, 0, 1077,
    0, 0, 0, 1078, 0, 0, 1079, 0, 0, 1080, 0, 1081, 1082, 0, 0, 1083, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1084,
};
void recomp_unit_0182_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08ADC000u;
        entry_id = (entry_delta < 16368u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0182[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08ADC000;
    case 2u: goto L_08ADC008;
    case 3u: goto L_08ADC010;
    case 4u: goto L_08ADC018;
    case 5u: goto L_08ADC020;
    case 6u: goto L_08ADC028;
    case 7u: goto L_08ADC030;
    case 8u: goto L_08ADC038;
    case 9u: goto L_08ADC040;
    case 10u: goto L_08ADC048;
    case 11u: goto L_08ADC050;
    case 12u: goto L_08ADC070;
    case 13u: goto L_08ADC098;
    case 14u: goto L_08ADC0B0;
    case 15u: goto L_08ADC0BC;
    case 16u: goto L_08ADC0F0;
    case 17u: goto L_08ADC0F8;
    case 18u: goto L_08ADC100;
    case 19u: goto L_08ADC110;
    case 20u: goto L_08ADC120;
    case 21u: goto L_08ADC130;
    case 22u: goto L_08ADC138;
    case 23u: goto L_08ADC13C;
    case 24u: goto L_08ADC170;
    case 25u: goto L_08ADC178;
    case 26u: goto L_08ADC17C;
    case 27u: goto L_08ADC184;
    case 28u: goto L_08ADC18C;
    case 29u: goto L_08ADC194;
    case 30u: goto L_08ADC19C;
    case 31u: goto L_08ADC1A4;
    case 32u: goto L_08ADC1AC;
    case 33u: goto L_08ADC1B0;
    case 34u: goto L_08ADC1C0;
    case 35u: goto L_08ADC1C4;
    case 36u: goto L_08ADC1D4;
    case 37u: goto L_08ADC1E8;
    case 38u: goto L_08ADC1F0;
    case 39u: goto L_08ADC1F8;
    case 40u: goto L_08ADC200;
    case 41u: goto L_08ADC208;
    case 42u: goto L_08ADC210;
    case 43u: goto L_08ADC218;
    case 44u: goto L_08ADC220;
    case 45u: goto L_08ADC228;
    case 46u: goto L_08ADC230;
    case 47u: goto L_08ADC238;
    case 48u: goto L_08ADC258;
    case 49u: goto L_08ADC280;
    case 50u: goto L_08ADC294;
    case 51u: goto L_08ADC2A0;
    case 52u: goto L_08ADC2D8;
    case 53u: goto L_08ADC2E0;
    case 54u: goto L_08ADC2E8;
    case 55u: goto L_08ADC2FC;
    case 56u: goto L_08ADC30C;
    case 57u: goto L_08ADC31C;
    case 58u: goto L_08ADC324;
    case 59u: goto L_08ADC328;
    case 60u: goto L_08ADC360;
    case 61u: goto L_08ADC368;
    case 62u: goto L_08ADC36C;
    case 63u: goto L_08ADC374;
    case 64u: goto L_08ADC37C;
    case 65u: goto L_08ADC384;
    case 66u: goto L_08ADC38C;
    case 67u: goto L_08ADC394;
    case 68u: goto L_08ADC39C;
    case 69u: goto L_08ADC3A0;
    case 70u: goto L_08ADC3B0;
    case 71u: goto L_08ADC3B4;
    case 72u: goto L_08ADC3C4;
    case 73u: goto L_08ADC3D8;
    case 74u: goto L_08ADC3E0;
    case 75u: goto L_08ADC3E8;
    case 76u: goto L_08ADC3F0;
    case 77u: goto L_08ADC3F8;
    case 78u: goto L_08ADC400;
    case 79u: goto L_08ADC408;
    case 80u: goto L_08ADC410;
    case 81u: goto L_08ADC418;
    case 82u: goto L_08ADC420;
    case 83u: goto L_08ADC428;
    case 84u: goto L_08ADC448;
    case 85u: goto L_08ADC470;
    case 86u: goto L_08ADC484;
    case 87u: goto L_08ADC490;
    case 88u: goto L_08ADC4C4;
    case 89u: goto L_08ADC4CC;
    case 90u: goto L_08ADC4D4;
    case 91u: goto L_08ADC4E4;
    case 92u: goto L_08ADC4F4;
    case 93u: goto L_08ADC504;
    case 94u: goto L_08ADC50C;
    case 95u: goto L_08ADC510;
    case 96u: goto L_08ADC544;
    case 97u: goto L_08ADC54C;
    case 98u: goto L_08ADC550;
    case 99u: goto L_08ADC578;
    case 100u: goto L_08ADC588;
    case 101u: goto L_08ADC5E4;
    case 102u: goto L_08ADC5EC;
    case 103u: goto L_08ADC5FC;
    case 104u: goto L_08ADC604;
    case 105u: goto L_08ADC634;
    case 106u: goto L_08ADC640;
    case 107u: goto L_08ADC6A0;
    case 108u: goto L_08ADC6A8;
    case 109u: goto L_08ADC6B8;
    case 110u: goto L_08ADC6C0;
    case 111u: goto L_08ADC6D0;
    case 112u: goto L_08ADC6D8;
    case 113u: goto L_08ADC6E0;
    case 114u: goto L_08ADC6E8;
    case 115u: goto L_08ADC6F4;
    case 116u: goto L_08ADC6FC;
    case 117u: goto L_08ADC704;
    case 118u: goto L_08ADC70C;
    case 119u: goto L_08ADC714;
    case 120u: goto L_08ADC71C;
    case 121u: goto L_08ADC724;
    case 122u: goto L_08ADC740;
    case 123u: goto L_08ADC748;
    case 124u: goto L_08ADC750;
    case 125u: goto L_08ADC758;
    case 126u: goto L_08ADC760;
    case 127u: goto L_08ADC768;
    case 128u: goto L_08ADC770;
    case 129u: goto L_08ADC788;
    case 130u: goto L_08ADC790;
    case 131u: goto L_08ADC79C;
    case 132u: goto L_08ADC7AC;
    case 133u: goto L_08ADC7B4;
    case 134u: goto L_08ADC7BC;
    case 135u: goto L_08ADC7C4;
    case 136u: goto L_08ADC7D0;
    case 137u: goto L_08ADC7DC;
    case 138u: goto L_08ADC7E4;
    case 139u: goto L_08ADC7EC;
    case 140u: goto L_08ADC7F4;
    case 141u: goto L_08ADC7FC;
    case 142u: goto L_08ADC804;
    case 143u: goto L_08ADC80C;
    case 144u: goto L_08ADC824;
    case 145u: goto L_08ADC82C;
    case 146u: goto L_08ADC834;
    case 147u: goto L_08ADC83C;
    case 148u: goto L_08ADC844;
    case 149u: goto L_08ADC84C;
    case 150u: goto L_08ADC854;
    case 151u: goto L_08ADC870;
    case 152u: goto L_08ADC878;
    case 153u: goto L_08ADC884;
    case 154u: goto L_08ADC894;
    case 155u: goto L_08ADC89C;
    case 156u: goto L_08ADC8A4;
    case 157u: goto L_08ADC8AC;
    case 158u: goto L_08ADC8B8;
    case 159u: goto L_08ADC8C8;
    case 160u: goto L_08ADC8D0;
    case 161u: goto L_08ADC8D8;
    case 162u: goto L_08ADC8E8;
    case 163u: goto L_08ADC8F0;
    case 164u: goto L_08ADC8F8;
    case 165u: goto L_08ADC904;
    case 166u: goto L_08ADC90C;
    case 167u: goto L_08ADC914;
    case 168u: goto L_08ADC91C;
    case 169u: goto L_08ADC924;
    case 170u: goto L_08ADC930;
    case 171u: goto L_08ADC938;
    case 172u: goto L_08ADC948;
    case 173u: goto L_08ADC950;
    case 174u: goto L_08ADC958;
    case 175u: goto L_08ADC960;
    case 176u: goto L_08ADC970;
    case 177u: goto L_08ADC97C;
    case 178u: goto L_08ADC980;
    case 179u: goto L_08ADC984;
    case 180u: goto L_08ADC98C;
    case 181u: goto L_08ADC994;
    case 182u: goto L_08ADC99C;
    case 183u: goto L_08ADC9A4;
    case 184u: goto L_08ADC9C0;
    case 185u: goto L_08ADC9CC;
    case 186u: goto L_08ADC9D0;
    case 187u: goto L_08ADC9E0;
    case 188u: goto L_08ADC9F8;
    case 189u: goto L_08ADCA00;
    case 190u: goto L_08ADCA08;
    case 191u: goto L_08ADCA18;
    case 192u: goto L_08ADCA2C;
    case 193u: goto L_08ADCA34;
    case 194u: goto L_08ADCA40;
    case 195u: goto L_08ADCA4C;
    case 196u: goto L_08ADCA6C;
    case 197u: goto L_08ADCA78;
    case 198u: goto L_08ADCA84;
    case 199u: goto L_08ADCA90;
    case 200u: goto L_08ADCAD4;
    case 201u: goto L_08ADCB0C;
    case 202u: goto L_08ADCB1C;
    case 203u: goto L_08ADCB24;
    case 204u: goto L_08ADCB2C;
    case 205u: goto L_08ADCB34;
    case 206u: goto L_08ADCB44;
    case 207u: goto L_08ADCB4C;
    case 208u: goto L_08ADCB54;
    case 209u: goto L_08ADCB5C;
    case 210u: goto L_08ADCB68;
    case 211u: goto L_08ADCB80;
    case 212u: goto L_08ADCB90;
    case 213u: goto L_08ADCB98;
    case 214u: goto L_08ADCBA0;
    case 215u: goto L_08ADCBB0;
    case 216u: goto L_08ADCBC0;
    case 217u: goto L_08ADCBCC;
    case 218u: goto L_08ADCBFC;
    case 219u: goto L_08ADCC0C;
    case 220u: goto L_08ADCC1C;
    case 221u: goto L_08ADCC34;
    case 222u: goto L_08ADCC3C;
    case 223u: goto L_08ADCC44;
    case 224u: goto L_08ADCC4C;
    case 225u: goto L_08ADCC5C;
    case 226u: goto L_08ADCC64;
    case 227u: goto L_08ADCC78;
    case 228u: goto L_08ADCC80;
    case 229u: goto L_08ADCC94;
    case 230u: goto L_08ADCC9C;
    case 231u: goto L_08ADCCB0;
    case 232u: goto L_08ADCCB8;
    case 233u: goto L_08ADCCCC;
    case 234u: goto L_08ADCCD4;
    case 235u: goto L_08ADCCDC;
    case 236u: goto L_08ADCCE8;
    case 237u: goto L_08ADCCF0;
    case 238u: goto L_08ADCCF8;
    case 239u: goto L_08ADCD04;
    case 240u: goto L_08ADCD0C;
    case 241u: goto L_08ADCD14;
    case 242u: goto L_08ADCD20;
    case 243u: goto L_08ADCD28;
    case 244u: goto L_08ADCD30;
    case 245u: goto L_08ADCD3C;
    case 246u: goto L_08ADCD44;
    case 247u: goto L_08ADCD54;
    case 248u: goto L_08ADCD60;
    case 249u: goto L_08ADCD68;
    case 250u: goto L_08ADCD70;
    case 251u: goto L_08ADCD78;
    case 252u: goto L_08ADCD84;
    case 253u: goto L_08ADCD9C;
    case 254u: goto L_08ADCDA0;
    case 255u: goto L_08ADCDAC;
    case 256u: goto L_08ADCDB4;
    case 257u: goto L_08ADCDC4;
    case 258u: goto L_08ADCDD0;
    case 259u: goto L_08ADCDD4;
    case 260u: goto L_08ADCDD8;
    case 261u: goto L_08ADCDE0;
    case 262u: goto L_08ADCDF4;
    case 263u: goto L_08ADCE0C;
    case 264u: goto L_08ADCE18;
    case 265u: goto L_08ADCE20;
    case 266u: goto L_08ADCE24;
    case 267u: goto L_08ADCE30;
    case 268u: goto L_08ADCE38;
    case 269u: goto L_08ADCE3C;
    case 270u: goto L_08ADCE44;
    case 271u: goto L_08ADCE4C;
    case 272u: goto L_08ADCE54;
    case 273u: goto L_08ADCE5C;
    case 274u: goto L_08ADCE60;
    case 275u: goto L_08ADCE6C;
    case 276u: goto L_08ADCE7C;
    case 277u: goto L_08ADCE9C;
    case 278u: goto L_08ADCEA0;
    case 279u: goto L_08ADCF00;
    case 280u: goto L_08ADCF50;
    case 281u: goto L_08ADCF58;
    case 282u: goto L_08ADCF60;
    case 283u: goto L_08ADCF68;
    case 284u: goto L_08ADCF74;
    case 285u: goto L_08ADCF88;
    case 286u: goto L_08ADCF98;
    case 287u: goto L_08ADCFA4;
    case 288u: goto L_08ADCFAC;
    case 289u: goto L_08ADCFB4;
    case 290u: goto L_08ADCFBC;
    case 291u: goto L_08ADCFC8;
    case 292u: goto L_08ADCFDC;
    case 293u: goto L_08ADCFEC;
    case 294u: goto L_08ADCFF8;
    case 295u: goto L_08ADD000;
    case 296u: goto L_08ADD008;
    case 297u: goto L_08ADD010;
    case 298u: goto L_08ADD01C;
    case 299u: goto L_08ADD030;
    case 300u: goto L_08ADD040;
    case 301u: goto L_08ADD04C;
    case 302u: goto L_08ADD054;
    case 303u: goto L_08ADD05C;
    case 304u: goto L_08ADD064;
    case 305u: goto L_08ADD070;
    case 306u: goto L_08ADD084;
    case 307u: goto L_08ADD094;
    case 308u: goto L_08ADD0A0;
    case 309u: goto L_08ADD0A8;
    case 310u: goto L_08ADD0B8;
    case 311u: goto L_08ADD0C8;
    case 312u: goto L_08ADD0D8;
    case 313u: goto L_08ADD0E0;
    case 314u: goto L_08ADD0E4;
    case 315u: goto L_08ADD0EC;
    case 316u: goto L_08ADD0F8;
    case 317u: goto L_08ADD10C;
    case 318u: goto L_08ADD120;
    case 319u: goto L_08ADD138;
    case 320u: goto L_08ADD144;
    case 321u: goto L_08ADD150;
    case 322u: goto L_08ADD15C;
    case 323u: goto L_08ADD164;
    case 324u: goto L_08ADD170;
    case 325u: goto L_08ADD17C;
    case 326u: goto L_08ADD188;
    case 327u: goto L_08ADD194;
    case 328u: goto L_08ADD1A8;
    case 329u: goto L_08ADD1C0;
    case 330u: goto L_08ADD1CC;
    case 331u: goto L_08ADD1D8;
    case 332u: goto L_08ADD1E4;
    case 333u: goto L_08ADD1EC;
    case 334u: goto L_08ADD1F8;
    case 335u: goto L_08ADD204;
    case 336u: goto L_08ADD210;
    case 337u: goto L_08ADD218;
    case 338u: goto L_08ADD228;
    case 339u: goto L_08ADD238;
    case 340u: goto L_08ADD240;
    case 341u: goto L_08ADD244;
    case 342u: goto L_08ADD24C;
    case 343u: goto L_08ADD254;
    case 344u: goto L_08ADD258;
    case 345u: goto L_08ADD260;
    case 346u: goto L_08ADD268;
    case 347u: goto L_08ADD270;
    case 348u: goto L_08ADD278;
    case 349u: goto L_08ADD280;
    case 350u: goto L_08ADD288;
    case 351u: goto L_08ADD290;
    case 352u: goto L_08ADD294;
    case 353u: goto L_08ADD29C;
    case 354u: goto L_08ADD2E4;
    case 355u: goto L_08ADD2F0;
    case 356u: goto L_08ADD2F8;
    case 357u: goto L_08ADD300;
    case 358u: goto L_08ADD314;
    case 359u: goto L_08ADD31C;
    case 360u: goto L_08ADD330;
    case 361u: goto L_08ADD338;
    case 362u: goto L_08ADD348;
    case 363u: goto L_08ADD354;
    case 364u: goto L_08ADD358;
    case 365u: goto L_08ADD35C;
    case 366u: goto L_08ADD364;
    case 367u: goto L_08ADD374;
    case 368u: goto L_08ADD384;
    case 369u: goto L_08ADD394;
    case 370u: goto L_08ADD3E0;
    case 371u: goto L_08ADD3F8;
    case 372u: goto L_08ADD400;
    case 373u: goto L_08ADD408;
    case 374u: goto L_08ADD41C;
    case 375u: goto L_08ADD424;
    case 376u: goto L_08ADD42C;
    case 377u: goto L_08ADD434;
    case 378u: goto L_08ADD444;
    case 379u: goto L_08ADD458;
    case 380u: goto L_08ADD460;
    case 381u: goto L_08ADD474;
    case 382u: goto L_08ADD47C;
    case 383u: goto L_08ADD484;
    case 384u: goto L_08ADD4D8;
    case 385u: goto L_08ADD4EC;
    case 386u: goto L_08ADD4F4;
    case 387u: goto L_08ADD508;
    case 388u: goto L_08ADD518;
    case 389u: goto L_08ADD520;
    case 390u: goto L_08ADD528;
    case 391u: goto L_08ADD538;
    case 392u: goto L_08ADD548;
    case 393u: goto L_08ADD554;
    case 394u: goto L_08ADD5B4;
    case 395u: goto L_08ADD5C8;
    case 396u: goto L_08ADD5D0;
    case 397u: goto L_08ADD5E4;
    case 398u: goto L_08ADD5F0;
    case 399u: goto L_08ADD5F8;
    case 400u: goto L_08ADD604;
    case 401u: goto L_08ADD64C;
    case 402u: goto L_08ADD694;
    case 403u: goto L_08ADD6A8;
    case 404u: goto L_08ADD6B0;
    case 405u: goto L_08ADD6C4;
    case 406u: goto L_08ADD6D4;
    case 407u: goto L_08ADD6DC;
    case 408u: goto L_08ADD6E8;
    case 409u: goto L_08ADD6F0;
    case 410u: goto L_08ADD6F8;
    case 411u: goto L_08ADD6FC;
    case 412u: goto L_08ADD704;
    case 413u: goto L_08ADD70C;
    case 414u: goto L_08ADD710;
    case 415u: goto L_08ADD718;
    case 416u: goto L_08ADD720;
    case 417u: goto L_08ADD728;
    case 418u: goto L_08ADD738;
    case 419u: goto L_08ADD740;
    case 420u: goto L_08ADD750;
    case 421u: goto L_08ADD75C;
    case 422u: goto L_08ADD770;
    case 423u: goto L_08ADD780;
    case 424u: goto L_08ADD788;
    case 425u: goto L_08ADD790;
    case 426u: goto L_08ADD79C;
    case 427u: goto L_08ADD7A4;
    case 428u: goto L_08ADD7D4;
    case 429u: goto L_08ADD7EC;
    case 430u: goto L_08ADD7FC;
    case 431u: goto L_08ADD814;
    case 432u: goto L_08ADD81C;
    case 433u: goto L_08ADD820;
    case 434u: goto L_08ADD830;
    case 435u: goto L_08ADD83C;
    case 436u: goto L_08ADD84C;
    case 437u: goto L_08ADD860;
    case 438u: goto L_08ADD880;
    case 439u: goto L_08ADD8C8;
    case 440u: goto L_08ADD8D0;
    case 441u: goto L_08ADD8DC;
    case 442u: goto L_08ADD8E4;
    case 443u: goto L_08ADD8EC;
    case 444u: goto L_08ADD8F0;
    case 445u: goto L_08ADD900;
    case 446u: goto L_08ADD908;
    case 447u: goto L_08ADD910;
    case 448u: goto L_08ADD924;
    case 449u: goto L_08ADD944;
    case 450u: goto L_08ADD98C;
    case 451u: goto L_08ADD994;
    case 452u: goto L_08ADD9A0;
    case 453u: goto L_08ADD9A8;
    case 454u: goto L_08ADD9B0;
    case 455u: goto L_08ADD9B4;
    case 456u: goto L_08ADD9C4;
    case 457u: goto L_08ADD9CC;
    case 458u: goto L_08ADD9D4;
    case 459u: goto L_08ADD9D8;
    case 460u: goto L_08ADD9E0;
    case 461u: goto L_08ADD9E8;
    case 462u: goto L_08ADD9EC;
    case 463u: goto L_08ADD9F4;
    case 464u: goto L_08ADD9F8;
    case 465u: goto L_08ADDA00;
    case 466u: goto L_08ADDA04;
    case 467u: goto L_08ADDA0C;
    case 468u: goto L_08ADDA1C;
    case 469u: goto L_08ADDA64;
    case 470u: goto L_08ADDA6C;
    case 471u: goto L_08ADDA78;
    case 472u: goto L_08ADDA80;
    case 473u: goto L_08ADDA88;
    case 474u: goto L_08ADDA9C;
    case 475u: goto L_08ADDAA4;
    case 476u: goto L_08ADDAAC;
    case 477u: goto L_08ADDAC0;
    case 478u: goto L_08ADDACC;
    case 479u: goto L_08ADDADC;
    case 480u: goto L_08ADDAF0;
    case 481u: goto L_08ADDB04;
    case 482u: goto L_08ADDB14;
    case 483u: goto L_08ADDB58;
    case 484u: goto L_08ADDB64;
    case 485u: goto L_08ADDB74;
    case 486u: goto L_08ADDBB8;
    case 487u: goto L_08ADDC00;
    case 488u: goto L_08ADDC04;
    case 489u: goto L_08ADDC34;
    case 490u: goto L_08ADDC3C;
    case 491u: goto L_08ADDC44;
    case 492u: goto L_08ADDC50;
    case 493u: goto L_08ADDC58;
    case 494u: goto L_08ADDC60;
    case 495u: goto L_08ADDC70;
    case 496u: goto L_08ADDC84;
    case 497u: goto L_08ADDC88;
    case 498u: goto L_08ADDCB8;
    case 499u: goto L_08ADDCC0;
    case 500u: goto L_08ADDCC4;
    case 501u: goto L_08ADDCD4;
    case 502u: goto L_08ADDCE4;
    case 503u: goto L_08ADDCF4;
    case 504u: goto L_08ADDD04;
    case 505u: goto L_08ADDD48;
    case 506u: goto L_08ADDD58;
    case 507u: goto L_08ADDD64;
    case 508u: goto L_08ADDD74;
    case 509u: goto L_08ADDD84;
    case 510u: goto L_08ADDD90;
    case 511u: goto L_08ADDDA0;
    case 512u: goto L_08ADDDB0;
    case 513u: goto L_08ADDDF4;
    case 514u: goto L_08ADDE3C;
    case 515u: goto L_08ADDE48;
    case 516u: goto L_08ADDE58;
    case 517u: goto L_08ADDE64;
    case 518u: goto L_08ADDE6C;
    case 519u: goto L_08ADDE74;
    case 520u: goto L_08ADDEBC;
    case 521u: goto L_08ADDEC8;
    case 522u: goto L_08ADDED0;
    case 523u: goto L_08ADDED8;
    case 524u: goto L_08ADDF20;
    case 525u: goto L_08ADDF38;
    case 526u: goto L_08ADDF6C;
    case 527u: goto L_08ADDF74;
    case 528u: goto L_08ADDF84;
    case 529u: goto L_08ADDFA4;
    case 530u: goto L_08ADDFAC;
    case 531u: goto L_08ADDFB4;
    case 532u: goto L_08ADDFBC;
    case 533u: goto L_08ADDFD0;
    case 534u: goto L_08ADDFD8;
    case 535u: goto L_08ADDFE0;
    case 536u: goto L_08ADDFE8;
    case 537u: goto L_08ADE004;
    case 538u: goto L_08ADE014;
    case 539u: goto L_08ADE028;
    case 540u: goto L_08ADE034;
    case 541u: goto L_08ADE044;
    case 542u: goto L_08ADE08C;
    case 543u: goto L_08ADE0B8;
    case 544u: goto L_08ADE0C0;
    case 545u: goto L_08ADE0C8;
    case 546u: goto L_08ADE110;
    case 547u: goto L_08ADE118;
    case 548u: goto L_08ADE128;
    case 549u: goto L_08ADE130;
    case 550u: goto L_08ADE140;
    case 551u: goto L_08ADE188;
    case 552u: goto L_08ADE198;
    case 553u: goto L_08ADE1AC;
    case 554u: goto L_08ADE1B8;
    case 555u: goto L_08ADE1C0;
    case 556u: goto L_08ADE1C8;
    case 557u: goto L_08ADE1D0;
    case 558u: goto L_08ADE1D4;
    case 559u: goto L_08ADE1E0;
    case 560u: goto L_08ADE1F0;
    case 561u: goto L_08ADE1F8;
    case 562u: goto L_08ADE208;
    case 563u: goto L_08ADE218;
    case 564u: goto L_08ADE224;
    case 565u: goto L_08ADE230;
    case 566u: goto L_08ADE24C;
    case 567u: goto L_08ADE254;
    case 568u: goto L_08ADE264;
    case 569u: goto L_08ADE290;
    case 570u: goto L_08ADE2A4;
    case 571u: goto L_08ADE2C0;
    case 572u: goto L_08ADE2C8;
    case 573u: goto L_08ADE2D0;
    case 574u: goto L_08ADE2F0;
    case 575u: goto L_08ADE2F8;
    case 576u: goto L_08ADE300;
    case 577u: goto L_08ADE320;
    case 578u: goto L_08ADE328;
    case 579u: goto L_08ADE330;
    case 580u: goto L_08ADE350;
    case 581u: goto L_08ADE358;
    case 582u: goto L_08ADE360;
    case 583u: goto L_08ADE380;
    case 584u: goto L_08ADE388;
    case 585u: goto L_08ADE390;
    case 586u: goto L_08ADE398;
    case 587u: goto L_08ADE3AC;
    case 588u: goto L_08ADE3B4;
    case 589u: goto L_08ADE3BC;
    case 590u: goto L_08ADE3C4;
    case 591u: goto L_08ADE3EC;
    case 592u: goto L_08ADE3F8;
    case 593u: goto L_08ADE404;
    case 594u: goto L_08ADE44C;
    case 595u: goto L_08ADE458;
    case 596u: goto L_08ADE460;
    case 597u: goto L_08ADE480;
    case 598u: goto L_08ADE490;
    case 599u: goto L_08ADE498;
    case 600u: goto L_08ADE49C;
    case 601u: goto L_08ADE4A8;
    case 602u: goto L_08ADE4B0;
    case 603u: goto L_08ADE4B8;
    case 604u: goto L_08ADE4C0;
    case 605u: goto L_08ADE4C8;
    case 606u: goto L_08ADE4D4;
    case 607u: goto L_08ADE4E4;
    case 608u: goto L_08ADE4EC;
    case 609u: goto L_08ADE4F4;
    case 610u: goto L_08ADE500;
    case 611u: goto L_08ADE504;
    case 612u: goto L_08ADE548;
    case 613u: goto L_08ADE550;
    case 614u: goto L_08ADE558;
    case 615u: goto L_08ADE560;
    case 616u: goto L_08ADE570;
    case 617u: goto L_08ADE578;
    case 618u: goto L_08ADE57C;
    case 619u: goto L_08ADE588;
    case 620u: goto L_08ADE5AC;
    case 621u: goto L_08ADE5B8;
    case 622u: goto L_08ADE5C4;
    case 623u: goto L_08ADE5D8;
    case 624u: goto L_08ADE5E0;
    case 625u: goto L_08ADE5F8;
    case 626u: goto L_08ADE610;
    case 627u: goto L_08ADE618;
    case 628u: goto L_08ADE620;
    case 629u: goto L_08ADE628;
    case 630u: goto L_08ADE634;
    case 631u: goto L_08ADE638;
    case 632u: goto L_08ADE640;
    case 633u: goto L_08ADE648;
    case 634u: goto L_08ADE658;
    case 635u: goto L_08ADE65C;
    case 636u: goto L_08ADE664;
    case 637u: goto L_08ADE668;
    case 638u: goto L_08ADE670;
    case 639u: goto L_08ADE684;
    case 640u: goto L_08ADE690;
    case 641u: goto L_08ADE6A4;
    case 642u: goto L_08ADE6AC;
    case 643u: goto L_08ADE6B8;
    case 644u: goto L_08ADE700;
    case 645u: goto L_08ADE708;
    case 646u: goto L_08ADE70C;
    case 647u: goto L_08ADE738;
    case 648u: goto L_08ADE774;
    case 649u: goto L_08ADE77C;
    case 650u: goto L_08ADE780;
    case 651u: goto L_08ADE788;
    case 652u: goto L_08ADE790;
    case 653u: goto L_08ADE79C;
    case 654u: goto L_08ADE7AC;
    case 655u: goto L_08ADE7B8;
    case 656u: goto L_08ADE7C0;
    case 657u: goto L_08ADE7C8;
    case 658u: goto L_08ADE7D0;
    case 659u: goto L_08ADE7DC;
    case 660u: goto L_08ADE800;
    case 661u: goto L_08ADE808;
    case 662u: goto L_08ADE810;
    case 663u: goto L_08ADE820;
    case 664u: goto L_08ADE828;
    case 665u: goto L_08ADE834;
    case 666u: goto L_08ADE838;
    case 667u: goto L_08ADE840;
    case 668u: goto L_08ADE848;
    case 669u: goto L_08ADE850;
    case 670u: goto L_08ADE85C;
    case 671u: goto L_08ADE864;
    case 672u: goto L_08ADE874;
    case 673u: goto L_08ADE888;
    case 674u: goto L_08ADE890;
    case 675u: goto L_08ADE8A0;
    case 676u: goto L_08ADE8A8;
    case 677u: goto L_08ADE8B8;
    case 678u: goto L_08ADE8C4;
    case 679u: goto L_08ADE8C8;
    case 680u: goto L_08ADE8CC;
    case 681u: goto L_08ADE8D4;
    case 682u: goto L_08ADE8E4;
    case 683u: goto L_08ADE8EC;
    case 684u: goto L_08ADE8F4;
    case 685u: goto L_08ADE900;
    case 686u: goto L_08ADE904;
    case 687u: goto L_08ADE90C;
    case 688u: goto L_08ADE918;
    case 689u: goto L_08ADE930;
    case 690u: goto L_08ADE94C;
    case 691u: goto L_08ADE958;
    case 692u: goto L_08ADE964;
    case 693u: goto L_08ADE978;
    case 694u: goto L_08ADE98C;
    case 695u: goto L_08ADE9A0;
    case 696u: goto L_08ADE9AC;
    case 697u: goto L_08ADE9B8;
    case 698u: goto L_08ADE9C4;
    case 699u: goto L_08ADE9CC;
    case 700u: goto L_08ADE9D4;
    case 701u: goto L_08ADE9DC;
    case 702u: goto L_08ADE9E8;
    case 703u: goto L_08ADE9F0;
    case 704u: goto L_08ADEA0C;
    case 705u: goto L_08ADEA10;
    case 706u: goto L_08ADEA28;
    case 707u: goto L_08ADEA2C;
    case 708u: goto L_08ADEA38;
    case 709u: goto L_08ADEA44;
    case 710u: goto L_08ADEA50;
    case 711u: goto L_08ADEA58;
    case 712u: goto L_08ADEA8C;
    case 713u: goto L_08ADEAA0;
    case 714u: goto L_08ADEAB0;
    case 715u: goto L_08ADEAB8;
    case 716u: goto L_08ADEABC;
    case 717u: goto L_08ADEAC4;
    case 718u: goto L_08ADEAC8;
    case 719u: goto L_08ADEAD4;
    case 720u: goto L_08ADEADC;
    case 721u: goto L_08ADEAE8;
    case 722u: goto L_08ADEAF0;
    case 723u: goto L_08ADEAF8;
    case 724u: goto L_08ADEB00;
    case 725u: goto L_08ADEB24;
    case 726u: goto L_08ADEB2C;
    case 727u: goto L_08ADEB34;
    case 728u: goto L_08ADEB50;
    case 729u: goto L_08ADEB58;
    case 730u: goto L_08ADEB60;
    case 731u: goto L_08ADEB78;
    case 732u: goto L_08ADEB80;
    case 733u: goto L_08ADECD8;
    case 734u: goto L_08ADECE4;
    case 735u: goto L_08ADECF0;
    case 736u: goto L_08ADED00;
    case 737u: goto L_08ADED08;
    case 738u: goto L_08ADED0C;
    case 739u: goto L_08ADED14;
    case 740u: goto L_08ADED1C;
    case 741u: goto L_08ADED20;
    case 742u: goto L_08ADED30;
    case 743u: goto L_08ADED38;
    case 744u: goto L_08ADED40;
    case 745u: goto L_08ADED70;
    case 746u: goto L_08ADED8C;
    case 747u: goto L_08ADED98;
    case 748u: goto L_08ADEDA4;
    case 749u: goto L_08ADEDAC;
    case 750u: goto L_08ADEDB4;
    case 751u: goto L_08ADEDE0;
    case 752u: goto L_08ADEDFC;
    case 753u: goto L_08ADEE0C;
    case 754u: goto L_08ADEE14;
    case 755u: goto L_08ADEE24;
    case 756u: goto L_08ADEE2C;
    case 757u: goto L_08ADEE58;
    case 758u: goto L_08ADEE74;
    case 759u: goto L_08ADEE84;
    case 760u: goto L_08ADEE8C;
    case 761u: goto L_08ADEE9C;
    case 762u: goto L_08ADEEC0;
    case 763u: goto L_08ADEEC4;
    case 764u: goto L_08ADEED4;
    case 765u: goto L_08ADEEDC;
    case 766u: goto L_08ADEEF0;
    case 767u: goto L_08ADEF00;
    case 768u: goto L_08ADEF18;
    case 769u: goto L_08ADEF24;
    case 770u: goto L_08ADEF30;
    case 771u: goto L_08ADEF3C;
    case 772u: goto L_08ADEF44;
    case 773u: goto L_08ADEF50;
    case 774u: goto L_08ADEF58;
    case 775u: goto L_08ADEF64;
    case 776u: goto L_08ADEF70;
    case 777u: goto L_08ADEF80;
    case 778u: goto L_08ADEF98;
    case 779u: goto L_08ADEFA4;
    case 780u: goto L_08ADEFB0;
    case 781u: goto L_08ADEFBC;
    case 782u: goto L_08ADEFC4;
    case 783u: goto L_08ADEFCC;
    case 784u: goto L_08ADEFD8;
    case 785u: goto L_08ADEFE4;
    case 786u: goto L_08ADEFF0;
    case 787u: goto L_08ADEFF8;
    case 788u: goto L_08ADF024;
    case 789u: goto L_08ADF040;
    case 790u: goto L_08ADF050;
    case 791u: goto L_08ADF05C;
    case 792u: goto L_08ADF090;
    case 793u: goto L_08ADF094;
    case 794u: goto L_08ADF0A4;
    case 795u: goto L_08ADF0AC;
    case 796u: goto L_08ADF0C0;
    case 797u: goto L_08ADF0FC;
    case 798u: goto L_08ADF10C;
    case 799u: goto L_08ADF124;
    case 800u: goto L_08ADF138;
    case 801u: goto L_08ADF148;
    case 802u: goto L_08ADF154;
    case 803u: goto L_08ADF160;
    case 804u: goto L_08ADF16C;
    case 805u: goto L_08ADF174;
    case 806u: goto L_08ADF184;
    case 807u: goto L_08ADF18C;
    case 808u: goto L_08ADF190;
    case 809u: goto L_08ADF19C;
    case 810u: goto L_08ADF1A8;
    case 811u: goto L_08ADF1BC;
    case 812u: goto L_08ADF1C0;
    case 813u: goto L_08ADF1C4;
    case 814u: goto L_08ADF1CC;
    case 815u: goto L_08ADF1D4;
    case 816u: goto L_08ADF1DC;
    case 817u: goto L_08ADF1E4;
    case 818u: goto L_08ADF1EC;
    case 819u: goto L_08ADF1F4;
    case 820u: goto L_08ADF1FC;
    case 821u: goto L_08ADF204;
    case 822u: goto L_08ADF20C;
    case 823u: goto L_08ADF218;
    case 824u: goto L_08ADF224;
    case 825u: goto L_08ADF238;
    case 826u: goto L_08ADF240;
    case 827u: goto L_08ADF24C;
    case 828u: goto L_08ADF260;
    case 829u: goto L_08ADF264;
    case 830u: goto L_08ADF268;
    case 831u: goto L_08ADF270;
    case 832u: goto L_08ADF284;
    case 833u: goto L_08ADF28C;
    case 834u: goto L_08ADF294;
    case 835u: goto L_08ADF29C;
    case 836u: goto L_08ADF2A4;
    case 837u: goto L_08ADF2AC;
    case 838u: goto L_08ADF2B8;
    case 839u: goto L_08ADF2CC;
    case 840u: goto L_08ADF2D0;
    case 841u: goto L_08ADF2D4;
    case 842u: goto L_08ADF2DC;
    case 843u: goto L_08ADF2E4;
    case 844u: goto L_08ADF2EC;
    case 845u: goto L_08ADF2F4;
    case 846u: goto L_08ADF2FC;
    case 847u: goto L_08ADF304;
    case 848u: goto L_08ADF30C;
    case 849u: goto L_08ADF314;
    case 850u: goto L_08ADF31C;
    case 851u: goto L_08ADF328;
    case 852u: goto L_08ADF334;
    case 853u: goto L_08ADF348;
    case 854u: goto L_08ADF350;
    case 855u: goto L_08ADF35C;
    case 856u: goto L_08ADF370;
    case 857u: goto L_08ADF374;
    case 858u: goto L_08ADF378;
    case 859u: goto L_08ADF380;
    case 860u: goto L_08ADF388;
    case 861u: goto L_08ADF390;
    case 862u: goto L_08ADF398;
    case 863u: goto L_08ADF3A0;
    case 864u: goto L_08ADF3AC;
    case 865u: goto L_08ADF3C0;
    case 866u: goto L_08ADF3C4;
    case 867u: goto L_08ADF3C8;
    case 868u: goto L_08ADF3D0;
    case 869u: goto L_08ADF3D8;
    case 870u: goto L_08ADF3E0;
    case 871u: goto L_08ADF3E8;
    case 872u: goto L_08ADF3F0;
    case 873u: goto L_08ADF3F8;
    case 874u: goto L_08ADF400;
    case 875u: goto L_08ADF408;
    case 876u: goto L_08ADF410;
    case 877u: goto L_08ADF41C;
    case 878u: goto L_08ADF428;
    case 879u: goto L_08ADF43C;
    case 880u: goto L_08ADF444;
    case 881u: goto L_08ADF450;
    case 882u: goto L_08ADF464;
    case 883u: goto L_08ADF468;
    case 884u: goto L_08ADF46C;
    case 885u: goto L_08ADF474;
    case 886u: goto L_08ADF47C;
    case 887u: goto L_08ADF484;
    case 888u: goto L_08ADF48C;
    case 889u: goto L_08ADF494;
    case 890u: goto L_08ADF4A0;
    case 891u: goto L_08ADF4B4;
    case 892u: goto L_08ADF4B8;
    case 893u: goto L_08ADF4BC;
    case 894u: goto L_08ADF4C4;
    case 895u: goto L_08ADF4D0;
    case 896u: goto L_08ADF4DC;
    case 897u: goto L_08ADF4E4;
    case 898u: goto L_08ADF4FC;
    case 899u: goto L_08ADF508;
    case 900u: goto L_08ADF514;
    case 901u: goto L_08ADF520;
    case 902u: goto L_08ADF528;
    case 903u: goto L_08ADF530;
    case 904u: goto L_08ADF538;
    case 905u: goto L_08ADF544;
    case 906u: goto L_08ADF558;
    case 907u: goto L_08ADF55C;
    case 908u: goto L_08ADF560;
    case 909u: goto L_08ADF568;
    case 910u: goto L_08ADF570;
    case 911u: goto L_08ADF578;
    case 912u: goto L_08ADF580;
    case 913u: goto L_08ADF588;
    case 914u: goto L_08ADF590;
    case 915u: goto L_08ADF598;
    case 916u: goto L_08ADF5A0;
    case 917u: goto L_08ADF5A8;
    case 918u: goto L_08ADF5B4;
    case 919u: goto L_08ADF5C0;
    case 920u: goto L_08ADF5D4;
    case 921u: goto L_08ADF5DC;
    case 922u: goto L_08ADF5E8;
    case 923u: goto L_08ADF5FC;
    case 924u: goto L_08ADF600;
    case 925u: goto L_08ADF604;
    case 926u: goto L_08ADF60C;
    case 927u: goto L_08ADF614;
    case 928u: goto L_08ADF61C;
    case 929u: goto L_08ADF624;
    case 930u: goto L_08ADF62C;
    case 931u: goto L_08ADF638;
    case 932u: goto L_08ADF644;
    case 933u: goto L_08ADF658;
    case 934u: goto L_08ADF660;
    case 935u: goto L_08ADF66C;
    case 936u: goto L_08ADF680;
    case 937u: goto L_08ADF684;
    case 938u: goto L_08ADF688;
    case 939u: goto L_08ADF690;
    case 940u: goto L_08ADF69C;
    case 941u: goto L_08ADF6A4;
    case 942u: goto L_08ADF6B0;
    case 943u: goto L_08ADF6BC;
    case 944u: goto L_08ADF6C8;
    case 945u: goto L_08ADF6D0;
    case 946u: goto L_08ADF6DC;
    case 947u: goto L_08ADF6E4;
    case 948u: goto L_08ADF6F0;
    case 949u: goto L_08ADF6FC;
    case 950u: goto L_08ADF708;
    case 951u: goto L_08ADF724;
    case 952u: goto L_08ADF754;
    case 953u: goto L_08ADF75C;
    case 954u: goto L_08ADF768;
    case 955u: goto L_08ADF774;
    case 956u: goto L_08ADF780;
    case 957u: goto L_08ADF788;
    case 958u: goto L_08ADF798;
    case 959u: goto L_08ADF7E0;
    case 960u: goto L_08ADF7FC;
    case 961u: goto L_08ADF814;
    case 962u: goto L_08ADF824;
    case 963u: goto L_08ADF82C;
    case 964u: goto L_08ADF840;
    case 965u: goto L_08ADF848;
    case 966u: goto L_08ADF854;
    case 967u: goto L_08ADF890;
    case 968u: goto L_08ADF8AC;
    case 969u: goto L_08ADF8C4;
    case 970u: goto L_08ADF8D4;
    case 971u: goto L_08ADF8DC;
    case 972u: goto L_08ADF8F0;
    case 973u: goto L_08ADF900;
    case 974u: goto L_08ADF91C;
    case 975u: goto L_08ADF934;
    case 976u: goto L_08ADF93C;
    case 977u: goto L_08ADF948;
    case 978u: goto L_08ADF954;
    case 979u: goto L_08ADF95C;
    case 980u: goto L_08ADF968;
    case 981u: goto L_08ADF974;
    case 982u: goto L_08ADF980;
    case 983u: goto L_08ADF98C;
    case 984u: goto L_08ADF998;
    case 985u: goto L_08ADF9AC;
    case 986u: goto L_08ADF9B4;
    case 987u: goto L_08ADF9C4;
    case 988u: goto L_08ADF9CC;
    case 989u: goto L_08ADF9D4;
    case 990u: goto L_08ADF9DC;
    case 991u: goto L_08ADFA58;
    case 992u: goto L_08ADFA64;
    case 993u: goto L_08ADFAA4;
    case 994u: goto L_08ADFAAC;
    case 995u: goto L_08ADFAC0;
    case 996u: goto L_08ADFAC4;
    case 997u: goto L_08ADFACC;
    case 998u: goto L_08ADFAD4;
    case 999u: goto L_08ADFAE0;
    case 1000u: goto L_08ADFAE8;
    case 1001u: goto L_08ADFAF8;
    case 1002u: goto L_08ADFB04;
    case 1003u: goto L_08ADFB10;
    case 1004u: goto L_08ADFB18;
    case 1005u: goto L_08ADFB1C;
    case 1006u: goto L_08ADFB24;
    case 1007u: goto L_08ADFB30;
    case 1008u: goto L_08ADFB3C;
    case 1009u: goto L_08ADFB44;
    case 1010u: goto L_08ADFB4C;
    case 1011u: goto L_08ADFB54;
    case 1012u: goto L_08ADFB70;
    case 1013u: goto L_08ADFB7C;
    case 1014u: goto L_08ADFB84;
    case 1015u: goto L_08ADFB8C;
    case 1016u: goto L_08ADFBA8;
    case 1017u: goto L_08ADFBB0;
    case 1018u: goto L_08ADFBB8;
    case 1019u: goto L_08ADFBD0;
    case 1020u: goto L_08ADFBD8;
    case 1021u: goto L_08ADFBF4;
    case 1022u: goto L_08ADFBFC;
    case 1023u: goto L_08ADFC08;
    case 1024u: goto L_08ADFC14;
    case 1025u: goto L_08ADFC40;
    case 1026u: goto L_08ADFC90;
    case 1027u: goto L_08ADFC98;
    case 1028u: goto L_08ADFCA0;
    case 1029u: goto L_08ADFCA8;
    case 1030u: goto L_08ADFCB0;
    case 1031u: goto L_08ADFCC8;
    case 1032u: goto L_08ADFCD4;
    case 1033u: goto L_08ADFCE4;
    case 1034u: goto L_08ADFCEC;
    case 1035u: goto L_08ADFCF4;
    case 1036u: goto L_08ADFCFC;
    case 1037u: goto L_08ADFD04;
    case 1038u: goto L_08ADFD0C;
    case 1039u: goto L_08ADFD14;
    case 1040u: goto L_08ADFD1C;
    case 1041u: goto L_08ADFD2C;
    case 1042u: goto L_08ADFD34;
    case 1043u: goto L_08ADFD38;
    case 1044u: goto L_08ADFD40;
    case 1045u: goto L_08ADFD48;
    case 1046u: goto L_08ADFD58;
    case 1047u: goto L_08ADFD68;
    case 1048u: goto L_08ADFD98;
    case 1049u: goto L_08ADFDC0;
    case 1050u: goto L_08ADFDC8;
    case 1051u: goto L_08ADFDD0;
    case 1052u: goto L_08ADFDD8;
    case 1053u: goto L_08ADFDE0;
    case 1054u: goto L_08ADFDFC;
    case 1055u: goto L_08ADFE1C;
    case 1056u: goto L_08ADFE24;
    case 1057u: goto L_08ADFE34;
    case 1058u: goto L_08ADFE40;
    case 1059u: goto L_08ADFE4C;
    case 1060u: goto L_08ADFE54;
    case 1061u: goto L_08ADFE58;
    case 1062u: goto L_08ADFE64;
    case 1063u: goto L_08ADFE94;
    case 1064u: goto L_08ADFEB0;
    case 1065u: goto L_08ADFEB4;
    case 1066u: goto L_08ADFEE0;
    case 1067u: goto L_08ADFEEC;
    case 1068u: goto L_08ADFEFC;
    case 1069u: goto L_08ADFF14;
    case 1070u: goto L_08ADFF1C;
    case 1071u: goto L_08ADFF24;
    case 1072u: goto L_08ADFF2C;
    case 1073u: goto L_08ADFF34;
    case 1074u: goto L_08ADFF50;
    case 1075u: goto L_08ADFF5C;
    case 1076u: goto L_08ADFF74;
    case 1077u: goto L_08ADFF7C;
    case 1078u: goto L_08ADFF8C;
    case 1079u: goto L_08ADFF98;
    case 1080u: goto L_08ADFFA4;
    case 1081u: goto L_08ADFFAC;
    case 1082u: goto L_08ADFFB0;
    case 1083u: goto L_08ADFFBC;
    case 1084u: goto L_08ADFFEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08ADC000:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ADC070;
      }
      goto L_08ADC008;
    }
L_08ADC008:
    ctx.gpr[31] = (0x08ADC010u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADC010u) goto L_08ADC010;
    return;
L_08ADC010:
    ctx.gpr[31] = (0x08ADC018u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 660u, 0x08A96D0Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC018u) goto L_08ADC018;
    return;
L_08ADC018:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC028;
      }
      goto L_08ADC020;
    }
L_08ADC020:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08ADC028;
L_08ADC028:
    ctx.gpr[31] = (0x08ADC030u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADC030u) goto L_08ADC030;
    return;
L_08ADC030:
    ctx.gpr[31] = (0x08ADC038u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 877u, 0x08A97600u>(ctx, &aot_mem) && ctx.pc == 0x08ADC038u) goto L_08ADC038;
    return;
L_08ADC038:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08ADC070;
      }
      goto L_08ADC040;
    }
L_08ADC040:
    ctx.gpr[31] = (0x08ADC048u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADC048u) goto L_08ADC048;
    return;
L_08ADC048:
    ctx.gpr[31] = (0x08ADC050u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 877u, 0x08A97600u>(ctx, &aot_mem) && ctx.pc == 0x08ADC050u) goto L_08ADC050;
    return;
L_08ADC050:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (15360u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (16640u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    goto L_08ADC070;
L_08ADC070:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1136)));
    ctx.gpr[4] = (17124u << 16u);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[22];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 1u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[14]) || std::isnan(ctx.fpr[20])) && ctx.fpr[14] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = ctx.fpr[15] - ctx.fpr[12];
      if (branch_taken) {
          goto L_08ADC100;
      }
      goto L_08ADC098;
    }
L_08ADC098:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1144)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[24];
        goto L_08ADC0BC;
    }
    goto L_08ADC0B0;
L_08ADC0B0:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ADC17C;
      }
      goto L_08ADC0BC;
    }
L_08ADC0BC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADC0F8;
      }
      goto L_08ADC0F0;
    }
L_08ADC0F0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_08ADC0F8;
      }
      goto L_08ADC0F8;
    }
L_08ADC0F8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ADC17C;
      }
      goto L_08ADC100;
    }
L_08ADC100:
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[24];
      if (branch_taken) {
          goto L_08ADC138;
      }
      goto L_08ADC110;
    }
L_08ADC110:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08ADC13C;
    }
    goto L_08ADC120;
L_08ADC120:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08ADC13C;
    }
    goto L_08ADC130;
L_08ADC130:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08ADC17C;
      }
      goto L_08ADC138;
    }
L_08ADC138:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08ADC13C;
L_08ADC13C:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADC178;
      }
      goto L_08ADC170;
    }
L_08ADC170:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08ADC178;
      }
      goto L_08ADC178;
    }
L_08ADC178:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08ADC17C;
L_08ADC17C:
    ctx.gpr[31] = (0x08ADC184u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADC184u) goto L_08ADC184;
    return;
L_08ADC184:
    ctx.gpr[31] = (0x08ADC18Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 664u, 0x08A96D30u>(ctx, &aot_mem) && ctx.pc == 0x08ADC18Cu) goto L_08ADC18C;
    return;
L_08ADC18C:
    if (ctx.gpr[2] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_08ADC1B0;
    }
    goto L_08ADC194;
L_08ADC194:
    ctx.gpr[31] = (0x08ADC19Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADC19Cu) goto L_08ADC19C;
    return;
L_08ADC19C:
    ctx.gpr[31] = (0x08ADC1A4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 845u, 0x08A9746Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC1A4u) goto L_08ADC1A4;
    return;
L_08ADC1A4:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_08ADC1C4;
    }
    goto L_08ADC1AC;
L_08ADC1AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08ADC1B0;
L_08ADC1B0:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADC1D4;
      }
      goto L_08ADC1C0;
    }
L_08ADC1C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08ADC1C4;
L_08ADC1C4:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADC36C;
      }
      goto L_08ADC1D4;
    }
L_08ADC1D4:
    ctx.gpr[4] = (17154u << 16u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADC1F0;
      }
      goto L_08ADC1E8;
    }
L_08ADC1E8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08ADC258;
      }
      goto L_08ADC1F0;
    }
L_08ADC1F0:
    ctx.gpr[31] = (0x08ADC1F8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADC1F8u) goto L_08ADC1F8;
    return;
L_08ADC1F8:
    ctx.gpr[31] = (0x08ADC200u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 664u, 0x08A96D30u>(ctx, &aot_mem) && ctx.pc == 0x08ADC200u) goto L_08ADC200;
    return;
L_08ADC200:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC210;
      }
      goto L_08ADC208;
    }
L_08ADC208:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08ADC210;
L_08ADC210:
    ctx.gpr[31] = (0x08ADC218u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADC218u) goto L_08ADC218;
    return;
L_08ADC218:
    ctx.gpr[31] = (0x08ADC220u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 845u, 0x08A9746Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC220u) goto L_08ADC220;
    return;
L_08ADC220:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08ADC258;
      }
      goto L_08ADC228;
    }
L_08ADC228:
    ctx.gpr[31] = (0x08ADC230u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADC230u) goto L_08ADC230;
    return;
L_08ADC230:
    ctx.gpr[31] = (0x08ADC238u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 845u, 0x08A9746Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC238u) goto L_08ADC238;
    return;
L_08ADC238:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (15360u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (49408u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    goto L_08ADC258;
L_08ADC258:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1136)));
    ctx.gpr[4] = (17264u << 16u);
    ctx.fpr[14] = ctx.fpr[13] - ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1148)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 1u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
      if (branch_taken) {
          goto L_08ADC2E8;
      }
      goto L_08ADC280;
    }
L_08ADC280:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1140)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
        goto L_08ADC2A0;
    }
    goto L_08ADC294;
L_08ADC294:
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[24];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ADC36C;
      }
      goto L_08ADC2A0;
    }
L_08ADC2A0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADC2E0;
      }
      goto L_08ADC2D8;
    }
L_08ADC2D8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ADC2E0;
      }
      goto L_08ADC2E0;
    }
L_08ADC2E0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08ADC36C;
      }
      goto L_08ADC2E8;
    }
L_08ADC2E8:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[24];
      if (branch_taken) {
          goto L_08ADC324;
      }
      goto L_08ADC2FC;
    }
L_08ADC2FC:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08ADC328;
    }
    goto L_08ADC30C;
L_08ADC30C:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08ADC328;
    }
    goto L_08ADC31C;
L_08ADC31C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08ADC36C;
      }
      goto L_08ADC324;
    }
L_08ADC324:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08ADC328;
L_08ADC328:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADC368;
      }
      goto L_08ADC360;
    }
L_08ADC360:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08ADC368;
      }
      goto L_08ADC368;
    }
L_08ADC368:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08ADC36C;
L_08ADC36C:
    ctx.gpr[31] = (0x08ADC374u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADC374u) goto L_08ADC374;
    return;
L_08ADC374:
    ctx.gpr[31] = (0x08ADC37Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 668u, 0x08A96D54u>(ctx, &aot_mem) && ctx.pc == 0x08ADC37Cu) goto L_08ADC37C;
    return;
L_08ADC37C:
    if (ctx.gpr[2] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_08ADC3A0;
    }
    goto L_08ADC384;
L_08ADC384:
    ctx.gpr[31] = (0x08ADC38Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADC38Cu) goto L_08ADC38C;
    return;
L_08ADC38C:
    ctx.gpr[31] = (0x08ADC394u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 845u, 0x08A9746Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC394u) goto L_08ADC394;
    return;
L_08ADC394:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_08ADC3B4;
    }
    goto L_08ADC39C;
L_08ADC39C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08ADC3A0;
L_08ADC3A0:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADC3C4;
      }
      goto L_08ADC3B0;
    }
L_08ADC3B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08ADC3B4;
L_08ADC3B4:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADC550;
      }
      goto L_08ADC3C4;
    }
L_08ADC3C4:
    ctx.gpr[4] = (17154u << 16u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADC3E0;
      }
      goto L_08ADC3D8;
    }
L_08ADC3D8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ADC448;
      }
      goto L_08ADC3E0;
    }
L_08ADC3E0:
    ctx.gpr[31] = (0x08ADC3E8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADC3E8u) goto L_08ADC3E8;
    return;
L_08ADC3E8:
    ctx.gpr[31] = (0x08ADC3F0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 668u, 0x08A96D54u>(ctx, &aot_mem) && ctx.pc == 0x08ADC3F0u) goto L_08ADC3F0;
    return;
L_08ADC3F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC400;
      }
      goto L_08ADC3F8;
    }
L_08ADC3F8:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08ADC400;
L_08ADC400:
    ctx.gpr[31] = (0x08ADC408u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADC408u) goto L_08ADC408;
    return;
L_08ADC408:
    ctx.gpr[31] = (0x08ADC410u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 845u, 0x08A9746Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC410u) goto L_08ADC410;
    return;
L_08ADC410:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08ADC448;
      }
      goto L_08ADC418;
    }
L_08ADC418:
    ctx.gpr[31] = (0x08ADC420u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADC420u) goto L_08ADC420;
    return;
L_08ADC420:
    ctx.gpr[31] = (0x08ADC428u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 845u, 0x08A9746Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC428u) goto L_08ADC428;
    return;
L_08ADC428:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (15360u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (16640u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    goto L_08ADC448;
L_08ADC448:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1136)));
    ctx.gpr[4] = (17264u << 16u);
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[22];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1148)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 1u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[14]) || std::isnan(ctx.fpr[20])) && ctx.fpr[14] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[13];
      if (branch_taken) {
          goto L_08ADC4D4;
      }
      goto L_08ADC470;
    }
L_08ADC470:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1140)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[24];
        goto L_08ADC490;
    }
    goto L_08ADC484;
L_08ADC484:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ADC550;
      }
      goto L_08ADC490;
    }
L_08ADC490:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADC4CC;
      }
      goto L_08ADC4C4;
    }
L_08ADC4C4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_08ADC4CC;
      }
      goto L_08ADC4CC;
    }
L_08ADC4CC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_08ADC550;
      }
      goto L_08ADC4D4;
    }
L_08ADC4D4:
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[24] = ctx.fpr[14] + ctx.fpr[24];
      if (branch_taken) {
          goto L_08ADC50C;
      }
      goto L_08ADC4E4;
    }
L_08ADC4E4:
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_08ADC510;
    }
    goto L_08ADC4F4;
L_08ADC4F4:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_08ADC510;
    }
    goto L_08ADC504;
L_08ADC504:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08ADC550;
      }
      goto L_08ADC50C;
    }
L_08ADC50C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_08ADC510;
L_08ADC510:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADC54C;
      }
      goto L_08ADC544;
    }
L_08ADC544:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ADC54C;
      }
      goto L_08ADC54C;
    }
L_08ADC54C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_08ADC550;
L_08ADC550:
    ctx.gpr[4] = (50413u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ADC578u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 780u, 0x08967B20u>(ctx, &aot_mem) && ctx.pc == 0x08ADC578u) goto L_08ADC578;
    return;
L_08ADC578:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08ADC588u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 757u, 0x08967860u>(ctx, &aot_mem) && ctx.pc == 0x08ADC588u) goto L_08ADC588;
    return;
L_08ADC588:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-48));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1148)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[14]));
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[12];
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ADC5EC;
      }
      goto L_08ADC5E4;
    }
L_08ADC5E4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_08ADC5EC;
      }
      goto L_08ADC5EC;
    }
L_08ADC5EC:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_08ADC604;
      }
      goto L_08ADC5FC;
    }
L_08ADC5FC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08ADC604;
      }
      goto L_08ADC604;
    }
L_08ADC604:
    ctx.gpr[4] = (17645u << 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (17523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49152u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08ADC634u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 780u, 0x08967B20u>(ctx, &aot_mem) && ctx.pc == 0x08ADC634u) goto L_08ADC634;
    return;
L_08ADC634:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08ADC640u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 757u, 0x08967860u>(ctx, &aot_mem) && ctx.pc == 0x08ADC640u) goto L_08ADC640;
    return;
L_08ADC640:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[16];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    ctx.fpr[14] = ctx.fpr[15] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1148)));
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_08ADC6A8;
      }
      goto L_08ADC6A0;
    }
L_08ADC6A0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_08ADC6A8;
      }
      goto L_08ADC6A8;
    }
L_08ADC6A8:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08ADC6C0;
      }
      goto L_08ADC6B8;
    }
L_08ADC6B8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ADC6C0;
      }
      goto L_08ADC6C0;
    }
L_08ADC6C0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ADC6D0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 683u, 0x08ADABE4u>(ctx, &aot_mem) && ctx.pc == 0x08ADC6D0u) goto L_08ADC6D0;
    return;
L_08ADC6D0:
    ctx.gpr[31] = (0x08ADC6D8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08ADCAD4;
L_08ADC6D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCA08;
      }
      goto L_08ADC6E0;
    }
L_08ADC6E0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC7C4;
      }
      goto L_08ADC6E8;
    }
L_08ADC6E8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1424)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC7C4;
      }
      goto L_08ADC6F4;
    }
L_08ADC6F4:
    ctx.gpr[31] = (0x08ADC6FCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADC6FCu) goto L_08ADC6FC;
    return;
L_08ADC6FC:
    ctx.gpr[31] = (0x08ADC704u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 656u, 0x08A96CE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADC704u) goto L_08ADC704;
    return;
L_08ADC704:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[16] = (2230u << 16u);
      if (branch_taken) {
          goto L_08ADC724;
      }
      goto L_08ADC70C;
    }
L_08ADC70C:
    ctx.gpr[31] = (0x08ADC714u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADC714u) goto L_08ADC714;
    return;
L_08ADC714:
    ctx.gpr[31] = (0x08ADC71Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 877u, 0x08A97600u>(ctx, &aot_mem) && ctx.pc == 0x08ADC71Cu) goto L_08ADC71C;
    return;
L_08ADC71C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08ADC740;
      }
      goto L_08ADC724;
    }
L_08ADC724:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-25548), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-25552), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08ADC7B4;
      }
      goto L_08ADC740;
    }
L_08ADC740:
    ctx.gpr[31] = (0x08ADC748u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADC748u) goto L_08ADC748;
    return;
L_08ADC748:
    ctx.gpr[31] = (0x08ADC750u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 660u, 0x08A96D0Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC750u) goto L_08ADC750;
    return;
L_08ADC750:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC770;
      }
      goto L_08ADC758;
    }
L_08ADC758:
    ctx.gpr[31] = (0x08ADC760u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADC760u) goto L_08ADC760;
    return;
L_08ADC760:
    ctx.gpr[31] = (0x08ADC768u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 877u, 0x08A97600u>(ctx, &aot_mem) && ctx.pc == 0x08ADC768u) goto L_08ADC768;
    return;
L_08ADC768:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08ADC788;
      }
      goto L_08ADC770;
    }
L_08ADC770:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-25548), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-25552), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08ADC7B4;
      }
      goto L_08ADC788;
    }
L_08ADC788:
    ctx.gpr[31] = (0x08ADC790u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADC790u) goto L_08ADC790;
    return;
L_08ADC790:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC7AC;
      }
      goto L_08ADC79C;
    }
L_08ADC79C:
    ctx.gpr[4] = (17174u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-25548), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ADC7B4;
      }
      goto L_08ADC7AC;
    }
L_08ADC7AC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-25548), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08ADC7B4;
L_08ADC7B4:
    ctx.gpr[31] = (0x08ADC7BCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08ADCAD4;
L_08ADC7BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCA08;
      }
      goto L_08ADC7C4;
    }
L_08ADC7C4:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADC8AC;
      }
      goto L_08ADC7D0;
    }
L_08ADC7D0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1424)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC8AC;
      }
      goto L_08ADC7DC;
    }
L_08ADC7DC:
    ctx.gpr[31] = (0x08ADC7E4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADC7E4u) goto L_08ADC7E4;
    return;
L_08ADC7E4:
    ctx.gpr[31] = (0x08ADC7ECu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 656u, 0x08A96CE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADC7ECu) goto L_08ADC7EC;
    return;
L_08ADC7EC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[16] = (2230u << 16u);
      if (branch_taken) {
          goto L_08ADC80C;
      }
      goto L_08ADC7F4;
    }
L_08ADC7F4:
    ctx.gpr[31] = (0x08ADC7FCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADC7FCu) goto L_08ADC7FC;
    return;
L_08ADC7FC:
    ctx.gpr[31] = (0x08ADC804u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 877u, 0x08A97600u>(ctx, &aot_mem) && ctx.pc == 0x08ADC804u) goto L_08ADC804;
    return;
L_08ADC804:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08ADC824;
      }
      goto L_08ADC80C;
    }
L_08ADC80C:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-25540), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-25544), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08ADC89C;
      }
      goto L_08ADC824;
    }
L_08ADC824:
    ctx.gpr[31] = (0x08ADC82Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADC82Cu) goto L_08ADC82C;
    return;
L_08ADC82C:
    ctx.gpr[31] = (0x08ADC834u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 660u, 0x08A96D0Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC834u) goto L_08ADC834;
    return;
L_08ADC834:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC854;
      }
      goto L_08ADC83C;
    }
L_08ADC83C:
    ctx.gpr[31] = (0x08ADC844u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADC844u) goto L_08ADC844;
    return;
L_08ADC844:
    ctx.gpr[31] = (0x08ADC84Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 877u, 0x08A97600u>(ctx, &aot_mem) && ctx.pc == 0x08ADC84Cu) goto L_08ADC84C;
    return;
L_08ADC84C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08ADC870;
      }
      goto L_08ADC854;
    }
L_08ADC854:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-25540), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-25544), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08ADC89C;
      }
      goto L_08ADC870;
    }
L_08ADC870:
    ctx.gpr[31] = (0x08ADC878u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADC878u) goto L_08ADC878;
    return;
L_08ADC878:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC894;
      }
      goto L_08ADC884;
    }
L_08ADC884:
    ctx.gpr[4] = (17174u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-25540), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ADC89C;
      }
      goto L_08ADC894;
    }
L_08ADC894:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-25540), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08ADC89C;
L_08ADC89C:
    ctx.gpr[31] = (0x08ADC8A4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08ADCAD4;
L_08ADC8A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCA08;
      }
      goto L_08ADC8AC;
    }
L_08ADC8AC:
    ctx.gpr[17] = (0u | 14u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08ADC8F8;
      }
      goto L_08ADC8B8;
    }
L_08ADC8B8:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20648)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1424)));
      if (branch_taken) {
          goto L_08ADC8D0;
      }
      goto L_08ADC8C8;
    }
L_08ADC8C8:
    ctx.gpr[31] = (0x08ADC8D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA4BCu>(ctx, &aot_mem) && ctx.pc == 0x08ADC8D0u) goto L_08ADC8D0;
    return;
L_08ADC8D0:
    ctx.gpr[31] = (0x08ADC8D8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20648)));
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 434u, 0x0882BA08u>(ctx, &aot_mem) && ctx.pc == 0x08ADC8D8u) goto L_08ADC8D8;
    return;
L_08ADC8D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1424)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC8F0;
      }
      goto L_08ADC8E8;
    }
L_08ADC8E8:
    ctx.gpr[31] = (0x08ADC8F0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08ADCAD4;
L_08ADC8F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCA08;
      }
      goto L_08ADC8F8;
    }
L_08ADC8F8:
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[6] = (0u | 23u);
      if (branch_taken) {
          goto L_08ADC924;
      }
      goto L_08ADC904;
    }
L_08ADC904:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 26u);
      if (branch_taken) {
          goto L_08ADC924;
      }
      goto L_08ADC90C;
    }
L_08ADC90C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 27u);
      if (branch_taken) {
          goto L_08ADC924;
      }
      goto L_08ADC914;
    }
L_08ADC914:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 24u);
      if (branch_taken) {
          goto L_08ADC924;
      }
      goto L_08ADC91C;
    }
L_08ADC91C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08ADCA00;
      }
      goto L_08ADC924;
    }
L_08ADC924:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1424)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCA00;
      }
      goto L_08ADC930;
    }
L_08ADC930:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADC958;
      }
      goto L_08ADC938;
    }
L_08ADC938:
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20652)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC950;
      }
      goto L_08ADC948;
    }
L_08ADC948:
    ctx.gpr[31] = (0x08ADC950u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC950u) goto L_08ADC950;
    return;
L_08ADC950:
    ctx.gpr[31] = (0x08ADC958u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20652)));
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 279u, 0x08A09200u>(ctx, &aot_mem) && ctx.pc == 0x08ADC958u) goto L_08ADC958;
    return;
L_08ADC958:
    ctx.gpr[31] = (0x08ADC960u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADC960u) goto L_08ADC960;
    return;
L_08ADC960:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADC980;
      }
      goto L_08ADC970;
    }
L_08ADC970:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08ADC984;
      }
      goto L_08ADC97C;
    }
L_08ADC97C:
    ctx.gpr[5] = (0u | 1u);
    goto L_08ADC980;
L_08ADC980:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_08ADC984;
L_08ADC984:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC9A4;
      }
      goto L_08ADC98C;
    }
L_08ADC98C:
    ctx.gpr[31] = (0x08ADC994u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADC994u) goto L_08ADC994;
    return;
L_08ADC994:
    ctx.gpr[31] = (0x08ADC99Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 762u, 0x08A970E0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC99Cu) goto L_08ADC99C;
    return;
L_08ADC99C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCA08;
      }
      goto L_08ADC9A4;
    }
L_08ADC9A4:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1424), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1380), ctx.gpr[17]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25444)));
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ADC9D0;
      }
      goto L_08ADC9C0;
    }
L_08ADC9C0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ADC9CCu);
    ctx.gpr[5] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 411u, 0x08AD9BE4u>(ctx, &aot_mem) && ctx.pc == 0x08ADC9CCu) goto L_08ADC9CC;
    return;
L_08ADC9CC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08ADC9D0;
L_08ADC9D0:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1388), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x08ADC9E0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 641u, 0x08ADA97Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC9E0u) goto L_08ADC9E0;
    return;
L_08ADC9E0:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1420), 0u);
    ctx.gpr[5] = (0u | 197u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADC9F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x08ADC9F8u) goto L_08ADC9F8;
    return;
L_08ADC9F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCA08;
      }
      goto L_08ADCA00;
    }
L_08ADCA00:
    ctx.gpr[31] = (0x08ADCA08u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08ADCAD4;
L_08ADCA08:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28900)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCA6C;
      }
      goto L_08ADCA18;
    }
L_08ADCA18:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27580)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCA6C;
      }
      goto L_08ADCA2C;
    }
L_08ADCA2C:
    ctx.gpr[31] = (0x08ADCA34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 529u, 0x08A964D8u>(ctx, &aot_mem) && ctx.pc == 0x08ADCA34u) goto L_08ADCA34;
    return;
L_08ADCA34:
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-28900), 0u);
      if (branch_taken) {
          goto L_08ADCA6C;
      }
      goto L_08ADCA40;
    }
L_08ADCA40:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ADCA4Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 377u, 0x08AD99F0u>(ctx, &aot_mem) && ctx.pc == 0x08ADCA4Cu) goto L_08ADCA4C;
    return;
L_08ADCA4C:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1130), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-28572), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1384), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-28892), 0u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(307), static_cast<std::uint8_t>(0u));
    goto L_08ADCA6C;
L_08ADCA6C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(308)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCA90;
      }
      goto L_08ADCA78;
    }
L_08ADCA78:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(311)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCA90;
      }
      goto L_08ADCA84;
    }
L_08ADCA84:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x08ADCA90u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 93u, 0x088646E8u>(ctx, &aot_mem) && ctx.pc == 0x08ADCA90u) goto L_08ADCA90;
    return;
L_08ADCA90:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(412)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(420)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(460)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADCAD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[6] = (0u | 12u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ADCB34;
      }
      goto L_08ADCB0C;
    }
L_08ADCB0C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25531)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCB2C;
      }
      goto L_08ADCB1C;
    }
L_08ADCB1C:
    ctx.gpr[31] = (0x08ADCB24u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 266u, 0x08AD94E0u>(ctx, &aot_mem) && ctx.pc == 0x08ADCB24u) goto L_08ADCB24;
    return;
L_08ADCB24:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-25531), static_cast<std::uint8_t>(0u));
    goto L_08ADCB2C;
L_08ADCB2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADE70C;
      }
      goto L_08ADCB34;
    }
L_08ADCB34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADCBA0;
      }
      goto L_08ADCB44;
    }
L_08ADCB44:
    ctx.gpr[31] = (0x08ADCB4Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADCB4Cu) goto L_08ADCB4C;
    return;
L_08ADCB4C:
    ctx.gpr[31] = (0x08ADCB54u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 762u, 0x08A970E0u>(ctx, &aot_mem) && ctx.pc == 0x08ADCB54u) goto L_08ADCB54;
    return;
L_08ADCB54:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCB98;
      }
      goto L_08ADCB5C;
    }
L_08ADCB5C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(321)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCB98;
      }
      goto L_08ADCB68;
    }
L_08ADCB68:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-25519), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[18] = (0u | 10u);
    ctx.gpr[31] = (0x08ADCB80u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADCB80u) goto L_08ADCB80;
    return;
L_08ADCB80:
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(147), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADCB90u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 411u, 0x08AD9BE4u>(ctx, &aot_mem) && ctx.pc == 0x08ADCB90u) goto L_08ADCB90;
    return;
L_08ADCB90:
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-28471), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_08ADCB98;
L_08ADCB98:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1424), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08ADCBA0;
L_08ADCBA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADCBFC;
      }
      goto L_08ADCBB0;
    }
L_08ADCBB0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADCBFC;
      }
      goto L_08ADCBC0;
    }
L_08ADCBC0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADCBCCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 411u, 0x08AD9BE4u>(ctx, &aot_mem) && ctx.pc == 0x08ADCBCCu) goto L_08ADCBCC;
    return;
L_08ADCBCC:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-5944), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-25519), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4576));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-28456), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-28471), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08ADCBFC;
L_08ADCBFC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28892)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCC44;
      }
      goto L_08ADCC0C;
    }
L_08ADCC0C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28888)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCC3C;
      }
      goto L_08ADCC1C;
    }
L_08ADCC1C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(321)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08ADCC4C;
      }
      goto L_08ADCC34;
    }
L_08ADCC34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCD44;
      }
      goto L_08ADCC3C;
    }
L_08ADCC3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADE70C;
      }
      goto L_08ADCC44;
    }
L_08ADCC44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADE70C;
      }
      goto L_08ADCC4C;
    }
L_08ADCC4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u | 255u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADCD44;
      }
      goto L_08ADCC5C;
    }
L_08ADCC5C:
    ctx.gpr[31] = (0x08ADCC64u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADCC64u) goto L_08ADCC64;
    return;
L_08ADCC64:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCD44;
      }
      goto L_08ADCC78;
    }
L_08ADCC78:
    ctx.gpr[31] = (0x08ADCC80u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADCC80u) goto L_08ADCC80;
    return;
L_08ADCC80:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCD44;
      }
      goto L_08ADCC94;
    }
L_08ADCC94:
    ctx.gpr[31] = (0x08ADCC9Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADCC9Cu) goto L_08ADCC9C;
    return;
L_08ADCC9C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCD44;
      }
      goto L_08ADCCB0;
    }
L_08ADCCB0:
    ctx.gpr[31] = (0x08ADCCB8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADCCB8u) goto L_08ADCCB8;
    return;
L_08ADCCB8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCD44;
      }
      goto L_08ADCCCC;
    }
L_08ADCCCC:
    ctx.gpr[31] = (0x08ADCCD4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADCCD4u) goto L_08ADCCD4;
    return;
L_08ADCCD4:
    ctx.gpr[31] = (0x08ADCCDCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 648u, 0x08A96C60u>(ctx, &aot_mem) && ctx.pc == 0x08ADCCDCu) goto L_08ADCCDC;
    return;
L_08ADCCDC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < -4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCD44;
      }
      goto L_08ADCCE8;
    }
L_08ADCCE8:
    ctx.gpr[31] = (0x08ADCCF0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADCCF0u) goto L_08ADCCF0;
    return;
L_08ADCCF0:
    ctx.gpr[31] = (0x08ADCCF8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 648u, 0x08A96C60u>(ctx, &aot_mem) && ctx.pc == 0x08ADCCF8u) goto L_08ADCCF8;
    return;
L_08ADCCF8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCD44;
      }
      goto L_08ADCD04;
    }
L_08ADCD04:
    ctx.gpr[31] = (0x08ADCD0Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADCD0Cu) goto L_08ADCD0C;
    return;
L_08ADCD0C:
    ctx.gpr[31] = (0x08ADCD14u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 652u, 0x08A96CA4u>(ctx, &aot_mem) && ctx.pc == 0x08ADCD14u) goto L_08ADCD14;
    return;
L_08ADCD14:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < -4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCD44;
      }
      goto L_08ADCD20;
    }
L_08ADCD20:
    ctx.gpr[31] = (0x08ADCD28u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADCD28u) goto L_08ADCD28;
    return;
L_08ADCD28:
    ctx.gpr[31] = (0x08ADCD30u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 652u, 0x08A96CA4u>(ctx, &aot_mem) && ctx.pc == 0x08ADCD30u) goto L_08ADCD30;
    return;
L_08ADCD30:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCD44;
      }
      goto L_08ADCD3C;
    }
L_08ADCD3C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(321), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08ADCD44;
L_08ADCD44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADCD60;
      }
      goto L_08ADCD54;
    }
L_08ADCD54:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1424)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCDA0;
      }
      goto L_08ADCD60;
    }
L_08ADCD60:
    ctx.gpr[31] = (0x08ADCD68u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADCD68u) goto L_08ADCD68;
    return;
L_08ADCD68:
    ctx.gpr[31] = (0x08ADCD70u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 762u, 0x08A970E0u>(ctx, &aot_mem) && ctx.pc == 0x08ADCD70u) goto L_08ADCD70;
    return;
L_08ADCD70:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCDA0;
      }
      goto L_08ADCD78;
    }
L_08ADCD78:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(321)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCDA0;
      }
      goto L_08ADCD84;
    }
L_08ADCD84:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-25519), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[22] = (0u | 10u);
    ctx.gpr[31] = (0x08ADCD9Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADCD9Cu) goto L_08ADCD9C;
    return;
L_08ADCD9C:
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(147), static_cast<std::uint8_t>(ctx.gpr[22]));
    goto L_08ADCDA0;
L_08ADCDA0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1424)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD260;
      }
      goto L_08ADCDAC;
    }
L_08ADCDAC:
    ctx.gpr[31] = (0x08ADCDB4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADCDB4u) goto L_08ADCDB4;
    return;
L_08ADCDB4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADCDD4;
      }
      goto L_08ADCDC4;
    }
L_08ADCDC4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08ADCDD8;
      }
      goto L_08ADCDD0;
    }
L_08ADCDD0:
    ctx.gpr[5] = (0u | 1u);
    goto L_08ADCDD4;
L_08ADCDD4:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_08ADCDD8;
L_08ADCDD8:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08ADCEA0;
    }
    goto L_08ADCDE0;
L_08ADCDE0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 195u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADCDF4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x08ADCDF4u) goto L_08ADCDF4;
    return;
L_08ADCDF4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1424), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 14u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08ADCE60;
      }
      goto L_08ADCE0C;
    }
L_08ADCE0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20648)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08ADCE24;
      }
      goto L_08ADCE18;
    }
L_08ADCE18:
    ctx.gpr[31] = (0x08ADCE20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA4BCu>(ctx, &aot_mem) && ctx.pc == 0x08ADCE20u) goto L_08ADCE20;
    return;
L_08ADCE20:
    ctx.gpr[4] = (2230u << 16u);
    goto L_08ADCE24;
L_08ADCE24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20652)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08ADCE3C;
      }
      goto L_08ADCE30;
    }
L_08ADCE30:
    ctx.gpr[31] = (0x08ADCE38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADCE38u) goto L_08ADCE38;
    return;
L_08ADCE38:
    ctx.gpr[4] = (2230u << 16u);
    goto L_08ADCE3C;
L_08ADCE3C:
    ctx.gpr[31] = (0x08ADCE44u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20652)));
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 279u, 0x08A09200u>(ctx, &aot_mem) && ctx.pc == 0x08ADCE44u) goto L_08ADCE44;
    return;
L_08ADCE44:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCE5C;
      }
      goto L_08ADCE4C;
    }
L_08ADCE4C:
    ctx.gpr[31] = (0x08ADCE54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 312u, 0x08935874u>(ctx, &aot_mem) && ctx.pc == 0x08ADCE54u) goto L_08ADCE54;
    return;
L_08ADCE54:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCE60;
      }
      goto L_08ADCE5C;
    }
L_08ADCE5C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1424), static_cast<std::uint8_t>(0u));
    goto L_08ADCE60;
L_08ADCE60:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1384), 0u);
    ctx.gpr[31] = (0x08ADCE6Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 641u, 0x08ADA97Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADCE6Cu) goto L_08ADCE6C;
    return;
L_08ADCE6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 4u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08ADCEA0;
    }
    goto L_08ADCE7C;
L_08ADCE7C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25471))))));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[31] = (0x08ADCE9Cu);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 144u, 0x08864A54u>(ctx, &aot_mem) && ctx.pc == 0x08ADCE9Cu) goto L_08ADCE9C;
    return;
L_08ADCE9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08ADCEA0;
L_08ADCEA0:
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28564));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-24));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25444)));
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADCF50;
      }
      goto L_08ADCF00;
    }
L_08ADCF00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28348));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-24));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08ADCF50;
L_08ADCF50:
    ctx.gpr[31] = (0x08ADCF58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 274u, 0x08AD954Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADCF58u) goto L_08ADCF58;
    return;
L_08ADCF58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCFA4;
      }
      goto L_08ADCF60;
    }
L_08ADCF60:
    ctx.gpr[31] = (0x08ADCF68u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADCF68u) goto L_08ADCF68;
    return;
L_08ADCF68:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCFA4;
      }
      goto L_08ADCF74;
    }
L_08ADCF74:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 196u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADCF88u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x08ADCF88u) goto L_08ADCF88;
    return;
L_08ADCF88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADCFA4;
      }
      goto L_08ADCF98;
    }
L_08ADCF98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08ADCFA4;
L_08ADCFA4:
    ctx.gpr[31] = (0x08ADCFACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 285u, 0x08AD95B0u>(ctx, &aot_mem) && ctx.pc == 0x08ADCFACu) goto L_08ADCFAC;
    return;
L_08ADCFAC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCFF8;
      }
      goto L_08ADCFB4;
    }
L_08ADCFB4:
    ctx.gpr[31] = (0x08ADCFBCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADCFBCu) goto L_08ADCFBC;
    return;
L_08ADCFBC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCFF8;
      }
      goto L_08ADCFC8;
    }
L_08ADCFC8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 196u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADCFDCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x08ADCFDCu) goto L_08ADCFDC;
    return;
L_08ADCFDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADCFF8;
      }
      goto L_08ADCFEC;
    }
L_08ADCFEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[22] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08ADCFF8;
L_08ADCFF8:
    ctx.gpr[31] = (0x08ADD000u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 296u, 0x08AD9614u>(ctx, &aot_mem) && ctx.pc == 0x08ADD000u) goto L_08ADD000;
    return;
L_08ADD000:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD04C;
      }
      goto L_08ADD008;
    }
L_08ADD008:
    ctx.gpr[31] = (0x08ADD010u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADD010u) goto L_08ADD010;
    return;
L_08ADD010:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD04C;
      }
      goto L_08ADD01C;
    }
L_08ADD01C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 196u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADD030u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x08ADD030u) goto L_08ADD030;
    return;
L_08ADD030:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADD04C;
      }
      goto L_08ADD040;
    }
L_08ADD040:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[22] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08ADD04C;
L_08ADD04C:
    ctx.gpr[31] = (0x08ADD054u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 322u, 0x08AD96FCu>(ctx, &aot_mem) && ctx.pc == 0x08ADD054u) goto L_08ADD054;
    return;
L_08ADD054:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD0A0;
      }
      goto L_08ADD05C;
    }
L_08ADD05C:
    ctx.gpr[31] = (0x08ADD064u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADD064u) goto L_08ADD064;
    return;
L_08ADD064:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD0A0;
      }
      goto L_08ADD070;
    }
L_08ADD070:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 196u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADD084u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x08ADD084u) goto L_08ADD084;
    return;
L_08ADD084:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADD0A0;
      }
      goto L_08ADD094;
    }
L_08ADD094:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08ADD0A0;
L_08ADD0A0:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD258;
      }
      goto L_08ADD0A8;
    }
L_08ADD0A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADD258;
      }
      goto L_08ADD0B8;
    }
L_08ADD0B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 14u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADD0EC;
      }
      goto L_08ADD0C8;
    }
L_08ADD0C8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20648)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08ADD0E4;
      }
      goto L_08ADD0D8;
    }
L_08ADD0D8:
    ctx.gpr[31] = (0x08ADD0E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA4BCu>(ctx, &aot_mem) && ctx.pc == 0x08ADD0E0u) goto L_08ADD0E0;
    return;
L_08ADD0E0:
    ctx.gpr[4] = (2230u << 16u);
    goto L_08ADD0E4;
L_08ADD0E4:
    ctx.gpr[31] = (0x08ADD0ECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20648)));
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 479u, 0x0882BC80u>(ctx, &aot_mem) && ctx.pc == 0x08ADD0ECu) goto L_08ADD0EC;
    return;
L_08ADD0EC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1420), 0u);
    ctx.gpr[31] = (0x08ADD0F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 461u, 0x08AD9EF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADD0F8u) goto L_08ADD0F8;
    return;
L_08ADD0F8:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25444)));
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ADD194;
      }
      goto L_08ADD10C;
    }
L_08ADD10C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08ADD218;
      }
      goto L_08ADD120;
    }
L_08ADD120:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-7936)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADD138:
    ctx.gpr[4] = (0u | 7u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADD218;
      }
      goto L_08ADD144;
    }
L_08ADD144:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADD218;
      }
      goto L_08ADD150;
    }
L_08ADD150:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADD218;
      }
      goto L_08ADD15C;
    }
L_08ADD15C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), 0u);
      if (branch_taken) {
          goto L_08ADD218;
      }
      goto L_08ADD164;
    }
L_08ADD164:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADD218;
      }
      goto L_08ADD170;
    }
L_08ADD170:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADD218;
      }
      goto L_08ADD17C;
    }
L_08ADD17C:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADD218;
      }
      goto L_08ADD188;
    }
L_08ADD188:
    ctx.gpr[4] = (0u | 14u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADD218;
      }
      goto L_08ADD194;
    }
L_08ADD194:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08ADD218;
      }
      goto L_08ADD1A8;
    }
L_08ADD1A8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-7904)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADD1C0:
    ctx.gpr[4] = (0u | 7u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADD218;
      }
      goto L_08ADD1CC;
    }
L_08ADD1CC:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADD218;
      }
      goto L_08ADD1D8;
    }
L_08ADD1D8:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADD218;
      }
      goto L_08ADD1E4;
    }
L_08ADD1E4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), 0u);
      if (branch_taken) {
          goto L_08ADD218;
      }
      goto L_08ADD1EC;
    }
L_08ADD1EC:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADD218;
      }
      goto L_08ADD1F8;
    }
L_08ADD1F8:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADD218;
      }
      goto L_08ADD204;
    }
L_08ADD204:
    ctx.gpr[4] = (0u | 14u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADD218;
      }
      goto L_08ADD210;
    }
L_08ADD210:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
    goto L_08ADD218;
L_08ADD218:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 14u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADD258;
      }
      goto L_08ADD228;
    }
L_08ADD228:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20648)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08ADD244;
      }
      goto L_08ADD238;
    }
L_08ADD238:
    ctx.gpr[31] = (0x08ADD240u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA4BCu>(ctx, &aot_mem) && ctx.pc == 0x08ADD240u) goto L_08ADD240;
    return;
L_08ADD240:
    ctx.gpr[4] = (2230u << 16u);
    goto L_08ADD244;
L_08ADD244:
    ctx.gpr[31] = (0x08ADD24Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20648)));
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 424u, 0x0882B958u>(ctx, &aot_mem) && ctx.pc == 0x08ADD24Cu) goto L_08ADD24C;
    return;
L_08ADD24C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD258;
      }
      goto L_08ADD254;
    }
L_08ADD254:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1424), static_cast<std::uint8_t>(0u));
    goto L_08ADD258;
L_08ADD258:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDAC0;
      }
      goto L_08ADD260;
    }
L_08ADD260:
    ctx.gpr[31] = (0x08ADD268u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADD268u) goto L_08ADD268;
    return;
L_08ADD268:
    ctx.gpr[31] = (0x08ADD270u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 702u, 0x08A96E8Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADD270u) goto L_08ADD270;
    return;
L_08ADD270:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1388)));
        goto L_08ADD294;
    }
    goto L_08ADD278;
L_08ADD278:
    ctx.gpr[31] = (0x08ADD280u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADD280u) goto L_08ADD280;
    return;
L_08ADD280:
    ctx.gpr[31] = (0x08ADD288u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 722u, 0x08A96F44u>(ctx, &aot_mem) && ctx.pc == 0x08ADD288u) goto L_08ADD288;
    return;
L_08ADD288:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD330;
      }
      goto L_08ADD290;
    }
L_08ADD290:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1388)));
    goto L_08ADD294;
L_08ADD294:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD330;
      }
      goto L_08ADD29C;
    }
L_08ADD29C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 14 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 15u);
      if (branch_taken) {
          goto L_08ADD2F8;
      }
      goto L_08ADD2E4;
    }
L_08ADD2E4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 13 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD330;
      }
      goto L_08ADD2F0;
    }
L_08ADD2F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD31C;
      }
      goto L_08ADD2F8;
    }
L_08ADD2F8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADD330;
      }
      goto L_08ADD300;
    }
L_08ADD300:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 199u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADD314u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x08ADD314u) goto L_08ADD314;
    return;
L_08ADD314:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD330;
      }
      goto L_08ADD31C;
    }
L_08ADD31C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 196u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADD330u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x08ADD330u) goto L_08ADD330;
    return;
L_08ADD330:
    ctx.gpr[31] = (0x08ADD338u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADD338u) goto L_08ADD338;
    return;
L_08ADD338:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADD358;
      }
      goto L_08ADD348;
    }
L_08ADD348:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08ADD35C;
      }
      goto L_08ADD354;
    }
L_08ADD354:
    ctx.gpr[5] = (0u | 1u);
    goto L_08ADD358;
L_08ADD358:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_08ADD35C;
L_08ADD35C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD6DC;
      }
      goto L_08ADD364;
    }
L_08ADD364:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u | 255u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADD6DC;
      }
      goto L_08ADD374;
    }
L_08ADD374:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADD528;
      }
      goto L_08ADD384;
    }
L_08ADD384:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADD528;
      }
      goto L_08ADD394;
    }
L_08ADD394:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(42) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08ADD484;
      }
      goto L_08ADD3E0;
    }
L_08ADD3E0:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-7872)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADD3F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08ADD6DC;
      }
      goto L_08ADD400;
    }
L_08ADD400:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD6DC;
      }
      goto L_08ADD408;
    }
L_08ADD408:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 195u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADD41Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x08ADD41Cu) goto L_08ADD41C;
    return;
L_08ADD41C:
    ctx.gpr[31] = (0x08ADD424u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 470u, 0x08AD9F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADD424u) goto L_08ADD424;
    return;
L_08ADD424:
    ctx.gpr[31] = (0x08ADD42Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 641u, 0x08ADA97Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADD42Cu) goto L_08ADD42C;
    return;
L_08ADD42C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD6DC;
      }
      goto L_08ADD434;
    }
L_08ADD434:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADD458;
      }
      goto L_08ADD444;
    }
L_08ADD444:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 195u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADD458u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x08ADD458u) goto L_08ADD458;
    return;
L_08ADD458:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08ADD6DC;
      }
      goto L_08ADD460;
    }
L_08ADD460:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 197u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADD474u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x08ADD474u) goto L_08ADD474;
    return;
L_08ADD474:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08ADD6DC;
      }
      goto L_08ADD47C;
    }
L_08ADD47C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD6DC;
      }
      goto L_08ADD484;
    }
L_08ADD484:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1388)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1388), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[8] = (ctx.gpr[6] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[5] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08ADD4F4;
      }
      goto L_08ADD4D8;
    }
L_08ADD4D8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 196u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADD4ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x08ADD4ECu) goto L_08ADD4EC;
    return;
L_08ADD4EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD508;
      }
      goto L_08ADD4F4;
    }
L_08ADD4F4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 195u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADD508u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x08ADD508u) goto L_08ADD508;
    return;
L_08ADD508:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADD520;
      }
      goto L_08ADD518;
    }
L_08ADD518:
    ctx.gpr[31] = (0x08ADD520u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 641u, 0x08ADA97Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADD520u) goto L_08ADD520;
    return;
L_08ADD520:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD6DC;
      }
      goto L_08ADD528;
    }
L_08ADD528:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADD548;
      }
      goto L_08ADD538;
    }
L_08ADD538:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADD6DC;
      }
      goto L_08ADD548;
    }
L_08ADD548:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08ADD5F8;
      }
      goto L_08ADD554;
    }
L_08ADD554:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20256));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADD5D0;
      }
      goto L_08ADD5B4;
    }
L_08ADD5B4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 198u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADD5C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x08ADD5C8u) goto L_08ADD5C8;
    return;
L_08ADD5C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD5F0;
      }
      goto L_08ADD5D0;
    }
L_08ADD5D0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 196u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADD5E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x08ADD5E4u) goto L_08ADD5E4;
    return;
L_08ADD5E4:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[31] = (0x08ADD5F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 641u, 0x08ADA97Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADD5F0u) goto L_08ADD5F0;
    return;
L_08ADD5F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD6DC;
      }
      goto L_08ADD5F8;
    }
L_08ADD5F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD6B0;
      }
      goto L_08ADD604;
    }
L_08ADD604:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[5] = (0u | 29u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADD694;
      }
      goto L_08ADD64C;
    }
L_08ADD64C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[5] = (0u | 30u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADD6B0;
      }
      goto L_08ADD694;
    }
L_08ADD694:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 198u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADD6A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x08ADD6A8u) goto L_08ADD6A8;
    return;
L_08ADD6A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08ADD6DC;
      }
      goto L_08ADD6B0;
    }
L_08ADD6B0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 196u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADD6C4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x08ADD6C4u) goto L_08ADD6C4;
    return;
L_08ADD6C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08ADD6DC;
      }
      goto L_08ADD6D4;
    }
L_08ADD6D4:
    ctx.gpr[31] = (0x08ADD6DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 641u, 0x08ADA97Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADD6DCu) goto L_08ADD6DC;
    return;
L_08ADD6DC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1388)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD710;
      }
      goto L_08ADD6E8;
    }
L_08ADD6E8:
    ctx.gpr[31] = (0x08ADD6F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 285u, 0x08AD95B0u>(ctx, &aot_mem) && ctx.pc == 0x08ADD6F0u) goto L_08ADD6F0;
    return;
L_08ADD6F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD6FC;
      }
      goto L_08ADD6F8;
    }
L_08ADD6F8:
    ctx.gpr[20] = (0u | 1u);
    goto L_08ADD6FC;
L_08ADD6FC:
    ctx.gpr[31] = (0x08ADD704u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 274u, 0x08AD954Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADD704u) goto L_08ADD704;
    return;
L_08ADD704:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD710;
      }
      goto L_08ADD70C;
    }
L_08ADD70C:
    ctx.gpr[19] = (0u | 1u);
    goto L_08ADD710;
L_08ADD710:
    ctx.gpr[31] = (0x08ADD718u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADD718u) goto L_08ADD718;
    return;
L_08ADD718:
    ctx.gpr[31] = (0x08ADD720u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 762u, 0x08A970E0u>(ctx, &aot_mem) && ctx.pc == 0x08ADD720u) goto L_08ADD720;
    return;
L_08ADD720:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD83C;
      }
      goto L_08ADD728;
    }
L_08ADD728:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADD83C;
      }
      goto L_08ADD738;
    }
L_08ADD738:
    ctx.gpr[31] = (0x08ADD740u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 114u, 0x088B09ACu>(ctx, &aot_mem) && ctx.pc == 0x08ADD740u) goto L_08ADD740;
    return;
L_08ADD740:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADD7A4;
      }
      goto L_08ADD750;
    }
L_08ADD750:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08ADD7A4;
      }
      goto L_08ADD75C;
    }
L_08ADD75C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 197u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADD770u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x08ADD770u) goto L_08ADD770;
    return;
L_08ADD770:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADD788;
      }
      goto L_08ADD780;
    }
L_08ADD780:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1384), 0u);
      if (branch_taken) {
          goto L_08ADD790;
      }
      goto L_08ADD788;
    }
L_08ADD788:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1384), ctx.gpr[4]);
    goto L_08ADD790;
L_08ADD790:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x08ADD79Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 641u, 0x08ADA97Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADD79Cu) goto L_08ADD79C;
    return;
L_08ADD79C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD83C;
      }
      goto L_08ADD7A4;
    }
L_08ADD7A4:
    ctx.gpr[5] = (17174u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1424), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25548), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-25540), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1388), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x08ADD7D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 641u, 0x08ADA97Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADD7D4u) goto L_08ADD7D4;
    return;
L_08ADD7D4:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1420), 0u);
    ctx.gpr[5] = (0u | 197u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADD7ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x08ADD7ECu) goto L_08ADD7EC;
    return;
L_08ADD7EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(15) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD81C;
      }
      goto L_08ADD7FC;
    }
L_08ADD7FC:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-7704)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADD814:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD820;
      }
      goto L_08ADD81C;
    }
L_08ADD81C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1412), 0u);
    goto L_08ADD820;
L_08ADD820:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADD83C;
      }
      goto L_08ADD830;
    }
L_08ADD830:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x08ADD83Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 146u, 0x08864A80u>(ctx, &aot_mem) && ctx.pc == 0x08ADD83Cu) goto L_08ADD83C;
    return;
L_08ADD83C:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[31] = (0x08ADD84Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADD84Cu) goto L_08ADD84C;
    return;
L_08ADD84C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD908;
      }
      goto L_08ADD860;
    }
L_08ADD860:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27580)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25428)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(151) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD900;
      }
      goto L_08ADD880;
    }
L_08ADD880:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 13 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 17 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ADD8F0;
      }
      goto L_08ADD8C8;
    }
L_08ADD8C8:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 18 ? 1u : 0u);
        goto L_08ADD8E4;
    }
    goto L_08ADD8D0;
L_08ADD8D0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD8EC;
      }
      goto L_08ADD8DC;
    }
L_08ADD8DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD8F0;
      }
      goto L_08ADD8E4;
    }
L_08ADD8E4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD8F0;
      }
      goto L_08ADD8EC;
    }
L_08ADD8EC:
    ctx.gpr[23] = (0u | 1u);
    goto L_08ADD8F0;
L_08ADD8F0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27580)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25428), ctx.gpr[4]);
    goto L_08ADD900;
L_08ADD900:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD9C4;
      }
      goto L_08ADD908;
    }
L_08ADD908:
    ctx.gpr[31] = (0x08ADD910u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADD910u) goto L_08ADD910;
    return;
L_08ADD910:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD9C4;
      }
      goto L_08ADD924;
    }
L_08ADD924:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27580)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25424)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(151) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD9C4;
      }
      goto L_08ADD944;
    }
L_08ADD944:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 13 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 17 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ADD9B4;
      }
      goto L_08ADD98C;
    }
L_08ADD98C:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 18 ? 1u : 0u);
        goto L_08ADD9A8;
    }
    goto L_08ADD994;
L_08ADD994:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD9B0;
      }
      goto L_08ADD9A0;
    }
L_08ADD9A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD9B4;
      }
      goto L_08ADD9A8;
    }
L_08ADD9A8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD9B4;
      }
      goto L_08ADD9B0;
    }
L_08ADD9B0:
    ctx.gpr[22] = (0u | 1u);
    goto L_08ADD9B4;
L_08ADD9B4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27580)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25424), ctx.gpr[4]);
    goto L_08ADD9C4;
L_08ADD9C4:
    ctx.gpr[31] = (0x08ADD9CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 322u, 0x08AD96FCu>(ctx, &aot_mem) && ctx.pc == 0x08ADD9CCu) goto L_08ADD9CC;
    return;
L_08ADD9CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD9D8;
      }
      goto L_08ADD9D4;
    }
L_08ADD9D4:
    ctx.gpr[22] = (0u | 1u);
    goto L_08ADD9D8;
L_08ADD9D8:
    ctx.gpr[31] = (0x08ADD9E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 296u, 0x08AD9614u>(ctx, &aot_mem) && ctx.pc == 0x08ADD9E0u) goto L_08ADD9E0;
    return;
L_08ADD9E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD9EC;
      }
      goto L_08ADD9E8;
    }
L_08ADD9E8:
    ctx.gpr[23] = (0u | 1u);
    goto L_08ADD9EC;
L_08ADD9EC:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD9F8;
      }
      goto L_08ADD9F4;
    }
L_08ADD9F4:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_08ADD9F8;
L_08ADD9F8:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDA04;
      }
      goto L_08ADDA00;
    }
L_08ADDA00:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    goto L_08ADDA04;
L_08ADDA04:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDAC0;
      }
      goto L_08ADDA0C;
    }
L_08ADDA0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADDAC0;
      }
      goto L_08ADDA1C;
    }
L_08ADDA1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 13 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 17 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ADDAA4;
      }
      goto L_08ADDA64;
    }
L_08ADDA64:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 18 ? 1u : 0u);
        goto L_08ADDA80;
    }
    goto L_08ADDA6C;
L_08ADDA6C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDA88;
      }
      goto L_08ADDA78;
    }
L_08ADDA78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDAA4;
      }
      goto L_08ADDA80;
    }
L_08ADDA80:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDAA4;
      }
      goto L_08ADDA88;
    }
L_08ADDA88:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 169u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADDA9Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x08ADDA9Cu) goto L_08ADDA9C;
    return;
L_08ADDA9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDAC0;
      }
      goto L_08ADDAA4;
    }
L_08ADDAA4:
    ctx.gpr[31] = (0x08ADDAACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 641u, 0x08ADA97Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADDAACu) goto L_08ADDAAC;
    return;
L_08ADDAAC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 196u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADDAC0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x08ADDAC0u) goto L_08ADDAC0;
    return;
L_08ADDAC0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
      if (branch_taken) {
          goto L_08ADDC58;
      }
      goto L_08ADDACC;
    }
L_08ADDACC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADDAF0;
      }
      goto L_08ADDADC;
    }
L_08ADDADC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 196u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADDAF0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x08ADDAF0u) goto L_08ADDAF0;
    return;
L_08ADDAF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1384), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADDB64;
      }
      goto L_08ADDB04;
    }
L_08ADDB04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADDB58;
      }
      goto L_08ADDB14;
    }
L_08ADDB14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDC44;
      }
      goto L_08ADDB58;
    }
L_08ADDB58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1384), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADDC44;
      }
      goto L_08ADDB64;
    }
L_08ADDB64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[5] = (0u | 15u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
        goto L_08ADDC04;
    }
    goto L_08ADDB74;
L_08ADDB74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
        goto L_08ADDC04;
    }
    goto L_08ADDBB8;
L_08ADDBB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[5] = (0u | 24u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADDC44;
      }
      goto L_08ADDC00;
    }
L_08ADDC00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    goto L_08ADDC04;
L_08ADDC04:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADDC3C;
      }
      goto L_08ADDC34;
    }
L_08ADDC34:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1384), 0u);
      if (branch_taken) {
          goto L_08ADDC44;
      }
      goto L_08ADDC3C;
    }
L_08ADDC3C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1384), ctx.gpr[4]);
    goto L_08ADDC44;
L_08ADDC44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ADDC58;
      }
      goto L_08ADDC50;
    }
L_08ADDC50:
    ctx.gpr[31] = (0x08ADDC58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 641u, 0x08ADA97Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADDC58u) goto L_08ADDC58;
    return;
L_08ADDC58:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDE6C;
      }
      goto L_08ADDC60;
    }
L_08ADDC60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 7u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
        goto L_08ADDC88;
    }
    goto L_08ADDC70;
L_08ADDC70:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 196u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADDC84u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x08ADDC84u) goto L_08ADDC84;
    return;
L_08ADDC84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    goto L_08ADDC88;
L_08ADDC88:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADDCC0;
      }
      goto L_08ADDCB8;
    }
L_08ADDCB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADDCC4;
      }
      goto L_08ADDCC0;
    }
L_08ADDCC0:
    ctx.gpr[4] = (0u | 1u);
    goto L_08ADDCC4;
L_08ADDCC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08ADDD58;
      }
      goto L_08ADDCD4;
    }
L_08ADDCD4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDCF4;
      }
      goto L_08ADDCE4;
    }
L_08ADDCE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1384), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADDE58;
      }
      goto L_08ADDCF4;
    }
L_08ADDCF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[5] = (0u | 14u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADDE58;
      }
      goto L_08ADDD04;
    }
L_08ADDD04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(26))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDE58;
      }
      goto L_08ADDD48;
    }
L_08ADDD48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1384), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADDCF4;
      }
      goto L_08ADDD58;
    }
L_08ADDD58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ADDD84;
      }
      goto L_08ADDD64;
    }
L_08ADDD64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADDD84;
      }
      goto L_08ADDD74;
    }
L_08ADDD74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1384), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADDE58;
      }
      goto L_08ADDD84;
    }
L_08ADDD84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08ADDDA0;
      }
      goto L_08ADDD90;
    }
L_08ADDD90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1384), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADDE58;
      }
      goto L_08ADDDA0;
    }
L_08ADDDA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[5] = (0u | 14u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADDE58;
      }
      goto L_08ADDDB0;
    }
L_08ADDDB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(26))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDE58;
      }
      goto L_08ADDDF4;
    }
L_08ADDDF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(26))))));
    ctx.gpr[5] = (0u | 24u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADDE58;
      }
      goto L_08ADDE3C;
    }
L_08ADDE3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDE58;
      }
      goto L_08ADDE48;
    }
L_08ADDE48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1384), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADDDA0;
      }
      goto L_08ADDE58;
    }
L_08ADDE58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ADDE6C;
      }
      goto L_08ADDE64;
    }
L_08ADDE64:
    ctx.gpr[31] = (0x08ADDE6Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 641u, 0x08ADA97Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADDE6Cu) goto L_08ADDE6C;
    return;
L_08ADDE6C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE4B0;
      }
      goto L_08ADDE74;
    }
L_08ADDE74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(19))))));
    ctx.gpr[5] = (0u | 9u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
        goto L_08ADDED8;
    }
    goto L_08ADDEBC;
L_08ADDEBC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(311)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
        goto L_08ADDED8;
    }
    goto L_08ADDEC8;
L_08ADDEC8:
    ctx.gpr[31] = (0x08ADDED0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 244u, 0x08AD934Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADDED0u) goto L_08ADDED0;
    return;
L_08ADDED0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE4B0;
      }
      goto L_08ADDED8;
    }
L_08ADDED8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(41) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08ADE4B0;
      }
      goto L_08ADDF20;
    }
L_08ADDF20:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-7640)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADDF38:
    ctx.gpr[5] = (17174u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25548), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-25540), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(312), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1424), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1388), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x08ADDF6Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 641u, 0x08ADA97Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADDF6Cu) goto L_08ADDF6C;
    return;
L_08ADDF6C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1420), 0u);
      if (branch_taken) {
          goto L_08ADE4B0;
      }
      goto L_08ADDF74;
    }
L_08ADDF74:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[31] = (0x08ADDF84u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 93u, 0x088646E8u>(ctx, &aot_mem) && ctx.pc == 0x08ADDF84u) goto L_08ADDF84;
    return;
L_08ADDF84:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08ADDFA4u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 248u, 0x089C111Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADDFA4u) goto L_08ADDFA4;
    return;
L_08ADDFA4:
    ctx.gpr[31] = (0x08ADDFACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 863u, 0x08AD36C0u>(ctx, &aot_mem) && ctx.pc == 0x08ADDFACu) goto L_08ADDFAC;
    return;
L_08ADDFAC:
    ctx.gpr[31] = (0x08ADDFB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 864u, 0x08AD36C8u>(ctx, &aot_mem) && ctx.pc == 0x08ADDFB4u) goto L_08ADDFB4;
    return;
L_08ADDFB4:
    ctx.gpr[31] = (0x08ADDFBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 77u, 0x08A54554u>(ctx, &aot_mem) && ctx.pc == 0x08ADDFBCu) goto L_08ADDFBC;
    return;
L_08ADDFBC:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4576));
    ctx.gpr[31] = (0x08ADDFD0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8520));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 420u, 0x08AD9C8Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADDFD0u) goto L_08ADDFD0;
    return;
L_08ADDFD0:
    ctx.gpr[31] = (0x08ADDFD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 201u, 0x08A4CCF8u>(ctx, &aot_mem) && ctx.pc == 0x08ADDFD8u) goto L_08ADDFD8;
    return;
L_08ADDFD8:
    ctx.gpr[31] = (0x08ADDFE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 194u, 0x08A54DCCu>(ctx, &aot_mem) && ctx.pc == 0x08ADDFE0u) goto L_08ADDFE0;
    return;
L_08ADDFE0:
    ctx.gpr[31] = (0x08ADDFE8u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 315u, 0x089C15E8u>(ctx, &aot_mem) && ctx.pc == 0x08ADDFE8u) goto L_08ADDFE8;
    return;
L_08ADDFE8:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-25472)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-25472), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[31] = (0x08ADE004u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 186u, 0x08864D28u>(ctx, &aot_mem) && ctx.pc == 0x08ADE004u) goto L_08ADE004;
    return;
L_08ADE004:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADE014u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1396), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 641u, 0x08ADA97Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE014u) goto L_08ADE014;
    return;
L_08ADE014:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1412), 0u);
    ctx.gpr[31] = (0x08ADE028u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 461u, 0x08AD9EF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADE028u) goto L_08ADE028;
    return;
L_08ADE028:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1384), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADE4B0;
      }
      goto L_08ADE034;
    }
L_08ADE034:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08ADE0C0;
      }
      goto L_08ADE044;
    }
L_08ADE044:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADE0B8;
      }
      goto L_08ADE08C;
    }
L_08ADE08C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-25519), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4576));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-28456), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2229u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-28471), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08ADE0C0;
      }
      goto L_08ADE0B8;
    }
L_08ADE0B8:
    ctx.gpr[31] = (0x08ADE0C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 114u, 0x088B09ACu>(ctx, &aot_mem) && ctx.pc == 0x08ADE0C0u) goto L_08ADE0C0;
    return;
L_08ADE0C0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE24C;
      }
      goto L_08ADE0C8;
    }
L_08ADE0C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[31] = (0x08ADE110u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8512));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 404u, 0x08AED66Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE110u) goto L_08ADE110;
    return;
L_08ADE110:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE130;
      }
      goto L_08ADE118;
    }
L_08ADE118:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADE128u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1396), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 641u, 0x08ADA97Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE128u) goto L_08ADE128;
    return;
L_08ADE128:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE230;
      }
      goto L_08ADE130;
    }
L_08ADE130:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADE140u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1396), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 641u, 0x08ADA97Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE140u) goto L_08ADE140;
    return;
L_08ADE140:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(19))))));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADE1D4;
      }
      goto L_08ADE188;
    }
L_08ADE188:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1396)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADE1AC;
      }
      goto L_08ADE198;
    }
L_08ADE198:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-25531), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1384), 0u);
      if (branch_taken) {
          goto L_08ADE1D4;
      }
      goto L_08ADE1AC;
    }
L_08ADE1AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE1C8;
      }
      goto L_08ADE1B8;
    }
L_08ADE1B8:
    ctx.gpr[31] = (0x08ADE1C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 269u, 0x08AD9508u>(ctx, &aot_mem) && ctx.pc == 0x08ADE1C0u) goto L_08ADE1C0;
    return;
L_08ADE1C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE1D0;
      }
      goto L_08ADE1C8;
    }
L_08ADE1C8:
    ctx.gpr[31] = (0x08ADE1D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 272u, 0x08AD9530u>(ctx, &aot_mem) && ctx.pc == 0x08ADE1D0u) goto L_08ADE1D0;
    return;
L_08ADE1D0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1384), 0u);
    goto L_08ADE1D4;
L_08ADE1D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE230;
      }
      goto L_08ADE1E0;
    }
L_08ADE1E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADE208;
      }
      goto L_08ADE1F0;
    }
L_08ADE1F0:
    ctx.gpr[31] = (0x08ADE1F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 241u, 0x08AD930Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE1F8u) goto L_08ADE1F8;
    return;
L_08ADE1F8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2229u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-28471), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08ADE230;
      }
      goto L_08ADE208;
    }
L_08ADE208:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADE230;
      }
      goto L_08ADE218;
    }
L_08ADE218:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE230;
      }
      goto L_08ADE224;
    }
L_08ADE224:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1384), 0u);
    ctx.gpr[31] = (0x08ADE230u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 269u, 0x08AD9508u>(ctx, &aot_mem) && ctx.pc == 0x08ADE230u) goto L_08ADE230;
    return;
L_08ADE230:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27580)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1384), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1408), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1412), 0u);
    ctx.gpr[31] = (0x08ADE24Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 461u, 0x08AD9EF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADE24Cu) goto L_08ADE24C;
    return;
L_08ADE24C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE4B0;
      }
      goto L_08ADE254;
    }
L_08ADE254:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADE264u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1396), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 641u, 0x08ADA97Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE264u) goto L_08ADE264;
    return;
L_08ADE264:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1384), 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25471))))));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08ADE290u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 144u, 0x08864A54u>(ctx, &aot_mem) && ctx.pc == 0x08ADE290u) goto L_08ADE290;
    return;
L_08ADE290:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1412), 0u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27580)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1408), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADE4B0;
      }
      goto L_08ADE2A4;
    }
L_08ADE2A4:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-25444), 0u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-28896), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08ADE2C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 598u, 0x08ADA78Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE2C0u) goto L_08ADE2C0;
    return;
L_08ADE2C0:
    ctx.gpr[31] = (0x08ADE2C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 640u, 0x08ADA974u>(ctx, &aot_mem) && ctx.pc == 0x08ADE2C8u) goto L_08ADE2C8;
    return;
L_08ADE2C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE4B0;
      }
      goto L_08ADE2D0;
    }
L_08ADE2D0:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25444), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-28896), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08ADE2F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 598u, 0x08ADA78Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE2F0u) goto L_08ADE2F0;
    return;
L_08ADE2F0:
    ctx.gpr[31] = (0x08ADE2F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 640u, 0x08ADA974u>(ctx, &aot_mem) && ctx.pc == 0x08ADE2F8u) goto L_08ADE2F8;
    return;
L_08ADE2F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE4B0;
      }
      goto L_08ADE300;
    }
L_08ADE300:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25444), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-28896), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08ADE320u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 598u, 0x08ADA78Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE320u) goto L_08ADE320;
    return;
L_08ADE320:
    ctx.gpr[31] = (0x08ADE328u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 640u, 0x08ADA974u>(ctx, &aot_mem) && ctx.pc == 0x08ADE328u) goto L_08ADE328;
    return;
L_08ADE328:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE4B0;
      }
      goto L_08ADE330;
    }
L_08ADE330:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25444), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-28896), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08ADE350u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 598u, 0x08ADA78Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE350u) goto L_08ADE350;
    return;
L_08ADE350:
    ctx.gpr[31] = (0x08ADE358u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 640u, 0x08ADA974u>(ctx, &aot_mem) && ctx.pc == 0x08ADE358u) goto L_08ADE358;
    return;
L_08ADE358:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE4B0;
      }
      goto L_08ADE360;
    }
L_08ADE360:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25444), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-28896), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08ADE380u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 598u, 0x08ADA78Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE380u) goto L_08ADE380;
    return;
L_08ADE380:
    ctx.gpr[31] = (0x08ADE388u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 640u, 0x08ADA974u>(ctx, &aot_mem) && ctx.pc == 0x08ADE388u) goto L_08ADE388;
    return;
L_08ADE388:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE4B0;
      }
      goto L_08ADE390;
    }
L_08ADE390:
    ctx.gpr[31] = (0x08ADE398u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 241u, 0x08AD930Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE398u) goto L_08ADE398;
    return;
L_08ADE398:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-28471), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE4B0;
      }
      goto L_08ADE3AC;
    }
L_08ADE3AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08ADE70C;
      }
      goto L_08ADE3B4;
    }
L_08ADE3B4:
    ctx.gpr[31] = (0x08ADE3BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 562u, 0x08ADA544u>(ctx, &aot_mem) && ctx.pc == 0x08ADE3BCu) goto L_08ADE3BC;
    return;
L_08ADE3BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE4B0;
      }
      goto L_08ADE3C4;
    }
L_08ADE3C4:
    ctx.gpr[4] = (0u | 288u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25496), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-25526), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE3F8;
      }
      goto L_08ADE3EC;
    }
L_08ADE3EC:
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-25492), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08ADE404;
      }
      goto L_08ADE3F8;
    }
L_08ADE3F8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-25492), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08ADE404;
L_08ADE404:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-25524), 0u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(22240), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 80u);
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-25476), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 96u);
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-25480), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-25471), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-25472), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[18] = (0u | 2u);
    ctx.gpr[31] = (0x08ADE44Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADE44Cu) goto L_08ADE44C;
    return;
L_08ADE44C:
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(130), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[31] = (0x08ADE458u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADE458u) goto L_08ADE458;
    return;
L_08ADE458:
    ctx.gpr[31] = (0x08ADE460u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 587u, 0x08AD6CE4u>(ctx, &aot_mem) && ctx.pc == 0x08ADE460u) goto L_08ADE460;
    return;
L_08ADE460:
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25651), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1396), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[5]);
    ctx.gpr[31] = (0x08ADE480u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 461u, 0x08AD9EF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADE480u) goto L_08ADE480;
    return;
L_08ADE480:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20624)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08ADE49C;
      }
      goto L_08ADE490;
    }
L_08ADE490:
    ctx.gpr[31] = (0x08ADE498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 699u, 0x08AFAF50u>(ctx, &aot_mem) && ctx.pc == 0x08ADE498u) goto L_08ADE498;
    return;
L_08ADE498:
    ctx.gpr[4] = (2230u << 16u);
    goto L_08ADE49C;
L_08ADE49C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20624)));
    ctx.gpr[31] = (0x08ADE4A8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 38u, 0x0883822Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE4A8u) goto L_08ADE4A8;
    return;
L_08ADE4A8:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1384), ctx.gpr[4]);
    goto L_08ADE4B0;
L_08ADE4B0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE4C0;
      }
      goto L_08ADE4B8;
    }
L_08ADE4B8:
    ctx.gpr[31] = (0x08ADE4C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 461u, 0x08AD9EF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADE4C0u) goto L_08ADE4C0;
    return;
L_08ADE4C0:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE708;
      }
      goto L_08ADE4C8;
    }
L_08ADE4C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) <= 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
        goto L_08ADE504;
    }
    goto L_08ADE4D4;
L_08ADE4D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADE4EC;
      }
      goto L_08ADE4E4;
    }
L_08ADE4E4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1384), 0u);
      if (branch_taken) {
          goto L_08ADE4F4;
      }
      goto L_08ADE4EC;
    }
L_08ADE4EC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1384), ctx.gpr[4]);
    goto L_08ADE4F4;
L_08ADE4F4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x08ADE500u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 641u, 0x08ADA97Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE500u) goto L_08ADE500;
    return;
L_08ADE500:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    goto L_08ADE504;
L_08ADE504:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 17u);
      if (branch_taken) {
          goto L_08ADE670;
      }
      goto L_08ADE548;
    }
L_08ADE548:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 7u);
      if (branch_taken) {
          goto L_08ADE560;
      }
      goto L_08ADE550;
    }
L_08ADE550:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADE618;
      }
      goto L_08ADE558;
    }
L_08ADE558:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE6AC;
      }
      goto L_08ADE560;
    }
L_08ADE560:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20624)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08ADE57C;
      }
      goto L_08ADE570;
    }
L_08ADE570:
    ctx.gpr[31] = (0x08ADE578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 699u, 0x08AFAF50u>(ctx, &aot_mem) && ctx.pc == 0x08ADE578u) goto L_08ADE578;
    return;
L_08ADE578:
    ctx.gpr[4] = (2230u << 16u);
    goto L_08ADE57C;
L_08ADE57C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20624)));
    ctx.gpr[31] = (0x08ADE588u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 38u, 0x0883822Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE588u) goto L_08ADE588;
    return;
L_08ADE588:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-25471))))));
    ctx.gpr[5] = (0u | 196u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(-25471), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADE5ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x08ADE5ACu) goto L_08ADE5AC;
    return;
L_08ADE5AC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-25471))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08ADE5C4;
      }
      goto L_08ADE5B8;
    }
L_08ADE5B8:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-25471), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08ADE5C4;
L_08ADE5C4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25471))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE5E0;
      }
      goto L_08ADE5D8;
    }
L_08ADE5D8:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-25471), static_cast<std::uint8_t>(0u));
    goto L_08ADE5E0;
L_08ADE5E0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-25471))))));
    ctx.gpr[31] = (0x08ADE5F8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 190u, 0x08864D6Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE5F8u) goto L_08ADE5F8;
    return;
L_08ADE5F8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-25471))))));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08ADE610u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 144u, 0x08864A54u>(ctx, &aot_mem) && ctx.pc == 0x08ADE610u) goto L_08ADE610;
    return;
L_08ADE610:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE6AC;
      }
      goto L_08ADE618;
    }
L_08ADE618:
    ctx.gpr[31] = (0x08ADE620u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADE620u) goto L_08ADE620;
    return;
L_08ADE620:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) >= 0;
    ctx.gpr[17] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(130)));
      if (branch_taken) {
          goto L_08ADE648;
      }
      goto L_08ADE628;
    }
L_08ADE628:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08ADE638;
      }
      goto L_08ADE634;
    }
L_08ADE634:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    goto L_08ADE638;
L_08ADE638:
    ctx.gpr[31] = (0x08ADE640u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADE640u) goto L_08ADE640;
    return;
L_08ADE640:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(130), static_cast<std::uint16_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08ADE668;
      }
      goto L_08ADE648;
    }
L_08ADE648:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE65C;
      }
      goto L_08ADE658;
    }
L_08ADE658:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-4));
    goto L_08ADE65C;
L_08ADE65C:
    ctx.gpr[31] = (0x08ADE664u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADE664u) goto L_08ADE664;
    return;
L_08ADE664:
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(130), static_cast<std::uint16_t>(ctx.gpr[17]));
    goto L_08ADE668;
L_08ADE668:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE6AC;
      }
      goto L_08ADE670;
    }
L_08ADE670:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25524)));
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-25524), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08ADE690;
      }
      goto L_08ADE684;
    }
L_08ADE684:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25524), ctx.gpr[4]);
    goto L_08ADE690;
L_08ADE690:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25524)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE6AC;
      }
      goto L_08ADE6A4;
    }
L_08ADE6A4:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-25524), 0u);
    goto L_08ADE6AC;
L_08ADE6AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADE6B8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 514u, 0x08ADA240u>(ctx, &aot_mem) && ctx.pc == 0x08ADE6B8u) goto L_08ADE6B8;
    return;
L_08ADE6B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[5] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADE708;
      }
      goto L_08ADE700;
    }
L_08ADE700:
    ctx.gpr[31] = (0x08ADE708u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 470u, 0x08AD9F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE708u) goto L_08ADE708;
    return;
L_08ADE708:
    ctx.gpr[2] = (0u | 0u);
    goto L_08ADE70C;
L_08ADE70C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADE738:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-25517)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ADE780;
      }
      goto L_08ADE774;
    }
L_08ADE774:
    ctx.gpr[31] = (0x08ADE77Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 114u, 0x088B09ACu>(ctx, &aot_mem) && ctx.pc == 0x08ADE77Cu) goto L_08ADE77C;
    return;
L_08ADE77C:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(-25517), static_cast<std::uint8_t>(0u));
    goto L_08ADE780;
L_08ADE780:
    ctx.gpr[31] = (0x08ADE788u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 375u, 0x089C18D0u>(ctx, &aot_mem) && ctx.pc == 0x08ADE788u) goto L_08ADE788;
    return;
L_08ADE788:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08ADE79C;
      }
      goto L_08ADE790;
    }
L_08ADE790:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25519)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE7C8;
      }
      goto L_08ADE79C;
    }
L_08ADE79C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE7C0;
      }
      goto L_08ADE7AC;
    }
L_08ADE7AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (2230u << 16u);
      if (branch_taken) {
          goto L_08ADE7D0;
      }
      goto L_08ADE7B8;
    }
L_08ADE7B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE7DC;
      }
      goto L_08ADE7C0;
    }
L_08ADE7C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADED40;
      }
      goto L_08ADE7C8;
    }
L_08ADE7C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADED40;
      }
      goto L_08ADE7D0;
    }
L_08ADE7D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-25518)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE7C0;
      }
      goto L_08ADE7DC;
    }
L_08ADE7DC:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(305)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4576));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1131)));
    ctx.gpr[19] = (0u < ctx.gpr[19] ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1132)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (2230u << 16u);
      if (branch_taken) {
          goto L_08ADE820;
      }
      goto L_08ADE800;
    }
L_08ADE800:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE820;
      }
      goto L_08ADE808;
    }
L_08ADE808:
    ctx.gpr[31] = (0x08ADE810u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 261u, 0x08AD9494u>(ctx, &aot_mem) && ctx.pc == 0x08ADE810u) goto L_08ADE810;
    return;
L_08ADE810:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1132), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1131), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1132)));
    goto L_08ADE820;
L_08ADE820:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE838;
      }
      goto L_08ADE828;
    }
L_08ADE828:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1131)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE838;
      }
      goto L_08ADE834;
    }
L_08ADE834:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1132), static_cast<std::uint8_t>(0u));
    goto L_08ADE838;
L_08ADE838:
    ctx.gpr[31] = (0x08ADE840u);
    ctx.gpr[20] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08ADE840u) goto L_08ADE840;
    return;
L_08ADE840:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE874;
      }
      goto L_08ADE848;
    }
L_08ADE848:
    ctx.gpr[31] = (0x08ADE850u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08ADE850u) goto L_08ADE850;
    return;
L_08ADE850:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE874;
      }
      goto L_08ADE85C;
    }
L_08ADE85C:
    ctx.gpr[31] = (0x08ADE864u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08ADE864u) goto L_08ADE864;
    return;
L_08ADE864:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    ctx.gpr[20] = (ctx.gpr[4] ^ 2u);
    ctx.gpr[20] = (ctx.gpr[20] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_08ADE874;
L_08ADE874:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(117)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE890;
      }
      goto L_08ADE888;
    }
L_08ADE888:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADED20;
      }
      goto L_08ADE890;
    }
L_08ADE890:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25530)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADED20;
      }
      goto L_08ADE8A0;
    }
L_08ADE8A0:
    ctx.gpr[31] = (0x08ADE8A8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADE8A8u) goto L_08ADE8A8;
    return;
L_08ADE8A8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(34))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADE8C8;
      }
      goto L_08ADE8B8;
    }
L_08ADE8B8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(84))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08ADE8CC;
      }
      goto L_08ADE8C4;
    }
L_08ADE8C4:
    ctx.gpr[5] = (0u | 1u);
    goto L_08ADE8C8;
L_08ADE8C8:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_08ADE8CC;
L_08ADE8CC:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-25519)));
        goto L_08ADE904;
    }
    goto L_08ADE8D4;
L_08ADE8D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 11u);
      if (branch_taken) {
          goto L_08ADE900;
      }
      goto L_08ADE8E4;
    }
L_08ADE8E4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 10u);
      if (branch_taken) {
          goto L_08ADE900;
      }
      goto L_08ADE8EC;
    }
L_08ADE8EC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08ADE900;
      }
      goto L_08ADE8F4;
    }
L_08ADE8F4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25532)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE918;
      }
      goto L_08ADE900;
    }
L_08ADE900:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-25519)));
    goto L_08ADE904;
L_08ADE904:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE918;
      }
      goto L_08ADE90C;
    }
L_08ADE90C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-25518)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADED20;
      }
      goto L_08ADE918;
    }
L_08ADE918:
    ctx.gpr[21] = (2230u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 169u);
    ctx.gpr[31] = (0x08ADE930u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x08ADE930u) goto L_08ADE930;
    return;
L_08ADE930:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(305)));
    ctx.gpr[22] = (2233u << 16u);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[23] = (0u | 1u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-26208));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[30] = (0u | 14u);
      if (branch_taken) {
          goto L_08ADE958;
      }
      goto L_08ADE94C;
    }
L_08ADE94C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08ADE958u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 150u, 0x08864AC0u>(ctx, &aot_mem) && ctx.pc == 0x08ADE958u) goto L_08ADE958;
    return;
L_08ADE958:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[30]);
    ctx.gpr[31] = (0x08ADE964u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 93u, 0x088646E8u>(ctx, &aot_mem) && ctx.pc == 0x08ADE964u) goto L_08ADE964;
    return;
L_08ADE964:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25476)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08ADE978u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 109u, 0x088647E8u>(ctx, &aot_mem) && ctx.pc == 0x08ADE978u) goto L_08ADE978;
    return;
L_08ADE978:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25480)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08ADE98Cu);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 105u, 0x088647B0u>(ctx, &aot_mem) && ctx.pc == 0x08ADE98Cu) goto L_08ADE98C;
    return;
L_08ADE98C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[30] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8504));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08ADE9A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 827u, 0x08AA3EBCu>(ctx, &aot_mem) && ctx.pc == 0x08ADE9A0u) goto L_08ADE9A0;
    return;
L_08ADE9A0:
    ctx.gpr[5] = (ctx.gpr[2] >> 10u);
    ctx.gpr[31] = (0x08ADE9ACu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 537u, 0x08AD68D4u>(ctx, &aot_mem) && ctx.pc == 0x08ADE9ACu) goto L_08ADE9AC;
    return;
L_08ADE9AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(296)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08ADE9CC;
      }
      goto L_08ADE9B8;
    }
L_08ADE9B8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(297)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08ADE9CC;
      }
      goto L_08ADE9C4;
    }
L_08ADE9C4:
    ctx.gpr[31] = (0x08ADE9CCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 127u, 0x089D53ACu>(ctx, &aot_mem) && ctx.pc == 0x08ADE9CCu) goto L_08ADE9CC;
    return;
L_08ADE9CC:
    ctx.gpr[31] = (0x08ADE9D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 375u, 0x089C18D0u>(ctx, &aot_mem) && ctx.pc == 0x08ADE9D4u) goto L_08ADE9D4;
    return;
L_08ADE9D4:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[22] = (2230u << 16u);
      if (branch_taken) {
          goto L_08ADEA10;
      }
      goto L_08ADE9DC;
    }
L_08ADE9DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-28568)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADEA10;
      }
      goto L_08ADE9E8;
    }
L_08ADE9E8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADEA0C;
      }
      goto L_08ADE9F0;
    }
L_08ADE9F0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08ADEA0Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ADEA0Cu) goto L_08ADEA0C;
    return;
L_08ADEA0C:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(-28568), 0u);
    goto L_08ADEA10;
L_08ADEA10:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(305)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(305), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-25519)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08ADEA2C;
      }
      goto L_08ADEA28;
    }
L_08ADEA28:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(305), static_cast<std::uint8_t>(0u));
    goto L_08ADEA2C;
L_08ADEA2C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-25518)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08ADEA44;
      }
      goto L_08ADEA38;
    }
L_08ADEA38:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1384), 0u);
    ctx.gpr[31] = (0x08ADEA44u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(305), static_cast<std::uint8_t>(ctx.gpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 763u, 0x0891B6ECu>(ctx, &aot_mem) && ctx.pc == 0x08ADEA44u) goto L_08ADEA44;
    return;
L_08ADEA44:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(305)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADEAF0;
      }
      goto L_08ADEA50;
    }
L_08ADEA50:
    ctx.gpr[31] = (0x08ADEA58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 627u, 0x08AD70E0u>(ctx, &aot_mem) && ctx.pc == 0x08ADEA58u) goto L_08ADEA58;
    return;
L_08ADEA58:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-25540), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-25544), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-25536), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17174u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[31] = (0x08ADEA8Cu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25548), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 640u, 0x08ADA974u>(ctx, &aot_mem) && ctx.pc == 0x08ADEA8Cu) goto L_08ADEA8C;
    return;
L_08ADEA8C:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-28888), 0u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08ADEAC8;
      }
      goto L_08ADEAA0;
    }
L_08ADEAA0:
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20648)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADEABC;
      }
      goto L_08ADEAB0;
    }
L_08ADEAB0:
    ctx.gpr[31] = (0x08ADEAB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA4BCu>(ctx, &aot_mem) && ctx.pc == 0x08ADEAB8u) goto L_08ADEAB8;
    return;
L_08ADEAB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20648)));
    goto L_08ADEABC;
L_08ADEABC:
    ctx.gpr[31] = (0x08ADEAC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 479u, 0x0882BC80u>(ctx, &aot_mem) && ctx.pc == 0x08ADEAC4u) goto L_08ADEAC4;
    return;
L_08ADEAC4:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    goto L_08ADEAC8;
L_08ADEAC8:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ADEADC;
      }
      goto L_08ADEAD4;
    }
L_08ADEAD4:
    ctx.gpr[31] = (0x08ADEADCu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 146u, 0x08864A80u>(ctx, &aot_mem) && ctx.pc == 0x08ADEADCu) goto L_08ADEADC;
    return;
L_08ADEADC:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08ADEAE8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 150u, 0x08864AC0u>(ctx, &aot_mem) && ctx.pc == 0x08ADEAE8u) goto L_08ADEAE8;
    return;
L_08ADEAE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADED20;
      }
      goto L_08ADEAF0;
    }
L_08ADEAF0:
    ctx.gpr[31] = (0x08ADEAF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 763u, 0x0891B6ECu>(ctx, &aot_mem) && ctx.pc == 0x08ADEAF8u) goto L_08ADEAF8;
    return;
L_08ADEAF8:
    ctx.gpr[31] = (0x08ADEB00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 542u, 0x08AB2F78u>(ctx, &aot_mem) && ctx.pc == 0x08ADEB00u) goto L_08ADEB00;
    return;
L_08ADEB00:
    ctx.gpr[20] = (2233u << 16u);
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(-4912));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08ADEB24u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 407u, 0x08A7F278u>(ctx, &aot_mem) && ctx.pc == 0x08ADEB24u) goto L_08ADEB24;
    return;
L_08ADEB24:
    ctx.gpr[31] = (0x08ADEB2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 561u, 0x08AB327Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADEB2Cu) goto L_08ADEB2C;
    return;
L_08ADEB2C:
    ctx.gpr[31] = (0x08ADEB34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 542u, 0x08AB2F78u>(ctx, &aot_mem) && ctx.pc == 0x08ADEB34u) goto L_08ADEB34;
    return;
L_08ADEB34:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08ADEB50u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 407u, 0x08A7F278u>(ctx, &aot_mem) && ctx.pc == 0x08ADEB50u) goto L_08ADEB50;
    return;
L_08ADEB50:
    ctx.gpr[31] = (0x08ADEB58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 561u, 0x08AB327Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADEB58u) goto L_08ADEB58;
    return;
L_08ADEB58:
    ctx.gpr[31] = (0x08ADEB60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 529u, 0x08AB2EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADEB60u) goto L_08ADEB60;
    return;
L_08ADEB60:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (0u | 480u);
    ctx.gpr[7] = (0u | 272u);
    ctx.gpr[31] = (0x08ADEB78u);
    ctx.gpr[8] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 712u, 0x08AB3F64u>(ctx, &aot_mem) && ctx.pc == 0x08ADEB78u) goto L_08ADEB78;
    return;
L_08ADEB78:
    ctx.gpr[31] = (0x08ADEB80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 542u, 0x08AB2F78u>(ctx, &aot_mem) && ctx.pc == 0x08ADEB80u) goto L_08ADEB80;
    return;
L_08ADEB80:
    ctx.gpr[4] = (17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (16896u << 16u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (49928u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-4912)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (17152u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (17664u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-4912)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (17664u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[7] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (17920u << 16u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (19456u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28928));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (19712u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(30592));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[9] = (54272u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[9] = (54528u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] << 10u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[7] = (5376u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (ctx.gpr[6] << 10u);
    ctx.gpr[7] = (5632u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08ADECD8u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 561u, 0x08AB327Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADECD8u) goto L_08ADECD8;
    return;
L_08ADECD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08ADED20;
      }
      goto L_08ADECE4;
    }
L_08ADECE4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADED20;
      }
      goto L_08ADECF0;
    }
L_08ADECF0:
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20648)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADED0C;
      }
      goto L_08ADED00;
    }
L_08ADED00:
    ctx.gpr[31] = (0x08ADED08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA4BCu>(ctx, &aot_mem) && ctx.pc == 0x08ADED08u) goto L_08ADED08;
    return;
L_08ADED08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20648)));
    goto L_08ADED0C;
L_08ADED0C:
    ctx.gpr[31] = (0x08ADED14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 424u, 0x0882B958u>(ctx, &aot_mem) && ctx.pc == 0x08ADED14u) goto L_08ADED14;
    return;
L_08ADED14:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADED20;
      }
      goto L_08ADED1C;
    }
L_08ADED1C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1424), static_cast<std::uint8_t>(0u));
    goto L_08ADED20;
L_08ADED20:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(305)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ADED38;
      }
      goto L_08ADED30;
    }
L_08ADED30:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(306), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08ADED38;
L_08ADED38:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(-25519), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(-25518), static_cast<std::uint8_t>(0u));
    goto L_08ADED40;
L_08ADED40:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADED70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ADEDAC;
      }
      goto L_08ADED8C;
    }
L_08ADED8C:
    ctx.gpr[4] = (17279u << 16u);
    ctx.gpr[31] = (0x08ADED98u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 231u, 0x08A5508Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADED98u) goto L_08ADED98;
    return;
L_08ADED98:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2229u << 16u);
      if (branch_taken) {
          goto L_08ADEDB4;
      }
      goto L_08ADEDA4;
    }
L_08ADEDA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADEE14;
      }
      goto L_08ADEDAC;
    }
L_08ADEDAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF0AC;
      }
      goto L_08ADEDB4;
    }
L_08ADEDB4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27340)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (2229u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27344)));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08ADEDE0u);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x08ADEDE0u) goto L_08ADEDE0;
    return;
L_08ADEDE0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08ADEDFCu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08ADEDFCu) goto L_08ADEDFC;
    return;
L_08ADEDFC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08ADEE0Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 935u, 0x08AD3DD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADEE0Cu) goto L_08ADEE0C;
    return;
L_08ADEE0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF0A4;
      }
      goto L_08ADEE14;
    }
L_08ADEE14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1424)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 255 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ADEFF0;
      }
      goto L_08ADEE24;
    }
L_08ADEE24:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2229u << 16u);
      if (branch_taken) {
          goto L_08ADEE8C;
      }
      goto L_08ADEE2C;
    }
L_08ADEE2C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27340)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (2229u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27344)));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08ADEE58u);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x08ADEE58u) goto L_08ADEE58;
    return;
L_08ADEE58:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08ADEE74u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08ADEE74u) goto L_08ADEE74;
    return;
L_08ADEE74:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08ADEE84u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 935u, 0x08AD3DD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADEE84u) goto L_08ADEE84;
    return;
L_08ADEE84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADEEC4;
      }
      goto L_08ADEE8C;
    }
L_08ADEE8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1412)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 255 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADEEC4;
      }
      goto L_08ADEE9C;
    }
L_08ADEE9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1396)));
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1412), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(310), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08ADEEC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ADF724;
L_08ADEEC0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1412), ctx.gpr[17]);
    goto L_08ADEEC4;
L_08ADEEC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 11u);
      if (branch_taken) {
          goto L_08ADF050;
      }
      goto L_08ADEED4;
    }
L_08ADEED4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADF050;
      }
      goto L_08ADEEDC;
    }
L_08ADEEDC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25444)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08ADEF70;
      }
      goto L_08ADEEF0;
    }
L_08ADEEF0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF050;
      }
      goto L_08ADEF00;
    }
L_08ADEF00:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-7472)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADEF18:
    ctx.gpr[4] = (0u | 7u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADF050;
      }
      goto L_08ADEF24;
    }
L_08ADEF24:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADF050;
      }
      goto L_08ADEF30;
    }
L_08ADEF30:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADF050;
      }
      goto L_08ADEF3C;
    }
L_08ADEF3C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), 0u);
      if (branch_taken) {
          goto L_08ADF050;
      }
      goto L_08ADEF44;
    }
L_08ADEF44:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADF050;
      }
      goto L_08ADEF50;
    }
L_08ADEF50:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08ADF050;
      }
      goto L_08ADEF58;
    }
L_08ADEF58:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADF050;
      }
      goto L_08ADEF64;
    }
L_08ADEF64:
    ctx.gpr[4] = (0u | 14u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADF050;
      }
      goto L_08ADEF70;
    }
L_08ADEF70:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF050;
      }
      goto L_08ADEF80;
    }
L_08ADEF80:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-7440)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADEF98:
    ctx.gpr[4] = (0u | 7u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADF050;
      }
      goto L_08ADEFA4;
    }
L_08ADEFA4:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADF050;
      }
      goto L_08ADEFB0;
    }
L_08ADEFB0:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADF050;
      }
      goto L_08ADEFBC;
    }
L_08ADEFBC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), 0u);
      if (branch_taken) {
          goto L_08ADF050;
      }
      goto L_08ADEFC4;
    }
L_08ADEFC4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08ADF050;
      }
      goto L_08ADEFCC;
    }
L_08ADEFCC:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADF050;
      }
      goto L_08ADEFD8;
    }
L_08ADEFD8:
    ctx.gpr[4] = (0u | 14u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADF050;
      }
      goto L_08ADEFE4;
    }
L_08ADEFE4:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADF050;
      }
      goto L_08ADEFF0;
    }
L_08ADEFF0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2229u << 16u);
      if (branch_taken) {
          goto L_08ADF050;
      }
      goto L_08ADEFF8;
    }
L_08ADEFF8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27340)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (2229u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27344)));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08ADF024u);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x08ADF024u) goto L_08ADF024;
    return;
L_08ADF024:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08ADF040u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08ADF040u) goto L_08ADF040;
    return;
L_08ADF040:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08ADF050u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 935u, 0x08AD3DD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADF050u) goto L_08ADF050;
    return;
L_08ADF050:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF094;
      }
      goto L_08ADF05C;
    }
L_08ADF05C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ADF094;
      }
      goto L_08ADF090;
    }
L_08ADF090:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1384), ctx.gpr[4]);
    goto L_08ADF094;
L_08ADF094:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(310), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08ADF0A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ADF724;
L_08ADF0A4:
    ctx.gpr[31] = (0x08ADF0ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 540u, 0x08AD6928u>(ctx, &aot_mem) && ctx.pc == 0x08ADF0ACu) goto L_08ADF0AC;
    return;
L_08ADF0AC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADF0C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 477u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1364), ctx.gpr[17]);
    ctx.gpr[4] = (0u | 233u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1368), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1372), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1424)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
      if (branch_taken) {
          goto L_08ADF6E4;
      }
      goto L_08ADF0FC;
    }
L_08ADF0FC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(15) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF6A4;
      }
      goto L_08ADF10C;
    }
L_08ADF10C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-7408)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADF124:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1372), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADF138u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 78u, 0x08AD85D0u>(ctx, &aot_mem) && ctx.pc == 0x08ADF138u) goto L_08ADF138;
    return;
L_08ADF138:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1372), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADF148u);
    ctx.gpr[5] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 78u, 0x08AD85D0u>(ctx, &aot_mem) && ctx.pc == 0x08ADF148u) goto L_08ADF148;
    return;
L_08ADF148:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADF154u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 78u, 0x08AD85D0u>(ctx, &aot_mem) && ctx.pc == 0x08ADF154u) goto L_08ADF154;
    return;
L_08ADF154:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADF160u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 78u, 0x08AD85D0u>(ctx, &aot_mem) && ctx.pc == 0x08ADF160u) goto L_08ADF160;
    return;
L_08ADF160:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADF16Cu);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 78u, 0x08AD85D0u>(ctx, &aot_mem) && ctx.pc == 0x08ADF16Cu) goto L_08ADF16C;
    return;
L_08ADF16C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF708;
      }
      goto L_08ADF174;
    }
L_08ADF174:
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[19] = (0u | 14u);
      if (branch_taken) {
          goto L_08ADF190;
      }
      goto L_08ADF184;
    }
L_08ADF184:
    ctx.gpr[31] = (0x08ADF18Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADF18Cu) goto L_08ADF18C;
    return;
L_08ADF18C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    goto L_08ADF190;
L_08ADF190:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADF1BC;
      }
      goto L_08ADF19C;
    }
L_08ADF19C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 1u);
        goto L_08ADF1C0;
    }
    goto L_08ADF1A8;
L_08ADF1A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (2209u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-26624));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08ADF1C4;
      }
      goto L_08ADF1BC;
    }
L_08ADF1BC:
    ctx.gpr[4] = (0u | 1u);
    goto L_08ADF1C0;
L_08ADF1C0:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08ADF1C4;
L_08ADF1C4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF270;
      }
      goto L_08ADF1CC;
    }
L_08ADF1CC:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
        goto L_08ADF1E4;
    }
    goto L_08ADF1D4;
L_08ADF1D4:
    ctx.gpr[31] = (0x08ADF1DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADF1DCu) goto L_08ADF1DC;
    return;
L_08ADF1DC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    goto L_08ADF1E4;
L_08ADF1E4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF270;
      }
      goto L_08ADF1EC;
    }
L_08ADF1EC:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3164)));
        goto L_08ADF204;
    }
    goto L_08ADF1F4;
L_08ADF1F4:
    ctx.gpr[31] = (0x08ADF1FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADF1FCu) goto L_08ADF1FC;
    return;
L_08ADF1FC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3164)));
    goto L_08ADF204;
L_08ADF204:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADF260;
      }
      goto L_08ADF20C;
    }
L_08ADF20C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF238;
      }
      goto L_08ADF218;
    }
L_08ADF218:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF238;
      }
      goto L_08ADF224;
    }
L_08ADF224:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (2209u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-25292));
    if (ctx.gpr[8] == ctx.gpr[7]) {
    ctx.gpr[4] = (0u | 1u);
        goto L_08ADF264;
    }
    goto L_08ADF238;
L_08ADF238:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_08ADF268;
    }
    goto L_08ADF240;
L_08ADF240:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_08ADF268;
    }
    goto L_08ADF24C;
L_08ADF24C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (2209u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-25300));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08ADF268;
      }
      goto L_08ADF260;
    }
L_08ADF260:
    ctx.gpr[4] = (0u | 1u);
    goto L_08ADF264;
L_08ADF264:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08ADF268;
L_08ADF268:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF28C;
      }
      goto L_08ADF270;
    }
L_08ADF270:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1372), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADF284u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 78u, 0x08AD85D0u>(ctx, &aot_mem) && ctx.pc == 0x08ADF284u) goto L_08ADF284;
    return;
L_08ADF284:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1372), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    goto L_08ADF28C;
L_08ADF28C:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(18))))));
        goto L_08ADF2A4;
    }
    goto L_08ADF294;
L_08ADF294:
    ctx.gpr[31] = (0x08ADF29Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADF29Cu) goto L_08ADF29C;
    return;
L_08ADF29C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(18))))));
    goto L_08ADF2A4;
L_08ADF2A4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADF2CC;
      }
      goto L_08ADF2AC;
    }
L_08ADF2AC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 1u);
        goto L_08ADF2D0;
    }
    goto L_08ADF2B8;
L_08ADF2B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (2209u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-26624));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08ADF2D4;
      }
      goto L_08ADF2CC;
    }
L_08ADF2CC:
    ctx.gpr[4] = (0u | 1u);
    goto L_08ADF2D0;
L_08ADF2D0:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08ADF2D4;
L_08ADF2D4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF380;
      }
      goto L_08ADF2DC;
    }
L_08ADF2DC:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
        goto L_08ADF2F4;
    }
    goto L_08ADF2E4;
L_08ADF2E4:
    ctx.gpr[31] = (0x08ADF2ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADF2ECu) goto L_08ADF2EC;
    return;
L_08ADF2EC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    goto L_08ADF2F4;
L_08ADF2F4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF380;
      }
      goto L_08ADF2FC;
    }
L_08ADF2FC:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3164)));
        goto L_08ADF314;
    }
    goto L_08ADF304;
L_08ADF304:
    ctx.gpr[31] = (0x08ADF30Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADF30Cu) goto L_08ADF30C;
    return;
L_08ADF30C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3164)));
    goto L_08ADF314;
L_08ADF314:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADF370;
      }
      goto L_08ADF31C;
    }
L_08ADF31C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF348;
      }
      goto L_08ADF328;
    }
L_08ADF328:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF348;
      }
      goto L_08ADF334;
    }
L_08ADF334:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (2209u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-25292));
    if (ctx.gpr[8] == ctx.gpr[7]) {
    ctx.gpr[4] = (0u | 1u);
        goto L_08ADF374;
    }
    goto L_08ADF348;
L_08ADF348:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_08ADF378;
    }
    goto L_08ADF350;
L_08ADF350:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_08ADF378;
    }
    goto L_08ADF35C;
L_08ADF35C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (2209u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-25300));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08ADF378;
      }
      goto L_08ADF370;
    }
L_08ADF370:
    ctx.gpr[4] = (0u | 1u);
    goto L_08ADF374;
L_08ADF374:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08ADF378;
L_08ADF378:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF4D0;
      }
      goto L_08ADF380;
    }
L_08ADF380:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(18))))));
        goto L_08ADF398;
    }
    goto L_08ADF388;
L_08ADF388:
    ctx.gpr[31] = (0x08ADF390u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADF390u) goto L_08ADF390;
    return;
L_08ADF390:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(18))))));
    goto L_08ADF398;
L_08ADF398:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADF3C0;
      }
      goto L_08ADF3A0;
    }
L_08ADF3A0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 1u);
        goto L_08ADF3C4;
    }
    goto L_08ADF3AC;
L_08ADF3AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (2209u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-26624));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08ADF3C8;
      }
      goto L_08ADF3C0;
    }
L_08ADF3C0:
    ctx.gpr[4] = (0u | 1u);
    goto L_08ADF3C4;
L_08ADF3C4:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08ADF3C8;
L_08ADF3C8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF474;
      }
      goto L_08ADF3D0;
    }
L_08ADF3D0:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
        goto L_08ADF3E8;
    }
    goto L_08ADF3D8;
L_08ADF3D8:
    ctx.gpr[31] = (0x08ADF3E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADF3E0u) goto L_08ADF3E0;
    return;
L_08ADF3E0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    goto L_08ADF3E8;
L_08ADF3E8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF474;
      }
      goto L_08ADF3F0;
    }
L_08ADF3F0:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3164)));
        goto L_08ADF408;
    }
    goto L_08ADF3F8;
L_08ADF3F8:
    ctx.gpr[31] = (0x08ADF400u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADF400u) goto L_08ADF400;
    return;
L_08ADF400:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3164)));
    goto L_08ADF408;
L_08ADF408:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADF464;
      }
      goto L_08ADF410;
    }
L_08ADF410:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF43C;
      }
      goto L_08ADF41C;
    }
L_08ADF41C:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF43C;
      }
      goto L_08ADF428;
    }
L_08ADF428:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (2209u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-25292));
    if (ctx.gpr[8] == ctx.gpr[7]) {
    ctx.gpr[4] = (0u | 1u);
        goto L_08ADF468;
    }
    goto L_08ADF43C;
L_08ADF43C:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_08ADF46C;
    }
    goto L_08ADF444;
L_08ADF444:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_08ADF46C;
    }
    goto L_08ADF450;
L_08ADF450:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (2209u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-25300));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08ADF46C;
      }
      goto L_08ADF464;
    }
L_08ADF464:
    ctx.gpr[4] = (0u | 1u);
    goto L_08ADF468;
L_08ADF468:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08ADF46C;
L_08ADF46C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF4D0;
      }
      goto L_08ADF474;
    }
L_08ADF474:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(18))))));
        goto L_08ADF48C;
    }
    goto L_08ADF47C;
L_08ADF47C:
    ctx.gpr[31] = (0x08ADF484u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADF484u) goto L_08ADF484;
    return;
L_08ADF484:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(18))))));
    goto L_08ADF48C;
L_08ADF48C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADF4B4;
      }
      goto L_08ADF494;
    }
L_08ADF494:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 1u);
        goto L_08ADF4B8;
    }
    goto L_08ADF4A0;
L_08ADF4A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (2209u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-26624));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08ADF4BC;
      }
      goto L_08ADF4B4;
    }
L_08ADF4B4:
    ctx.gpr[4] = (0u | 1u);
    goto L_08ADF4B8;
L_08ADF4B8:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08ADF4BC;
L_08ADF4BC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF4E4;
      }
      goto L_08ADF4C4;
    }
L_08ADF4C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08ADF4E4;
      }
      goto L_08ADF4D0;
    }
L_08ADF4D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADF4DCu);
    ctx.gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 78u, 0x08AD85D0u>(ctx, &aot_mem) && ctx.pc == 0x08ADF4DCu) goto L_08ADF4DC;
    return;
L_08ADF4DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF4FC;
      }
      goto L_08ADF4E4;
    }
L_08ADF4E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1368)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1364), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1368), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1372), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08ADF4FC;
L_08ADF4FC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADF508u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 78u, 0x08AD85D0u>(ctx, &aot_mem) && ctx.pc == 0x08ADF508u) goto L_08ADF508;
    return;
L_08ADF508:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08ADF69C;
      }
      goto L_08ADF514;
    }
L_08ADF514:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
        goto L_08ADF530;
    }
    goto L_08ADF520;
L_08ADF520:
    ctx.gpr[31] = (0x08ADF528u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADF528u) goto L_08ADF528;
    return;
L_08ADF528:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    goto L_08ADF530;
L_08ADF530:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADF558;
      }
      goto L_08ADF538;
    }
L_08ADF538:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (0u | 1u);
        goto L_08ADF55C;
    }
    goto L_08ADF544;
L_08ADF544:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (2209u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-26624));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08ADF560;
      }
      goto L_08ADF558;
    }
L_08ADF558:
    ctx.gpr[5] = (0u | 1u);
    goto L_08ADF55C;
L_08ADF55C:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08ADF560;
L_08ADF560:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF60C;
      }
      goto L_08ADF568;
    }
L_08ADF568:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
        goto L_08ADF580;
    }
    goto L_08ADF570;
L_08ADF570:
    ctx.gpr[31] = (0x08ADF578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADF578u) goto L_08ADF578;
    return;
L_08ADF578:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_08ADF580;
L_08ADF580:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF60C;
      }
      goto L_08ADF588;
    }
L_08ADF588:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3164)));
        goto L_08ADF5A0;
    }
    goto L_08ADF590;
L_08ADF590:
    ctx.gpr[31] = (0x08ADF598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADF598u) goto L_08ADF598;
    return;
L_08ADF598:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3164)));
    goto L_08ADF5A0;
L_08ADF5A0:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADF5FC;
      }
      goto L_08ADF5A8;
    }
L_08ADF5A8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF5D4;
      }
      goto L_08ADF5B4;
    }
L_08ADF5B4:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF5D4;
      }
      goto L_08ADF5C0;
    }
L_08ADF5C0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (2209u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-25292));
    if (ctx.gpr[8] == ctx.gpr[7]) {
    ctx.gpr[5] = (0u | 1u);
        goto L_08ADF600;
    }
    goto L_08ADF5D4;
L_08ADF5D4:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
        goto L_08ADF604;
    }
    goto L_08ADF5DC;
L_08ADF5DC:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
        goto L_08ADF604;
    }
    goto L_08ADF5E8;
L_08ADF5E8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (2209u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-25300));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08ADF604;
      }
      goto L_08ADF5FC;
    }
L_08ADF5FC:
    ctx.gpr[5] = (0u | 1u);
    goto L_08ADF600;
L_08ADF600:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08ADF604;
L_08ADF604:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF690;
      }
      goto L_08ADF60C;
    }
L_08ADF60C:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3164)));
        goto L_08ADF624;
    }
    goto L_08ADF614;
L_08ADF614:
    ctx.gpr[31] = (0x08ADF61Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADF61Cu) goto L_08ADF61C;
    return;
L_08ADF61C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3164)));
    goto L_08ADF624;
L_08ADF624:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADF680;
      }
      goto L_08ADF62C;
    }
L_08ADF62C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF658;
      }
      goto L_08ADF638;
    }
L_08ADF638:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF658;
      }
      goto L_08ADF644;
    }
L_08ADF644:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (2209u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-25292));
    if (ctx.gpr[8] == ctx.gpr[7]) {
    ctx.gpr[6] = (0u | 1u);
        goto L_08ADF684;
    }
    goto L_08ADF658;
L_08ADF658:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
        goto L_08ADF688;
    }
    goto L_08ADF660;
L_08ADF660:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
        goto L_08ADF688;
    }
    goto L_08ADF66C;
L_08ADF66C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2209u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25300));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08ADF688;
      }
      goto L_08ADF680;
    }
L_08ADF680:
    ctx.gpr[6] = (0u | 1u);
    goto L_08ADF684;
L_08ADF684:
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
    goto L_08ADF688;
L_08ADF688:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF69C;
      }
      goto L_08ADF690;
    }
L_08ADF690:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADF69Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 78u, 0x08AD85D0u>(ctx, &aot_mem) && ctx.pc == 0x08ADF69Cu) goto L_08ADF69C;
    return;
L_08ADF69C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF708;
      }
      goto L_08ADF6A4;
    }
L_08ADF6A4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADF6B0u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 78u, 0x08AD85D0u>(ctx, &aot_mem) && ctx.pc == 0x08ADF6B0u) goto L_08ADF6B0;
    return;
L_08ADF6B0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADF6BCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 78u, 0x08AD85D0u>(ctx, &aot_mem) && ctx.pc == 0x08ADF6BCu) goto L_08ADF6BC;
    return;
L_08ADF6BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADF6C8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 78u, 0x08AD85D0u>(ctx, &aot_mem) && ctx.pc == 0x08ADF6C8u) goto L_08ADF6C8;
    return;
L_08ADF6C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF708;
      }
      goto L_08ADF6D0;
    }
L_08ADF6D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADF6DCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 78u, 0x08AD85D0u>(ctx, &aot_mem) && ctx.pc == 0x08ADF6DCu) goto L_08ADF6DC;
    return;
L_08ADF6DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF708;
      }
      goto L_08ADF6E4;
    }
L_08ADF6E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADF6F0u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 78u, 0x08AD85D0u>(ctx, &aot_mem) && ctx.pc == 0x08ADF6F0u) goto L_08ADF6F0;
    return;
L_08ADF6F0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADF6FCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 78u, 0x08AD85D0u>(ctx, &aot_mem) && ctx.pc == 0x08ADF6FCu) goto L_08ADF6FC;
    return;
L_08ADF6FC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADF708u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 78u, 0x08AD85D0u>(ctx, &aot_mem) && ctx.pc == 0x08ADF708u) goto L_08ADF708;
    return;
L_08ADF708:
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
L_08ADF724:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-672));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(624), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(628), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(632), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(636), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(640), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(644), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ADF754u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 864u, 0x08AD36C8u>(ctx, &aot_mem) && ctx.pc == 0x08ADF754u) goto L_08ADF754;
    return;
L_08ADF754:
    ctx.gpr[31] = (0x08ADF75Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 77u, 0x08A54554u>(ctx, &aot_mem) && ctx.pc == 0x08ADF75Cu) goto L_08ADF75C;
    return;
L_08ADF75C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1412)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u | 12u);
      if (branch_taken) {
          goto L_08ADF788;
      }
      goto L_08ADF768;
    }
L_08ADF768:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08ADF774u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08ADF774u) goto L_08ADF774;
    return;
L_08ADF774:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08ADF780u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08ADF780u) goto L_08ADF780;
    return;
L_08ADF780:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF8F0;
      }
      goto L_08ADF788;
    }
L_08ADF788:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1412)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 255 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 255u);
      if (branch_taken) {
          goto L_08ADF848;
      }
      goto L_08ADF798;
    }
L_08ADF798:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1412), ctx.gpr[4]);
    ctx.gpr[19] = (2229u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[18] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(27344)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(1168));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08ADF7E0u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08ADF7E0u) goto L_08ADF7E0;
    return;
L_08ADF7E0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08ADF7FCu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 897u, 0x08AD39E0u>(ctx, &aot_mem) && ctx.pc == 0x08ADF7FCu) goto L_08ADF7FC;
    return;
L_08ADF7FC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-48));
    ctx.gpr[31] = (0x08ADF814u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 636u, 0x088B7DC4u>(ctx, &aot_mem) && ctx.pc == 0x08ADF814u) goto L_08ADF814;
    return;
L_08ADF814:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADF82C;
      }
      goto L_08ADF824;
    }
L_08ADF824:
    ctx.gpr[31] = (0x08ADF82Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 846u, 0x08AE3CBCu>(ctx, &aot_mem) && ctx.pc == 0x08ADF82Cu) goto L_08ADF82C;
    return;
L_08ADF82C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08ADF840u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 636u, 0x088B7DC4u>(ctx, &aot_mem) && ctx.pc == 0x08ADF840u) goto L_08ADF840;
    return;
L_08ADF840:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF8F0;
      }
      goto L_08ADF848;
    }
L_08ADF848:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(310)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (2229u << 16u);
      if (branch_taken) {
          goto L_08ADF8F0;
      }
      goto L_08ADF854;
    }
L_08ADF854:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[18] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(27344)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(1168));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08ADF890u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08ADF890u) goto L_08ADF890;
    return;
L_08ADF890:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08ADF8ACu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 897u, 0x08AD39E0u>(ctx, &aot_mem) && ctx.pc == 0x08ADF8ACu) goto L_08ADF8AC;
    return;
L_08ADF8AC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-48));
    ctx.gpr[31] = (0x08ADF8C4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 636u, 0x088B7DC4u>(ctx, &aot_mem) && ctx.pc == 0x08ADF8C4u) goto L_08ADF8C4;
    return;
L_08ADF8C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADF8DC;
      }
      goto L_08ADF8D4;
    }
L_08ADF8D4:
    ctx.gpr[31] = (0x08ADF8DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 846u, 0x08AE3CBCu>(ctx, &aot_mem) && ctx.pc == 0x08ADF8DCu) goto L_08ADF8DC;
    return;
L_08ADF8DC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08ADF8F0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 636u, 0x088B7DC4u>(ctx, &aot_mem) && ctx.pc == 0x08ADF8F0u) goto L_08ADF8F0;
    return;
L_08ADF8F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1412)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 255 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF93C;
      }
      goto L_08ADF900;
    }
L_08ADF900:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1412)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(50));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1412), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 255 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF93C;
      }
      goto L_08ADF91C;
    }
L_08ADF91C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(50));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF93C;
      }
      goto L_08ADF934;
    }
L_08ADF934:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    goto L_08ADF93C;
L_08ADF93C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08ADF95C;
      }
      goto L_08ADF948;
    }
L_08ADF948:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1164)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF95C;
      }
      goto L_08ADF954;
    }
L_08ADF954:
    ctx.gpr[31] = (0x08ADF95Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 218u, 0x08AE510Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADF95Cu) goto L_08ADF95C;
    return;
L_08ADF95C:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x08ADF968u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08ADF968u) goto L_08ADF968;
    return;
L_08ADF968:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x08ADF974u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08ADF974u) goto L_08ADF974;
    return;
L_08ADF974:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x08ADF980u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08ADF980u) goto L_08ADF980;
    return;
L_08ADF980:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x08ADF98Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08ADF98Cu) goto L_08ADF98C;
    return;
L_08ADF98C:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x08ADF998u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08ADF998u) goto L_08ADF998;
    return;
L_08ADF998:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26208));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(297)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF9CC;
      }
      goto L_08ADF9AC;
    }
L_08ADF9AC:
    ctx.gpr[31] = (0x08ADF9B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ADFC40;
L_08ADF9B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 7u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1424)));
        goto L_08ADF9D4;
    }
    goto L_08ADF9C4;
L_08ADF9C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFBF4;
      }
      goto L_08ADF9CC;
    }
L_08ADF9CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFC14;
      }
      goto L_08ADF9D4;
    }
L_08ADF9D4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFBF4;
      }
      goto L_08ADF9DC;
    }
L_08ADF9DC:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1148)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[31] = (0x08ADFA58u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 775u, 0x08967A30u>(ctx, &aot_mem) && ctx.pc == 0x08ADFA58u) goto L_08ADFA58;
    return;
L_08ADFA58:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.gpr[31] = (0x08ADFA64u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 785u, 0x08967BE0u>(ctx, &aot_mem) && ctx.pc == 0x08ADFA64u) goto L_08ADFA64;
    return;
L_08ADFA64:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (16840u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13820)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08ADFAA4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 212u, 0x08871684u>(ctx, &aot_mem) && ctx.pc == 0x08ADFAA4u) goto L_08ADFAA4;
    return;
L_08ADFAA4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_08ADFAC4;
      }
      goto L_08ADFAAC;
    }
L_08ADFAAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13820)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08ADFAC0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 314u, 0x08871D84u>(ctx, &aot_mem) && ctx.pc == 0x08ADFAC0u) goto L_08ADFAC0;
    return;
L_08ADFAC0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_08ADFAC4;
L_08ADFAC4:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFAE8;
      }
      goto L_08ADFACC;
    }
L_08ADFACC:
    ctx.gpr[31] = (0x08ADFAD4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 191u, 0x088714CCu>(ctx, &aot_mem) && ctx.pc == 0x08ADFAD4u) goto L_08ADFAD4;
    return;
L_08ADFAD4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADFAE0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 22u, 0x08A54234u>(ctx, &aot_mem) && ctx.pc == 0x08ADFAE0u) goto L_08ADFAE0;
    return;
L_08ADFAE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFB3C;
      }
      goto L_08ADFAE8;
    }
L_08ADFAE8:
    ctx.gpr[19] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08ADFB24;
      }
      goto L_08ADFAF8;
    }
L_08ADFAF8:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08ADFB04u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08ADFB04u) goto L_08ADFB04;
    return;
L_08ADFB04:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFB1C;
      }
      goto L_08ADFB10;
    }
L_08ADFB10:
    ctx.gpr[31] = (0x08ADFB18u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08ADFB18u) goto L_08ADFB18;
    return;
L_08ADFB18:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08ADFB1C;
L_08ADFB1C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08ADFB24;
L_08ADFB24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08ADFB30u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8476));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08ADFB30u) goto L_08ADFB30;
    return;
L_08ADFB30:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADFB3Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 22u, 0x08A54234u>(ctx, &aot_mem) && ctx.pc == 0x08ADFB3Cu) goto L_08ADFB3C;
    return;
L_08ADFB3C:
    ctx.gpr[31] = (0x08ADFB44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54EB8u>(ctx, &aot_mem) && ctx.pc == 0x08ADFB44u) goto L_08ADFB44;
    return;
L_08ADFB44:
    ctx.gpr[31] = (0x08ADFB4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55030u>(ctx, &aot_mem) && ctx.pc == 0x08ADFB4Cu) goto L_08ADFB4C;
    return;
L_08ADFB4C:
    ctx.gpr[31] = (0x08ADFB54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A54FD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADFB54u) goto L_08ADFB54;
    return;
L_08ADFB54:
    ctx.gpr[4] = (16079u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16882u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.gpr[31] = (0x08ADFB70u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x08ADFB70u) goto L_08ADFB70;
    return;
L_08ADFB70:
    ctx.gpr[4] = (17392u << 16u);
    ctx.gpr[31] = (0x08ADFB7Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 214u, 0x08A54F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADFB7Cu) goto L_08ADFB7C;
    return;
L_08ADFB7C:
    ctx.gpr[31] = (0x08ADFB84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 224u, 0x08A55020u>(ctx, &aot_mem) && ctx.pc == 0x08ADFB84u) goto L_08ADFB84;
    return;
L_08ADFB84:
    ctx.gpr[31] = (0x08ADFB8Cu);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADFB8Cu) goto L_08ADFB8C;
    return;
L_08ADFB8C:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08ADFBA8u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08ADFBA8u) goto L_08ADFBA8;
    return;
L_08ADFBA8:
    ctx.gpr[31] = (0x08ADFBB0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A550ACu>(ctx, &aot_mem) && ctx.pc == 0x08ADFBB0u) goto L_08ADFBB0;
    return;
L_08ADFBB0:
    ctx.gpr[31] = (0x08ADFBB8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x08ADFBB8u) goto L_08ADFBB8;
    return;
L_08ADFBB8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08ADFBD0u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08ADFBD0u) goto L_08ADFBD0;
    return;
L_08ADFBD0:
    ctx.gpr[31] = (0x08ADFBD8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x08ADFBD8u) goto L_08ADFBD8;
    return;
L_08ADFBD8:
    ctx.gpr[6] = (16768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (17258u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08ADFBF4u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08ADFBF4u) goto L_08ADFBF4;
    return;
L_08ADFBF4:
    ctx.gpr[31] = (0x08ADFBFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 194u, 0x08A54DCCu>(ctx, &aot_mem) && ctx.pc == 0x08ADFBFCu) goto L_08ADFBFC;
    return;
L_08ADFBFC:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x08ADFC08u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08ADFC08u) goto L_08ADFC08;
    return;
L_08ADFC08:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x08ADFC14u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08ADFC14u) goto L_08ADFC14;
    return;
L_08ADFC14:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(628)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(632)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(636)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADFC40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ADFC90u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A54FD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADFC90u) goto L_08ADFC90;
    return;
L_08ADFC90:
    ctx.gpr[31] = (0x08ADFC98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55030u>(ctx, &aot_mem) && ctx.pc == 0x08ADFC98u) goto L_08ADFC98;
    return;
L_08ADFC98:
    ctx.gpr[31] = (0x08ADFCA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 206u, 0x08A54EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADFCA0u) goto L_08ADFCA0;
    return;
L_08ADFCA0:
    ctx.gpr[31] = (0x08ADFCA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 203u, 0x08A54E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADFCA8u) goto L_08ADFCA8;
    return;
L_08ADFCA8:
    ctx.gpr[31] = (0x08ADFCB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 223u, 0x08A5500Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADFCB0u) goto L_08ADFCB0;
    return;
L_08ADFCB0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08ADFCC8u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 214u, 0x08A54F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADFCC8u) goto L_08ADFCC8;
    return;
L_08ADFCC8:
    ctx.gpr[4] = (16672u << 16u);
    ctx.gpr[31] = (0x08ADFCD4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 209u, 0x08A54F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADFCD4u) goto L_08ADFCD4;
    return;
L_08ADFCD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 14u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08ADFD1C;
      }
      goto L_08ADFCE4;
    }
L_08ADFCE4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08ADFD0C;
      }
      goto L_08ADFCEC;
    }
L_08ADFCEC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADFD48;
      }
      goto L_08ADFCF4;
    }
L_08ADFCF4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFD48;
      }
      goto L_08ADFCFC;
    }
L_08ADFCFC:
    ctx.gpr[31] = (0x08ADFD04u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 758u, 0x08AE366Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADFD04u) goto L_08ADFD04;
    return;
L_08ADFD04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFD48;
      }
      goto L_08ADFD0C;
    }
L_08ADFD0C:
    ctx.gpr[31] = (0x08ADFD14u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 111u, 0x08AE490Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADFD14u) goto L_08ADFD14;
    return;
L_08ADFD14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFD48;
      }
      goto L_08ADFD1C;
    }
L_08ADFD1C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20648)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08ADFD38;
      }
      goto L_08ADFD2C;
    }
L_08ADFD2C:
    ctx.gpr[31] = (0x08ADFD34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA4BCu>(ctx, &aot_mem) && ctx.pc == 0x08ADFD34u) goto L_08ADFD34;
    return;
L_08ADFD34:
    ctx.gpr[4] = (2230u << 16u);
    goto L_08ADFD38;
L_08ADFD38:
    ctx.gpr[31] = (0x08ADFD40u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20648)));
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 475u, 0x0882BC2Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADFD40u) goto L_08ADFD40;
    return;
L_08ADFD40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFD48;
      }
      goto L_08ADFD48;
    }
L_08ADFD48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u | 255u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
        goto L_08ADFEB4;
    }
    goto L_08ADFD58;
L_08ADFD58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1412)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 255 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
        goto L_08ADFEB4;
    }
    goto L_08ADFD68;
L_08ADFD68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1396)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
        goto L_08ADFEB4;
    }
    goto L_08ADFD98;
L_08ADFD98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1412)));
    ctx.gpr[16] = (0u | 255u);
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[8] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADFDC0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08ADFDC0u) goto L_08ADFDC0;
    return;
L_08ADFDC0:
    ctx.gpr[31] = (0x08ADFDC8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 236u, 0x08A55118u>(ctx, &aot_mem) && ctx.pc == 0x08ADFDC8u) goto L_08ADFDC8;
    return;
L_08ADFDC8:
    ctx.gpr[31] = (0x08ADFDD0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADFDD0u) goto L_08ADFDD0;
    return;
L_08ADFDD0:
    ctx.gpr[31] = (0x08ADFDD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 208u, 0x08A54F14u>(ctx, &aot_mem) && ctx.pc == 0x08ADFDD8u) goto L_08ADFDD8;
    return;
L_08ADFDD8:
    ctx.gpr[31] = (0x08ADFDE0u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x08ADFDE0u) goto L_08ADFDE0;
    return;
L_08ADFDE0:
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16332u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[31] = (0x08ADFDFCu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x08ADFDFCu) goto L_08ADFDFC;
    return;
L_08ADFDFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1412)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] - ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[5] = (0u | 174u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADFE1Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08ADFE1Cu) goto L_08ADFE1C;
    return;
L_08ADFE1C:
    ctx.gpr[31] = (0x08ADFE24u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x08ADFE24u) goto L_08ADFE24;
    return;
L_08ADFE24:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1396)));
        goto L_08ADFE64;
    }
    goto L_08ADFE34;
L_08ADFE34:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08ADFE40u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08ADFE40u) goto L_08ADFE40;
    return;
L_08ADFE40:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFE58;
      }
      goto L_08ADFE4C;
    }
L_08ADFE4C:
    ctx.gpr[31] = (0x08ADFE54u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08ADFE54u) goto L_08ADFE54;
    return;
L_08ADFE54:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08ADFE58;
L_08ADFE58:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1396)));
    goto L_08ADFE64;
L_08ADFE64:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5812));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08ADFE94u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08ADFE94u) goto L_08ADFE94;
    return;
L_08ADFE94:
    ctx.gpr[6] = (16752u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (16544u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08ADFEB0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08ADFEB0u) goto L_08ADFEB0;
    return;
L_08ADFEB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    goto L_08ADFEB4;
L_08ADFEB4:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 2u, 0x08AE0008u>(ctx, &aot_mem); return;
      }
      goto L_08ADFEE0;
    }
L_08ADFEE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 2u, 0x08AE0008u>(ctx, &aot_mem); return;
      }
      goto L_08ADFEEC;
    }
L_08ADFEEC:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08ADFEFCu);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 348u, 0x08AD97E4u>(ctx, &aot_mem) && ctx.pc == 0x08ADFEFCu) goto L_08ADFEFC;
    return;
L_08ADFEFC:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADFF14u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08ADFF14u) goto L_08ADFF14;
    return;
L_08ADFF14:
    ctx.gpr[31] = (0x08ADFF1Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 236u, 0x08A55118u>(ctx, &aot_mem) && ctx.pc == 0x08ADFF1Cu) goto L_08ADFF1C;
    return;
L_08ADFF1C:
    ctx.gpr[31] = (0x08ADFF24u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADFF24u) goto L_08ADFF24;
    return;
L_08ADFF24:
    ctx.gpr[31] = (0x08ADFF2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 208u, 0x08A54F14u>(ctx, &aot_mem) && ctx.pc == 0x08ADFF2Cu) goto L_08ADFF2C;
    return;
L_08ADFF2C:
    ctx.gpr[31] = (0x08ADFF34u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x08ADFF34u) goto L_08ADFF34;
    return;
L_08ADFF34:
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16332u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[31] = (0x08ADFF50u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x08ADFF50u) goto L_08ADFF50;
    return;
L_08ADFF50:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08ADFF5Cu);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 348u, 0x08AD97E4u>(ctx, &aot_mem) && ctx.pc == 0x08ADFF5Cu) goto L_08ADFF5C;
    return;
L_08ADFF5C:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 174u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADFF74u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08ADFF74u) goto L_08ADFF74;
    return;
L_08ADFF74:
    ctx.gpr[31] = (0x08ADFF7Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x08ADFF7Cu) goto L_08ADFF7C;
    return;
L_08ADFF7C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
        goto L_08ADFFBC;
    }
    goto L_08ADFF8C;
L_08ADFF8C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08ADFF98u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08ADFF98u) goto L_08ADFF98;
    return;
L_08ADFF98:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFFB0;
      }
      goto L_08ADFFA4;
    }
L_08ADFFA4:
    ctx.gpr[31] = (0x08ADFFACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08ADFFACu) goto L_08ADFFAC;
    return;
L_08ADFFAC:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08ADFFB0;
L_08ADFFB0:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    goto L_08ADFFBC;
L_08ADFFBC:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5812));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08ADFFECu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08ADFFECu) goto L_08ADFFEC;
    return;
L_08ADFFEC:
    ctx.gpr[6] = (16752u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (16544u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08AE0000u; return;
}

void recomp_unit_0182(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0182_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_182(Runtime &runtime) {
    runtime.register_generated_unit(182u, 0x08ADC000u, 16384u, &recomp_unit_0182, &recomp_unit_0182_entry);
    runtime.register_function(0x08ADC000u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC008u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC010u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC018u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC020u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC028u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC030u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC038u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC040u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC048u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC050u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC070u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC098u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC0B0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC0BCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC0F0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC0F8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC100u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC110u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC120u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC130u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC138u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC13Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC170u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC178u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC17Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC184u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC18Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC194u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC19Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC1A4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC1ACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC1B0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC1C0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC1C4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC1D4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC1E8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC1F0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC1F8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC200u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC208u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC210u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC218u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC220u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC228u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC230u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC238u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC258u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC280u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC294u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC2A0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC2D8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC2E0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC2E8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC2FCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC30Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC31Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC324u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC328u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC360u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC368u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC36Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC374u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC37Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC384u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC38Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC394u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC39Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC3A0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC3B0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC3B4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC3C4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC3D8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC3E0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC3E8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC3F0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC3F8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC400u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC408u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC410u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC418u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC420u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC428u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC448u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC470u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC484u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC490u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC4C4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC4CCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC4D4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC4E4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC4F4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC504u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC50Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC510u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC544u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC54Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC550u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC578u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC588u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC5E4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC5ECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC5FCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC604u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC634u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC640u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC6A0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC6A8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC6B8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC6C0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC6D0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC6D8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC6E0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC6E8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC6F4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC6FCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC704u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC70Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC714u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC71Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC724u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC740u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC748u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC750u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC758u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC760u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC768u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC770u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC788u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC790u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC79Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC7ACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC7B4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC7BCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC7C4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC7D0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC7DCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC7E4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC7ECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC7F4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC7FCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC804u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC80Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC824u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC82Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC834u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC83Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC844u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC84Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC854u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC870u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC878u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC884u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC894u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC89Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC8A4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC8ACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC8B8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC8C8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC8D0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC8D8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC8E8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC8F0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC8F8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC904u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC90Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC914u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC91Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC924u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC930u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC938u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC948u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC950u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC958u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC960u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC970u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC97Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC980u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC984u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC98Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC994u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC99Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC9A4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC9C0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC9CCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC9D0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC9E0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC9F8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCA00u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCA08u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCA18u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCA2Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCA34u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCA40u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCA4Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCA6Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCA78u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCA84u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCA90u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCAD4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCB0Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCB1Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCB24u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCB2Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCB34u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCB44u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCB4Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCB54u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCB5Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCB68u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCB80u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCB90u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCB98u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCBA0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCBB0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCBC0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCBCCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCBFCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCC0Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCC1Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCC34u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCC3Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCC44u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCC4Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCC5Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCC64u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCC78u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCC80u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCC94u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCC9Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCCB0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCCB8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCCCCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCCD4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCCDCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCCE8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCCF0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCCF8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCD04u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCD0Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCD14u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCD20u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCD28u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCD30u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCD3Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCD44u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCD54u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCD60u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCD68u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCD70u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCD78u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCD84u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCD9Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCDA0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCDACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCDB4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCDC4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCDD0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCDD4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCDD8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCDE0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCDF4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCE0Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCE18u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCE20u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCE24u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCE30u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCE38u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCE3Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCE44u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCE4Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCE54u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCE5Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCE60u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCE6Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCE7Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCE9Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCEA0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCF00u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCF50u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCF58u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCF60u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCF68u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCF74u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCF88u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCF98u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCFA4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCFACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCFB4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCFBCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCFC8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCFDCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCFECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCFF8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD000u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD008u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD010u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD01Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD030u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD040u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD04Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD054u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD05Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD064u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD070u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD084u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD094u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD0A0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD0A8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD0B8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD0C8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD0D8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD0E0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD0E4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD0ECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD0F8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD10Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD120u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD138u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD144u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD150u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD15Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD164u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD170u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD17Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD188u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD194u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD1A8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD1C0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD1CCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD1D8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD1E4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD1ECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD1F8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD204u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD210u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD218u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD228u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD238u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD240u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD244u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD24Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD254u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD258u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD260u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD268u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD270u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD278u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD280u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD288u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD290u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD294u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD29Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD2E4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD2F0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD2F8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD300u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD314u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD31Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD330u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD338u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD348u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD354u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD358u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD35Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD364u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD374u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD384u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD394u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD3E0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD3F8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD400u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD408u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD41Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD424u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD42Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD434u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD444u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD458u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD460u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD474u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD47Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD484u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD4D8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD4ECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD4F4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD508u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD518u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD520u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD528u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD538u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD548u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD554u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD5B4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD5C8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD5D0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD5E4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD5F0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD5F8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD604u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD64Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD694u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD6A8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD6B0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD6C4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD6D4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD6DCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD6E8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD6F0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD6F8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD6FCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD704u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD70Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD710u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD718u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD720u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD728u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD738u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD740u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD750u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD75Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD770u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD780u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD788u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD790u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD79Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD7A4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD7D4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD7ECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD7FCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD814u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD81Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD820u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD830u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD83Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD84Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD860u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD880u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD8C8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD8D0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD8DCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD8E4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD8ECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD8F0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD900u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD908u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD910u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD924u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD944u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD98Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD994u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD9A0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD9A8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD9B0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD9B4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD9C4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD9CCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD9D4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD9D8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD9E0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD9E8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD9ECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD9F4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD9F8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDA00u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDA04u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDA0Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDA1Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDA64u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDA6Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDA78u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDA80u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDA88u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDA9Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDAA4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDAACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDAC0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDACCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDADCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDAF0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDB04u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDB14u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDB58u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDB64u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDB74u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDBB8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDC00u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDC04u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDC34u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDC3Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDC44u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDC50u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDC58u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDC60u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDC70u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDC84u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDC88u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDCB8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDCC0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDCC4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDCD4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDCE4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDCF4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDD04u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDD48u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDD58u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDD64u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDD74u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDD84u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDD90u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDDA0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDDB0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDDF4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDE3Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDE48u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDE58u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDE64u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDE6Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDE74u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDEBCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDEC8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDED0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDED8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDF20u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDF38u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDF6Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDF74u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDF84u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDFA4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDFACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDFB4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDFBCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDFD0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDFD8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDFE0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDFE8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE004u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE014u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE028u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE034u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE044u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE08Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE0B8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE0C0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE0C8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE110u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE118u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE128u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE130u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE140u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE188u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE198u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE1ACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE1B8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE1C0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE1C8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE1D0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE1D4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE1E0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE1F0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE1F8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE208u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE218u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE224u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE230u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE24Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE254u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE264u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE290u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE2A4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE2C0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE2C8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE2D0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE2F0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE2F8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE300u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE320u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE328u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE330u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE350u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE358u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE360u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE380u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE388u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE390u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE398u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE3ACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE3B4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE3BCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE3C4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE3ECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE3F8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE404u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE44Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE458u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE460u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE480u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE490u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE498u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE49Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE4A8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE4B0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE4B8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE4C0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE4C8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE4D4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE4E4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE4ECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE4F4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE500u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE504u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE548u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE550u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE558u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE560u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE570u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE578u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE57Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE588u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE5ACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE5B8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE5C4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE5D8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE5E0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE5F8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE610u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE618u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE620u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE628u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE634u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE638u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE640u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE648u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE658u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE65Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE664u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE668u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE670u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE684u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE690u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE6A4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE6ACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE6B8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE700u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE708u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE70Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE738u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE774u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE77Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE780u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE788u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE790u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE79Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE7ACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE7B8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE7C0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE7C8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE7D0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE7DCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE800u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE808u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE810u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE820u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE828u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE834u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE838u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE840u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE848u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE850u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE85Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE864u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE874u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE888u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE890u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE8A0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE8A8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE8B8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE8C4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE8C8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE8CCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE8D4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE8E4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE8ECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE8F4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE900u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE904u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE90Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE918u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE930u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE94Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE958u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE964u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE978u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE98Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE9A0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE9ACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE9B8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE9C4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE9CCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE9D4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE9DCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE9E8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE9F0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEA0Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEA10u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEA28u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEA2Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEA38u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEA44u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEA50u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEA58u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEA8Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEAA0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEAB0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEAB8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEABCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEAC4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEAC8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEAD4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEADCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEAE8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEAF0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEAF8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEB00u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEB24u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEB2Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEB34u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEB50u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEB58u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEB60u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEB78u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEB80u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADECD8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADECE4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADECF0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADED00u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADED08u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADED0Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADED14u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADED1Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADED20u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADED30u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADED38u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADED40u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADED70u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADED8Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADED98u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEDA4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEDACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEDB4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEDE0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEDFCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEE0Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEE14u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEE24u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEE2Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEE58u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEE74u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEE84u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEE8Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEE9Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEEC0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEEC4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEED4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEEDCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEEF0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEF00u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEF18u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEF24u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEF30u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEF3Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEF44u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEF50u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEF58u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEF64u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEF70u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEF80u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEF98u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEFA4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEFB0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEFBCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEFC4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEFCCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEFD8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEFE4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEFF0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEFF8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF024u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF040u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF050u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF05Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF090u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF094u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF0A4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF0ACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF0C0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF0FCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF10Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF124u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF138u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF148u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF154u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF160u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF16Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF174u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF184u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF18Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF190u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF19Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF1A8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF1BCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF1C0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF1C4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF1CCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF1D4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF1DCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF1E4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF1ECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF1F4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF1FCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF204u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF20Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF218u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF224u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF238u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF240u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF24Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF260u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF264u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF268u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF270u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF284u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF28Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF294u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF29Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF2A4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF2ACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF2B8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF2CCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF2D0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF2D4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF2DCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF2E4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF2ECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF2F4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF2FCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF304u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF30Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF314u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF31Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF328u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF334u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF348u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF350u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF35Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF370u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF374u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF378u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF380u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF388u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF390u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF398u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF3A0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF3ACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF3C0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF3C4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF3C8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF3D0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF3D8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF3E0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF3E8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF3F0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF3F8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF400u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF408u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF410u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF41Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF428u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF43Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF444u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF450u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF464u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF468u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF46Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF474u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF47Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF484u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF48Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF494u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF4A0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF4B4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF4B8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF4BCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF4C4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF4D0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF4DCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF4E4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF4FCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF508u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF514u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF520u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF528u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF530u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF538u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF544u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF558u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF55Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF560u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF568u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF570u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF578u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF580u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF588u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF590u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF598u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF5A0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF5A8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF5B4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF5C0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF5D4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF5DCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF5E8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF5FCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF600u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF604u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF60Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF614u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF61Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF624u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF62Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF638u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF644u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF658u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF660u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF66Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF680u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF684u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF688u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF690u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF69Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF6A4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF6B0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF6BCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF6C8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF6D0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF6DCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF6E4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF6F0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF6FCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF708u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF724u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF754u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF75Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF768u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF774u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF780u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF788u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF798u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF7E0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF7FCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF814u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF824u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF82Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF840u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF848u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF854u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF890u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF8ACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF8C4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF8D4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF8DCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF8F0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF900u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF91Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF934u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF93Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF948u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF954u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF95Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF968u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF974u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF980u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF98Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF998u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF9ACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF9B4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF9C4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF9CCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF9D4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF9DCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFA58u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFA64u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFAA4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFAACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFAC0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFAC4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFACCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFAD4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFAE0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFAE8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFAF8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFB04u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFB10u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFB18u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFB1Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFB24u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFB30u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFB3Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFB44u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFB4Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFB54u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFB70u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFB7Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFB84u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFB8Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFBA8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFBB0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFBB8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFBD0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFBD8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFBF4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFBFCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFC08u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFC14u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFC40u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFC90u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFC98u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFCA0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFCA8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFCB0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFCC8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFCD4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFCE4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFCECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFCF4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFCFCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFD04u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFD0Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFD14u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFD1Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFD2Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFD34u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFD38u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFD40u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFD48u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFD58u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFD68u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFD98u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFDC0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFDC8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFDD0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFDD8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFDE0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFDFCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE1Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE24u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE34u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE40u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE4Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE54u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE58u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE64u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE94u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFEB0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFEB4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFEE0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFEECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFEFCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFF14u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFF1Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFF24u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFF2Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFF34u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFF50u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFF5Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFF74u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFF7Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFF8Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFF98u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFFA4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFFACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFFB0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFFBCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFFECu, &recomp_unit_0182, "recomp_unit_0182");
}
} // namespace psprecomp
