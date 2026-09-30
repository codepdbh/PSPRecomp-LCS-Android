#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0114[4091] = {
    1, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0,
    0, 0, 0, 8, 0, 9, 10, 0, 0, 11, 0, 0, 12, 0, 0, 13, 0, 14, 0, 15, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18,
    0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21,
    0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 27, 0, 0, 28, 0, 29,
    0, 30, 31, 0, 32, 0, 33, 0, 34, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0,
    0, 0, 40, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 49, 0, 50, 51, 0, 0, 52, 0, 0, 0,
    0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0,
    60, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 67, 0, 68, 0, 0, 0, 69, 0, 70, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0,
    0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0,
    81, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0,
    0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 92, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0,
    0, 0, 0, 0, 0, 98, 0, 99, 0, 100, 0, 0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0,
    104, 0, 105, 0, 106, 107, 0, 0, 0, 108, 0, 109, 0, 0, 0, 0, 110, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 115, 0, 116, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0,
    0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 123, 0, 0, 0, 0, 0,
    0, 124, 0, 125, 0, 0, 126, 0, 0, 127, 0, 128, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 132, 0, 133, 0, 0,
    0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 137, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 142, 0, 143, 0, 144, 0, 145, 0, 0, 146, 0, 0, 0, 147,
    0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 150, 151, 0, 0, 0, 0, 0, 152, 0, 0, 153, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155,
    156, 0, 0, 157, 0, 0, 0, 158, 0, 159, 0, 0, 0, 160, 0, 161, 162, 0, 0, 163, 0, 0, 0, 164, 0, 165, 0, 0, 0, 166, 0, 0,
    167, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 172, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0,
    175, 0, 0, 0, 176, 0, 177, 0, 178, 0, 179, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 182, 0, 0, 183, 0, 0, 0, 184, 0, 0,
    185, 0, 186, 0, 187, 0, 0, 0, 188, 0, 189, 0, 190, 191, 0, 0, 0, 0, 192, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 199, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0,
    0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 209, 0,
    210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 214, 0, 0, 0, 0, 215, 0, 216, 0, 0, 0, 0, 217,
    0, 218, 0, 0, 0, 219, 0, 220, 0, 221, 0, 222, 0, 223, 0, 0, 224, 225, 0, 226, 0, 227, 0, 0, 0, 228, 0, 229, 0, 0, 230, 0,
    231, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 239,
    0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 244, 0, 0, 0, 0, 245, 0, 246, 0, 0, 0, 0,
    247, 0, 248, 0, 0, 0, 249, 0, 250, 0, 251, 0, 252, 0, 253, 0, 0, 254, 0, 255, 0, 256, 0, 0, 257, 0, 258, 0, 259, 0, 0, 0,
    260, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0, 264, 0, 265, 0, 0, 0, 0, 266, 0, 267, 0, 0,
    0, 268, 0, 269, 0, 270, 0, 271, 0, 272, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0,
    0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0,
    0, 0, 281, 0, 0, 0, 0, 282, 283, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0,
    288, 0, 289, 0, 0, 0, 0, 290, 0, 291, 0, 0, 0, 0, 292, 0, 293, 0, 0, 0, 294, 0, 295, 0, 296, 0, 297, 0, 298, 0, 0, 0,
    299, 300, 0, 301, 0, 302, 0, 0, 0, 303, 0, 304, 0, 0, 305, 0, 306, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 0,
    0, 0, 310, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 313, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0,
    0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 319, 0, 320, 0, 0, 0, 0, 321, 0, 322, 0, 0, 0, 0, 323, 0, 324, 0,
    0, 0, 325, 0, 326, 0, 327, 0, 328, 0, 329, 0, 0, 0, 330, 0, 331, 0, 332, 0, 0, 0, 0, 333, 0, 334, 0, 335, 0, 0, 0, 0,
    0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0, 339, 0, 340, 0, 0, 0, 0, 341, 0, 342, 0, 0, 0, 0, 343, 0, 344,
    0, 0, 0, 345, 0, 346, 0, 347, 0, 348, 0, 349, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 352,
    0, 0, 0, 353, 0, 354, 0, 355, 0, 356, 0, 0, 357, 0, 358, 0, 0, 359, 0, 360, 0, 361, 0, 362, 0, 0, 0, 363, 0, 364, 0, 365,
    0, 366, 0, 0, 367, 0, 368, 0, 369, 0, 0, 0, 370, 0, 0, 371, 0, 0, 0, 0, 0, 0, 372, 0, 373, 0, 374, 0, 0, 0, 0, 0,
    375, 0, 376, 377, 0, 378, 0, 379, 0, 380, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 383, 0, 0, 384, 0, 385, 0,
    0, 0, 386, 0, 387, 0, 0, 388, 0, 389, 0, 390, 0, 0, 391, 0, 392, 393, 0, 0, 0, 394, 0, 395, 0, 396, 0, 0, 0, 397, 0, 0,
    0, 0, 0, 398, 399, 0, 0, 400, 0, 401, 0, 0, 0, 402, 0, 403, 0, 0, 0, 404, 0, 405, 0, 0, 406, 0, 407, 0, 0, 0, 0, 408,
    0, 409, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 411, 0, 412, 413, 0, 414, 0, 415, 0, 416, 0, 0, 417, 0, 418, 0, 0, 0, 0, 419,
    0, 0, 0, 0, 420, 0, 421, 0, 422, 0, 423, 0, 424, 0, 425, 0, 0, 426, 0, 427, 0, 428, 0, 429, 0, 0, 430, 0, 431, 0, 0, 0,
    432, 0, 0, 433, 0, 434, 0, 0, 0, 0, 0, 435, 436, 0, 0, 437, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0,
    440, 0, 0, 441, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 0, 0, 445, 0, 0, 0, 0, 446, 0, 0, 0,
    0, 447, 448, 0, 0, 0, 0, 0, 449, 0, 450, 451, 0, 452, 0, 0, 453, 0, 454, 0, 455, 456, 0, 0, 0, 0, 457, 0, 0, 458, 0, 459,
    0, 0, 0, 0, 460, 0, 0, 0, 461, 0, 462, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 465, 0,
    466, 467, 0, 0, 468, 0, 0, 469, 0, 470, 0, 471, 0, 472, 0, 473, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 475, 0, 0, 476, 0,
    477, 0, 478, 0, 479, 0, 0, 480, 0, 481, 0, 0, 0, 0, 0, 482, 0, 483, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0,
    0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 489, 0, 0, 0, 490, 0, 491, 0, 0, 492, 0, 0, 0, 0, 493, 0, 0, 0, 0,
    494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 496, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 498, 0, 0, 0, 0, 0, 499, 0,
    0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 501, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 504, 0, 505, 0, 0, 506, 0, 0,
    507, 0, 0, 508, 0, 509, 0, 0, 0, 0, 0, 0, 0, 510, 0, 511, 0, 0, 0, 0, 512, 0, 513, 0, 0, 0, 514, 0, 0, 0, 515, 0,
    0, 516, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 518, 0, 0, 519, 0, 0, 520, 521, 0, 522, 0, 0, 0, 523, 524, 0, 525,
    0, 0, 526, 0, 0, 0, 527, 528, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 531, 0, 0, 532, 0, 0, 0, 0, 533, 0, 0, 0, 0, 534, 0, 0,
    0, 0, 535, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 538, 0, 0, 0, 0, 0, 539, 0, 540, 0, 0, 541,
    0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 543, 0, 0, 544, 0, 545, 0, 0, 546, 0, 547, 0, 0, 0, 548, 0, 549, 0, 550, 0, 0, 551,
    0, 552, 0, 0, 553, 0, 0, 554, 0, 0, 0, 555, 0, 556, 557, 0, 558, 0, 559, 0, 560, 0, 561, 0, 562, 0, 563, 0, 564, 0, 0, 0,
    0, 565, 0, 566, 0, 567, 0, 0, 0, 0, 568, 0, 569, 0, 570, 0, 571, 0, 572, 0, 0, 0, 0, 0, 573, 0, 574, 0, 575, 0, 0, 0,
    0, 576, 0, 0, 0, 577, 0, 0, 578, 0, 579, 0, 580, 0, 581, 0, 582, 0, 0, 0, 583, 0, 0, 584, 0, 585, 0, 0, 0, 0, 586, 0,
    587, 0, 588, 0, 589, 0, 0, 590, 0, 591, 0, 0, 0, 0, 592, 0, 0, 593, 0, 0, 594, 0, 595, 0, 0, 0, 596, 0, 0, 597, 0, 598,
    0, 0, 0, 0, 599, 0, 600, 0, 601, 0, 0, 0, 0, 0, 602, 0, 603, 0, 604, 0, 0, 0, 0, 605, 0, 0, 606, 0, 607, 0, 608, 0,
    609, 0, 610, 0, 611, 0, 0, 0, 612, 0, 613, 0, 0, 0, 614, 0, 615, 0, 0, 616, 0, 617, 0, 618, 0, 0, 0, 619, 0, 0, 0, 0,
    0, 620, 0, 0, 621, 0, 622, 0, 0, 0, 623, 0, 0, 0, 0, 0, 624, 0, 625, 0, 626, 0, 627, 0, 0, 0, 628, 0, 0, 0, 0, 0,
    629, 0, 630, 0, 0, 631, 0, 0, 0, 632, 0, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 638, 0, 0, 0, 0, 0,
    0, 0, 0, 639, 0, 0, 0, 0, 0, 0, 640, 0, 0, 641, 0, 0, 0, 642, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 644,
    0, 0, 0, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0, 647, 0, 0, 0, 648, 0, 0, 0, 0, 649, 0, 0, 650,
    0, 0, 0, 0, 0, 651, 0, 652, 0, 0, 0, 653, 0, 0, 0, 0, 654, 0, 0, 0, 655, 0, 0, 656, 0, 657, 0, 0, 0, 658, 0, 659,
    0, 660, 0, 661, 0, 0, 0, 0, 0, 662, 0, 0, 663, 0, 0, 0, 0, 0, 664, 0, 665, 0, 0, 0, 0, 0, 0, 0, 666, 0, 0, 0,
    667, 0, 0, 0, 0, 668, 0, 0, 0, 669, 0, 0, 670, 671, 0, 0, 0, 0, 0, 672, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 0,
    0, 674, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 675, 0, 0, 0, 676, 0, 0, 0, 0, 0, 677, 0, 0, 0, 678,
    0, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 0, 0, 0, 680, 0, 0, 0, 0, 0, 0, 0, 681, 0, 0, 682, 683, 0, 0, 0, 684,
    0, 0, 0, 0, 0, 685, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0, 0, 0, 688, 0, 0, 689, 0, 0, 0, 0,
    0, 690, 0, 0, 0, 0, 691, 0, 692, 0, 693, 694, 0, 0, 695, 0, 0, 0, 0, 0, 0, 696, 0, 697, 0, 0, 698, 0, 0, 0, 0, 699,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 700, 0, 701, 0, 0, 702, 0, 0, 703, 0, 704, 0, 0, 0, 0, 0, 705, 0, 0, 0,
    706, 0, 0, 0, 0, 0, 707, 0, 0, 708, 0, 0, 0, 0, 0, 0, 0, 0, 709, 0, 0, 0, 0, 0, 0, 710, 0, 0, 711, 712, 0, 713,
    0, 0, 0, 0, 714, 0, 0, 0, 0, 0, 715, 0, 0, 0, 0, 0, 0, 716, 0, 0, 0, 717, 0, 0, 0, 718, 0, 0, 0, 0, 0, 0,
    719, 0, 0, 0, 720, 0, 0, 0, 0, 721, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 722, 0, 0, 0, 0, 0, 0, 0, 723,
    0, 724, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 725, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 726, 0, 0, 727, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 728, 0, 0, 0, 0, 729, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 730, 0, 731, 0, 0, 0, 0, 732, 733, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 734,
    0, 735, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 736, 0, 0, 0, 737, 0, 0, 0, 738, 0, 0, 0, 0, 0, 0, 739, 0, 0, 0,
    0, 0, 740, 0, 0, 741, 0, 0, 0, 742, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 743, 0, 0, 744, 0, 0, 745, 0, 0,
    746, 0, 0, 0, 747, 0, 748, 0, 749, 0, 0, 0, 0, 0, 750, 0, 0, 0, 0, 0, 0, 751, 0, 0, 0, 0, 0, 0, 0, 0, 0, 752,
    0, 0, 0, 0, 753, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 754, 0, 0, 0, 0,
    0, 0, 755, 0, 0, 0, 756, 0, 0, 0, 757, 0, 0, 0, 0, 0, 0, 0, 758, 0, 0, 759, 0, 760, 0, 761, 762, 0, 763, 0, 0, 0,
    764, 0, 765, 0, 766, 0, 767, 0, 768, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 769, 0, 0, 0, 770, 0, 771, 0, 0, 772, 0, 0,
    773, 0, 0, 0, 774, 0, 775, 0, 0, 776, 0, 777, 0, 0, 0, 0, 778, 0, 0, 0, 779, 0, 780, 0, 0, 781, 0, 782, 0, 0, 0, 783,
    0, 0, 784, 0, 0, 0, 0, 0, 0, 0, 785, 0, 0, 0, 0, 0, 0, 0, 0, 0, 786, 0, 0, 0, 0, 0, 787, 0, 0, 0, 0, 0,
    0, 0, 788, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 789, 0, 0, 790, 0, 791, 0, 0, 792, 0, 0, 0, 793, 0, 794, 0, 795, 0, 0,
    796, 0, 797, 0, 0, 0, 798, 0, 0, 0, 799, 0, 0, 0, 0, 0, 800, 0, 0, 0, 0, 0, 0, 0, 0, 801, 0, 0, 0, 0, 0, 802,
    0, 0, 0, 0, 0, 803, 0, 0, 0, 804, 0, 0, 805, 0, 0, 0, 0, 0, 806, 0, 0, 0, 0, 0, 0, 0, 0, 0, 807, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 808, 0, 0, 809, 0, 0, 0, 0, 0, 810, 0, 0, 0, 0, 811, 0, 0, 0, 0, 812, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 813, 0, 0, 0, 0, 0, 0, 0, 0, 0, 814, 0, 815, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 816, 0, 0, 0, 817, 0, 0, 0, 0, 0, 818, 819, 0, 0, 0, 820, 0, 0, 0, 0, 0, 821, 0, 0, 0,
    0, 0, 822, 0, 0, 0, 0, 0, 0, 0, 823, 0, 0, 0, 0, 0, 0, 0, 0, 824, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 825, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 826, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    827, 0, 0, 0, 0, 0, 828, 0, 0, 0, 0, 0, 0, 829, 0, 0, 0, 0, 0, 0, 0, 0, 830, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    831, 0, 0, 0, 0, 0, 0, 0, 0, 0, 832, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 833, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 834, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 835, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 836, 0, 0, 0,
    837, 0, 0, 0, 0, 838, 0, 0, 839, 0, 840, 0, 841, 0, 0, 0, 842, 0, 0, 843, 0, 844, 0, 0, 0, 0, 0, 0, 0, 845, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 846, 0, 847, 0, 0, 0, 848, 0, 0, 0, 849, 0, 0, 0, 0, 0, 0, 850, 0, 0, 0, 0, 0, 0,
    851, 0, 0, 852, 0, 0, 853, 0, 0, 854, 0, 0, 0, 0, 855, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 856, 0,
    0, 0, 0, 0, 0, 857, 0, 0, 0, 0, 0, 858, 0, 859, 0, 0, 860, 0, 0, 861, 0, 0, 862, 0, 0, 0, 863, 0, 0, 0, 0, 864,
    0, 0, 0, 865, 0, 0, 0, 0, 0, 866, 0, 0, 0, 0, 0, 0, 0, 0, 0, 867, 0, 0, 0, 0, 0, 0, 0, 868, 0, 0, 869, 0,
    0, 0, 0, 870, 0, 871, 0, 872, 0, 0, 0, 0, 0, 0, 873, 0, 0, 0, 0, 874, 0, 0, 0, 0, 875, 0, 0, 0, 0, 0, 0, 0,
    876, 0, 0, 0, 877, 0, 0, 0, 878, 0, 0, 0, 0, 0, 0, 879, 0, 0, 0, 880, 0, 881, 0, 882, 0, 0, 883, 0, 0, 0, 0, 0,
    0, 884, 0, 0, 885, 886, 0, 0, 0, 0, 887, 0, 0, 0, 0, 0, 0, 888, 0, 0, 0, 0, 0, 0, 889, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 890, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 891, 0, 0, 892, 0, 0, 0, 893, 0, 0, 894, 0, 895, 0, 0, 0,
    0, 896, 0, 897, 0, 898, 0, 0, 899, 0, 900, 0, 0, 901, 0, 902, 0, 903, 0, 904, 0, 0, 0, 905, 0, 0, 0, 0, 0, 0, 0, 906,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 907, 0, 0, 0, 0, 908, 0, 909, 0, 0, 0, 910, 0, 911, 0, 0, 912, 0, 913,
    0, 0, 0, 0, 914, 0, 915, 0, 0, 0, 916, 0, 0, 0, 0, 0, 0, 0, 917, 0, 0, 0, 0, 0, 0, 0, 0, 918, 0, 0, 919, 0,
    920, 0, 0, 921, 0, 0, 922, 0, 923, 0, 0, 0, 0, 0, 0, 924, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 925, 0,
    0, 926, 0, 927, 0, 0, 0, 928, 0, 0, 0, 929, 0, 930, 0, 0, 931, 0, 932, 0, 0, 0, 933, 0, 0, 0, 934,
};
void recomp_unit_0114_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089CC004u;
        entry_id = (entry_delta < 16364u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0114[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089CC004;
    case 2u: goto L_089CC014;
    case 3u: goto L_089CC020;
    case 4u: goto L_089CC038;
    case 5u: goto L_089CC04C;
    case 6u: goto L_089CC068;
    case 7u: goto L_089CC078;
    case 8u: goto L_089CC090;
    case 9u: goto L_089CC098;
    case 10u: goto L_089CC09C;
    case 11u: goto L_089CC0A8;
    case 12u: goto L_089CC0B4;
    case 13u: goto L_089CC0C0;
    case 14u: goto L_089CC0C8;
    case 15u: goto L_089CC0D0;
    case 16u: goto L_089CC0D8;
    case 17u: goto L_089CC0E8;
    case 18u: goto L_089CC100;
    case 19u: goto L_089CC114;
    case 20u: goto L_089CC144;
    case 21u: goto L_089CC180;
    case 22u: goto L_089CC194;
    case 23u: goto L_089CC1A4;
    case 24u: goto L_089CC1B4;
    case 25u: goto L_089CC1DC;
    case 26u: goto L_089CC1E4;
    case 27u: goto L_089CC1EC;
    case 28u: goto L_089CC1F8;
    case 29u: goto L_089CC200;
    case 30u: goto L_089CC208;
    case 31u: goto L_089CC20C;
    case 32u: goto L_089CC214;
    case 33u: goto L_089CC21C;
    case 34u: goto L_089CC224;
    case 35u: goto L_089CC22C;
    case 36u: goto L_089CC244;
    case 37u: goto L_089CC258;
    case 38u: goto L_089CC264;
    case 39u: goto L_089CC26C;
    case 40u: goto L_089CC28C;
    case 41u: goto L_089CC294;
    case 42u: goto L_089CC2BC;
    case 43u: goto L_089CC2D4;
    case 44u: goto L_089CC308;
    case 45u: goto L_089CC310;
    case 46u: goto L_089CC330;
    case 47u: goto L_089CC344;
    case 48u: goto L_089CC354;
    case 49u: goto L_089CC35C;
    case 50u: goto L_089CC364;
    case 51u: goto L_089CC368;
    case 52u: goto L_089CC374;
    case 53u: goto L_089CC38C;
    case 54u: goto L_089CC3A0;
    case 55u: goto L_089CC3AC;
    case 56u: goto L_089CC3C0;
    case 57u: goto L_089CC3D4;
    case 58u: goto L_089CC3E0;
    case 59u: goto L_089CC3F0;
    case 60u: goto L_089CC404;
    case 61u: goto L_089CC408;
    case 62u: goto L_089CC430;
    case 63u: goto L_089CC438;
    case 64u: goto L_089CC44C;
    case 65u: goto L_089CC464;
    case 66u: goto L_089CC470;
    case 67u: goto L_089CC498;
    case 68u: goto L_089CC4A0;
    case 69u: goto L_089CC4B0;
    case 70u: goto L_089CC4B8;
    case 71u: goto L_089CC4C4;
    case 72u: goto L_089CC4D4;
    case 73u: goto L_089CC4E8;
    case 74u: goto L_089CC4F8;
    case 75u: goto L_089CC508;
    case 76u: goto L_089CC518;
    case 77u: goto L_089CC52C;
    case 78u: goto L_089CC54C;
    case 79u: goto L_089CC560;
    case 80u: goto L_089CC574;
    case 81u: goto L_089CC584;
    case 82u: goto L_089CC58C;
    case 83u: goto L_089CC59C;
    case 84u: goto L_089CC5C4;
    case 85u: goto L_089CC5E4;
    case 86u: goto L_089CC5FC;
    case 87u: goto L_089CC60C;
    case 88u: goto L_089CC618;
    case 89u: goto L_089CC62C;
    case 90u: goto L_089CC644;
    case 91u: goto L_089CC64C;
    case 92u: goto L_089CC658;
    case 93u: goto L_089CC65C;
    case 94u: goto L_089CC67C;
    case 95u: goto L_089CC6AC;
    case 96u: goto L_089CC6E8;
    case 97u: goto L_089CC6F8;
    case 98u: goto L_089CC718;
    case 99u: goto L_089CC720;
    case 100u: goto L_089CC728;
    case 101u: goto L_089CC73C;
    case 102u: goto L_089CC748;
    case 103u: goto L_089CC77C;
    case 104u: goto L_089CC784;
    case 105u: goto L_089CC78C;
    case 106u: goto L_089CC794;
    case 107u: goto L_089CC798;
    case 108u: goto L_089CC7A8;
    case 109u: goto L_089CC7B0;
    case 110u: goto L_089CC7C4;
    case 111u: goto L_089CC7CC;
    case 112u: goto L_089CC7E0;
    case 113u: goto L_089CC80C;
    case 114u: goto L_089CC840;
    case 115u: goto L_089CC848;
    case 116u: goto L_089CC850;
    case 117u: goto L_089CC85C;
    case 118u: goto L_089CC86C;
    case 119u: goto L_089CC890;
    case 120u: goto L_089CC8A0;
    case 121u: goto L_089CC8D8;
    case 122u: goto L_089CC8E4;
    case 123u: goto L_089CC8EC;
    case 124u: goto L_089CC908;
    case 125u: goto L_089CC910;
    case 126u: goto L_089CC91C;
    case 127u: goto L_089CC928;
    case 128u: goto L_089CC930;
    case 129u: goto L_089CC944;
    case 130u: goto L_089CC950;
    case 131u: goto L_089CC960;
    case 132u: goto L_089CC970;
    case 133u: goto L_089CC978;
    case 134u: goto L_089CC98C;
    case 135u: goto L_089CC9B8;
    case 136u: goto L_089CC9C8;
    case 137u: goto L_089CC9D0;
    case 138u: goto L_089CC9D8;
    case 139u: goto L_089CC9F4;
    case 140u: goto L_089CCA2C;
    case 141u: goto L_089CCA38;
    case 142u: goto L_089CCA4C;
    case 143u: goto L_089CCA54;
    case 144u: goto L_089CCA5C;
    case 145u: goto L_089CCA64;
    case 146u: goto L_089CCA70;
    case 147u: goto L_089CCA80;
    case 148u: goto L_089CCA88;
    case 149u: goto L_089CCAA0;
    case 150u: goto L_089CCAAC;
    case 151u: goto L_089CCAB0;
    case 152u: goto L_089CCAC8;
    case 153u: goto L_089CCAD4;
    case 154u: goto L_089CCAD8;
    case 155u: goto L_089CCB00;
    case 156u: goto L_089CCB04;
    case 157u: goto L_089CCB10;
    case 158u: goto L_089CCB20;
    case 159u: goto L_089CCB28;
    case 160u: goto L_089CCB38;
    case 161u: goto L_089CCB40;
    case 162u: goto L_089CCB44;
    case 163u: goto L_089CCB50;
    case 164u: goto L_089CCB60;
    case 165u: goto L_089CCB68;
    case 166u: goto L_089CCB78;
    case 167u: goto L_089CCB84;
    case 168u: goto L_089CCB94;
    case 169u: goto L_089CCBA8;
    case 170u: goto L_089CCBB8;
    case 171u: goto L_089CCBC8;
    case 172u: goto L_089CCBD4;
    case 173u: goto L_089CCBE0;
    case 174u: goto L_089CCBFC;
    case 175u: goto L_089CCC04;
    case 176u: goto L_089CCC14;
    case 177u: goto L_089CCC1C;
    case 178u: goto L_089CCC24;
    case 179u: goto L_089CCC2C;
    case 180u: goto L_089CCC34;
    case 181u: goto L_089CCC50;
    case 182u: goto L_089CCC5C;
    case 183u: goto L_089CCC68;
    case 184u: goto L_089CCC78;
    case 185u: goto L_089CCC84;
    case 186u: goto L_089CCC8C;
    case 187u: goto L_089CCC94;
    case 188u: goto L_089CCCA4;
    case 189u: goto L_089CCCAC;
    case 190u: goto L_089CCCB4;
    case 191u: goto L_089CCCB8;
    case 192u: goto L_089CCCCC;
    case 193u: goto L_089CCCD4;
    case 194u: goto L_089CCD04;
    case 195u: goto L_089CCD4C;
    case 196u: goto L_089CCD5C;
    case 197u: goto L_089CCD68;
    case 198u: goto L_089CCDCC;
    case 199u: goto L_089CCDD4;
    case 200u: goto L_089CCDDC;
    case 201u: goto L_089CCDF8;
    case 202u: goto L_089CCE08;
    case 203u: goto L_089CCE18;
    case 204u: goto L_089CCE30;
    case 205u: goto L_089CCE48;
    case 206u: goto L_089CCE50;
    case 207u: goto L_089CCE68;
    case 208u: goto L_089CCE78;
    case 209u: goto L_089CCE7C;
    case 210u: goto L_089CCE84;
    case 211u: goto L_089CCE94;
    case 212u: goto L_089CCEB8;
    case 213u: goto L_089CCEC8;
    case 214u: goto L_089CCED0;
    case 215u: goto L_089CCEE4;
    case 216u: goto L_089CCEEC;
    case 217u: goto L_089CCF00;
    case 218u: goto L_089CCF08;
    case 219u: goto L_089CCF18;
    case 220u: goto L_089CCF20;
    case 221u: goto L_089CCF28;
    case 222u: goto L_089CCF30;
    case 223u: goto L_089CCF38;
    case 224u: goto L_089CCF44;
    case 225u: goto L_089CCF48;
    case 226u: goto L_089CCF50;
    case 227u: goto L_089CCF58;
    case 228u: goto L_089CCF68;
    case 229u: goto L_089CCF70;
    case 230u: goto L_089CCF7C;
    case 231u: goto L_089CCF84;
    case 232u: goto L_089CCF8C;
    case 233u: goto L_089CCF9C;
    case 234u: goto L_089CCFB8;
    case 235u: goto L_089CCFC8;
    case 236u: goto L_089CCFD0;
    case 237u: goto L_089CCFE4;
    case 238u: goto L_089CCFFC;
    case 239u: goto L_089CD000;
    case 240u: goto L_089CD00C;
    case 241u: goto L_089CD01C;
    case 242u: goto L_089CD03C;
    case 243u: goto L_089CD04C;
    case 244u: goto L_089CD054;
    case 245u: goto L_089CD068;
    case 246u: goto L_089CD070;
    case 247u: goto L_089CD084;
    case 248u: goto L_089CD08C;
    case 249u: goto L_089CD09C;
    case 250u: goto L_089CD0A4;
    case 251u: goto L_089CD0AC;
    case 252u: goto L_089CD0B4;
    case 253u: goto L_089CD0BC;
    case 254u: goto L_089CD0C8;
    case 255u: goto L_089CD0D0;
    case 256u: goto L_089CD0D8;
    case 257u: goto L_089CD0E4;
    case 258u: goto L_089CD0EC;
    case 259u: goto L_089CD0F4;
    case 260u: goto L_089CD104;
    case 261u: goto L_089CD128;
    case 262u: goto L_089CD138;
    case 263u: goto L_089CD140;
    case 264u: goto L_089CD154;
    case 265u: goto L_089CD15C;
    case 266u: goto L_089CD170;
    case 267u: goto L_089CD178;
    case 268u: goto L_089CD188;
    case 269u: goto L_089CD190;
    case 270u: goto L_089CD198;
    case 271u: goto L_089CD1A0;
    case 272u: goto L_089CD1A8;
    case 273u: goto L_089CD1B4;
    case 274u: goto L_089CD1F0;
    case 275u: goto L_089CD210;
    case 276u: goto L_089CD220;
    case 277u: goto L_089CD230;
    case 278u: goto L_089CD248;
    case 279u: goto L_089CD260;
    case 280u: goto L_089CD270;
    case 281u: goto L_089CD28C;
    case 282u: goto L_089CD2A0;
    case 283u: goto L_089CD2A4;
    case 284u: goto L_089CD2B4;
    case 285u: goto L_089CD2D4;
    case 286u: goto L_089CD2E4;
    case 287u: goto L_089CD2F4;
    case 288u: goto L_089CD304;
    case 289u: goto L_089CD30C;
    case 290u: goto L_089CD320;
    case 291u: goto L_089CD328;
    case 292u: goto L_089CD33C;
    case 293u: goto L_089CD344;
    case 294u: goto L_089CD354;
    case 295u: goto L_089CD35C;
    case 296u: goto L_089CD364;
    case 297u: goto L_089CD36C;
    case 298u: goto L_089CD374;
    case 299u: goto L_089CD384;
    case 300u: goto L_089CD388;
    case 301u: goto L_089CD390;
    case 302u: goto L_089CD398;
    case 303u: goto L_089CD3A8;
    case 304u: goto L_089CD3B0;
    case 305u: goto L_089CD3BC;
    case 306u: goto L_089CD3C4;
    case 307u: goto L_089CD3CC;
    case 308u: goto L_089CD3DC;
    case 309u: goto L_089CD3F8;
    case 310u: goto L_089CD40C;
    case 311u: goto L_089CD418;
    case 312u: goto L_089CD42C;
    case 313u: goto L_089CD44C;
    case 314u: goto L_089CD454;
    case 315u: goto L_089CD468;
    case 316u: goto L_089CD48C;
    case 317u: goto L_089CD49C;
    case 318u: goto L_089CD4AC;
    case 319u: goto L_089CD4BC;
    case 320u: goto L_089CD4C4;
    case 321u: goto L_089CD4D8;
    case 322u: goto L_089CD4E0;
    case 323u: goto L_089CD4F4;
    case 324u: goto L_089CD4FC;
    case 325u: goto L_089CD50C;
    case 326u: goto L_089CD514;
    case 327u: goto L_089CD51C;
    case 328u: goto L_089CD524;
    case 329u: goto L_089CD52C;
    case 330u: goto L_089CD53C;
    case 331u: goto L_089CD544;
    case 332u: goto L_089CD54C;
    case 333u: goto L_089CD560;
    case 334u: goto L_089CD568;
    case 335u: goto L_089CD570;
    case 336u: goto L_089CD590;
    case 337u: goto L_089CD5A0;
    case 338u: goto L_089CD5B0;
    case 339u: goto L_089CD5C0;
    case 340u: goto L_089CD5C8;
    case 341u: goto L_089CD5DC;
    case 342u: goto L_089CD5E4;
    case 343u: goto L_089CD5F8;
    case 344u: goto L_089CD600;
    case 345u: goto L_089CD610;
    case 346u: goto L_089CD618;
    case 347u: goto L_089CD620;
    case 348u: goto L_089CD628;
    case 349u: goto L_089CD630;
    case 350u: goto L_089CD640;
    case 351u: goto L_089CD678;
    case 352u: goto L_089CD680;
    case 353u: goto L_089CD690;
    case 354u: goto L_089CD698;
    case 355u: goto L_089CD6A0;
    case 356u: goto L_089CD6A8;
    case 357u: goto L_089CD6B4;
    case 358u: goto L_089CD6BC;
    case 359u: goto L_089CD6C8;
    case 360u: goto L_089CD6D0;
    case 361u: goto L_089CD6D8;
    case 362u: goto L_089CD6E0;
    case 363u: goto L_089CD6F0;
    case 364u: goto L_089CD6F8;
    case 365u: goto L_089CD700;
    case 366u: goto L_089CD708;
    case 367u: goto L_089CD714;
    case 368u: goto L_089CD71C;
    case 369u: goto L_089CD724;
    case 370u: goto L_089CD734;
    case 371u: goto L_089CD740;
    case 372u: goto L_089CD75C;
    case 373u: goto L_089CD764;
    case 374u: goto L_089CD76C;
    case 375u: goto L_089CD784;
    case 376u: goto L_089CD78C;
    case 377u: goto L_089CD790;
    case 378u: goto L_089CD798;
    case 379u: goto L_089CD7A0;
    case 380u: goto L_089CD7A8;
    case 381u: goto L_089CD7B0;
    case 382u: goto L_089CD7D8;
    case 383u: goto L_089CD7E8;
    case 384u: goto L_089CD7F4;
    case 385u: goto L_089CD7FC;
    case 386u: goto L_089CD80C;
    case 387u: goto L_089CD814;
    case 388u: goto L_089CD820;
    case 389u: goto L_089CD828;
    case 390u: goto L_089CD830;
    case 391u: goto L_089CD83C;
    case 392u: goto L_089CD844;
    case 393u: goto L_089CD848;
    case 394u: goto L_089CD858;
    case 395u: goto L_089CD860;
    case 396u: goto L_089CD868;
    case 397u: goto L_089CD878;
    case 398u: goto L_089CD890;
    case 399u: goto L_089CD894;
    case 400u: goto L_089CD8A0;
    case 401u: goto L_089CD8A8;
    case 402u: goto L_089CD8B8;
    case 403u: goto L_089CD8C0;
    case 404u: goto L_089CD8D0;
    case 405u: goto L_089CD8D8;
    case 406u: goto L_089CD8E4;
    case 407u: goto L_089CD8EC;
    case 408u: goto L_089CD900;
    case 409u: goto L_089CD908;
    case 410u: goto L_089CD91C;
    case 411u: goto L_089CD934;
    case 412u: goto L_089CD93C;
    case 413u: goto L_089CD940;
    case 414u: goto L_089CD948;
    case 415u: goto L_089CD950;
    case 416u: goto L_089CD958;
    case 417u: goto L_089CD964;
    case 418u: goto L_089CD96C;
    case 419u: goto L_089CD980;
    case 420u: goto L_089CD994;
    case 421u: goto L_089CD99C;
    case 422u: goto L_089CD9A4;
    case 423u: goto L_089CD9AC;
    case 424u: goto L_089CD9B4;
    case 425u: goto L_089CD9BC;
    case 426u: goto L_089CD9C8;
    case 427u: goto L_089CD9D0;
    case 428u: goto L_089CD9D8;
    case 429u: goto L_089CD9E0;
    case 430u: goto L_089CD9EC;
    case 431u: goto L_089CD9F4;
    case 432u: goto L_089CDA04;
    case 433u: goto L_089CDA10;
    case 434u: goto L_089CDA18;
    case 435u: goto L_089CDA30;
    case 436u: goto L_089CDA34;
    case 437u: goto L_089CDA40;
    case 438u: goto L_089CDA58;
    case 439u: goto L_089CDA7C;
    case 440u: goto L_089CDA84;
    case 441u: goto L_089CDA90;
    case 442u: goto L_089CDA98;
    case 443u: goto L_089CDABC;
    case 444u: goto L_089CDACC;
    case 445u: goto L_089CDAE0;
    case 446u: goto L_089CDAF4;
    case 447u: goto L_089CDB08;
    case 448u: goto L_089CDB0C;
    case 449u: goto L_089CDB24;
    case 450u: goto L_089CDB2C;
    case 451u: goto L_089CDB30;
    case 452u: goto L_089CDB38;
    case 453u: goto L_089CDB44;
    case 454u: goto L_089CDB4C;
    case 455u: goto L_089CDB54;
    case 456u: goto L_089CDB58;
    case 457u: goto L_089CDB6C;
    case 458u: goto L_089CDB78;
    case 459u: goto L_089CDB80;
    case 460u: goto L_089CDB94;
    case 461u: goto L_089CDBA4;
    case 462u: goto L_089CDBAC;
    case 463u: goto L_089CDBB8;
    case 464u: goto L_089CDBE4;
    case 465u: goto L_089CDBFC;
    case 466u: goto L_089CDC04;
    case 467u: goto L_089CDC08;
    case 468u: goto L_089CDC14;
    case 469u: goto L_089CDC20;
    case 470u: goto L_089CDC28;
    case 471u: goto L_089CDC30;
    case 472u: goto L_089CDC38;
    case 473u: goto L_089CDC40;
    case 474u: goto L_089CDC5C;
    case 475u: goto L_089CDC70;
    case 476u: goto L_089CDC7C;
    case 477u: goto L_089CDC84;
    case 478u: goto L_089CDC8C;
    case 479u: goto L_089CDC94;
    case 480u: goto L_089CDCA0;
    case 481u: goto L_089CDCA8;
    case 482u: goto L_089CDCC0;
    case 483u: goto L_089CDCC8;
    case 484u: goto L_089CDCD0;
    case 485u: goto L_089CDD0C;
    case 486u: goto L_089CDD7C;
    case 487u: goto L_089CDD8C;
    case 488u: goto L_089CDDAC;
    case 489u: goto L_089CDDB8;
    case 490u: goto L_089CDDC8;
    case 491u: goto L_089CDDD0;
    case 492u: goto L_089CDDDC;
    case 493u: goto L_089CDDF0;
    case 494u: goto L_089CDE04;
    case 495u: goto L_089CDE30;
    case 496u: goto L_089CDE38;
    case 497u: goto L_089CDE58;
    case 498u: goto L_089CDE64;
    case 499u: goto L_089CDE7C;
    case 500u: goto L_089CDE8C;
    case 501u: goto L_089CDEAC;
    case 502u: goto L_089CDEB4;
    case 503u: goto L_089CDED8;
    case 504u: goto L_089CDEE4;
    case 505u: goto L_089CDEEC;
    case 506u: goto L_089CDEF8;
    case 507u: goto L_089CDF04;
    case 508u: goto L_089CDF10;
    case 509u: goto L_089CDF18;
    case 510u: goto L_089CDF38;
    case 511u: goto L_089CDF40;
    case 512u: goto L_089CDF54;
    case 513u: goto L_089CDF5C;
    case 514u: goto L_089CDF6C;
    case 515u: goto L_089CDF7C;
    case 516u: goto L_089CDF88;
    case 517u: goto L_089CDFA8;
    case 518u: goto L_089CDFC0;
    case 519u: goto L_089CDFCC;
    case 520u: goto L_089CDFD8;
    case 521u: goto L_089CDFDC;
    case 522u: goto L_089CDFE4;
    case 523u: goto L_089CDFF4;
    case 524u: goto L_089CDFF8;
    case 525u: goto L_089CE000;
    case 526u: goto L_089CE00C;
    case 527u: goto L_089CE01C;
    case 528u: goto L_089CE020;
    case 529u: goto L_089CE054;
    case 530u: goto L_089CE0B4;
    case 531u: goto L_089CE0C4;
    case 532u: goto L_089CE0D0;
    case 533u: goto L_089CE0E4;
    case 534u: goto L_089CE0F8;
    case 535u: goto L_089CE10C;
    case 536u: goto L_089CE124;
    case 537u: goto L_089CE148;
    case 538u: goto L_089CE154;
    case 539u: goto L_089CE16C;
    case 540u: goto L_089CE174;
    case 541u: goto L_089CE180;
    case 542u: goto L_089CE1A4;
    case 543u: goto L_089CE1AC;
    case 544u: goto L_089CE1B8;
    case 545u: goto L_089CE1C0;
    case 546u: goto L_089CE1CC;
    case 547u: goto L_089CE1D4;
    case 548u: goto L_089CE1E4;
    case 549u: goto L_089CE1EC;
    case 550u: goto L_089CE1F4;
    case 551u: goto L_089CE200;
    case 552u: goto L_089CE208;
    case 553u: goto L_089CE214;
    case 554u: goto L_089CE220;
    case 555u: goto L_089CE230;
    case 556u: goto L_089CE238;
    case 557u: goto L_089CE23C;
    case 558u: goto L_089CE244;
    case 559u: goto L_089CE24C;
    case 560u: goto L_089CE254;
    case 561u: goto L_089CE25C;
    case 562u: goto L_089CE264;
    case 563u: goto L_089CE26C;
    case 564u: goto L_089CE274;
    case 565u: goto L_089CE288;
    case 566u: goto L_089CE290;
    case 567u: goto L_089CE298;
    case 568u: goto L_089CE2AC;
    case 569u: goto L_089CE2B4;
    case 570u: goto L_089CE2BC;
    case 571u: goto L_089CE2C4;
    case 572u: goto L_089CE2CC;
    case 573u: goto L_089CE2E4;
    case 574u: goto L_089CE2EC;
    case 575u: goto L_089CE2F4;
    case 576u: goto L_089CE308;
    case 577u: goto L_089CE318;
    case 578u: goto L_089CE324;
    case 579u: goto L_089CE32C;
    case 580u: goto L_089CE334;
    case 581u: goto L_089CE33C;
    case 582u: goto L_089CE344;
    case 583u: goto L_089CE354;
    case 584u: goto L_089CE360;
    case 585u: goto L_089CE368;
    case 586u: goto L_089CE37C;
    case 587u: goto L_089CE384;
    case 588u: goto L_089CE38C;
    case 589u: goto L_089CE394;
    case 590u: goto L_089CE3A0;
    case 591u: goto L_089CE3A8;
    case 592u: goto L_089CE3BC;
    case 593u: goto L_089CE3C8;
    case 594u: goto L_089CE3D4;
    case 595u: goto L_089CE3DC;
    case 596u: goto L_089CE3EC;
    case 597u: goto L_089CE3F8;
    case 598u: goto L_089CE400;
    case 599u: goto L_089CE414;
    case 600u: goto L_089CE41C;
    case 601u: goto L_089CE424;
    case 602u: goto L_089CE43C;
    case 603u: goto L_089CE444;
    case 604u: goto L_089CE44C;
    case 605u: goto L_089CE460;
    case 606u: goto L_089CE46C;
    case 607u: goto L_089CE474;
    case 608u: goto L_089CE47C;
    case 609u: goto L_089CE484;
    case 610u: goto L_089CE48C;
    case 611u: goto L_089CE494;
    case 612u: goto L_089CE4A4;
    case 613u: goto L_089CE4AC;
    case 614u: goto L_089CE4BC;
    case 615u: goto L_089CE4C4;
    case 616u: goto L_089CE4D0;
    case 617u: goto L_089CE4D8;
    case 618u: goto L_089CE4E0;
    case 619u: goto L_089CE4F0;
    case 620u: goto L_089CE508;
    case 621u: goto L_089CE514;
    case 622u: goto L_089CE51C;
    case 623u: goto L_089CE52C;
    case 624u: goto L_089CE544;
    case 625u: goto L_089CE54C;
    case 626u: goto L_089CE554;
    case 627u: goto L_089CE55C;
    case 628u: goto L_089CE56C;
    case 629u: goto L_089CE584;
    case 630u: goto L_089CE58C;
    case 631u: goto L_089CE598;
    case 632u: goto L_089CE5A8;
    case 633u: goto L_089CE5C0;
    case 634u: goto L_089CE5D8;
    case 635u: goto L_089CE5F4;
    case 636u: goto L_089CE624;
    case 637u: goto L_089CE658;
    case 638u: goto L_089CE66C;
    case 639u: goto L_089CE690;
    case 640u: goto L_089CE6AC;
    case 641u: goto L_089CE6B8;
    case 642u: goto L_089CE6C8;
    case 643u: goto L_089CE6E0;
    case 644u: goto L_089CE700;
    case 645u: goto L_089CE724;
    case 646u: goto L_089CE73C;
    case 647u: goto L_089CE750;
    case 648u: goto L_089CE760;
    case 649u: goto L_089CE774;
    case 650u: goto L_089CE780;
    case 651u: goto L_089CE798;
    case 652u: goto L_089CE7A0;
    case 653u: goto L_089CE7B0;
    case 654u: goto L_089CE7C4;
    case 655u: goto L_089CE7D4;
    case 656u: goto L_089CE7E0;
    case 657u: goto L_089CE7E8;
    case 658u: goto L_089CE7F8;
    case 659u: goto L_089CE800;
    case 660u: goto L_089CE808;
    case 661u: goto L_089CE810;
    case 662u: goto L_089CE828;
    case 663u: goto L_089CE834;
    case 664u: goto L_089CE84C;
    case 665u: goto L_089CE854;
    case 666u: goto L_089CE874;
    case 667u: goto L_089CE884;
    case 668u: goto L_089CE898;
    case 669u: goto L_089CE8A8;
    case 670u: goto L_089CE8B4;
    case 671u: goto L_089CE8B8;
    case 672u: goto L_089CE8D0;
    case 673u: goto L_089CE8EC;
    case 674u: goto L_089CE908;
    case 675u: goto L_089CEA48;
    case 676u: goto L_089CEA58;
    case 677u: goto L_089CEA70;
    case 678u: goto L_089CEA80;
    case 679u: goto L_089CEA98;
    case 680u: goto L_089CEAC0;
    case 681u: goto L_089CEAE0;
    case 682u: goto L_089CEAEC;
    case 683u: goto L_089CEAF0;
    case 684u: goto L_089CEB00;
    case 685u: goto L_089CEB18;
    case 686u: goto L_089CEB2C;
    case 687u: goto L_089CEB54;
    case 688u: goto L_089CEB64;
    case 689u: goto L_089CEB70;
    case 690u: goto L_089CEB88;
    case 691u: goto L_089CEB9C;
    case 692u: goto L_089CEBA4;
    case 693u: goto L_089CEBAC;
    case 694u: goto L_089CEBB0;
    case 695u: goto L_089CEBBC;
    case 696u: goto L_089CEBD8;
    case 697u: goto L_089CEBE0;
    case 698u: goto L_089CEBEC;
    case 699u: goto L_089CEC00;
    case 700u: goto L_089CEC34;
    case 701u: goto L_089CEC3C;
    case 702u: goto L_089CEC48;
    case 703u: goto L_089CEC54;
    case 704u: goto L_089CEC5C;
    case 705u: goto L_089CEC74;
    case 706u: goto L_089CEC84;
    case 707u: goto L_089CEC9C;
    case 708u: goto L_089CECA8;
    case 709u: goto L_089CECCC;
    case 710u: goto L_089CECE8;
    case 711u: goto L_089CECF4;
    case 712u: goto L_089CECF8;
    case 713u: goto L_089CED00;
    case 714u: goto L_089CED14;
    case 715u: goto L_089CED2C;
    case 716u: goto L_089CED48;
    case 717u: goto L_089CED58;
    case 718u: goto L_089CED68;
    case 719u: goto L_089CED84;
    case 720u: goto L_089CED94;
    case 721u: goto L_089CEDA8;
    case 722u: goto L_089CEDE0;
    case 723u: goto L_089CEE00;
    case 724u: goto L_089CEE08;
    case 725u: goto L_089CEE48;
    case 726u: goto L_089CEE8C;
    case 727u: goto L_089CEE98;
    case 728u: goto L_089CEED0;
    case 729u: goto L_089CEEE4;
    case 730u: goto L_089CEF20;
    case 731u: goto L_089CEF28;
    case 732u: goto L_089CEF3C;
    case 733u: goto L_089CEF40;
    case 734u: goto L_089CEF80;
    case 735u: goto L_089CEF88;
    case 736u: goto L_089CEFB8;
    case 737u: goto L_089CEFC8;
    case 738u: goto L_089CEFD8;
    case 739u: goto L_089CEFF4;
    case 740u: goto L_089CF00C;
    case 741u: goto L_089CF018;
    case 742u: goto L_089CF028;
    case 743u: goto L_089CF060;
    case 744u: goto L_089CF06C;
    case 745u: goto L_089CF078;
    case 746u: goto L_089CF084;
    case 747u: goto L_089CF094;
    case 748u: goto L_089CF09C;
    case 749u: goto L_089CF0A4;
    case 750u: goto L_089CF0BC;
    case 751u: goto L_089CF0D8;
    case 752u: goto L_089CF100;
    case 753u: goto L_089CF114;
    case 754u: goto L_089CF170;
    case 755u: goto L_089CF18C;
    case 756u: goto L_089CF19C;
    case 757u: goto L_089CF1AC;
    case 758u: goto L_089CF1CC;
    case 759u: goto L_089CF1D8;
    case 760u: goto L_089CF1E0;
    case 761u: goto L_089CF1E8;
    case 762u: goto L_089CF1EC;
    case 763u: goto L_089CF1F4;
    case 764u: goto L_089CF204;
    case 765u: goto L_089CF20C;
    case 766u: goto L_089CF214;
    case 767u: goto L_089CF21C;
    case 768u: goto L_089CF224;
    case 769u: goto L_089CF254;
    case 770u: goto L_089CF264;
    case 771u: goto L_089CF26C;
    case 772u: goto L_089CF278;
    case 773u: goto L_089CF284;
    case 774u: goto L_089CF294;
    case 775u: goto L_089CF29C;
    case 776u: goto L_089CF2A8;
    case 777u: goto L_089CF2B0;
    case 778u: goto L_089CF2C4;
    case 779u: goto L_089CF2D4;
    case 780u: goto L_089CF2DC;
    case 781u: goto L_089CF2E8;
    case 782u: goto L_089CF2F0;
    case 783u: goto L_089CF300;
    case 784u: goto L_089CF30C;
    case 785u: goto L_089CF32C;
    case 786u: goto L_089CF354;
    case 787u: goto L_089CF36C;
    case 788u: goto L_089CF38C;
    case 789u: goto L_089CF3B8;
    case 790u: goto L_089CF3C4;
    case 791u: goto L_089CF3CC;
    case 792u: goto L_089CF3D8;
    case 793u: goto L_089CF3E8;
    case 794u: goto L_089CF3F0;
    case 795u: goto L_089CF3F8;
    case 796u: goto L_089CF404;
    case 797u: goto L_089CF40C;
    case 798u: goto L_089CF41C;
    case 799u: goto L_089CF42C;
    case 800u: goto L_089CF444;
    case 801u: goto L_089CF468;
    case 802u: goto L_089CF480;
    case 803u: goto L_089CF498;
    case 804u: goto L_089CF4A8;
    case 805u: goto L_089CF4B4;
    case 806u: goto L_089CF4CC;
    case 807u: goto L_089CF4F4;
    case 808u: goto L_089CF524;
    case 809u: goto L_089CF530;
    case 810u: goto L_089CF548;
    case 811u: goto L_089CF55C;
    case 812u: goto L_089CF570;
    case 813u: goto L_089CF5B8;
    case 814u: goto L_089CF5E0;
    case 815u: goto L_089CF5E8;
    case 816u: goto L_089CF620;
    case 817u: goto L_089CF630;
    case 818u: goto L_089CF648;
    case 819u: goto L_089CF64C;
    case 820u: goto L_089CF65C;
    case 821u: goto L_089CF674;
    case 822u: goto L_089CF68C;
    case 823u: goto L_089CF6AC;
    case 824u: goto L_089CF6D0;
    case 825u: goto L_089CF718;
    case 826u: goto L_089CF754;
    case 827u: goto L_089CF784;
    case 828u: goto L_089CF79C;
    case 829u: goto L_089CF7B8;
    case 830u: goto L_089CF7DC;
    case 831u: goto L_089CF804;
    case 832u: goto L_089CF82C;
    case 833u: goto L_089CF864;
    case 834u: goto L_089CF88C;
    case 835u: goto L_089CF8BC;
    case 836u: goto L_089CF8F4;
    case 837u: goto L_089CF904;
    case 838u: goto L_089CF918;
    case 839u: goto L_089CF924;
    case 840u: goto L_089CF92C;
    case 841u: goto L_089CF934;
    case 842u: goto L_089CF944;
    case 843u: goto L_089CF950;
    case 844u: goto L_089CF958;
    case 845u: goto L_089CF978;
    case 846u: goto L_089CF9A4;
    case 847u: goto L_089CF9AC;
    case 848u: goto L_089CF9BC;
    case 849u: goto L_089CF9CC;
    case 850u: goto L_089CF9E8;
    case 851u: goto L_089CFA04;
    case 852u: goto L_089CFA10;
    case 853u: goto L_089CFA1C;
    case 854u: goto L_089CFA28;
    case 855u: goto L_089CFA3C;
    case 856u: goto L_089CFA7C;
    case 857u: goto L_089CFA98;
    case 858u: goto L_089CFAB0;
    case 859u: goto L_089CFAB8;
    case 860u: goto L_089CFAC4;
    case 861u: goto L_089CFAD0;
    case 862u: goto L_089CFADC;
    case 863u: goto L_089CFAEC;
    case 864u: goto L_089CFB00;
    case 865u: goto L_089CFB10;
    case 866u: goto L_089CFB28;
    case 867u: goto L_089CFB50;
    case 868u: goto L_089CFB70;
    case 869u: goto L_089CFB7C;
    case 870u: goto L_089CFB90;
    case 871u: goto L_089CFB98;
    case 872u: goto L_089CFBA0;
    case 873u: goto L_089CFBBC;
    case 874u: goto L_089CFBD0;
    case 875u: goto L_089CFBE4;
    case 876u: goto L_089CFC04;
    case 877u: goto L_089CFC14;
    case 878u: goto L_089CFC24;
    case 879u: goto L_089CFC40;
    case 880u: goto L_089CFC50;
    case 881u: goto L_089CFC58;
    case 882u: goto L_089CFC60;
    case 883u: goto L_089CFC6C;
    case 884u: goto L_089CFC88;
    case 885u: goto L_089CFC94;
    case 886u: goto L_089CFC98;
    case 887u: goto L_089CFCAC;
    case 888u: goto L_089CFCC8;
    case 889u: goto L_089CFCE4;
    case 890u: goto L_089CFD10;
    case 891u: goto L_089CFD44;
    case 892u: goto L_089CFD50;
    case 893u: goto L_089CFD60;
    case 894u: goto L_089CFD6C;
    case 895u: goto L_089CFD74;
    case 896u: goto L_089CFD88;
    case 897u: goto L_089CFD90;
    case 898u: goto L_089CFD98;
    case 899u: goto L_089CFDA4;
    case 900u: goto L_089CFDAC;
    case 901u: goto L_089CFDB8;
    case 902u: goto L_089CFDC0;
    case 903u: goto L_089CFDC8;
    case 904u: goto L_089CFDD0;
    case 905u: goto L_089CFDE0;
    case 906u: goto L_089CFE00;
    case 907u: goto L_089CFE38;
    case 908u: goto L_089CFE4C;
    case 909u: goto L_089CFE54;
    case 910u: goto L_089CFE64;
    case 911u: goto L_089CFE6C;
    case 912u: goto L_089CFE78;
    case 913u: goto L_089CFE80;
    case 914u: goto L_089CFE94;
    case 915u: goto L_089CFE9C;
    case 916u: goto L_089CFEAC;
    case 917u: goto L_089CFECC;
    case 918u: goto L_089CFEF0;
    case 919u: goto L_089CFEFC;
    case 920u: goto L_089CFF04;
    case 921u: goto L_089CFF10;
    case 922u: goto L_089CFF1C;
    case 923u: goto L_089CFF24;
    case 924u: goto L_089CFF40;
    case 925u: goto L_089CFF7C;
    case 926u: goto L_089CFF88;
    case 927u: goto L_089CFF90;
    case 928u: goto L_089CFFA0;
    case 929u: goto L_089CFFB0;
    case 930u: goto L_089CFFB8;
    case 931u: goto L_089CFFC4;
    case 932u: goto L_089CFFCC;
    case 933u: goto L_089CFFDC;
    case 934u: goto L_089CFFEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089CC004:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (ctx.gpr[6] & 4u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CC038;
      }
      goto L_089CC014;
    }
L_089CC014:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(420)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089CC038;
      }
      goto L_089CC020;
    }
L_089CC020:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089CC038u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CC038u) goto L_089CC038;
    return;
L_089CC038:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[20] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-544));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 943u, 0x089CBFA4u>(ctx, &aot_mem); return;
      }
      goto L_089CC04C;
    }
L_089CC04C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15024)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089CC114;
      }
      goto L_089CC068;
    }
L_089CC068:
    ctx.gpr[18] = (ctx.gpr[17] << 5u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[19] = (0u | 13u);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    goto L_089CC078;
L_089CC078:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_089CC098;
    }
    goto L_089CC090;
L_089CC090:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_089CC09C;
      }
      goto L_089CC098;
    }
L_089CC098:
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[18]);
    goto L_089CC09C;
L_089CC09C:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC100;
      }
      goto L_089CC0A8;
    }
L_089CC0A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC100;
      }
      goto L_089CC0B4;
    }
L_089CC0B4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(91)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089CC0C8;
      }
      goto L_089CC0C0;
    }
L_089CC0C0:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[19];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089CC0D0;
      }
      goto L_089CC0C8;
    }
L_089CC0C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_089CC0D0;
      }
      goto L_089CC0D0;
    }
L_089CC0D0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CC100;
      }
      goto L_089CC0D8;
    }
L_089CC0D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CC100;
      }
      goto L_089CC0E8;
    }
L_089CC0E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089CC100u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CC100u) goto L_089CC100;
    return;
L_089CC100:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-96));
      if (branch_taken) {
          goto L_089CC078;
      }
      goto L_089CC114;
    }
L_089CC114:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CC144:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    ctx.gpr[31] = (0x089CC180u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 340u, 0x08A8A334u>(ctx, &aot_mem) && ctx.pc == 0x089CC180u) goto L_089CC180;
    return;
L_089CC180:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x089CC194u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 336u, 0x089C9878u>(ctx, &aot_mem) && ctx.pc == 0x089CC194u) goto L_089CC194;
    return;
L_089CC194:
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.gpr[31] = (0x089CC1A4u);
    ctx.gpr[5] = (0u | 1u);
    goto L_089CDD0C;
L_089CC1A4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[30] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_089CC28C;
      }
      goto L_089CC1B4;
    }
L_089CC1B4:
    ctx.gpr[18] = (2229u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[4] & 135u);
    goto L_089CC1DC;
L_089CC1DC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4900 ? 1u : 0u);
      if (branch_taken) {
          goto L_089CC28C;
      }
      goto L_089CC1E4;
    }
L_089CC1E4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 6115 ? 1u : 0u);
      if (branch_taken) {
          goto L_089CC20C;
      }
      goto L_089CC1EC;
    }
L_089CC1EC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 6100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 6115 ? 1u : 0u);
      if (branch_taken) {
          goto L_089CC20C;
      }
      goto L_089CC1F8;
    }
L_089CC1F8:
    ctx.gpr[31] = (0x089CC200u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-4900));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 281u, 0x089C9554u>(ctx, &aot_mem) && ctx.pc == 0x089CC200u) goto L_089CC200;
    return;
L_089CC200:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC224;
      }
      goto L_089CC208;
    }
L_089CC208:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 6115 ? 1u : 0u);
    goto L_089CC20C;
L_089CC20C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CC28C;
      }
      goto L_089CC214;
    }
L_089CC214:
    ctx.gpr[31] = (0x089CC21Cu);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-6115));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 307u, 0x089C969Cu>(ctx, &aot_mem) && ctx.pc == 0x089CC21Cu) goto L_089CC21C;
    return;
L_089CC21C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CC28C;
      }
      goto L_089CC224;
    }
L_089CC224:
    ctx.gpr[31] = (0x089CC22Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x089CC22Cu) goto L_089CC22C;
    return;
L_089CC22C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x089CC244u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 357u, 0x089C5768u>(ctx, &aot_mem) && ctx.pc == 0x089CC244u) goto L_089CC244;
    return;
L_089CC244:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x089CC258u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    goto L_089CDD0C;
L_089CC258:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_089CC26C;
      }
      goto L_089CC264;
    }
L_089CC264:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC28C;
      }
      goto L_089CC26C;
    }
L_089CC26C:
    ctx.gpr[17] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 135u);
      if (branch_taken) {
          goto L_089CC1DC;
      }
      goto L_089CC28C;
    }
L_089CC28C:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_089CC67C;
      }
      goto L_089CC294;
    }
L_089CC294:
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] << 4u);
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x089CC2BCu);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 357u, 0x089C5768u>(ctx, &aot_mem) && ctx.pc == 0x089CC2BCu) goto L_089CC2BC;
    return;
L_089CC2BC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[31] = (0x089CC2D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8840));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 333u, 0x089C55D8u>(ctx, &aot_mem) && ctx.pc == 0x089CC2D4u) goto L_089CC2D4;
    return;
L_089CC2D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[20] = (ctx.gpr[4] << 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5768));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26512));
    ctx.gpr[23] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[21] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[22] = (2230u << 16u);
    goto L_089CC308;
L_089CC308:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[30];
    ctx.gpr[18] = (ctx.gpr[16] << 4u);
      if (branch_taken) {
          goto L_089CC330;
      }
      goto L_089CC310;
    }
L_089CC310:
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089CC344;
      }
      goto L_089CC330;
    }
L_089CC330:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089CC60C;
      }
      goto L_089CC344;
    }
L_089CC344:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (0x089CC354u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 357u, 0x089C5768u>(ctx, &aot_mem) && ctx.pc == 0x089CC354u) goto L_089CC354;
    return;
L_089CC354:
    ctx.gpr[31] = (0x089CC35Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 334u, 0x089C5604u>(ctx, &aot_mem) && ctx.pc == 0x089CC35Cu) goto L_089CC35C;
    return;
L_089CC35C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC368;
      }
      goto L_089CC364;
    }
L_089CC364:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    goto L_089CC368;
L_089CC368:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-6000)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC3A0;
      }
      goto L_089CC374;
    }
L_089CC374:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CC3A0;
      }
      goto L_089CC38C;
    }
L_089CC38C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089CC60C;
      }
      goto L_089CC3A0;
    }
L_089CC3A0:
    ctx.gpr[19] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4900 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC4B8;
      }
      goto L_089CC3AC;
    }
L_089CC3AC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_089CC3D4;
      }
      goto L_089CC3C0;
    }
L_089CC3C0:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089CC3D4;
L_089CC3D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_089CC404;
      }
      goto L_089CC3E0;
    }
L_089CC3E0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 7u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(30))))));
        goto L_089CC408;
    }
    goto L_089CC3F0;
L_089CC3F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089CC60C;
      }
      goto L_089CC404;
    }
L_089CC404:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(30))))));
    goto L_089CC408;
L_089CC408:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4900));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_089CC44C;
      }
      goto L_089CC430;
    }
L_089CC430:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CC44C;
      }
      goto L_089CC438;
    }
L_089CC438:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089CC60C;
      }
      goto L_089CC44C;
    }
L_089CC44C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089CC464u);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CC464u) goto L_089CC464;
    return;
L_089CC464:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[30];
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089CC4B0;
      }
      goto L_089CC470;
    }
L_089CC470:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6115));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_089CC4B0;
      }
      goto L_089CC498;
    }
L_089CC498:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CC4B0;
      }
      goto L_089CC4A0;
    }
L_089CC4A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089CC60C;
      }
      goto L_089CC4B0;
    }
L_089CC4B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC4F8;
      }
      goto L_089CC4B8;
    }
L_089CC4B8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 6115 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089CC4F8;
      }
      goto L_089CC4C4;
    }
L_089CC4C4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(936)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CC4E8;
      }
      goto L_089CC4D4;
    }
L_089CC4D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CC4F8;
      }
      goto L_089CC4E8;
    }
L_089CC4E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089CC60C;
      }
      goto L_089CC4F8;
    }
L_089CC4F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[31] = (0x089CC508u);
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x089CC508u) goto L_089CC508;
    return;
L_089CC508:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 11u);
    ctx.gpr[31] = (0x089CC518u);
    ctx.gpr[4] = (0u + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 738u, 0x089C70F0u>(ctx, &aot_mem) && ctx.pc == 0x089CC518u) goto L_089CC518;
    return;
L_089CC518:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[4] << 11u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x089CC52Cu);
    ctx.gpr[5] = (0u + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x089CC52Cu) goto L_089CC52C;
    return;
L_089CC52C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_089CC58C;
      }
      goto L_089CC54C;
    }
L_089CC54C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089CC574;
      }
      goto L_089CC560;
    }
L_089CC560:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089CC574;
L_089CC574:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CC58C;
      }
      goto L_089CC584;
    }
L_089CC584:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089CC58C;
L_089CC58C:
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x089CC59Cu);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 355u, 0x089C5740u>(ctx, &aot_mem) && ctx.pc == 0x089CC59Cu) goto L_089CC59C;
    return;
L_089CC59C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7780)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7780), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(13)));
    ctx.gpr[5] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC5E4;
      }
      goto L_089CC5C4;
    }
L_089CC5C4:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-6000)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(-6000), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[18]);
    goto L_089CC5E4;
L_089CC5E4:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 1 ? 1u : 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089CC308;
      }
      goto L_089CC5FC;
    }
L_089CC5FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_089CC60C;
L_089CC60C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC62C;
      }
      goto L_089CC618;
    }
L_089CC618:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089CC618;
      }
      goto L_089CC62C;
    }
L_089CC62C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    ctx.gpr[31] = (0x089CC644u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 325u, 0x08A8A210u>(ctx, &aot_mem) && ctx.pc == 0x089CC644u) goto L_089CC644;
    return;
L_089CC644:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089CC65C;
      }
      goto L_089CC64C;
    }
L_089CC64C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089CC658u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8684));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x089CC658u) goto L_089CC658;
    return;
L_089CC658:
    ctx.gpr[4] = (0u | 1u);
    goto L_089CC65C;
L_089CC65C:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(24), 0u);
    goto L_089CC67C;
L_089CC67C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CC6AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27772)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089CC720;
      }
      goto L_089CC6E8;
    }
L_089CC6E8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13820)));
    ctx.gpr[31] = (0x089CC6F8u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 390u, 0x088724BCu>(ctx, &aot_mem) && ctx.pc == 0x089CC6F8u) goto L_089CC6F8;
    return;
L_089CC6F8:
    ctx.gpr[21] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(82)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7448)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_089CC728;
      }
      goto L_089CC718;
    }
L_089CC718:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC890;
      }
      goto L_089CC720;
    }
L_089CC720:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCCD4;
      }
      goto L_089CC728;
    }
L_089CC728:
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[30] = (0u | 1u);
    ctx.gpr[18] = (2u << 16u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[22];
    ctx.gpr[23] = (2229u << 16u);
      if (branch_taken) {
          goto L_089CC7B0;
      }
      goto L_089CC73C;
    }
L_089CC73C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (2u << 16u);
    goto L_089CC748;
L_089CC748:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7472), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(26124)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7448)));
    ctx.gpr[6] = (ctx.gpr[6] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089CC784;
      }
      goto L_089CC77C;
    }
L_089CC77C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC798;
      }
      goto L_089CC784;
    }
L_089CC784:
    ctx.gpr[31] = (0x089CC78Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x089CC78Cu) goto L_089CC78C;
    return;
L_089CC78C:
    ctx.gpr[31] = (0x089CC794u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 620u, 0x089C69C0u>(ctx, &aot_mem) && ctx.pc == 0x089CC794u) goto L_089CC794;
    return;
L_089CC794:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28012)));
    goto L_089CC798;
L_089CC798:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089CC748;
      }
      goto L_089CC7A8;
    }
L_089CC7A8:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(82)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[20]);
    goto L_089CC7B0;
L_089CC7B0:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-7448), ctx.gpr[5]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-27964)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-27968)));
    goto L_089CC7C4;
L_089CC7C4:
    ctx.gpr[31] = (0x089CC7CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089CC7CCu) goto L_089CC7CC;
    return;
L_089CC7CC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CC7E0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x089CC7E0u) goto L_089CC7E0;
    return;
L_089CC7E0:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7472)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CC848;
      }
      goto L_089CC80C;
    }
L_089CC80C:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7472), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7448)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(26124)));
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089CC850;
      }
      goto L_089CC840;
    }
L_089CC840:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC85C;
      }
      goto L_089CC848;
    }
L_089CC848:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC7C4;
      }
      goto L_089CC850;
    }
L_089CC850:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089CC85Cu);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x089CC85Cu) goto L_089CC85C;
    return;
L_089CC85C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CC7C4;
      }
      goto L_089CC86C;
    }
L_089CC86C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (0u | 300u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (2u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-27976), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[5] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7452), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28012)));
    goto L_089CC890;
L_089CC890:
    ctx.gpr[3] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27976)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089CCA80;
      }
      goto L_089CC8A0;
    }
L_089CC8A0:
    ctx.gpr[30] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(26124)));
    ctx.gpr[10] = (2230u << 16u);
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[19] = (2u << 16u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[11] = (2229u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[23] = (2u << 16u);
    goto L_089CC8D8;
L_089CC8D8:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-7472)));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CC8EC;
      }
      goto L_089CC8E4;
    }
L_089CC8E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC930;
      }
      goto L_089CC8EC;
    }
L_089CC8EC:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7448)));
    ctx.gpr[9] = (ctx.gpr[9] << 6u);
    ctx.gpr[9] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[2];
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
      if (branch_taken) {
          goto L_089CC930;
      }
      goto L_089CC908;
    }
L_089CC908:
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_089CC91C;
      }
      goto L_089CC910;
    }
L_089CC910:
    ctx.gpr[9] = (ctx.gpr[20] << 2u);
    ctx.gpr[9] = (ctx.gpr[11] + ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    goto L_089CC91C;
L_089CC91C:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CC930;
      }
      goto L_089CC928;
    }
L_089CC928:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC944;
      }
      goto L_089CC930;
    }
L_089CC930:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[18]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089CC8D8;
      }
      goto L_089CC944;
    }
L_089CC944:
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[23]);
      if (branch_taken) {
          goto L_089CC960;
      }
      goto L_089CC950;
    }
L_089CC950:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7452)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCA88;
      }
      goto L_089CC960;
    }
L_089CC960:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-27964)));
    ctx.gpr[22] = (0u | 8u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-27968)));
    goto L_089CC970;
L_089CC970:
    ctx.gpr[31] = (0x089CC978u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089CC978u) goto L_089CC978;
    return;
L_089CC978:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CC98Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x089CC98Cu) goto L_089CC98C;
    return;
L_089CC98C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7472)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CC9D0;
      }
      goto L_089CC9B8;
    }
L_089CC9B8:
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[23]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7452)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089CC9D8;
      }
      goto L_089CC9C8;
    }
L_089CC9C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089CC9F4;
      }
      goto L_089CC9D0;
    }
L_089CC9D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC970;
      }
      goto L_089CC9D8;
    }
L_089CC9D8:
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-7472), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    goto L_089CC9F4;
L_089CC9F4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-7472), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7448)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(26124)));
    ctx.gpr[5] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_089CCA88;
      }
      goto L_089CCA2C;
    }
L_089CCA2C:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x089CCA38u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x089CCA38u) goto L_089CCA38;
    return;
L_089CCA38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[23] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-7452)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089CCA64;
      }
      goto L_089CCA4C;
    }
L_089CCA4C:
    ctx.gpr[31] = (0x089CCA54u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x089CCA54u) goto L_089CCA54;
    return;
L_089CCA54:
    ctx.gpr[31] = (0x089CCA5Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 620u, 0x089C69C0u>(ctx, &aot_mem) && ctx.pc == 0x089CCA5Cu) goto L_089CCA5C;
    return;
L_089CCA5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28012)));
      if (branch_taken) {
          goto L_089CCA70;
      }
      goto L_089CCA64;
    }
L_089CCA64:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-7452), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28012)));
    goto L_089CCA70;
L_089CCA70:
    ctx.gpr[5] = (0u | 300u);
    ctx.gpr[6] = (2229u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-27976), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089CCA88;
      }
      goto L_089CCA80;
    }
L_089CCA80:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27976), ctx.gpr[5]);
    goto L_089CCA88;
L_089CCA88:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CCAB0;
      }
      goto L_089CCAA0;
    }
L_089CCAA0:
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[31] = (0x089CCAACu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x089CCAACu) goto L_089CCAAC;
    return;
L_089CCAAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28012)));
    goto L_089CCAB0;
L_089CCAB0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CCAD8;
      }
      goto L_089CCAC8;
    }
L_089CCAC8:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x089CCAD4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x089CCAD4u) goto L_089CCAD4;
    return;
L_089CCAD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28012)));
    goto L_089CCAD8;
L_089CCAD8:
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(62)));
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(58)));
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[9];
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-7444))))));
      if (branch_taken) {
          goto L_089CCB04;
      }
      goto L_089CCB00;
    }
L_089CCB00:
    ctx.gpr[22] = (0u | 1u);
    goto L_089CCB04;
L_089CCB04:
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[9] = (ctx.gpr[10] | 0u);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(2));
    goto L_089CCB10;
L_089CCB10:
    ctx.gpr[11] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(62)));
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CCB28;
      }
      goto L_089CCB20;
    }
L_089CCB20:
    ctx.gpr[11] = (ctx.gpr[10] << (ctx.gpr[9] & 31u));
    ctx.gpr[22] = (ctx.gpr[22] | ctx.gpr[11]);
    goto L_089CCB28;
L_089CCB28:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[9]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089CCB10;
      }
      goto L_089CCB38;
    }
L_089CCB38:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_089CCB44;
      }
      goto L_089CCB40;
    }
L_089CCB40:
    ctx.gpr[19] = (0u | 1u);
    goto L_089CCB44;
L_089CCB44:
    ctx.gpr[30] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(2));
    goto L_089CCB50;
L_089CCB50:
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(40)));
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(38)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_089CCB68;
      }
      goto L_089CCB60;
    }
L_089CCB60:
    ctx.gpr[8] = (ctx.gpr[30] << (ctx.gpr[7] & 31u));
    ctx.gpr[19] = (ctx.gpr[19] | ctx.gpr[8]);
    goto L_089CCB68;
L_089CCB68:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089CCB50;
      }
      goto L_089CCB78;
    }
L_089CCB78:
    ctx.gpr[22] = (ctx.gpr[19] | ctx.gpr[22]);
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[5];
    ctx.gpr[5] = (2u << 16u);
      if (branch_taken) {
          goto L_089CCB94;
      }
      goto L_089CCB84;
    }
L_089CCB84:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-7442))))));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CCCD4;
      }
      goto L_089CCB94;
    }
L_089CCB94:
    ctx.gpr[17] = (2277u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-5704));
    ctx.gpr[23] = (2u << 16u);
    goto L_089CCBA8;
L_089CCBA8:
    ctx.gpr[16] = (ctx.gpr[30] << (ctx.gpr[18] & 31u));
    ctx.gpr[5] = (ctx.gpr[16] & ctx.gpr[22]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[23]);
      if (branch_taken) {
          goto L_089CCBFC;
      }
      goto L_089CCBB8;
    }
L_089CCBB8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(-7444))))));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CCBFC;
      }
      goto L_089CCBC8;
    }
L_089CCBC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089CCBD4u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x089CCBD4u) goto L_089CCBD4;
    return;
L_089CCBD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x089CCBE0u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x089CCBE0u) goto L_089CCBE0;
    return;
L_089CCBE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-7444))))));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[16]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-7444), static_cast<std::uint16_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28012)));
      if (branch_taken) {
          goto L_089CCC50;
      }
      goto L_089CCBFC;
    }
L_089CCBFC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[23]);
      if (branch_taken) {
          goto L_089CCC50;
      }
      goto L_089CCC04;
    }
L_089CCC04:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-7444))))));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCC50;
      }
      goto L_089CCC14;
    }
L_089CCC14:
    ctx.gpr[31] = (0x089CCC1Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x089CCC1Cu) goto L_089CCC1C;
    return;
L_089CCC1C:
    ctx.gpr[31] = (0x089CCC24u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x089CCC24u) goto L_089CCC24;
    return;
L_089CCC24:
    ctx.gpr[31] = (0x089CCC2Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 620u, 0x089C69C0u>(ctx, &aot_mem) && ctx.pc == 0x089CCC2Cu) goto L_089CCC2C;
    return;
L_089CCC2C:
    ctx.gpr[31] = (0x089CCC34u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 620u, 0x089C69C0u>(ctx, &aot_mem) && ctx.pc == 0x089CCC34u) goto L_089CCC34;
    return;
L_089CCC34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (~(ctx.gpr[16] | 0u));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-7444))))));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-7444), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28012)));
    goto L_089CCC50;
L_089CCC50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[20];
    ctx.gpr[7] = (2u << 16u);
      if (branch_taken) {
          goto L_089CCCB8;
      }
      goto L_089CCC5C;
    }
L_089CCC5C:
    ctx.gpr[6] = (ctx.gpr[16] & ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_089CCC8C;
      }
      goto L_089CCC68;
    }
L_089CCC68:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(-7442))))));
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CCC8C;
      }
      goto L_089CCC78;
    }
L_089CCC78:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x089CCC84u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x089CCC84u) goto L_089CCC84;
    return;
L_089CCC84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28012)));
      if (branch_taken) {
          goto L_089CCCB8;
      }
      goto L_089CCC8C;
    }
L_089CCC8C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_089CCCB8;
      }
      goto L_089CCC94;
    }
L_089CCC94:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(-7442))))));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCCB8;
      }
      goto L_089CCCA4;
    }
L_089CCCA4:
    ctx.gpr[31] = (0x089CCCACu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x089CCCACu) goto L_089CCCAC;
    return;
L_089CCCAC:
    ctx.gpr[31] = (0x089CCCB4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 620u, 0x089C69C0u>(ctx, &aot_mem) && ctx.pc == 0x089CCCB4u) goto L_089CCCB4;
    return;
L_089CCCB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28012)));
    goto L_089CCCB8;
L_089CCCB8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[7] = (2u << 16u);
      if (branch_taken) {
          goto L_089CCBA8;
      }
      goto L_089CCCCC;
    }
L_089CCCCC:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-7442), static_cast<std::uint16_t>(ctx.gpr[19]));
    goto L_089CCCD4;
L_089CCCD4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CCD04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-544));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(492), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(508), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(524), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), ctx.gpr[31]);
    ctx.gpr[31] = (0x089CCD4Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 749u, 0x089C716Cu>(ctx, &aot_mem) && ctx.pc == 0x089CCD4Cu) goto L_089CCD4C;
    return;
L_089CCD4C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    ctx.gpr[31] = (0x089CCD5Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 828u, 0x08AA3ED4u>(ctx, &aot_mem) && ctx.pc == 0x089CCD5Cu) goto L_089CCD5C;
    return;
L_089CCD5C:
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_089CCDD4;
      }
      goto L_089CCD68;
    }
L_089CCD68:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = ctx.fpr[14] / ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), ctx.gpr[7]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) & 0x7FFFFFFFu);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[24] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089CCDDC;
      }
      goto L_089CCDCC;
    }
L_089CCDCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD1F0;
      }
      goto L_089CCDD4;
    }
L_089CCDD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDCD0;
      }
      goto L_089CCDDC;
    }
L_089CCDDC:
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-10));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(10));
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[22] = (ctx.gpr[5] | 0u);
        goto L_089CCDF8;
    }
    goto L_089CCDF8;
L_089CCDF8:
    ctx.gpr[19] = (0u | 99u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 99 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
        goto L_089CCE08;
    }
    goto L_089CCE08;
L_089CCE08:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089CCE50;
      }
      goto L_089CCE18;
    }
L_089CCE18:
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(-10));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
        goto L_089CCE30;
    }
    goto L_089CCE30;
L_089CCE30:
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
        goto L_089CCE48;
    }
    goto L_089CCE48;
L_089CCE48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_089CCE7C;
      }
      goto L_089CCE50;
    }
L_089CCE50:
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    ctx.gpr[23] = (0u | 99u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 99 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(10));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
        goto L_089CCE68;
    }
    goto L_089CCE68;
L_089CCE68:
    ctx.gpr[20] = (0u | 99u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 99 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
        goto L_089CCE78;
    }
    goto L_089CCE78;
L_089CCE78:
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089CCE7C;
L_089CCE7C:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[23];
    ctx.gpr[18] = (2227u << 16u);
      if (branch_taken) {
          goto L_089CCF44;
      }
      goto L_089CCE84;
    }
L_089CCE84:
    ctx.gpr[17] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
      if (branch_taken) {
          goto L_089CCF38;
      }
      goto L_089CCE94;
    }
L_089CCE94:
    ctx.gpr[4] = (ctx.gpr[22] << 5u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[16] = (ctx.gpr[4] - ctx.gpr[16]);
    goto L_089CCEB8;
L_089CCEB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x089CCEC8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 220u, 0x089C913Cu>(ctx, &aot_mem) && ctx.pc == 0x089CCEC8u) goto L_089CCEC8;
    return;
L_089CCEC8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CCF30;
      }
      goto L_089CCED0;
    }
L_089CCED0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089CCEE4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 220u, 0x089C913Cu>(ctx, &aot_mem) && ctx.pc == 0x089CCEE4u) goto L_089CCEE4;
    return;
L_089CCEE4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CCF28;
      }
      goto L_089CCEEC;
    }
L_089CCEEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089CCF00u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 220u, 0x089C913Cu>(ctx, &aot_mem) && ctx.pc == 0x089CCF00u) goto L_089CCF00;
    return;
L_089CCF00:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CCF20;
      }
      goto L_089CCF08;
    }
L_089CCF08:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4400));
      if (branch_taken) {
          goto L_089CCEB8;
      }
      goto L_089CCF18;
    }
L_089CCF18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCF38;
      }
      goto L_089CCF20;
    }
L_089CCF20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDCD0;
      }
      goto L_089CCF28;
    }
L_089CCF28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDCD0;
      }
      goto L_089CCF30;
    }
L_089CCF30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDCD0;
      }
      goto L_089CCF38;
    }
L_089CCF38:
    ctx.gpr[20] = (ctx.gpr[21] + ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_089CCE84;
      }
      goto L_089CCF44;
    }
L_089CCF44:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    goto L_089CCF48;
L_089CCF48:
    ctx.gpr[31] = (0x089CCF50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 907u, 0x089C7B40u>(ctx, &aot_mem) && ctx.pc == 0x089CCF50u) goto L_089CCF50;
    return;
L_089CCF50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCF8C;
      }
      goto L_089CCF58;
    }
L_089CCF58:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089CCF68u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 749u, 0x089C716Cu>(ctx, &aot_mem) && ctx.pc == 0x089CCF68u) goto L_089CCF68;
    return;
L_089CCF68:
    ctx.gpr[31] = (0x089CCF70u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 828u, 0x08AA3ED4u>(ctx, &aot_mem) && ctx.pc == 0x089CCF70u) goto L_089CCF70;
    return;
L_089CCF70:
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCF84;
      }
      goto L_089CCF7C;
    }
L_089CCF7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCF48;
      }
      goto L_089CCF84;
    }
L_089CCF84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDCD0;
      }
      goto L_089CCF8C;
    }
L_089CCF8C:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
      if (branch_taken) {
          goto L_089CCFD0;
      }
      goto L_089CCF9C;
    }
L_089CCF9C:
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(10));
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
        goto L_089CCFB8;
    }
    goto L_089CCFB8;
L_089CCFB8:
    ctx.gpr[30] = (0u | 99u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 99 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
        goto L_089CCFC8;
    }
    goto L_089CCFC8;
L_089CCFC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_089CD000;
      }
      goto L_089CCFD0;
    }
L_089CCFD0:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.gpr[23] = (0u | 99u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 99 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
        goto L_089CCFE4;
    }
    goto L_089CCFE4;
L_089CCFE4:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-10));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
        goto L_089CCFFC;
    }
    goto L_089CCFFC;
L_089CCFFC:
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089CD000;
L_089CD000:
    ctx.gpr[20] = (ctx.gpr[30] | 0u);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[23];
    ctx.gpr[18] = (2227u << 16u);
      if (branch_taken) {
          goto L_089CD0C8;
      }
      goto L_089CD00C;
    }
L_089CD00C:
    ctx.gpr[17] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[22] << 5u);
      if (branch_taken) {
          goto L_089CD0BC;
      }
      goto L_089CD01C;
    }
L_089CD01C:
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[16] = (ctx.gpr[4] - ctx.gpr[16]);
    goto L_089CD03C;
L_089CD03C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[31] = (0x089CD04Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 242u, 0x089C92B4u>(ctx, &aot_mem) && ctx.pc == 0x089CD04Cu) goto L_089CD04C;
    return;
L_089CD04C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD0B4;
      }
      goto L_089CD054;
    }
L_089CD054:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089CD068u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 242u, 0x089C92B4u>(ctx, &aot_mem) && ctx.pc == 0x089CD068u) goto L_089CD068;
    return;
L_089CD068:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD0AC;
      }
      goto L_089CD070;
    }
L_089CD070:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089CD084u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 242u, 0x089C92B4u>(ctx, &aot_mem) && ctx.pc == 0x089CD084u) goto L_089CD084;
    return;
L_089CD084:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD0A4;
      }
      goto L_089CD08C;
    }
L_089CD08C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4400));
      if (branch_taken) {
          goto L_089CD03C;
      }
      goto L_089CD09C;
    }
L_089CD09C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD0BC;
      }
      goto L_089CD0A4;
    }
L_089CD0A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDCD0;
      }
      goto L_089CD0AC;
    }
L_089CD0AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDCD0;
      }
      goto L_089CD0B4;
    }
L_089CD0B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDCD0;
      }
      goto L_089CD0BC;
    }
L_089CD0BC:
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[21]);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_089CD00C;
      }
      goto L_089CD0C8;
    }
L_089CD0C8:
    ctx.gpr[31] = (0x089CD0D0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 264u, 0x089C9430u>(ctx, &aot_mem) && ctx.pc == 0x089CD0D0u) goto L_089CD0D0;
    return;
L_089CD0D0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD0EC;
      }
      goto L_089CD0D8;
    }
L_089CD0D8:
    ctx.gpr[20] = (ctx.gpr[30] | 0u);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[23];
    ctx.gpr[18] = (2227u << 16u);
      if (branch_taken) {
          goto L_089CD0F4;
      }
      goto L_089CD0E4;
    }
L_089CD0E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD1B4;
      }
      goto L_089CD0EC;
    }
L_089CD0EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDCD0;
      }
      goto L_089CD0F4;
    }
L_089CD0F4:
    ctx.gpr[17] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
      if (branch_taken) {
          goto L_089CD1A8;
      }
      goto L_089CD104;
    }
L_089CD104:
    ctx.gpr[4] = (ctx.gpr[22] << 5u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[16] = (ctx.gpr[4] - ctx.gpr[16]);
    goto L_089CD128;
L_089CD128:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x089CD138u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 220u, 0x089C913Cu>(ctx, &aot_mem) && ctx.pc == 0x089CD138u) goto L_089CD138;
    return;
L_089CD138:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD1A0;
      }
      goto L_089CD140;
    }
L_089CD140:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089CD154u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 220u, 0x089C913Cu>(ctx, &aot_mem) && ctx.pc == 0x089CD154u) goto L_089CD154;
    return;
L_089CD154:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD198;
      }
      goto L_089CD15C;
    }
L_089CD15C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089CD170u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 220u, 0x089C913Cu>(ctx, &aot_mem) && ctx.pc == 0x089CD170u) goto L_089CD170;
    return;
L_089CD170:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD190;
      }
      goto L_089CD178;
    }
L_089CD178:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4400));
      if (branch_taken) {
          goto L_089CD128;
      }
      goto L_089CD188;
    }
L_089CD188:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD1A8;
      }
      goto L_089CD190;
    }
L_089CD190:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDCD0;
      }
      goto L_089CD198;
    }
L_089CD198:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDCD0;
      }
      goto L_089CD1A0;
    }
L_089CD1A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDCD0;
      }
      goto L_089CD1A8;
    }
L_089CD1A8:
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[21]);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_089CD0F4;
      }
      goto L_089CD1B4;
    }
L_089CD1B4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8544));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8532));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(476), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), ctx.gpr[5]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8484));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8460));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), ctx.gpr[4]);
    ctx.gpr[30] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-8524));
      if (branch_taken) {
          goto L_089CD678;
      }
      goto L_089CD1F0;
    }
L_089CD1F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10));
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10));
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
        goto L_089CD210;
    }
    goto L_089CD210;
L_089CD210:
    ctx.gpr[19] = (0u | 99u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 99 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
        goto L_089CD220;
    }
    goto L_089CD220;
L_089CD220:
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089CD270;
      }
      goto L_089CD230;
    }
L_089CD230:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-10));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
        goto L_089CD248;
    }
    goto L_089CD248;
L_089CD248:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
        goto L_089CD260;
    }
    goto L_089CD260;
L_089CD260:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), ctx.gpr[23]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_089CD2A4;
      }
      goto L_089CD270;
    }
L_089CD270:
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), ctx.gpr[6]);
    ctx.gpr[22] = (0u | 99u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 99 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(10));
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[22] = (ctx.gpr[5] | 0u);
        goto L_089CD28C;
    }
    goto L_089CD28C;
L_089CD28C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), ctx.gpr[22]);
    ctx.gpr[22] = (0u | 99u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 99 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
        goto L_089CD2A0;
    }
    goto L_089CD2A0;
L_089CD2A0:
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089CD2A4;
L_089CD2A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[4];
    ctx.gpr[20] = (ctx.gpr[22] << 5u);
      if (branch_taken) {
          goto L_089CD384;
      }
      goto L_089CD2B4;
    }
L_089CD2B4:
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[20]);
    ctx.gpr[22] = (ctx.gpr[23] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[22]);
    ctx.gpr[20] = (ctx.gpr[4] - ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[22] = (ctx.gpr[4] - ctx.gpr[22]);
    ctx.gpr[18] = (2227u << 16u);
    goto L_089CD2D4;
L_089CD2D4:
    ctx.gpr[17] = (ctx.gpr[30] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_089CD374;
      }
      goto L_089CD2E4;
    }
L_089CD2E4:
    ctx.gpr[16] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[16] = (ctx.gpr[4] - ctx.gpr[16]);
    goto L_089CD2F4;
L_089CD2F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[31] = (0x089CD304u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 220u, 0x089C913Cu>(ctx, &aot_mem) && ctx.pc == 0x089CD304u) goto L_089CD304;
    return;
L_089CD304:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD36C;
      }
      goto L_089CD30C;
    }
L_089CD30C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089CD320u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 220u, 0x089C913Cu>(ctx, &aot_mem) && ctx.pc == 0x089CD320u) goto L_089CD320;
    return;
L_089CD320:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD364;
      }
      goto L_089CD328;
    }
L_089CD328:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089CD33Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 220u, 0x089C913Cu>(ctx, &aot_mem) && ctx.pc == 0x089CD33Cu) goto L_089CD33C;
    return;
L_089CD33C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD35C;
      }
      goto L_089CD344;
    }
L_089CD344:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_089CD2F4;
      }
      goto L_089CD354;
    }
L_089CD354:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD374;
      }
      goto L_089CD35C;
    }
L_089CD35C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDCD0;
      }
      goto L_089CD364;
    }
L_089CD364:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDCD0;
      }
      goto L_089CD36C;
    }
L_089CD36C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDCD0;
      }
      goto L_089CD374;
    }
L_089CD374:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    ctx.gpr[21] = (ctx.gpr[23] + ctx.gpr[21]);
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[4];
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_089CD2D4;
      }
      goto L_089CD384;
    }
L_089CD384:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    goto L_089CD388;
L_089CD388:
    ctx.gpr[31] = (0x089CD390u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 907u, 0x089C7B40u>(ctx, &aot_mem) && ctx.pc == 0x089CD390u) goto L_089CD390;
    return;
L_089CD390:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD3CC;
      }
      goto L_089CD398;
    }
L_089CD398:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089CD3A8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 749u, 0x089C716Cu>(ctx, &aot_mem) && ctx.pc == 0x089CD3A8u) goto L_089CD3A8;
    return;
L_089CD3A8:
    ctx.gpr[31] = (0x089CD3B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 828u, 0x08AA3ED4u>(ctx, &aot_mem) && ctx.pc == 0x089CD3B0u) goto L_089CD3B0;
    return;
L_089CD3B0:
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD3C4;
      }
      goto L_089CD3BC;
    }
L_089CD3BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD388;
      }
      goto L_089CD3C4;
    }
L_089CD3C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDCD0;
      }
      goto L_089CD3CC;
    }
L_089CD3CC:
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
      if (branch_taken) {
          goto L_089CD418;
      }
      goto L_089CD3DC;
    }
L_089CD3DC:
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(10));
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
        goto L_089CD3F8;
    }
    goto L_089CD3F8;
L_089CD3F8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[23]);
    ctx.gpr[23] = (0u | 99u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 99 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
        goto L_089CD40C;
    }
    goto L_089CD40C;
L_089CD40C:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_089CD454;
      }
      goto L_089CD418;
    }
L_089CD418:
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (0u | 99u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 99 ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_089CD42C;
    }
    goto L_089CD42C;
L_089CD42C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-10));
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[5]);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
        goto L_089CD44C;
    }
    goto L_089CD44C;
L_089CD44C:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089CD454;
L_089CD454:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[5];
    ctx.gpr[20] = (ctx.gpr[4] << 5u);
      if (branch_taken) {
          goto L_089CD53C;
      }
      goto L_089CD468;
    }
L_089CD468:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[22] = (ctx.gpr[23] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[22]);
    ctx.gpr[20] = (ctx.gpr[4] - ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[22] = (ctx.gpr[4] - ctx.gpr[22]);
    ctx.gpr[18] = (2227u << 16u);
    goto L_089CD48C;
L_089CD48C:
    ctx.gpr[17] = (ctx.gpr[30] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_089CD52C;
      }
      goto L_089CD49C;
    }
L_089CD49C:
    ctx.gpr[16] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[16] = (ctx.gpr[4] - ctx.gpr[16]);
    goto L_089CD4AC;
L_089CD4AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[31] = (0x089CD4BCu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 242u, 0x089C92B4u>(ctx, &aot_mem) && ctx.pc == 0x089CD4BCu) goto L_089CD4BC;
    return;
L_089CD4BC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD524;
      }
      goto L_089CD4C4;
    }
L_089CD4C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089CD4D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 242u, 0x089C92B4u>(ctx, &aot_mem) && ctx.pc == 0x089CD4D8u) goto L_089CD4D8;
    return;
L_089CD4D8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD51C;
      }
      goto L_089CD4E0;
    }
L_089CD4E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089CD4F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 242u, 0x089C92B4u>(ctx, &aot_mem) && ctx.pc == 0x089CD4F4u) goto L_089CD4F4;
    return;
L_089CD4F4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD514;
      }
      goto L_089CD4FC;
    }
L_089CD4FC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_089CD4AC;
      }
      goto L_089CD50C;
    }
L_089CD50C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD52C;
      }
      goto L_089CD514;
    }
L_089CD514:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDCD0;
      }
      goto L_089CD51C;
    }
L_089CD51C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDCD0;
      }
      goto L_089CD524;
    }
L_089CD524:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDCD0;
      }
      goto L_089CD52C;
    }
L_089CD52C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    ctx.gpr[21] = (ctx.gpr[21] - ctx.gpr[23]);
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[4];
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[22]);
      if (branch_taken) {
          goto L_089CD48C;
      }
      goto L_089CD53C;
    }
L_089CD53C:
    ctx.gpr[31] = (0x089CD544u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 264u, 0x089C9430u>(ctx, &aot_mem) && ctx.pc == 0x089CD544u) goto L_089CD544;
    return;
L_089CD544:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD568;
      }
      goto L_089CD54C;
    }
L_089CD54C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[5];
    ctx.gpr[20] = (ctx.gpr[4] << 5u);
      if (branch_taken) {
          goto L_089CD570;
      }
      goto L_089CD560;
    }
L_089CD560:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD640;
      }
      goto L_089CD568;
    }
L_089CD568:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDCD0;
      }
      goto L_089CD570;
    }
L_089CD570:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[22] = (ctx.gpr[23] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[22]);
    ctx.gpr[20] = (ctx.gpr[4] - ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[22] = (ctx.gpr[4] - ctx.gpr[22]);
    ctx.gpr[18] = (2227u << 16u);
    goto L_089CD590;
L_089CD590:
    ctx.gpr[17] = (ctx.gpr[30] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_089CD630;
      }
      goto L_089CD5A0;
    }
L_089CD5A0:
    ctx.gpr[16] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[16] = (ctx.gpr[4] - ctx.gpr[16]);
    goto L_089CD5B0;
L_089CD5B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[31] = (0x089CD5C0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 220u, 0x089C913Cu>(ctx, &aot_mem) && ctx.pc == 0x089CD5C0u) goto L_089CD5C0;
    return;
L_089CD5C0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD628;
      }
      goto L_089CD5C8;
    }
L_089CD5C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089CD5DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 220u, 0x089C913Cu>(ctx, &aot_mem) && ctx.pc == 0x089CD5DCu) goto L_089CD5DC;
    return;
L_089CD5DC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD620;
      }
      goto L_089CD5E4;
    }
L_089CD5E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089CD5F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 220u, 0x089C913Cu>(ctx, &aot_mem) && ctx.pc == 0x089CD5F8u) goto L_089CD5F8;
    return;
L_089CD5F8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD618;
      }
      goto L_089CD600;
    }
L_089CD600:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_089CD5B0;
      }
      goto L_089CD610;
    }
L_089CD610:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD630;
      }
      goto L_089CD618;
    }
L_089CD618:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDCD0;
      }
      goto L_089CD620;
    }
L_089CD620:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDCD0;
      }
      goto L_089CD628;
    }
L_089CD628:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDCD0;
      }
      goto L_089CD630;
    }
L_089CD630:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    ctx.gpr[21] = (ctx.gpr[21] - ctx.gpr[23]);
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[4];
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[22]);
      if (branch_taken) {
          goto L_089CD590;
      }
      goto L_089CD640;
    }
L_089CD640:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8544));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8532));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(476), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), ctx.gpr[5]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8484));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8460));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), ctx.gpr[4]);
    ctx.gpr[30] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[5]);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-8524));
    goto L_089CD678;
L_089CD678:
    ctx.gpr[31] = (0x089CD680u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 828u, 0x08AA3ED4u>(ctx, &aot_mem) && ctx.pc == 0x089CD680u) goto L_089CD680;
    return;
L_089CD680:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD6BC;
      }
      goto L_089CD690;
    }
L_089CD690:
    ctx.gpr[31] = (0x089CD698u);
    ctx.gpr[4] = (0u | 131u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 175u, 0x089C8EB8u>(ctx, &aot_mem) && ctx.pc == 0x089CD698u) goto L_089CD698;
    return;
L_089CD698:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD6A8;
      }
      goto L_089CD6A0;
    }
L_089CD6A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD6BC;
      }
      goto L_089CD6A8;
    }
L_089CD6A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[31] = (0x089CD6B4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 749u, 0x089C716Cu>(ctx, &aot_mem) && ctx.pc == 0x089CD6B4u) goto L_089CD6B4;
    return;
L_089CD6B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD678;
      }
      goto L_089CD6BC;
    }
L_089CD6BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[31] = (0x089CD6C8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 749u, 0x089C716Cu>(ctx, &aot_mem) && ctx.pc == 0x089CD6C8u) goto L_089CD6C8;
    return;
L_089CD6C8:
    ctx.gpr[31] = (0x089CD6D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 205u, 0x089D5974u>(ctx, &aot_mem) && ctx.pc == 0x089CD6D0u) goto L_089CD6D0;
    return;
L_089CD6D0:
    ctx.gpr[31] = (0x089CD6D8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 132u, 0x08968BF0u>(ctx, &aot_mem) && ctx.pc == 0x089CD6D8u) goto L_089CD6D8;
    return;
L_089CD6D8:
    ctx.gpr[31] = (0x089CD6E0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 828u, 0x08AA3ED4u>(ctx, &aot_mem) && ctx.pc == 0x089CD6E0u) goto L_089CD6E0;
    return;
L_089CD6E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD71C;
      }
      goto L_089CD6F0;
    }
L_089CD6F0:
    ctx.gpr[31] = (0x089CD6F8u);
    ctx.gpr[4] = (0u | 131u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 175u, 0x089C8EB8u>(ctx, &aot_mem) && ctx.pc == 0x089CD6F8u) goto L_089CD6F8;
    return;
L_089CD6F8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD708;
      }
      goto L_089CD700;
    }
L_089CD700:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD71C;
      }
      goto L_089CD708;
    }
L_089CD708:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[31] = (0x089CD714u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 749u, 0x089C716Cu>(ctx, &aot_mem) && ctx.pc == 0x089CD714u) goto L_089CD714;
    return;
L_089CD714:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD6D8;
      }
      goto L_089CD71C;
    }
L_089CD71C:
    ctx.gpr[31] = (0x089CD724u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 828u, 0x08AA3ED4u>(ctx, &aot_mem) && ctx.pc == 0x089CD724u) goto L_089CD724;
    return;
L_089CD724:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD9E0;
      }
      goto L_089CD734;
    }
L_089CD734:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089CD740u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8612));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 333u, 0x089C55D8u>(ctx, &aot_mem) && ctx.pc == 0x089CD740u) goto L_089CD740;
    return;
L_089CD740:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    goto L_089CD75C;
L_089CD75C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 32 ? 1u : 0u);
      if (branch_taken) {
          goto L_089CD858;
      }
      goto L_089CD764;
    }
L_089CD764:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD858;
      }
      goto L_089CD76C;
    }
L_089CD76C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_089CD78C;
    }
    goto L_089CD784;
L_089CD784:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089CD790;
      }
      goto L_089CD78C;
    }
L_089CD78C:
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[19]);
    goto L_089CD790;
L_089CD790:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD7A8;
      }
      goto L_089CD798;
    }
L_089CD798:
    ctx.gpr[31] = (0x089CD7A0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 689u, 0x089A2DC8u>(ctx, &aot_mem) && ctx.pc == 0x089CD7A0u) goto L_089CD7A0;
    return;
L_089CD7A0:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
        goto L_089CD7B0;
    }
    goto L_089CD7A8;
L_089CD7A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089CD848;
      }
      goto L_089CD7B0;
    }
L_089CD7B0:
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(13)));
    ctx.gpr[5] = (ctx.gpr[5] & 131u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD844;
      }
      goto L_089CD7D8;
    }
L_089CD7D8:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[29] | 0u);
      if (branch_taken) {
          goto L_089CD80C;
      }
      goto L_089CD7E8;
    }
L_089CD7E8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089CD7FC;
      }
      goto L_089CD7F4;
    }
L_089CD7F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD80C;
      }
      goto L_089CD7FC;
    }
L_089CD7FC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089CD7E8;
      }
      goto L_089CD80C;
    }
L_089CD80C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_089CD820;
      }
      goto L_089CD814;
    }
L_089CD814:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(224), 0u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_089CD820;
L_089CD820:
    ctx.gpr[31] = (0x089CD828u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 745u, 0x08A2F69Cu>(ctx, &aot_mem) && ctx.pc == 0x089CD828u) goto L_089CD828;
    return;
L_089CD828:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(224)));
      if (branch_taken) {
          goto L_089CD83C;
      }
      goto L_089CD830;
    }
L_089CD830:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(5));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(224), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089CD844;
      }
      goto L_089CD83C;
    }
L_089CD83C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(224), ctx.gpr[4]);
    goto L_089CD844;
L_089CD844:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    goto L_089CD848;
L_089CD848:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(3248));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_089CD75C;
      }
      goto L_089CD858;
    }
L_089CD858:
    ctx.gpr[23] = (2226u << 16u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-8576));
    goto L_089CD860;
L_089CD860:
    ctx.gpr[31] = (0x089CD868u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 828u, 0x08AA3ED4u>(ctx, &aot_mem) && ctx.pc == 0x089CD868u) goto L_089CD868;
    return;
L_089CD868:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD9E0;
      }
      goto L_089CD878;
    }
L_089CD878:
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (0u | 10000u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[22] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_089CD8D0;
      }
      goto L_089CD890;
    }
L_089CD890:
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    goto L_089CD894;
L_089CD894:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_089CD8A8;
      }
      goto L_089CD8A0;
    }
L_089CD8A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD8C0;
      }
      goto L_089CD8A8;
    }
L_089CD8A8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(224)));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD8C0;
      }
      goto L_089CD8B8;
    }
L_089CD8B8:
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[22] = (ctx.gpr[5] | 0u);
    goto L_089CD8C0;
L_089CD8C0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089CD894;
      }
      goto L_089CD8D0;
    }
L_089CD8D0:
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_089CD8EC;
      }
      goto L_089CD8D8;
    }
L_089CD8D8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089CD8E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8596));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 333u, 0x089C55D8u>(ctx, &aot_mem) && ctx.pc == 0x089CD8E4u) goto L_089CD8E4;
    return;
L_089CD8E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD9E0;
      }
      goto L_089CD8EC;
    }
L_089CD8EC:
    ctx.gpr[22] = (ctx.gpr[22] << 2u);
    ctx.gpr[22] = (ctx.gpr[29] + ctx.gpr[22]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x089CD900u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x089CD900u) goto L_089CD900;
    return;
L_089CD900:
    ctx.gpr[31] = (0x089CD908u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 620u, 0x089C69C0u>(ctx, &aot_mem) && ctx.pc == 0x089CD908u) goto L_089CD908;
    return;
L_089CD908:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089CD980;
      }
      goto L_089CD91C;
    }
L_089CD91C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_089CD93C;
    }
    goto L_089CD934;
L_089CD934:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_089CD940;
      }
      goto L_089CD93C;
    }
L_089CD93C:
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[18]);
    goto L_089CD940;
L_089CD940:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD96C;
      }
      goto L_089CD948;
    }
L_089CD948:
    ctx.gpr[31] = (0x089CD950u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 689u, 0x089A2DC8u>(ctx, &aot_mem) && ctx.pc == 0x089CD950u) goto L_089CD950;
    return;
L_089CD950:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD96C;
      }
      goto L_089CD958;
    }
L_089CD958:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089CD96C;
      }
      goto L_089CD964;
    }
L_089CD964:
    ctx.gpr[31] = (0x089CD96Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 289u, 0x08A9D734u>(ctx, &aot_mem) && ctx.pc == 0x089CD96Cu) goto L_089CD96C;
    return;
L_089CD96C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(3248));
      if (branch_taken) {
          goto L_089CD91C;
      }
      goto L_089CD980;
    }
L_089CD980:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x089CD994u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 333u, 0x089C55D8u>(ctx, &aot_mem) && ctx.pc == 0x089CD994u) goto L_089CD994;
    return;
L_089CD994:
    ctx.gpr[31] = (0x089CD99Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 907u, 0x089C7B40u>(ctx, &aot_mem) && ctx.pc == 0x089CD99Cu) goto L_089CD99C;
    return;
L_089CD99C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD9B4;
      }
      goto L_089CD9A4;
    }
L_089CD9A4:
    ctx.gpr[31] = (0x089CD9ACu);
    ctx.gpr[4] = (0u | 131u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 175u, 0x089C8EB8u>(ctx, &aot_mem) && ctx.pc == 0x089CD9ACu) goto L_089CD9AC;
    return;
L_089CD9AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD9D0;
      }
      goto L_089CD9B4;
    }
L_089CD9B4:
    ctx.gpr[31] = (0x089CD9BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(476)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 333u, 0x089C55D8u>(ctx, &aot_mem) && ctx.pc == 0x089CD9BCu) goto L_089CD9BC;
    return;
L_089CD9BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[31] = (0x089CD9C8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 749u, 0x089C716Cu>(ctx, &aot_mem) && ctx.pc == 0x089CD9C8u) goto L_089CD9C8;
    return;
L_089CD9C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD9D8;
      }
      goto L_089CD9D0;
    }
L_089CD9D0:
    ctx.gpr[31] = (0x089CD9D8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 333u, 0x089C55D8u>(ctx, &aot_mem) && ctx.pc == 0x089CD9D8u) goto L_089CD9D8;
    return;
L_089CD9D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD860;
      }
      goto L_089CD9E0;
    }
L_089CD9E0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), ctx.gpr[30]);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089CD9EC;
L_089CD9EC:
    ctx.gpr[31] = (0x089CD9F4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 828u, 0x08AA3ED4u>(ctx, &aot_mem) && ctx.pc == 0x089CD9F4u) goto L_089CD9F4;
    return;
L_089CD9F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDCD0;
      }
      goto L_089CDA04;
    }
L_089CDA04:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(460)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CDCD0;
      }
      goto L_089CDA10;
    }
L_089CDA10:
    ctx.gpr[31] = (0x089CDA18u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 333u, 0x089C55D8u>(ctx, &aot_mem) && ctx.pc == 0x089CDA18u) goto L_089CDA18;
    return;
L_089CDA18:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(356));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(436));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089CDA40;
      }
      goto L_089CDA30;
    }
L_089CDA30:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_089CDA34;
L_089CDA34:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    if (ctx.gpr[4] != ctx.gpr[6]) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
        goto L_089CDA34;
    }
    goto L_089CDA40;
L_089CDA40:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[30] = (0u | 10000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[4]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[22] = (ctx.gpr[29] | 0u);
    goto L_089CDA58;
L_089CDA58:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7552)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CDA84;
      }
      goto L_089CDA7C;
    }
L_089CDA7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDB80;
      }
      goto L_089CDA84;
    }
L_089CDA84:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(356)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[19] << 4u);
      if (branch_taken) {
          goto L_089CDA98;
      }
      goto L_089CDA90;
    }
L_089CDA90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDB80;
      }
      goto L_089CDA98;
    }
L_089CDA98:
    ctx.gpr[6] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDB80;
      }
      goto L_089CDABC;
    }
L_089CDABC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    ctx.gpr[4] = (ctx.gpr[4] & 131u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CDB80;
      }
      goto L_089CDACC;
    }
L_089CDACC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089CDAF4;
      }
      goto L_089CDAE0;
    }
L_089CDAE0:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089CDAF4;
L_089CDAF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(28))))));
      if (branch_taken) {
          goto L_089CDB6C;
      }
      goto L_089CDB08;
    }
L_089CDB08:
    ctx.gpr[17] = (0u | 0u);
    goto L_089CDB0C;
L_089CDB0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_089CDB2C;
    }
    goto L_089CDB24;
L_089CDB24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089CDB30;
      }
      goto L_089CDB2C;
    }
L_089CDB2C:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    goto L_089CDB30;
L_089CDB30:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDB58;
      }
      goto L_089CDB38;
    }
L_089CDB38:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089CDB58;
      }
      goto L_089CDB44;
    }
L_089CDB44:
    ctx.gpr[31] = (0x089CDB4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 745u, 0x08A2F69Cu>(ctx, &aot_mem) && ctx.pc == 0x089CDB4Cu) goto L_089CDB4C;
    return;
L_089CDB4C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDB58;
      }
      goto L_089CDB54;
    }
L_089CDB54:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(5));
    goto L_089CDB58;
L_089CDB58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1760));
      if (branch_taken) {
          goto L_089CDB0C;
      }
      goto L_089CDB6C;
    }
L_089CDB6C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDB80;
      }
      goto L_089CDB78;
    }
L_089CDB78:
    ctx.gpr[30] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[21]);
    goto L_089CDB80;
L_089CDB80:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089CDA58;
      }
      goto L_089CDB94;
    }
L_089CDB94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[22] = (ctx.gpr[4] << 2u);
      if (branch_taken) {
          goto L_089CDBB8;
      }
      goto L_089CDBA4;
    }
L_089CDBA4:
    ctx.gpr[31] = (0x089CDBACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 333u, 0x089C55D8u>(ctx, &aot_mem) && ctx.pc == 0x089CDBACu) goto L_089CDBAC;
    return;
L_089CDBAC:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089CDCC8;
      }
      goto L_089CDBB8;
    }
L_089CDBB8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7552)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_089CDC70;
      }
      goto L_089CDBE4;
    }
L_089CDBE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_089CDC04;
    }
    goto L_089CDBFC;
L_089CDBFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089CDC08;
      }
      goto L_089CDC04;
    }
L_089CDC04:
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[19]);
    goto L_089CDC08;
L_089CDC08:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDC5C;
      }
      goto L_089CDC14;
    }
L_089CDC14:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_089CDC5C;
      }
      goto L_089CDC20;
    }
L_089CDC20:
    ctx.gpr[31] = (0x089CDC28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 540u, 0x0889EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089CDC28u) goto L_089CDC28;
    return;
L_089CDC28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDC5C;
      }
      goto L_089CDC30;
    }
L_089CDC30:
    ctx.gpr[31] = (0x089CDC38u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C0528u>(ctx, &aot_mem) && ctx.pc == 0x089CDC38u) goto L_089CDC38;
    return;
L_089CDC38:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDC5C;
      }
      goto L_089CDC40;
    }
L_089CDC40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089CDC5Cu);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CDC5Cu) goto L_089CDC5C;
    return;
L_089CDC5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1760));
      if (branch_taken) {
          goto L_089CDBE4;
      }
      goto L_089CDC70;
    }
L_089CDC70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
    ctx.gpr[31] = (0x089CDC7Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 333u, 0x089C55D8u>(ctx, &aot_mem) && ctx.pc == 0x089CDC7Cu) goto L_089CDC7C;
    return;
L_089CDC7C:
    ctx.gpr[31] = (0x089CDC84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 17u, 0x089C8124u>(ctx, &aot_mem) && ctx.pc == 0x089CDC84u) goto L_089CDC84;
    return;
L_089CDC84:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDCA8;
      }
      goto L_089CDC8C;
    }
L_089CDC8C:
    ctx.gpr[31] = (0x089CDC94u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(476)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 333u, 0x089C55D8u>(ctx, &aot_mem) && ctx.pc == 0x089CDC94u) goto L_089CDC94;
    return;
L_089CDC94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[31] = (0x089CDCA0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 749u, 0x089C716Cu>(ctx, &aot_mem) && ctx.pc == 0x089CDCA0u) goto L_089CDCA0;
    return;
L_089CDCA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDCC8;
      }
      goto L_089CDCA8;
    }
L_089CDCA8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[22]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(356), ctx.gpr[4]);
    ctx.gpr[31] = (0x089CDCC0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 333u, 0x089C55D8u>(ctx, &aot_mem) && ctx.pc == 0x089CDCC0u) goto L_089CDCC0;
    return;
L_089CDCC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDA40;
      }
      goto L_089CDCC8;
    }
L_089CDCC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD9EC;
      }
      goto L_089CDCD0;
    }
L_089CDCD0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(488)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(492)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(496)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(504)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(508)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(516)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(524)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CDD0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[20] = (2229u << 16u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-28012)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[5] = (2u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[10] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[21] = (2u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7388)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-7368));
    ctx.gpr[5] = (ctx.gpr[10] + ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089CDFE4;
      }
      goto L_089CDD7C;
    }
L_089CDD7C:
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[23] = (2230u << 16u);
    ctx.gpr[30] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
    goto L_089CDD8C;
L_089CDD8C:
    ctx.gpr[6] = (0u | 20u);
    ctx.gpr[4] = (ctx.gpr[18] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 3u);
      if (branch_taken) {
          goto L_089CDDD0;
      }
      goto L_089CDDAC;
    }
L_089CDDAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-6000)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDDD0;
      }
      goto L_089CDDB8;
    }
L_089CDDB8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(9)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CDDD0;
      }
      goto L_089CDDC8;
    }
L_089CDDC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_089CDFDC;
      }
      goto L_089CDDD0;
    }
L_089CDDD0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4900 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDEEC;
      }
      goto L_089CDDDC;
    }
L_089CDDDC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_089CDE04;
      }
      goto L_089CDDF0;
    }
L_089CDDF0:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089CDE04;
L_089CDE04:
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(30))))));
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[10] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(32476)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089CDE64;
      }
      goto L_089CDE30;
    }
L_089CDE30:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089CDE64;
      }
      goto L_089CDE38;
    }
L_089CDE38:
    ctx.gpr[4] = (ctx.gpr[17] << 4u);
    ctx.gpr[6] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[10] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4900));
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089CDE58u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(13)));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x089CDE58u) goto L_089CDE58;
    return;
L_089CDE58:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-28012)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[10] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_089CDFDC;
      }
      goto L_089CDE64;
    }
L_089CDE64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089CDE7Cu);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CDE7Cu) goto L_089CDE7C;
    return;
L_089CDE7C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-28012)));
      if (branch_taken) {
          goto L_089CDEE4;
      }
      goto L_089CDE8C;
    }
L_089CDE8C:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6115));
    ctx.gpr[4] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[10] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089CDEE4;
      }
      goto L_089CDEAC;
    }
L_089CDEAC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089CDEE4;
      }
      goto L_089CDEB4;
    }
L_089CDEB4:
    ctx.gpr[4] = (ctx.gpr[17] << 4u);
    ctx.gpr[6] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[10] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089CDED8u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x089CDED8u) goto L_089CDED8;
    return;
L_089CDED8:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-28012)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[10] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_089CDFDC;
      }
      goto L_089CDEE4;
    }
L_089CDEE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDF18;
      }
      goto L_089CDEEC;
    }
L_089CDEEC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 6115 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_089CDF18;
      }
      goto L_089CDEF8;
    }
L_089CDEF8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(936)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CDF10;
      }
      goto L_089CDF04;
    }
L_089CDF04:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089CDF18;
      }
      goto L_089CDF10;
    }
L_089CDF10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_089CDFDC;
      }
      goto L_089CDF18;
    }
L_089CDF18:
    ctx.gpr[16] = (ctx.gpr[17] << 4u);
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[10] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089CDF38u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 357u, 0x089C5768u>(ctx, &aot_mem) && ctx.pc == 0x089CDF38u) goto L_089CDF38;
    return;
L_089CDF38:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-28012)));
      if (branch_taken) {
          goto L_089CDF88;
      }
      goto L_089CDF40;
    }
L_089CDF40:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[10] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_089CDF5C;
      }
      goto L_089CDF54;
    }
L_089CDF54:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    goto L_089CDF5C;
L_089CDF5C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDFD8;
      }
      goto L_089CDF6C;
    }
L_089CDF6C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CDFD8;
      }
      goto L_089CDF7C;
    }
L_089CDF7C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
      if (branch_taken) {
          goto L_089CDFD8;
      }
      goto L_089CDF88;
    }
L_089CDF88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-7780)));
    ctx.gpr[5] = (ctx.gpr[10] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(-7780), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(13)));
    ctx.gpr[6] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDFC0;
      }
      goto L_089CDFA8;
    }
L_089CDFA8:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-6000)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-6000), ctx.gpr[4]);
    goto L_089CDFC0;
L_089CDFC0:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[31] = (0x089CDFCCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 355u, 0x089C5740u>(ctx, &aot_mem) && ctx.pc == 0x089CDFCCu) goto L_089CDFCC;
    return;
L_089CDFCC:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (ctx.gpr[10] + ctx.gpr[21]);
    goto L_089CDFD8;
L_089CDFD8:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_089CDFDC;
L_089CDFDC:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089CDD8C;
      }
      goto L_089CDFE4;
    }
L_089CDFE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089CDFF8;
      }
      goto L_089CDFF4;
    }
L_089CDFF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_089CDFF8;
L_089CDFF8:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089CE020;
      }
      goto L_089CE000;
    }
L_089CE000:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6000)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE020;
      }
      goto L_089CE00C;
    }
L_089CE00C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6000), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x089CE01Cu);
    ctx.gpr[5] = (0u | 0u);
    goto L_089CDD0C;
L_089CE01C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_089CE020;
L_089CE020:
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CE054:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[17] << 4u);
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[22] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-28012)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[30]);
    ctx.gpr[30] = (ctx.gpr[4] + ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    ctx.gpr[31] = (0x089CE0B4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.pc = 0x08B0BAE4u;
    return;
L_089CE0B4:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x089CE0C4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.pc = 0x08B0BBDCu;
    return;
L_089CE0C4:
    ctx.gpr[19] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4900 ? 1u : 0u);
    ctx.gpr[31] = (0x089CE0D0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 356u, 0x089C5760u>(ctx, &aot_mem) && ctx.pc == 0x089CE0D0u) goto L_089CE0D0;
    return;
L_089CE0D0:
    ctx.gpr[4] = (ctx.gpr[2] << 11u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[4] = (0u + ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089CE2BC;
      }
      goto L_089CE0E4;
    }
L_089CE0E4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_089CE10C;
      }
      goto L_089CE0F8;
    }
L_089CE0F8:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089CE10C;
L_089CE10C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089CE124u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CE124u) goto L_089CE124;
    return;
L_089CE124:
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(30))))));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28096)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[21]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089CE154;
      }
      goto L_089CE148;
    }
L_089CE148:
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089CE16C;
      }
      goto L_089CE154;
    }
L_089CE154:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[21] << 5u);
    ctx.gpr[6] = (ctx.gpr[21] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089CE16C;
L_089CE16C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
      if (branch_taken) {
          goto L_089CE290;
      }
      goto L_089CE174;
    }
L_089CE174:
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[19];
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_089CE1A4;
      }
      goto L_089CE180;
    }
L_089CE180:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7792)));
    ctx.gpr[4] = (ctx.gpr[18] << 5u);
    ctx.gpr[6] = (ctx.gpr[18] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE290;
      }
      goto L_089CE1A4;
    }
L_089CE1A4:
    ctx.gpr[31] = (0x089CE1ACu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 628u, 0x0892FC80u>(ctx, &aot_mem) && ctx.pc == 0x089CE1ACu) goto L_089CE1AC;
    return;
L_089CE1AC:
    ctx.gpr[21] = (2275u << 16u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[19];
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(2080));
      if (branch_taken) {
          goto L_089CE1C0;
      }
      goto L_089CE1B8;
    }
L_089CE1B8:
    ctx.gpr[31] = (0x089CE1C0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 534u, 0x08A8B2A4u>(ctx, &aot_mem) && ctx.pc == 0x089CE1C0u) goto L_089CE1C0;
    return;
L_089CE1C0:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089CE1CCu);
    ctx.gpr[5] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 165u, 0x088E8D6Cu>(ctx, &aot_mem) && ctx.pc == 0x089CE1CCu) goto L_089CE1CC;
    return;
L_089CE1CC:
    ctx.gpr[31] = (0x089CE1D4u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(30))))));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 619u, 0x0892FBDCu>(ctx, &aot_mem) && ctx.pc == 0x089CE1D4u) goto L_089CE1D4;
    return;
L_089CE1D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_089CE1F4;
      }
      goto L_089CE1E4;
    }
L_089CE1E4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_089CE1F4;
      }
      goto L_089CE1EC;
    }
L_089CE1EC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CE208;
      }
      goto L_089CE1F4;
    }
L_089CE1F4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089CE200u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_089CE624;
L_089CE200:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089CE23C;
      }
      goto L_089CE208;
    }
L_089CE208:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089CE214u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_089CE624;
L_089CE214:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE23C;
      }
      goto L_089CE220;
    }
L_089CE220:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CE23C;
      }
      goto L_089CE230;
    }
L_089CE230:
    ctx.gpr[31] = (0x089CE238u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 523u, 0x089CA430u>(ctx, &aot_mem) && ctx.pc == 0x089CE238u) goto L_089CE238;
    return;
L_089CE238:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_089CE23C;
L_089CE23C:
    ctx.gpr[31] = (0x089CE244u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 166u, 0x088E8D74u>(ctx, &aot_mem) && ctx.pc == 0x089CE244u) goto L_089CE244;
    return;
L_089CE244:
    ctx.gpr[31] = (0x089CE24Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 774u, 0x089C72C0u>(ctx, &aot_mem) && ctx.pc == 0x089CE24Cu) goto L_089CE24C;
    return;
L_089CE24C:
    ctx.gpr[31] = (0x089CE254u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(30))))));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 656u, 0x0892FE94u>(ctx, &aot_mem) && ctx.pc == 0x089CE254u) goto L_089CE254;
    return;
L_089CE254:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089CE264;
      }
      goto L_089CE25C;
    }
L_089CE25C:
    ctx.gpr[31] = (0x089CE264u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 538u, 0x08A8B320u>(ctx, &aot_mem) && ctx.pc == 0x089CE264u) goto L_089CE264;
    return;
L_089CE264:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_089CE2B4;
      }
      goto L_089CE26C;
    }
L_089CE26C:
    ctx.gpr[31] = (0x089CE274u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x089CE274u) goto L_089CE274;
    return;
L_089CE274:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[23]);
    ctx.gpr[31] = (0x089CE288u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(13)));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x089CE288u) goto L_089CE288;
    return;
L_089CE288:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089CE5F4;
      }
      goto L_089CE290;
    }
L_089CE290:
    ctx.gpr[31] = (0x089CE298u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x089CE298u) goto L_089CE298;
    return;
L_089CE298:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[23]);
    ctx.gpr[31] = (0x089CE2ACu);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(13)));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x089CE2ACu) goto L_089CE2AC;
    return;
L_089CE2AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089CE5F4;
      }
      goto L_089CE2B4;
    }
L_089CE2B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE334;
      }
      goto L_089CE2BC;
    }
L_089CE2BC:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 6100 ? 1u : 0u);
      if (branch_taken) {
          goto L_089CE394;
      }
      goto L_089CE2C4;
    }
L_089CE2C4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE394;
      }
      goto L_089CE2CC;
    }
L_089CE2CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    ctx.gpr[4] = (ctx.gpr[4] & 135u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CE2F4;
      }
      goto L_089CE2E4;
    }
L_089CE2E4:
    ctx.gpr[31] = (0x089CE2ECu);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-4900));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 281u, 0x089C9554u>(ctx, &aot_mem) && ctx.pc == 0x089CE2ECu) goto L_089CE2EC;
    return;
L_089CE2EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE384;
      }
      goto L_089CE2F4;
    }
L_089CE2F4:
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(2080));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089CE308u);
    ctx.gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 165u, 0x088E8D6Cu>(ctx, &aot_mem) && ctx.pc == 0x089CE308u) goto L_089CE308;
    return;
L_089CE308:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CE318u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 407u, 0x089C9CDCu>(ctx, &aot_mem) && ctx.pc == 0x089CE318u) goto L_089CE318;
    return;
L_089CE318:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089CE324u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 166u, 0x088E8D74u>(ctx, &aot_mem) && ctx.pc == 0x089CE324u) goto L_089CE324;
    return;
L_089CE324:
    ctx.gpr[31] = (0x089CE32Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 774u, 0x089C72C0u>(ctx, &aot_mem) && ctx.pc == 0x089CE32Cu) goto L_089CE32C;
    return;
L_089CE32C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE344;
      }
      goto L_089CE334;
    }
L_089CE334:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CE4AC;
      }
      goto L_089CE33C;
    }
L_089CE33C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE54C;
      }
      goto L_089CE344;
    }
L_089CE344:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-4900));
    ctx.gpr[31] = (0x089CE354u);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8424));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 577u, 0x0892F95Cu>(ctx, &aot_mem) && ctx.pc == 0x089CE354u) goto L_089CE354;
    return;
L_089CE354:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089CE360u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x089CE360u) goto L_089CE360;
    return;
L_089CE360:
    ctx.gpr[31] = (0x089CE368u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x089CE368u) goto L_089CE368;
    return;
L_089CE368:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[23]);
    ctx.gpr[31] = (0x089CE37Cu);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(13)));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x089CE37Cu) goto L_089CE37C;
    return;
L_089CE37C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089CE5F4;
      }
      goto L_089CE384;
    }
L_089CE384:
    ctx.gpr[31] = (0x089CE38Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x089CE38Cu) goto L_089CE38C;
    return;
L_089CE38C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089CE5F4;
      }
      goto L_089CE394;
    }
L_089CE394:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 6115 ? 1u : 0u);
      if (branch_taken) {
          goto L_089CE41C;
      }
      goto L_089CE3A0;
    }
L_089CE3A0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE41C;
      }
      goto L_089CE3A8;
    }
L_089CE3A8:
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(2080));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089CE3BCu);
    ctx.gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 165u, 0x088E8D6Cu>(ctx, &aot_mem) && ctx.pc == 0x089CE3BCu) goto L_089CE3BC;
    return;
L_089CE3BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089CE3C8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 436u, 0x089C9F50u>(ctx, &aot_mem) && ctx.pc == 0x089CE3C8u) goto L_089CE3C8;
    return;
L_089CE3C8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089CE3D4u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 166u, 0x088E8D74u>(ctx, &aot_mem) && ctx.pc == 0x089CE3D4u) goto L_089CE3D4;
    return;
L_089CE3D4:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CE334;
      }
      goto L_089CE3DC;
    }
L_089CE3DC:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-6100));
    ctx.gpr[31] = (0x089CE3ECu);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8400));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 246u, 0x089859A0u>(ctx, &aot_mem) && ctx.pc == 0x089CE3ECu) goto L_089CE3EC;
    return;
L_089CE3EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089CE3F8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x089CE3F8u) goto L_089CE3F8;
    return;
L_089CE3F8:
    ctx.gpr[31] = (0x089CE400u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x089CE400u) goto L_089CE400;
    return;
L_089CE400:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[23]);
    ctx.gpr[31] = (0x089CE414u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(13)));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x089CE414u) goto L_089CE414;
    return;
L_089CE414:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089CE5F4;
      }
      goto L_089CE41C;
    }
L_089CE41C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CE494;
      }
      goto L_089CE424;
    }
L_089CE424:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    ctx.gpr[4] = (ctx.gpr[4] & 135u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CE44C;
      }
      goto L_089CE43C;
    }
L_089CE43C:
    ctx.gpr[31] = (0x089CE444u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-6115));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 307u, 0x089C969Cu>(ctx, &aot_mem) && ctx.pc == 0x089CE444u) goto L_089CE444;
    return;
L_089CE444:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE484;
      }
      goto L_089CE44C;
    }
L_089CE44C:
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(2080));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089CE460u);
    ctx.gpr[5] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 165u, 0x088E8D6Cu>(ctx, &aot_mem) && ctx.pc == 0x089CE460u) goto L_089CE460;
    return;
L_089CE460:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089CE46Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 425u, 0x089C9E44u>(ctx, &aot_mem) && ctx.pc == 0x089CE46Cu) goto L_089CE46C;
    return;
L_089CE46C:
    ctx.gpr[31] = (0x089CE474u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 452u, 0x08A8AC00u>(ctx, &aot_mem) && ctx.pc == 0x089CE474u) goto L_089CE474;
    return;
L_089CE474:
    ctx.gpr[31] = (0x089CE47Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 166u, 0x088E8D74u>(ctx, &aot_mem) && ctx.pc == 0x089CE47Cu) goto L_089CE47C;
    return;
L_089CE47C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE334;
      }
      goto L_089CE484;
    }
L_089CE484:
    ctx.gpr[31] = (0x089CE48Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x089CE48Cu) goto L_089CE48C;
    return;
L_089CE48C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089CE5F4;
      }
      goto L_089CE494;
    }
L_089CE494:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CE4A4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8376));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 333u, 0x089C55D8u>(ctx, &aot_mem) && ctx.pc == 0x089CE4A4u) goto L_089CE4A4;
    return;
L_089CE4A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE334;
      }
      goto L_089CE4AC;
    }
L_089CE4AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 7u);
      if (branch_taken) {
          goto L_089CE5C0;
      }
      goto L_089CE4BC;
    }
L_089CE4BC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CE5C0;
      }
      goto L_089CE4C4;
    }
L_089CE4C4:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_089CE4E0;
      }
      goto L_089CE4D0;
    }
L_089CE4D0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_089CE4E0;
      }
      goto L_089CE4D8;
    }
L_089CE4D8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CE51C;
      }
      goto L_089CE4E0;
    }
L_089CE4E0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(54)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CE51C;
      }
      goto L_089CE4F0;
    }
L_089CE4F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE514;
      }
      goto L_089CE508;
    }
L_089CE508:
    ctx.gpr[4] = (0u | 255u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089CE51C;
      }
      goto L_089CE514;
    }
L_089CE514:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089CE51C;
L_089CE51C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(9)));
    ctx.gpr[4] = (ctx.gpr[4] & 131u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CE5C0;
      }
      goto L_089CE52C;
    }
L_089CE52C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7428));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x089CE544u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 354u, 0x089C5724u>(ctx, &aot_mem) && ctx.pc == 0x089CE544u) goto L_089CE544;
    return;
L_089CE544:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE5C0;
      }
      goto L_089CE54C;
    }
L_089CE54C:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 6100 ? 1u : 0u);
      if (branch_taken) {
          goto L_089CE58C;
      }
      goto L_089CE554;
    }
L_089CE554:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE58C;
      }
      goto L_089CE55C;
    }
L_089CE55C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(9)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CE5C0;
      }
      goto L_089CE56C;
    }
L_089CE56C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7428));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x089CE584u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 354u, 0x089C5724u>(ctx, &aot_mem) && ctx.pc == 0x089CE584u) goto L_089CE584;
    return;
L_089CE584:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE5C0;
      }
      goto L_089CE58C;
    }
L_089CE58C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 6115 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CE5C0;
      }
      goto L_089CE598;
    }
L_089CE598:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(9)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CE5C0;
      }
      goto L_089CE5A8;
    }
L_089CE5A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7428));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x089CE5C0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 354u, 0x089C5724u>(ctx, &aot_mem) && ctx.pc == 0x089CE5C0u) goto L_089CE5C0;
    return;
L_089CE5C0:
    ctx.gpr[16] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[31] = (0x089CE5D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 356u, 0x089C5760u>(ctx, &aot_mem) && ctx.pc == 0x089CE5D8u) goto L_089CE5D8;
    return;
L_089CE5D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[2] << 11u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_089CE5F4;
L_089CE5F4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CE624:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7872)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089CE66C;
      }
      goto L_089CE658;
    }
L_089CE658:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089CE66C;
L_089CE66C:
    ctx.gpr[4] = (ctx.gpr[17] << 4u);
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x089CE690u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 356u, 0x089C5760u>(ctx, &aot_mem) && ctx.pc == 0x089CE690u) goto L_089CE690;
    return;
L_089CE690:
    ctx.gpr[5] = (109u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] << 11u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(25708));
    ctx.gpr[4] = (0u + ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089CE780;
      }
      goto L_089CE6AC;
    }
L_089CE6AC:
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CE780;
      }
      goto L_089CE6B8;
    }
L_089CE6B8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CE780;
      }
      goto L_089CE6C8;
    }
L_089CE6C8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CE780;
      }
      goto L_089CE6E0;
    }
L_089CE6E0:
    ctx.gpr[4] = (109u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25708));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089CE700u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 559u, 0x0886AFC0u>(ctx, &aot_mem) && ctx.pc == 0x089CE700u) goto L_089CE700;
    return;
L_089CE700:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089CE724u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CE724u) goto L_089CE724;
    return;
L_089CE724:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089CE73Cu);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CE73Cu) goto L_089CE73C;
    return;
L_089CE73C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089CE7A0;
      }
      goto L_089CE750;
    }
L_089CE750:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089CE760u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CE760u) goto L_089CE760;
    return;
L_089CE760:
    ctx.gpr[5] = (2204u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CE774u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22216));
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 201u, 0x08AA4FD4u>(ctx, &aot_mem) && ctx.pc == 0x089CE774u) goto L_089CE774;
    return;
L_089CE774:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089CE7E8;
      }
      goto L_089CE780;
    }
L_089CE780:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CE798u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8344));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 333u, 0x089C55D8u>(ctx, &aot_mem) && ctx.pc == 0x089CE798u) goto L_089CE798;
    return;
L_089CE798:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089CE8EC;
      }
      goto L_089CE7A0;
    }
L_089CE7A0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089CE7B0u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CE7B0u) goto L_089CE7B0;
    return;
L_089CE7B0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089CE7E8;
      }
      goto L_089CE7C4;
    }
L_089CE7C4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089CE7D4u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CE7D4u) goto L_089CE7D4;
    return;
L_089CE7D4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089CE7E0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 348u, 0x089C56C8u>(ctx, &aot_mem) && ctx.pc == 0x089CE7E0u) goto L_089CE7E0;
    return;
L_089CE7E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    goto L_089CE7E8;
L_089CE7E8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089CE7F8u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CE7F8u) goto L_089CE7F8;
    return;
L_089CE7F8:
    ctx.gpr[31] = (0x089CE800u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 240u, 0x08A7D4B0u>(ctx, &aot_mem) && ctx.pc == 0x089CE800u) goto L_089CE800;
    return;
L_089CE800:
    ctx.gpr[31] = (0x089CE808u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 240u, 0x08A7D4B0u>(ctx, &aot_mem) && ctx.pc == 0x089CE808u) goto L_089CE808;
    return;
L_089CE808:
    ctx.gpr[31] = (0x089CE810u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 248u, 0x08A7D52Cu>(ctx, &aot_mem) && ctx.pc == 0x089CE810u) goto L_089CE810;
    return;
L_089CE810:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089CE828u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CE828u) goto L_089CE828;
    return;
L_089CE828:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089CE854;
      }
      goto L_089CE834;
    }
L_089CE834:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089CE84Cu);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CE84Cu) goto L_089CE84C;
    return;
L_089CE84C:
    ctx.gpr[31] = (0x089CE854u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 534u, 0x08A8B2A4u>(ctx, &aot_mem) && ctx.pc == 0x089CE854u) goto L_089CE854;
    return;
L_089CE854:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[8] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_089CE8D0;
      }
      goto L_089CE874;
    }
L_089CE874:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_089CE8B4;
      }
      goto L_089CE884;
    }
L_089CE884:
    ctx.gpr[9] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[9] = (ctx.gpr[9] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE8B4;
      }
      goto L_089CE898;
    }
L_089CE898:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[7] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_089CE8B4;
      }
      goto L_089CE8A8;
    }
L_089CE8A8:
    ctx.gpr[6] = (ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CE8B8;
      }
      goto L_089CE8B4;
    }
L_089CE8B4:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    goto L_089CE8B8;
L_089CE8B8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089CE874;
      }
      goto L_089CE8D0;
    }
L_089CE8D0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (4096u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[2] = (0u | 1u);
    goto L_089CE8EC;
L_089CE8EC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CE908:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28236)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[7] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-28240)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (17096u << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-28232), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[4] = (16014u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14571u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[15] / ctx.fpr[12];
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17))))));
    ctx.gpr[8] = (2277u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[8] + static_cast<std::uint32_t>(-5792));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(-5792), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19))))));
    ctx.gpr[9] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-28224), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (2229u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28208)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-28228), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (16672u << 16u);
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[5] = (16281u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-28188)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[9] = (16268u << 16u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-28220), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[9] = (ctx.gpr[9] | 52429u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-28216), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[7] = (15744u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-28200), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-28192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-28184), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28212)));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-28204), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-28196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x089CEA48u);
    ctx.gpr[5] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 126u, 0x08B04920u>(ctx, &aot_mem) && ctx.pc == 0x089CEA48u) goto L_089CEA48;
    return;
L_089CEA48:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CEA58u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 838u, 0x08AFB9D4u>(ctx, &aot_mem) && ctx.pc == 0x089CEA58u) goto L_089CEA58;
    return;
L_089CEA58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CEA70u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 12u, 0x08B0408Cu>(ctx, &aot_mem) && ctx.pc == 0x089CEA70u) goto L_089CEA70;
    return;
L_089CEA70:
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[31] = (0x089CEA80u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27960));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x089CEA80u) goto L_089CEA80;
    return;
L_089CEA80:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CEA98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 288u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089CEAE0;
      }
      goto L_089CEAC0;
    }
L_089CEAC0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089CEAF0;
      }
      goto L_089CEAE0;
    }
L_089CEAE0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089CEAECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 17u, 0x08AB0158u>(ctx, &aot_mem) && ctx.pc == 0x089CEAECu) goto L_089CEAEC;
    return;
L_089CEAEC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    goto L_089CEAF0;
L_089CEAF0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CEB00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089CEB18u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 17u, 0x08AB0158u>(ctx, &aot_mem) && ctx.pc == 0x089CEB18u) goto L_089CEB18;
    return;
L_089CEB18:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CEB2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x089CEB54u);
    ctx.gpr[18] = (ctx.gpr[6] + static_cast<std::uint32_t>(-8280));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 562u, 0x08AAED38u>(ctx, &aot_mem) && ctx.pc == 0x089CEB54u) goto L_089CEB54;
    return;
L_089CEB54:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089CEB64u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 218u, 0x08A5932Cu>(ctx, &aot_mem) && ctx.pc == 0x089CEB64u) goto L_089CEB64;
    return;
L_089CEB64:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089CEB70u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 553u, 0x08AAECB0u>(ctx, &aot_mem) && ctx.pc == 0x089CEB70u) goto L_089CEB70;
    return;
L_089CEB70:
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
L_089CEB88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CEBAC;
      }
      goto L_089CEB9C;
    }
L_089CEB9C:
    ctx.gpr[31] = (0x089CEBA4u);
    // nop
    goto L_089CEA98;
L_089CEBA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089CEBB0;
      }
      goto L_089CEBAC;
    }
L_089CEBAC:
    ctx.gpr[2] = (0u | 0u);
    goto L_089CEBB0;
L_089CEBB0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CEBBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089CEBD8u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_089CEB88;
L_089CEBD8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CEBEC;
      }
      goto L_089CEBE0;
    }
L_089CEBE0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CEBECu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089CEB2C;
L_089CEBEC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CEC00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[31] = (0x089CEC34u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    goto L_089CEB88;
L_089CEC34:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CECA8;
      }
      goto L_089CEC3C;
    }
L_089CEC3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089CEC5C;
      }
      goto L_089CEC48;
    }
L_089CEC48:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089CEC54u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_089CEB2C;
L_089CEC54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CECA8;
      }
      goto L_089CEC5C;
    }
L_089CEC5C:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089CEC74u);
    ctx.gpr[18] = (ctx.gpr[6] + static_cast<std::uint32_t>(-8264));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 562u, 0x08AAED38u>(ctx, &aot_mem) && ctx.pc == 0x089CEC74u) goto L_089CEC74;
    return;
L_089CEC74:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089CEC84u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 562u, 0x08AAED38u>(ctx, &aot_mem) && ctx.pc == 0x089CEC84u) goto L_089CEC84;
    return;
L_089CEC84:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089CEC9Cu);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 218u, 0x08A5932Cu>(ctx, &aot_mem) && ctx.pc == 0x089CEC9Cu) goto L_089CEC9C;
    return;
L_089CEC9C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089CECA8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 553u, 0x08AAECB0u>(ctx, &aot_mem) && ctx.pc == 0x089CECA8u) goto L_089CECA8;
    return;
L_089CECA8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CECCC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (0u | 278u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[5] = (2226u << 16u);
      if (branch_taken) {
          goto L_089CECF8;
      }
      goto L_089CECE8;
    }
L_089CECE8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x089CECF4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8220));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 553u, 0x08AAECB0u>(ctx, &aot_mem) && ctx.pc == 0x089CECF4u) goto L_089CECF4;
    return;
L_089CECF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_089CECF8;
L_089CECF8:
    ctx.gpr[31] = (0x089CED00u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_089CEA98;
L_089CED00:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CED14:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CED2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089CED48u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 705u, 0x08883514u>(ctx, &aot_mem) && ctx.pc == 0x089CED48u) goto L_089CED48;
    return;
L_089CED48:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x089CED58u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    goto L_089CED14;
L_089CED58:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CED68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089CED84u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    goto L_089CECCC;
L_089CED84:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CED94u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    goto L_089CED2C;
L_089CED94:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CEDA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_089CEE08;
      }
      goto L_089CEDE0;
    }
L_089CEDE0:
    ctx.gpr[8] = (32768u << 16u);
    ctx.gpr[9] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(56));
    ctx.gpr[7] = (0u | 12u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-3));
    ctx.gpr[31] = (0x089CEE00u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-8204));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 313u, 0x0894DD40u>(ctx, &aot_mem) && ctx.pc == 0x089CEE00u) goto L_089CEE00;
    return;
L_089CEE00:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_089CEE08;
L_089CEE08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CEE48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[7] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (0u | 200u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x089CEE8Cu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-8200));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 543u, 0x08AAEBB8u>(ctx, &aot_mem) && ctx.pc == 0x089CEE8Cu) goto L_089CEE8C;
    return;
L_089CEE8C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089CEE98u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_089CEDA8;
L_089CEE98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(696));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
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
L_089CEED0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
      if (branch_taken) {
          goto L_089CEF20;
      }
      goto L_089CEEE4;
    }
L_089CEEE4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(696)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
      if (branch_taken) {
          goto L_089CEEE4;
      }
      goto L_089CEF20;
    }
L_089CEF20:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CEF28:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CEF80;
      }
      goto L_089CEF3C;
    }
L_089CEF3C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    goto L_089CEF40;
L_089CEF40:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(696)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089CEF40;
      }
      goto L_089CEF80;
    }
L_089CEF80:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CEF88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x089CEFB8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x089CEFB8u) goto L_089CEFB8;
    return;
L_089CEFB8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089CEFC8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 555u, 0x0891713Cu>(ctx, &aot_mem) && ctx.pc == 0x089CEFC8u) goto L_089CEFC8;
    return;
L_089CEFC8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089CEFD8u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_089CEE48;
L_089CEFD8:
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
L_089CEFF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089CF00Cu);
    ctx.gpr[6] = (0u | 0u);
    goto L_089CEF88;
L_089CF00C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089CF018u);
    ctx.gpr[5] = (0u | 1u);
    goto L_089CEED0;
L_089CF018:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CF028:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089CF0A4;
      }
      goto L_089CF060;
    }
L_089CF060:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089CF06C;
L_089CF06C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089CF084;
      }
      goto L_089CF078;
    }
L_089CF078:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_089CF09C;
      }
      goto L_089CF084;
    }
L_089CF084:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_089CF06C;
      }
      goto L_089CF094;
    }
L_089CF094:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF0A4;
      }
      goto L_089CF09C;
    }
L_089CF09C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF170;
      }
      goto L_089CF0A4;
    }
L_089CF0A4:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (0u | 32u);
    ctx.gpr[31] = (0x089CF0BCu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-8184));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 543u, 0x08AAEBB8u>(ctx, &aot_mem) && ctx.pc == 0x089CF0BCu) goto L_089CF0BC;
    return;
L_089CF0BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_089CF114;
      }
      goto L_089CF0D8;
    }
L_089CF0D8:
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (32768u << 16u);
    ctx.gpr[9] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (0u | 4u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-3));
    ctx.gpr[31] = (0x089CF100u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-8204));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 313u, 0x0894DD40u>(ctx, &aot_mem) && ctx.pc == 0x089CF100u) goto L_089CF100;
    return;
L_089CF100:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    goto L_089CF114;
L_089CF114:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(68));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_089CF170;
L_089CF170:
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
L_089CF18C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089CF1D8;
      }
      goto L_089CF19C;
    }
L_089CF19C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[2] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    goto L_089CF1AC;
L_089CF1AC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(696)));
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_089CF1E0;
      }
      goto L_089CF1CC;
    }
L_089CF1CC:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_089CF1AC;
      }
      goto L_089CF1D8;
    }
L_089CF1D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089CF1E0;
      }
      goto L_089CF1E0;
    }
L_089CF1E0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CF1E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_089CF1EC;
L_089CF1EC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF20C;
      }
      goto L_089CF1F4;
    }
L_089CF1F4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF20C;
      }
      goto L_089CF204;
    }
L_089CF204:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089CF1EC;
      }
      goto L_089CF20C;
    }
L_089CF20C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF21C;
      }
      goto L_089CF214;
    }
L_089CF214:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    goto L_089CF21C;
L_089CF21C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CF224:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_089CF26C;
      }
      goto L_089CF254;
    }
L_089CF254:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[31] = (0x089CF264u);
    ctx.gpr[6] = (0u | 255u);
    goto L_089CED14;
L_089CF264:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF30C;
      }
      goto L_089CF26C;
    }
L_089CF26C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089CF278u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_089CF18C;
L_089CF278:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
    // nop
      if (branch_taken) {
          goto L_089CF2B0;
      }
      goto L_089CF284;
    }
L_089CF284:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x089CF294u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    goto L_089CED14;
L_089CF294:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CF30C;
      }
      goto L_089CF29C;
    }
L_089CF29C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089CF2A8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_089CF1E8;
L_089CF2A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF30C;
      }
      goto L_089CF2B0;
    }
L_089CF2B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CF2C4u);
    ctx.gpr[7] = (0u | 0u);
    goto L_089CF224;
L_089CF2C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CF2F0;
      }
      goto L_089CF2D4;
    }
L_089CF2D4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF30C;
      }
      goto L_089CF2DC;
    }
L_089CF2DC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089CF2E8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 705u, 0x08883514u>(ctx, &aot_mem) && ctx.pc == 0x089CF2E8u) goto L_089CF2E8;
    return;
L_089CF2E8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089CF30C;
      }
      goto L_089CF2F0;
    }
L_089CF2F0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089CF300u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_089CF028;
L_089CF300:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_089CF30C;
L_089CF30C:
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
L_089CF32C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x089CF354u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    goto L_089CECCC;
L_089CF354:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089CF36Cu);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    goto L_089CF224;
L_089CF36C:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
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
L_089CF38C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 12u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_089CF3F0;
      }
      goto L_089CF3B8;
    }
L_089CF3B8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) > 0;
    // nop
      if (branch_taken) {
          goto L_089CF3CC;
      }
      goto L_089CF3C4;
    }
L_089CF3C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089CF3D8;
      }
      goto L_089CF3CC;
    }
L_089CF3CC:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x089CF3D8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 687u, 0x08883358u>(ctx, &aot_mem) && ctx.pc == 0x089CF3D8u) goto L_089CF3D8;
    return;
L_089CF3D8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089CF3E8u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 711u, 0x088835B0u>(ctx, &aot_mem) && ctx.pc == 0x089CF3E8u) goto L_089CF3E8;
    return;
L_089CF3E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF42C;
      }
      goto L_089CF3F0;
    }
L_089CF3F0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF404;
      }
      goto L_089CF3F8;
    }
L_089CF3F8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089CF404u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 768u, 0x08883A94u>(ctx, &aot_mem) && ctx.pc == 0x089CF404u) goto L_089CF404;
    return;
L_089CF404:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089CF42C;
      }
      goto L_089CF40C;
    }
L_089CF40C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089CF41Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 687u, 0x08883358u>(ctx, &aot_mem) && ctx.pc == 0x089CF41Cu) goto L_089CF41C;
    return;
L_089CF41C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089CF42Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 605u, 0x08882CE4u>(ctx, &aot_mem) && ctx.pc == 0x089CF42Cu) goto L_089CF42C;
    return;
L_089CF42C:
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
L_089CF444:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x089CF468u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    goto L_089CEED0;
L_089CF468:
    ctx.gpr[7] = (2226u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 100u);
    ctx.gpr[31] = (0x089CF480u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-8172));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 543u, 0x08AAEBB8u>(ctx, &aot_mem) && ctx.pc == 0x089CF480u) goto L_089CF480;
    return;
L_089CF480:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(70), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_089CF4A8;
      }
      goto L_089CF498;
    }
L_089CF498:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089CF4A8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8160));
    goto L_089CEFF4;
L_089CF4A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x089CF4B4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 687u, 0x08883358u>(ctx, &aot_mem) && ctx.pc == 0x089CF4B4u) goto L_089CF4B4;
    return;
L_089CF4B4:
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
L_089CF4CC:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CF4F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x089CF524u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_089CEF28;
L_089CF524:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF548;
      }
      goto L_089CF530;
    }
L_089CF530:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 33u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089CF548u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 77u, 0x08884564u>(ctx, &aot_mem) && ctx.pc == 0x089CF548u) goto L_089CF548;
    return;
L_089CF548:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[31] = (0x089CF55Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 669u, 0x08883224u>(ctx, &aot_mem) && ctx.pc == 0x089CF55Cu) goto L_089CF55C;
    return;
L_089CF55C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CF570:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089CF5E8;
      }
      goto L_089CF5B8;
    }
L_089CF5B8:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (4u << 16u);
    ctx.gpr[9] = (2226u << 16u);
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(52));
    ctx.gpr[7] = (0u | 4u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x089CF5E0u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-8156));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 313u, 0x0894DD40u>(ctx, &aot_mem) && ctx.pc == 0x089CF5E0u) goto L_089CF5E0;
    return;
L_089CF5E0:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089CF5E8;
L_089CF5E8:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(44));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (0u | 34u);
    ctx.gpr[31] = (0x089CF620u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 79u, 0x0888459Cu>(ctx, &aot_mem) && ctx.pc == 0x089CF620u) goto L_089CF620;
    return;
L_089CF620:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[31] = (0x089CF630u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    goto L_089CED14;
L_089CF630:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (0u | 5u);
      if (branch_taken) {
          goto L_089CF68C;
      }
      goto L_089CF648;
    }
L_089CF648:
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    goto L_089CF64C;
L_089CF64C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (0u | 4u);
    if (ctx.gpr[5] == ctx.gpr[20]) {
    ctx.gpr[4] = (0u | 0u);
        goto L_089CF65C;
    }
    goto L_089CF65C;
L_089CF65C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089CF674u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 77u, 0x08884564u>(ctx, &aot_mem) && ctx.pc == 0x089CF674u) goto L_089CF674;
    return;
L_089CF674:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_089CF64C;
      }
      goto L_089CF68C;
    }
L_089CF68C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CF6AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x089CF6D0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 148u, 0x08878C20u>(ctx, &aot_mem) && ctx.pc == 0x089CF6D0u) goto L_089CF6D0;
    return;
L_089CF6D0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089CF718u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 690u, 0x08927F14u>(ctx, &aot_mem) && ctx.pc == 0x089CF718u) goto L_089CF718;
    return;
L_089CF718:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(71), static_cast<std::uint8_t>(ctx.gpr[5]));
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
L_089CF754:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x089CF784u);
    ctx.gpr[5] = (0u | 0u);
    goto L_089CEF28;
L_089CF784:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 27u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x089CF79Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 77u, 0x08884564u>(ctx, &aot_mem) && ctx.pc == 0x089CF79Cu) goto L_089CF79C;
    return;
L_089CF79C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    ctx.gpr[31] = (0x089CF7B8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x089CF7B8u) goto L_089CF7B8;
    return;
L_089CF7B8:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[31] = (0x089CF7DCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x089CF7DCu) goto L_089CF7DC;
    return;
L_089CF7DC:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[7] << 3u);
    ctx.gpr[31] = (0x089CF804u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x089CF804u) goto L_089CF804;
    return;
L_089CF804:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[31] = (0x089CF82Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x089CF82Cu) goto L_089CF82C;
    return;
L_089CF82C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[31] = (0x089CF864u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x089CF864u) goto L_089CF864;
    return;
L_089CF864:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[31] = (0x089CF88Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x089CF88Cu) goto L_089CF88C;
    return;
L_089CF88C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
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
L_089CF8BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1584));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1568), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1564), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1572), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1576), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1580), ctx.gpr[31]);
    ctx.gpr[31] = (0x089CF8F4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x089CF8F4u) goto L_089CF8F4;
    return;
L_089CF8F4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089CF904u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 555u, 0x0891713Cu>(ctx, &aot_mem) && ctx.pc == 0x089CF904u) goto L_089CF904;
    return;
L_089CF904:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CF918u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 579u, 0x08AAEE78u>(ctx, &aot_mem) && ctx.pc == 0x089CF918u) goto L_089CF918;
    return;
L_089CF918:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[31] = (0x089CF924u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089CF6AC;
L_089CF924:
    ctx.gpr[31] = (0x089CF92Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089CEA98;
L_089CF92C:
    ctx.gpr[31] = (0x089CF934u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 420u, 0x089D1974u>(ctx, &aot_mem) && ctx.pc == 0x089CF934u) goto L_089CF934;
    return;
L_089CF934:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (0u | 288u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (2226u << 16u);
      if (branch_taken) {
          goto L_089CF950;
      }
      goto L_089CF944;
    }
L_089CF944:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089CF950u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8132));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 553u, 0x08AAECB0u>(ctx, &aot_mem) && ctx.pc == 0x089CF950u) goto L_089CF950;
    return;
L_089CF950:
    ctx.gpr[31] = (0x089CF958u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089CF754;
L_089CF958:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1564)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1568)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1572)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1576)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1580)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1584));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CF978:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x089CF9A4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 773u, 0x08883AF0u>(ctx, &aot_mem) && ctx.pc == 0x089CF9A4u) goto L_089CF9A4;
    return;
L_089CF9A4:
    ctx.gpr[31] = (0x089CF9ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089CEA98;
L_089CF9AC:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089CF9BCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_089CED68;
L_089CF9BC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CF9CCu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 30u, 0x088841BCu>(ctx, &aot_mem) && ctx.pc == 0x089CF9CCu) goto L_089CF9CC;
    return;
L_089CF9CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CF9E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089CFA04u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    goto L_089CEA98;
L_089CFA04:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089CFA10u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 136u, 0x089D0708u>(ctx, &aot_mem) && ctx.pc == 0x089CFA10u) goto L_089CFA10;
    return;
L_089CFA10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x089CFA1Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 783u, 0x08883B80u>(ctx, &aot_mem) && ctx.pc == 0x089CFA1Cu) goto L_089CFA1C;
    return;
L_089CFA1C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089CFA28u);
    ctx.gpr[5] = (0u | 93u);
    goto L_089CEBBC;
L_089CFA28:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CFA3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    ctx.gpr[7] = (0u | 278u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089CFAB8;
      }
      goto L_089CFA7C;
    }
L_089CFA7C:
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[7] = (2226u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-3));
    ctx.gpr[31] = (0x089CFA98u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-8116));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 543u, 0x08AAEBB8u>(ctx, &aot_mem) && ctx.pc == 0x089CFA98u) goto L_089CFA98;
    return;
L_089CFA98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[31] = (0x089CFAB0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_089CED68;
L_089CFAB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CFAC4;
      }
      goto L_089CFAB8;
    }
L_089CFAB8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CFAC4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_089CF9E8;
L_089CFAC4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CFAD0u);
    ctx.gpr[5] = (0u | 61u);
    goto L_089CEBBC;
L_089CFAD0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089CFADCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 788u, 0x08883BD4u>(ctx, &aot_mem) && ctx.pc == 0x089CFADCu) goto L_089CFADC;
    return;
L_089CFADC:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CFAECu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 136u, 0x089D0708u>(ctx, &aot_mem) && ctx.pc == 0x089CFAECu) goto L_089CFAEC;
    return;
L_089CFAEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089CFB00u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 788u, 0x08883BD4u>(ctx, &aot_mem) && ctx.pc == 0x089CFB00u) goto L_089CFB00;
    return;
L_089CFB00:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089CFB10u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 788u, 0x08883BD4u>(ctx, &aot_mem) && ctx.pc == 0x089CFB10u) goto L_089CFB10;
    return;
L_089CFB10:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CFB28u);
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 77u, 0x08884564u>(ctx, &aot_mem) && ctx.pc == 0x089CFB28u) goto L_089CFB28;
    return;
L_089CFB28:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CFB50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089CFB98;
      }
      goto L_089CFB70;
    }
L_089CFB70:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CFB7Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 768u, 0x08883A94u>(ctx, &aot_mem) && ctx.pc == 0x089CFB7Cu) goto L_089CFB7C;
    return;
L_089CFB7C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 32u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CFBA0;
      }
      goto L_089CFB90;
    }
L_089CFB90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CFBD0;
      }
      goto L_089CFB98;
    }
L_089CFB98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CFBD0;
      }
      goto L_089CFBA0;
    }
L_089CFBA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CFBBCu);
    ctx.gpr[5] = (0u | 31u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 79u, 0x0888459Cu>(ctx, &aot_mem) && ctx.pc == 0x089CFBBCu) goto L_089CFBBC;
    return;
L_089CFBBC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    goto L_089CFBD0;
L_089CFBD0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CFBE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089CFC50;
      }
      goto L_089CFC04;
    }
L_089CFC04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CFC58;
      }
      goto L_089CFC14;
    }
L_089CFC14:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089CFC24u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 711u, 0x088835B0u>(ctx, &aot_mem) && ctx.pc == 0x089CFC24u) goto L_089CFC24;
    return;
L_089CFC24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CFC40u);
    ctx.gpr[5] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 79u, 0x0888459Cu>(ctx, &aot_mem) && ctx.pc == 0x089CFC40u) goto L_089CFC40;
    return;
L_089CFC40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089CFC94;
      }
      goto L_089CFC50;
    }
L_089CFC50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CFC98;
      }
      goto L_089CFC58;
    }
L_089CFC58:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CFC6C;
      }
      goto L_089CFC60;
    }
L_089CFC60:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CFC6Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 768u, 0x08883A94u>(ctx, &aot_mem) && ctx.pc == 0x089CFC6Cu) goto L_089CFC6C;
    return;
L_089CFC6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CFC88u);
    ctx.gpr[5] = (0u | 31u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 79u, 0x0888459Cu>(ctx, &aot_mem) && ctx.pc == 0x089CFC88u) goto L_089CFC88;
    return;
L_089CFC88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089CFC94;
L_089CFC94:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    goto L_089CFC98;
L_089CFC98:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CFCAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089CFCC8u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 136u, 0x089D0708u>(ctx, &aot_mem) && ctx.pc == 0x089CFCC8u) goto L_089CFCC8;
    return;
L_089CFCC8:
    ctx.gpr[6] = (4u << 16u);
    ctx.gpr[7] = (2226u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x089CFCE4u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-8116));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 543u, 0x08AAEBB8u>(ctx, &aot_mem) && ctx.pc == 0x089CFCE4u) goto L_089CFCE4;
    return;
L_089CFCE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CFD10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[6] = (0u | 41u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089CFDD0;
      }
      goto L_089CFD44;
    }
L_089CFD44:
    ctx.gpr[17] = (2226u << 16u);
    ctx.gpr[18] = (0u | 280u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-8092));
    goto L_089CFD50;
L_089CFD50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 279 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CFD90;
      }
      goto L_089CFD60;
    }
L_089CFD60:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 278 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CFDAC;
      }
      goto L_089CFD6C;
    }
L_089CFD6C:
    ctx.gpr[31] = (0x089CFD74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089CECCC;
L_089CFD74:
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089CFD88u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_089CEE48;
L_089CFD88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CFDB8;
      }
      goto L_089CFD90;
    }
L_089CFD90:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089CFDAC;
      }
      goto L_089CFD98;
    }
L_089CFD98:
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[31] = (0x089CFDA4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089CEA98;
L_089CFDA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CFDB8;
      }
      goto L_089CFDAC;
    }
L_089CFDAC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089CFDB8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 553u, 0x08AAECB0u>(ctx, &aot_mem) && ctx.pc == 0x089CFDB8u) goto L_089CFDB8;
    return;
L_089CFDB8:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089CFDD0;
      }
      goto L_089CFDC0;
    }
L_089CFDC0:
    ctx.gpr[31] = (0x089CFDC8u);
    ctx.gpr[5] = (0u | 44u);
    goto L_089CEB88;
L_089CFDC8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CFD50;
      }
      goto L_089CFDD0;
    }
L_089CFDD0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089CFDE0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_089CF444;
L_089CFDE0:
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
L_089CFE00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1536));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1512), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1516), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1520), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1524), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1528), ctx.gpr[20]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1532), ctx.gpr[31]);
    ctx.gpr[31] = (0x089CFE38u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_089CF6AC;
L_089CFE38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    ctx.gpr[31] = (0x089CFE4Cu);
    ctx.gpr[5] = (0u | 40u);
    goto L_089CEBBC;
L_089CFE4C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CFE64;
      }
      goto L_089CFE54;
    }
L_089CFE54:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089CFE64u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8064));
    goto L_089CEFF4;
L_089CFE64:
    ctx.gpr[31] = (0x089CFE6Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089CFD10;
L_089CFE6C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089CFE78u);
    ctx.gpr[5] = (0u | 41u);
    goto L_089CEBBC;
L_089CFE78:
    ctx.gpr[31] = (0x089CFE80u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 420u, 0x089D1974u>(ctx, &aot_mem) && ctx.pc == 0x089CFE80u) goto L_089CFE80;
    return;
L_089CFE80:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 262u);
    ctx.gpr[6] = (0u | 265u);
    ctx.gpr[31] = (0x089CFE94u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    goto L_089CEC00;
L_089CFE94:
    ctx.gpr[31] = (0x089CFE9Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089CF754;
L_089CFE9C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089CFEACu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_089CF570;
L_089CFEAC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1512)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1516)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1520)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1524)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1528)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1532)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1536));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CFECC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x089CFEF0u);
    ctx.gpr[18] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 136u, 0x089D0708u>(ctx, &aot_mem) && ctx.pc == 0x089CFEF0u) goto L_089CFEF0;
    return;
L_089CFEF0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CFEFCu);
    ctx.gpr[5] = (0u | 44u);
    goto L_089CEB88;
L_089CFEFC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CFF24;
      }
      goto L_089CFF04;
    }
L_089CFF04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x089CFF10u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 768u, 0x08883A94u>(ctx, &aot_mem) && ctx.pc == 0x089CFF10u) goto L_089CFF10;
    return;
L_089CFF10:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CFF1Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 136u, 0x089D0708u>(ctx, &aot_mem) && ctx.pc == 0x089CFF1Cu) goto L_089CFF1C;
    return;
L_089CFF1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089CFEF0;
      }
      goto L_089CFF24;
    }
L_089CFF24:
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
L_089CFF40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (0u | 287u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 4u, 0x089D0028u>(ctx, &aot_mem); return;
      }
      goto L_089CFF7C;
    }
L_089CFF7C:
    ctx.gpr[5] = (0u | 123u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 40u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 2u, 0x089D000Cu>(ctx, &aot_mem); return;
      }
      goto L_089CFF88;
    }
L_089CFF88:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 7u, 0x089D0050u>(ctx, &aot_mem); return;
      }
      goto L_089CFF90;
    }
L_089CFF90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[20] = (0u | 41u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[21] = (0u | 12u);
      if (branch_taken) {
          goto L_089CFFB0;
      }
      goto L_089CFFA0;
    }
L_089CFFA0:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089CFFB0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8056));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 553u, 0x08AAECB0u>(ctx, &aot_mem) && ctx.pc == 0x089CFFB0u) goto L_089CFFB0;
    return;
L_089CFFB0:
    ctx.gpr[31] = (0x089CFFB8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089CEA98;
L_089CFFB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_089CFFCC;
      }
      goto L_089CFFC4;
    }
L_089CFFC4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
      if (branch_taken) {
          goto L_089CFFEC;
      }
      goto L_089CFFCC;
    }
L_089CFFCC:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089CFFDCu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_089CFECC;
L_089CFFDC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089CFFECu);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 711u, 0x088835B0u>(ctx, &aot_mem) && ctx.pc == 0x089CFFECu) goto L_089CFFEC;
    return;
L_089CFFEC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 41u);
    ctx.gpr[6] = (0u | 40u);
    ctx.gpr[31] = (0x089D0000u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    goto L_089CEC00;
}

void recomp_unit_0114(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0114_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_114(Runtime &runtime) {
    runtime.register_generated_unit(114u, 0x089CC000u, 16384u, &recomp_unit_0114, &recomp_unit_0114_entry);
    runtime.register_function(0x089CC004u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC014u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC020u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC038u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC04Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC068u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC078u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC090u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC098u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC09Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC0A8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC0B4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC0C0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC0C8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC0D0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC0D8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC0E8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC100u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC114u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC144u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC180u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC194u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC1A4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC1B4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC1DCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC1E4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC1ECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC1F8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC200u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC208u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC20Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC214u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC21Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC224u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC22Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC244u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC258u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC264u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC26Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC28Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC294u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC2BCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC2D4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC308u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC310u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC330u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC344u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC354u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC35Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC364u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC368u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC374u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC38Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC3A0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC3ACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC3C0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC3D4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC3E0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC3F0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC404u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC408u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC430u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC438u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC44Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC464u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC470u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC498u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC4A0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC4B0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC4B8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC4C4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC4D4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC4E8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC4F8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC508u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC518u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC52Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC54Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC560u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC574u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC584u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC58Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC59Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC5C4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC5E4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC5FCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC60Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC618u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC62Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC644u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC64Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC658u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC65Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC67Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC6ACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC6E8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC6F8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC718u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC720u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC728u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC73Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC748u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC77Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC784u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC78Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC794u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC798u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC7A8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC7B0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC7C4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC7CCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC7E0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC80Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC840u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC848u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC850u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC85Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC86Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC890u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC8A0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC8D8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC8E4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC8ECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC908u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC910u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC91Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC928u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC930u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC944u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC950u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC960u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC970u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC978u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC98Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC9B8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC9C8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC9D0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC9D8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC9F4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCA2Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCA38u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCA4Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCA54u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCA5Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCA64u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCA70u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCA80u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCA88u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCAA0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCAACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCAB0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCAC8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCAD4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCAD8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCB00u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCB04u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCB10u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCB20u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCB28u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCB38u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCB40u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCB44u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCB50u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCB60u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCB68u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCB78u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCB84u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCB94u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCBA8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCBB8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCBC8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCBD4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCBE0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCBFCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCC04u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCC14u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCC1Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCC24u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCC2Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCC34u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCC50u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCC5Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCC68u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCC78u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCC84u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCC8Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCC94u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCCA4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCCACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCCB4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCCB8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCCCCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCCD4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCD04u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCD4Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCD5Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCD68u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCDCCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCDD4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCDDCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCDF8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCE08u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCE18u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCE30u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCE48u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCE50u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCE68u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCE78u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCE7Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCE84u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCE94u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCEB8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCEC8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCED0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCEE4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCEECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCF00u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCF08u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCF18u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCF20u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCF28u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCF30u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCF38u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCF44u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCF48u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCF50u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCF58u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCF68u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCF70u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCF7Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCF84u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCF8Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCF9Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCFB8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCFC8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCFD0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCFE4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCFFCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD000u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD00Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD01Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD03Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD04Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD054u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD068u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD070u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD084u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD08Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD09Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD0A4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD0ACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD0B4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD0BCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD0C8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD0D0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD0D8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD0E4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD0ECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD0F4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD104u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD128u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD138u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD140u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD154u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD15Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD170u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD178u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD188u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD190u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD198u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD1A0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD1A8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD1B4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD1F0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD210u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD220u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD230u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD248u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD260u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD270u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD28Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD2A0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD2A4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD2B4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD2D4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD2E4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD2F4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD304u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD30Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD320u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD328u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD33Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD344u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD354u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD35Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD364u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD36Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD374u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD384u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD388u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD390u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD398u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD3A8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD3B0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD3BCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD3C4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD3CCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD3DCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD3F8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD40Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD418u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD42Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD44Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD454u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD468u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD48Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD49Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD4ACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD4BCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD4C4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD4D8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD4E0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD4F4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD4FCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD50Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD514u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD51Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD524u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD52Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD53Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD544u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD54Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD560u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD568u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD570u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD590u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD5A0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD5B0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD5C0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD5C8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD5DCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD5E4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD5F8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD600u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD610u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD618u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD620u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD628u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD630u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD640u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD678u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD680u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD690u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD698u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD6A0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD6A8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD6B4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD6BCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD6C8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD6D0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD6D8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD6E0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD6F0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD6F8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD700u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD708u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD714u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD71Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD724u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD734u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD740u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD75Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD764u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD76Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD784u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD78Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD790u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD798u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD7A0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD7A8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD7B0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD7D8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD7E8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD7F4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD7FCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD80Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD814u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD820u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD828u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD830u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD83Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD844u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD848u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD858u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD860u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD868u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD878u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD890u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD894u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD8A0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD8A8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD8B8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD8C0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD8D0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD8D8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD8E4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD8ECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD900u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD908u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD91Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD934u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD93Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD940u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD948u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD950u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD958u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD964u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD96Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD980u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD994u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD99Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD9A4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD9ACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD9B4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD9BCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD9C8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD9D0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD9D8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD9E0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD9ECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD9F4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDA04u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDA10u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDA18u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDA30u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDA34u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDA40u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDA58u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDA7Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDA84u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDA90u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDA98u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDABCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDACCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDAE0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDAF4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDB08u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDB0Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDB24u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDB2Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDB30u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDB38u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDB44u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDB4Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDB54u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDB58u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDB6Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDB78u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDB80u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDB94u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDBA4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDBACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDBB8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDBE4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDBFCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDC04u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDC08u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDC14u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDC20u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDC28u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDC30u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDC38u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDC40u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDC5Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDC70u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDC7Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDC84u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDC8Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDC94u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDCA0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDCA8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDCC0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDCC8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDCD0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDD0Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDD7Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDD8Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDDACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDDB8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDDC8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDDD0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDDDCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDDF0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDE04u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDE30u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDE38u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDE58u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDE64u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDE7Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDE8Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDEACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDEB4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDED8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDEE4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDEECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDEF8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDF04u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDF10u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDF18u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDF38u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDF40u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDF54u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDF5Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDF6Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDF7Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDF88u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDFA8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDFC0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDFCCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDFD8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDFDCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDFE4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDFF4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDFF8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE000u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE00Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE01Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE020u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE054u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE0B4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE0C4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE0D0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE0E4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE0F8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE10Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE124u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE148u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE154u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE16Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE174u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE180u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE1A4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE1ACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE1B8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE1C0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE1CCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE1D4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE1E4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE1ECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE1F4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE200u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE208u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE214u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE220u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE230u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE238u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE23Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE244u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE24Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE254u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE25Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE264u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE26Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE274u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE288u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE290u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE298u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE2ACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE2B4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE2BCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE2C4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE2CCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE2E4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE2ECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE2F4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE308u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE318u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE324u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE32Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE334u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE33Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE344u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE354u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE360u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE368u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE37Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE384u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE38Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE394u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE3A0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE3A8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE3BCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE3C8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE3D4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE3DCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE3ECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE3F8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE400u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE414u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE41Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE424u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE43Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE444u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE44Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE460u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE46Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE474u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE47Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE484u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE48Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE494u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE4A4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE4ACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE4BCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE4C4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE4D0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE4D8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE4E0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE4F0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE508u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE514u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE51Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE52Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE544u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE54Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE554u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE55Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE56Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE584u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE58Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE598u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE5A8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE5C0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE5D8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE5F4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE624u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE658u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE66Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE690u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE6ACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE6B8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE6C8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE6E0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE700u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE724u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE73Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE750u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE760u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE774u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE780u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE798u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE7A0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE7B0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE7C4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE7D4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE7E0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE7E8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE7F8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE800u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE808u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE810u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE828u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE834u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE84Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE854u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE874u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE884u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE898u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE8A8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE8B4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE8B8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE8D0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE8ECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE908u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEA48u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEA58u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEA70u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEA80u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEA98u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEAC0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEAE0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEAECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEAF0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEB00u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEB18u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEB2Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEB54u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEB64u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEB70u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEB88u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEB9Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEBA4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEBACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEBB0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEBBCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEBD8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEBE0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEBECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEC00u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEC34u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEC3Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEC48u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEC54u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEC5Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEC74u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEC84u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEC9Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CECA8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CECCCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CECE8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CECF4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CECF8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CED00u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CED14u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CED2Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CED48u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CED58u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CED68u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CED84u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CED94u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEDA8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEDE0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEE00u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEE08u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEE48u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEE8Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEE98u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEED0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEEE4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEF20u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEF28u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEF3Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEF40u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEF80u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEF88u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEFB8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEFC8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEFD8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEFF4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF00Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF018u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF028u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF060u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF06Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF078u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF084u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF094u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF09Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF0A4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF0BCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF0D8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF100u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF114u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF170u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF18Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF19Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF1ACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF1CCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF1D8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF1E0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF1E8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF1ECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF1F4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF204u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF20Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF214u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF21Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF224u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF254u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF264u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF26Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF278u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF284u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF294u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF29Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF2A8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF2B0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF2C4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF2D4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF2DCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF2E8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF2F0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF300u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF30Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF32Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF354u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF36Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF38Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF3B8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF3C4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF3CCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF3D8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF3E8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF3F0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF3F8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF404u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF40Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF41Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF42Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF444u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF468u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF480u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF498u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF4A8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF4B4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF4CCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF4F4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF524u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF530u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF548u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF55Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF570u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF5B8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF5E0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF5E8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF620u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF630u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF648u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF64Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF65Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF674u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF68Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF6ACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF6D0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF718u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF754u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF784u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF79Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF7B8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF7DCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF804u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF82Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF864u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF88Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF8BCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF8F4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF904u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF918u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF924u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF92Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF934u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF944u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF950u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF958u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF978u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF9A4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF9ACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF9BCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF9CCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF9E8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFA04u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFA10u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFA1Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFA28u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFA3Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFA7Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFA98u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFAB0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFAB8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFAC4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFAD0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFADCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFAECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFB00u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFB10u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFB28u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFB50u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFB70u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFB7Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFB90u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFB98u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFBA0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFBBCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFBD0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFBE4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFC04u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFC14u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFC24u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFC40u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFC50u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFC58u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFC60u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFC6Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFC88u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFC94u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFC98u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFCACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFCC8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFCE4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFD10u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFD44u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFD50u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFD60u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFD6Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFD74u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFD88u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFD90u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFD98u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFDA4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFDACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFDB8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFDC0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFDC8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFDD0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFDE0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFE00u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFE38u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFE4Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFE54u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFE64u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFE6Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFE78u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFE80u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFE94u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFE9Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFEACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFECCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFEF0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFEFCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFF04u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFF10u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFF1Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFF24u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFF40u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFF7Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFF88u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFF90u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFFA0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFFB0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFFB8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFFC4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFFCCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFFDCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFFECu, &recomp_unit_0114, "recomp_unit_0114");
}
} // namespace psprecomp
