#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0187[4088] = {
    1, 0, 0, 0, 2, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 7, 0, 0, 8, 0, 0, 9, 0, 0, 0,
    0, 0, 10, 0, 0, 11, 0, 12, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0, 0, 18,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 21, 0, 0, 22, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24,
    0, 0, 0, 25, 0, 0, 26, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 29, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 32, 0, 0, 33, 34, 0, 35, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0, 0, 40,
    0, 0, 41, 42, 0, 0, 43, 0, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47,
    0, 0, 0, 48, 49, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 54, 0, 0, 55,
    0, 56, 0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 60, 0, 61, 0, 0, 0, 0, 62, 0, 63, 64, 0, 0,
    65, 0, 66, 67, 0, 0, 68, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0,
    75, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82,
    0, 0, 83, 84, 0, 85, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 92,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 95, 0, 0, 96, 0, 0, 97, 0, 0,
    98, 0, 0, 99, 0, 0, 100, 0, 101, 0, 102, 0, 0, 103, 0, 0, 0, 104, 0, 105, 0, 106, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0,
    0, 109, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 115, 0, 116, 0, 0, 0, 0, 117, 0,
    118, 0, 0, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 122, 123, 0, 0, 0, 0, 0, 124, 0, 125, 0, 126, 127, 0, 0, 128,
    0, 129, 0, 0, 0, 0, 0, 130, 0, 131, 0, 132, 133, 0, 0, 134, 0, 0, 135, 0, 136, 0, 0, 137, 0, 138, 139, 140, 0, 0, 0, 0,
    0, 141, 0, 142, 0, 0, 0, 143, 0, 0, 144, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 148, 0, 0,
    0, 0, 0, 149, 150, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 154, 155, 0, 156, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158,
    0, 0, 0, 0, 0, 0, 159, 0, 160, 0, 161, 0, 0, 162, 163, 164, 0, 165, 0, 166, 0, 167, 0, 168, 0, 0, 0, 169, 0, 0, 0, 170,
    0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 174, 0, 175, 176, 177, 0, 0, 0, 178, 0,
    179, 0, 0, 0, 180, 0, 181, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0,
    0, 0, 0, 0, 0, 186, 0, 187, 0, 188, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 191, 0, 0, 0, 192, 0, 193, 0, 0, 0, 194, 0,
    0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 199, 0, 200, 0, 0, 0, 201,
    0, 0, 0, 202, 0, 0, 203, 0, 0, 204, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0,
    0, 209, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0, 212, 0, 0, 0, 213, 0, 0, 0, 214, 0, 215, 0, 0, 0, 216, 0, 0, 217,
    0, 218, 0, 219, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0,
    224, 0, 225, 0, 226, 0, 227, 0, 0, 0, 228, 0, 229, 0, 0, 0, 230, 0, 231, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0,
    0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 236, 0, 237, 0, 238, 0, 0, 239, 0, 0, 0, 240, 0, 241, 0, 0, 0,
    0, 242, 0, 0, 243, 0, 244, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0,
    0, 0, 0, 249, 0, 250, 0, 251, 0, 252, 0, 0, 0, 253, 0, 254, 0, 0, 0, 255, 0, 256, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 262, 0, 263, 0, 0, 264, 0, 0, 0, 265,
    0, 0, 266, 0, 267, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0,
    273, 0, 274, 0, 0, 275, 0, 0, 0, 276, 0, 0, 277, 0, 0, 278, 0, 0, 0, 279, 0, 280, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0,
    0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 285, 0, 286, 0, 287, 0, 288, 0, 0, 0, 289, 0, 290, 0,
    0, 0, 291, 0, 292, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 298,
    0, 299, 0, 0, 300, 0, 0, 0, 301, 302, 0, 0, 303, 0, 0, 0, 304, 305, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 310, 0, 311, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 314, 0, 315, 0, 0, 316, 0, 317, 0, 318, 0, 319,
    0, 320, 321, 0, 322, 0, 0, 0, 323, 0, 324, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0,
    329, 0, 330, 0, 0, 0, 331, 0, 0, 0, 332, 333, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 340, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0,
    350, 0, 0, 351, 0, 0, 352, 0, 0, 353, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 358,
    0, 0, 0, 359, 0, 0, 0, 0, 0, 360, 0, 361, 0, 362, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 365, 0, 366, 0, 0, 367, 0, 0,
    0, 368, 369, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 371, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 374, 0, 0, 375, 0, 0, 376, 0,
    0, 377, 0, 0, 0, 378, 0, 0, 379, 0, 380, 0, 381, 0, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 0, 384, 0, 385, 0, 0, 0, 386,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 389, 0, 0, 390, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392,
    0, 0, 0, 393, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 396, 0, 397, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 399, 0, 0, 0, 400, 0, 401, 0, 402, 0, 0, 403, 0, 404, 0, 0, 405, 0, 406, 0, 0, 0, 0, 407, 408, 409, 0, 0, 410,
    0, 0, 411, 0, 412, 0, 0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 415, 0, 0, 0, 0, 416, 0, 417, 0, 0, 0, 0, 418, 0, 0, 0,
    419, 0, 0, 0, 420, 0, 421, 0, 422, 0, 0, 423, 0, 424, 0, 0, 425, 0, 426, 0, 0, 0, 427, 428, 0, 0, 429, 0, 0, 0, 0, 0,
    0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 431, 0, 432, 0, 0, 433, 0, 0, 0, 0, 434, 0, 0, 0, 435, 0, 0, 436, 0, 0, 437,
    0, 438, 0, 0, 0, 0, 439, 0, 0, 0, 0, 440, 0, 0, 0, 0, 441, 0, 0, 442, 0, 443, 0, 0, 444, 0, 445, 0, 0, 446, 0, 447,
    0, 0, 0, 448, 449, 0, 0, 0, 450, 0, 0, 0, 0, 451, 0, 0, 0, 452, 0, 453, 0, 0, 454, 0, 455, 0, 0, 456, 0, 457, 0, 0,
    0, 458, 459, 460, 0, 0, 0, 0, 0, 461, 0, 462, 0, 463, 464, 0, 0, 465, 0, 466, 0, 0, 0, 0, 0, 467, 0, 468, 0, 469, 470, 0,
    0, 471, 0, 0, 0, 0, 0, 0, 472, 0, 473, 0, 474, 0, 475, 476, 477, 0, 0, 0, 0, 0, 478, 0, 479, 0, 0, 0, 480, 0, 0, 481,
    0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 484, 485, 0, 0, 0, 0, 0, 486, 487, 0, 0, 488,
    0, 0, 489, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 491, 492, 0, 0, 0, 0, 0, 493, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 495, 0, 0, 496, 0, 497, 0, 498, 0, 0, 499, 500, 501, 0, 502, 0, 0, 503, 0, 0, 504, 0, 505, 0, 0, 0, 506, 0, 0,
    0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 510, 0, 511, 0, 512, 513, 514, 0, 0, 0,
    515, 0, 516, 0, 0, 0, 517, 0, 518, 0, 0, 0, 519, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 522, 0, 0,
    0, 0, 0, 0, 0, 0, 523, 0, 0, 524, 0, 525, 0, 0, 0, 526, 0, 0, 0, 527, 0, 0, 528, 0, 0, 0, 529, 0, 530, 0, 0, 0,
    531, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 535, 0, 536, 0, 537, 0, 0, 0,
    538, 0, 0, 0, 539, 0, 0, 540, 0, 0, 541, 0, 0, 542, 0, 0, 0, 543, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0,
    0, 546, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 548, 0, 549, 0, 0, 0, 550, 0, 0, 0, 551, 0, 552, 0, 0, 0, 553, 0, 0, 0,
    554, 0, 555, 0, 556, 0, 0, 0, 557, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0,
    0, 561, 0, 562, 0, 563, 0, 564, 0, 0, 0, 565, 0, 566, 0, 0, 0, 567, 0, 568, 0, 0, 0, 569, 0, 0, 0, 570, 0, 0, 0, 0,
    0, 0, 0, 0, 571, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 573, 0, 574, 0, 575, 0, 0, 576, 0, 0, 0, 577, 0, 578, 0, 0, 0,
    0, 579, 0, 580, 0, 581, 0, 0, 0, 582, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 585, 0, 0, 0, 0, 0,
    0, 0, 586, 0, 587, 0, 588, 0, 589, 0, 0, 0, 590, 0, 591, 0, 0, 0, 592, 0, 593, 0, 0, 0, 594, 0, 0, 0, 595, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 596, 0, 0, 597, 0, 0, 0, 0, 0, 0, 0, 0, 598, 0, 599, 0, 600, 0, 0, 601, 0, 0, 0, 602, 0, 0,
    603, 0, 604, 0, 0, 0, 605, 0, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0, 608, 0, 0, 0, 0, 0, 609, 0, 610, 0,
    611, 0, 0, 612, 0, 0, 0, 613, 0, 0, 614, 0, 0, 0, 615, 0, 0, 0, 0, 616, 0, 617, 0, 0, 0, 618, 0, 0, 0, 619, 0, 0,
    0, 0, 0, 0, 0, 0, 620, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 622, 0, 623, 0, 624, 0, 625, 0, 0, 0, 626, 0, 627, 0,
    0, 0, 628, 0, 629, 0, 0, 0, 630, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 633, 0, 0, 0, 0, 0, 634, 0, 635,
    0, 636, 0, 0, 637, 0, 0, 0, 638, 639, 0, 0, 640, 0, 0, 0, 641, 642, 0, 0, 643, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 645, 0, 0, 0, 646, 0, 0, 647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 648, 0, 649, 0,
    0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 651, 0, 0, 0, 652, 653, 0, 654, 0, 0, 655, 0, 0, 0, 656, 0, 0, 0, 0,
    0, 657, 0, 658, 0, 0, 659, 0, 0, 0, 0, 660, 0, 0, 661, 0, 0, 662, 0, 0, 0, 0, 0, 663, 664, 0, 665, 666, 0, 0, 0, 667,
    0, 0, 668, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 669, 0, 670, 0, 671, 0, 672, 0, 0, 673, 0, 674,
    0, 675, 0, 676, 0, 0, 677, 0, 678, 0, 0, 679, 0, 0, 680, 0, 681, 0, 0, 0, 0, 682, 0, 0, 0, 0, 0, 0, 0, 0, 0, 683,
    0, 684, 0, 0, 0, 0, 685, 0, 686, 0, 0, 0, 687, 0, 688, 0, 0, 689, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 690, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 691, 0, 692, 0, 0, 0, 693, 0, 694, 0, 0, 695, 0, 0, 696, 0, 0, 0, 0,
    0, 697, 0, 698, 699, 0, 0, 0, 0, 0, 0, 0, 0, 700, 0, 0, 0, 0, 0, 0, 0, 0, 701, 0, 702, 0, 0, 0, 0, 0, 0, 0,
    0, 703, 0, 704, 0, 0, 0, 0, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0, 706, 0, 707, 0, 0, 0, 0, 0, 0, 0, 0, 708, 0, 0,
    0, 0, 709, 0, 0, 0, 0, 0, 0, 710, 0, 0, 711, 0, 0, 0, 0, 712, 0, 713, 0, 0, 714, 0, 715, 0, 0, 716, 717, 0, 718, 0,
    0, 0, 719, 0, 720, 0, 0, 0, 721, 0, 0, 722, 0, 0, 0, 723, 0, 0, 0, 724, 0, 0, 0, 0, 0, 0, 0, 725, 0, 726, 0, 0,
    727, 0, 728, 0, 0, 0, 729, 0, 730, 0, 731, 0, 732, 0, 733, 0, 734, 0, 735, 0, 736, 0, 0, 0, 737, 0, 0, 0, 0, 0, 738, 0,
    739, 0, 0, 0, 740, 0, 0, 741, 0, 742, 743, 0, 744, 0, 745, 746, 0, 747, 0, 0, 0, 0, 0, 0, 0, 748, 0, 0, 749, 0, 0, 750,
    0, 0, 0, 0, 751, 0, 0, 752, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 753, 0, 754, 0, 0, 0, 0, 0,
    755, 0, 0, 0, 0, 0, 756, 0, 757, 0, 758, 0, 0, 759, 0, 0, 0, 0, 760, 0, 0, 761, 0, 0, 0, 0, 0, 762, 0, 0, 0, 0,
    763, 0, 0, 0, 0, 0, 764, 0, 765, 0, 766, 0, 0, 767, 0, 0, 768, 0, 0, 769, 0, 0, 0, 770, 0, 0, 0, 0, 771, 0, 772, 0,
    0, 0, 0, 0, 0, 0, 0, 773, 0, 0, 0, 0, 774, 0, 0, 0, 0, 775, 0, 0, 0, 0, 0, 776, 0, 777, 0, 778, 0, 0, 0, 0,
    0, 0, 779, 0, 780, 0, 0, 781, 0, 782, 0, 0, 0, 0, 0, 0, 0, 783, 784, 785, 0, 0, 0, 0, 0, 0, 0, 0, 0, 786, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 787, 0, 0, 0, 788, 0, 0, 0, 0, 0, 0, 789, 0,
    790, 0, 791, 0, 0, 0, 0, 792, 0, 0, 0, 0, 793, 0, 0, 794, 0, 795, 0, 796, 0, 797, 798, 0, 0, 799, 0, 800, 801, 0, 0, 0,
    0, 0, 0, 0, 0, 802, 0, 803, 0, 0, 804, 0, 0, 805, 0, 806, 807, 0, 808, 0, 0, 809, 0, 810, 811, 812, 813, 0, 814, 0, 815, 0,
    0, 816, 0, 0, 817, 0, 818, 819, 0, 820, 0, 0, 821, 0, 822, 823, 824, 825, 0, 826, 0, 0, 0, 0, 827, 0, 0, 0, 0, 828, 0, 0,
    0, 0, 0, 829, 0, 0, 830, 0, 831, 0, 0, 0, 0, 0, 0, 0, 832, 0, 0, 0, 833, 0, 0, 0, 0, 0, 0, 0, 0, 834, 0, 0,
    0, 0, 0, 835, 0, 0, 836, 0, 0, 0, 837, 0, 838, 0, 0, 0, 0, 0, 0, 0, 0, 839, 0, 840, 0, 0, 0, 0, 0, 0, 0, 841,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 842, 0, 0, 843, 0, 0, 844, 0, 845, 0, 0, 846, 0, 847, 0, 848, 0, 849, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 850, 851, 0, 0, 0, 0, 0, 852, 853, 0, 854, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 855, 0, 0, 0, 856, 0,
    0, 0, 0, 0, 0, 0, 857, 0, 858, 0, 0, 0, 0, 0, 859, 0, 0, 860, 0, 0, 0, 861, 0, 0, 862, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 863, 0, 0, 0, 0, 0, 864, 0, 0, 0, 0, 0, 865, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 866, 0, 867, 0, 0, 0, 0, 0, 0, 0, 0, 868, 0, 0, 0, 0, 0, 869, 0, 0, 0, 0, 0, 0, 870, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 871, 0, 0, 0, 872, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 873, 0, 0, 0, 0, 0, 874, 0, 875, 0, 0, 876, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 877,
    0, 0, 0, 0, 0, 0, 0, 878, 0, 879, 0, 880, 0, 881, 0, 0, 0, 0, 0, 0, 0, 882, 0, 0, 0, 0, 0, 0, 0, 883, 0, 0,
    0, 0, 884, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 885, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 886, 0, 0, 0, 887,
    0, 0, 0, 0, 0, 0, 0, 888, 0, 0, 0, 0, 0, 889, 0, 0, 0, 0, 890, 0, 0, 891, 0, 0, 0, 0, 892, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 893, 0, 894, 0, 0, 0, 0, 0, 0, 0, 895, 0, 0, 0, 0, 0, 0, 0, 896, 0, 0, 0, 0, 897, 0, 0,
    0, 0, 898, 0, 0, 0, 0, 899, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 900, 0, 0, 0, 0, 0, 901, 0, 0, 0, 0, 0, 0,
    902, 0, 0, 0, 903, 0, 0, 0, 0, 0, 0, 0, 0, 904, 0, 0, 0, 0, 0, 0, 0, 0, 0, 905, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 906, 0, 0, 0, 0, 0, 907, 0, 0, 0, 0, 908, 0, 0, 0, 0, 0, 909, 0, 0, 0, 0, 910, 0, 0, 0, 0, 0, 0, 0,
    911, 0, 0, 0, 0, 0, 912, 0, 0, 0, 0, 913, 0, 0, 0, 0, 0, 914, 0, 0, 0, 0, 915, 0, 0, 0, 0, 0, 916, 0, 0, 0,
    0, 917, 0, 0, 0, 0, 0, 918, 0, 0, 0, 0, 0, 0, 0, 0, 919, 0, 0, 0, 0, 0, 0, 920, 0, 0, 0, 0, 921, 0, 0, 0,
    0, 0, 0, 922, 0, 0, 0, 0, 923, 0, 0, 924, 0, 0, 0, 0, 925, 0, 0, 0, 0, 926, 0, 927, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 928, 0, 0, 0, 0, 0, 0, 0, 929, 0, 0, 0, 0, 930, 0, 0, 0, 0, 931, 0, 0, 0, 0, 932, 0, 0, 0, 0, 933, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 934, 0, 0, 0, 0, 0, 935, 0, 0, 0, 0, 936, 0, 0, 937, 0, 0, 0, 0, 938, 0, 939, 0,
    0, 0, 0, 0, 0, 0, 940, 0, 0, 0, 0, 0, 0, 0, 941, 0, 0, 0, 0, 942, 0, 0, 0, 0, 943, 0, 0, 0, 0, 944, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 945, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 946, 0, 0, 0, 0,
    0, 947, 0, 0, 0, 0, 0, 948, 0, 0, 0, 0, 0, 0, 0, 0, 949, 0, 950, 0, 0, 0, 0, 0, 0, 951, 0, 0, 0, 0, 0, 952,
    0, 0, 0, 0, 0, 0, 953, 0, 0, 0, 0, 0, 0, 0, 0, 954, 0, 0, 0, 955, 0, 0, 0, 0, 956, 0, 0, 0, 0, 0, 0, 0,
    0, 957, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 958, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 959, 0, 0, 0,
    0, 960, 0, 0, 0, 0, 0, 961, 0, 0, 0, 0, 962, 0, 0, 0, 0, 0, 0, 0, 963, 0, 0, 0, 0, 964, 0, 0, 0, 0, 0, 0,
    0, 0, 965, 0, 0, 0, 0, 0, 0, 0, 0, 966, 0, 0, 967, 0, 0, 968, 969, 0, 0, 0, 0, 970,
};
void recomp_unit_0187_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AF0000u;
        entry_id = (entry_delta < 16352u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0187[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AF0000;
    case 2u: goto L_08AF0010;
    case 3u: goto L_08AF0020;
    case 4u: goto L_08AF0028;
    case 5u: goto L_08AF0040;
    case 6u: goto L_08AF004C;
    case 7u: goto L_08AF0058;
    case 8u: goto L_08AF0064;
    case 9u: goto L_08AF0070;
    case 10u: goto L_08AF0088;
    case 11u: goto L_08AF0094;
    case 12u: goto L_08AF009C;
    case 13u: goto L_08AF00A4;
    case 14u: goto L_08AF00B4;
    case 15u: goto L_08AF00C8;
    case 16u: goto L_08AF00E4;
    case 17u: goto L_08AF00EC;
    case 18u: goto L_08AF00FC;
    case 19u: goto L_08AF0128;
    case 20u: goto L_08AF0138;
    case 21u: goto L_08AF0140;
    case 22u: goto L_08AF014C;
    case 23u: goto L_08AF0150;
    case 24u: goto L_08AF017C;
    case 25u: goto L_08AF018C;
    case 26u: goto L_08AF0198;
    case 27u: goto L_08AF01A4;
    case 28u: goto L_08AF01B4;
    case 29u: goto L_08AF01C4;
    case 30u: goto L_08AF01CC;
    case 31u: goto L_08AF01D8;
    case 32u: goto L_08AF0210;
    case 33u: goto L_08AF021C;
    case 34u: goto L_08AF0220;
    case 35u: goto L_08AF0228;
    case 36u: goto L_08AF023C;
    case 37u: goto L_08AF0244;
    case 38u: goto L_08AF0258;
    case 39u: goto L_08AF0260;
    case 40u: goto L_08AF027C;
    case 41u: goto L_08AF0288;
    case 42u: goto L_08AF028C;
    case 43u: goto L_08AF0298;
    case 44u: goto L_08AF02A4;
    case 45u: goto L_08AF02AC;
    case 46u: goto L_08AF02D4;
    case 47u: goto L_08AF02FC;
    case 48u: goto L_08AF030C;
    case 49u: goto L_08AF0310;
    case 50u: goto L_08AF0334;
    case 51u: goto L_08AF033C;
    case 52u: goto L_08AF035C;
    case 53u: goto L_08AF0364;
    case 54u: goto L_08AF0370;
    case 55u: goto L_08AF037C;
    case 56u: goto L_08AF0384;
    case 57u: goto L_08AF0390;
    case 58u: goto L_08AF0398;
    case 59u: goto L_08AF03C4;
    case 60u: goto L_08AF03CC;
    case 61u: goto L_08AF03D4;
    case 62u: goto L_08AF03E8;
    case 63u: goto L_08AF03F0;
    case 64u: goto L_08AF03F4;
    case 65u: goto L_08AF0400;
    case 66u: goto L_08AF0408;
    case 67u: goto L_08AF040C;
    case 68u: goto L_08AF0418;
    case 69u: goto L_08AF0420;
    case 70u: goto L_08AF0428;
    case 71u: goto L_08AF0444;
    case 72u: goto L_08AF0450;
    case 73u: goto L_08AF0460;
    case 74u: goto L_08AF0474;
    case 75u: goto L_08AF0480;
    case 76u: goto L_08AF048C;
    case 77u: goto L_08AF04A4;
    case 78u: goto L_08AF04B0;
    case 79u: goto L_08AF04C8;
    case 80u: goto L_08AF04D0;
    case 81u: goto L_08AF04E8;
    case 82u: goto L_08AF04FC;
    case 83u: goto L_08AF0508;
    case 84u: goto L_08AF050C;
    case 85u: goto L_08AF0514;
    case 86u: goto L_08AF0528;
    case 87u: goto L_08AF0530;
    case 88u: goto L_08AF0544;
    case 89u: goto L_08AF054C;
    case 90u: goto L_08AF0564;
    case 91u: goto L_08AF0570;
    case 92u: goto L_08AF057C;
    case 93u: goto L_08AF05A8;
    case 94u: goto L_08AF05D4;
    case 95u: goto L_08AF05DC;
    case 96u: goto L_08AF05E8;
    case 97u: goto L_08AF05F4;
    case 98u: goto L_08AF0600;
    case 99u: goto L_08AF060C;
    case 100u: goto L_08AF0618;
    case 101u: goto L_08AF0620;
    case 102u: goto L_08AF0628;
    case 103u: goto L_08AF0634;
    case 104u: goto L_08AF0644;
    case 105u: goto L_08AF064C;
    case 106u: goto L_08AF0654;
    case 107u: goto L_08AF0668;
    case 108u: goto L_08AF0670;
    case 109u: goto L_08AF0684;
    case 110u: goto L_08AF068C;
    case 111u: goto L_08AF06A4;
    case 112u: goto L_08AF06B0;
    case 113u: goto L_08AF06C0;
    case 114u: goto L_08AF06D0;
    case 115u: goto L_08AF06DC;
    case 116u: goto L_08AF06E4;
    case 117u: goto L_08AF06F8;
    case 118u: goto L_08AF0700;
    case 119u: goto L_08AF0714;
    case 120u: goto L_08AF071C;
    case 121u: goto L_08AF0734;
    case 122u: goto L_08AF0740;
    case 123u: goto L_08AF0744;
    case 124u: goto L_08AF075C;
    case 125u: goto L_08AF0764;
    case 126u: goto L_08AF076C;
    case 127u: goto L_08AF0770;
    case 128u: goto L_08AF077C;
    case 129u: goto L_08AF0784;
    case 130u: goto L_08AF079C;
    case 131u: goto L_08AF07A4;
    case 132u: goto L_08AF07AC;
    case 133u: goto L_08AF07B0;
    case 134u: goto L_08AF07BC;
    case 135u: goto L_08AF07C8;
    case 136u: goto L_08AF07D0;
    case 137u: goto L_08AF07DC;
    case 138u: goto L_08AF07E4;
    case 139u: goto L_08AF07E8;
    case 140u: goto L_08AF07EC;
    case 141u: goto L_08AF0804;
    case 142u: goto L_08AF080C;
    case 143u: goto L_08AF081C;
    case 144u: goto L_08AF0828;
    case 145u: goto L_08AF0830;
    case 146u: goto L_08AF0860;
    case 147u: goto L_08AF0870;
    case 148u: goto L_08AF0874;
    case 149u: goto L_08AF088C;
    case 150u: goto L_08AF0890;
    case 151u: goto L_08AF089C;
    case 152u: goto L_08AF08A8;
    case 153u: goto L_08AF08BC;
    case 154u: goto L_08AF08C8;
    case 155u: goto L_08AF08CC;
    case 156u: goto L_08AF08D4;
    case 157u: goto L_08AF08DC;
    case 158u: goto L_08AF08FC;
    case 159u: goto L_08AF0918;
    case 160u: goto L_08AF0920;
    case 161u: goto L_08AF0928;
    case 162u: goto L_08AF0934;
    case 163u: goto L_08AF0938;
    case 164u: goto L_08AF093C;
    case 165u: goto L_08AF0944;
    case 166u: goto L_08AF094C;
    case 167u: goto L_08AF0954;
    case 168u: goto L_08AF095C;
    case 169u: goto L_08AF096C;
    case 170u: goto L_08AF097C;
    case 171u: goto L_08AF09A0;
    case 172u: goto L_08AF09B0;
    case 173u: goto L_08AF09D0;
    case 174u: goto L_08AF09D8;
    case 175u: goto L_08AF09E0;
    case 176u: goto L_08AF09E4;
    case 177u: goto L_08AF09E8;
    case 178u: goto L_08AF09F8;
    case 179u: goto L_08AF0A00;
    case 180u: goto L_08AF0A10;
    case 181u: goto L_08AF0A18;
    case 182u: goto L_08AF0A28;
    case 183u: goto L_08AF0A38;
    case 184u: goto L_08AF0A60;
    case 185u: goto L_08AF0A70;
    case 186u: goto L_08AF0A94;
    case 187u: goto L_08AF0A9C;
    case 188u: goto L_08AF0AA4;
    case 189u: goto L_08AF0AB4;
    case 190u: goto L_08AF0AC4;
    case 191u: goto L_08AF0AD0;
    case 192u: goto L_08AF0AE0;
    case 193u: goto L_08AF0AE8;
    case 194u: goto L_08AF0AF8;
    case 195u: goto L_08AF0B08;
    case 196u: goto L_08AF0B2C;
    case 197u: goto L_08AF0B3C;
    case 198u: goto L_08AF0B5C;
    case 199u: goto L_08AF0B64;
    case 200u: goto L_08AF0B6C;
    case 201u: goto L_08AF0B7C;
    case 202u: goto L_08AF0B8C;
    case 203u: goto L_08AF0B98;
    case 204u: goto L_08AF0BA4;
    case 205u: goto L_08AF0BB0;
    case 206u: goto L_08AF0BC0;
    case 207u: goto L_08AF0BD0;
    case 208u: goto L_08AF0BF4;
    case 209u: goto L_08AF0C04;
    case 210u: goto L_08AF0C24;
    case 211u: goto L_08AF0C30;
    case 212u: goto L_08AF0C38;
    case 213u: goto L_08AF0C48;
    case 214u: goto L_08AF0C58;
    case 215u: goto L_08AF0C60;
    case 216u: goto L_08AF0C70;
    case 217u: goto L_08AF0C7C;
    case 218u: goto L_08AF0C84;
    case 219u: goto L_08AF0C8C;
    case 220u: goto L_08AF0C9C;
    case 221u: goto L_08AF0CAC;
    case 222u: goto L_08AF0CD0;
    case 223u: goto L_08AF0CE0;
    case 224u: goto L_08AF0D00;
    case 225u: goto L_08AF0D08;
    case 226u: goto L_08AF0D10;
    case 227u: goto L_08AF0D18;
    case 228u: goto L_08AF0D28;
    case 229u: goto L_08AF0D30;
    case 230u: goto L_08AF0D40;
    case 231u: goto L_08AF0D48;
    case 232u: goto L_08AF0D58;
    case 233u: goto L_08AF0D68;
    case 234u: goto L_08AF0D8C;
    case 235u: goto L_08AF0D9C;
    case 236u: goto L_08AF0DBC;
    case 237u: goto L_08AF0DC4;
    case 238u: goto L_08AF0DCC;
    case 239u: goto L_08AF0DD8;
    case 240u: goto L_08AF0DE8;
    case 241u: goto L_08AF0DF0;
    case 242u: goto L_08AF0E04;
    case 243u: goto L_08AF0E10;
    case 244u: goto L_08AF0E18;
    case 245u: goto L_08AF0E28;
    case 246u: goto L_08AF0E38;
    case 247u: goto L_08AF0E5C;
    case 248u: goto L_08AF0E6C;
    case 249u: goto L_08AF0E8C;
    case 250u: goto L_08AF0E94;
    case 251u: goto L_08AF0E9C;
    case 252u: goto L_08AF0EA4;
    case 253u: goto L_08AF0EB4;
    case 254u: goto L_08AF0EBC;
    case 255u: goto L_08AF0ECC;
    case 256u: goto L_08AF0ED4;
    case 257u: goto L_08AF0EE4;
    case 258u: goto L_08AF0EF4;
    case 259u: goto L_08AF0F1C;
    case 260u: goto L_08AF0F2C;
    case 261u: goto L_08AF0F50;
    case 262u: goto L_08AF0F58;
    case 263u: goto L_08AF0F60;
    case 264u: goto L_08AF0F6C;
    case 265u: goto L_08AF0F7C;
    case 266u: goto L_08AF0F88;
    case 267u: goto L_08AF0F90;
    case 268u: goto L_08AF0FA0;
    case 269u: goto L_08AF0FB0;
    case 270u: goto L_08AF0FD0;
    case 271u: goto L_08AF0FE0;
    case 272u: goto L_08AF0FF8;
    case 273u: goto L_08AF1000;
    case 274u: goto L_08AF1008;
    case 275u: goto L_08AF1014;
    case 276u: goto L_08AF1024;
    case 277u: goto L_08AF1030;
    case 278u: goto L_08AF103C;
    case 279u: goto L_08AF104C;
    case 280u: goto L_08AF1054;
    case 281u: goto L_08AF1064;
    case 282u: goto L_08AF1074;
    case 283u: goto L_08AF1098;
    case 284u: goto L_08AF10A8;
    case 285u: goto L_08AF10C8;
    case 286u: goto L_08AF10D0;
    case 287u: goto L_08AF10D8;
    case 288u: goto L_08AF10E0;
    case 289u: goto L_08AF10F0;
    case 290u: goto L_08AF10F8;
    case 291u: goto L_08AF1108;
    case 292u: goto L_08AF1110;
    case 293u: goto L_08AF1120;
    case 294u: goto L_08AF1130;
    case 295u: goto L_08AF114C;
    case 296u: goto L_08AF115C;
    case 297u: goto L_08AF1174;
    case 298u: goto L_08AF117C;
    case 299u: goto L_08AF1184;
    case 300u: goto L_08AF1190;
    case 301u: goto L_08AF11A0;
    case 302u: goto L_08AF11A4;
    case 303u: goto L_08AF11B0;
    case 304u: goto L_08AF11C0;
    case 305u: goto L_08AF11C4;
    case 306u: goto L_08AF11D0;
    case 307u: goto L_08AF11E4;
    case 308u: goto L_08AF1218;
    case 309u: goto L_08AF1268;
    case 310u: goto L_08AF1270;
    case 311u: goto L_08AF1278;
    case 312u: goto L_08AF12A4;
    case 313u: goto L_08AF12C8;
    case 314u: goto L_08AF12D0;
    case 315u: goto L_08AF12D8;
    case 316u: goto L_08AF12E4;
    case 317u: goto L_08AF12EC;
    case 318u: goto L_08AF12F4;
    case 319u: goto L_08AF12FC;
    case 320u: goto L_08AF1304;
    case 321u: goto L_08AF1308;
    case 322u: goto L_08AF1310;
    case 323u: goto L_08AF1320;
    case 324u: goto L_08AF1328;
    case 325u: goto L_08AF1330;
    case 326u: goto L_08AF1354;
    case 327u: goto L_08AF1360;
    case 328u: goto L_08AF1370;
    case 329u: goto L_08AF1380;
    case 330u: goto L_08AF1388;
    case 331u: goto L_08AF1398;
    case 332u: goto L_08AF13A8;
    case 333u: goto L_08AF13AC;
    case 334u: goto L_08AF13C0;
    case 335u: goto L_08AF13E8;
    case 336u: goto L_08AF1420;
    case 337u: goto L_08AF1430;
    case 338u: goto L_08AF1440;
    case 339u: goto L_08AF145C;
    case 340u: goto L_08AF1490;
    case 341u: goto L_08AF1494;
    case 342u: goto L_08AF14C0;
    case 343u: goto L_08AF14D0;
    case 344u: goto L_08AF14DC;
    case 345u: goto L_08AF14EC;
    case 346u: goto L_08AF1518;
    case 347u: goto L_08AF1544;
    case 348u: goto L_08AF15D4;
    case 349u: goto L_08AF15E4;
    case 350u: goto L_08AF1600;
    case 351u: goto L_08AF160C;
    case 352u: goto L_08AF1618;
    case 353u: goto L_08AF1624;
    case 354u: goto L_08AF1630;
    case 355u: goto L_08AF1640;
    case 356u: goto L_08AF1650;
    case 357u: goto L_08AF1660;
    case 358u: goto L_08AF167C;
    case 359u: goto L_08AF168C;
    case 360u: goto L_08AF16A4;
    case 361u: goto L_08AF16AC;
    case 362u: goto L_08AF16B4;
    case 363u: goto L_08AF16C4;
    case 364u: goto L_08AF16D4;
    case 365u: goto L_08AF16E0;
    case 366u: goto L_08AF16E8;
    case 367u: goto L_08AF16F4;
    case 368u: goto L_08AF1704;
    case 369u: goto L_08AF1708;
    case 370u: goto L_08AF1724;
    case 371u: goto L_08AF1734;
    case 372u: goto L_08AF173C;
    case 373u: goto L_08AF1754;
    case 374u: goto L_08AF1760;
    case 375u: goto L_08AF176C;
    case 376u: goto L_08AF1778;
    case 377u: goto L_08AF1784;
    case 378u: goto L_08AF1794;
    case 379u: goto L_08AF17A0;
    case 380u: goto L_08AF17A8;
    case 381u: goto L_08AF17B0;
    case 382u: goto L_08AF17C0;
    case 383u: goto L_08AF17D0;
    case 384u: goto L_08AF17E4;
    case 385u: goto L_08AF17EC;
    case 386u: goto L_08AF17FC;
    case 387u: goto L_08AF1828;
    case 388u: goto L_08AF1838;
    case 389u: goto L_08AF1840;
    case 390u: goto L_08AF184C;
    case 391u: goto L_08AF1850;
    case 392u: goto L_08AF187C;
    case 393u: goto L_08AF188C;
    case 394u: goto L_08AF1898;
    case 395u: goto L_08AF18A8;
    case 396u: goto L_08AF18B8;
    case 397u: goto L_08AF18C0;
    case 398u: goto L_08AF18CC;
    case 399u: goto L_08AF190C;
    case 400u: goto L_08AF191C;
    case 401u: goto L_08AF1924;
    case 402u: goto L_08AF192C;
    case 403u: goto L_08AF1938;
    case 404u: goto L_08AF1940;
    case 405u: goto L_08AF194C;
    case 406u: goto L_08AF1954;
    case 407u: goto L_08AF1968;
    case 408u: goto L_08AF196C;
    case 409u: goto L_08AF1970;
    case 410u: goto L_08AF197C;
    case 411u: goto L_08AF1988;
    case 412u: goto L_08AF1990;
    case 413u: goto L_08AF19A0;
    case 414u: goto L_08AF19B4;
    case 415u: goto L_08AF19C0;
    case 416u: goto L_08AF19D4;
    case 417u: goto L_08AF19DC;
    case 418u: goto L_08AF19F0;
    case 419u: goto L_08AF1A00;
    case 420u: goto L_08AF1A10;
    case 421u: goto L_08AF1A18;
    case 422u: goto L_08AF1A20;
    case 423u: goto L_08AF1A2C;
    case 424u: goto L_08AF1A34;
    case 425u: goto L_08AF1A40;
    case 426u: goto L_08AF1A48;
    case 427u: goto L_08AF1A58;
    case 428u: goto L_08AF1A5C;
    case 429u: goto L_08AF1A68;
    case 430u: goto L_08AF1A8C;
    case 431u: goto L_08AF1AAC;
    case 432u: goto L_08AF1AB4;
    case 433u: goto L_08AF1AC0;
    case 434u: goto L_08AF1AD4;
    case 435u: goto L_08AF1AE4;
    case 436u: goto L_08AF1AF0;
    case 437u: goto L_08AF1AFC;
    case 438u: goto L_08AF1B04;
    case 439u: goto L_08AF1B18;
    case 440u: goto L_08AF1B2C;
    case 441u: goto L_08AF1B40;
    case 442u: goto L_08AF1B4C;
    case 443u: goto L_08AF1B54;
    case 444u: goto L_08AF1B60;
    case 445u: goto L_08AF1B68;
    case 446u: goto L_08AF1B74;
    case 447u: goto L_08AF1B7C;
    case 448u: goto L_08AF1B8C;
    case 449u: goto L_08AF1B90;
    case 450u: goto L_08AF1BA0;
    case 451u: goto L_08AF1BB4;
    case 452u: goto L_08AF1BC4;
    case 453u: goto L_08AF1BCC;
    case 454u: goto L_08AF1BD8;
    case 455u: goto L_08AF1BE0;
    case 456u: goto L_08AF1BEC;
    case 457u: goto L_08AF1BF4;
    case 458u: goto L_08AF1C04;
    case 459u: goto L_08AF1C08;
    case 460u: goto L_08AF1C0C;
    case 461u: goto L_08AF1C24;
    case 462u: goto L_08AF1C2C;
    case 463u: goto L_08AF1C34;
    case 464u: goto L_08AF1C38;
    case 465u: goto L_08AF1C44;
    case 466u: goto L_08AF1C4C;
    case 467u: goto L_08AF1C64;
    case 468u: goto L_08AF1C6C;
    case 469u: goto L_08AF1C74;
    case 470u: goto L_08AF1C78;
    case 471u: goto L_08AF1C84;
    case 472u: goto L_08AF1CA0;
    case 473u: goto L_08AF1CA8;
    case 474u: goto L_08AF1CB0;
    case 475u: goto L_08AF1CB8;
    case 476u: goto L_08AF1CBC;
    case 477u: goto L_08AF1CC0;
    case 478u: goto L_08AF1CD8;
    case 479u: goto L_08AF1CE0;
    case 480u: goto L_08AF1CF0;
    case 481u: goto L_08AF1CFC;
    case 482u: goto L_08AF1D0C;
    case 483u: goto L_08AF1D3C;
    case 484u: goto L_08AF1D50;
    case 485u: goto L_08AF1D54;
    case 486u: goto L_08AF1D6C;
    case 487u: goto L_08AF1D70;
    case 488u: goto L_08AF1D7C;
    case 489u: goto L_08AF1D88;
    case 490u: goto L_08AF1D9C;
    case 491u: goto L_08AF1DB8;
    case 492u: goto L_08AF1DBC;
    case 493u: goto L_08AF1DD4;
    case 494u: goto L_08AF1DDC;
    case 495u: goto L_08AF1E0C;
    case 496u: goto L_08AF1E18;
    case 497u: goto L_08AF1E20;
    case 498u: goto L_08AF1E28;
    case 499u: goto L_08AF1E34;
    case 500u: goto L_08AF1E38;
    case 501u: goto L_08AF1E3C;
    case 502u: goto L_08AF1E44;
    case 503u: goto L_08AF1E50;
    case 504u: goto L_08AF1E5C;
    case 505u: goto L_08AF1E64;
    case 506u: goto L_08AF1E74;
    case 507u: goto L_08AF1E84;
    case 508u: goto L_08AF1EA8;
    case 509u: goto L_08AF1EB8;
    case 510u: goto L_08AF1ED8;
    case 511u: goto L_08AF1EE0;
    case 512u: goto L_08AF1EE8;
    case 513u: goto L_08AF1EEC;
    case 514u: goto L_08AF1EF0;
    case 515u: goto L_08AF1F00;
    case 516u: goto L_08AF1F08;
    case 517u: goto L_08AF1F18;
    case 518u: goto L_08AF1F20;
    case 519u: goto L_08AF1F30;
    case 520u: goto L_08AF1F40;
    case 521u: goto L_08AF1F68;
    case 522u: goto L_08AF1F74;
    case 523u: goto L_08AF1F98;
    case 524u: goto L_08AF1FA4;
    case 525u: goto L_08AF1FAC;
    case 526u: goto L_08AF1FBC;
    case 527u: goto L_08AF1FCC;
    case 528u: goto L_08AF1FD8;
    case 529u: goto L_08AF1FE8;
    case 530u: goto L_08AF1FF0;
    case 531u: goto L_08AF2000;
    case 532u: goto L_08AF2010;
    case 533u: goto L_08AF2034;
    case 534u: goto L_08AF2040;
    case 535u: goto L_08AF2060;
    case 536u: goto L_08AF2068;
    case 537u: goto L_08AF2070;
    case 538u: goto L_08AF2080;
    case 539u: goto L_08AF2090;
    case 540u: goto L_08AF209C;
    case 541u: goto L_08AF20A8;
    case 542u: goto L_08AF20B4;
    case 543u: goto L_08AF20C4;
    case 544u: goto L_08AF20D4;
    case 545u: goto L_08AF20F8;
    case 546u: goto L_08AF2104;
    case 547u: goto L_08AF2124;
    case 548u: goto L_08AF2130;
    case 549u: goto L_08AF2138;
    case 550u: goto L_08AF2148;
    case 551u: goto L_08AF2158;
    case 552u: goto L_08AF2160;
    case 553u: goto L_08AF2170;
    case 554u: goto L_08AF2180;
    case 555u: goto L_08AF2188;
    case 556u: goto L_08AF2190;
    case 557u: goto L_08AF21A0;
    case 558u: goto L_08AF21B0;
    case 559u: goto L_08AF21D4;
    case 560u: goto L_08AF21E4;
    case 561u: goto L_08AF2204;
    case 562u: goto L_08AF220C;
    case 563u: goto L_08AF2214;
    case 564u: goto L_08AF221C;
    case 565u: goto L_08AF222C;
    case 566u: goto L_08AF2234;
    case 567u: goto L_08AF2244;
    case 568u: goto L_08AF224C;
    case 569u: goto L_08AF225C;
    case 570u: goto L_08AF226C;
    case 571u: goto L_08AF2290;
    case 572u: goto L_08AF229C;
    case 573u: goto L_08AF22BC;
    case 574u: goto L_08AF22C4;
    case 575u: goto L_08AF22CC;
    case 576u: goto L_08AF22D8;
    case 577u: goto L_08AF22E8;
    case 578u: goto L_08AF22F0;
    case 579u: goto L_08AF2304;
    case 580u: goto L_08AF230C;
    case 581u: goto L_08AF2314;
    case 582u: goto L_08AF2324;
    case 583u: goto L_08AF2334;
    case 584u: goto L_08AF2358;
    case 585u: goto L_08AF2368;
    case 586u: goto L_08AF2388;
    case 587u: goto L_08AF2390;
    case 588u: goto L_08AF2398;
    case 589u: goto L_08AF23A0;
    case 590u: goto L_08AF23B0;
    case 591u: goto L_08AF23B8;
    case 592u: goto L_08AF23C8;
    case 593u: goto L_08AF23D0;
    case 594u: goto L_08AF23E0;
    case 595u: goto L_08AF23F0;
    case 596u: goto L_08AF2418;
    case 597u: goto L_08AF2424;
    case 598u: goto L_08AF2448;
    case 599u: goto L_08AF2450;
    case 600u: goto L_08AF2458;
    case 601u: goto L_08AF2464;
    case 602u: goto L_08AF2474;
    case 603u: goto L_08AF2480;
    case 604u: goto L_08AF2488;
    case 605u: goto L_08AF2498;
    case 606u: goto L_08AF24A8;
    case 607u: goto L_08AF24C8;
    case 608u: goto L_08AF24D8;
    case 609u: goto L_08AF24F0;
    case 610u: goto L_08AF24F8;
    case 611u: goto L_08AF2500;
    case 612u: goto L_08AF250C;
    case 613u: goto L_08AF251C;
    case 614u: goto L_08AF2528;
    case 615u: goto L_08AF2538;
    case 616u: goto L_08AF254C;
    case 617u: goto L_08AF2554;
    case 618u: goto L_08AF2564;
    case 619u: goto L_08AF2574;
    case 620u: goto L_08AF2598;
    case 621u: goto L_08AF25A8;
    case 622u: goto L_08AF25C8;
    case 623u: goto L_08AF25D0;
    case 624u: goto L_08AF25D8;
    case 625u: goto L_08AF25E0;
    case 626u: goto L_08AF25F0;
    case 627u: goto L_08AF25F8;
    case 628u: goto L_08AF2608;
    case 629u: goto L_08AF2610;
    case 630u: goto L_08AF2620;
    case 631u: goto L_08AF2630;
    case 632u: goto L_08AF264C;
    case 633u: goto L_08AF265C;
    case 634u: goto L_08AF2674;
    case 635u: goto L_08AF267C;
    case 636u: goto L_08AF2684;
    case 637u: goto L_08AF2690;
    case 638u: goto L_08AF26A0;
    case 639u: goto L_08AF26A4;
    case 640u: goto L_08AF26B0;
    case 641u: goto L_08AF26C0;
    case 642u: goto L_08AF26C4;
    case 643u: goto L_08AF26D0;
    case 644u: goto L_08AF26E4;
    case 645u: goto L_08AF2718;
    case 646u: goto L_08AF2728;
    case 647u: goto L_08AF2734;
    case 648u: goto L_08AF2770;
    case 649u: goto L_08AF2778;
    case 650u: goto L_08AF2794;
    case 651u: goto L_08AF27B4;
    case 652u: goto L_08AF27C4;
    case 653u: goto L_08AF27C8;
    case 654u: goto L_08AF27D0;
    case 655u: goto L_08AF27DC;
    case 656u: goto L_08AF27EC;
    case 657u: goto L_08AF2804;
    case 658u: goto L_08AF280C;
    case 659u: goto L_08AF2818;
    case 660u: goto L_08AF282C;
    case 661u: goto L_08AF2838;
    case 662u: goto L_08AF2844;
    case 663u: goto L_08AF285C;
    case 664u: goto L_08AF2860;
    case 665u: goto L_08AF2868;
    case 666u: goto L_08AF286C;
    case 667u: goto L_08AF287C;
    case 668u: goto L_08AF2888;
    case 669u: goto L_08AF28D0;
    case 670u: goto L_08AF28D8;
    case 671u: goto L_08AF28E0;
    case 672u: goto L_08AF28E8;
    case 673u: goto L_08AF28F4;
    case 674u: goto L_08AF28FC;
    case 675u: goto L_08AF2904;
    case 676u: goto L_08AF290C;
    case 677u: goto L_08AF2918;
    case 678u: goto L_08AF2920;
    case 679u: goto L_08AF292C;
    case 680u: goto L_08AF2938;
    case 681u: goto L_08AF2940;
    case 682u: goto L_08AF2954;
    case 683u: goto L_08AF297C;
    case 684u: goto L_08AF2984;
    case 685u: goto L_08AF2998;
    case 686u: goto L_08AF29A0;
    case 687u: goto L_08AF29B0;
    case 688u: goto L_08AF29B8;
    case 689u: goto L_08AF29C4;
    case 690u: goto L_08AF29F0;
    case 691u: goto L_08AF2A34;
    case 692u: goto L_08AF2A3C;
    case 693u: goto L_08AF2A4C;
    case 694u: goto L_08AF2A54;
    case 695u: goto L_08AF2A60;
    case 696u: goto L_08AF2A6C;
    case 697u: goto L_08AF2A84;
    case 698u: goto L_08AF2A8C;
    case 699u: goto L_08AF2A90;
    case 700u: goto L_08AF2AB4;
    case 701u: goto L_08AF2AD8;
    case 702u: goto L_08AF2AE0;
    case 703u: goto L_08AF2B04;
    case 704u: goto L_08AF2B0C;
    case 705u: goto L_08AF2B30;
    case 706u: goto L_08AF2B48;
    case 707u: goto L_08AF2B50;
    case 708u: goto L_08AF2B74;
    case 709u: goto L_08AF2B88;
    case 710u: goto L_08AF2BA4;
    case 711u: goto L_08AF2BB0;
    case 712u: goto L_08AF2BC4;
    case 713u: goto L_08AF2BCC;
    case 714u: goto L_08AF2BD8;
    case 715u: goto L_08AF2BE0;
    case 716u: goto L_08AF2BEC;
    case 717u: goto L_08AF2BF0;
    case 718u: goto L_08AF2BF8;
    case 719u: goto L_08AF2C08;
    case 720u: goto L_08AF2C10;
    case 721u: goto L_08AF2C20;
    case 722u: goto L_08AF2C2C;
    case 723u: goto L_08AF2C3C;
    case 724u: goto L_08AF2C4C;
    case 725u: goto L_08AF2C6C;
    case 726u: goto L_08AF2C74;
    case 727u: goto L_08AF2C80;
    case 728u: goto L_08AF2C88;
    case 729u: goto L_08AF2C98;
    case 730u: goto L_08AF2CA0;
    case 731u: goto L_08AF2CA8;
    case 732u: goto L_08AF2CB0;
    case 733u: goto L_08AF2CB8;
    case 734u: goto L_08AF2CC0;
    case 735u: goto L_08AF2CC8;
    case 736u: goto L_08AF2CD0;
    case 737u: goto L_08AF2CE0;
    case 738u: goto L_08AF2CF8;
    case 739u: goto L_08AF2D00;
    case 740u: goto L_08AF2D10;
    case 741u: goto L_08AF2D1C;
    case 742u: goto L_08AF2D24;
    case 743u: goto L_08AF2D28;
    case 744u: goto L_08AF2D30;
    case 745u: goto L_08AF2D38;
    case 746u: goto L_08AF2D3C;
    case 747u: goto L_08AF2D44;
    case 748u: goto L_08AF2D64;
    case 749u: goto L_08AF2D70;
    case 750u: goto L_08AF2D7C;
    case 751u: goto L_08AF2D90;
    case 752u: goto L_08AF2D9C;
    case 753u: goto L_08AF2DE0;
    case 754u: goto L_08AF2DE8;
    case 755u: goto L_08AF2E00;
    case 756u: goto L_08AF2E18;
    case 757u: goto L_08AF2E20;
    case 758u: goto L_08AF2E28;
    case 759u: goto L_08AF2E34;
    case 760u: goto L_08AF2E48;
    case 761u: goto L_08AF2E54;
    case 762u: goto L_08AF2E6C;
    case 763u: goto L_08AF2E80;
    case 764u: goto L_08AF2E98;
    case 765u: goto L_08AF2EA0;
    case 766u: goto L_08AF2EA8;
    case 767u: goto L_08AF2EB4;
    case 768u: goto L_08AF2EC0;
    case 769u: goto L_08AF2ECC;
    case 770u: goto L_08AF2EDC;
    case 771u: goto L_08AF2EF0;
    case 772u: goto L_08AF2EF8;
    case 773u: goto L_08AF2F1C;
    case 774u: goto L_08AF2F30;
    case 775u: goto L_08AF2F44;
    case 776u: goto L_08AF2F5C;
    case 777u: goto L_08AF2F64;
    case 778u: goto L_08AF2F6C;
    case 779u: goto L_08AF2F88;
    case 780u: goto L_08AF2F90;
    case 781u: goto L_08AF2F9C;
    case 782u: goto L_08AF2FA4;
    case 783u: goto L_08AF2FC4;
    case 784u: goto L_08AF2FC8;
    case 785u: goto L_08AF2FCC;
    case 786u: goto L_08AF2FF4;
    case 787u: goto L_08AF304C;
    case 788u: goto L_08AF305C;
    case 789u: goto L_08AF3078;
    case 790u: goto L_08AF3080;
    case 791u: goto L_08AF3088;
    case 792u: goto L_08AF309C;
    case 793u: goto L_08AF30B0;
    case 794u: goto L_08AF30BC;
    case 795u: goto L_08AF30C4;
    case 796u: goto L_08AF30CC;
    case 797u: goto L_08AF30D4;
    case 798u: goto L_08AF30D8;
    case 799u: goto L_08AF30E4;
    case 800u: goto L_08AF30EC;
    case 801u: goto L_08AF30F0;
    case 802u: goto L_08AF3114;
    case 803u: goto L_08AF311C;
    case 804u: goto L_08AF3128;
    case 805u: goto L_08AF3134;
    case 806u: goto L_08AF313C;
    case 807u: goto L_08AF3140;
    case 808u: goto L_08AF3148;
    case 809u: goto L_08AF3154;
    case 810u: goto L_08AF315C;
    case 811u: goto L_08AF3160;
    case 812u: goto L_08AF3164;
    case 813u: goto L_08AF3168;
    case 814u: goto L_08AF3170;
    case 815u: goto L_08AF3178;
    case 816u: goto L_08AF3184;
    case 817u: goto L_08AF3190;
    case 818u: goto L_08AF3198;
    case 819u: goto L_08AF319C;
    case 820u: goto L_08AF31A4;
    case 821u: goto L_08AF31B0;
    case 822u: goto L_08AF31B8;
    case 823u: goto L_08AF31BC;
    case 824u: goto L_08AF31C0;
    case 825u: goto L_08AF31C4;
    case 826u: goto L_08AF31CC;
    case 827u: goto L_08AF31E0;
    case 828u: goto L_08AF31F4;
    case 829u: goto L_08AF320C;
    case 830u: goto L_08AF3218;
    case 831u: goto L_08AF3220;
    case 832u: goto L_08AF3240;
    case 833u: goto L_08AF3250;
    case 834u: goto L_08AF3274;
    case 835u: goto L_08AF328C;
    case 836u: goto L_08AF3298;
    case 837u: goto L_08AF32A8;
    case 838u: goto L_08AF32B0;
    case 839u: goto L_08AF32D4;
    case 840u: goto L_08AF32DC;
    case 841u: goto L_08AF32FC;
    case 842u: goto L_08AF3324;
    case 843u: goto L_08AF3330;
    case 844u: goto L_08AF333C;
    case 845u: goto L_08AF3344;
    case 846u: goto L_08AF3350;
    case 847u: goto L_08AF3358;
    case 848u: goto L_08AF3360;
    case 849u: goto L_08AF3368;
    case 850u: goto L_08AF3390;
    case 851u: goto L_08AF3394;
    case 852u: goto L_08AF33AC;
    case 853u: goto L_08AF33B0;
    case 854u: goto L_08AF33B8;
    case 855u: goto L_08AF33E8;
    case 856u: goto L_08AF33F8;
    case 857u: goto L_08AF3418;
    case 858u: goto L_08AF3420;
    case 859u: goto L_08AF3438;
    case 860u: goto L_08AF3444;
    case 861u: goto L_08AF3454;
    case 862u: goto L_08AF3460;
    case 863u: goto L_08AF34B4;
    case 864u: goto L_08AF34CC;
    case 865u: goto L_08AF34E4;
    case 866u: goto L_08AF3514;
    case 867u: goto L_08AF351C;
    case 868u: goto L_08AF3540;
    case 869u: goto L_08AF3558;
    case 870u: goto L_08AF3574;
    case 871u: goto L_08AF35A4;
    case 872u: goto L_08AF35B4;
    case 873u: goto L_08AF3620;
    case 874u: goto L_08AF3638;
    case 875u: goto L_08AF3640;
    case 876u: goto L_08AF364C;
    case 877u: goto L_08AF367C;
    case 878u: goto L_08AF369C;
    case 879u: goto L_08AF36A4;
    case 880u: goto L_08AF36AC;
    case 881u: goto L_08AF36B4;
    case 882u: goto L_08AF36D4;
    case 883u: goto L_08AF36F4;
    case 884u: goto L_08AF3708;
    case 885u: goto L_08AF3738;
    case 886u: goto L_08AF376C;
    case 887u: goto L_08AF377C;
    case 888u: goto L_08AF379C;
    case 889u: goto L_08AF37B4;
    case 890u: goto L_08AF37C8;
    case 891u: goto L_08AF37D4;
    case 892u: goto L_08AF37E8;
    case 893u: goto L_08AF3818;
    case 894u: goto L_08AF3820;
    case 895u: goto L_08AF3840;
    case 896u: goto L_08AF3860;
    case 897u: goto L_08AF3874;
    case 898u: goto L_08AF3888;
    case 899u: goto L_08AF389C;
    case 900u: goto L_08AF38CC;
    case 901u: goto L_08AF38E4;
    case 902u: goto L_08AF3900;
    case 903u: goto L_08AF3910;
    case 904u: goto L_08AF3934;
    case 905u: goto L_08AF395C;
    case 906u: goto L_08AF3988;
    case 907u: goto L_08AF39A0;
    case 908u: goto L_08AF39B4;
    case 909u: goto L_08AF39CC;
    case 910u: goto L_08AF39E0;
    case 911u: goto L_08AF3A00;
    case 912u: goto L_08AF3A18;
    case 913u: goto L_08AF3A2C;
    case 914u: goto L_08AF3A44;
    case 915u: goto L_08AF3A58;
    case 916u: goto L_08AF3A70;
    case 917u: goto L_08AF3A84;
    case 918u: goto L_08AF3A9C;
    case 919u: goto L_08AF3AC0;
    case 920u: goto L_08AF3ADC;
    case 921u: goto L_08AF3AF0;
    case 922u: goto L_08AF3B0C;
    case 923u: goto L_08AF3B20;
    case 924u: goto L_08AF3B2C;
    case 925u: goto L_08AF3B40;
    case 926u: goto L_08AF3B54;
    case 927u: goto L_08AF3B5C;
    case 928u: goto L_08AF3B84;
    case 929u: goto L_08AF3BA4;
    case 930u: goto L_08AF3BB8;
    case 931u: goto L_08AF3BCC;
    case 932u: goto L_08AF3BE0;
    case 933u: goto L_08AF3BF4;
    case 934u: goto L_08AF3C24;
    case 935u: goto L_08AF3C3C;
    case 936u: goto L_08AF3C50;
    case 937u: goto L_08AF3C5C;
    case 938u: goto L_08AF3C70;
    case 939u: goto L_08AF3C78;
    case 940u: goto L_08AF3C98;
    case 941u: goto L_08AF3CB8;
    case 942u: goto L_08AF3CCC;
    case 943u: goto L_08AF3CE0;
    case 944u: goto L_08AF3CF4;
    case 945u: goto L_08AF3D24;
    case 946u: goto L_08AF3D6C;
    case 947u: goto L_08AF3D84;
    case 948u: goto L_08AF3D9C;
    case 949u: goto L_08AF3DC0;
    case 950u: goto L_08AF3DC8;
    case 951u: goto L_08AF3DE4;
    case 952u: goto L_08AF3DFC;
    case 953u: goto L_08AF3E18;
    case 954u: goto L_08AF3E3C;
    case 955u: goto L_08AF3E4C;
    case 956u: goto L_08AF3E60;
    case 957u: goto L_08AF3E84;
    case 958u: goto L_08AF3EBC;
    case 959u: goto L_08AF3EF0;
    case 960u: goto L_08AF3F04;
    case 961u: goto L_08AF3F1C;
    case 962u: goto L_08AF3F30;
    case 963u: goto L_08AF3F50;
    case 964u: goto L_08AF3F64;
    case 965u: goto L_08AF3F88;
    case 966u: goto L_08AF3FAC;
    case 967u: goto L_08AF3FB8;
    case 968u: goto L_08AF3FC4;
    case 969u: goto L_08AF3FC8;
    case 970u: goto L_08AF3FDC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AF0000:
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[30] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08AF0010;
L_08AF0010:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-32));
    ctx.gpr[9] = (ctx.gpr[7] < static_cast<std::uint32_t>(89) ? 1u : 0u);
    goto L_08AF0020;
L_08AF0020:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF08D4;
      }
      goto L_08AF0028;
    }
L_08AF0028:
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[7]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-2736)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF0040:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF0010;
      }
      goto L_08AF004C;
    }
L_08AF004C:
    ctx.gpr[4] = (0u | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AF0010;
      }
      goto L_08AF0058;
    }
L_08AF0058:
    ctx.gpr[20] = (ctx.gpr[20] | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF0010;
      }
      goto L_08AF0064;
    }
L_08AF0064:
    ctx.gpr[20] = (ctx.gpr[20] | 512u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF0010;
      }
      goto L_08AF0070;
    }
L_08AF0070:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[30]) >= 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF0010;
      }
      goto L_08AF0088;
    }
L_08AF0088:
    ctx.gpr[30] = (0u - ctx.gpr[30]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[20] | 4u);
      if (branch_taken) {
          goto L_08AF009C;
      }
      goto L_08AF0094;
    }
L_08AF0094:
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[20] | 4u);
    goto L_08AF009C;
L_08AF009C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF0010;
      }
      goto L_08AF00A4;
    }
L_08AF00A4:
    ctx.gpr[4] = (0u | 43u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF0010;
      }
      goto L_08AF00B4;
    }
L_08AF00B4:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AF00EC;
      }
      goto L_08AF00C8;
    }
L_08AF00C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    if (static_cast<std::int32_t>(ctx.gpr[5]) < 0) {
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
        goto L_08AF00E4;
    }
    goto L_08AF00E4;
L_08AF00E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF0010;
      }
      goto L_08AF00EC;
    }
L_08AF00EC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF0128;
      }
      goto L_08AF00FC;
    }
L_08AF00FC:
    ctx.gpr[4] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AF00FC;
      }
      goto L_08AF0128;
    }
L_08AF0128:
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-32));
    ctx.gpr[9] = (ctx.gpr[7] < static_cast<std::uint32_t>(89) ? 1u : 0u);
    if (static_cast<std::int32_t>(ctx.gpr[5]) < 0) {
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
        goto L_08AF0138;
    }
    goto L_08AF0138;
L_08AF0138:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF0020;
      }
      goto L_08AF0140;
    }
L_08AF0140:
    ctx.gpr[20] = (ctx.gpr[20] | 128u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF0010;
      }
      goto L_08AF014C;
    }
L_08AF014C:
    ctx.gpr[5] = (0u | 0u);
    goto L_08AF0150;
L_08AF0150:
    ctx.gpr[4] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AF0150;
      }
      goto L_08AF017C;
    }
L_08AF017C:
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-32));
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[7] < static_cast<std::uint32_t>(89) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF0020;
      }
      goto L_08AF018C;
    }
L_08AF018C:
    ctx.gpr[20] = (ctx.gpr[20] | 8u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF0010;
      }
      goto L_08AF0198;
    }
L_08AF0198:
    ctx.gpr[20] = (ctx.gpr[20] | 64u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF0010;
      }
      goto L_08AF01A4;
    }
L_08AF01A4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (0u | 108u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF01C4;
      }
      goto L_08AF01B4;
    }
L_08AF01B4:
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] | 32u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF0010;
      }
      goto L_08AF01C4;
    }
L_08AF01C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] | 16u);
      if (branch_taken) {
          goto L_08AF0010;
      }
      goto L_08AF01CC;
    }
L_08AF01CC:
    ctx.gpr[20] = (ctx.gpr[20] | 32u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF0010;
      }
      goto L_08AF01D8;
    }
L_08AF01D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[20] & 132u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[20] & 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AF08FC;
      }
      goto L_08AF0210;
    }
L_08AF0210:
    ctx.gpr[20] = (ctx.gpr[20] | 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[20] & 32u);
      if (branch_taken) {
          goto L_08AF0220;
      }
      goto L_08AF021C;
    }
L_08AF021C:
    ctx.gpr[5] = (ctx.gpr[20] & 32u);
    goto L_08AF0220;
L_08AF0220:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 16u);
      if (branch_taken) {
          goto L_08AF023C;
      }
      goto L_08AF0228;
    }
L_08AF0228:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF028C;
      }
      goto L_08AF023C;
    }
L_08AF023C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 64u);
      if (branch_taken) {
          goto L_08AF0258;
      }
      goto L_08AF0244;
    }
L_08AF0244:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF0288;
      }
      goto L_08AF0258;
    }
L_08AF0258:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
        goto L_08AF027C;
    }
    goto L_08AF0260;
L_08AF0260:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
      if (branch_taken) {
          goto L_08AF0288;
      }
      goto L_08AF027C;
    }
L_08AF027C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    goto L_08AF0288;
L_08AF0288:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    goto L_08AF028C;
L_08AF028C:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[31] = (0u | 1u);
      if (branch_taken) {
          goto L_08AF02A4;
      }
      goto L_08AF0298;
    }
L_08AF0298:
    ctx.gpr[4] = (0u | 45u);
    ctx.gpr[5] = (0u - ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AF02A4;
L_08AF02A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[5] | ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AF0770;
      }
      goto L_08AF02AC;
    }
L_08AF02AC:
    ctx.gpr[4] = (ctx.gpr[20] & 1u);
    ctx.gpr[5] = (ctx.gpr[20] & 132u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[20] & 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[5]);
    ctx.gpr[21] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), ctx.gpr[6]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[19] == ctx.gpr[4]) {
    ctx.gpr[19] = (0u | 6u);
        goto L_08AF02D4;
    }
    goto L_08AF02D4;
L_08AF02D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[5] = (ctx.gpr[4] & 7u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 103u);
    if (ctx.gpr[16] == ctx.gpr[4]) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[7]);
        goto L_08AF0310;
    }
    goto L_08AF02FC;
L_08AF02FC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[7]);
    ctx.gpr[4] = (0u | 71u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AF040C;
      }
      goto L_08AF030C;
    }
L_08AF030C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[7]);
    goto L_08AF0310;
L_08AF0310:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), ctx.gpr[6]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22868)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22872)));
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08AF0334u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 514u, 0x08AF6790u>(ctx, &aot_mem) && ctx.pc == 0x08AF0334u) goto L_08AF0334;
    return;
L_08AF0334:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AF0390;
      }
      goto L_08AF033C;
    }
L_08AF033C:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22868)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22872)));
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AF035Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 514u, 0x08AF6790u>(ctx, &aot_mem) && ctx.pc == 0x08AF035Cu) goto L_08AF035C;
    return;
L_08AF035C:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
        goto L_08AF037C;
    }
    goto L_08AF0364;
L_08AF0364:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    ctx.gpr[31] = (0x08AF0370u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 546u, 0x08AF699Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF0370u) goto L_08AF0370;
    return;
L_08AF0370:
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    goto L_08AF037C;
L_08AF037C:
    ctx.gpr[31] = (0x08AF0384u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_08AF3D24;
L_08AF0384:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AF0398;
      }
      goto L_08AF0390;
    }
L_08AF0390:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22860)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22864)));
    goto L_08AF0398;
L_08AF0398:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), ctx.gpr[6]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22788)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22792)));
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[21] = (0u | 102u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08AF03C4u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 514u, 0x08AF6790u>(ctx, &aot_mem) && ctx.pc == 0x08AF03C4u) goto L_08AF03C4;
    return;
L_08AF03C4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[5] = (0u | 69u);
      if (branch_taken) {
          goto L_08AF03F4;
      }
      goto L_08AF03CC;
    }
L_08AF03CC:
    ctx.gpr[31] = (0x08AF03D4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 518u, 0x08AF67ECu>(ctx, &aot_mem) && ctx.pc == 0x08AF03D4u) goto L_08AF03D4;
    return;
L_08AF03D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(420)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF03E8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 514u, 0x08AF6790u>(ctx, &aot_mem) && ctx.pc == 0x08AF03E8u) goto L_08AF03E8;
    return;
L_08AF03E8:
    if (static_cast<std::int32_t>(ctx.gpr[2]) < 0) {
    ctx.gpr[16] = (ctx.gpr[21] | 0u);
        goto L_08AF0408;
    }
    goto L_08AF03F0;
L_08AF03F0:
    ctx.gpr[5] = (0u | 69u);
    goto L_08AF03F4;
L_08AF03F4:
    ctx.gpr[4] = (0u | 103u);
    if (ctx.gpr[16] == ctx.gpr[4]) {
    ctx.gpr[5] = (0u | 101u);
        goto L_08AF0400;
    }
    goto L_08AF0400;
L_08AF0400:
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[21] | 0u);
    goto L_08AF0408;
L_08AF0408:
    ctx.gpr[21] = (0u | 1u);
    goto L_08AF040C;
L_08AF040C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (ctx.gpr[16] << 24u);
      if (branch_taken) {
          goto L_08AF0428;
      }
      goto L_08AF0418;
    }
L_08AF0418:
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[19] = (0u | 1u);
        goto L_08AF0420;
    }
    goto L_08AF0420;
L_08AF0420:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[16] << 24u);
    goto L_08AF0428;
L_08AF0428:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 24u));
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08AF0444u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 929u, 0x08AEF480u>(ctx, &aot_mem) && ctx.pc == 0x08AF0444u) goto L_08AF0444;
    return;
L_08AF0444:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AF0450u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08AF0450u) goto L_08AF0450;
    return;
L_08AF0450:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[20] & 512u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AF08FC;
      }
      goto L_08AF0460;
    }
L_08AF0460:
    ctx.gpr[6] = (ctx.gpr[21] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x08AF0474u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    goto L_08AF1218;
L_08AF0474:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AF08FC;
      }
      goto L_08AF0480;
    }
L_08AF0480:
    ctx.gpr[4] = (ctx.gpr[20] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
      if (branch_taken) {
          goto L_08AF04A4;
      }
      goto L_08AF048C;
    }
L_08AF048C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 1066u, 0x08AEFEBCu>(ctx, &aot_mem); return;
      }
      goto L_08AF04A4;
    }
L_08AF04A4:
    ctx.gpr[4] = (ctx.gpr[20] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 64u);
      if (branch_taken) {
          goto L_08AF04C8;
      }
      goto L_08AF04B0;
    }
L_08AF04B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 1066u, 0x08AEFEBCu>(ctx, &aot_mem); return;
      }
      goto L_08AF04C8;
    }
L_08AF04C8:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
        goto L_08AF04E8;
    }
    goto L_08AF04D0;
L_08AF04D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 1066u, 0x08AEFEBCu>(ctx, &aot_mem); return;
      }
      goto L_08AF04E8;
    }
L_08AF04E8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 1066u, 0x08AEFEBCu>(ctx, &aot_mem); return;
      }
      goto L_08AF04FC;
    }
L_08AF04FC:
    ctx.gpr[20] = (ctx.gpr[20] | 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[20] & 32u);
      if (branch_taken) {
          goto L_08AF050C;
      }
      goto L_08AF0508;
    }
L_08AF0508:
    ctx.gpr[5] = (ctx.gpr[20] & 32u);
    goto L_08AF050C;
L_08AF050C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 16u);
      if (branch_taken) {
          goto L_08AF0528;
      }
      goto L_08AF0514;
    }
L_08AF0514:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF0570;
      }
      goto L_08AF0528;
    }
L_08AF0528:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 64u);
      if (branch_taken) {
          goto L_08AF0544;
      }
      goto L_08AF0530;
    }
L_08AF0530:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF0570;
      }
      goto L_08AF0544;
    }
L_08AF0544:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
        goto L_08AF0564;
    }
    goto L_08AF054C;
L_08AF054C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
      if (branch_taken) {
          goto L_08AF0570;
      }
      goto L_08AF0564;
    }
L_08AF0564:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    goto L_08AF0570;
L_08AF0570:
    ctx.gpr[31] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[5] | ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AF076C;
      }
      goto L_08AF057C;
    }
L_08AF057C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    ctx.gpr[31] = (0u | 2u);
    ctx.gpr[20] = (ctx.gpr[20] | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[6]);
    ctx.gpr[16] = (0u | 120u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[5] | ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AF076C;
      }
      goto L_08AF05A8;
    }
L_08AF05A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[5] = (ctx.gpr[20] & 132u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[20] & 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    if (ctx.gpr[21] == 0u) {
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(404)));
        goto L_08AF05D4;
    }
    goto L_08AF05D4;
L_08AF05D4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08AF0618;
      }
      goto L_08AF05DC;
    }
L_08AF05DC:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AF05E8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 366u, 0x08AED45Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF05E8u) goto L_08AF05E8;
    return;
L_08AF05E8:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[21]);
      if (branch_taken) {
          goto L_08AF060C;
      }
      goto L_08AF05F4;
    }
L_08AF05F4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AF0628;
      }
      goto L_08AF0600;
    }
L_08AF0600:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08AF0628;
      }
      goto L_08AF060C;
    }
L_08AF060C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08AF0628;
      }
      goto L_08AF0618;
    }
L_08AF0618:
    ctx.gpr[31] = (0x08AF0620u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08AF0620u) goto L_08AF0620;
    return;
L_08AF0620:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    goto L_08AF0628;
L_08AF0628:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[22]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AF08FC;
      }
      goto L_08AF0634;
    }
L_08AF0634:
    ctx.gpr[20] = (ctx.gpr[20] | 16u);
    ctx.gpr[5] = (ctx.gpr[20] & 32u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
      if (branch_taken) {
          goto L_08AF064C;
      }
      goto L_08AF0644;
    }
L_08AF0644:
    ctx.gpr[5] = (ctx.gpr[20] & 32u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
    goto L_08AF064C;
L_08AF064C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 16u);
      if (branch_taken) {
          goto L_08AF0668;
      }
      goto L_08AF0654;
    }
L_08AF0654:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF06B0;
      }
      goto L_08AF0668;
    }
L_08AF0668:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 64u);
      if (branch_taken) {
          goto L_08AF0684;
      }
      goto L_08AF0670;
    }
L_08AF0670:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF06B0;
      }
      goto L_08AF0684;
    }
L_08AF0684:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
        goto L_08AF06A4;
    }
    goto L_08AF068C;
L_08AF068C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
      if (branch_taken) {
          goto L_08AF06B0;
      }
      goto L_08AF06A4;
    }
L_08AF06A4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    goto L_08AF06B0;
L_08AF06B0:
    ctx.gpr[31] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[22]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[5] | ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AF076C;
      }
      goto L_08AF06C0;
    }
L_08AF06C0:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(400)));
    ctx.gpr[5] = (ctx.gpr[20] & 32u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[20] & 1u);
      if (branch_taken) {
          goto L_08AF06DC;
      }
      goto L_08AF06D0;
    }
L_08AF06D0:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (ctx.gpr[20] & 32u);
    ctx.gpr[7] = (ctx.gpr[20] & 1u);
    goto L_08AF06DC;
L_08AF06DC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 16u);
      if (branch_taken) {
          goto L_08AF06F8;
      }
      goto L_08AF06E4;
    }
L_08AF06E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF0744;
      }
      goto L_08AF06F8;
    }
L_08AF06F8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 64u);
      if (branch_taken) {
          goto L_08AF0714;
      }
      goto L_08AF0700;
    }
L_08AF0700:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF0740;
      }
      goto L_08AF0714;
    }
L_08AF0714:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
        goto L_08AF0734;
    }
    goto L_08AF071C;
L_08AF071C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
      if (branch_taken) {
          goto L_08AF0740;
      }
      goto L_08AF0734;
    }
L_08AF0734:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    goto L_08AF0740;
L_08AF0740:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    goto L_08AF0744;
L_08AF0744:
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[22]);
    ctx.gpr[31] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (ctx.gpr[5] | ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AF076C;
      }
      goto L_08AF075C;
    }
L_08AF075C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[22]);
      if (branch_taken) {
          goto L_08AF076C;
      }
      goto L_08AF0764;
    }
L_08AF0764:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[22]);
    ctx.gpr[20] = (ctx.gpr[20] | 2u);
    goto L_08AF076C;
L_08AF076C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    goto L_08AF0770;
L_08AF0770:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AF0784;
      }
      goto L_08AF077C;
    }
L_08AF077C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[20] = (ctx.gpr[20] & ctx.gpr[4]);
    goto L_08AF0784;
L_08AF0784:
    ctx.gpr[4] = (ctx.gpr[20] & 132u);
    ctx.gpr[6] = (ctx.gpr[20] & 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(388));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AF088C;
      }
      goto L_08AF079C;
    }
L_08AF079C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[31]) > 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[31]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF07C8;
      }
      goto L_08AF07A4;
    }
L_08AF07A4:
    if (static_cast<std::int32_t>(ctx.gpr[31]) >= 0) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[22]);
        goto L_08AF07E8;
    }
    goto L_08AF07AC;
L_08AF07AC:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
    goto L_08AF07B0;
L_08AF07B0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[22]);
    ctx.gpr[31] = (0x08AF07BCu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08AF07BCu) goto L_08AF07BC;
    return;
L_08AF07BC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AF08FC;
      }
      goto L_08AF07C8;
    }
L_08AF07C8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(10) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF0828;
      }
      goto L_08AF07D0;
    }
L_08AF07D0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[31]) < 3 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
        goto L_08AF07B0;
    }
    goto L_08AF07DC;
L_08AF07DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 15u);
      if (branch_taken) {
          goto L_08AF0874;
      }
      goto L_08AF07E4;
    }
L_08AF07E4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[22]);
    goto L_08AF07E8;
L_08AF07E8:
    ctx.gpr[6] = (ctx.gpr[20] & 1u);
    goto L_08AF07EC;
L_08AF07EC:
    ctx.gpr[4] = (ctx.gpr[5] & 7u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] >> 3u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AF07EC;
      }
      goto L_08AF0804;
    }
L_08AF0804:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
      if (branch_taken) {
          goto L_08AF088C;
      }
      goto L_08AF080C;
    }
L_08AF080C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (0u | 48u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[22]);
        goto L_08AF0890;
    }
    goto L_08AF081C;
L_08AF081C:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AF088C;
      }
      goto L_08AF0828;
    }
L_08AF0828:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (0u | 10u);
      if (branch_taken) {
          goto L_08AF0860;
      }
      goto L_08AF0830;
    }
L_08AF0830:
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF0830;
      }
      goto L_08AF0860;
    }
L_08AF0860:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AF088C;
      }
      goto L_08AF0870;
    }
L_08AF0870:
    ctx.gpr[4] = (ctx.gpr[5] & 15u);
    goto L_08AF0874;
L_08AF0874:
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] >> 4u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AF0870;
      }
      goto L_08AF088C;
    }
L_08AF088C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[22]);
    goto L_08AF0890;
L_08AF0890:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[31] != ctx.gpr[4];
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(388));
      if (branch_taken) {
          goto L_08AF08C8;
      }
      goto L_08AF089C;
    }
L_08AF089C:
    ctx.gpr[4] = (ctx.gpr[20] & 512u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[21]);
      if (branch_taken) {
          goto L_08AF08CC;
      }
      goto L_08AF08A8;
    }
L_08AF08A8:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x08AF08BCu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    goto L_08AF1218;
L_08AF08BC:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AF08FC;
      }
      goto L_08AF08C8;
    }
L_08AF08C8:
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[21]);
    goto L_08AF08CC;
L_08AF08CC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AF08FC;
      }
      goto L_08AF08D4;
    }
L_08AF08D4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_08AF11C0;
      }
      goto L_08AF08DC;
    }
L_08AF08DC:
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[20] & 132u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[20] & 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), ctx.gpr[5]);
    goto L_08AF08FC;
L_08AF08FC:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
        goto L_08AF0918;
    }
    goto L_08AF0918;
L_08AF0918:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[22] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08AF0928;
      }
      goto L_08AF0920;
    }
L_08AF0920:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF0938;
      }
      goto L_08AF0928;
    }
L_08AF0928:
    ctx.gpr[4] = (ctx.gpr[20] & 2u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
        goto L_08AF093C;
    }
    goto L_08AF0934;
L_08AF0934:
    ctx.gpr[22] = (ctx.gpr[9] + static_cast<std::uint32_t>(2));
    goto L_08AF0938;
L_08AF0938:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    goto L_08AF093C;
L_08AF093C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[30] - ctx.gpr[22]);
      if (branch_taken) {
          goto L_08AF0AD0;
      }
      goto L_08AF0944;
    }
L_08AF0944:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 17 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF0AD0;
      }
      goto L_08AF094C;
    }
L_08AF094C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
      if (branch_taken) {
          goto L_08AF0A10;
      }
      goto L_08AF0954;
    }
L_08AF0954:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF09D0;
    }
    goto L_08AF095C;
L_08AF095C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF09A0;
      }
      goto L_08AF096C;
    }
L_08AF096C:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AF097Cu);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AF097Cu) goto L_08AF097C;
    return;
L_08AF097C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF0A00;
      }
      goto L_08AF09A0;
    }
L_08AF09A0:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AF09B0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AF09B0u) goto L_08AF09B0;
    return;
L_08AF09B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF0A00;
      }
      goto L_08AF09D0;
    }
L_08AF09D0:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF09E8;
    }
    goto L_08AF09D8;
L_08AF09D8:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AF09E4;
      }
      goto L_08AF09E0;
    }
L_08AF09E0:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08AF09E4;
L_08AF09E4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    goto L_08AF09E8;
L_08AF09E8:
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[31] = (0x08AF09F8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 1036u, 0x08AEFBE0u>(ctx, &aot_mem) && ctx.pc == 0x08AF09F8u) goto L_08AF09F8;
    return;
L_08AF09F8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08AF0A00;
L_08AF0A00:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF0954;
      }
      goto L_08AF0A10;
    }
L_08AF0A10:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF0A94;
    }
    goto L_08AF0A18;
L_08AF0A18:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF0A60;
      }
      goto L_08AF0A28;
    }
L_08AF0A28:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AF0A38u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AF0A38u) goto L_08AF0A38;
    return;
L_08AF0A38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[19]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
      if (branch_taken) {
          goto L_08AF0AD0;
      }
      goto L_08AF0A60;
    }
L_08AF0A60:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AF0A70u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AF0A70u) goto L_08AF0A70;
    return;
L_08AF0A70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
      if (branch_taken) {
          goto L_08AF0AD0;
      }
      goto L_08AF0A94;
    }
L_08AF0A94:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF0AB4;
      }
      goto L_08AF0A9C;
    }
L_08AF0A9C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF0AB4;
      }
      goto L_08AF0AA4;
    }
L_08AF0AA4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08AF0AB4;
L_08AF0AB4:
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AF0AC4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 1036u, 0x08AEFBE0u>(ctx, &aot_mem) && ctx.pc == 0x08AF0AC4u) goto L_08AF0AC4;
    return;
L_08AF0AC4:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08AF0AD0;
L_08AF0AD0:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(388));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08AF0B98;
      }
      goto L_08AF0AE0;
    }
L_08AF0AE0:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF0B5C;
    }
    goto L_08AF0AE8;
L_08AF0AE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF0B2C;
      }
      goto L_08AF0AF8;
    }
L_08AF0AF8:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08AF0B08u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AF0B08u) goto L_08AF0B08;
    return;
L_08AF0B08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF0C60;
      }
      goto L_08AF0B2C;
    }
L_08AF0B2C:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AF0B3Cu);
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AF0B3Cu) goto L_08AF0B3C;
    return;
L_08AF0B3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF0C60;
      }
      goto L_08AF0B5C;
    }
L_08AF0B5C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF0B7C;
      }
      goto L_08AF0B64;
    }
L_08AF0B64:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF0B7C;
      }
      goto L_08AF0B6C;
    }
L_08AF0B6C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08AF0B7C;
L_08AF0B7C:
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08AF0B8Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 1036u, 0x08AEFBE0u>(ctx, &aot_mem) && ctx.pc == 0x08AF0B8Cu) goto L_08AF0B8C;
    return;
L_08AF0B8C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF0C60;
      }
      goto L_08AF0B98;
    }
L_08AF0B98:
    ctx.gpr[4] = (ctx.gpr[20] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 48u);
      if (branch_taken) {
          goto L_08AF0C60;
      }
      goto L_08AF0BA4;
    }
L_08AF0BA4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(388), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(389), static_cast<std::uint8_t>(ctx.gpr[16]));
      if (branch_taken) {
          goto L_08AF0C24;
      }
      goto L_08AF0BB0;
    }
L_08AF0BB0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF0BF4;
      }
      goto L_08AF0BC0;
    }
L_08AF0BC0:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08AF0BD0u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AF0BD0u) goto L_08AF0BD0;
    return;
L_08AF0BD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF0C60;
      }
      goto L_08AF0BF4;
    }
L_08AF0BF4:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AF0C04u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AF0C04u) goto L_08AF0C04;
    return;
L_08AF0C04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF0C60;
      }
      goto L_08AF0C24;
    }
L_08AF0C24:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF0C48;
      }
      goto L_08AF0C30;
    }
L_08AF0C30:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF0C48;
      }
      goto L_08AF0C38;
    }
L_08AF0C38:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08AF0C48;
L_08AF0C48:
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08AF0C58u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 1036u, 0x08AEFBE0u>(ctx, &aot_mem) && ctx.pc == 0x08AF0C58u) goto L_08AF0C58;
    return;
L_08AF0C58:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08AF0C60;
L_08AF0C60:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    ctx.gpr[4] = (0u | 128u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08AF0DF0;
      }
      goto L_08AF0C70;
    }
L_08AF0C70:
    ctx.gpr[16] = (ctx.gpr[30] - ctx.gpr[22]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF0DF0;
      }
      goto L_08AF0C7C;
    }
L_08AF0C7C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
      if (branch_taken) {
          goto L_08AF0D40;
      }
      goto L_08AF0C84;
    }
L_08AF0C84:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF0D00;
    }
    goto L_08AF0C8C;
L_08AF0C8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF0CD0;
      }
      goto L_08AF0C9C;
    }
L_08AF0C9C:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AF0CACu);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AF0CACu) goto L_08AF0CAC;
    return;
L_08AF0CAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF0D30;
      }
      goto L_08AF0CD0;
    }
L_08AF0CD0:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AF0CE0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AF0CE0u) goto L_08AF0CE0;
    return;
L_08AF0CE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF0D30;
      }
      goto L_08AF0D00;
    }
L_08AF0D00:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF0D18;
    }
    goto L_08AF0D08;
L_08AF0D08:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF0D18;
    }
    goto L_08AF0D10;
L_08AF0D10:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    goto L_08AF0D18;
L_08AF0D18:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[31] = (0x08AF0D28u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 1036u, 0x08AEFBE0u>(ctx, &aot_mem) && ctx.pc == 0x08AF0D28u) goto L_08AF0D28;
    return;
L_08AF0D28:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08AF0D30;
L_08AF0D30:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF0C84;
      }
      goto L_08AF0D40;
    }
L_08AF0D40:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF0DBC;
    }
    goto L_08AF0D48;
L_08AF0D48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF0D8C;
      }
      goto L_08AF0D58;
    }
L_08AF0D58:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AF0D68u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AF0D68u) goto L_08AF0D68;
    return;
L_08AF0D68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF0DF0;
      }
      goto L_08AF0D8C;
    }
L_08AF0D8C:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AF0D9Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AF0D9Cu) goto L_08AF0D9C;
    return;
L_08AF0D9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF0DF0;
      }
      goto L_08AF0DBC;
    }
L_08AF0DBC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF0DD8;
      }
      goto L_08AF0DC4;
    }
L_08AF0DC4:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF0DD8;
      }
      goto L_08AF0DCC;
    }
L_08AF0DCC:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08AF0DD8;
L_08AF0DD8:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AF0DE8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 1036u, 0x08AEFBE0u>(ctx, &aot_mem) && ctx.pc == 0x08AF0DE8u) goto L_08AF0DE8;
    return;
L_08AF0DE8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08AF0DF0;
L_08AF0DF0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (ctx.gpr[16] - ctx.gpr[7]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
      if (branch_taken) {
          goto L_08AF0F88;
      }
      goto L_08AF0E04;
    }
L_08AF0E04:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF0ECC;
      }
      goto L_08AF0E10;
    }
L_08AF0E10:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF0E8C;
    }
    goto L_08AF0E18;
L_08AF0E18:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF0E5C;
      }
      goto L_08AF0E28;
    }
L_08AF0E28:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AF0E38u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AF0E38u) goto L_08AF0E38;
    return;
L_08AF0E38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF0EBC;
      }
      goto L_08AF0E5C;
    }
L_08AF0E5C:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AF0E6Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AF0E6Cu) goto L_08AF0E6C;
    return;
L_08AF0E6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF0EBC;
      }
      goto L_08AF0E8C;
    }
L_08AF0E8C:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF0EA4;
    }
    goto L_08AF0E94;
L_08AF0E94:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF0EA4;
    }
    goto L_08AF0E9C;
L_08AF0E9C:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    goto L_08AF0EA4;
L_08AF0EA4:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[31] = (0x08AF0EB4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 1036u, 0x08AEFBE0u>(ctx, &aot_mem) && ctx.pc == 0x08AF0EB4u) goto L_08AF0EB4;
    return;
L_08AF0EB4:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08AF0EBC;
L_08AF0EBC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF0E10;
      }
      goto L_08AF0ECC;
    }
L_08AF0ECC:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF0F50;
    }
    goto L_08AF0ED4;
L_08AF0ED4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF0F1C;
      }
      goto L_08AF0EE4;
    }
L_08AF0EE4:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AF0EF4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AF0EF4u) goto L_08AF0EF4;
    return;
L_08AF0EF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[16]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AF0F88;
      }
      goto L_08AF0F1C;
    }
L_08AF0F1C:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AF0F2Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AF0F2Cu) goto L_08AF0F2C;
    return;
L_08AF0F2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AF0F88;
      }
      goto L_08AF0F50;
    }
L_08AF0F50:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08AF0F6C;
      }
      goto L_08AF0F58;
    }
L_08AF0F58:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08AF0F6C;
      }
      goto L_08AF0F60;
    }
L_08AF0F60:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    goto L_08AF0F6C;
L_08AF0F6C:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AF0F7Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 1036u, 0x08AEFBE0u>(ctx, &aot_mem) && ctx.pc == 0x08AF0F7Cu) goto L_08AF0F7C;
    return;
L_08AF0F7C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08AF0F88;
L_08AF0F88:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF0FF8;
    }
    goto L_08AF0F90;
L_08AF0F90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF0FD0;
      }
      goto L_08AF0FA0;
    }
L_08AF0FA0:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AF0FB0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AF0FB0u) goto L_08AF0FB0;
    return;
L_08AF0FB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF1024;
      }
      goto L_08AF0FD0;
    }
L_08AF0FD0:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AF0FE0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AF0FE0u) goto L_08AF0FE0;
    return;
L_08AF0FE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF1024;
      }
      goto L_08AF0FF8;
    }
L_08AF0FF8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF1014;
      }
      goto L_08AF1000;
    }
L_08AF1000:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF1014;
      }
      goto L_08AF1008;
    }
L_08AF1008:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08AF1014;
L_08AF1014:
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AF1024u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 1036u, 0x08AEFBE0u>(ctx, &aot_mem) && ctx.pc == 0x08AF1024u) goto L_08AF1024;
    return;
L_08AF1024:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(460)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08AF11A4;
      }
      goto L_08AF1030;
    }
L_08AF1030:
    ctx.gpr[16] = (ctx.gpr[30] - ctx.gpr[22]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08AF11A4;
      }
      goto L_08AF103C;
    }
L_08AF103C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF1108;
      }
      goto L_08AF104C;
    }
L_08AF104C:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF10C8;
    }
    goto L_08AF1054;
L_08AF1054:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF1098;
      }
      goto L_08AF1064;
    }
L_08AF1064:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AF1074u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AF1074u) goto L_08AF1074;
    return;
L_08AF1074:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF10F8;
      }
      goto L_08AF1098;
    }
L_08AF1098:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AF10A8u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AF10A8u) goto L_08AF10A8;
    return;
L_08AF10A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF10F8;
      }
      goto L_08AF10C8;
    }
L_08AF10C8:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF10E0;
    }
    goto L_08AF10D0;
L_08AF10D0:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF10E0;
    }
    goto L_08AF10D8;
L_08AF10D8:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    goto L_08AF10E0;
L_08AF10E0:
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[31] = (0x08AF10F0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 1036u, 0x08AEFBE0u>(ctx, &aot_mem) && ctx.pc == 0x08AF10F0u) goto L_08AF10F0;
    return;
L_08AF10F0:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08AF10F8;
L_08AF10F8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF104C;
      }
      goto L_08AF1108;
    }
L_08AF1108:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF1174;
    }
    goto L_08AF1110;
L_08AF1110:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF114C;
      }
      goto L_08AF1120;
    }
L_08AF1120:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AF1130u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AF1130u) goto L_08AF1130;
    return;
L_08AF1130:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF11A0;
      }
      goto L_08AF114C;
    }
L_08AF114C:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AF115Cu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AF115Cu) goto L_08AF115C;
    return;
L_08AF115C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF11A0;
      }
      goto L_08AF1174;
    }
L_08AF1174:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF1190;
      }
      goto L_08AF117C;
    }
L_08AF117C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF1190;
      }
      goto L_08AF1184;
    }
L_08AF1184:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08AF1190;
L_08AF1190:
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AF11A0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 1036u, 0x08AEFBE0u>(ctx, &aot_mem) && ctx.pc == 0x08AF11A0u) goto L_08AF11A0;
    return;
L_08AF11A0:
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    goto L_08AF11A4;
L_08AF11A4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
        goto L_08AF11B0;
    }
    goto L_08AF11B0;
L_08AF11B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), ctx.gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 1066u, 0x08AEFEBCu>(ctx, &aot_mem); return;
      }
      goto L_08AF11C0;
    }
L_08AF11C0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    goto L_08AF11C4;
L_08AF11C4:
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF11E4;
      }
      goto L_08AF11D0;
    }
L_08AF11D0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AF11E4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 1036u, 0x08AEFBE0u>(ctx, &aot_mem) && ctx.pc == 0x08AF11E4u) goto L_08AF11E4;
    return;
L_08AF11E4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(476)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(488)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(492)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(496)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(504)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(508)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF1218:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[30]);
    ctx.gpr[30] = (ctx.gpr[29] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(15));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-16));
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] & ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[29] = (ctx.gpr[29] - ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF12A4;
      }
      goto L_08AF1268;
    }
L_08AF1268:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF12A4;
      }
      goto L_08AF1270;
    }
L_08AF1270:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF12A4;
      }
      goto L_08AF1278;
    }
L_08AF1278:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[13] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[11] = (0u | 2u);
    ctx.gpr[2] = (0u | 101u);
    ctx.gpr[3] = (0u | 69u);
    ctx.gpr[12] = (0u | 46u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[14] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[6] < ctx.gpr[13] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF12C8;
      }
      goto L_08AF12A4;
    }
L_08AF12A4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[29] = (ctx.gpr[30] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF12C8:
    if (ctx.gpr[10] != 0u) {
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(16), ctx.gpr[9]);
        goto L_08AF1310;
    }
    goto L_08AF12D0;
L_08AF12D0:
    if (ctx.gpr[9] == ctx.gpr[11]) {
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(16), ctx.gpr[9]);
        goto L_08AF1310;
    }
    goto L_08AF12D8;
L_08AF12D8:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[10] == ctx.gpr[2]) {
    ctx.gpr[9] = (ctx.gpr[11] | 0u);
        goto L_08AF1304;
    }
    goto L_08AF12E4;
L_08AF12E4:
    if (ctx.gpr[10] == ctx.gpr[3]) {
    ctx.gpr[9] = (ctx.gpr[11] | 0u);
        goto L_08AF1304;
    }
    goto L_08AF12EC;
L_08AF12EC:
    if (ctx.gpr[10] != ctx.gpr[12]) {
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(1));
        goto L_08AF1308;
    }
    goto L_08AF12F4;
L_08AF12F4:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[14] = (ctx.gpr[13] | 0u);
      if (branch_taken) {
          goto L_08AF1304;
      }
      goto L_08AF12FC;
    }
L_08AF12FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (0u | 1u);
      if (branch_taken) {
          goto L_08AF1304;
      }
      goto L_08AF1304;
    }
L_08AF1304:
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(1));
    goto L_08AF1308;
L_08AF1308:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[6] < ctx.gpr[13] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF12C8;
      }
      goto L_08AF1310;
    }
L_08AF1310:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(20), ctx.gpr[14]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[11];
    ctx.gpr[10] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF1330;
      }
      goto L_08AF1320;
    }
L_08AF1320:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08AF1354;
      }
      goto L_08AF1328;
    }
L_08AF1328:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10));
      if (branch_taken) {
          goto L_08AF13AC;
      }
      goto L_08AF1330;
    }
L_08AF1330:
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
    ctx.gpr[29] = (ctx.gpr[30] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF1354:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(20)));
    ctx.gpr[11] = (0u | 3u);
    ctx.gpr[2] = (0u | 44u);
    goto L_08AF1360;
L_08AF1360:
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[10] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AF1398;
      }
      goto L_08AF1370;
    }
L_08AF1370:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[8]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[11]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[9] = (ctx.hi);
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
        goto L_08AF1398;
    }
    goto L_08AF1380;
L_08AF1380:
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
        goto L_08AF1398;
    }
    goto L_08AF1388;
L_08AF1388:
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08AF1398;
L_08AF1398:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[3] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08AF1360;
      }
      goto L_08AF13A8;
    }
L_08AF13A8:
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10));
    goto L_08AF13AC;
L_08AF13AC:
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08AF13C0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AF13C0u) goto L_08AF13C0;
    return;
L_08AF13C0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[29] = (ctx.gpr[30] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF13E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AF1440;
      }
      goto L_08AF1420;
    }
L_08AF1420:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (2232u << 16u);
      if (branch_taken) {
          goto L_08AF14EC;
      }
      goto L_08AF1430;
    }
L_08AF1430:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-6272));
    ctx.gpr[20] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AF1490;
      }
      goto L_08AF1440;
    }
L_08AF1440:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6272));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-22784)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AF145Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 541u, 0x08AEA568u>(ctx, &aot_mem) && ctx.pc == 0x08AF145Cu) goto L_08AF145C;
    return;
L_08AF145C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-22784), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-22780), ctx.gpr[17]);
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
L_08AF1490:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[19]);
    goto L_08AF1494;
L_08AF1494:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-22780)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-22780)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-22784)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-22780), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 128 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(-22784), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF14DC;
      }
      goto L_08AF14C0;
    }
L_08AF14C0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AF14D0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 541u, 0x08AEA568u>(ctx, &aot_mem) && ctx.pc == 0x08AF14D0u) goto L_08AF14D0;
    return;
L_08AF14D0:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-22780), ctx.gpr[22]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(-22784), 0u);
      if (branch_taken) {
          goto L_08AF1518;
      }
      goto L_08AF14DC;
    }
L_08AF14DC:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AF1494;
      }
      goto L_08AF14EC;
    }
L_08AF14EC:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
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
L_08AF1518:
    ctx.gpr[2] = (0u | 0u);
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
L_08AF1544:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-22776));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22760));
    ctx.gpr[6] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2356));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2376));
    ctx.gpr[6] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2348));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2328));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[30]);
    ctx.gpr[23] = (0u | 42u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[30] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[31]);
    goto L_08AF15D4;
L_08AF15D4:
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    ctx.gpr[21] = (0u | 37u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[19] = (2230u << 16u);
    goto L_08AF15E4;
L_08AF15E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23884)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-22744)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(34));
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AF1600u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 242u, 0x08AECC34u>(ctx, &aot_mem) && ctx.pc == 0x08AF1600u) goto L_08AF1600;
    return;
L_08AF1600:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[16]) <= 0) {
    ctx.gpr[19] = (ctx.gpr[17] - ctx.gpr[20]);
        goto L_08AF1624;
    }
    goto L_08AF160C;
L_08AF160C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(34)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_08AF15E4;
      }
      goto L_08AF1618;
    }
L_08AF1618:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[17] - ctx.gpr[20]);
      if (branch_taken) {
          goto L_08AF1624;
      }
      goto L_08AF1624;
    }
L_08AF1624:
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF16E0;
      }
      goto L_08AF1630;
    }
L_08AF1630:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[6] & 512u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF16A4;
    }
    goto L_08AF1640;
L_08AF1640:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF167C;
      }
      goto L_08AF1650;
    }
L_08AF1650:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AF1660u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AF1660u) goto L_08AF1660;
    return;
L_08AF1660:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF16D4;
      }
      goto L_08AF167C;
    }
L_08AF167C:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AF168Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AF168Cu) goto L_08AF168C;
    return;
L_08AF168C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF16D4;
      }
      goto L_08AF16A4;
    }
L_08AF16A4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF16C4;
      }
      goto L_08AF16AC;
    }
L_08AF16AC:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF16C4;
      }
      goto L_08AF16B4;
    }
L_08AF16B4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08AF16C4;
L_08AF16C4:
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AF16D4u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AF13E8;
L_08AF16D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
    goto L_08AF16E0;
L_08AF16E0:
    if (static_cast<std::int32_t>(ctx.gpr[16]) <= 0) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
        goto L_08AF26C4;
    }
    goto L_08AF16E8;
L_08AF16E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF1708;
      }
      goto L_08AF16F4;
    }
L_08AF16F4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
        goto L_08AF26C4;
    }
    goto L_08AF1704;
L_08AF1704:
    ctx.gpr[4] = (0u | 0u);
    goto L_08AF1708;
L_08AF1708:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08AF1724;
L_08AF1724:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-32));
    ctx.gpr[9] = (ctx.gpr[7] < static_cast<std::uint32_t>(89) ? 1u : 0u);
    goto L_08AF1734;
L_08AF1734:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF1DD4;
      }
      goto L_08AF173C;
    }
L_08AF173C:
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[7]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-2296)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF1754:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF1724;
      }
      goto L_08AF1760;
    }
L_08AF1760:
    ctx.gpr[4] = (0u | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AF1724;
      }
      goto L_08AF176C;
    }
L_08AF176C:
    ctx.gpr[20] = (ctx.gpr[20] | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF1724;
      }
      goto L_08AF1778;
    }
L_08AF1778:
    ctx.gpr[20] = (ctx.gpr[20] | 512u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF1724;
      }
      goto L_08AF1784;
    }
L_08AF1784:
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) >= 0;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF1724;
      }
      goto L_08AF1794;
    }
L_08AF1794:
    ctx.gpr[22] = (0u - ctx.gpr[22]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[20] | 4u);
      if (branch_taken) {
          goto L_08AF17A8;
      }
      goto L_08AF17A0;
    }
L_08AF17A0:
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[20] | 4u);
    goto L_08AF17A8;
L_08AF17A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF1724;
      }
      goto L_08AF17B0;
    }
L_08AF17B0:
    ctx.gpr[4] = (0u | 43u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF1724;
      }
      goto L_08AF17C0;
    }
L_08AF17C0:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[23];
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AF17EC;
      }
      goto L_08AF17D0;
    }
L_08AF17D0:
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    if (static_cast<std::int32_t>(ctx.gpr[5]) < 0) {
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
        goto L_08AF17E4;
    }
    goto L_08AF17E4;
L_08AF17E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF1724;
      }
      goto L_08AF17EC;
    }
L_08AF17EC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF1828;
      }
      goto L_08AF17FC;
    }
L_08AF17FC:
    ctx.gpr[4] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AF17FC;
      }
      goto L_08AF1828;
    }
L_08AF1828:
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-32));
    ctx.gpr[9] = (ctx.gpr[7] < static_cast<std::uint32_t>(89) ? 1u : 0u);
    if (static_cast<std::int32_t>(ctx.gpr[5]) < 0) {
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
        goto L_08AF1838;
    }
    goto L_08AF1838;
L_08AF1838:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF1734;
      }
      goto L_08AF1840;
    }
L_08AF1840:
    ctx.gpr[20] = (ctx.gpr[20] | 128u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF1724;
      }
      goto L_08AF184C;
    }
L_08AF184C:
    ctx.gpr[5] = (0u | 0u);
    goto L_08AF1850;
L_08AF1850:
    ctx.gpr[4] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AF1850;
      }
      goto L_08AF187C;
    }
L_08AF187C:
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-32));
    ctx.gpr[22] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[7] < static_cast<std::uint32_t>(89) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF1734;
      }
      goto L_08AF188C;
    }
L_08AF188C:
    ctx.gpr[20] = (ctx.gpr[20] | 64u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF1724;
      }
      goto L_08AF1898;
    }
L_08AF1898:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (0u | 108u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF18B8;
      }
      goto L_08AF18A8;
    }
L_08AF18A8:
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] | 32u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF1724;
      }
      goto L_08AF18B8;
    }
L_08AF18B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] | 16u);
      if (branch_taken) {
          goto L_08AF1724;
      }
      goto L_08AF18C0;
    }
L_08AF18C0:
    ctx.gpr[20] = (ctx.gpr[20] | 32u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF1724;
      }
      goto L_08AF18CC;
    }
L_08AF18CC:
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[4] = (ctx.gpr[20] & 132u);
    ctx.gpr[8] = (ctx.gpr[20] & 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    ctx.gpr[19] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08AF1E0C;
      }
      goto L_08AF190C;
    }
L_08AF190C:
    ctx.gpr[20] = (ctx.gpr[20] | 16u);
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[20] & 32u);
      if (branch_taken) {
          goto L_08AF1924;
      }
      goto L_08AF191C;
    }
L_08AF191C:
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[20] & 32u);
    goto L_08AF1924;
L_08AF1924:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 16u);
      if (branch_taken) {
          goto L_08AF1938;
      }
      goto L_08AF192C;
    }
L_08AF192C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF1970;
      }
      goto L_08AF1938;
    }
L_08AF1938:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 64u);
      if (branch_taken) {
          goto L_08AF194C;
      }
      goto L_08AF1940;
    }
L_08AF1940:
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
      if (branch_taken) {
          goto L_08AF196C;
      }
      goto L_08AF194C;
    }
L_08AF194C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF1968;
      }
      goto L_08AF1954;
    }
L_08AF1954:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
      if (branch_taken) {
          goto L_08AF196C;
      }
      goto L_08AF1968;
    }
L_08AF1968:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    goto L_08AF196C;
L_08AF196C:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    goto L_08AF1970;
L_08AF1970:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[31] = (0u | 1u);
      if (branch_taken) {
          goto L_08AF1988;
      }
      goto L_08AF197C;
    }
L_08AF197C:
    ctx.gpr[4] = (0u | 45u);
    ctx.gpr[5] = (0u - ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AF1988;
L_08AF1988:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[5] | ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AF1C38;
      }
      goto L_08AF1990;
    }
L_08AF1990:
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[20] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
      if (branch_taken) {
          goto L_08AF19B4;
      }
      goto L_08AF19A0;
    }
L_08AF19A0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF15D4;
      }
      goto L_08AF19B4;
    }
L_08AF19B4:
    ctx.gpr[4] = (ctx.gpr[20] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 64u);
      if (branch_taken) {
          goto L_08AF19D4;
      }
      goto L_08AF19C0;
    }
L_08AF19C0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF15D4;
      }
      goto L_08AF19D4;
    }
L_08AF19D4:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
        goto L_08AF19F0;
    }
    goto L_08AF19DC;
L_08AF19DC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AF15D4;
      }
      goto L_08AF19F0;
    }
L_08AF19F0:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF15D4;
      }
      goto L_08AF1A00;
    }
L_08AF1A00:
    ctx.gpr[20] = (ctx.gpr[20] | 16u);
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[20] & 32u);
      if (branch_taken) {
          goto L_08AF1A18;
      }
      goto L_08AF1A10;
    }
L_08AF1A10:
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[20] & 32u);
    goto L_08AF1A18;
L_08AF1A18:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 16u);
      if (branch_taken) {
          goto L_08AF1A2C;
      }
      goto L_08AF1A20;
    }
L_08AF1A20:
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
      if (branch_taken) {
          goto L_08AF1A5C;
      }
      goto L_08AF1A2C;
    }
L_08AF1A2C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 64u);
      if (branch_taken) {
          goto L_08AF1A40;
      }
      goto L_08AF1A34;
    }
L_08AF1A34:
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
      if (branch_taken) {
          goto L_08AF1A5C;
      }
      goto L_08AF1A40;
    }
L_08AF1A40:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF1A58;
      }
      goto L_08AF1A48;
    }
L_08AF1A48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 65535u);
      if (branch_taken) {
          goto L_08AF1A5C;
      }
      goto L_08AF1A58;
    }
L_08AF1A58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    goto L_08AF1A5C;
L_08AF1A5C:
    ctx.gpr[31] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[5] | ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AF1C34;
      }
      goto L_08AF1A68;
    }
L_08AF1A68:
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0u | 2u);
    ctx.gpr[20] = (ctx.gpr[20] | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    ctx.gpr[16] = (0u | 120u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[5] | ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AF1C34;
      }
      goto L_08AF1A8C;
    }
L_08AF1A8C:
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[4] = (ctx.gpr[20] & 132u);
    ctx.gpr[5] = (ctx.gpr[20] & 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[5]);
    if (ctx.gpr[21] == 0u) {
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
        goto L_08AF1AAC;
    }
    goto L_08AF1AAC;
L_08AF1AAC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08AF1AFC;
      }
      goto L_08AF1AB4;
    }
L_08AF1AB4:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AF1AC0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 366u, 0x08AED45Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF1AC0u) goto L_08AF1AC0;
    return;
L_08AF1AC0:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
      if (branch_taken) {
          goto L_08AF1AF0;
      }
      goto L_08AF1AD4;
    }
L_08AF1AD4:
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[21]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AF1B18;
      }
      goto L_08AF1AE4;
    }
L_08AF1AE4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08AF1B18;
      }
      goto L_08AF1AF0;
    }
L_08AF1AF0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08AF1B18;
      }
      goto L_08AF1AFC;
    }
L_08AF1AFC:
    ctx.gpr[31] = (0x08AF1B04u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08AF1B04u) goto L_08AF1B04;
    return;
L_08AF1B04:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    goto L_08AF1B18;
L_08AF1B18:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[15]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (static_cast<std::int32_t>(ctx.gpr[7]) < 0 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF1E0C;
      }
      goto L_08AF1B2C;
    }
L_08AF1B2C:
    ctx.gpr[20] = (ctx.gpr[20] | 16u);
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[20] & 32u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
      if (branch_taken) {
          goto L_08AF1B4C;
      }
      goto L_08AF1B40;
    }
L_08AF1B40:
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[20] & 32u);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    goto L_08AF1B4C;
L_08AF1B4C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 16u);
      if (branch_taken) {
          goto L_08AF1B60;
      }
      goto L_08AF1B54;
    }
L_08AF1B54:
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
      if (branch_taken) {
          goto L_08AF1B90;
      }
      goto L_08AF1B60;
    }
L_08AF1B60:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 64u);
      if (branch_taken) {
          goto L_08AF1B74;
      }
      goto L_08AF1B68;
    }
L_08AF1B68:
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
      if (branch_taken) {
          goto L_08AF1B90;
      }
      goto L_08AF1B74;
    }
L_08AF1B74:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF1B8C;
      }
      goto L_08AF1B7C;
    }
L_08AF1B7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 65535u);
      if (branch_taken) {
          goto L_08AF1B90;
      }
      goto L_08AF1B8C;
    }
L_08AF1B8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    goto L_08AF1B90;
L_08AF1B90:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[15]);
    ctx.gpr[31] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[5] | ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AF1C34;
      }
      goto L_08AF1BA0;
    }
L_08AF1BA0:
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[20] & 32u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[20] & 1u);
      if (branch_taken) {
          goto L_08AF1BC4;
      }
      goto L_08AF1BB4;
    }
L_08AF1BB4:
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[20] & 32u);
    ctx.gpr[7] = (ctx.gpr[20] & 1u);
    goto L_08AF1BC4;
L_08AF1BC4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 16u);
      if (branch_taken) {
          goto L_08AF1BD8;
      }
      goto L_08AF1BCC;
    }
L_08AF1BCC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF1C0C;
      }
      goto L_08AF1BD8;
    }
L_08AF1BD8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 64u);
      if (branch_taken) {
          goto L_08AF1BEC;
      }
      goto L_08AF1BE0;
    }
L_08AF1BE0:
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
      if (branch_taken) {
          goto L_08AF1C08;
      }
      goto L_08AF1BEC;
    }
L_08AF1BEC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF1C04;
      }
      goto L_08AF1BF4;
    }
L_08AF1BF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 65535u);
      if (branch_taken) {
          goto L_08AF1C08;
      }
      goto L_08AF1C04;
    }
L_08AF1C04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    goto L_08AF1C08;
L_08AF1C08:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    goto L_08AF1C0C;
L_08AF1C0C:
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[15]);
    ctx.gpr[31] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (ctx.gpr[5] | ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AF1C34;
      }
      goto L_08AF1C24;
    }
L_08AF1C24:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[15]);
      if (branch_taken) {
          goto L_08AF1C34;
      }
      goto L_08AF1C2C;
    }
L_08AF1C2C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[15]);
    ctx.gpr[20] = (ctx.gpr[20] | 2u);
    goto L_08AF1C34;
L_08AF1C34:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    goto L_08AF1C38;
L_08AF1C38:
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AF1C4C;
      }
      goto L_08AF1C44;
    }
L_08AF1C44:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[20] = (ctx.gpr[20] & ctx.gpr[4]);
    goto L_08AF1C4C;
L_08AF1C4C:
    ctx.gpr[4] = (ctx.gpr[20] & 132u);
    ctx.gpr[6] = (ctx.gpr[20] & 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AF1D6C;
      }
      goto L_08AF1C64;
    }
L_08AF1C64:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[31]) > 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[31]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF1CA0;
      }
      goto L_08AF1C6C;
    }
L_08AF1C6C:
    if (static_cast<std::int32_t>(ctx.gpr[31]) >= 0) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[15]);
        goto L_08AF1CBC;
    }
    goto L_08AF1C74;
L_08AF1C74:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    goto L_08AF1C78;
L_08AF1C78:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[15]);
    ctx.gpr[31] = (0x08AF1C84u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08AF1C84u) goto L_08AF1C84;
    return;
L_08AF1C84:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF1E0C;
      }
      goto L_08AF1CA0;
    }
L_08AF1CA0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[31]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF1CFC;
      }
      goto L_08AF1CA8;
    }
L_08AF1CA8:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
        goto L_08AF1C78;
    }
    goto L_08AF1CB0;
L_08AF1CB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 15u);
      if (branch_taken) {
          goto L_08AF1D54;
      }
      goto L_08AF1CB8;
    }
L_08AF1CB8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[15]);
    goto L_08AF1CBC;
L_08AF1CBC:
    ctx.gpr[6] = (ctx.gpr[20] & 1u);
    goto L_08AF1CC0;
L_08AF1CC0:
    ctx.gpr[4] = (ctx.gpr[5] & 7u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] >> 3u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AF1CC0;
      }
      goto L_08AF1CD8;
    }
L_08AF1CD8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
      if (branch_taken) {
          goto L_08AF1D6C;
      }
      goto L_08AF1CE0;
    }
L_08AF1CE0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (0u | 48u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[15]);
        goto L_08AF1D70;
    }
    goto L_08AF1CF0;
L_08AF1CF0:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AF1D6C;
      }
      goto L_08AF1CFC;
    }
L_08AF1CFC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[15]);
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (0u | 10u);
      if (branch_taken) {
          goto L_08AF1D3C;
      }
      goto L_08AF1D0C;
    }
L_08AF1D0C:
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF1D0C;
      }
      goto L_08AF1D3C;
    }
L_08AF1D3C:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
      if (branch_taken) {
          goto L_08AF1D6C;
      }
      goto L_08AF1D50;
    }
L_08AF1D50:
    ctx.gpr[4] = (ctx.gpr[5] & 15u);
    goto L_08AF1D54;
L_08AF1D54:
    ctx.gpr[4] = (ctx.gpr[15] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] >> 4u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AF1D50;
      }
      goto L_08AF1D6C;
    }
L_08AF1D6C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[15]);
    goto L_08AF1D70;
L_08AF1D70:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[31] != ctx.gpr[4];
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_08AF1DB8;
      }
      goto L_08AF1D7C;
    }
L_08AF1D7C:
    ctx.gpr[4] = (ctx.gpr[20] & 512u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (ctx.gpr[9] - ctx.gpr[21]);
      if (branch_taken) {
          goto L_08AF1DBC;
      }
      goto L_08AF1D88;
    }
L_08AF1D88:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AF1D9Cu);
    ctx.gpr[6] = (ctx.gpr[9] | 0u);
    goto L_08AF1218;
L_08AF1D9C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF1E0C;
      }
      goto L_08AF1DB8;
    }
L_08AF1DB8:
    ctx.gpr[7] = (ctx.gpr[9] - ctx.gpr[21]);
    goto L_08AF1DBC;
L_08AF1DBC:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF1E0C;
      }
      goto L_08AF1DD4;
    }
L_08AF1DD4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_08AF26C0;
      }
      goto L_08AF1DDC;
    }
L_08AF1DDC:
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[4] = (ctx.gpr[20] & 132u);
    ctx.gpr[8] = (ctx.gpr[20] & 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[8]);
    goto L_08AF1E0C;
L_08AF1E0C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
        goto L_08AF1E18;
    }
    goto L_08AF1E18;
L_08AF1E18:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08AF1E28;
      }
      goto L_08AF1E20;
    }
L_08AF1E20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF1E38;
      }
      goto L_08AF1E28;
    }
L_08AF1E28:
    ctx.gpr[4] = (ctx.gpr[20] & 2u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
        goto L_08AF1E3C;
    }
    goto L_08AF1E34;
L_08AF1E34:
    ctx.gpr[7] = (ctx.gpr[9] + static_cast<std::uint32_t>(2));
    goto L_08AF1E38;
L_08AF1E38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    goto L_08AF1E3C;
L_08AF1E3C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AF1FD8;
      }
      goto L_08AF1E44;
    }
L_08AF1E44:
    ctx.gpr[19] = (ctx.gpr[22] - ctx.gpr[7]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AF1FD8;
      }
      goto L_08AF1E50;
    }
L_08AF1E50:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF1F18;
      }
      goto L_08AF1E5C;
    }
L_08AF1E5C:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF1ED8;
    }
    goto L_08AF1E64;
L_08AF1E64:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF1EA8;
      }
      goto L_08AF1E74;
    }
L_08AF1E74:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x08AF1E84u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AF1E84u) goto L_08AF1E84;
    return;
L_08AF1E84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF1F08;
      }
      goto L_08AF1EA8;
    }
L_08AF1EA8:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AF1EB8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AF1EB8u) goto L_08AF1EB8;
    return;
L_08AF1EB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF1F08;
      }
      goto L_08AF1ED8;
    }
L_08AF1ED8:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF1EF0;
    }
    goto L_08AF1EE0;
L_08AF1EE0:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AF1EEC;
      }
      goto L_08AF1EE8;
    }
L_08AF1EE8:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08AF1EEC;
L_08AF1EEC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    goto L_08AF1EF0;
L_08AF1EF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[31] = (0x08AF1F00u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AF13E8;
L_08AF1F00:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08AF1F08;
L_08AF1F08:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF1E5C;
      }
      goto L_08AF1F18;
    }
L_08AF1F18:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
      if (branch_taken) {
          goto L_08AF1F98;
      }
      goto L_08AF1F20;
    }
L_08AF1F20:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF1F68;
      }
      goto L_08AF1F30;
    }
L_08AF1F30:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08AF1F40u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AF1F40u) goto L_08AF1F40;
    return;
L_08AF1F40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[19]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
      if (branch_taken) {
          goto L_08AF1FD8;
      }
      goto L_08AF1F68;
    }
L_08AF1F68:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AF1F74u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AF1F74u) goto L_08AF1F74;
    return;
L_08AF1F74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
      if (branch_taken) {
          goto L_08AF1FD8;
      }
      goto L_08AF1F98;
    }
L_08AF1F98:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF1FBC;
      }
      goto L_08AF1FA4;
    }
L_08AF1FA4:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF1FBC;
      }
      goto L_08AF1FAC;
    }
L_08AF1FAC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08AF1FBC;
L_08AF1FBC:
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AF1FCCu);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AF13E8;
L_08AF1FCC:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08AF1FD8;
L_08AF1FD8:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08AF209C;
      }
      goto L_08AF1FE8;
    }
L_08AF1FE8:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF2060;
    }
    goto L_08AF1FF0;
L_08AF1FF0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF2034;
      }
      goto L_08AF2000;
    }
L_08AF2000:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08AF2010u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AF2010u) goto L_08AF2010;
    return;
L_08AF2010:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF2160;
      }
      goto L_08AF2034;
    }
L_08AF2034:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AF2040u);
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AF2040u) goto L_08AF2040;
    return;
L_08AF2040:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF2160;
      }
      goto L_08AF2060;
    }
L_08AF2060:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF2080;
      }
      goto L_08AF2068;
    }
L_08AF2068:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF2080;
      }
      goto L_08AF2070;
    }
L_08AF2070:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08AF2080;
L_08AF2080:
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08AF2090u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AF13E8;
L_08AF2090:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF2160;
      }
      goto L_08AF209C;
    }
L_08AF209C:
    ctx.gpr[4] = (ctx.gpr[20] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 48u);
      if (branch_taken) {
          goto L_08AF2160;
      }
      goto L_08AF20A8;
    }
L_08AF20A8:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(ctx.gpr[16]));
      if (branch_taken) {
          goto L_08AF2124;
      }
      goto L_08AF20B4;
    }
L_08AF20B4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF20F8;
      }
      goto L_08AF20C4;
    }
L_08AF20C4:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08AF20D4u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AF20D4u) goto L_08AF20D4;
    return;
L_08AF20D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF2160;
      }
      goto L_08AF20F8;
    }
L_08AF20F8:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AF2104u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AF2104u) goto L_08AF2104;
    return;
L_08AF2104:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF2160;
      }
      goto L_08AF2124;
    }
L_08AF2124:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF2148;
      }
      goto L_08AF2130;
    }
L_08AF2130:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF2148;
      }
      goto L_08AF2138;
    }
L_08AF2138:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08AF2148;
L_08AF2148:
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08AF2158u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AF13E8;
L_08AF2158:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08AF2160;
L_08AF2160:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (0u | 128u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08AF22F0;
      }
      goto L_08AF2170;
    }
L_08AF2170:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[16] = (ctx.gpr[22] - ctx.gpr[16]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF22F0;
      }
      goto L_08AF2180;
    }
L_08AF2180:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF2244;
      }
      goto L_08AF2188;
    }
L_08AF2188:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF2204;
    }
    goto L_08AF2190;
L_08AF2190:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF21D4;
      }
      goto L_08AF21A0;
    }
L_08AF21A0:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AF21B0u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AF21B0u) goto L_08AF21B0;
    return;
L_08AF21B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF2234;
      }
      goto L_08AF21D4;
    }
L_08AF21D4:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AF21E4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AF21E4u) goto L_08AF21E4;
    return;
L_08AF21E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF2234;
      }
      goto L_08AF2204;
    }
L_08AF2204:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF221C;
    }
    goto L_08AF220C;
L_08AF220C:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF221C;
    }
    goto L_08AF2214;
L_08AF2214:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    goto L_08AF221C;
L_08AF221C:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[31] = (0x08AF222Cu);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AF13E8;
L_08AF222C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08AF2234;
L_08AF2234:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF2188;
      }
      goto L_08AF2244;
    }
L_08AF2244:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF22BC;
    }
    goto L_08AF224C;
L_08AF224C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF2290;
      }
      goto L_08AF225C;
    }
L_08AF225C:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AF226Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AF226Cu) goto L_08AF226C;
    return;
L_08AF226C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF22F0;
      }
      goto L_08AF2290;
    }
L_08AF2290:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AF229Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AF229Cu) goto L_08AF229C;
    return;
L_08AF229C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF22F0;
      }
      goto L_08AF22BC;
    }
L_08AF22BC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF22D8;
      }
      goto L_08AF22C4;
    }
L_08AF22C4:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF22D8;
      }
      goto L_08AF22CC;
    }
L_08AF22CC:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08AF22D8;
L_08AF22D8:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AF22E8u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AF13E8;
L_08AF22E8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08AF22F0;
L_08AF22F0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (ctx.gpr[16] - ctx.gpr[7]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF2480;
      }
      goto L_08AF2304;
    }
L_08AF2304:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF23C8;
      }
      goto L_08AF230C;
    }
L_08AF230C:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF2388;
    }
    goto L_08AF2314;
L_08AF2314:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF2358;
      }
      goto L_08AF2324;
    }
L_08AF2324:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AF2334u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AF2334u) goto L_08AF2334;
    return;
L_08AF2334:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF23B8;
      }
      goto L_08AF2358;
    }
L_08AF2358:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AF2368u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AF2368u) goto L_08AF2368;
    return;
L_08AF2368:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF23B8;
      }
      goto L_08AF2388;
    }
L_08AF2388:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF23A0;
    }
    goto L_08AF2390;
L_08AF2390:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF23A0;
    }
    goto L_08AF2398;
L_08AF2398:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    goto L_08AF23A0;
L_08AF23A0:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[31] = (0x08AF23B0u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AF13E8;
L_08AF23B0:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08AF23B8;
L_08AF23B8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF230C;
      }
      goto L_08AF23C8;
    }
L_08AF23C8:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF2448;
    }
    goto L_08AF23D0;
L_08AF23D0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF2418;
      }
      goto L_08AF23E0;
    }
L_08AF23E0:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AF23F0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AF23F0u) goto L_08AF23F0;
    return;
L_08AF23F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[16]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AF2480;
      }
      goto L_08AF2418;
    }
L_08AF2418:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AF2424u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AF2424u) goto L_08AF2424;
    return;
L_08AF2424:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AF2480;
      }
      goto L_08AF2448;
    }
L_08AF2448:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08AF2464;
      }
      goto L_08AF2450;
    }
L_08AF2450:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08AF2464;
      }
      goto L_08AF2458;
    }
L_08AF2458:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    goto L_08AF2464;
L_08AF2464:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AF2474u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AF13E8;
L_08AF2474:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08AF2480;
L_08AF2480:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF24F0;
    }
    goto L_08AF2488;
L_08AF2488:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF24C8;
      }
      goto L_08AF2498;
    }
L_08AF2498:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AF24A8u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AF24A8u) goto L_08AF24A8;
    return;
L_08AF24A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF251C;
      }
      goto L_08AF24C8;
    }
L_08AF24C8:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AF24D8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AF24D8u) goto L_08AF24D8;
    return;
L_08AF24D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF251C;
      }
      goto L_08AF24F0;
    }
L_08AF24F0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF250C;
      }
      goto L_08AF24F8;
    }
L_08AF24F8:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF250C;
      }
      goto L_08AF2500;
    }
L_08AF2500:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08AF250C;
L_08AF250C:
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AF251Cu);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AF13E8;
L_08AF251C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
        goto L_08AF26A4;
    }
    goto L_08AF2528;
L_08AF2528:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[16] = (ctx.gpr[22] - ctx.gpr[16]);
    if (static_cast<std::int32_t>(ctx.gpr[16]) <= 0) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
        goto L_08AF26A4;
    }
    goto L_08AF2538;
L_08AF2538:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
      if (branch_taken) {
          goto L_08AF2608;
      }
      goto L_08AF254C;
    }
L_08AF254C:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF25C8;
    }
    goto L_08AF2554;
L_08AF2554:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF2598;
      }
      goto L_08AF2564;
    }
L_08AF2564:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AF2574u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AF2574u) goto L_08AF2574;
    return;
L_08AF2574:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF25F8;
      }
      goto L_08AF2598;
    }
L_08AF2598:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AF25A8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AF25A8u) goto L_08AF25A8;
    return;
L_08AF25A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF25F8;
      }
      goto L_08AF25C8;
    }
L_08AF25C8:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF25E0;
    }
    goto L_08AF25D0;
L_08AF25D0:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF25E0;
    }
    goto L_08AF25D8;
L_08AF25D8:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    goto L_08AF25E0;
L_08AF25E0:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[31] = (0x08AF25F0u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AF13E8;
L_08AF25F0:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08AF25F8;
L_08AF25F8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF254C;
      }
      goto L_08AF2608;
    }
L_08AF2608:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF2674;
    }
    goto L_08AF2610;
L_08AF2610:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF264C;
      }
      goto L_08AF2620;
    }
L_08AF2620:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AF2630u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AF2630u) goto L_08AF2630;
    return;
L_08AF2630:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF26A0;
      }
      goto L_08AF264C;
    }
L_08AF264C:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AF265Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AF265Cu) goto L_08AF265C;
    return;
L_08AF265C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF26A0;
      }
      goto L_08AF2674;
    }
L_08AF2674:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF2690;
      }
      goto L_08AF267C;
    }
L_08AF267C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF2690;
      }
      goto L_08AF2684;
    }
L_08AF2684:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08AF2690;
L_08AF2690:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AF26A0u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AF13E8;
L_08AF26A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    goto L_08AF26A4;
L_08AF26A4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
        goto L_08AF26B0;
    }
    goto L_08AF26B0;
L_08AF26B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF15D4;
      }
      goto L_08AF26C0;
    }
L_08AF26C0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    goto L_08AF26C4;
L_08AF26C4:
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF26E4;
      }
      goto L_08AF26D0;
    }
L_08AF26D0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AF26E4u);
    ctx.gpr[7] = (0u | 1u);
    goto L_08AF13E8;
L_08AF26E4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
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
L_08AF2718:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF29B8;
      }
      goto L_08AF2728;
    }
L_08AF2728:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AF2734u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 28u, 0x08AF41B4u>(ctx, &aot_mem) && ctx.pc == 0x08AF2734u) goto L_08AF2734;
    return;
L_08AF2734:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-8));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[7] = (ctx.gpr[10] & ctx.gpr[7]);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22208));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[11] = (ctx.gpr[11] & ctx.gpr[6]);
    ctx.gpr[10] = (ctx.gpr[10] & 1u);
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[2];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08AF27DC;
      }
      goto L_08AF2770;
    }
L_08AF2770:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[7] = (ctx.gpr[11] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AF2794;
      }
      goto L_08AF2778;
    }
L_08AF2778:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[6]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    goto L_08AF2794;
L_08AF2794:
    ctx.gpr[6] = (ctx.gpr[7] | 1u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-21176)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF27C8;
      }
      goto L_08AF27B4;
    }
L_08AF27B4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[31] = (0x08AF27C4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-21172)));
    goto L_08AF29C4;
L_08AF27C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08AF27C8;
L_08AF27C8:
    ctx.gpr[31] = (0x08AF27D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 29u, 0x08AF41BCu>(ctx, &aot_mem) && ctx.pc == 0x08AF27D0u) goto L_08AF27D0;
    return;
L_08AF27D0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF27DC:
    ctx.gpr[2] = (ctx.gpr[10] | 0u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[11]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF2818;
      }
      goto L_08AF27EC;
    }
L_08AF27EC:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[12] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[3]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[12];
    ctx.gpr[7] = (ctx.gpr[3] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AF280C;
      }
      goto L_08AF2804;
    }
L_08AF2804:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (0u | 1u);
      if (branch_taken) {
          goto L_08AF2818;
      }
      goto L_08AF280C;
    }
L_08AF280C:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    goto L_08AF2818;
L_08AF2818:
    ctx.gpr[2] = (ctx.gpr[9] + ctx.gpr[11]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[2] & 1u);
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[9] = (ctx.gpr[7] | 1u);
        goto L_08AF286C;
    }
    goto L_08AF282C;
L_08AF282C:
    ctx.gpr[7] = (ctx.gpr[11] + ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AF285C;
      }
      goto L_08AF2838;
    }
L_08AF2838:
    ctx.gpr[2] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    if (ctx.gpr[11] != ctx.gpr[2]) {
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
        goto L_08AF2860;
    }
    goto L_08AF2844;
L_08AF2844:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.gpr[10] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF2868;
      }
      goto L_08AF285C;
    }
L_08AF285C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    goto L_08AF2860;
L_08AF2860:
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    goto L_08AF2868;
L_08AF2868:
    ctx.gpr[9] = (ctx.gpr[7] | 1u);
    goto L_08AF286C;
L_08AF286C:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AF29B0;
      }
      goto L_08AF287C;
    }
L_08AF287C:
    ctx.gpr[9] = (ctx.gpr[7] < static_cast<std::uint32_t>(512) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[9] = (ctx.gpr[7] >> 9u);
      if (branch_taken) {
          goto L_08AF28D0;
      }
      goto L_08AF2888;
    }
L_08AF2888:
    ctx.gpr[6] = (ctx.gpr[7] >> 3u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[10] << (ctx.gpr[7] & 31u));
    ctx.gpr[7] = (ctx.gpr[9] | ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08AF29B0;
      }
      goto L_08AF28D0;
    }
L_08AF28D0:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[10] = (ctx.gpr[9] < static_cast<std::uint32_t>(5) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF28E0;
      }
      goto L_08AF28D8;
    }
L_08AF28D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[7] >> 3u);
      if (branch_taken) {
          goto L_08AF2940;
      }
      goto L_08AF28E0;
    }
L_08AF28E0:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[10] = (ctx.gpr[9] < static_cast<std::uint32_t>(21) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF28F4;
      }
      goto L_08AF28E8;
    }
L_08AF28E8:
    ctx.gpr[9] = (ctx.gpr[7] >> 6u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_08AF2940;
      }
      goto L_08AF28F4;
    }
L_08AF28F4:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[10] = (ctx.gpr[9] < static_cast<std::uint32_t>(85) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF2904;
      }
      goto L_08AF28FC;
    }
L_08AF28FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(91));
      if (branch_taken) {
          goto L_08AF2940;
      }
      goto L_08AF2904;
    }
L_08AF2904:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[10] = (ctx.gpr[9] < static_cast<std::uint32_t>(341) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF2918;
      }
      goto L_08AF290C;
    }
L_08AF290C:
    ctx.gpr[9] = (ctx.gpr[7] >> 12u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(110));
      if (branch_taken) {
          goto L_08AF2940;
      }
      goto L_08AF2918;
    }
L_08AF2918:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[10] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08AF292C;
      }
      goto L_08AF2920;
    }
L_08AF2920:
    ctx.gpr[9] = (ctx.gpr[7] >> 15u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(119));
      if (branch_taken) {
          goto L_08AF2940;
      }
      goto L_08AF292C;
    }
L_08AF292C:
    ctx.gpr[10] = (ctx.gpr[10] < static_cast<std::uint32_t>(1365) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[9] = (0u | 126u);
      if (branch_taken) {
          goto L_08AF2940;
      }
      goto L_08AF2938;
    }
L_08AF2938:
    ctx.gpr[9] = (ctx.gpr[7] >> 18u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(124));
    goto L_08AF2940;
L_08AF2940:
    ctx.gpr[11] = (ctx.gpr[9] << 3u);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[5]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08AF297C;
      }
      goto L_08AF2954;
    }
L_08AF2954:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[9] << (ctx.gpr[6] & 31u));
    ctx.gpr[6] = (ctx.gpr[7] | ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AF29A0;
      }
      goto L_08AF297C;
    }
L_08AF297C:
    if (ctx.gpr[10] == ctx.gpr[11]) {
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(12)));
        goto L_08AF29A0;
    }
    goto L_08AF2984;
L_08AF2984:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[7] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(12)));
        goto L_08AF29A0;
    }
    goto L_08AF2998;
L_08AF2998:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AF297C;
      }
      goto L_08AF29A0;
    }
L_08AF29A0:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    goto L_08AF29B0;
L_08AF29B0:
    ctx.gpr[31] = (0x08AF29B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 29u, 0x08AF41BCu>(ctx, &aot_mem) && ctx.pc == 0x08AF29B8u) goto L_08AF29B8;
    return;
L_08AF29B8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF29C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF29F0u);
    ctx.gpr[20] = (0u | 4096u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 28u, 0x08AF41B4u>(ctx, &aot_mem) && ctx.pc == 0x08AF29F0u) goto L_08AF29F0;
    return;
L_08AF29F0:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-22208));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[19] = (ctx.gpr[4] & ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[19] - ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4096));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[20]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[4] << 12u);
    ctx.gpr[18] = (0u + ctx.gpr[18]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 4096 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AF2B04;
      }
      goto L_08AF2A34;
    }
L_08AF2A34:
    ctx.gpr[31] = (0x08AF2A3Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 15u, 0x08AF40ECu>(ctx, &aot_mem) && ctx.pc == 0x08AF2A3Cu) goto L_08AF2A3C;
    return;
L_08AF2A3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[5] = (0u - ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AF2AD8;
      }
      goto L_08AF2A4C;
    }
L_08AF2A4C:
    ctx.gpr[31] = (0x08AF2A54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 15u, 0x08AF40ECu>(ctx, &aot_mem) && ctx.pc == 0x08AF2A54u) goto L_08AF2A54;
    return;
L_08AF2A54:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[19] - ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AF2A90;
      }
      goto L_08AF2A60;
    }
L_08AF2A60:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AF2A6Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 15u, 0x08AF40ECu>(ctx, &aot_mem) && ctx.pc == 0x08AF2A6Cu) goto L_08AF2A6C;
    return;
L_08AF2A6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[17]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AF2B30;
      }
      goto L_08AF2A84;
    }
L_08AF2A84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF2B48;
      }
      goto L_08AF2A8C;
    }
L_08AF2A8C:
    ctx.gpr[4] = (ctx.gpr[19] - ctx.gpr[18]);
    goto L_08AF2A90;
L_08AF2A90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-21156)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[18]);
    ctx.gpr[31] = (0x08AF2AB4u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-21156), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 29u, 0x08AF41BCu>(ctx, &aot_mem) && ctx.pc == 0x08AF2AB4u) goto L_08AF2AB4;
    return;
L_08AF2AB4:
    ctx.gpr[2] = (0u | 1u);
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
L_08AF2AD8:
    ctx.gpr[31] = (0x08AF2AE0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 29u, 0x08AF41BCu>(ctx, &aot_mem) && ctx.pc == 0x08AF2AE0u) goto L_08AF2AE0;
    return;
L_08AF2AE0:
    ctx.gpr[2] = (0u | 0u);
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
L_08AF2B04:
    ctx.gpr[31] = (0x08AF2B0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 29u, 0x08AF41BCu>(ctx, &aot_mem) && ctx.pc == 0x08AF2B0Cu) goto L_08AF2B0C;
    return;
L_08AF2B0C:
    ctx.gpr[2] = (0u | 0u);
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
L_08AF2B30:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-21168)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-21156), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08AF2B48;
L_08AF2B48:
    ctx.gpr[31] = (0x08AF2B50u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 29u, 0x08AF41BCu>(ctx, &aot_mem) && ctx.pc == 0x08AF2B50u) goto L_08AF2B50;
    return;
L_08AF2B50:
    ctx.gpr[2] = (0u | 0u);
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
L_08AF2B74:
    ctx.gpr[10] = (2230u << 16u);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-24896));
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    goto L_08AF2B88;
L_08AF2B88:
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[3] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (ctx.gpr[10] + ctx.gpr[11]);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[2] = (ctx.gpr[2] & 8u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[8] = (ctx.gpr[3] | 0u);
      if (branch_taken) {
          goto L_08AF2B88;
      }
      goto L_08AF2BA4;
    }
L_08AF2BA4:
    ctx.gpr[2] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[2];
    ctx.gpr[2] = (0u | 43u);
      if (branch_taken) {
          goto L_08AF2BC4;
      }
      goto L_08AF2BB0;
    }
L_08AF2BB0:
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[3] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[3] | 0u);
      if (branch_taken) {
          goto L_08AF2BD8;
      }
      goto L_08AF2BC4;
    }
L_08AF2BC4:
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AF2BD8;
      }
      goto L_08AF2BCC;
    }
L_08AF2BCC:
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[3] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[3] | 0u);
    goto L_08AF2BD8;
L_08AF2BD8:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[2] = (0u | 48u);
      if (branch_taken) {
          goto L_08AF2BF0;
      }
      goto L_08AF2BE0;
    }
L_08AF2BE0:
    ctx.gpr[2] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[2];
    ctx.gpr[14] = (ctx.gpr[10] + ctx.gpr[11]);
      if (branch_taken) {
          goto L_08AF2C20;
      }
      goto L_08AF2BEC;
    }
L_08AF2BEC:
    ctx.gpr[2] = (0u | 48u);
    goto L_08AF2BF0;
L_08AF2BF0:
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[2];
    ctx.gpr[14] = (ctx.gpr[10] + ctx.gpr[11]);
      if (branch_taken) {
          goto L_08AF2C20;
      }
      goto L_08AF2BF8;
    }
L_08AF2BF8:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[12] = (0u | 120u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[12];
    ctx.gpr[12] = (0u | 88u);
      if (branch_taken) {
          goto L_08AF2C10;
      }
      goto L_08AF2C08;
    }
L_08AF2C08:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[12];
    ctx.gpr[14] = (ctx.gpr[10] + ctx.gpr[11]);
      if (branch_taken) {
          goto L_08AF2C20;
      }
      goto L_08AF2C10;
    }
L_08AF2C10:
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[8] = (ctx.gpr[3] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (0u | 16u);
    ctx.gpr[14] = (ctx.gpr[10] + ctx.gpr[11]);
    goto L_08AF2C20;
L_08AF2C20:
    ctx.gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[14] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[15] = (ctx.gpr[14] & 4u);
      if (branch_taken) {
          goto L_08AF2C3C;
      }
      goto L_08AF2C2C;
    }
L_08AF2C2C:
    ctx.gpr[7] = (0u | 10u);
    ctx.gpr[2] = (0u | 48u);
    if (ctx.gpr[11] == ctx.gpr[2]) {
    ctx.gpr[7] = (0u | 8u);
        goto L_08AF2C3C;
    }
    goto L_08AF2C3C;
L_08AF2C3C:
    ctx.gpr[12] = (32768u << 16u);
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[12] = (32768u << 16u);
        goto L_08AF2C4C;
    }
    goto L_08AF2C4C;
L_08AF2C4C:
    { const std::uint32_t dividend = ctx.gpr[12]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[3] = (0u | 0u);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[13] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[12]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[12] = (ctx.lo);
    goto L_08AF2C6C;
L_08AF2C6C:
    { const bool branch_taken = ctx.gpr[15] == 0u;
    ctx.gpr[15] = (ctx.gpr[14] & 3u);
      if (branch_taken) {
          goto L_08AF2C80;
      }
      goto L_08AF2C74;
    }
L_08AF2C74:
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-48));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[14] = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF2CA0;
      }
      goto L_08AF2C80;
    }
L_08AF2C80:
    { const bool branch_taken = ctx.gpr[15] == 0u;
    ctx.gpr[15] = (ctx.gpr[14] | 0u);
      if (branch_taken) {
          goto L_08AF2CF8;
      }
      goto L_08AF2C88;
    }
L_08AF2C88:
    ctx.gpr[14] = (0u | 87u);
    ctx.gpr[15] = (ctx.gpr[15] & 1u);
    if (ctx.gpr[15] != 0u) {
    ctx.gpr[14] = (0u | 55u);
        goto L_08AF2C98;
    }
    goto L_08AF2C98;
L_08AF2C98:
    ctx.gpr[11] = (ctx.gpr[11] - ctx.gpr[14]);
    ctx.gpr[14] = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    goto L_08AF2CA0;
L_08AF2CA0:
    { const bool branch_taken = ctx.gpr[14] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF2CF8;
      }
      goto L_08AF2CA8;
    }
L_08AF2CA8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[2] = (ctx.gpr[12] < ctx.gpr[3] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF2CC8;
      }
      goto L_08AF2CB0;
    }
L_08AF2CB0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF2CC8;
      }
      goto L_08AF2CB8;
    }
L_08AF2CB8:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[12];
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF2CD0;
      }
      goto L_08AF2CC0;
    }
L_08AF2CC0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF2CD0;
      }
      goto L_08AF2CC8;
    }
L_08AF2CC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AF2CE0;
      }
      goto L_08AF2CD0;
    }
L_08AF2CD0:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[3] = (ctx.lo);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[11]);
    goto L_08AF2CE0;
L_08AF2CE0:
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[14] = (ctx.gpr[10] + ctx.gpr[11]);
    ctx.gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[14] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[15] = (ctx.gpr[14] & 4u);
      if (branch_taken) {
          goto L_08AF2C6C;
      }
      goto L_08AF2CF8;
    }
L_08AF2CF8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AF2D1C;
      }
      goto L_08AF2D00;
    }
L_08AF2D00:
    ctx.gpr[3] = (32768u << 16u);
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[3] = (32768u << 16u);
        goto L_08AF2D10;
    }
    goto L_08AF2D10;
L_08AF2D10:
    ctx.gpr[7] = (0u | 34u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AF2D28;
      }
      goto L_08AF2D1C;
    }
L_08AF2D1C:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF2D28;
      }
      goto L_08AF2D24;
    }
L_08AF2D24:
    ctx.gpr[3] = (0u - ctx.gpr[3]);
    goto L_08AF2D28;
L_08AF2D28:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF2D3C;
      }
      goto L_08AF2D30;
    }
L_08AF2D30:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
        goto L_08AF2D38;
    }
    goto L_08AF2D38;
L_08AF2D38:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08AF2D3C;
L_08AF2D3C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[3] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF2D44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF2D64u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23884)));
    goto L_08AF2B74;
L_08AF2D64:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF2D70:
    ctx.gpr[2] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-22740));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF2D7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF2D90u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23884)));
    goto L_08AF2D70;
L_08AF2D90:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF2D9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 20u));
    ctx.gpr[18] = (ctx.gpr[6] & 2047u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1023));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[18]) < 20 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AF2EC0;
      }
      goto L_08AF2DE0;
    }
L_08AF2DE0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    ctx.gpr[4] = (16u << 16u);
      if (branch_taken) {
          goto L_08AF2E54;
      }
      goto L_08AF2DE8;
    }
L_08AF2DE8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22684)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22688)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF2E00u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 426u, 0x08AF6118u>(ctx, &aot_mem) && ctx.pc == 0x08AF2E00u) goto L_08AF2E00;
    return;
L_08AF2E00:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22572)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22576)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF2E18u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 514u, 0x08AF6790u>(ctx, &aot_mem) && ctx.pc == 0x08AF2E18u) goto L_08AF2E18;
    return;
L_08AF2E18:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
        goto L_08AF2FCC;
    }
    goto L_08AF2E20;
L_08AF2E20:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    ctx.gpr[4] = (32768u << 16u);
      if (branch_taken) {
          goto L_08AF2E34;
      }
      goto L_08AF2E28;
    }
L_08AF2E28:
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF2FC8;
      }
      goto L_08AF2E34;
    }
L_08AF2E34:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[16] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[17]);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
        goto L_08AF2FCC;
    }
    goto L_08AF2E48;
L_08AF2E48:
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (49136u << 16u);
      if (branch_taken) {
          goto L_08AF2FC8;
      }
      goto L_08AF2E54;
    }
L_08AF2E54:
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> (ctx.gpr[18] & 31u)));
    ctx.gpr[4] = (ctx.gpr[16] & ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AF2F6C;
      }
      goto L_08AF2E6C;
    }
L_08AF2E6C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22684)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22688)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF2E80u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 426u, 0x08AF6118u>(ctx, &aot_mem) && ctx.pc == 0x08AF2E80u) goto L_08AF2E80;
    return;
L_08AF2E80:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22572)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22576)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF2E98u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 514u, 0x08AF6790u>(ctx, &aot_mem) && ctx.pc == 0x08AF2E98u) goto L_08AF2E98;
    return;
L_08AF2E98:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
        goto L_08AF2FCC;
    }
    goto L_08AF2EA0;
L_08AF2EA0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.gpr[19] = (~(ctx.gpr[19] | 0u));
      if (branch_taken) {
          goto L_08AF2EB4;
      }
      goto L_08AF2EA8;
    }
L_08AF2EA8:
    ctx.gpr[4] = (16u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> (ctx.gpr[18] & 31u)));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    goto L_08AF2EB4;
L_08AF2EB4:
    ctx.gpr[16] = (ctx.gpr[16] & ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF2FC8;
      }
      goto L_08AF2EC0;
    }
L_08AF2EC0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 52 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-20));
      if (branch_taken) {
          goto L_08AF2F1C;
      }
      goto L_08AF2ECC;
    }
L_08AF2ECC:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (0u | 1024u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AF2EF8;
      }
      goto L_08AF2EDC;
    }
L_08AF2EDC:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AF2EF0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 426u, 0x08AF6118u>(ctx, &aot_mem) && ctx.pc == 0x08AF2EF0u) goto L_08AF2EF0;
    return;
L_08AF2EF0:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08AF2EF8;
L_08AF2EF8:
    ctx.gpr[3] = (ctx.gpr[5] | 0u);
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
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
L_08AF2F1C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (ctx.gpr[4] >> (ctx.gpr[19] & 31u));
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AF2F6C;
      }
      goto L_08AF2F30;
    }
L_08AF2F30:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22684)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22688)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF2F44u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 426u, 0x08AF6118u>(ctx, &aot_mem) && ctx.pc == 0x08AF2F44u) goto L_08AF2F44;
    return;
L_08AF2F44:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22572)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22576)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF2F5Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 514u, 0x08AF6790u>(ctx, &aot_mem) && ctx.pc == 0x08AF2F5Cu) goto L_08AF2F5C;
    return;
L_08AF2F5C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_08AF2F88;
      }
      goto L_08AF2F64;
    }
L_08AF2F64:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08AF2FCC;
      }
      goto L_08AF2F6C;
    }
L_08AF2F6C:
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
L_08AF2F88:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.gpr[19] = (~(ctx.gpr[19] | 0u));
      if (branch_taken) {
          goto L_08AF2FC4;
      }
      goto L_08AF2F90;
    }
L_08AF2F90:
    ctx.gpr[4] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 52u);
      if (branch_taken) {
          goto L_08AF2FA4;
      }
      goto L_08AF2F9C;
    }
L_08AF2F9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF2FC4;
      }
      goto L_08AF2FA4;
    }
L_08AF2FA4:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[18]);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[6] << (ctx.gpr[4] & 31u));
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_08AF2FC4;
    }
    goto L_08AF2FC4;
L_08AF2FC4:
    ctx.gpr[17] = (ctx.gpr[17] & ctx.gpr[19]);
    goto L_08AF2FC8;
L_08AF2FC8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    goto L_08AF2FCC;
L_08AF2FCC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
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
L_08AF2FF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (32768u << 16u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[12] = (32768u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[12] = (ctx.gpr[13] & ctx.gpr[12]);
    ctx.gpr[14] = (ctx.gpr[14] & ctx.gpr[8]);
    ctx.gpr[13] = (ctx.gpr[13] ^ ctx.gpr[12]);
    ctx.gpr[3] = (ctx.gpr[5] | 0u);
    ctx.gpr[15] = (ctx.gpr[14] | ctx.gpr[11]);
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[15] == 0u;
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AF3088;
      }
      goto L_08AF304C;
    }
L_08AF304C:
    ctx.gpr[4] = (32752u << 16u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[11]);
      if (branch_taken) {
          goto L_08AF3088;
      }
      goto L_08AF305C;
    }
L_08AF305C:
    ctx.gpr[4] = (ctx.gpr[11] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] >> 31u);
    ctx.gpr[4] = (ctx.gpr[14] | ctx.gpr[4]);
    ctx.gpr[5] = (32752u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[14]) < static_cast<std::int32_t>(ctx.gpr[13]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF3088;
      }
      goto L_08AF3078;
    }
L_08AF3078:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[14]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF30BC;
      }
      goto L_08AF3080;
    }
L_08AF3080:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (16u << 16u);
      if (branch_taken) {
          goto L_08AF30D8;
      }
      goto L_08AF3088;
    }
L_08AF3088:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AF309Cu);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x08AF309Cu) goto L_08AF309C;
    return;
L_08AF309C:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AF30B0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 481u, 0x08AF656Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF30B0u) goto L_08AF30B0;
    return;
L_08AF30B0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF30BC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[10] < ctx.gpr[11] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF3454;
      }
      goto L_08AF30C4;
    }
L_08AF30C4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF3454;
      }
      goto L_08AF30CC;
    }
L_08AF30CC:
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[11];
    ctx.gpr[4] = (ctx.gpr[12] >> 31u);
      if (branch_taken) {
          goto L_08AF30F0;
      }
      goto L_08AF30D4;
    }
L_08AF30D4:
    ctx.gpr[4] = (16u << 16u);
    goto L_08AF30D8;
L_08AF30D8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF3114;
      }
      goto L_08AF30E4;
    }
L_08AF30E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[13]) >> 20u));
      if (branch_taken) {
          goto L_08AF3160;
      }
      goto L_08AF30EC;
    }
L_08AF30EC:
    ctx.gpr[4] = (ctx.gpr[12] >> 31u);
    goto L_08AF30F0;
L_08AF30F0:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22672));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF3114:
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.gpr[5] = (ctx.gpr[13] << 11u);
      if (branch_taken) {
          goto L_08AF3140;
      }
      goto L_08AF311C;
    }
L_08AF311C:
    ctx.gpr[5] = (ctx.gpr[10] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1043));
      if (branch_taken) {
          goto L_08AF3164;
      }
      goto L_08AF3128;
    }
L_08AF3128:
    ctx.gpr[5] = (ctx.gpr[5] << 1u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AF3128;
      }
      goto L_08AF3134;
    }
L_08AF3134:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[14]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF3168;
      }
      goto L_08AF313C;
    }
L_08AF313C:
    ctx.gpr[5] = (ctx.gpr[13] << 11u);
    goto L_08AF3140;
L_08AF3140:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1022));
      if (branch_taken) {
          goto L_08AF3164;
      }
      goto L_08AF3148;
    }
L_08AF3148:
    ctx.gpr[5] = (ctx.gpr[5] << 1u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AF3148;
      }
      goto L_08AF3154;
    }
L_08AF3154:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[14]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF3168;
      }
      goto L_08AF315C;
    }
L_08AF315C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[13]) >> 20u));
    goto L_08AF3160;
L_08AF3160:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1023));
    goto L_08AF3164;
L_08AF3164:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[14]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    goto L_08AF3168;
L_08AF3168:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[14]) >> 20u));
      if (branch_taken) {
          goto L_08AF31BC;
      }
      goto L_08AF3170;
    }
L_08AF3170:
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.gpr[7] = (ctx.gpr[14] << 11u);
      if (branch_taken) {
          goto L_08AF319C;
      }
      goto L_08AF3178;
    }
L_08AF3178:
    ctx.gpr[7] = (ctx.gpr[11] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1043));
      if (branch_taken) {
          goto L_08AF31C0;
      }
      goto L_08AF3184;
    }
L_08AF3184:
    ctx.gpr[7] = (ctx.gpr[7] << 1u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) > 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AF3184;
      }
      goto L_08AF3190;
    }
L_08AF3190:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < -1022 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF31C4;
      }
      goto L_08AF3198;
    }
L_08AF3198:
    ctx.gpr[7] = (ctx.gpr[14] << 11u);
    goto L_08AF319C;
L_08AF319C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1022));
      if (branch_taken) {
          goto L_08AF31C0;
      }
      goto L_08AF31A4;
    }
L_08AF31A4:
    ctx.gpr[7] = (ctx.gpr[7] << 1u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) > 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AF31A4;
      }
      goto L_08AF31B0;
    }
L_08AF31B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < -1022 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF31C4;
      }
      goto L_08AF31B8;
    }
L_08AF31B8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[14]) >> 20u));
    goto L_08AF31BC;
L_08AF31BC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1023));
    goto L_08AF31C0;
L_08AF31C0:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < -1022 ? 1u : 0u);
    goto L_08AF31C4;
L_08AF31C4:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < -1022 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF31E0;
      }
      goto L_08AF31CC;
    }
L_08AF31CC:
    ctx.gpr[8] = (16u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[13] = (ctx.gpr[13] & ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[13] = (ctx.gpr[13] | ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF3218;
      }
      goto L_08AF31E0;
    }
L_08AF31E0:
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1022));
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[6]);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[9] = (0u | 32u);
      if (branch_taken) {
          goto L_08AF320C;
      }
      goto L_08AF31F4;
    }
L_08AF31F4:
    ctx.gpr[9] = (ctx.gpr[9] - ctx.gpr[8]);
    ctx.gpr[13] = (ctx.gpr[13] << (ctx.gpr[8] & 31u));
    ctx.gpr[9] = (ctx.gpr[10] >> (ctx.gpr[9] & 31u));
    ctx.gpr[13] = (ctx.gpr[13] | ctx.gpr[9]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[10] << (ctx.gpr[8] & 31u));
      if (branch_taken) {
          goto L_08AF3218;
      }
      goto L_08AF320C;
    }
L_08AF320C:
    ctx.gpr[13] = (ctx.gpr[8] + static_cast<std::uint32_t>(-32));
    ctx.gpr[13] = (ctx.gpr[10] << (ctx.gpr[13] & 31u));
    ctx.gpr[10] = (0u | 0u);
    goto L_08AF3218;
L_08AF3218:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1022));
      if (branch_taken) {
          goto L_08AF3240;
      }
      goto L_08AF3220;
    }
L_08AF3220:
    ctx.gpr[8] = (16u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[14] = (ctx.gpr[14] & ctx.gpr[8]);
    ctx.gpr[14] = (ctx.gpr[14] | ctx.gpr[4]);
    ctx.gpr[8] = (ctx.gpr[10] < ctx.gpr[11] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[13] - ctx.gpr[14]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[10] - ctx.gpr[11]);
      if (branch_taken) {
          goto L_08AF328C;
      }
      goto L_08AF3240;
    }
L_08AF3240:
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[5]);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[9] = (0u | 32u);
      if (branch_taken) {
          goto L_08AF3274;
      }
      goto L_08AF3250;
    }
L_08AF3250:
    ctx.gpr[9] = (ctx.gpr[9] - ctx.gpr[8]);
    ctx.gpr[14] = (ctx.gpr[14] << (ctx.gpr[8] & 31u));
    ctx.gpr[9] = (ctx.gpr[11] >> (ctx.gpr[9] & 31u));
    ctx.gpr[14] = (ctx.gpr[14] | ctx.gpr[9]);
    ctx.gpr[11] = (ctx.gpr[11] << (ctx.gpr[8] & 31u));
    ctx.gpr[8] = (ctx.gpr[10] < ctx.gpr[11] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[13] - ctx.gpr[14]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[10] - ctx.gpr[11]);
      if (branch_taken) {
          goto L_08AF328C;
      }
      goto L_08AF3274;
    }
L_08AF3274:
    ctx.gpr[14] = (ctx.gpr[8] + static_cast<std::uint32_t>(-32));
    ctx.gpr[14] = (ctx.gpr[11] << (ctx.gpr[14] & 31u));
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[10] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[13] - ctx.gpr[14]);
    ctx.gpr[2] = (ctx.gpr[10] | 0u);
    goto L_08AF328C;
L_08AF328C:
    ctx.gpr[3] = (ctx.gpr[6] - ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.gpr[6] = (ctx.gpr[3] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AF3330;
      }
      goto L_08AF3298;
    }
L_08AF3298:
    ctx.gpr[3] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
        goto L_08AF32A8;
    }
    goto L_08AF32A8;
L_08AF32A8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) >= 0;
    ctx.gpr[9] = (ctx.gpr[8] | ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF32D4;
      }
      goto L_08AF32B0;
    }
L_08AF32B0:
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[13]);
    ctx.gpr[8] = (ctx.gpr[10] >> 31u);
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[8]);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[8] = (ctx.gpr[10] < ctx.gpr[11] ? 1u : 0u);
    ctx.gpr[3] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (ctx.gpr[13] - ctx.gpr[14]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[10] - ctx.gpr[11]);
      if (branch_taken) {
          goto L_08AF3324;
      }
      goto L_08AF32D4;
    }
L_08AF32D4:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[13] = (ctx.gpr[8] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_08AF32FC;
      }
      goto L_08AF32DC;
    }
L_08AF32DC:
    ctx.gpr[8] = (ctx.gpr[2] >> 31u);
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[8]);
    ctx.gpr[10] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[8] = (ctx.gpr[10] < ctx.gpr[11] ? 1u : 0u);
    ctx.gpr[3] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (ctx.gpr[13] - ctx.gpr[14]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[10] - ctx.gpr[11]);
      if (branch_taken) {
          goto L_08AF3324;
      }
      goto L_08AF32FC;
    }
L_08AF32FC:
    ctx.gpr[4] = (ctx.gpr[12] >> 31u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22672));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF3324:
    ctx.gpr[15] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[15] != 0u;
    ctx.gpr[6] = (ctx.gpr[3] | 0u);
      if (branch_taken) {
          goto L_08AF3298;
      }
      goto L_08AF3330;
    }
L_08AF3330:
    ctx.gpr[6] = (ctx.gpr[9] | 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[6] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
        goto L_08AF333C;
    }
    goto L_08AF333C;
L_08AF333C:
    if (static_cast<std::int32_t>(ctx.gpr[6]) < 0) {
    ctx.gpr[6] = (ctx.gpr[13] | ctx.gpr[10]);
        goto L_08AF3350;
    }
    goto L_08AF3344;
L_08AF3344:
    ctx.gpr[13] = (ctx.gpr[6] | 0u);
    ctx.gpr[10] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[13] | ctx.gpr[10]);
    goto L_08AF3350;
L_08AF3350:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF3368;
      }
      goto L_08AF3358;
    }
L_08AF3358:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[13]);
        goto L_08AF3394;
    }
    goto L_08AF3360;
L_08AF3360:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF33B0;
      }
      goto L_08AF3368;
    }
L_08AF3368:
    ctx.gpr[4] = (ctx.gpr[12] >> 31u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22672));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF3390:
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[13]);
    goto L_08AF3394;
L_08AF3394:
    ctx.gpr[6] = (ctx.gpr[10] >> 31u);
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[6]);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AF3390;
      }
      goto L_08AF33AC;
    }
L_08AF33AC:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < -1022 ? 1u : 0u);
    goto L_08AF33B0;
L_08AF33B0:
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1022));
        goto L_08AF33E8;
    }
    goto L_08AF33B8;
L_08AF33B8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1023));
    ctx.gpr[4] = (ctx.gpr[13] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 20u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[10]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF33E8:
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 32 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF3418;
      }
      goto L_08AF33F8;
    }
L_08AF33F8:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[13] << (ctx.gpr[4] & 31u));
    ctx.gpr[10] = (ctx.gpr[10] >> (ctx.gpr[5] & 31u));
    ctx.gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[13]) >> (ctx.gpr[5] & 31u)));
    ctx.gpr[10] = (ctx.gpr[10] | ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[13] = (ctx.gpr[13] | ctx.gpr[12]);
      if (branch_taken) {
          goto L_08AF3444;
      }
      goto L_08AF3418;
    }
L_08AF3418:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 32u);
      if (branch_taken) {
          goto L_08AF3438;
      }
      goto L_08AF3420;
    }
L_08AF3420:
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[13] << (ctx.gpr[4] & 31u));
    ctx.gpr[10] = (ctx.gpr[10] >> (ctx.gpr[5] & 31u));
    ctx.gpr[10] = (ctx.gpr[4] | ctx.gpr[10]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[13] = (ctx.gpr[12] | ctx.gpr[12]);
      if (branch_taken) {
          goto L_08AF3444;
      }
      goto L_08AF3438;
    }
L_08AF3438:
    ctx.gpr[10] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[13]) >> (ctx.gpr[10] & 31u)));
    ctx.gpr[13] = (ctx.gpr[12] | ctx.gpr[12]);
    goto L_08AF3444;
L_08AF3444:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08AF3454;
L_08AF3454:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF3460:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    ctx.gpr[18] = (16u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AF35A4;
      }
      goto L_08AF34B4;
    }
L_08AF34B4:
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[8] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AF3514;
      }
      goto L_08AF34CC;
    }
L_08AF34CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22532)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22536)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-22572)));
    ctx.gpr[31] = (0x08AF34E4u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-22576)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 481u, 0x08AF656Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF34E4u) goto L_08AF34E4;
    return;
L_08AF34E4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF3514:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) < 0;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AF3558;
      }
      goto L_08AF351C;
    }
L_08AF351C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22636)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22640)));
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-54));
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08AF3540u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x08AF3540u) goto L_08AF3540;
    return;
L_08AF3540:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AF35A4;
      }
      goto L_08AF3558;
    }
L_08AF3558:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22572)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22576)));
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[31] = (0x08AF3574u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 481u, 0x08AF656Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF3574u) goto L_08AF3574;
    return;
L_08AF3574:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF35A4:
    ctx.gpr[4] = (32752u << 16u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (16u << 16u);
      if (branch_taken) {
          goto L_08AF3640;
      }
      goto L_08AF35B4;
    }
L_08AF35B4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 20u));
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (9u << 16u);
    ctx.gpr[16] = (ctx.gpr[8] & ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24420));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1023));
    ctx.gpr[4] = (16368u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 20u));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22676)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22680)));
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08AF3620u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 431u, 0x08AF6180u>(ctx, &aot_mem) && ctx.pc == 0x08AF3620u) goto L_08AF3620;
    return;
L_08AF3620:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AF367C;
      }
      goto L_08AF3638;
    }
L_08AF3638:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AF38CC;
      }
      goto L_08AF3640;
    }
L_08AF3640:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08AF364Cu);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 426u, 0x08AF6118u>(ctx, &aot_mem) && ctx.pc == 0x08AF364Cu) goto L_08AF364C;
    return;
L_08AF364C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF367C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22572)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22576)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AF369Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 514u, 0x08AF6790u>(ctx, &aot_mem) && ctx.pc == 0x08AF369Cu) goto L_08AF369C;
    return;
L_08AF369C:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
        goto L_08AF376C;
    }
    goto L_08AF36A4;
L_08AF36A4:
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[3] = (ctx.gpr[17] | 0u);
        goto L_08AF3738;
    }
    goto L_08AF36AC;
L_08AF36AC:
    ctx.gpr[31] = (0x08AF36B4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 518u, 0x08AF67ECu>(ctx, &aot_mem) && ctx.pc == 0x08AF36B4u) goto L_08AF36B4;
    return;
L_08AF36B4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22652)));
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22656)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AF36D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x08AF36D4u) goto L_08AF36D4;
    return;
L_08AF36D4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22644)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22648)));
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AF36F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x08AF36F4u) goto L_08AF36F4;
    return;
L_08AF36F4:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF3708u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 426u, 0x08AF6118u>(ctx, &aot_mem) && ctx.pc == 0x08AF3708u) goto L_08AF3708;
    return;
L_08AF3708:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF3738:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF376C:
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AF377Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x08AF377Cu) goto L_08AF377C;
    return;
L_08AF377C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22524)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22528)));
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AF379Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x08AF379Cu) goto L_08AF379C;
    return;
L_08AF379C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22516)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22520)));
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF37B4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 431u, 0x08AF6180u>(ctx, &aot_mem) && ctx.pc == 0x08AF37B4u) goto L_08AF37B4;
    return;
L_08AF37B4:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF37C8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x08AF37C8u) goto L_08AF37C8;
    return;
L_08AF37C8:
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AF3818;
      }
      goto L_08AF37D4;
    }
L_08AF37D4:
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AF37E8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 431u, 0x08AF6180u>(ctx, &aot_mem) && ctx.pc == 0x08AF37E8u) goto L_08AF37E8;
    return;
L_08AF37E8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF3818:
    ctx.gpr[31] = (0x08AF3820u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 518u, 0x08AF67ECu>(ctx, &aot_mem) && ctx.pc == 0x08AF3820u) goto L_08AF3820;
    return;
L_08AF3820:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22652)));
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22656)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AF3840u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x08AF3840u) goto L_08AF3840;
    return;
L_08AF3840:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22644)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22648)));
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AF3860u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x08AF3860u) goto L_08AF3860;
    return;
L_08AF3860:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AF3874u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 431u, 0x08AF6180u>(ctx, &aot_mem) && ctx.pc == 0x08AF3874u) goto L_08AF3874;
    return;
L_08AF3874:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AF3888u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 431u, 0x08AF6180u>(ctx, &aot_mem) && ctx.pc == 0x08AF3888u) goto L_08AF3888;
    return;
L_08AF3888:
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF389Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 431u, 0x08AF6180u>(ctx, &aot_mem) && ctx.pc == 0x08AF389Cu) goto L_08AF389C;
    return;
L_08AF389C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF38CC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22508)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22512)));
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AF38E4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 426u, 0x08AF6118u>(ctx, &aot_mem) && ctx.pc == 0x08AF38E4u) goto L_08AF38E4;
    return;
L_08AF38E4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF3900u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 481u, 0x08AF656Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF3900u) goto L_08AF3900;
    return;
L_08AF3900:
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AF3910u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 518u, 0x08AF67ECu>(ctx, &aot_mem) && ctx.pc == 0x08AF3910u) goto L_08AF3910;
    return;
L_08AF3910:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AF3934u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x08AF3934u) goto L_08AF3934;
    return;
L_08AF3934:
    ctx.gpr[4] = (6u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5242));
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[30] = (ctx.gpr[19] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AF395Cu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x08AF395Cu) goto L_08AF395C;
    return;
L_08AF395C:
    ctx.gpr[4] = (7u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18351));
    ctx.gpr[19] = (ctx.gpr[4] - ctx.gpr[19]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22588)));
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22592)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AF3988u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x08AF3988u) goto L_08AF3988;
    return;
L_08AF3988:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22604)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22608)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF39A0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 426u, 0x08AF6118u>(ctx, &aot_mem) && ctx.pc == 0x08AF39A0u) goto L_08AF39A0;
    return;
L_08AF39A0:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF39B4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x08AF39B4u) goto L_08AF39B4;
    return;
L_08AF39B4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22620)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22624)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF39CCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 426u, 0x08AF6118u>(ctx, &aot_mem) && ctx.pc == 0x08AF39CCu) goto L_08AF39CC;
    return;
L_08AF39CC:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF39E0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x08AF39E0u) goto L_08AF39E0;
    return;
L_08AF39E0:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-22580)));
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AF3A00u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-22584)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x08AF3A00u) goto L_08AF3A00;
    return;
L_08AF3A00:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-22596)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AF3A18u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-22600)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 426u, 0x08AF6118u>(ctx, &aot_mem) && ctx.pc == 0x08AF3A18u) goto L_08AF3A18;
    return;
L_08AF3A18:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF3A2Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x08AF3A2Cu) goto L_08AF3A2C;
    return;
L_08AF3A2C:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-22612)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AF3A44u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-22616)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 426u, 0x08AF6118u>(ctx, &aot_mem) && ctx.pc == 0x08AF3A44u) goto L_08AF3A44;
    return;
L_08AF3A44:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF3A58u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x08AF3A58u) goto L_08AF3A58;
    return;
L_08AF3A58:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-22628)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AF3A70u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-22632)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 426u, 0x08AF6118u>(ctx, &aot_mem) && ctx.pc == 0x08AF3A70u) goto L_08AF3A70;
    return;
L_08AF3A70:
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF3A84u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x08AF3A84u) goto L_08AF3A84;
    return;
L_08AF3A84:
    ctx.gpr[19] = (ctx.gpr[30] | ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF3A9Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 426u, 0x08AF6118u>(ctx, &aot_mem) && ctx.pc == 0x08AF3A9Cu) goto L_08AF3A9C;
    return;
L_08AF3A9C:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_08AF3C24;
      }
      goto L_08AF3AC0;
    }
L_08AF3AC0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22516)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22520)));
    ctx.gpr[30] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AF3ADCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x08AF3ADCu) goto L_08AF3ADC;
    return;
L_08AF3ADC:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AF3AF0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x08AF3AF0u) goto L_08AF3AF0;
    return;
L_08AF3AF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AF3B0Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 426u, 0x08AF6118u>(ctx, &aot_mem) && ctx.pc == 0x08AF3B0Cu) goto L_08AF3B0C;
    return;
L_08AF3B0C:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AF3B20u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x08AF3B20u) goto L_08AF3B20;
    return;
L_08AF3B20:
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    { const bool branch_taken = ctx.gpr[30] != 0u;
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AF3B5C;
      }
      goto L_08AF3B2C;
    }
L_08AF3B2C:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AF3B40u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 431u, 0x08AF6180u>(ctx, &aot_mem) && ctx.pc == 0x08AF3B40u) goto L_08AF3B40;
    return;
L_08AF3B40:
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AF3B54u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 431u, 0x08AF6180u>(ctx, &aot_mem) && ctx.pc == 0x08AF3B54u) goto L_08AF3B54;
    return;
L_08AF3B54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF3BF4;
      }
      goto L_08AF3B5C;
    }
L_08AF3B5C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22652)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22656)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AF3B84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x08AF3B84u) goto L_08AF3B84;
    return;
L_08AF3B84:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22644)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22648)));
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AF3BA4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x08AF3BA4u) goto L_08AF3BA4;
    return;
L_08AF3BA4:
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AF3BB8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 426u, 0x08AF6118u>(ctx, &aot_mem) && ctx.pc == 0x08AF3BB8u) goto L_08AF3BB8;
    return;
L_08AF3BB8:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AF3BCCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 431u, 0x08AF6180u>(ctx, &aot_mem) && ctx.pc == 0x08AF3BCCu) goto L_08AF3BCC;
    return;
L_08AF3BCC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08AF3BE0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 431u, 0x08AF6180u>(ctx, &aot_mem) && ctx.pc == 0x08AF3BE0u) goto L_08AF3BE0;
    return;
L_08AF3BE0:
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF3BF4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 431u, 0x08AF6180u>(ctx, &aot_mem) && ctx.pc == 0x08AF3BF4u) goto L_08AF3BF4;
    return;
L_08AF3BF4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF3C24:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[22] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AF3C3Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 431u, 0x08AF6180u>(ctx, &aot_mem) && ctx.pc == 0x08AF3C3Cu) goto L_08AF3C3C;
    return;
L_08AF3C3C:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AF3C50u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x08AF3C50u) goto L_08AF3C50;
    return;
L_08AF3C50:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AF3C78;
      }
      goto L_08AF3C5C;
    }
L_08AF3C5C:
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AF3C70u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 431u, 0x08AF6180u>(ctx, &aot_mem) && ctx.pc == 0x08AF3C70u) goto L_08AF3C70;
    return;
L_08AF3C70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF3CF4;
      }
      goto L_08AF3C78;
    }
L_08AF3C78:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22652)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22656)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AF3C98u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x08AF3C98u) goto L_08AF3C98;
    return;
L_08AF3C98:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22644)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22648)));
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AF3CB8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x08AF3CB8u) goto L_08AF3CB8;
    return;
L_08AF3CB8:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AF3CCCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 431u, 0x08AF6180u>(ctx, &aot_mem) && ctx.pc == 0x08AF3CCCu) goto L_08AF3CCC;
    return;
L_08AF3CCC:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AF3CE0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 431u, 0x08AF6180u>(ctx, &aot_mem) && ctx.pc == 0x08AF3CE0u) goto L_08AF3CE0;
    return;
L_08AF3CE0:
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF3CF4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 431u, 0x08AF6180u>(ctx, &aot_mem) && ctx.pc == 0x08AF3CF4u) goto L_08AF3CF4;
    return;
L_08AF3CF4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF3D24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (16u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AF3E3C;
      }
      goto L_08AF3D6C;
    }
L_08AF3D6C:
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[7] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AF3DC0;
      }
      goto L_08AF3D84;
    }
L_08AF3D84:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22532)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22536)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-22572)));
    ctx.gpr[31] = (0x08AF3D9Cu);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-22576)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 481u, 0x08AF656Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF3D9Cu) goto L_08AF3D9C;
    return;
L_08AF3D9C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF3DC0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) < 0;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AF3DFC;
      }
      goto L_08AF3DC8;
    }
L_08AF3DC8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22636)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22640)));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-54));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AF3DE4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x08AF3DE4u) goto L_08AF3DE4;
    return;
L_08AF3DE4:
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08AF3E3C;
      }
      goto L_08AF3DFC;
    }
L_08AF3DFC:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22572)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22576)));
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[31] = (0x08AF3E18u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 481u, 0x08AF656Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF3E18u) goto L_08AF3E18;
    return;
L_08AF3E18:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF3E3C:
    ctx.gpr[4] = (32752u << 16u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 20u));
      if (branch_taken) {
          goto L_08AF3E84;
      }
      goto L_08AF3E4C;
    }
L_08AF3E4C:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AF3E60u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 426u, 0x08AF6118u>(ctx, &aot_mem) && ctx.pc == 0x08AF3E60u) goto L_08AF3E60;
    return;
L_08AF3E60:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF3E84:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1023));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[6] = (16u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[8] = (0u | 1023u);
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[8] - ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] << 20u);
    ctx.gpr[18] = (ctx.gpr[6] | ctx.gpr[7]);
    ctx.gpr[31] = (0x08AF3EBCu);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 518u, 0x08AF67ECu>(ctx, &aot_mem) && ctx.pc == 0x08AF3EBCu) goto L_08AF3EBC;
    return;
L_08AF3EBC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22548)));
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22552)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AF3EF0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x08AF3EF0u) goto L_08AF3EF0;
    return;
L_08AF3EF0:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AF3F04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AF3460;
L_08AF3F04:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22564)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22568)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF3F1Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x08AF3F1Cu) goto L_08AF3F1C;
    return;
L_08AF3F1C:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF3F30u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 426u, 0x08AF6118u>(ctx, &aot_mem) && ctx.pc == 0x08AF3F30u) goto L_08AF3F30;
    return;
L_08AF3F30:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22556)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22560)));
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AF3F50u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x08AF3F50u) goto L_08AF3F50;
    return;
L_08AF3F50:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF3F64u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 426u, 0x08AF6118u>(ctx, &aot_mem) && ctx.pc == 0x08AF3F64u) goto L_08AF3F64;
    return;
L_08AF3F64:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF3F88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-5592), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF3FACu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 556u, 0x08AEA60Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF3FACu) goto L_08AF3FAC;
    return;
L_08AF3FAC:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AF3FC8;
      }
      goto L_08AF3FB8;
    }
L_08AF3FB8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5592)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF3FC8;
      }
      goto L_08AF3FC4;
    }
L_08AF3FC4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    goto L_08AF3FC8;
L_08AF3FC8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF3FDC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-5592), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF4004u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 571u, 0x08AEA690u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0187(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0187_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_187(Runtime &runtime) {
    runtime.register_generated_unit(187u, 0x08AF0000u, 16384u, &recomp_unit_0187, &recomp_unit_0187_entry);
    runtime.register_function(0x08AF0000u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0010u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0020u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0028u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0040u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF004Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0058u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0064u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0070u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0088u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0094u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF009Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF00A4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF00B4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF00C8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF00E4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF00ECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF00FCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0128u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0138u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0140u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF014Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0150u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF017Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF018Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0198u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF01A4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF01B4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF01C4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF01CCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF01D8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0210u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF021Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0220u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0228u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF023Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0244u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0258u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0260u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF027Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0288u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF028Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0298u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF02A4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF02ACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF02D4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF02FCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF030Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0310u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0334u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF033Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF035Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0364u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0370u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF037Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0384u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0390u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0398u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF03C4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF03CCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF03D4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF03E8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF03F0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF03F4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0400u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0408u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF040Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0418u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0420u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0428u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0444u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0450u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0460u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0474u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0480u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF048Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF04A4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF04B0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF04C8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF04D0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF04E8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF04FCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0508u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF050Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0514u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0528u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0530u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0544u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF054Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0564u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0570u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF057Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF05A8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF05D4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF05DCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF05E8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF05F4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0600u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF060Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0618u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0620u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0628u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0634u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0644u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF064Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0654u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0668u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0670u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0684u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF068Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF06A4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF06B0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF06C0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF06D0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF06DCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF06E4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF06F8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0700u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0714u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF071Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0734u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0740u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0744u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF075Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0764u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF076Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0770u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF077Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0784u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF079Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF07A4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF07ACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF07B0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF07BCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF07C8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF07D0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF07DCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF07E4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF07E8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF07ECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0804u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF080Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF081Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0828u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0830u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0860u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0870u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0874u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF088Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0890u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF089Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF08A8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF08BCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF08C8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF08CCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF08D4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF08DCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF08FCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0918u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0920u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0928u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0934u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0938u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF093Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0944u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF094Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0954u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF095Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF096Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF097Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF09A0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF09B0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF09D0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF09D8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF09E0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF09E4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF09E8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF09F8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0A00u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0A10u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0A18u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0A28u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0A38u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0A60u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0A70u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0A94u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0A9Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0AA4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0AB4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0AC4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0AD0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0AE0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0AE8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0AF8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0B08u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0B2Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0B3Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0B5Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0B64u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0B6Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0B7Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0B8Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0B98u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0BA4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0BB0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0BC0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0BD0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0BF4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0C04u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0C24u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0C30u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0C38u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0C48u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0C58u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0C60u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0C70u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0C7Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0C84u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0C8Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0C9Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0CACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0CD0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0CE0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0D00u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0D08u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0D10u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0D18u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0D28u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0D30u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0D40u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0D48u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0D58u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0D68u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0D8Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0D9Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0DBCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0DC4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0DCCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0DD8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0DE8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0DF0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0E04u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0E10u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0E18u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0E28u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0E38u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0E5Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0E6Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0E8Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0E94u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0E9Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0EA4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0EB4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0EBCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0ECCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0ED4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0EE4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0EF4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0F1Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0F2Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0F50u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0F58u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0F60u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0F6Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0F7Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0F88u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0F90u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0FA0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0FB0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0FD0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0FE0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0FF8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1000u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1008u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1014u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1024u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1030u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF103Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF104Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1054u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1064u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1074u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1098u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF10A8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF10C8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF10D0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF10D8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF10E0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF10F0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF10F8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1108u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1110u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1120u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1130u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF114Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF115Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1174u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF117Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1184u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1190u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF11A0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF11A4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF11B0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF11C0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF11C4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF11D0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF11E4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1218u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1268u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1270u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1278u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF12A4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF12C8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF12D0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF12D8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF12E4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF12ECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF12F4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF12FCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1304u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1308u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1310u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1320u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1328u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1330u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1354u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1360u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1370u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1380u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1388u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1398u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF13A8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF13ACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF13C0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF13E8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1420u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1430u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1440u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF145Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1490u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1494u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF14C0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF14D0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF14DCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF14ECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1518u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1544u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF15D4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF15E4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1600u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF160Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1618u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1624u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1630u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1640u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1650u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1660u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF167Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF168Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF16A4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF16ACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF16B4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF16C4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF16D4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF16E0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF16E8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF16F4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1704u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1708u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1724u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1734u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF173Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1754u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1760u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF176Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1778u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1784u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1794u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF17A0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF17A8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF17B0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF17C0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF17D0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF17E4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF17ECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF17FCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1828u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1838u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1840u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF184Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1850u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF187Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF188Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1898u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF18A8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF18B8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF18C0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF18CCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF190Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF191Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1924u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF192Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1938u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1940u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF194Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1954u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1968u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF196Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1970u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF197Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1988u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1990u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF19A0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF19B4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF19C0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF19D4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF19DCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF19F0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1A00u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1A10u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1A18u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1A20u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1A2Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1A34u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1A40u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1A48u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1A58u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1A5Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1A68u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1A8Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1AACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1AB4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1AC0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1AD4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1AE4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1AF0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1AFCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1B04u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1B18u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1B2Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1B40u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1B4Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1B54u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1B60u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1B68u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1B74u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1B7Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1B8Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1B90u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1BA0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1BB4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1BC4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1BCCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1BD8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1BE0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1BECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1BF4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1C04u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1C08u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1C0Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1C24u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1C2Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1C34u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1C38u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1C44u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1C4Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1C64u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1C6Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1C74u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1C78u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1C84u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1CA0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1CA8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1CB0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1CB8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1CBCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1CC0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1CD8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1CE0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1CF0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1CFCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1D0Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1D3Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1D50u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1D54u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1D6Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1D70u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1D7Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1D88u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1D9Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1DB8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1DBCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1DD4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1DDCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1E0Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1E18u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1E20u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1E28u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1E34u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1E38u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1E3Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1E44u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1E50u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1E5Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1E64u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1E74u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1E84u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1EA8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1EB8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1ED8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1EE0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1EE8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1EECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1EF0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1F00u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1F08u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1F18u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1F20u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1F30u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1F40u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1F68u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1F74u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1F98u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1FA4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1FACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1FBCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1FCCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1FD8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1FE8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1FF0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2000u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2010u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2034u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2040u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2060u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2068u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2070u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2080u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2090u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF209Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF20A8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF20B4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF20C4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF20D4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF20F8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2104u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2124u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2130u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2138u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2148u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2158u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2160u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2170u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2180u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2188u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2190u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF21A0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF21B0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF21D4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF21E4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2204u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF220Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2214u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF221Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF222Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2234u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2244u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF224Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF225Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF226Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2290u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF229Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF22BCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF22C4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF22CCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF22D8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF22E8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF22F0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2304u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF230Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2314u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2324u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2334u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2358u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2368u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2388u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2390u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2398u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF23A0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF23B0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF23B8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF23C8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF23D0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF23E0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF23F0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2418u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2424u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2448u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2450u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2458u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2464u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2474u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2480u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2488u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2498u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF24A8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF24C8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF24D8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF24F0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF24F8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2500u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF250Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF251Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2528u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2538u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF254Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2554u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2564u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2574u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2598u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF25A8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF25C8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF25D0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF25D8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF25E0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF25F0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF25F8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2608u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2610u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2620u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2630u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF264Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF265Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2674u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF267Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2684u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2690u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF26A0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF26A4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF26B0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF26C0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF26C4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF26D0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF26E4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2718u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2728u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2734u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2770u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2778u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2794u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF27B4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF27C4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF27C8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF27D0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF27DCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF27ECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2804u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF280Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2818u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF282Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2838u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2844u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF285Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2860u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2868u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF286Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF287Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2888u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF28D0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF28D8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF28E0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF28E8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF28F4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF28FCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2904u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF290Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2918u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2920u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF292Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2938u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2940u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2954u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF297Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2984u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2998u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF29A0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF29B0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF29B8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF29C4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF29F0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2A34u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2A3Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2A4Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2A54u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2A60u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2A6Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2A84u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2A8Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2A90u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2AB4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2AD8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2AE0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2B04u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2B0Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2B30u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2B48u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2B50u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2B74u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2B88u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2BA4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2BB0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2BC4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2BCCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2BD8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2BE0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2BECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2BF0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2BF8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2C08u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2C10u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2C20u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2C2Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2C3Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2C4Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2C6Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2C74u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2C80u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2C88u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2C98u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2CA0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2CA8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2CB0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2CB8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2CC0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2CC8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2CD0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2CE0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2CF8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2D00u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2D10u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2D1Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2D24u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2D28u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2D30u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2D38u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2D3Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2D44u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2D64u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2D70u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2D7Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2D90u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2D9Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2DE0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2DE8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2E00u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2E18u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2E20u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2E28u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2E34u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2E48u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2E54u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2E6Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2E80u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2E98u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2EA0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2EA8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2EB4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2EC0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2ECCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2EDCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2EF0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2EF8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2F1Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2F30u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2F44u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2F5Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2F64u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2F6Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2F88u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2F90u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2F9Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2FA4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2FC4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2FC8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2FCCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2FF4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF304Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF305Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3078u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3080u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3088u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF309Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF30B0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF30BCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF30C4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF30CCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF30D4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF30D8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF30E4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF30ECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF30F0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3114u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF311Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3128u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3134u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF313Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3140u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3148u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3154u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF315Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3160u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3164u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3168u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3170u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3178u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3184u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3190u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3198u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF319Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF31A4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF31B0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF31B8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF31BCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF31C0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF31C4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF31CCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF31E0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF31F4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF320Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3218u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3220u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3240u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3250u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3274u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF328Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3298u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF32A8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF32B0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF32D4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF32DCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF32FCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3324u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3330u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF333Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3344u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3350u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3358u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3360u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3368u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3390u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3394u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF33ACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF33B0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF33B8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF33E8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF33F8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3418u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3420u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3438u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3444u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3454u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3460u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF34B4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF34CCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF34E4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3514u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF351Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3540u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3558u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3574u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF35A4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF35B4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3620u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3638u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3640u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF364Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF367Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF369Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF36A4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF36ACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF36B4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF36D4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF36F4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3708u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3738u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF376Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF377Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF379Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF37B4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF37C8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF37D4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF37E8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3818u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3820u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3840u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3860u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3874u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3888u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF389Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF38CCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF38E4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3900u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3910u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3934u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF395Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3988u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF39A0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF39B4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF39CCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF39E0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3A00u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3A18u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3A2Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3A44u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3A58u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3A70u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3A84u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3A9Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3AC0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3ADCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3AF0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3B0Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3B20u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3B2Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3B40u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3B54u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3B5Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3B84u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3BA4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3BB8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3BCCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3BE0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3BF4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3C24u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3C3Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3C50u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3C5Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3C70u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3C78u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3C98u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3CB8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3CCCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3CE0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3CF4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3D24u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3D6Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3D84u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3D9Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3DC0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3DC8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3DE4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3DFCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3E18u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3E3Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3E4Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3E60u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3E84u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3EBCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3EF0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3F04u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3F1Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3F30u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3F50u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3F64u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3F88u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3FACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3FB8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3FC4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3FC8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3FDCu, &recomp_unit_0187, "recomp_unit_0187");
}
} // namespace psprecomp
