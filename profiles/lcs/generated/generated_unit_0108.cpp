#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0108[4093] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 4, 0, 5, 0, 0, 0, 0, 6, 0, 0, 7, 0, 8, 0, 0, 9,
    0, 0, 10, 0, 11, 0, 12, 0, 0, 13, 0, 0, 14, 15, 0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0, 18, 0, 0, 0, 19, 0, 0,
    0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0,
    0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0,
    0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 37, 0, 0, 0, 38, 0, 39, 0, 0, 0, 40, 0,
    41, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 46, 0, 47, 0, 48, 0, 0, 49, 0, 0, 0, 50, 0,
    0, 0, 0, 0, 51, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 56, 0, 0, 0, 57, 58, 0, 59, 0, 0, 0, 0,
    0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 62, 0, 63, 0, 0, 64, 0, 0, 65, 0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 68, 0,
    69, 0, 70, 0, 71, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 77,
    0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 82, 0, 0, 83, 0, 84, 0, 85, 0, 86,
    0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 92, 0, 93, 0, 94, 95, 0, 0,
    0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 98, 0, 0, 99, 0, 0, 0, 100, 0, 0, 101, 0, 0, 102, 0, 0, 103, 0, 0, 104, 0, 0,
    105, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 111, 0, 112,
    0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 116, 0, 117, 0, 0, 118, 0, 119, 0, 120, 0, 0, 0, 0, 121, 122, 0, 0, 123, 0,
    124, 0, 125, 0, 126, 0, 127, 0, 128, 0, 129, 0, 0, 0, 130, 0, 131, 0, 132, 0, 133, 0, 134, 0, 135, 0, 136, 0, 137, 0, 138, 0,
    139, 0, 0, 140, 0, 0, 0, 0, 141, 0, 142, 0, 143, 0, 144, 0, 0, 0, 0, 145, 0, 146, 0, 0, 147, 0, 0, 0, 148, 0, 149, 0,
    150, 0, 0, 0, 151, 0, 152, 0, 0, 0, 153, 0, 154, 0, 155, 0, 0, 0, 156, 0, 157, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 160,
    0, 0, 0, 161, 0, 0, 0, 162, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 168, 0,
    0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 172, 0, 173, 0, 0, 0, 174, 0, 0, 175, 0, 176, 0, 0, 177,
    0, 178, 0, 0, 0, 179, 0, 0, 180, 0, 181, 0, 182, 0, 183, 0, 184, 0, 185, 0, 186, 0, 0, 187, 0, 0, 0, 188, 0, 189, 0, 190,
    0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 194, 0, 0, 195, 0, 196, 0, 197, 0, 198, 0, 199, 0, 200, 0, 0, 201, 0, 202, 0,
    0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 206, 0, 0, 0, 207, 0, 208, 0, 209, 0, 210, 0, 211, 0, 212, 0, 213, 0, 214,
    0, 215, 0, 216, 0, 217, 0, 218, 0, 0, 219, 0, 220, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0,
    224, 0, 225, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 228, 0, 0, 0, 229, 0, 230, 0, 231, 0, 232, 0, 233, 0, 234, 0, 235, 0, 236,
    0, 237, 0, 0, 238, 0, 239, 0, 240, 0, 0, 0, 0, 0, 241, 0, 242, 0, 0, 243, 0, 244, 0, 245, 0, 246, 0, 247, 0, 248, 0, 249,
    0, 250, 0, 251, 0, 252, 0, 253, 0, 254, 0, 255, 0, 256, 0, 257, 0, 258, 0, 259, 0, 260, 0, 261, 0, 262, 0, 263, 0, 264, 0, 265,
    0, 266, 0, 267, 0, 268, 0, 269, 0, 270, 0, 271, 0, 0, 0, 272, 0, 0, 273, 0, 274, 0, 275, 0, 0, 276, 0, 0, 277, 0, 0, 0,
    278, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 281, 0, 0, 0, 282, 0, 283, 0, 284, 0, 0, 0, 285, 0, 0, 0, 0, 286,
    0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 289, 0, 0, 290, 0, 0, 291, 0, 0, 0, 0, 292, 0, 293, 0, 0, 0, 294, 0,
    0, 0, 295, 0, 296, 0, 0, 0, 0, 0, 0, 297, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 303, 0, 0, 304, 0, 0, 305, 306, 0, 0, 0, 0, 307, 0, 0, 308, 0, 0, 0, 309, 0,
    0, 310, 0, 311, 0, 312, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 315, 0, 0, 316, 0, 317, 0, 0, 0, 318, 0, 0, 0,
    319, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 323, 0, 324, 0, 0, 325, 0, 326, 0, 327, 0, 328, 0, 329, 0, 0, 330, 0,
    331, 0, 0, 332, 0, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 337, 0, 338, 0, 339, 0, 340, 0, 0, 0, 0,
    0, 341, 0, 0, 0, 342, 0, 0, 0, 343, 0, 344, 0, 0, 345, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 0, 349, 0, 350,
    0, 0, 0, 0, 351, 0, 352, 0, 353, 0, 354, 0, 355, 0, 356, 0, 357, 0, 358, 0, 0, 0, 359, 0, 360, 0, 0, 0, 361, 0, 362, 0,
    363, 0, 364, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 369, 0, 370, 0, 0, 371, 0, 0, 0,
    372, 0, 373, 0, 374, 0, 0, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 380,
    0, 381, 0, 0, 0, 382, 0, 383, 0, 384, 0, 0, 0, 385, 0, 0, 386, 0, 0, 387, 0, 0, 0, 388, 0, 389, 0, 390, 0, 0, 0, 391,
    0, 392, 0, 393, 0, 0, 394, 0, 0, 395, 0, 0, 396, 0, 397, 0, 398, 0, 0, 0, 0, 0, 0, 0, 399, 400, 0, 0, 0, 401, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 403, 0, 0, 404, 0, 405, 0, 406, 0, 407, 0, 408, 0,
    409, 0, 410, 0, 0, 411, 0, 0, 0, 412, 0, 0, 413, 0, 414, 0, 415, 0, 0, 416, 0, 417, 0, 418, 0, 0, 419, 0, 0, 0, 420, 0,
    0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 423, 0, 424, 0, 0, 0, 425, 0, 0, 426, 0, 0, 0, 0, 0, 427,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 429, 0, 430, 0, 0, 0, 0, 431, 0, 0, 0, 0, 432,
    0, 0, 0, 0, 0, 433, 0, 434, 0, 435, 0, 436, 0, 437, 438, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 0, 441, 0, 442, 0, 443,
    0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 447, 0, 0, 0, 0, 448, 0, 0, 0,
    0, 0, 0, 0, 449, 0, 0, 450, 0, 451, 0, 0, 452, 0, 453, 0, 0, 0, 454, 0, 455, 0, 0, 0, 456, 0, 457, 0, 458, 0, 0, 0,
    0, 0, 459, 0, 460, 0, 461, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 463, 0, 0, 0, 464, 0, 0, 465, 0, 0, 0, 466, 467, 0,
    0, 468, 0, 0, 0, 469, 0, 0, 0, 470, 471, 0, 472, 473, 0, 0, 474, 0, 0, 0, 475, 476, 0, 477, 0, 0, 478, 0, 479, 0, 0, 0,
    480, 0, 481, 0, 0, 0, 482, 0, 0, 483, 0, 0, 0, 484, 485, 0, 0, 486, 0, 0, 487, 488, 0, 0, 489, 0, 0, 490, 491, 0, 0, 492,
    0, 0, 493, 494, 0, 0, 495, 0, 0, 496, 0, 0, 497, 0, 0, 0, 498, 0, 0, 499, 0, 0, 0, 0, 500, 0, 0, 0, 501, 0, 502, 0,
    0, 0, 503, 0, 0, 0, 504, 0, 0, 0, 505, 506, 0, 507, 0, 0, 0, 0, 508, 0, 509, 0, 510, 0, 0, 0, 511, 0, 512, 0, 0, 513,
    0, 514, 0, 0, 0, 515, 0, 516, 0, 0, 0, 517, 0, 0, 518, 0, 0, 0, 0, 519, 0, 520, 0, 521, 0, 0, 0, 522, 0, 523, 0, 0,
    524, 0, 525, 0, 0, 0, 526, 0, 527, 0, 528, 0, 529, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 533, 0, 0, 0, 0, 0, 0, 534, 0, 535, 0,
    0, 0, 0, 0, 0, 536, 0, 537, 0, 538, 0, 539, 540, 0, 0, 0, 541, 0, 0, 542, 0, 0, 0, 0, 543, 544, 0, 0, 545, 0, 546, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 549, 0, 0, 0, 0,
    0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0,
    0, 0, 0, 554, 0, 0, 0, 0, 0, 555, 0, 0, 556, 0, 0, 557, 0, 0, 558, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 560, 0,
    0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 563, 0, 0, 564, 0, 0, 565, 0, 0, 0,
    0, 566, 0, 567, 0, 0, 568, 0, 0, 569, 0, 0, 0, 0, 570, 0, 571, 0, 0, 572, 0, 0, 573, 0, 0, 0, 0, 574, 0, 0, 0, 0,
    0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 578, 0, 0, 579, 0, 0, 580,
    0, 0, 0, 0, 581, 0, 582, 0, 0, 583, 0, 0, 584, 0, 0, 0, 0, 585, 0, 0, 0, 586, 0, 587, 0, 0, 588, 0, 0, 589, 0, 0,
    590, 0, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 592, 0, 0, 0, 593, 0, 594, 0, 0, 595, 0, 0, 596, 0, 0, 597, 0,
    0, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 599, 0, 0, 0, 0, 600, 0, 0, 0, 601, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 0, 0, 604, 0, 0, 605, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 607, 0, 0, 0, 0, 0,
    608, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 613, 0, 0, 0, 0, 0, 0, 0, 614, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 0, 0, 0, 616, 0, 0, 0, 0, 617, 0, 0,
    0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 620, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 0, 623, 0, 0, 624, 0, 0, 0, 0,
    0, 0, 625, 0, 0, 0, 0, 0, 626, 0, 0, 627, 0, 0, 0, 0, 0, 0, 628, 0, 629, 0, 0, 0, 630, 0, 0, 0, 631, 0, 0, 0,
    632, 0, 0, 0, 633, 0, 0, 0, 634, 0, 635, 0, 0, 0, 0, 636, 0, 637, 0, 638, 0, 0, 639, 0, 640, 641, 0, 0, 642, 0, 0, 0,
    643, 0, 0, 0, 0, 0, 0, 644, 0, 0, 645, 0, 646, 0, 647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 651, 0, 0, 0, 652, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 653, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 654, 0, 0, 655, 0, 0, 0, 656, 0, 0, 0, 657, 0, 0, 0, 0, 658, 0, 659, 0, 660, 0, 0, 0,
    0, 661, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 662, 0, 663, 0, 664, 0, 0, 665, 666, 0, 0, 0, 0,
    0, 0, 0, 667, 0, 668, 0, 0, 0, 0, 0, 0, 0, 669, 0, 670, 0, 671, 0, 0, 672, 0, 673, 0, 0, 0, 0, 674, 0, 0, 675, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 676, 0, 0, 0, 677, 0, 0, 0, 678, 0, 679, 0, 680, 0, 681, 0, 682, 0, 0, 683, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 684, 0, 0, 685, 0, 0, 0, 0, 686, 0, 0, 0, 687, 0, 688, 689, 0, 0, 0, 0, 690, 0, 0,
    0, 0, 0, 0, 0, 691, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 692, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 693, 0, 0, 0, 0, 694, 0, 0, 695, 0, 0, 0, 696, 0, 0, 697, 0, 698, 0, 699, 0, 700, 0, 0, 0, 701,
    0, 0, 0, 702, 0, 703, 0, 704, 0, 0, 0, 705, 0, 0, 706, 0, 707, 708, 0, 0, 709, 0, 0, 710, 0, 711, 0, 0, 0, 0, 0, 0,
    0, 712, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 713, 0, 0, 0, 0, 714, 0, 0, 0, 0, 0, 715, 0, 0, 716, 0, 717, 0, 0, 718, 0, 719, 0, 720, 0,
    0, 0, 721, 0, 0, 0, 722, 0, 0, 0, 0, 0, 0, 0, 723, 0, 0, 724, 0, 725, 0, 726, 0, 0, 0, 727, 0, 0, 0, 728, 0, 0,
    0, 729, 0, 0, 0, 0, 730, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 731, 0, 732, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 733, 0, 734, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 735, 0, 736, 0, 0, 737, 738, 0, 0, 0, 739, 0, 0, 0, 740, 0, 741, 0, 0, 0, 742, 0, 0, 743,
    0, 0, 0, 744, 0, 0, 0, 0, 0, 745, 0, 746, 0, 747, 0, 0, 0, 748, 0, 0, 749, 0, 750, 0, 751, 0, 0, 0, 752, 753, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 754, 0, 0, 0, 0, 0, 755, 0, 0, 0, 756, 0,
    0, 0, 0, 757, 0, 0, 758, 0, 0, 759, 0, 760, 0, 0, 761, 0, 0, 762, 763, 0, 764, 0, 0, 0, 765, 0, 766, 0, 0, 0, 0, 0,
    767, 0, 0, 0, 0, 0, 0, 0, 0, 768, 0, 0, 0, 0, 0, 0, 0, 769, 0, 0, 770, 0, 771, 0, 0, 0, 0, 772, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 773, 0, 774, 0, 0, 0, 775, 0, 776, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 777,
    0, 778, 779, 0, 0, 780, 0, 0, 0, 781, 0, 0, 0, 782, 0, 783, 0, 0, 0, 784, 0, 0, 0, 785, 0, 0, 786, 0, 787, 0, 788, 0,
    789, 0, 790, 0, 0, 0, 791, 0, 792, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 793, 0, 0, 0, 0,
    0, 0, 0, 794, 0, 0, 0, 0, 0, 0, 795, 0, 0, 796, 0, 797, 0, 0, 798, 0, 0, 0, 799, 0, 0, 0, 800, 0, 801, 0, 802, 0,
    803, 0, 0, 0, 0, 0, 804, 0, 0, 0, 0, 0, 0, 0, 0, 805, 0, 806, 0, 0, 0, 807, 0, 0, 0, 808, 0, 0, 809, 0, 0, 810,
    0, 0, 811, 812, 0, 813, 814, 815, 0, 816, 0, 0, 817, 0, 818, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 819, 0, 0, 0, 820, 0, 0,
    0, 821, 0, 0, 822, 0, 823, 0, 0, 0, 824, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 825, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 826, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 827, 0, 0, 0, 0, 0, 0, 0, 828, 0, 0, 829, 0, 0, 0, 0,
    830, 0, 0, 831, 0, 832, 0, 833, 0, 834, 0, 835, 0, 836, 0, 837, 0, 838, 0, 0, 839, 0, 840, 0, 841, 0, 842, 0, 843, 0, 844, 0,
    845, 0, 846, 847, 0, 0, 0, 0, 0, 0, 0, 848, 0, 849, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 850, 0, 0, 851, 0, 0, 0, 852,
    0, 853, 0, 854, 0, 0, 855, 0, 0, 0, 856, 0, 0, 0, 0, 857, 0, 0, 0, 0, 0, 0, 0, 858, 0, 859, 0, 0, 0, 0, 860, 0,
    0, 0, 0, 861, 0, 862, 0, 0, 0, 0, 863, 0, 0, 864, 0, 0, 0, 0, 865, 0, 866, 0, 867, 0, 868, 0, 869, 0, 0, 0, 0, 0,
    0, 870, 0, 0, 871, 0, 0, 0, 0, 0, 872, 0, 873, 0, 0, 0, 0, 874, 0, 875, 0, 876, 0, 0, 877, 0, 0, 0, 0, 878, 0, 879,
    0, 0, 0, 0, 0, 0, 0, 880, 0, 0, 0, 0, 881, 0, 0, 0, 0, 882, 0, 0, 883, 884, 0, 0, 885, 0, 886, 0, 0, 0, 887, 0,
    888, 0, 0, 889, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 890, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 891, 0, 892, 0, 0, 893, 0, 894, 0, 895, 0, 0, 0, 896, 0, 0, 0, 897, 0, 0, 0, 0, 898, 0, 0, 0,
    899, 0, 0, 0, 900, 0, 901, 0, 902, 0, 0, 903, 0, 904, 0, 905, 0, 0, 0, 906, 0, 907, 0, 0, 0, 0, 0, 0, 908, 0, 909, 0,
    0, 0, 910, 0, 0, 911, 0, 912, 0, 913, 0, 0, 914, 915, 0, 916, 0, 917, 0, 918, 0, 0, 0, 0, 919, 0, 0, 0, 0, 0, 0, 0,
    920, 0, 0, 0, 921, 0, 0, 0, 0, 922, 0, 0, 923, 0, 0, 924, 0, 925, 0, 0, 0, 0, 926, 0, 0, 0, 927, 0, 0, 0, 928, 0,
    0, 0, 0, 0, 0, 0, 0, 929, 0, 930, 0, 931, 0, 0, 932, 0, 933, 0, 934, 0, 0, 935, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 936, 0, 0, 937, 0, 0, 0, 938, 0, 0, 0, 939, 0, 0, 940, 0, 0, 941, 0, 942, 0, 943, 0, 0, 944,
    0, 945, 0, 0, 946, 0, 947, 0, 948, 0, 949, 0, 0, 0, 0, 0, 950, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 951, 0, 0, 0, 0, 952, 0, 0, 953, 0, 0, 0, 954, 0, 0, 955, 0, 0, 956, 0, 0, 957, 0, 0, 958, 0, 0, 959, 960, 0, 961,
    0, 0, 962, 0, 963, 0, 964, 0, 0, 0, 965, 0, 0, 0, 966, 0, 0, 0, 0, 0, 0, 0, 967, 0, 968, 0, 969, 0, 970, 0, 0, 0,
    971, 0, 0, 972, 0, 0, 0, 0, 973, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 974, 0, 0, 0, 975, 0, 976, 0, 977, 0,
    0, 978, 0, 0, 0, 0, 979, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 980, 0, 0, 0, 0, 981, 0, 0, 982, 0, 0, 0,
    0, 983, 0, 984, 0, 0, 985, 0, 0, 0, 0, 986, 0, 0, 0, 0, 987, 0, 0, 0, 988, 0, 0, 0, 989, 0, 0, 0, 990, 0, 0, 991,
    0, 0, 0, 0, 992, 993, 0, 0, 994, 0, 0, 0, 995, 0, 0, 996, 0, 0, 0, 997, 0, 0, 0, 0, 0, 0, 0, 0, 998,
};
void recomp_unit_0108_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089B4004u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0108[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089B4004;
    case 2u: goto L_089B4028;
    case 3u: goto L_089B4040;
    case 4u: goto L_089B4044;
    case 5u: goto L_089B404C;
    case 6u: goto L_089B4060;
    case 7u: goto L_089B406C;
    case 8u: goto L_089B4074;
    case 9u: goto L_089B4080;
    case 10u: goto L_089B408C;
    case 11u: goto L_089B4094;
    case 12u: goto L_089B409C;
    case 13u: goto L_089B40A8;
    case 14u: goto L_089B40B4;
    case 15u: goto L_089B40B8;
    case 16u: goto L_089B40D4;
    case 17u: goto L_089B40DC;
    case 18u: goto L_089B40E8;
    case 19u: goto L_089B40F8;
    case 20u: goto L_089B4114;
    case 21u: goto L_089B4120;
    case 22u: goto L_089B4148;
    case 23u: goto L_089B4154;
    case 24u: goto L_089B415C;
    case 25u: goto L_089B4178;
    case 26u: goto L_089B4188;
    case 27u: goto L_089B4194;
    case 28u: goto L_089B41AC;
    case 29u: goto L_089B41B8;
    case 30u: goto L_089B41D4;
    case 31u: goto L_089B41E4;
    case 32u: goto L_089B41F8;
    case 33u: goto L_089B420C;
    case 34u: goto L_089B4220;
    case 35u: goto L_089B4240;
    case 36u: goto L_089B4248;
    case 37u: goto L_089B4254;
    case 38u: goto L_089B4264;
    case 39u: goto L_089B426C;
    case 40u: goto L_089B427C;
    case 41u: goto L_089B4284;
    case 42u: goto L_089B4290;
    case 43u: goto L_089B42A0;
    case 44u: goto L_089B42B0;
    case 45u: goto L_089B42BC;
    case 46u: goto L_089B42D0;
    case 47u: goto L_089B42D8;
    case 48u: goto L_089B42E0;
    case 49u: goto L_089B42EC;
    case 50u: goto L_089B42FC;
    case 51u: goto L_089B4314;
    case 52u: goto L_089B4320;
    case 53u: goto L_089B4328;
    case 54u: goto L_089B4340;
    case 55u: goto L_089B434C;
    case 56u: goto L_089B4354;
    case 57u: goto L_089B4364;
    case 58u: goto L_089B4368;
    case 59u: goto L_089B4370;
    case 60u: goto L_089B4390;
    case 61u: goto L_089B43A0;
    case 62u: goto L_089B43B0;
    case 63u: goto L_089B43B8;
    case 64u: goto L_089B43C4;
    case 65u: goto L_089B43D0;
    case 66u: goto L_089B43E0;
    case 67u: goto L_089B43E8;
    case 68u: goto L_089B43FC;
    case 69u: goto L_089B4404;
    case 70u: goto L_089B440C;
    case 71u: goto L_089B4414;
    case 72u: goto L_089B4420;
    case 73u: goto L_089B4438;
    case 74u: goto L_089B4448;
    case 75u: goto L_089B4464;
    case 76u: goto L_089B4478;
    case 77u: goto L_089B4480;
    case 78u: goto L_089B4488;
    case 79u: goto L_089B44A4;
    case 80u: goto L_089B44C0;
    case 81u: goto L_089B44CC;
    case 82u: goto L_089B44DC;
    case 83u: goto L_089B44E8;
    case 84u: goto L_089B44F0;
    case 85u: goto L_089B44F8;
    case 86u: goto L_089B4500;
    case 87u: goto L_089B4508;
    case 88u: goto L_089B4520;
    case 89u: goto L_089B4538;
    case 90u: goto L_089B4550;
    case 91u: goto L_089B4558;
    case 92u: goto L_089B4564;
    case 93u: goto L_089B456C;
    case 94u: goto L_089B4574;
    case 95u: goto L_089B4578;
    case 96u: goto L_089B458C;
    case 97u: goto L_089B45A4;
    case 98u: goto L_089B45AC;
    case 99u: goto L_089B45B8;
    case 100u: goto L_089B45C8;
    case 101u: goto L_089B45D4;
    case 102u: goto L_089B45E0;
    case 103u: goto L_089B45EC;
    case 104u: goto L_089B45F8;
    case 105u: goto L_089B4604;
    case 106u: goto L_089B460C;
    case 107u: goto L_089B4628;
    case 108u: goto L_089B4648;
    case 109u: goto L_089B4654;
    case 110u: goto L_089B466C;
    case 111u: goto L_089B4678;
    case 112u: goto L_089B4680;
    case 113u: goto L_089B4688;
    case 114u: goto L_089B4698;
    case 115u: goto L_089B46AC;
    case 116u: goto L_089B46B4;
    case 117u: goto L_089B46BC;
    case 118u: goto L_089B46C8;
    case 119u: goto L_089B46D0;
    case 120u: goto L_089B46D8;
    case 121u: goto L_089B46EC;
    case 122u: goto L_089B46F0;
    case 123u: goto L_089B46FC;
    case 124u: goto L_089B4704;
    case 125u: goto L_089B470C;
    case 126u: goto L_089B4714;
    case 127u: goto L_089B471C;
    case 128u: goto L_089B4724;
    case 129u: goto L_089B472C;
    case 130u: goto L_089B473C;
    case 131u: goto L_089B4744;
    case 132u: goto L_089B474C;
    case 133u: goto L_089B4754;
    case 134u: goto L_089B475C;
    case 135u: goto L_089B4764;
    case 136u: goto L_089B476C;
    case 137u: goto L_089B4774;
    case 138u: goto L_089B477C;
    case 139u: goto L_089B4784;
    case 140u: goto L_089B4790;
    case 141u: goto L_089B47A4;
    case 142u: goto L_089B47AC;
    case 143u: goto L_089B47B4;
    case 144u: goto L_089B47BC;
    case 145u: goto L_089B47D0;
    case 146u: goto L_089B47D8;
    case 147u: goto L_089B47E4;
    case 148u: goto L_089B47F4;
    case 149u: goto L_089B47FC;
    case 150u: goto L_089B4804;
    case 151u: goto L_089B4814;
    case 152u: goto L_089B481C;
    case 153u: goto L_089B482C;
    case 154u: goto L_089B4834;
    case 155u: goto L_089B483C;
    case 156u: goto L_089B484C;
    case 157u: goto L_089B4854;
    case 158u: goto L_089B4864;
    case 159u: goto L_089B486C;
    case 160u: goto L_089B4880;
    case 161u: goto L_089B4890;
    case 162u: goto L_089B48A0;
    case 163u: goto L_089B48A8;
    case 164u: goto L_089B48C0;
    case 165u: goto L_089B48CC;
    case 166u: goto L_089B48E8;
    case 167u: goto L_089B48F4;
    case 168u: goto L_089B48FC;
    case 169u: goto L_089B4910;
    case 170u: goto L_089B4928;
    case 171u: goto L_089B493C;
    case 172u: goto L_089B4948;
    case 173u: goto L_089B4950;
    case 174u: goto L_089B4960;
    case 175u: goto L_089B496C;
    case 176u: goto L_089B4974;
    case 177u: goto L_089B4980;
    case 178u: goto L_089B4988;
    case 179u: goto L_089B4998;
    case 180u: goto L_089B49A4;
    case 181u: goto L_089B49AC;
    case 182u: goto L_089B49B4;
    case 183u: goto L_089B49BC;
    case 184u: goto L_089B49C4;
    case 185u: goto L_089B49CC;
    case 186u: goto L_089B49D4;
    case 187u: goto L_089B49E0;
    case 188u: goto L_089B49F0;
    case 189u: goto L_089B49F8;
    case 190u: goto L_089B4A00;
    case 191u: goto L_089B4A08;
    case 192u: goto L_089B4A24;
    case 193u: goto L_089B4A2C;
    case 194u: goto L_089B4A34;
    case 195u: goto L_089B4A40;
    case 196u: goto L_089B4A48;
    case 197u: goto L_089B4A50;
    case 198u: goto L_089B4A58;
    case 199u: goto L_089B4A60;
    case 200u: goto L_089B4A68;
    case 201u: goto L_089B4A74;
    case 202u: goto L_089B4A7C;
    case 203u: goto L_089B4A8C;
    case 204u: goto L_089B4A9C;
    case 205u: goto L_089B4AB0;
    case 206u: goto L_089B4AB8;
    case 207u: goto L_089B4AC8;
    case 208u: goto L_089B4AD0;
    case 209u: goto L_089B4AD8;
    case 210u: goto L_089B4AE0;
    case 211u: goto L_089B4AE8;
    case 212u: goto L_089B4AF0;
    case 213u: goto L_089B4AF8;
    case 214u: goto L_089B4B00;
    case 215u: goto L_089B4B08;
    case 216u: goto L_089B4B10;
    case 217u: goto L_089B4B18;
    case 218u: goto L_089B4B20;
    case 219u: goto L_089B4B2C;
    case 220u: goto L_089B4B34;
    case 221u: goto L_089B4B44;
    case 222u: goto L_089B4B54;
    case 223u: goto L_089B4B60;
    case 224u: goto L_089B4B84;
    case 225u: goto L_089B4B8C;
    case 226u: goto L_089B4B94;
    case 227u: goto L_089B4BB0;
    case 228u: goto L_089B4BB8;
    case 229u: goto L_089B4BC8;
    case 230u: goto L_089B4BD0;
    case 231u: goto L_089B4BD8;
    case 232u: goto L_089B4BE0;
    case 233u: goto L_089B4BE8;
    case 234u: goto L_089B4BF0;
    case 235u: goto L_089B4BF8;
    case 236u: goto L_089B4C00;
    case 237u: goto L_089B4C08;
    case 238u: goto L_089B4C14;
    case 239u: goto L_089B4C1C;
    case 240u: goto L_089B4C24;
    case 241u: goto L_089B4C3C;
    case 242u: goto L_089B4C44;
    case 243u: goto L_089B4C50;
    case 244u: goto L_089B4C58;
    case 245u: goto L_089B4C60;
    case 246u: goto L_089B4C68;
    case 247u: goto L_089B4C70;
    case 248u: goto L_089B4C78;
    case 249u: goto L_089B4C80;
    case 250u: goto L_089B4C88;
    case 251u: goto L_089B4C90;
    case 252u: goto L_089B4C98;
    case 253u: goto L_089B4CA0;
    case 254u: goto L_089B4CA8;
    case 255u: goto L_089B4CB0;
    case 256u: goto L_089B4CB8;
    case 257u: goto L_089B4CC0;
    case 258u: goto L_089B4CC8;
    case 259u: goto L_089B4CD0;
    case 260u: goto L_089B4CD8;
    case 261u: goto L_089B4CE0;
    case 262u: goto L_089B4CE8;
    case 263u: goto L_089B4CF0;
    case 264u: goto L_089B4CF8;
    case 265u: goto L_089B4D00;
    case 266u: goto L_089B4D08;
    case 267u: goto L_089B4D10;
    case 268u: goto L_089B4D18;
    case 269u: goto L_089B4D20;
    case 270u: goto L_089B4D28;
    case 271u: goto L_089B4D30;
    case 272u: goto L_089B4D40;
    case 273u: goto L_089B4D4C;
    case 274u: goto L_089B4D54;
    case 275u: goto L_089B4D5C;
    case 276u: goto L_089B4D68;
    case 277u: goto L_089B4D74;
    case 278u: goto L_089B4D84;
    case 279u: goto L_089B4D90;
    case 280u: goto L_089B4DB4;
    case 281u: goto L_089B4DBC;
    case 282u: goto L_089B4DCC;
    case 283u: goto L_089B4DD4;
    case 284u: goto L_089B4DDC;
    case 285u: goto L_089B4DEC;
    case 286u: goto L_089B4E00;
    case 287u: goto L_089B4E18;
    case 288u: goto L_089B4E2C;
    case 289u: goto L_089B4E38;
    case 290u: goto L_089B4E44;
    case 291u: goto L_089B4E50;
    case 292u: goto L_089B4E64;
    case 293u: goto L_089B4E6C;
    case 294u: goto L_089B4E7C;
    case 295u: goto L_089B4E8C;
    case 296u: goto L_089B4E94;
    case 297u: goto L_089B4EB0;
    case 298u: goto L_089B4EB8;
    case 299u: goto L_089B4EEC;
    case 300u: goto L_089B4F1C;
    case 301u: goto L_089B4F68;
    case 302u: goto L_089B4FA8;
    case 303u: goto L_089B4FB0;
    case 304u: goto L_089B4FBC;
    case 305u: goto L_089B4FC8;
    case 306u: goto L_089B4FCC;
    case 307u: goto L_089B4FE0;
    case 308u: goto L_089B4FEC;
    case 309u: goto L_089B4FFC;
    case 310u: goto L_089B5008;
    case 311u: goto L_089B5010;
    case 312u: goto L_089B5018;
    case 313u: goto L_089B5020;
    case 314u: goto L_089B5034;
    case 315u: goto L_089B5050;
    case 316u: goto L_089B505C;
    case 317u: goto L_089B5064;
    case 318u: goto L_089B5074;
    case 319u: goto L_089B5084;
    case 320u: goto L_089B5090;
    case 321u: goto L_089B50A0;
    case 322u: goto L_089B50B0;
    case 323u: goto L_089B50BC;
    case 324u: goto L_089B50C4;
    case 325u: goto L_089B50D0;
    case 326u: goto L_089B50D8;
    case 327u: goto L_089B50E0;
    case 328u: goto L_089B50E8;
    case 329u: goto L_089B50F0;
    case 330u: goto L_089B50FC;
    case 331u: goto L_089B5104;
    case 332u: goto L_089B5110;
    case 333u: goto L_089B511C;
    case 334u: goto L_089B5134;
    case 335u: goto L_089B5174;
    case 336u: goto L_089B51B8;
    case 337u: goto L_089B51D8;
    case 338u: goto L_089B51E0;
    case 339u: goto L_089B51E8;
    case 340u: goto L_089B51F0;
    case 341u: goto L_089B5208;
    case 342u: goto L_089B5218;
    case 343u: goto L_089B5228;
    case 344u: goto L_089B5230;
    case 345u: goto L_089B523C;
    case 346u: goto L_089B5244;
    case 347u: goto L_089B5254;
    case 348u: goto L_089B5268;
    case 349u: goto L_089B5278;
    case 350u: goto L_089B5280;
    case 351u: goto L_089B5294;
    case 352u: goto L_089B529C;
    case 353u: goto L_089B52A4;
    case 354u: goto L_089B52AC;
    case 355u: goto L_089B52B4;
    case 356u: goto L_089B52BC;
    case 357u: goto L_089B52C4;
    case 358u: goto L_089B52CC;
    case 359u: goto L_089B52DC;
    case 360u: goto L_089B52E4;
    case 361u: goto L_089B52F4;
    case 362u: goto L_089B52FC;
    case 363u: goto L_089B5304;
    case 364u: goto L_089B530C;
    case 365u: goto L_089B5318;
    case 366u: goto L_089B5328;
    case 367u: goto L_089B5340;
    case 368u: goto L_089B5350;
    case 369u: goto L_089B5360;
    case 370u: goto L_089B5368;
    case 371u: goto L_089B5374;
    case 372u: goto L_089B5384;
    case 373u: goto L_089B538C;
    case 374u: goto L_089B5394;
    case 375u: goto L_089B53AC;
    case 376u: goto L_089B53BC;
    case 377u: goto L_089B53CC;
    case 378u: goto L_089B53E4;
    case 379u: goto L_089B53F4;
    case 380u: goto L_089B5400;
    case 381u: goto L_089B5408;
    case 382u: goto L_089B5418;
    case 383u: goto L_089B5420;
    case 384u: goto L_089B5428;
    case 385u: goto L_089B5438;
    case 386u: goto L_089B5444;
    case 387u: goto L_089B5450;
    case 388u: goto L_089B5460;
    case 389u: goto L_089B5468;
    case 390u: goto L_089B5470;
    case 391u: goto L_089B5480;
    case 392u: goto L_089B5488;
    case 393u: goto L_089B5490;
    case 394u: goto L_089B549C;
    case 395u: goto L_089B54A8;
    case 396u: goto L_089B54B4;
    case 397u: goto L_089B54BC;
    case 398u: goto L_089B54C4;
    case 399u: goto L_089B54E4;
    case 400u: goto L_089B54E8;
    case 401u: goto L_089B54F8;
    case 402u: goto L_089B5548;
    case 403u: goto L_089B5550;
    case 404u: goto L_089B555C;
    case 405u: goto L_089B5564;
    case 406u: goto L_089B556C;
    case 407u: goto L_089B5574;
    case 408u: goto L_089B557C;
    case 409u: goto L_089B5584;
    case 410u: goto L_089B558C;
    case 411u: goto L_089B5598;
    case 412u: goto L_089B55A8;
    case 413u: goto L_089B55B4;
    case 414u: goto L_089B55BC;
    case 415u: goto L_089B55C4;
    case 416u: goto L_089B55D0;
    case 417u: goto L_089B55D8;
    case 418u: goto L_089B55E0;
    case 419u: goto L_089B55EC;
    case 420u: goto L_089B55FC;
    case 421u: goto L_089B5620;
    case 422u: goto L_089B5638;
    case 423u: goto L_089B5644;
    case 424u: goto L_089B564C;
    case 425u: goto L_089B565C;
    case 426u: goto L_089B5668;
    case 427u: goto L_089B5680;
    case 428u: goto L_089B56C0;
    case 429u: goto L_089B56D0;
    case 430u: goto L_089B56D8;
    case 431u: goto L_089B56EC;
    case 432u: goto L_089B5700;
    case 433u: goto L_089B5718;
    case 434u: goto L_089B5720;
    case 435u: goto L_089B5728;
    case 436u: goto L_089B5730;
    case 437u: goto L_089B5738;
    case 438u: goto L_089B573C;
    case 439u: goto L_089B574C;
    case 440u: goto L_089B575C;
    case 441u: goto L_089B5770;
    case 442u: goto L_089B5778;
    case 443u: goto L_089B5780;
    case 444u: goto L_089B5788;
    case 445u: goto L_089B57AC;
    case 446u: goto L_089B57D0;
    case 447u: goto L_089B57E0;
    case 448u: goto L_089B57F4;
    case 449u: goto L_089B5814;
    case 450u: goto L_089B5820;
    case 451u: goto L_089B5828;
    case 452u: goto L_089B5834;
    case 453u: goto L_089B583C;
    case 454u: goto L_089B584C;
    case 455u: goto L_089B5854;
    case 456u: goto L_089B5864;
    case 457u: goto L_089B586C;
    case 458u: goto L_089B5874;
    case 459u: goto L_089B588C;
    case 460u: goto L_089B5894;
    case 461u: goto L_089B589C;
    case 462u: goto L_089B58B4;
    case 463u: goto L_089B58CC;
    case 464u: goto L_089B58DC;
    case 465u: goto L_089B58E8;
    case 466u: goto L_089B58F8;
    case 467u: goto L_089B58FC;
    case 468u: goto L_089B5908;
    case 469u: goto L_089B5918;
    case 470u: goto L_089B5928;
    case 471u: goto L_089B592C;
    case 472u: goto L_089B5934;
    case 473u: goto L_089B5938;
    case 474u: goto L_089B5944;
    case 475u: goto L_089B5954;
    case 476u: goto L_089B5958;
    case 477u: goto L_089B5960;
    case 478u: goto L_089B596C;
    case 479u: goto L_089B5974;
    case 480u: goto L_089B5984;
    case 481u: goto L_089B598C;
    case 482u: goto L_089B599C;
    case 483u: goto L_089B59A8;
    case 484u: goto L_089B59B8;
    case 485u: goto L_089B59BC;
    case 486u: goto L_089B59C8;
    case 487u: goto L_089B59D4;
    case 488u: goto L_089B59D8;
    case 489u: goto L_089B59E4;
    case 490u: goto L_089B59F0;
    case 491u: goto L_089B59F4;
    case 492u: goto L_089B5A00;
    case 493u: goto L_089B5A0C;
    case 494u: goto L_089B5A10;
    case 495u: goto L_089B5A1C;
    case 496u: goto L_089B5A28;
    case 497u: goto L_089B5A34;
    case 498u: goto L_089B5A44;
    case 499u: goto L_089B5A50;
    case 500u: goto L_089B5A64;
    case 501u: goto L_089B5A74;
    case 502u: goto L_089B5A7C;
    case 503u: goto L_089B5A8C;
    case 504u: goto L_089B5A9C;
    case 505u: goto L_089B5AAC;
    case 506u: goto L_089B5AB0;
    case 507u: goto L_089B5AB8;
    case 508u: goto L_089B5ACC;
    case 509u: goto L_089B5AD4;
    case 510u: goto L_089B5ADC;
    case 511u: goto L_089B5AEC;
    case 512u: goto L_089B5AF4;
    case 513u: goto L_089B5B00;
    case 514u: goto L_089B5B08;
    case 515u: goto L_089B5B18;
    case 516u: goto L_089B5B20;
    case 517u: goto L_089B5B30;
    case 518u: goto L_089B5B3C;
    case 519u: goto L_089B5B50;
    case 520u: goto L_089B5B58;
    case 521u: goto L_089B5B60;
    case 522u: goto L_089B5B70;
    case 523u: goto L_089B5B78;
    case 524u: goto L_089B5B84;
    case 525u: goto L_089B5B8C;
    case 526u: goto L_089B5B9C;
    case 527u: goto L_089B5BA4;
    case 528u: goto L_089B5BAC;
    case 529u: goto L_089B5BB4;
    case 530u: goto L_089B5BBC;
    case 531u: goto L_089B5BE4;
    case 532u: goto L_089B5C50;
    case 533u: goto L_089B5C58;
    case 534u: goto L_089B5C74;
    case 535u: goto L_089B5C7C;
    case 536u: goto L_089B5C98;
    case 537u: goto L_089B5CA0;
    case 538u: goto L_089B5CA8;
    case 539u: goto L_089B5CB0;
    case 540u: goto L_089B5CB4;
    case 541u: goto L_089B5CC4;
    case 542u: goto L_089B5CD0;
    case 543u: goto L_089B5CE4;
    case 544u: goto L_089B5CE8;
    case 545u: goto L_089B5CF4;
    case 546u: goto L_089B5CFC;
    case 547u: goto L_089B5D38;
    case 548u: goto L_089B5D68;
    case 549u: goto L_089B5D70;
    case 550u: goto L_089B5D94;
    case 551u: goto L_089B5DAC;
    case 552u: goto L_089B5DC8;
    case 553u: goto L_089B5DEC;
    case 554u: goto L_089B5E10;
    case 555u: goto L_089B5E28;
    case 556u: goto L_089B5E34;
    case 557u: goto L_089B5E40;
    case 558u: goto L_089B5E4C;
    case 559u: goto L_089B5E64;
    case 560u: goto L_089B5E7C;
    case 561u: goto L_089B5EA0;
    case 562u: goto L_089B5EC4;
    case 563u: goto L_089B5EDC;
    case 564u: goto L_089B5EE8;
    case 565u: goto L_089B5EF4;
    case 566u: goto L_089B5F08;
    case 567u: goto L_089B5F10;
    case 568u: goto L_089B5F1C;
    case 569u: goto L_089B5F28;
    case 570u: goto L_089B5F3C;
    case 571u: goto L_089B5F44;
    case 572u: goto L_089B5F50;
    case 573u: goto L_089B5F5C;
    case 574u: goto L_089B5F70;
    case 575u: goto L_089B5F88;
    case 576u: goto L_089B5FAC;
    case 577u: goto L_089B5FD0;
    case 578u: goto L_089B5FE8;
    case 579u: goto L_089B5FF4;
    case 580u: goto L_089B6000;
    case 581u: goto L_089B6014;
    case 582u: goto L_089B601C;
    case 583u: goto L_089B6028;
    case 584u: goto L_089B6034;
    case 585u: goto L_089B6048;
    case 586u: goto L_089B6058;
    case 587u: goto L_089B6060;
    case 588u: goto L_089B606C;
    case 589u: goto L_089B6078;
    case 590u: goto L_089B6084;
    case 591u: goto L_089B60AC;
    case 592u: goto L_089B60C0;
    case 593u: goto L_089B60D0;
    case 594u: goto L_089B60D8;
    case 595u: goto L_089B60E4;
    case 596u: goto L_089B60F0;
    case 597u: goto L_089B60FC;
    case 598u: goto L_089B6120;
    case 599u: goto L_089B6134;
    case 600u: goto L_089B6148;
    case 601u: goto L_089B6158;
    case 602u: goto L_089B616C;
    case 603u: goto L_089B6194;
    case 604u: goto L_089B61B4;
    case 605u: goto L_089B61C0;
    case 606u: goto L_089B61D8;
    case 607u: goto L_089B61EC;
    case 608u: goto L_089B6204;
    case 609u: goto L_089B6240;
    case 610u: goto L_089B62B4;
    case 611u: goto L_089B631C;
    case 612u: goto L_089B6394;
    case 613u: goto L_089B640C;
    case 614u: goto L_089B642C;
    case 615u: goto L_089B643C;
    case 616u: goto L_089B6464;
    case 617u: goto L_089B6478;
    case 618u: goto L_089B649C;
    case 619u: goto L_089B64BC;
    case 620u: goto L_089B6510;
    case 621u: goto L_089B6518;
    case 622u: goto L_089B6540;
    case 623u: goto L_089B6564;
    case 624u: goto L_089B6570;
    case 625u: goto L_089B658C;
    case 626u: goto L_089B65A4;
    case 627u: goto L_089B65B0;
    case 628u: goto L_089B65CC;
    case 629u: goto L_089B65D4;
    case 630u: goto L_089B65E4;
    case 631u: goto L_089B65F4;
    case 632u: goto L_089B6604;
    case 633u: goto L_089B6614;
    case 634u: goto L_089B6624;
    case 635u: goto L_089B662C;
    case 636u: goto L_089B6640;
    case 637u: goto L_089B6648;
    case 638u: goto L_089B6650;
    case 639u: goto L_089B665C;
    case 640u: goto L_089B6664;
    case 641u: goto L_089B6668;
    case 642u: goto L_089B6674;
    case 643u: goto L_089B6684;
    case 644u: goto L_089B66A0;
    case 645u: goto L_089B66AC;
    case 646u: goto L_089B66B4;
    case 647u: goto L_089B66BC;
    case 648u: goto L_089B673C;
    case 649u: goto L_089B675C;
    case 650u: goto L_089B6788;
    case 651u: goto L_089B67B4;
    case 652u: goto L_089B67C4;
    case 653u: goto L_089B67FC;
    case 654u: goto L_089B6824;
    case 655u: goto L_089B6830;
    case 656u: goto L_089B6840;
    case 657u: goto L_089B6850;
    case 658u: goto L_089B6864;
    case 659u: goto L_089B686C;
    case 660u: goto L_089B6874;
    case 661u: goto L_089B6888;
    case 662u: goto L_089B68D0;
    case 663u: goto L_089B68D8;
    case 664u: goto L_089B68E0;
    case 665u: goto L_089B68EC;
    case 666u: goto L_089B68F0;
    case 667u: goto L_089B6910;
    case 668u: goto L_089B6918;
    case 669u: goto L_089B6938;
    case 670u: goto L_089B6940;
    case 671u: goto L_089B6948;
    case 672u: goto L_089B6954;
    case 673u: goto L_089B695C;
    case 674u: goto L_089B6970;
    case 675u: goto L_089B697C;
    case 676u: goto L_089B6A14;
    case 677u: goto L_089B6A24;
    case 678u: goto L_089B6A34;
    case 679u: goto L_089B6A3C;
    case 680u: goto L_089B6A44;
    case 681u: goto L_089B6A4C;
    case 682u: goto L_089B6A54;
    case 683u: goto L_089B6A60;
    case 684u: goto L_089B6B28;
    case 685u: goto L_089B6B34;
    case 686u: goto L_089B6B48;
    case 687u: goto L_089B6B58;
    case 688u: goto L_089B6B60;
    case 689u: goto L_089B6B64;
    case 690u: goto L_089B6B78;
    case 691u: goto L_089B6B98;
    case 692u: goto L_089B6BE4;
    case 693u: goto L_089B6C1C;
    case 694u: goto L_089B6C30;
    case 695u: goto L_089B6C3C;
    case 696u: goto L_089B6C4C;
    case 697u: goto L_089B6C58;
    case 698u: goto L_089B6C60;
    case 699u: goto L_089B6C68;
    case 700u: goto L_089B6C70;
    case 701u: goto L_089B6C80;
    case 702u: goto L_089B6C90;
    case 703u: goto L_089B6C98;
    case 704u: goto L_089B6CA0;
    case 705u: goto L_089B6CB0;
    case 706u: goto L_089B6CBC;
    case 707u: goto L_089B6CC4;
    case 708u: goto L_089B6CC8;
    case 709u: goto L_089B6CD4;
    case 710u: goto L_089B6CE0;
    case 711u: goto L_089B6CE8;
    case 712u: goto L_089B6D08;
    case 713u: goto L_089B6DA0;
    case 714u: goto L_089B6DB4;
    case 715u: goto L_089B6DCC;
    case 716u: goto L_089B6DD8;
    case 717u: goto L_089B6DE0;
    case 718u: goto L_089B6DEC;
    case 719u: goto L_089B6DF4;
    case 720u: goto L_089B6DFC;
    case 721u: goto L_089B6E0C;
    case 722u: goto L_089B6E1C;
    case 723u: goto L_089B6E3C;
    case 724u: goto L_089B6E48;
    case 725u: goto L_089B6E50;
    case 726u: goto L_089B6E58;
    case 727u: goto L_089B6E68;
    case 728u: goto L_089B6E78;
    case 729u: goto L_089B6E88;
    case 730u: goto L_089B6E9C;
    case 731u: goto L_089B6F14;
    case 732u: goto L_089B6F1C;
    case 733u: goto L_089B6F6C;
    case 734u: goto L_089B6F74;
    case 735u: goto L_089B6FA4;
    case 736u: goto L_089B6FAC;
    case 737u: goto L_089B6FB8;
    case 738u: goto L_089B6FBC;
    case 739u: goto L_089B6FCC;
    case 740u: goto L_089B6FDC;
    case 741u: goto L_089B6FE4;
    case 742u: goto L_089B6FF4;
    case 743u: goto L_089B7000;
    case 744u: goto L_089B7010;
    case 745u: goto L_089B7028;
    case 746u: goto L_089B7030;
    case 747u: goto L_089B7038;
    case 748u: goto L_089B7048;
    case 749u: goto L_089B7054;
    case 750u: goto L_089B705C;
    case 751u: goto L_089B7064;
    case 752u: goto L_089B7074;
    case 753u: goto L_089B7078;
    case 754u: goto L_089B70D4;
    case 755u: goto L_089B70EC;
    case 756u: goto L_089B70FC;
    case 757u: goto L_089B7110;
    case 758u: goto L_089B711C;
    case 759u: goto L_089B7128;
    case 760u: goto L_089B7130;
    case 761u: goto L_089B713C;
    case 762u: goto L_089B7148;
    case 763u: goto L_089B714C;
    case 764u: goto L_089B7154;
    case 765u: goto L_089B7164;
    case 766u: goto L_089B716C;
    case 767u: goto L_089B7184;
    case 768u: goto L_089B71A8;
    case 769u: goto L_089B71C8;
    case 770u: goto L_089B71D4;
    case 771u: goto L_089B71DC;
    case 772u: goto L_089B71F0;
    case 773u: goto L_089B7218;
    case 774u: goto L_089B7220;
    case 775u: goto L_089B7230;
    case 776u: goto L_089B7238;
    case 777u: goto L_089B7280;
    case 778u: goto L_089B7288;
    case 779u: goto L_089B728C;
    case 780u: goto L_089B7298;
    case 781u: goto L_089B72A8;
    case 782u: goto L_089B72B8;
    case 783u: goto L_089B72C0;
    case 784u: goto L_089B72D0;
    case 785u: goto L_089B72E0;
    case 786u: goto L_089B72EC;
    case 787u: goto L_089B72F4;
    case 788u: goto L_089B72FC;
    case 789u: goto L_089B7304;
    case 790u: goto L_089B730C;
    case 791u: goto L_089B731C;
    case 792u: goto L_089B7324;
    case 793u: goto L_089B7370;
    case 794u: goto L_089B7390;
    case 795u: goto L_089B73AC;
    case 796u: goto L_089B73B8;
    case 797u: goto L_089B73C0;
    case 798u: goto L_089B73CC;
    case 799u: goto L_089B73DC;
    case 800u: goto L_089B73EC;
    case 801u: goto L_089B73F4;
    case 802u: goto L_089B73FC;
    case 803u: goto L_089B7404;
    case 804u: goto L_089B741C;
    case 805u: goto L_089B7440;
    case 806u: goto L_089B7448;
    case 807u: goto L_089B7458;
    case 808u: goto L_089B7468;
    case 809u: goto L_089B7474;
    case 810u: goto L_089B7480;
    case 811u: goto L_089B748C;
    case 812u: goto L_089B7490;
    case 813u: goto L_089B7498;
    case 814u: goto L_089B749C;
    case 815u: goto L_089B74A0;
    case 816u: goto L_089B74A8;
    case 817u: goto L_089B74B4;
    case 818u: goto L_089B74BC;
    case 819u: goto L_089B74E8;
    case 820u: goto L_089B74F8;
    case 821u: goto L_089B7508;
    case 822u: goto L_089B7514;
    case 823u: goto L_089B751C;
    case 824u: goto L_089B752C;
    case 825u: goto L_089B7564;
    case 826u: goto L_089B7594;
    case 827u: goto L_089B75C4;
    case 828u: goto L_089B75E4;
    case 829u: goto L_089B75F0;
    case 830u: goto L_089B7604;
    case 831u: goto L_089B7610;
    case 832u: goto L_089B7618;
    case 833u: goto L_089B7620;
    case 834u: goto L_089B7628;
    case 835u: goto L_089B7630;
    case 836u: goto L_089B7638;
    case 837u: goto L_089B7640;
    case 838u: goto L_089B7648;
    case 839u: goto L_089B7654;
    case 840u: goto L_089B765C;
    case 841u: goto L_089B7664;
    case 842u: goto L_089B766C;
    case 843u: goto L_089B7674;
    case 844u: goto L_089B767C;
    case 845u: goto L_089B7684;
    case 846u: goto L_089B768C;
    case 847u: goto L_089B7690;
    case 848u: goto L_089B76B0;
    case 849u: goto L_089B76B8;
    case 850u: goto L_089B76E4;
    case 851u: goto L_089B76F0;
    case 852u: goto L_089B7700;
    case 853u: goto L_089B7708;
    case 854u: goto L_089B7710;
    case 855u: goto L_089B771C;
    case 856u: goto L_089B772C;
    case 857u: goto L_089B7740;
    case 858u: goto L_089B7760;
    case 859u: goto L_089B7768;
    case 860u: goto L_089B777C;
    case 861u: goto L_089B7790;
    case 862u: goto L_089B7798;
    case 863u: goto L_089B77AC;
    case 864u: goto L_089B77B8;
    case 865u: goto L_089B77CC;
    case 866u: goto L_089B77D4;
    case 867u: goto L_089B77DC;
    case 868u: goto L_089B77E4;
    case 869u: goto L_089B77EC;
    case 870u: goto L_089B7808;
    case 871u: goto L_089B7814;
    case 872u: goto L_089B782C;
    case 873u: goto L_089B7834;
    case 874u: goto L_089B7848;
    case 875u: goto L_089B7850;
    case 876u: goto L_089B7858;
    case 877u: goto L_089B7864;
    case 878u: goto L_089B7878;
    case 879u: goto L_089B7880;
    case 880u: goto L_089B78A0;
    case 881u: goto L_089B78B4;
    case 882u: goto L_089B78C8;
    case 883u: goto L_089B78D4;
    case 884u: goto L_089B78D8;
    case 885u: goto L_089B78E4;
    case 886u: goto L_089B78EC;
    case 887u: goto L_089B78FC;
    case 888u: goto L_089B7904;
    case 889u: goto L_089B7910;
    case 890u: goto L_089B7960;
    case 891u: goto L_089B799C;
    case 892u: goto L_089B79A4;
    case 893u: goto L_089B79B0;
    case 894u: goto L_089B79B8;
    case 895u: goto L_089B79C0;
    case 896u: goto L_089B79D0;
    case 897u: goto L_089B79E0;
    case 898u: goto L_089B79F4;
    case 899u: goto L_089B7A04;
    case 900u: goto L_089B7A14;
    case 901u: goto L_089B7A1C;
    case 902u: goto L_089B7A24;
    case 903u: goto L_089B7A30;
    case 904u: goto L_089B7A38;
    case 905u: goto L_089B7A40;
    case 906u: goto L_089B7A50;
    case 907u: goto L_089B7A58;
    case 908u: goto L_089B7A74;
    case 909u: goto L_089B7A7C;
    case 910u: goto L_089B7A8C;
    case 911u: goto L_089B7A98;
    case 912u: goto L_089B7AA0;
    case 913u: goto L_089B7AA8;
    case 914u: goto L_089B7AB4;
    case 915u: goto L_089B7AB8;
    case 916u: goto L_089B7AC0;
    case 917u: goto L_089B7AC8;
    case 918u: goto L_089B7AD0;
    case 919u: goto L_089B7AE4;
    case 920u: goto L_089B7B04;
    case 921u: goto L_089B7B14;
    case 922u: goto L_089B7B28;
    case 923u: goto L_089B7B34;
    case 924u: goto L_089B7B40;
    case 925u: goto L_089B7B48;
    case 926u: goto L_089B7B5C;
    case 927u: goto L_089B7B6C;
    case 928u: goto L_089B7B7C;
    case 929u: goto L_089B7BA0;
    case 930u: goto L_089B7BA8;
    case 931u: goto L_089B7BB0;
    case 932u: goto L_089B7BBC;
    case 933u: goto L_089B7BC4;
    case 934u: goto L_089B7BCC;
    case 935u: goto L_089B7BD8;
    case 936u: goto L_089B7C20;
    case 937u: goto L_089B7C2C;
    case 938u: goto L_089B7C3C;
    case 939u: goto L_089B7C4C;
    case 940u: goto L_089B7C58;
    case 941u: goto L_089B7C64;
    case 942u: goto L_089B7C6C;
    case 943u: goto L_089B7C74;
    case 944u: goto L_089B7C80;
    case 945u: goto L_089B7C88;
    case 946u: goto L_089B7C94;
    case 947u: goto L_089B7C9C;
    case 948u: goto L_089B7CA4;
    case 949u: goto L_089B7CAC;
    case 950u: goto L_089B7CC4;
    case 951u: goto L_089B7D08;
    case 952u: goto L_089B7D1C;
    case 953u: goto L_089B7D28;
    case 954u: goto L_089B7D38;
    case 955u: goto L_089B7D44;
    case 956u: goto L_089B7D50;
    case 957u: goto L_089B7D5C;
    case 958u: goto L_089B7D68;
    case 959u: goto L_089B7D74;
    case 960u: goto L_089B7D78;
    case 961u: goto L_089B7D80;
    case 962u: goto L_089B7D8C;
    case 963u: goto L_089B7D94;
    case 964u: goto L_089B7D9C;
    case 965u: goto L_089B7DAC;
    case 966u: goto L_089B7DBC;
    case 967u: goto L_089B7DDC;
    case 968u: goto L_089B7DE4;
    case 969u: goto L_089B7DEC;
    case 970u: goto L_089B7DF4;
    case 971u: goto L_089B7E04;
    case 972u: goto L_089B7E10;
    case 973u: goto L_089B7E24;
    case 974u: goto L_089B7E5C;
    case 975u: goto L_089B7E6C;
    case 976u: goto L_089B7E74;
    case 977u: goto L_089B7E7C;
    case 978u: goto L_089B7E88;
    case 979u: goto L_089B7E9C;
    case 980u: goto L_089B7ED4;
    case 981u: goto L_089B7EE8;
    case 982u: goto L_089B7EF4;
    case 983u: goto L_089B7F08;
    case 984u: goto L_089B7F10;
    case 985u: goto L_089B7F1C;
    case 986u: goto L_089B7F30;
    case 987u: goto L_089B7F44;
    case 988u: goto L_089B7F54;
    case 989u: goto L_089B7F64;
    case 990u: goto L_089B7F74;
    case 991u: goto L_089B7F80;
    case 992u: goto L_089B7F94;
    case 993u: goto L_089B7F98;
    case 994u: goto L_089B7FA4;
    case 995u: goto L_089B7FB4;
    case 996u: goto L_089B7FC0;
    case 997u: goto L_089B7FD0;
    case 998u: goto L_089B7FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089B4004:
    ctx.gpr[4] = (16261u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (17401u << 16u);
      if (branch_taken) {
          goto L_089B4044;
      }
      goto L_089B4028;
    }
L_089B4028:
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B4044;
      }
      goto L_089B4040;
    }
L_089B4040:
    ctx.gpr[17] = (0u | 2u);
    goto L_089B4044;
L_089B4044:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089B40E8;
      }
      goto L_089B404C;
    }
L_089B404C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (64u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B40E8;
      }
      goto L_089B4060;
    }
L_089B4060:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B4094;
      }
      goto L_089B406C;
    }
L_089B406C:
    ctx.gpr[31] = (0x089B4074u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x089B4074u) goto L_089B4074;
    return;
L_089B4074:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x089B4080u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x089B4080u) goto L_089B4080;
    return;
L_089B4080:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B408Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 208u, 0x0899D750u>(ctx, &aot_mem) && ctx.pc == 0x089B408Cu) goto L_089B408C;
    return;
L_089B408C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (16261u << 16u);
      if (branch_taken) {
          goto L_089B40B8;
      }
      goto L_089B4094;
    }
L_089B4094:
    ctx.gpr[31] = (0x089B409Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x089B409Cu) goto L_089B409C;
    return;
L_089B409C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(864));
    ctx.gpr[31] = (0x089B40A8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x089B40A8u) goto L_089B40A8;
    return;
L_089B40A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B40B4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 208u, 0x0899D750u>(ctx, &aot_mem) && ctx.pc == 0x089B40B4u) goto L_089B40B4;
    return;
L_089B40B4:
    ctx.gpr[4] = (16261u << 16u);
    goto L_089B40B8;
L_089B40B8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B40D4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x089B40D4u) goto L_089B40D4;
    return;
L_089B40D4:
    ctx.gpr[31] = (0x089B40DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 205u, 0x089A0EA4u>(ctx, &aot_mem) && ctx.pc == 0x089B40DCu) goto L_089B40DC;
    return;
L_089B40DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B40E8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 471u, 0x08AFA188u>(ctx, &aot_mem) && ctx.pc == 0x089B40E8u) goto L_089B40E8;
    return;
L_089B40E8:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B4120;
      }
      goto L_089B40F8;
    }
L_089B40F8:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(880));
    ctx.gpr[6] = (49024u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x089B4114u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 105u, 0x0899CE50u>(ctx, &aot_mem) && ctx.pc == 0x089B4114u) goto L_089B4114;
    return;
L_089B4114:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B4120u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 207u, 0x0899D740u>(ctx, &aot_mem) && ctx.pc == 0x089B4120u) goto L_089B4120;
    return;
L_089B4120:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(816));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(712), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    ctx.gpr[6] = (16512u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x089B4148u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 105u, 0x0899CE50u>(ctx, &aot_mem) && ctx.pc == 0x089B4148u) goto L_089B4148;
    return;
L_089B4148:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B4154u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 433u, 0x08AF9E80u>(ctx, &aot_mem) && ctx.pc == 0x089B4154u) goto L_089B4154;
    return;
L_089B4154:
    ctx.gpr[31] = (0x089B415Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x089B415Cu) goto L_089B415C;
    return;
L_089B415C:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(832));
    ctx.gpr[6] = (16000u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089B4178u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 105u, 0x0899CE50u>(ctx, &aot_mem) && ctx.pc == 0x089B4178u) goto L_089B4178;
    return;
L_089B4178:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089B4188u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 103u, 0x0899CE20u>(ctx, &aot_mem) && ctx.pc == 0x089B4188u) goto L_089B4188;
    return;
L_089B4188:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B4194u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 391u, 0x08AF9B70u>(ctx, &aot_mem) && ctx.pc == 0x089B4194u) goto L_089B4194;
    return;
L_089B4194:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(704)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(708)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089B41ACu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 270u, 0x0899DBA8u>(ctx, &aot_mem) && ctx.pc == 0x089B41ACu) goto L_089B41AC;
    return;
L_089B41AC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x089B41B8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089B41B8u) goto L_089B41B8;
    return;
L_089B41B8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B41D4u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 209u, 0x0899D764u>(ctx, &aot_mem) && ctx.pc == 0x089B41D4u) goto L_089B41D4;
    return;
L_089B41D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B420C;
      }
      goto L_089B41E4;
    }
L_089B41E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B420C;
      }
      goto L_089B41F8;
    }
L_089B41F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1000u);
    ctx.gpr[6] = (0u | 27u);
    ctx.gpr[31] = (0x089B420Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 98u, 0x089A0734u>(ctx, &aot_mem) && ctx.pc == 0x089B420Cu) goto L_089B420C;
    return;
L_089B420C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B434C;
      }
      goto L_089B4220;
    }
L_089B4220:
    ctx.gpr[4] = (16076u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(312)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B434C;
      }
      goto L_089B4240;
    }
L_089B4240:
    ctx.gpr[31] = (0x089B4248u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 461u, 0x08AFA10Cu>(ctx, &aot_mem) && ctx.pc == 0x089B4248u) goto L_089B4248;
    return;
L_089B4248:
    ctx.gpr[4] = (0u | 41u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B4290;
      }
      goto L_089B4254;
    }
L_089B4254:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(2001) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B426C;
      }
      goto L_089B4264;
    }
L_089B4264:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), 0u);
      if (branch_taken) {
          goto L_089B4290;
      }
      goto L_089B426C;
    }
L_089B426C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1000) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4290;
      }
      goto L_089B427C;
    }
L_089B427C:
    ctx.gpr[31] = (0x089B4284u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 400u, 0x08AF9C04u>(ctx, &aot_mem) && ctx.pc == 0x089B4284u) goto L_089B4284;
    return;
L_089B4284:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
    goto L_089B4290;
L_089B4290:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(304));
    ctx.gpr[31] = (0x089B42A0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 207u, 0x0899D740u>(ctx, &aot_mem) && ctx.pc == 0x089B42A0u) goto L_089B42A0;
    return;
L_089B42A0:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B42B0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 372u, 0x08AF9994u>(ctx, &aot_mem) && ctx.pc == 0x089B42B0u) goto L_089B42B0;
    return;
L_089B42B0:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x089B42BCu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(116));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 372u, 0x08AF9994u>(ctx, &aot_mem) && ctx.pc == 0x089B42BCu) goto L_089B42BC;
    return;
L_089B42BC:
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[0];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B434C;
      }
      goto L_089B42D0;
    }
L_089B42D0:
    ctx.gpr[31] = (0x089B42D8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 205u, 0x0899D700u>(ctx, &aot_mem) && ctx.pc == 0x089B42D8u) goto L_089B42D8;
    return;
L_089B42D8:
    ctx.gpr[31] = (0x089B42E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 461u, 0x08AFA10Cu>(ctx, &aot_mem) && ctx.pc == 0x089B42E0u) goto L_089B42E0;
    return;
L_089B42E0:
    ctx.gpr[4] = (0u | 41u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B4328;
      }
      goto L_089B42EC;
    }
L_089B42EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(300) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4328;
      }
      goto L_089B42FC;
    }
L_089B42FC:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(896));
    ctx.gpr[6] = (49280u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x089B4314u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 105u, 0x0899CE50u>(ctx, &aot_mem) && ctx.pc == 0x089B4314u) goto L_089B4314;
    return;
L_089B4314:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B4320u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 433u, 0x08AF9E80u>(ctx, &aot_mem) && ctx.pc == 0x089B4320u) goto L_089B4320;
    return;
L_089B4320:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B434C;
      }
      goto L_089B4328;
    }
L_089B4328:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(912));
    ctx.gpr[6] = (16384u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x089B4340u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 105u, 0x0899CE50u>(ctx, &aot_mem) && ctx.pc == 0x089B4340u) goto L_089B4340;
    return;
L_089B4340:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B434Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 433u, 0x08AF9E80u>(ctx, &aot_mem) && ctx.pc == 0x089B434Cu) goto L_089B434C;
    return;
L_089B434C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4368;
      }
      goto L_089B4354;
    }
L_089B4354:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1001) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4368;
      }
      goto L_089B4364;
    }
L_089B4364:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(840), 0u);
    goto L_089B4368;
L_089B4368:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B43D0;
      }
      goto L_089B4370;
    }
L_089B4370:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-16385));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(1001) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B43D0;
      }
      goto L_089B4390;
    }
L_089B4390:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(501) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B43B0;
      }
      goto L_089B43A0;
    }
L_089B43A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B43B8;
      }
      goto L_089B43B0;
    }
L_089B43B0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(840), 0u);
      if (branch_taken) {
          goto L_089B43D0;
      }
      goto L_089B43B8;
    }
L_089B43B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B43D0;
      }
      goto L_089B43C4;
    }
L_089B43C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(840), ctx.gpr[4]);
    goto L_089B43D0;
L_089B43D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B43E8;
      }
      goto L_089B43E0;
    }
L_089B43E0:
    ctx.gpr[31] = (0x089B43E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 662u, 0x08887688u>(ctx, &aot_mem) && ctx.pc == 0x089B43E8u) goto L_089B43E8;
    return;
L_089B43E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4478;
      }
      goto L_089B43FC;
    }
L_089B43FC:
    ctx.gpr[31] = (0x089B4404u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x089B4404u) goto L_089B4404;
    return;
L_089B4404:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4438;
      }
      goto L_089B440C;
    }
L_089B440C:
    ctx.gpr[31] = (0x089B4414u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 455u, 0x089A1F80u>(ctx, &aot_mem) && ctx.pc == 0x089B4414u) goto L_089B4414;
    return;
L_089B4414:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1168))))));
    ctx.gpr[31] = (0x089B4420u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 270u, 0x089A13B4u>(ctx, &aot_mem) && ctx.pc == 0x089B4420u) goto L_089B4420;
    return;
L_089B4420:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (65528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B4478;
      }
      goto L_089B4438;
    }
L_089B4438:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B4478;
      }
      goto L_089B4448;
    }
L_089B4448:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[4] | 256u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B4464u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x089B4464u) goto L_089B4464;
    return;
L_089B4464:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (65528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    goto L_089B4478;
L_089B4478:
    ctx.gpr[31] = (0x089B4480u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 472u, 0x08AFA1A8u>(ctx, &aot_mem) && ctx.pc == 0x089B4480u) goto L_089B4480;
    return;
L_089B4480:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B44E8;
      }
      goto L_089B4488;
    }
L_089B4488:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B44E8;
      }
      goto L_089B44A4;
    }
L_089B44A4:
    ctx.gpr[4] = (16243u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(928));
    ctx.gpr[31] = (0x089B44C0u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x089B44C0u) goto L_089B44C0;
    return;
L_089B44C0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089B44CCu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 387u, 0x08AF9B0Cu>(ctx, &aot_mem) && ctx.pc == 0x089B44CCu) goto L_089B44CC;
    return;
L_089B44CC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x089B44DCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 106u, 0x0899CE6Cu>(ctx, &aot_mem) && ctx.pc == 0x089B44DCu) goto L_089B44DC;
    return;
L_089B44DC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B44E8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 207u, 0x0899D740u>(ctx, &aot_mem) && ctx.pc == 0x089B44E8u) goto L_089B44E8;
    return;
L_089B44E8:
    ctx.gpr[31] = (0x089B44F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089B44F0u) goto L_089B44F0;
    return;
L_089B44F0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B4680;
      }
      goto L_089B44F8;
    }
L_089B44F8:
    ctx.gpr[31] = (0x089B4500u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 472u, 0x08AFA1A8u>(ctx, &aot_mem) && ctx.pc == 0x089B4500u) goto L_089B4500;
    return;
L_089B4500:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4680;
      }
      goto L_089B4508;
    }
L_089B4508:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B4680;
      }
      goto L_089B4520;
    }
L_089B4520:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B4680;
      }
      goto L_089B4538;
    }
L_089B4538:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B4680;
      }
      goto L_089B4550;
    }
L_089B4550:
    ctx.gpr[31] = (0x089B4558u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 811u, 0x08AFB7E0u>(ctx, &aot_mem) && ctx.pc == 0x089B4558u) goto L_089B4558;
    return;
L_089B4558:
    ctx.gpr[4] = (0u | 1u);
    if (ctx.gpr[2] == ctx.gpr[4]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(752)));
        goto L_089B4578;
    }
    goto L_089B4564;
L_089B4564:
    ctx.gpr[31] = (0x089B456Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 811u, 0x08AFB7E0u>(ctx, &aot_mem) && ctx.pc == 0x089B456Cu) goto L_089B456C;
    return;
L_089B456C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B4680;
      }
      goto L_089B4574;
    }
L_089B4574:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(752)));
    goto L_089B4578;
L_089B4578:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B4680;
      }
      goto L_089B458C;
    }
L_089B458C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(756)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B4680;
      }
      goto L_089B45A4;
    }
L_089B45A4:
    ctx.gpr[31] = (0x089B45ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 461u, 0x08AFA10Cu>(ctx, &aot_mem) && ctx.pc == 0x089B45ACu) goto L_089B45AC;
    return;
L_089B45AC:
    ctx.gpr[4] = (0u | 41u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B4680;
      }
      goto L_089B45B8;
    }
L_089B45B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B4680;
      }
      goto L_089B45C8;
    }
L_089B45C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B4680;
      }
      goto L_089B45D4;
    }
L_089B45D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B45E0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 416u, 0x08AF9D34u>(ctx, &aot_mem) && ctx.pc == 0x089B45E0u) goto L_089B45E0;
    return;
L_089B45E0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B45ECu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 419u, 0x08AF9D8Cu>(ctx, &aot_mem) && ctx.pc == 0x089B45ECu) goto L_089B45EC;
    return;
L_089B45EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B45F8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 421u, 0x08AF9DC4u>(ctx, &aot_mem) && ctx.pc == 0x089B45F8u) goto L_089B45F8;
    return;
L_089B45F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B4604u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 422u, 0x08AF9DECu>(ctx, &aot_mem) && ctx.pc == 0x089B4604u) goto L_089B4604;
    return;
L_089B4604:
    ctx.gpr[31] = (0x089B460Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 430u, 0x08AF9E68u>(ctx, &aot_mem) && ctx.pc == 0x089B460Cu) goto L_089B460C;
    return;
L_089B460C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (65520u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[31] = (0x089B4628u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 214u, 0x0899D828u>(ctx, &aot_mem) && ctx.pc == 0x089B4628u) goto L_089B4628;
    return;
L_089B4628:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(944));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(160));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089B4648u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 115u, 0x0899CFFCu>(ctx, &aot_mem) && ctx.pc == 0x089B4648u) goto L_089B4648;
    return;
L_089B4648:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089B4654u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 207u, 0x0899D740u>(ctx, &aot_mem) && ctx.pc == 0x089B4654u) goto L_089B4654;
    return;
L_089B4654:
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(144));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089B466Cu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 115u, 0x0899CFFCu>(ctx, &aot_mem) && ctx.pc == 0x089B466Cu) goto L_089B466C;
    return;
L_089B466C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089B4678u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 207u, 0x0899D740u>(ctx, &aot_mem) && ctx.pc == 0x089B4678u) goto L_089B4678;
    return;
L_089B4678:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4688;
      }
      goto L_089B4680;
    }
L_089B4680:
    ctx.gpr[31] = (0x089B4688u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 222u, 0x08A0DBD0u>(ctx, &aot_mem) && ctx.pc == 0x089B4688u) goto L_089B4688;
    return;
L_089B4688:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B471C;
      }
      goto L_089B4698;
    }
L_089B4698:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B471C;
      }
      goto L_089B46AC;
    }
L_089B46AC:
    ctx.gpr[31] = (0x089B46B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 472u, 0x08AFA1A8u>(ctx, &aot_mem) && ctx.pc == 0x089B46B4u) goto L_089B46B4;
    return;
L_089B46B4:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
        goto L_089B46F0;
    }
    goto L_089B46BC;
L_089B46BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B470C;
      }
      goto L_089B46C8;
    }
L_089B46C8:
    ctx.gpr[31] = (0x089B46D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089B46D0u) goto L_089B46D0;
    return;
L_089B46D0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B470C;
      }
      goto L_089B46D8;
    }
L_089B46D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B470C;
      }
      goto L_089B46EC;
    }
L_089B46EC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
    goto L_089B46F0;
L_089B46F0:
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B470C;
      }
      goto L_089B46FC;
    }
L_089B46FC:
    ctx.gpr[31] = (0x089B4704u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 350u, 0x08AF986Cu>(ctx, &aot_mem) && ctx.pc == 0x089B4704u) goto L_089B4704;
    return;
L_089B4704:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B4714;
      }
      goto L_089B470C;
    }
L_089B470C:
    ctx.gpr[31] = (0x089B4714u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 424u, 0x089A1DB8u>(ctx, &aot_mem) && ctx.pc == 0x089B4714u) goto L_089B4714;
    return;
L_089B4714:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1264), 0u);
      if (branch_taken) {
          goto L_089B5134;
      }
      goto L_089B471C;
    }
L_089B471C:
    ctx.gpr[31] = (0x089B4724u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 636u, 0x0899F52Cu>(ctx, &aot_mem) && ctx.pc == 0x089B4724u) goto L_089B4724;
    return;
L_089B4724:
    ctx.gpr[31] = (0x089B472Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 500u, 0x089A6D44u>(ctx, &aot_mem) && ctx.pc == 0x089B472Cu) goto L_089B472C;
    return;
L_089B472C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B474C;
      }
      goto L_089B473C;
    }
L_089B473C:
    ctx.gpr[31] = (0x089B4744u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 50u, 0x089AC368u>(ctx, &aot_mem) && ctx.pc == 0x089B4744u) goto L_089B4744;
    return;
L_089B4744:
    ctx.gpr[31] = (0x089B474Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 499u, 0x0899EC9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B474Cu) goto L_089B474C;
    return;
L_089B474C:
    ctx.gpr[31] = (0x089B4754u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 102u, 0x089AC8C4u>(ctx, &aot_mem) && ctx.pc == 0x089B4754u) goto L_089B4754;
    return;
L_089B4754:
    ctx.gpr[31] = (0x089B475Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x089B475Cu) goto L_089B475C;
    return;
L_089B475C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B47D0;
      }
      goto L_089B4764;
    }
L_089B4764:
    ctx.gpr[31] = (0x089B476Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 472u, 0x08AFA1A8u>(ctx, &aot_mem) && ctx.pc == 0x089B476Cu) goto L_089B476C;
    return;
L_089B476C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B47D0;
      }
      goto L_089B4774;
    }
L_089B4774:
    ctx.gpr[31] = (0x089B477Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 432u, 0x08AF9E78u>(ctx, &aot_mem) && ctx.pc == 0x089B477Cu) goto L_089B477C;
    return;
L_089B477C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B47D0;
      }
      goto L_089B4784;
    }
L_089B4784:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1924)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B47A4;
      }
      goto L_089B4790;
    }
L_089B4790:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B47D0;
      }
      goto L_089B47A4;
    }
L_089B47A4:
    ctx.gpr[31] = (0x089B47ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 165u, 0x089A0B28u>(ctx, &aot_mem) && ctx.pc == 0x089B47ACu) goto L_089B47AC;
    return;
L_089B47AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B47D0;
      }
      goto L_089B47B4;
    }
L_089B47B4:
    ctx.gpr[31] = (0x089B47BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 175u, 0x089A0C3Cu>(ctx, &aot_mem) && ctx.pc == 0x089B47BCu) goto L_089B47BC;
    return;
L_089B47BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (65472u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    goto L_089B47D0;
L_089B47D0:
    ctx.gpr[31] = (0x089B47D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 1164u, 0x08893EE8u>(ctx, &aot_mem) && ctx.pc == 0x089B47D8u) goto L_089B47D8;
    return;
L_089B47D8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(784));
    ctx.gpr[31] = (0x089B47E4u);
    ctx.gpr[5] = (0u | 248u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 214u, 0x08B00DD4u>(ctx, &aot_mem) && ctx.pc == 0x089B47E4u) goto L_089B47E4;
    return;
L_089B47E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4804;
      }
      goto L_089B47F4;
    }
L_089B47F4:
    ctx.gpr[31] = (0x089B47FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 6u, 0x089A0080u>(ctx, &aot_mem) && ctx.pc == 0x089B47FCu) goto L_089B47FC;
    return;
L_089B47FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B481C;
      }
      goto L_089B4804;
    }
L_089B4804:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B481C;
      }
      goto L_089B4814;
    }
L_089B4814:
    ctx.gpr[31] = (0x089B481Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 29u, 0x089A0210u>(ctx, &aot_mem) && ctx.pc == 0x089B481Cu) goto L_089B481C;
    return;
L_089B481C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B483C;
      }
      goto L_089B482C;
    }
L_089B482C:
    ctx.gpr[31] = (0x089B4834u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 291u, 0x089ADA6Cu>(ctx, &aot_mem) && ctx.pc == 0x089B4834u) goto L_089B4834;
    return;
L_089B4834:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4854;
      }
      goto L_089B483C;
    }
L_089B483C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4854;
      }
      goto L_089B484C;
    }
L_089B484C:
    ctx.gpr[31] = (0x089B4854u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 67u, 0x089A04B8u>(ctx, &aot_mem) && ctx.pc == 0x089B4854u) goto L_089B4854;
    return;
L_089B4854:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B486C;
      }
      goto L_089B4864;
    }
L_089B4864:
    ctx.gpr[31] = (0x089B486Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 185u, 0x089A0CECu>(ctx, &aot_mem) && ctx.pc == 0x089B486Cu) goto L_089B486C;
    return;
L_089B486C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (16u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B48E8;
      }
      goto L_089B4880;
    }
L_089B4880:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B48E8;
      }
      goto L_089B4890;
    }
L_089B4890:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B48E8;
      }
      goto L_089B48A0;
    }
L_089B48A0:
    ctx.gpr[31] = (0x089B48A8u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x089B48A8u) goto L_089B48A8;
    return;
L_089B48A8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28636)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28640)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089B48C0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 431u, 0x08AF6180u>(ctx, &aot_mem) && ctx.pc == 0x089B48C0u) goto L_089B48C0;
    return;
L_089B48C0:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089B48CCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x089B48CCu) goto L_089B48CC;
    return;
L_089B48CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (65520u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_089B48E8;
L_089B48E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B48FC;
      }
      goto L_089B48F4;
    }
L_089B48F4:
    ctx.gpr[31] = (0x089B48FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 776u, 0x089BB520u>(ctx, &aot_mem) && ctx.pc == 0x089B48FCu) goto L_089B48FC;
    return;
L_089B48FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(64) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089B4E00;
      }
      goto L_089B4910;
    }
L_089B4910:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-17536)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B4928:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4974;
      }
      goto L_089B493C;
    }
L_089B493C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B4948u);
    ctx.gpr[5] = (0u | 158u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089B4948u) goto L_089B4948;
    return;
L_089B4948:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B49A4;
      }
      goto L_089B4950;
    }
L_089B4950:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089B4960u);
    ctx.gpr[6] = (0u | 158u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089B4960u) goto L_089B4960;
    return;
L_089B4960:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B496Cu);
    ctx.gpr[5] = (0u | 119u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B496Cu) goto L_089B496C;
    return;
L_089B496C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B49A4;
      }
      goto L_089B4974;
    }
L_089B4974:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B4980u);
    ctx.gpr[5] = (0u | 157u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089B4980u) goto L_089B4980;
    return;
L_089B4980:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B49A4;
      }
      goto L_089B4988;
    }
L_089B4988:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089B4998u);
    ctx.gpr[6] = (0u | 157u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089B4998u) goto L_089B4998;
    return;
L_089B4998:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B49A4u);
    ctx.gpr[5] = (0u | 118u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B49A4u) goto L_089B49A4;
    return;
L_089B49A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4E00;
      }
      goto L_089B49AC;
    }
L_089B49AC:
    ctx.gpr[31] = (0x089B49B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 347u, 0x089ADDC8u>(ctx, &aot_mem) && ctx.pc == 0x089B49B4u) goto L_089B49B4;
    return;
L_089B49B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4E00;
      }
      goto L_089B49BC;
    }
L_089B49BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4E00;
      }
      goto L_089B49C4;
    }
L_089B49C4:
    ctx.gpr[31] = (0x089B49CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 244u, 0x08885348u>(ctx, &aot_mem) && ctx.pc == 0x089B49CCu) goto L_089B49CC;
    return;
L_089B49CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4E00;
      }
      goto L_089B49D4;
    }
L_089B49D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4A08;
      }
      goto L_089B49E0;
    }
L_089B49E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089B4A2C;
      }
      goto L_089B49F0;
    }
L_089B49F0:
    ctx.gpr[31] = (0x089B49F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 842u, 0x089A3838u>(ctx, &aot_mem) && ctx.pc == 0x089B49F8u) goto L_089B49F8;
    return;
L_089B49F8:
    ctx.gpr[31] = (0x089B4A00u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 862u, 0x089A3A08u>(ctx, &aot_mem) && ctx.pc == 0x089B4A00u) goto L_089B4A00;
    return;
L_089B4A00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4A40;
      }
      goto L_089B4A08;
    }
L_089B4A08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1336), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(152));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089B4A24u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B4A24u) goto L_089B4A24;
    return;
L_089B4A24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5134;
      }
      goto L_089B4A2C;
    }
L_089B4A2C:
    ctx.gpr[31] = (0x089B4A34u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 592u, 0x088E2C80u>(ctx, &aot_mem) && ctx.pc == 0x089B4A34u) goto L_089B4A34;
    return;
L_089B4A34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4A58;
      }
      goto L_089B4A40;
    }
L_089B4A40:
    ctx.gpr[31] = (0x089B4A48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089B4A48u) goto L_089B4A48;
    return;
L_089B4A48:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4A60;
      }
      goto L_089B4A50;
    }
L_089B4A50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4AC8;
      }
      goto L_089B4A58;
    }
L_089B4A58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5134;
      }
      goto L_089B4A60;
    }
L_089B4A60:
    ctx.gpr[31] = (0x089B4A68u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 451u, 0x08AFA08Cu>(ctx, &aot_mem) && ctx.pc == 0x089B4A68u) goto L_089B4A68;
    return;
L_089B4A68:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B4AC8;
      }
      goto L_089B4A74;
    }
L_089B4A74:
    ctx.gpr[31] = (0x089B4A7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089B4A7Cu) goto L_089B4A7C;
    return;
L_089B4A7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1264)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B4AC8;
      }
      goto L_089B4A8C;
    }
L_089B4A8C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B4AB0;
      }
      goto L_089B4A9C;
    }
L_089B4A9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B4AC8;
      }
      goto L_089B4AB0;
    }
L_089B4AB0:
    ctx.gpr[31] = (0x089B4AB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089B4AB8u) goto L_089B4AB8;
    return;
L_089B4AB8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 50u);
    ctx.gpr[31] = (0x089B4AC8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x089B4AC8u) goto L_089B4AC8;
    return;
L_089B4AC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4E00;
      }
      goto L_089B4AD0;
    }
L_089B4AD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4E00;
      }
      goto L_089B4AD8;
    }
L_089B4AD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4E00;
      }
      goto L_089B4AE0;
    }
L_089B4AE0:
    ctx.gpr[31] = (0x089B4AE8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089B5174;
L_089B4AE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4E00;
      }
      goto L_089B4AF0;
    }
L_089B4AF0:
    ctx.gpr[31] = (0x089B4AF8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 225u, 0x08885254u>(ctx, &aot_mem) && ctx.pc == 0x089B4AF8u) goto L_089B4AF8;
    return;
L_089B4AF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4E00;
      }
      goto L_089B4B00;
    }
L_089B4B00:
    ctx.gpr[31] = (0x089B4B08u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 191u, 0x08885010u>(ctx, &aot_mem) && ctx.pc == 0x089B4B08u) goto L_089B4B08;
    return;
L_089B4B08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4E00;
      }
      goto L_089B4B10;
    }
L_089B4B10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4E00;
      }
      goto L_089B4B18;
    }
L_089B4B18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4E00;
      }
      goto L_089B4B20;
    }
L_089B4B20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1392)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4B94;
      }
      goto L_089B4B2C;
    }
L_089B4B2C:
    ctx.gpr[31] = (0x089B4B34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 339u, 0x08AF97E8u>(ctx, &aot_mem) && ctx.pc == 0x089B4B34u) goto L_089B4B34;
    return;
L_089B4B34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4BB0;
      }
      goto L_089B4B44;
    }
L_089B4B44:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1392)));
    ctx.gpr[31] = (0x089B4B54u);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6024));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x089B4B54u) goto L_089B4B54;
    return;
L_089B4B54:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(968));
    ctx.gpr[31] = (0x089B4B60u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 810u, 0x08AFB7C4u>(ctx, &aot_mem) && ctx.pc == 0x089B4B60u) goto L_089B4B60;
    return;
L_089B4B60:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(968)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(972)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(960));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(960), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(964), ctx.gpr[6]);
    ctx.gpr[31] = (0x089B4B84u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 212u, 0x0899D7B0u>(ctx, &aot_mem) && ctx.pc == 0x089B4B84u) goto L_089B4B84;
    return;
L_089B4B84:
    ctx.gpr[31] = (0x089B4B8Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 628u, 0x089AAD08u>(ctx, &aot_mem) && ctx.pc == 0x089B4B8Cu) goto L_089B4B8C;
    return;
L_089B4B8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4BB0;
      }
      goto L_089B4B94;
    }
L_089B4B94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (57344u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[31] = (0x089B4BB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 748u, 0x0899FCA0u>(ctx, &aot_mem) && ctx.pc == 0x089B4BB0u) goto L_089B4BB0;
    return;
L_089B4BB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4E00;
      }
      goto L_089B4BB8;
    }
L_089B4BB8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1384));
    ctx.gpr[31] = (0x089B4BC8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6024));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 212u, 0x0899D7B0u>(ctx, &aot_mem) && ctx.pc == 0x089B4BC8u) goto L_089B4BC8;
    return;
L_089B4BC8:
    ctx.gpr[31] = (0x089B4BD0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 628u, 0x089AAD08u>(ctx, &aot_mem) && ctx.pc == 0x089B4BD0u) goto L_089B4BD0;
    return;
L_089B4BD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4E00;
      }
      goto L_089B4BD8;
    }
L_089B4BD8:
    ctx.gpr[31] = (0x089B4BE0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 477u, 0x0899EB90u>(ctx, &aot_mem) && ctx.pc == 0x089B4BE0u) goto L_089B4BE0;
    return;
L_089B4BE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4E00;
      }
      goto L_089B4BE8;
    }
L_089B4BE8:
    ctx.gpr[31] = (0x089B4BF0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 685u, 0x088D76FCu>(ctx, &aot_mem) && ctx.pc == 0x089B4BF0u) goto L_089B4BF0;
    return;
L_089B4BF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4E00;
      }
      goto L_089B4BF8;
    }
L_089B4BF8:
    ctx.gpr[31] = (0x089B4C00u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 878u, 0x088DBB04u>(ctx, &aot_mem) && ctx.pc == 0x089B4C00u) goto L_089B4C00;
    return;
L_089B4C00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4E00;
      }
      goto L_089B4C08;
    }
L_089B4C08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4C50;
      }
      goto L_089B4C14;
    }
L_089B4C14:
    ctx.gpr[31] = (0x089B4C1Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 406u, 0x08AF9C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B4C1Cu) goto L_089B4C1C;
    return;
L_089B4C1C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4C50;
      }
      goto L_089B4C24;
    }
L_089B4C24:
    ctx.gpr[5] = (16390u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 2706u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[31] = (0x089B4C3Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 591u, 0x0888707Cu>(ctx, &aot_mem) && ctx.pc == 0x089B4C3Cu) goto L_089B4C3C;
    return;
L_089B4C3C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4C50;
      }
      goto L_089B4C44;
    }
L_089B4C44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[31] = (0x089B4C50u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 225u, 0x08898D3Cu>(ctx, &aot_mem) && ctx.pc == 0x089B4C50u) goto L_089B4C50;
    return;
L_089B4C50:
    ctx.gpr[31] = (0x089B4C58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 336u, 0x088D5750u>(ctx, &aot_mem) && ctx.pc == 0x089B4C58u) goto L_089B4C58;
    return;
L_089B4C58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4E00;
      }
      goto L_089B4C60;
    }
L_089B4C60:
    ctx.gpr[31] = (0x089B4C68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 572u, 0x089A2730u>(ctx, &aot_mem) && ctx.pc == 0x089B4C68u) goto L_089B4C68;
    return;
L_089B4C68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4E00;
      }
      goto L_089B4C70;
    }
L_089B4C70:
    ctx.gpr[31] = (0x089B4C78u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 408u, 0x0899E4A0u>(ctx, &aot_mem) && ctx.pc == 0x089B4C78u) goto L_089B4C78;
    return;
L_089B4C78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4E00;
      }
      goto L_089B4C80;
    }
L_089B4C80:
    ctx.gpr[31] = (0x089B4C88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 793u, 0x0899FF3Cu>(ctx, &aot_mem) && ctx.pc == 0x089B4C88u) goto L_089B4C88;
    return;
L_089B4C88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4E00;
      }
      goto L_089B4C90;
    }
L_089B4C90:
    ctx.gpr[31] = (0x089B4C98u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 388u, 0x089A9C98u>(ctx, &aot_mem) && ctx.pc == 0x089B4C98u) goto L_089B4C98;
    return;
L_089B4C98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4E00;
      }
      goto L_089B4CA0;
    }
L_089B4CA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4E00;
      }
      goto L_089B4CA8;
    }
L_089B4CA8:
    ctx.gpr[31] = (0x089B4CB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 625u, 0x0888AA40u>(ctx, &aot_mem) && ctx.pc == 0x089B4CB0u) goto L_089B4CB0;
    return;
L_089B4CB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5134;
      }
      goto L_089B4CB8;
    }
L_089B4CB8:
    ctx.gpr[31] = (0x089B4CC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 433u, 0x0899E654u>(ctx, &aot_mem) && ctx.pc == 0x089B4CC0u) goto L_089B4CC0;
    return;
L_089B4CC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4E00;
      }
      goto L_089B4CC8;
    }
L_089B4CC8:
    ctx.gpr[31] = (0x089B4CD0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 440u, 0x089A9F90u>(ctx, &aot_mem) && ctx.pc == 0x089B4CD0u) goto L_089B4CD0;
    return;
L_089B4CD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4E00;
      }
      goto L_089B4CD8;
    }
L_089B4CD8:
    ctx.gpr[31] = (0x089B4CE0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 460u, 0x0899EA4Cu>(ctx, &aot_mem) && ctx.pc == 0x089B4CE0u) goto L_089B4CE0;
    return;
L_089B4CE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4E00;
      }
      goto L_089B4CE8;
    }
L_089B4CE8:
    ctx.gpr[31] = (0x089B4CF0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 14u, 0x089A40ACu>(ctx, &aot_mem) && ctx.pc == 0x089B4CF0u) goto L_089B4CF0;
    return;
L_089B4CF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4E00;
      }
      goto L_089B4CF8;
    }
L_089B4CF8:
    ctx.gpr[31] = (0x089B4D00u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 447u, 0x088DA06Cu>(ctx, &aot_mem) && ctx.pc == 0x089B4D00u) goto L_089B4D00;
    return;
L_089B4D00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4E00;
      }
      goto L_089B4D08;
    }
L_089B4D08:
    ctx.gpr[31] = (0x089B4D10u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 508u, 0x089A22B8u>(ctx, &aot_mem) && ctx.pc == 0x089B4D10u) goto L_089B4D10;
    return;
L_089B4D10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4E00;
      }
      goto L_089B4D18;
    }
L_089B4D18:
    ctx.gpr[31] = (0x089B4D20u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089B4D20u) goto L_089B4D20;
    return;
L_089B4D20:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B4E00;
      }
      goto L_089B4D28;
    }
L_089B4D28:
    ctx.gpr[31] = (0x089B4D30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 339u, 0x08AF97E8u>(ctx, &aot_mem) && ctx.pc == 0x089B4D30u) goto L_089B4D30;
    return;
L_089B4D30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1396)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4D5C;
      }
      goto L_089B4D40;
    }
L_089B4D40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1756)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4E00;
      }
      goto L_089B4D4C;
    }
L_089B4D4C:
    ctx.gpr[31] = (0x089B4D54u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1756)));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 545u, 0x0884E1D0u>(ctx, &aot_mem) && ctx.pc == 0x089B4D54u) goto L_089B4D54;
    return;
L_089B4D54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4E00;
      }
      goto L_089B4D5C;
    }
L_089B4D5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1756)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4DDC;
      }
      goto L_089B4D68;
    }
L_089B4D68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1392)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4DBC;
      }
      goto L_089B4D74;
    }
L_089B4D74:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1392)));
    ctx.gpr[31] = (0x089B4D84u);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6024));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x089B4D84u) goto L_089B4D84;
    return;
L_089B4D84:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(984));
    ctx.gpr[31] = (0x089B4D90u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 810u, 0x08AFB7C4u>(ctx, &aot_mem) && ctx.pc == 0x089B4D90u) goto L_089B4D90;
    return;
L_089B4D90:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(984)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(988)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(976));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(976), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(980), ctx.gpr[6]);
    ctx.gpr[31] = (0x089B4DB4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 212u, 0x0899D7B0u>(ctx, &aot_mem) && ctx.pc == 0x089B4DB4u) goto L_089B4DB4;
    return;
L_089B4DB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4DCC;
      }
      goto L_089B4DBC;
    }
L_089B4DBC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1384));
    ctx.gpr[31] = (0x089B4DCCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6024));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 212u, 0x0899D7B0u>(ctx, &aot_mem) && ctx.pc == 0x089B4DCCu) goto L_089B4DCC;
    return;
L_089B4DCC:
    ctx.gpr[31] = (0x089B4DD4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 628u, 0x089AAD08u>(ctx, &aot_mem) && ctx.pc == 0x089B4DD4u) goto L_089B4DD4;
    return;
L_089B4DD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4E00;
      }
      goto L_089B4DDC;
    }
L_089B4DDC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B4DECu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 270u, 0x089A13B4u>(ctx, &aot_mem) && ctx.pc == 0x089B4DECu) goto L_089B4DEC;
    return;
L_089B4DEC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 20u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089B4E00u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 537u, 0x089BA35Cu>(ctx, &aot_mem) && ctx.pc == 0x089B4E00u) goto L_089B4E00;
    return;
L_089B4E00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089B4E18u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B4E18u) goto L_089B4E18;
    return;
L_089B4E18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (1024u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B4E38;
      }
      goto L_089B4E2C;
    }
L_089B4E2C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1755)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4FA8;
      }
      goto L_089B4E38;
    }
L_089B4E38:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1755)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4E50;
      }
      goto L_089B4E44;
    }
L_089B4E44:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1755)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1755), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089B4E50;
L_089B4E50:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
      if (branch_taken) {
          goto L_089B4FA8;
      }
      goto L_089B4E64;
    }
L_089B4E64:
    ctx.gpr[31] = (0x089B4E6Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x089B4E6Cu) goto L_089B4E6C;
    return;
L_089B4E6C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089B4E7Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x089B4E7Cu) goto L_089B4E7C;
    return;
L_089B4E7C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089B4E8Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 104u, 0x0899CE38u>(ctx, &aot_mem) && ctx.pc == 0x089B4E8Cu) goto L_089B4E8C;
    return;
L_089B4E8C:
    ctx.gpr[31] = (0x089B4E94u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 206u, 0x0899D728u>(ctx, &aot_mem) && ctx.pc == 0x089B4E94u) goto L_089B4E94;
    return;
L_089B4E94:
    ctx.gpr[4] = (17692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B4FA8;
      }
      goto L_089B4EB0;
    }
L_089B4EB0:
    ctx.gpr[31] = (0x089B4EB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 346u, 0x08AF983Cu>(ctx, &aot_mem) && ctx.pc == 0x089B4EB8u) goto L_089B4EB8;
    return;
L_089B4EB8:
    ctx.gpr[4] = (ctx.gpr[2] & 127u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (15044u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39846u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (15897u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089B4EECu);
    ctx.fpr[22] = ctx.fpr[12] + ctx.fpr[14];
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 346u, 0x08AF983Cu>(ctx, &aot_mem) && ctx.pc == 0x089B4EECu) goto L_089B4EEC;
    return;
L_089B4EEC:
    ctx.gpr[4] = (ctx.gpr[2] & 127u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-64));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (15333u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 24642u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[31] = (0x089B4F1Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1008), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 346u, 0x08AF983Cu>(ctx, &aot_mem) && ctx.pc == 0x089B4F1Cu) goto L_089B4F1C;
    return;
L_089B4F1C:
    ctx.gpr[4] = (ctx.gpr[2] & 127u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-64));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[20];
    ctx.gpr[4] = (2227u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[28] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1016), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27944)));
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089B4F68u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1012), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 346u, 0x08AF983Cu>(ctx, &aot_mem) && ctx.pc == 0x089B4F68u) goto L_089B4F68;
    return;
L_089B4F68:
    ctx.gpr[11] = (ctx.gpr[2] & 4095u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(2000));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (0u | 1u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[7] = (0u | 255u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x089B4FA8u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 142u, 0x08929268u>(ctx, &aot_mem) && ctx.pc == 0x089B4FA8u) goto L_089B4FA8;
    return;
L_089B4FA8:
    ctx.gpr[31] = (0x089B4FB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 472u, 0x088B6AA8u>(ctx, &aot_mem) && ctx.pc == 0x089B4FB0u) goto L_089B4FB0;
    return;
L_089B4FB0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4FCC;
      }
      goto L_089B4FBC;
    }
L_089B4FBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B4FCC;
      }
      goto L_089B4FC8;
    }
L_089B4FC8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1336), static_cast<std::uint8_t>(0u));
    goto L_089B4FCC;
L_089B4FCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5050;
      }
      goto L_089B4FE0;
    }
L_089B4FE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5050;
      }
      goto L_089B4FEC;
    }
L_089B4FEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5050;
      }
      goto L_089B4FFC;
    }
L_089B4FFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x089B5008u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089B5008u) goto L_089B5008;
    return;
L_089B5008:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5050;
      }
      goto L_089B5010;
    }
L_089B5010:
    ctx.gpr[31] = (0x089B5018u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 845u, 0x0889FE20u>(ctx, &aot_mem) && ctx.pc == 0x089B5018u) goto L_089B5018;
    return;
L_089B5018:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5050;
      }
      goto L_089B5020;
    }
L_089B5020:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (16u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B5050;
      }
      goto L_089B5034;
    }
L_089B5034:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (16u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B5050u);
    ctx.gpr[5] = (0u | 120u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B5050u) goto L_089B5050;
    return;
L_089B5050:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1984)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089B5090;
      }
      goto L_089B505C;
    }
L_089B505C:
    ctx.gpr[31] = (0x089B5064u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 339u, 0x08AF97E8u>(ctx, &aot_mem) && ctx.pc == 0x089B5064u) goto L_089B5064;
    return;
L_089B5064:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1988)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5090;
      }
      goto L_089B5074;
    }
L_089B5074:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1984)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B5084u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B5084u) goto L_089B5084;
    return;
L_089B5084:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1984), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1988), 0u);
    goto L_089B5090;
L_089B5090:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-28871)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B50D0;
      }
      goto L_089B50A0;
    }
L_089B50A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B50D0;
      }
      goto L_089B50B0;
    }
L_089B50B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(628)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B50D0;
      }
      goto L_089B50BC;
    }
L_089B50BC:
    ctx.gpr[31] = (0x089B50C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089B50C4u) goto L_089B50C4;
    return;
L_089B50C4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B50D0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 56u, 0x089A4300u>(ctx, &aot_mem) && ctx.pc == 0x089B50D0u) goto L_089B50D0;
    return;
L_089B50D0:
    ctx.gpr[31] = (0x089B50D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089B50D8u) goto L_089B50D8;
    return;
L_089B50D8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B5134;
      }
      goto L_089B50E0;
    }
L_089B50E0:
    ctx.gpr[31] = (0x089B50E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 816u, 0x08AFB840u>(ctx, &aot_mem) && ctx.pc == 0x089B50E8u) goto L_089B50E8;
    return;
L_089B50E8:
    ctx.gpr[31] = (0x089B50F0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 815u, 0x08AFB838u>(ctx, &aot_mem) && ctx.pc == 0x089B50F0u) goto L_089B50F0;
    return;
L_089B50F0:
    ctx.gpr[4] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B5134;
      }
      goto L_089B50FC;
    }
L_089B50FC:
    ctx.gpr[31] = (0x089B5104u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 461u, 0x08AFA10Cu>(ctx, &aot_mem) && ctx.pc == 0x089B5104u) goto L_089B5104;
    return;
L_089B5104:
    ctx.gpr[4] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B5134;
      }
      goto L_089B5110;
    }
L_089B5110:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B5134;
      }
      goto L_089B511C;
    }
L_089B511C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 52u);
    ctx.gpr[31] = (0x089B5134u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x089B5134u) goto L_089B5134;
    return;
L_089B5134:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1416)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1420)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1424)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1428)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1432)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1436)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1440)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1444)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1448)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1452)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1456)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1460)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1464)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1468)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1472));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B5174:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(604)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089B51E0;
      }
      goto L_089B51B8;
    }
L_089B51B8:
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B51F0;
      }
      goto L_089B51D8;
    }
L_089B51D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5340;
      }
      goto L_089B51E0;
    }
L_089B51E0:
    ctx.gpr[31] = (0x089B51E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x089B51E8u) goto L_089B51E8;
    return;
L_089B51E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5BBC;
      }
      goto L_089B51F0;
    }
L_089B51F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1796)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B5230;
      }
      goto L_089B5208;
    }
L_089B5208:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 165u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B5244;
      }
      goto L_089B5218;
    }
L_089B5218:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B5228u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 71u, 0x0888C528u>(ctx, &aot_mem) && ctx.pc == 0x089B5228u) goto L_089B5228;
    return;
L_089B5228:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5280;
      }
      goto L_089B5230;
    }
L_089B5230:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B523Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x089B523Cu) goto L_089B523C;
    return;
L_089B523C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5BBC;
      }
      goto L_089B5244;
    }
L_089B5244:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B52CC;
      }
      goto L_089B5254;
    }
L_089B5254:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 112u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B52B4;
      }
      goto L_089B5268;
    }
L_089B5268:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B5278u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 268u, 0x08885520u>(ctx, &aot_mem) && ctx.pc == 0x089B5278u) goto L_089B5278;
    return;
L_089B5278:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B529C;
      }
      goto L_089B5280;
    }
L_089B5280:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
        goto L_089B5470;
    }
    goto L_089B5294;
L_089B5294:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089B54E8;
      }
      goto L_089B529C;
    }
L_089B529C:
    ctx.gpr[31] = (0x089B52A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 535u, 0x08886BB0u>(ctx, &aot_mem) && ctx.pc == 0x089B52A4u) goto L_089B52A4;
    return;
L_089B52A4:
    ctx.gpr[31] = (0x089B52ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x089B52ACu) goto L_089B52AC;
    return;
L_089B52AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5BBC;
      }
      goto L_089B52B4;
    }
L_089B52B4:
    ctx.gpr[31] = (0x089B52BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 535u, 0x08886BB0u>(ctx, &aot_mem) && ctx.pc == 0x089B52BCu) goto L_089B52BC;
    return;
L_089B52BC:
    ctx.gpr[31] = (0x089B52C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x089B52C4u) goto L_089B52C4;
    return;
L_089B52C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5BBC;
      }
      goto L_089B52CC;
    }
L_089B52CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B52DCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 141u, 0x0888CABCu>(ctx, &aot_mem) && ctx.pc == 0x089B52DCu) goto L_089B52DC;
    return;
L_089B52DC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B5328;
      }
      goto L_089B52E4;
    }
L_089B52E4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(540)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(544)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B530C;
      }
      goto L_089B52F4;
    }
L_089B52F4:
    ctx.gpr[31] = (0x089B52FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 535u, 0x08886BB0u>(ctx, &aot_mem) && ctx.pc == 0x089B52FCu) goto L_089B52FC;
    return;
L_089B52FC:
    ctx.gpr[31] = (0x089B5304u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x089B5304u) goto L_089B5304;
    return;
L_089B5304:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5318;
      }
      goto L_089B530C;
    }
L_089B530C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B5318u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x089B5318u) goto L_089B5318;
    return;
L_089B5318:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B5BBC;
      }
      goto L_089B5328;
    }
L_089B5328:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (65535u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32767));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B5280;
      }
      goto L_089B5340;
    }
L_089B5340:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B5368;
      }
      goto L_089B5350;
    }
L_089B5350:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B5360u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 71u, 0x0888C528u>(ctx, &aot_mem) && ctx.pc == 0x089B5360u) goto L_089B5360;
    return;
L_089B5360:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5280;
      }
      goto L_089B5368;
    }
L_089B5368:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5408;
      }
      goto L_089B5374;
    }
L_089B5374:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B5408;
      }
      goto L_089B5384;
    }
L_089B5384:
    ctx.gpr[31] = (0x089B538Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 713u, 0x0888798Cu>(ctx, &aot_mem) && ctx.pc == 0x089B538Cu) goto L_089B538C;
    return;
L_089B538C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B53BC;
      }
      goto L_089B5394;
    }
L_089B5394:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B53ACu);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 469u, 0x0888E3CCu>(ctx, &aot_mem) && ctx.pc == 0x089B53ACu) goto L_089B53AC;
    return;
L_089B53AC:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5280;
      }
      goto L_089B53BC;
    }
L_089B53BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B53F4;
      }
      goto L_089B53CC;
    }
L_089B53CC:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 11u);
    ctx.gpr[31] = (0x089B53E4u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 469u, 0x0888E3CCu>(ctx, &aot_mem) && ctx.pc == 0x089B53E4u) goto L_089B53E4;
    return;
L_089B53E4:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5280;
      }
      goto L_089B53F4;
    }
L_089B53F4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B5400u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x089B5400u) goto L_089B5400;
    return;
L_089B5400:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5280;
      }
      goto L_089B5408;
    }
L_089B5408:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B5418u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 71u, 0x0888C528u>(ctx, &aot_mem) && ctx.pc == 0x089B5418u) goto L_089B5418;
    return;
L_089B5418:
    ctx.gpr[31] = (0x089B5420u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089B5420u) goto L_089B5420;
    return;
L_089B5420:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5280;
      }
      goto L_089B5428;
    }
L_089B5428:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5280;
      }
      goto L_089B5438;
    }
L_089B5438:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B5280;
      }
      goto L_089B5444;
    }
L_089B5444:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(601))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089B5280;
      }
      goto L_089B5450;
    }
L_089B5450:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B5280;
      }
      goto L_089B5460;
    }
L_089B5460:
    ctx.gpr[31] = (0x089B5468u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 471u, 0x088868D0u>(ctx, &aot_mem) && ctx.pc == 0x089B5468u) goto L_089B5468;
    return;
L_089B5468:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5BBC;
      }
      goto L_089B5470;
    }
L_089B5470:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089B54E8;
      }
      goto L_089B5480;
    }
L_089B5480:
    ctx.gpr[31] = (0x089B5488u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089B5488u) goto L_089B5488;
    return;
L_089B5488:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_089B549C;
      }
      goto L_089B5490;
    }
L_089B5490:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B5564;
      }
      goto L_089B549C;
    }
L_089B549C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(596)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B5564;
      }
      goto L_089B54A8;
    }
L_089B54A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089B5564;
      }
      goto L_089B54B4;
    }
L_089B54B4:
    ctx.gpr[31] = (0x089B54BCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 858u, 0x0889FE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B54BCu) goto L_089B54BC;
    return;
L_089B54BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5564;
      }
      goto L_089B54C4;
    }
L_089B54C4:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B5550;
      }
      goto L_089B54E4;
    }
L_089B54E4:
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
    goto L_089B54E8;
L_089B54E8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089B54F8u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 113u, 0x089BC7A4u>(ctx, &aot_mem) && ctx.pc == 0x089B54F8u) goto L_089B54F8;
    return;
L_089B54F8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1312));
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
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 8192u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B5638;
      }
      goto L_089B5548;
    }
L_089B5548:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
      if (branch_taken) {
          goto L_089B55E0;
      }
      goto L_089B5550;
    }
L_089B5550:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x089B555Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 226u, 0x089BD0ECu>(ctx, &aot_mem) && ctx.pc == 0x089B555Cu) goto L_089B555C;
    return;
L_089B555C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5BBC;
      }
      goto L_089B5564;
    }
L_089B5564:
    ctx.gpr[31] = (0x089B556Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x089B556Cu) goto L_089B556C;
    return;
L_089B556C:
    ctx.gpr[31] = (0x089B5574u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089B5574u) goto L_089B5574;
    return;
L_089B5574:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089B558C;
      }
      goto L_089B557C;
    }
L_089B557C:
    ctx.gpr[31] = (0x089B5584u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 471u, 0x088868D0u>(ctx, &aot_mem) && ctx.pc == 0x089B5584u) goto L_089B5584;
    return;
L_089B5584:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B55A8;
      }
      goto L_089B558C;
    }
L_089B558C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B55A8;
      }
      goto L_089B5598;
    }
L_089B5598:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1796), ctx.gpr[4]);
    goto L_089B55A8;
L_089B55A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B55B4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x089B55B4u) goto L_089B55B4;
    return;
L_089B55B4:
    ctx.gpr[31] = (0x089B55BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089B55BCu) goto L_089B55BC;
    return;
L_089B55BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B55D0;
      }
      goto L_089B55C4;
    }
L_089B55C4:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x089B55D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 327u, 0x088EE310u>(ctx, &aot_mem) && ctx.pc == 0x089B55D0u) goto L_089B55D0;
    return;
L_089B55D0:
    ctx.gpr[31] = (0x089B55D8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 197u, 0x089ED474u>(ctx, &aot_mem) && ctx.pc == 0x089B55D8u) goto L_089B55D8;
    return;
L_089B55D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5BBC;
      }
      goto L_089B55E0;
    }
L_089B55E0:
    ctx.gpr[5] = (16512u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_089B564C;
      }
      goto L_089B55EC;
    }
L_089B55EC:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B564C;
      }
      goto L_089B55FC;
    }
L_089B55FC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B5638;
      }
      goto L_089B5620;
    }
L_089B5620:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(116)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B564C;
      }
      goto L_089B5638;
    }
L_089B5638:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B5644u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x089B5644u) goto L_089B5644;
    return;
L_089B5644:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5668;
      }
      goto L_089B564C;
    }
L_089B564C:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B5668;
      }
      goto L_089B565C;
    }
L_089B565C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B5668u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x089B5668u) goto L_089B5668;
    return;
L_089B5668:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B56D8;
      }
      goto L_089B5680;
    }
L_089B5680:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B56D0;
      }
      goto L_089B56C0;
    }
L_089B56C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_089B56D0;
L_089B56D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B56EC;
      }
      goto L_089B56D8;
    }
L_089B56D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (65535u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_089B56EC;
L_089B56EC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5738;
      }
      goto L_089B5700;
    }
L_089B5700:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-17280)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B5718:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089B573C;
      }
      goto L_089B5720;
    }
L_089B5720:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_089B573C;
      }
      goto L_089B5728;
    }
L_089B5728:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_089B573C;
      }
      goto L_089B5730;
    }
L_089B5730:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 8u);
      if (branch_taken) {
          goto L_089B573C;
      }
      goto L_089B5738;
    }
L_089B5738:
    ctx.gpr[4] = (0u | 0u);
    goto L_089B573C;
L_089B573C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(542)));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B575C;
      }
      goto L_089B574C;
    }
L_089B574C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B5770;
      }
      goto L_089B575C;
    }
L_089B575C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (65535u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32767));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_089B5770;
L_089B5770:
    ctx.gpr[31] = (0x089B5778u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 508u, 0x089AA458u>(ctx, &aot_mem) && ctx.pc == 0x089B5778u) goto L_089B5778;
    return;
L_089B5778:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5BBC;
      }
      goto L_089B5780;
    }
L_089B5780:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (16332u << 16u);
      if (branch_taken) {
          goto L_089B5BBC;
      }
      goto L_089B5788;
    }
L_089B5788:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16179u << 16u);
      if (branch_taken) {
          goto L_089B5BBC;
      }
      goto L_089B57AC;
    }
L_089B57AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B5BBC;
      }
      goto L_089B57D0;
    }
L_089B57D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B583C;
      }
      goto L_089B57E0;
    }
L_089B57E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089B5828;
      }
      goto L_089B57F4;
    }
L_089B57F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 31u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B5854;
      }
      goto L_089B5814;
    }
L_089B5814:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B5820u);
    ctx.gpr[5] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 881u, 0x089A3B94u>(ctx, &aot_mem) && ctx.pc == 0x089B5820u) goto L_089B5820;
    return;
L_089B5820:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5BBC;
      }
      goto L_089B5828;
    }
L_089B5828:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B5834u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x089B5834u) goto L_089B5834;
    return;
L_089B5834:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5BBC;
      }
      goto L_089B583C;
    }
L_089B583C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B584Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 201u, 0x088850E4u>(ctx, &aot_mem) && ctx.pc == 0x089B584Cu) goto L_089B584C;
    return;
L_089B584C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5BBC;
      }
      goto L_089B5854;
    }
L_089B5854:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B5874;
      }
      goto L_089B5864;
    }
L_089B5864:
    ctx.gpr[31] = (0x089B586Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 2u, 0x089A4020u>(ctx, &aot_mem) && ctx.pc == 0x089B586Cu) goto L_089B586C;
    return;
L_089B586C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5BBC;
      }
      goto L_089B5874;
    }
L_089B5874:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(544)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(541)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5BB4;
      }
      goto L_089B588C;
    }
L_089B588C:
    ctx.gpr[31] = (0x089B5894u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 889u, 0x0889FFE0u>(ctx, &aot_mem) && ctx.pc == 0x089B5894u) goto L_089B5894;
    return;
L_089B5894:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5BB4;
      }
      goto L_089B589C;
    }
L_089B589C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    ctx.gpr[4] = (ctx.gpr[4] >> 4u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(14) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5BBC;
      }
      goto L_089B58B4;
    }
L_089B58B4:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-17240)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B58CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B598C;
      }
      goto L_089B58DC;
    }
L_089B58DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(628)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
        goto L_089B58FC;
    }
    goto L_089B58E8;
L_089B58E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(628)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B5974;
      }
      goto L_089B58F8;
    }
L_089B58F8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    goto L_089B58FC;
L_089B58FC:
    ctx.gpr[5] = (0u | 15u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
        goto L_089B592C;
    }
    goto L_089B5908;
L_089B5908:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 11u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
        goto L_089B592C;
    }
    goto L_089B5918;
L_089B5918:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 19u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
        goto L_089B5938;
    }
    goto L_089B5928;
L_089B5928:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    goto L_089B592C;
L_089B592C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B5960;
      }
      goto L_089B5934;
    }
L_089B5934:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    goto L_089B5938;
L_089B5938:
    ctx.gpr[5] = (0u | 16u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(508)));
        goto L_089B5958;
    }
    goto L_089B5944;
L_089B5944:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B5974;
      }
      goto L_089B5954;
    }
L_089B5954:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(508)));
    goto L_089B5958;
L_089B5958:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5974;
      }
      goto L_089B5960;
    }
L_089B5960:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B596Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 127u, 0x08888C94u>(ctx, &aot_mem) && ctx.pc == 0x089B596Cu) goto L_089B596C;
    return;
L_089B596C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5A74;
      }
      goto L_089B5974;
    }
L_089B5974:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B5984u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 863u, 0x0888BA84u>(ctx, &aot_mem) && ctx.pc == 0x089B5984u) goto L_089B5984;
    return;
L_089B5984:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5A74;
      }
      goto L_089B598C;
    }
L_089B598C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B5A64;
      }
      goto L_089B599C;
    }
L_089B599C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(628)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
        goto L_089B59BC;
    }
    goto L_089B59A8;
L_089B59A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(628)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B5A64;
      }
      goto L_089B59B8;
    }
L_089B59B8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    goto L_089B59BC;
L_089B59BC:
    ctx.gpr[18] = (0u | 15u);
    if (ctx.gpr[4] != ctx.gpr[18]) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
        goto L_089B59D8;
    }
    goto L_089B59C8;
L_089B59C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B5A28;
      }
      goto L_089B59D4;
    }
L_089B59D4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    goto L_089B59D8;
L_089B59D8:
    ctx.gpr[5] = (0u | 11u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
        goto L_089B59F4;
    }
    goto L_089B59E4;
L_089B59E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B5A28;
      }
      goto L_089B59F0;
    }
L_089B59F0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    goto L_089B59F4;
L_089B59F4:
    ctx.gpr[5] = (0u | 16u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
        goto L_089B5A10;
    }
    goto L_089B5A00;
L_089B5A00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(512)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B5A28;
      }
      goto L_089B5A0C;
    }
L_089B5A0C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    goto L_089B5A10;
L_089B5A10:
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B5A64;
      }
      goto L_089B5A1C;
    }
L_089B5A1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(516)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5A64;
      }
      goto L_089B5A28;
    }
L_089B5A28:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B5A34u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 127u, 0x08888C94u>(ctx, &aot_mem) && ctx.pc == 0x089B5A34u) goto L_089B5A34;
    return;
L_089B5A34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B5A74;
      }
      goto L_089B5A44;
    }
L_089B5A44:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089B5A74;
      }
      goto L_089B5A50;
    }
L_089B5A50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (ctx.gpr[5] | 128u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(408), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089B5A74;
      }
      goto L_089B5A64;
    }
L_089B5A64:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B5A74u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 863u, 0x0888BA84u>(ctx, &aot_mem) && ctx.pc == 0x089B5A74u) goto L_089B5A74;
    return;
L_089B5A74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5BBC;
      }
      goto L_089B5A7C;
    }
L_089B5A7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B5B20;
      }
      goto L_089B5A8C;
    }
L_089B5A8C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 16u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(508)));
        goto L_089B5AB0;
    }
    goto L_089B5A9C;
L_089B5A9C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B5B08;
      }
      goto L_089B5AAC;
    }
L_089B5AAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(508)));
    goto L_089B5AB0;
L_089B5AB0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5B08;
      }
      goto L_089B5AB8;
    }
L_089B5AB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(508)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5AF4;
      }
      goto L_089B5ACC;
    }
L_089B5ACC:
    ctx.gpr[31] = (0x089B5AD4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089B5AD4u) goto L_089B5AD4;
    return;
L_089B5AD4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5B9C;
      }
      goto L_089B5ADC;
    }
L_089B5ADC:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B5AECu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 863u, 0x0888BA84u>(ctx, &aot_mem) && ctx.pc == 0x089B5AECu) goto L_089B5AEC;
    return;
L_089B5AEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5B9C;
      }
      goto L_089B5AF4;
    }
L_089B5AF4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B5B00u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 127u, 0x08888C94u>(ctx, &aot_mem) && ctx.pc == 0x089B5B00u) goto L_089B5B00;
    return;
L_089B5B00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5B9C;
      }
      goto L_089B5B08;
    }
L_089B5B08:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B5B18u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 863u, 0x0888BA84u>(ctx, &aot_mem) && ctx.pc == 0x089B5B18u) goto L_089B5B18;
    return;
L_089B5B18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5B9C;
      }
      goto L_089B5B20;
    }
L_089B5B20:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B5B8C;
      }
      goto L_089B5B30;
    }
L_089B5B30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5B8C;
      }
      goto L_089B5B3C;
    }
L_089B5B3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(508)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5B78;
      }
      goto L_089B5B50;
    }
L_089B5B50:
    ctx.gpr[31] = (0x089B5B58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089B5B58u) goto L_089B5B58;
    return;
L_089B5B58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5B9C;
      }
      goto L_089B5B60;
    }
L_089B5B60:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B5B70u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 863u, 0x0888BA84u>(ctx, &aot_mem) && ctx.pc == 0x089B5B70u) goto L_089B5B70;
    return;
L_089B5B70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5B9C;
      }
      goto L_089B5B78;
    }
L_089B5B78:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B5B84u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 127u, 0x08888C94u>(ctx, &aot_mem) && ctx.pc == 0x089B5B84u) goto L_089B5B84;
    return;
L_089B5B84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5B9C;
      }
      goto L_089B5B8C;
    }
L_089B5B8C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B5B9Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 863u, 0x0888BA84u>(ctx, &aot_mem) && ctx.pc == 0x089B5B9Cu) goto L_089B5B9C;
    return;
L_089B5B9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5BBC;
      }
      goto L_089B5BA4;
    }
L_089B5BA4:
    ctx.gpr[31] = (0x089B5BACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 748u, 0x0899FCA0u>(ctx, &aot_mem) && ctx.pc == 0x089B5BACu) goto L_089B5BAC;
    return;
L_089B5BAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5BBC;
      }
      goto L_089B5BB4;
    }
L_089B5BB4:
    ctx.gpr[31] = (0x089B5BBCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x089B5BBCu) goto L_089B5BBC;
    return;
L_089B5BBC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B5BE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-592));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22912)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11224)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(512)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(576)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(256)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(320)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(384)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(448)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(540), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(556), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), ctx.gpr[31]);
    ctx.gpr[31] = (0x089B5C50u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 169u, 0x089296C0u>(ctx, &aot_mem) && ctx.pc == 0x089B5C50u) goto L_089B5C50;
    return;
L_089B5C50:
    ctx.gpr[31] = (0x089B5C58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 762u, 0x08A2F7D8u>(ctx, &aot_mem) && ctx.pc == 0x089B5C58u) goto L_089B5C58;
    return;
L_089B5C58:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B5C74u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089B5C74u) goto L_089B5C74;
    return;
L_089B5C74:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5CB4;
      }
      goto L_089B5C7C;
    }
L_089B5C7C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x089B5C98u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 378u, 0x0886235Cu>(ctx, &aot_mem) && ctx.pc == 0x089B5C98u) goto L_089B5C98;
    return;
L_089B5C98:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5CB4;
      }
      goto L_089B5CA0;
    }
L_089B5CA0:
    ctx.gpr[31] = (0x089B5CA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 425u, 0x08ACA8FCu>(ctx, &aot_mem) && ctx.pc == 0x089B5CA8u) goto L_089B5CA8;
    return;
L_089B5CA8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B5CB4;
      }
      goto L_089B5CB0;
    }
L_089B5CB0:
    ctx.gpr[17] = (0u | 1u);
    goto L_089B5CB4;
L_089B5CB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B5CE8;
      }
      goto L_089B5CC4;
    }
L_089B5CC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5CE8;
      }
      goto L_089B5CD0;
    }
L_089B5CD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B5CE8;
      }
      goto L_089B5CE4;
    }
L_089B5CE4:
    ctx.gpr[18] = (0u | 1u);
    goto L_089B5CE8;
L_089B5CE8:
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6048;
      }
      goto L_089B5CF4;
    }
L_089B5CF4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089B5D68;
      }
      goto L_089B5CFC;
    }
L_089B5CFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16076u << 16u);
      if (branch_taken) {
          goto L_089B5D68;
      }
      goto L_089B5D38;
    }
L_089B5D38:
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (16153u << 16u);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (0u | 202u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[31] = (0x089B5D68u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x089B5D68u) goto L_089B5D68;
    return;
L_089B5D68:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[17] = (2229u << 16u);
      if (branch_taken) {
          goto L_089B5DAC;
      }
      goto L_089B5D70;
    }
L_089B5D70:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[17] = (2229u << 16u);
      if (branch_taken) {
          goto L_089B5DAC;
      }
      goto L_089B5D94;
    }
L_089B5D94:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) & 0x7FFFFFFFu);
    ctx.gpr[17] = (2229u << 16u);
    goto L_089B5DAC;
L_089B5DAC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28896)));
    ctx.gpr[4] = (16256u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[22] - ctx.fpr[12];
    ctx.gpr[31] = (0x089B5DC8u);
    ctx.fpr[26] = ctx.fpr[12] + ctx.fpr[22];
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089B5DC8u) goto L_089B5DC8;
    return;
L_089B5DC8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28896)));
    ctx.fpr[14] = ctx.fpr[26] - ctx.fpr[24];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[28] = ctx.fpr[22] - ctx.fpr[13];
    ctx.fpr[30] = ctx.fpr[13] + ctx.fpr[22];
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[14];
    ctx.gpr[31] = (0x089B5DECu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089B5DECu) goto L_089B5DEC;
    return;
L_089B5DEC:
    ctx.fpr[12] = ctx.fpr[30] - ctx.fpr[28];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28896)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[24] = ctx.fpr[22] - ctx.fpr[15];
    ctx.fpr[26] = ctx.fpr[15] + ctx.fpr[22];
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[12];
    ctx.gpr[31] = (0x089B5E10u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089B5E10u) goto L_089B5E10;
    return;
L_089B5E10:
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[24];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.gpr[31] = (0x089B5E28u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 244u, 0x08A4D04Cu>(ctx, &aot_mem) && ctx.pc == 0x089B5E28u) goto L_089B5E28;
    return;
L_089B5E28:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089B5E34u);
    ctx.gpr[4] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 201u, 0x08930F64u>(ctx, &aot_mem) && ctx.pc == 0x089B5E34u) goto L_089B5E34;
    return;
L_089B5E34:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B5E40u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 174u, 0x0890CF70u>(ctx, &aot_mem) && ctx.pc == 0x089B5E40u) goto L_089B5E40;
    return;
L_089B5E40:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089B5E4Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 173u, 0x0890CF68u>(ctx, &aot_mem) && ctx.pc == 0x089B5E4Cu) goto L_089B5E4C;
    return;
L_089B5E4C:
    ctx.gpr[4] = (ctx.gpr[18] << 6u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089B5E64u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 278u, 0x08A1D848u>(ctx, &aot_mem) && ctx.pc == 0x089B5E64u) goto L_089B5E64;
    return;
L_089B5E64:
    ctx.gpr[19] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-28892)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[24] = ctx.fpr[22] - ctx.fpr[12];
    ctx.gpr[31] = (0x089B5E7Cu);
    ctx.fpr[26] = ctx.fpr[12] + ctx.fpr[22];
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089B5E7Cu) goto L_089B5E7C;
    return;
L_089B5E7C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-28892)));
    ctx.fpr[14] = ctx.fpr[26] - ctx.fpr[24];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[28] = ctx.fpr[22] - ctx.fpr[13];
    ctx.fpr[30] = ctx.fpr[13] + ctx.fpr[22];
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[14];
    ctx.gpr[31] = (0x089B5EA0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089B5EA0u) goto L_089B5EA0;
    return;
L_089B5EA0:
    ctx.fpr[12] = ctx.fpr[30] - ctx.fpr[28];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-28892)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[24] = ctx.fpr[22] - ctx.fpr[15];
    ctx.fpr[26] = ctx.fpr[15] + ctx.fpr[22];
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[12];
    ctx.gpr[31] = (0x089B5EC4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089B5EC4u) goto L_089B5EC4;
    return;
L_089B5EC4:
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[24];
    ctx.gpr[4] = (0u | 15u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.gpr[31] = (0x089B5EDCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 201u, 0x08930F64u>(ctx, &aot_mem) && ctx.pc == 0x089B5EDCu) goto L_089B5EDC;
    return;
L_089B5EDC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B5EE8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 174u, 0x0890CF70u>(ctx, &aot_mem) && ctx.pc == 0x089B5EE8u) goto L_089B5EE8;
    return;
L_089B5EE8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089B5EF4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 173u, 0x0890CF68u>(ctx, &aot_mem) && ctx.pc == 0x089B5EF4u) goto L_089B5EF4;
    return;
L_089B5EF4:
    ctx.gpr[4] = (ctx.gpr[19] << 6u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089B5F08u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 278u, 0x08A1D848u>(ctx, &aot_mem) && ctx.pc == 0x089B5F08u) goto L_089B5F08;
    return;
L_089B5F08:
    ctx.gpr[31] = (0x089B5F10u);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 201u, 0x08930F64u>(ctx, &aot_mem) && ctx.pc == 0x089B5F10u) goto L_089B5F10;
    return;
L_089B5F10:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B5F1Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 174u, 0x0890CF70u>(ctx, &aot_mem) && ctx.pc == 0x089B5F1Cu) goto L_089B5F1C;
    return;
L_089B5F1C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089B5F28u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 173u, 0x0890CF68u>(ctx, &aot_mem) && ctx.pc == 0x089B5F28u) goto L_089B5F28;
    return;
L_089B5F28:
    ctx.gpr[4] = (ctx.gpr[19] << 6u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089B5F3Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 278u, 0x08A1D848u>(ctx, &aot_mem) && ctx.pc == 0x089B5F3Cu) goto L_089B5F3C;
    return;
L_089B5F3C:
    ctx.gpr[31] = (0x089B5F44u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 201u, 0x08930F64u>(ctx, &aot_mem) && ctx.pc == 0x089B5F44u) goto L_089B5F44;
    return;
L_089B5F44:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B5F50u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 174u, 0x0890CF70u>(ctx, &aot_mem) && ctx.pc == 0x089B5F50u) goto L_089B5F50;
    return;
L_089B5F50:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089B5F5Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 173u, 0x0890CF68u>(ctx, &aot_mem) && ctx.pc == 0x089B5F5Cu) goto L_089B5F5C;
    return;
L_089B5F5C:
    ctx.gpr[4] = (ctx.gpr[19] << 6u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089B5F70u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 278u, 0x08A1D848u>(ctx, &aot_mem) && ctx.pc == 0x089B5F70u) goto L_089B5F70;
    return;
L_089B5F70:
    ctx.gpr[19] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-28888)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[24] = ctx.fpr[22] - ctx.fpr[12];
    ctx.gpr[31] = (0x089B5F88u);
    ctx.fpr[26] = ctx.fpr[12] + ctx.fpr[22];
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089B5F88u) goto L_089B5F88;
    return;
L_089B5F88:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-28888)));
    ctx.fpr[14] = ctx.fpr[26] - ctx.fpr[24];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[28] = ctx.fpr[22] - ctx.fpr[13];
    ctx.fpr[30] = ctx.fpr[13] + ctx.fpr[22];
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[14];
    ctx.gpr[31] = (0x089B5FACu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089B5FACu) goto L_089B5FAC;
    return;
L_089B5FAC:
    ctx.fpr[12] = ctx.fpr[30] - ctx.fpr[28];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-28888)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[24] = ctx.fpr[22] - ctx.fpr[15];
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[12];
    ctx.fpr[22] = ctx.fpr[15] + ctx.fpr[22];
    ctx.gpr[31] = (0x089B5FD0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089B5FD0u) goto L_089B5FD0;
    return;
L_089B5FD0:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[24];
    ctx.gpr[4] = (0u | 3u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.gpr[31] = (0x089B5FE8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 201u, 0x08930F64u>(ctx, &aot_mem) && ctx.pc == 0x089B5FE8u) goto L_089B5FE8;
    return;
L_089B5FE8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B5FF4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 174u, 0x0890CF70u>(ctx, &aot_mem) && ctx.pc == 0x089B5FF4u) goto L_089B5FF4;
    return;
L_089B5FF4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089B6000u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 173u, 0x0890CF68u>(ctx, &aot_mem) && ctx.pc == 0x089B6000u) goto L_089B6000;
    return;
L_089B6000:
    ctx.gpr[4] = (ctx.gpr[19] << 6u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089B6014u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 278u, 0x08A1D848u>(ctx, &aot_mem) && ctx.pc == 0x089B6014u) goto L_089B6014;
    return;
L_089B6014:
    ctx.gpr[31] = (0x089B601Cu);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 201u, 0x08930F64u>(ctx, &aot_mem) && ctx.pc == 0x089B601Cu) goto L_089B601C;
    return;
L_089B601C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B6028u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 174u, 0x0890CF70u>(ctx, &aot_mem) && ctx.pc == 0x089B6028u) goto L_089B6028;
    return;
L_089B6028:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B6034u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 173u, 0x0890CF68u>(ctx, &aot_mem) && ctx.pc == 0x089B6034u) goto L_089B6034;
    return;
L_089B6034:
    ctx.gpr[4] = (ctx.gpr[17] << 6u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089B6048u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 278u, 0x08A1D848u>(ctx, &aot_mem) && ctx.pc == 0x089B6048u) goto L_089B6048;
    return;
L_089B6048:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-28869)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B60AC;
      }
      goto L_089B6058;
    }
L_089B6058:
    ctx.gpr[31] = (0x089B6060u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 244u, 0x08A4D04Cu>(ctx, &aot_mem) && ctx.pc == 0x089B6060u) goto L_089B6060;
    return;
L_089B6060:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089B606Cu);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 201u, 0x08930F64u>(ctx, &aot_mem) && ctx.pc == 0x089B606Cu) goto L_089B606C;
    return;
L_089B606C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B6078u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 174u, 0x0890CF70u>(ctx, &aot_mem) && ctx.pc == 0x089B6078u) goto L_089B6078;
    return;
L_089B6078:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B6084u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 173u, 0x0890CF68u>(ctx, &aot_mem) && ctx.pc == 0x089B6084u) goto L_089B6084;
    return;
L_089B6084:
    ctx.gpr[5] = (16416u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] << 6u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089B60ACu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 278u, 0x08A1D848u>(ctx, &aot_mem) && ctx.pc == 0x089B60ACu) goto L_089B60AC;
    return;
L_089B60AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6120;
      }
      goto L_089B60C0;
    }
L_089B60C0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1826))))));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B6120;
      }
      goto L_089B60D0;
    }
L_089B60D0:
    ctx.gpr[31] = (0x089B60D8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 244u, 0x08A4D04Cu>(ctx, &aot_mem) && ctx.pc == 0x089B60D8u) goto L_089B60D8;
    return;
L_089B60D8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089B60E4u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 201u, 0x08930F64u>(ctx, &aot_mem) && ctx.pc == 0x089B60E4u) goto L_089B60E4;
    return;
L_089B60E4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B60F0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 174u, 0x0890CF70u>(ctx, &aot_mem) && ctx.pc == 0x089B60F0u) goto L_089B60F0;
    return;
L_089B60F0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B60FCu);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 173u, 0x0890CF68u>(ctx, &aot_mem) && ctx.pc == 0x089B60FCu) goto L_089B60FC;
    return;
L_089B60FC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[17] << 6u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.gpr[31] = (0x089B6120u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 278u, 0x08A1D848u>(ctx, &aot_mem) && ctx.pc == 0x089B6120u) goto L_089B6120;
    return;
L_089B6120:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6478;
      }
      goto L_089B6134;
    }
L_089B6134:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6478;
      }
      goto L_089B6148;
    }
L_089B6148:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1826))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089B6478;
      }
      goto L_089B6158;
    }
L_089B6158:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B6478;
      }
      goto L_089B616C;
    }
L_089B616C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B6194u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 244u, 0x08A4D04Cu>(ctx, &aot_mem) && ctx.pc == 0x089B6194u) goto L_089B6194;
    return;
L_089B6194:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1826))))));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(668)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089B61B4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 174u, 0x0890CF70u>(ctx, &aot_mem) && ctx.pc == 0x089B61B4u) goto L_089B61B4;
    return;
L_089B61B4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089B61C0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 173u, 0x0890CF68u>(ctx, &aot_mem) && ctx.pc == 0x089B61C0u) goto L_089B61C0;
    return;
L_089B61C0:
    ctx.gpr[7] = (ctx.gpr[18] << 6u);
    ctx.gpr[7] = (ctx.gpr[2] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B61D8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 643u, 0x088B7F1Cu>(ctx, &aot_mem) && ctx.pc == 0x089B61D8u) goto L_089B61D8;
    return;
L_089B61D8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1826))))));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_089B640C;
      }
      goto L_089B61EC;
    }
L_089B61EC:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-17184)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B6204:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B642C;
      }
      goto L_089B6240;
    }
L_089B6240:
    ctx.gpr[4] = (48419u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (15651u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B642C;
      }
      goto L_089B62B4;
    }
L_089B62B4:
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B642C;
      }
      goto L_089B631C;
    }
L_089B631C:
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (15651u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B642C;
      }
      goto L_089B6394;
    }
L_089B6394:
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (15651u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B642C;
      }
      goto L_089B640C;
    }
L_089B640C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_089B642C;
L_089B642C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6478;
      }
      goto L_089B643C;
    }
L_089B643C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x089B6464u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x089B6464u) goto L_089B6464;
    return;
L_089B6464:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B643C;
      }
      goto L_089B6478;
    }
L_089B6478:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7808)));
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_089B67C4;
      }
      goto L_089B649C;
    }
L_089B649C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(348)));
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B67C4;
      }
      goto L_089B64BC;
    }
L_089B64BC:
    ctx.gpr[4] = (16840u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
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
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_089B6510;
    }
    goto L_089B6510;
L_089B6510:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B67C4;
      }
      goto L_089B6518;
    }
L_089B6518:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[31] = (0x089B6540u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 171u, 0x089D575Cu>(ctx, &aot_mem) && ctx.pc == 0x089B6540u) goto L_089B6540;
    return;
L_089B6540:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
        goto L_089B6570;
    }
    goto L_089B6564;
L_089B6564:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_089B6570;
      }
      goto L_089B6570;
    }
L_089B6570:
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B65CC;
      }
      goto L_089B658C;
    }
L_089B658C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
        goto L_089B65B0;
    }
    goto L_089B65A4;
L_089B65A4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_089B65B0;
      }
      goto L_089B65B0;
    }
L_089B65B0:
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B65D4;
      }
      goto L_089B65CC;
    }
L_089B65CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089B6668;
      }
      goto L_089B65D4;
    }
L_089B65D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B6624;
      }
      goto L_089B65E4;
    }
L_089B65E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B6624;
      }
      goto L_089B65F4;
    }
L_089B65F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B6624;
      }
      goto L_089B6604;
    }
L_089B6604:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B6624;
      }
      goto L_089B6614;
    }
L_089B6614:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B662C;
      }
      goto L_089B6624;
    }
L_089B6624:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089B6668;
      }
      goto L_089B662C;
    }
L_089B662C:
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089B6640u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 418u, 0x088D5DA8u>(ctx, &aot_mem) && ctx.pc == 0x089B6640u) goto L_089B6640;
    return;
L_089B6640:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B6650;
      }
      goto L_089B6648;
    }
L_089B6648:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089B6668;
      }
      goto L_089B6650;
    }
L_089B6650:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B665Cu);
    ctx.gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089B665Cu) goto L_089B665C;
    return;
L_089B665C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6668;
      }
      goto L_089B6664;
    }
L_089B6664:
    ctx.gpr[18] = (0u | 0u);
    goto L_089B6668;
L_089B6668:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(48))))));
      if (branch_taken) {
          goto L_089B67C4;
      }
      goto L_089B6674;
    }
L_089B6674:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B67C4;
      }
      goto L_089B6684;
    }
L_089B6684:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[19] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (0u | 6u);
      if (branch_taken) {
          goto L_089B66B4;
      }
      goto L_089B66A0;
    }
L_089B66A0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B66BC;
      }
      goto L_089B66AC;
    }
L_089B66AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B67B4;
      }
      goto L_089B66B4;
    }
L_089B66B4:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089B66AC;
      }
      goto L_089B66BC;
    }
L_089B66BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(48);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15897u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x089B673Cu);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089B673Cu) goto L_089B673C;
    return;
L_089B673C:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089B675Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089B675Cu) goto L_089B675C;
    return;
L_089B675C:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x089B6788u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089B6788u) goto L_089B6788;
    return;
L_089B6788:
    ctx.gpr[10] = (ctx.gpr[2] & 65535u);
    ctx.gpr[10] = (ctx.gpr[10] & 1u);
    ctx.gpr[4] = (0u | 38u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x089B67B4u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x089B67B4u) goto L_089B67B4;
    return;
L_089B67B4:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B6684;
      }
      goto L_089B67C4;
    }
L_089B67C4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(540)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(552)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(556)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(568)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(580)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B67FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-336));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089B6940;
      }
      goto L_089B6824;
    }
L_089B6824:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6940;
      }
      goto L_089B6830;
    }
L_089B6830:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 60u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B6940;
      }
      goto L_089B6840;
    }
L_089B6840:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B6940;
      }
      goto L_089B6850;
    }
L_089B6850:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[17] = (0u | 5u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089B6940;
      }
      goto L_089B6864;
    }
L_089B6864:
    ctx.gpr[31] = (0x089B686Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089B686Cu) goto L_089B686C;
    return;
L_089B686C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B6940;
      }
      goto L_089B6874;
    }
L_089B6874:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B68D8;
      }
      goto L_089B6888;
    }
L_089B6888:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(836)));
    ctx.gpr[6] = (0u | 1u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
        goto L_089B68F0;
    }
    goto L_089B68D0;
L_089B68D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
      if (branch_taken) {
          goto L_089B68E0;
      }
      goto L_089B68D8;
    }
L_089B68D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6CE8;
      }
      goto L_089B68E0;
    }
L_089B68E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(836)));
    if (ctx.gpr[5] != ctx.gpr[17]) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
        goto L_089B6918;
    }
    goto L_089B68EC;
L_089B68EC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    goto L_089B68F0;
L_089B68F0:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B6940;
      }
      goto L_089B6910;
    }
L_089B6910:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6CE8;
      }
      goto L_089B6918;
    }
L_089B6918:
    ctx.gpr[4] = (16840u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B6940;
      }
      goto L_089B6938;
    }
L_089B6938:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6CE8;
      }
      goto L_089B6940;
    }
L_089B6940:
    ctx.gpr[31] = (0x089B6948u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 819u, 0x08A2FA78u>(ctx, &aot_mem) && ctx.pc == 0x089B6948u) goto L_089B6948;
    return;
L_089B6948:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(740)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6CE8;
      }
      goto L_089B6954;
    }
L_089B6954:
    ctx.gpr[31] = (0x089B695Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 244u, 0x08A4D04Cu>(ctx, &aot_mem) && ctx.pc == 0x089B695Cu) goto L_089B695C;
    return;
L_089B695C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(692)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x089B6970u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 174u, 0x0890CF70u>(ctx, &aot_mem) && ctx.pc == 0x089B6970u) goto L_089B6970;
    return;
L_089B6970:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B697Cu);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 173u, 0x0890CF68u>(ctx, &aot_mem) && ctx.pc == 0x089B697Cu) goto L_089B697C;
    return;
L_089B697C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(740)));
    ctx.gpr[18] = (ctx.gpr[17] << 6u);
    ctx.gpr[18] = (ctx.gpr[2] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(40), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(44), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(56), ctx.gpr[8]);
    ctx.gpr[31] = (0x089B6A14u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 115u, 0x08A5CFD0u>(ctx, &aot_mem) && ctx.pc == 0x089B6A14u) goto L_089B6A14;
    return;
L_089B6A14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(740)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6A3C;
      }
      goto L_089B6A24;
    }
L_089B6A24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(740)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089B6A34u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B6A34u) goto L_089B6A34;
    return;
L_089B6A34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6A44;
      }
      goto L_089B6A3C;
    }
L_089B6A3C:
    ctx.gpr[31] = (0x089B6A44u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(740)));
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 191u, 0x08AC9104u>(ctx, &aot_mem) && ctx.pc == 0x089B6A44u) goto L_089B6A44;
    return;
L_089B6A44:
    ctx.gpr[31] = (0x089B6A4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089B6A4Cu) goto L_089B6A4C;
    return;
L_089B6A4C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6CE8;
      }
      goto L_089B6A54;
    }
L_089B6A54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3196)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6CE8;
      }
      goto L_089B6A60;
    }
L_089B6A60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3196)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3200)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3204)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3204), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_089B6B34;
      }
      goto L_089B6B28;
    }
L_089B6B28:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3204)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3204), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089B6B34;
L_089B6B34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B6B60;
      }
      goto L_089B6B48;
    }
L_089B6B48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
        goto L_089B6B64;
    }
    goto L_089B6B58;
L_089B6B58:
    ctx.gpr[31] = (0x089B6B60u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089B6B60u) goto L_089B6B60;
    return;
L_089B6B60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    goto L_089B6B64;
L_089B6B64:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[4]);
    ctx.gpr[31] = (0x089B6B78u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 508u, 0x08A0651Cu>(ctx, &aot_mem) && ctx.pc == 0x089B6B78u) goto L_089B6B78;
    return;
L_089B6B78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3204)));
    ctx.gpr[31] = (0x089B6B98u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 486u, 0x08A05F84u>(ctx, &aot_mem) && ctx.pc == 0x089B6B98u) goto L_089B6B98;
    return;
L_089B6B98:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[5] = (48544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6784)));
    ctx.gpr[5] = (ctx.gpr[5] | 1798u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6784));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (16132u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] | 55010u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (15512u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 8384u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089B6BE4u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 516u, 0x08A06698u>(ctx, &aot_mem) && ctx.pc == 0x089B6BE4u) goto L_089B6BE4;
    return;
L_089B6BE4:
    ctx.gpr[4] = (16212u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14680u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (47747u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15975u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 27787u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x089B6C1Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x089B6C1Cu) goto L_089B6C1C;
    return;
L_089B6C1C:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B6C30u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 504u, 0x08A0649Cu>(ctx, &aot_mem) && ctx.pc == 0x089B6C30u) goto L_089B6C30;
    return;
L_089B6C30:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B6C3Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 519u, 0x08A0695Cu>(ctx, &aot_mem) && ctx.pc == 0x089B6C3Cu) goto L_089B6C3C;
    return;
L_089B6C3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6C60;
      }
      goto L_089B6C4C;
    }
L_089B6C4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6C60;
      }
      goto L_089B6C58;
    }
L_089B6C58:
    ctx.gpr[31] = (0x089B6C60u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089B6C60u) goto L_089B6C60;
    return;
L_089B6C60:
    ctx.gpr[31] = (0x089B6C68u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x089B6C68u) goto L_089B6C68;
    return;
L_089B6C68:
    ctx.gpr[31] = (0x089B6C70u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 115u, 0x08A5CFD0u>(ctx, &aot_mem) && ctx.pc == 0x089B6C70u) goto L_089B6C70;
    return;
L_089B6C70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3196)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6C98;
      }
      goto L_089B6C80;
    }
L_089B6C80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3196)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089B6C90u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B6C90u) goto L_089B6C90;
    return;
L_089B6C90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6CA0;
      }
      goto L_089B6C98;
    }
L_089B6C98:
    ctx.gpr[31] = (0x089B6CA0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3196)));
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 191u, 0x08AC9104u>(ctx, &aot_mem) && ctx.pc == 0x089B6CA0u) goto L_089B6CA0;
    return;
L_089B6CA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
        goto L_089B6CC8;
    }
    goto L_089B6CB0;
L_089B6CB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
        goto L_089B6CC8;
    }
    goto L_089B6CBC;
L_089B6CBC:
    ctx.gpr[31] = (0x089B6CC4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089B6CC4u) goto L_089B6CC4;
    return;
L_089B6CC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    goto L_089B6CC8;
L_089B6CC8:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6CE8;
      }
      goto L_089B6CD4;
    }
L_089B6CD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6CE8;
      }
      goto L_089B6CE0;
    }
L_089B6CE0:
    ctx.gpr[31] = (0x089B6CE8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089B6CE8u) goto L_089B6CE8;
    return;
L_089B6CE8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B6D08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-400));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-513));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[21]);
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(324), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[5] = (ctx.gpr[5] | 512u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(832), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(836), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), ctx.gpr[22]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[22] = (0u | 16u);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (32u << 16u);
      if (branch_taken) {
          goto L_089B6DCC;
      }
      goto L_089B6DA0;
    }
L_089B6DA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B6DCC;
      }
      goto L_089B6DB4;
    }
L_089B6DB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089B6DCCu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B6DCCu) goto L_089B6DCC;
    return;
L_089B6DCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089B6E0C;
      }
      goto L_089B6DD8;
    }
L_089B6DD8:
    ctx.gpr[31] = (0x089B6DE0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 535u, 0x08886BB0u>(ctx, &aot_mem) && ctx.pc == 0x089B6DE0u) goto L_089B6DE0;
    return;
L_089B6DE0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6E68;
      }
      goto L_089B6DEC;
    }
L_089B6DEC:
    ctx.gpr[31] = (0x089B6DF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089B6DF4u) goto L_089B6DF4;
    return;
L_089B6DF4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B6E68;
      }
      goto L_089B6DFC;
    }
L_089B6DFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] | 128u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B6E68;
      }
      goto L_089B6E0C;
    }
L_089B6E0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 38u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B6E68;
      }
      goto L_089B6E1C;
    }
L_089B6E1C:
    ctx.gpr[6] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (16128u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x089B6E3Cu);
    ctx.gpr[5] = (0u | 37u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 144u, 0x089B07D0u>(ctx, &aot_mem) && ctx.pc == 0x089B6E3Cu) goto L_089B6E3C;
    return;
L_089B6E3C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6E68;
      }
      goto L_089B6E48;
    }
L_089B6E48:
    ctx.gpr[31] = (0x089B6E50u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089B6E50u) goto L_089B6E50;
    return;
L_089B6E50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6E68;
      }
      goto L_089B6E58;
    }
L_089B6E58:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089B6E68u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 119u, 0x088A8638u>(ctx, &aot_mem) && ctx.pc == 0x089B6E68u) goto L_089B6E68;
    return;
L_089B6E68:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1336), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6FBC;
      }
      goto L_089B6E78;
    }
L_089B6E78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6E9C;
      }
      goto L_089B6E88;
    }
L_089B6E88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B6FBC;
      }
      goto L_089B6E9C;
    }
L_089B6E9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[23] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-7724), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[30] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (16076u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x089B6F14u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 65u, 0x088C83A8u>(ctx, &aot_mem) && ctx.pc == 0x089B6F14u) goto L_089B6F14;
    return;
L_089B6F14:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B6FAC;
      }
      goto L_089B6F1C;
    }
L_089B6F1C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x089B6F6Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 65u, 0x088C83A8u>(ctx, &aot_mem) && ctx.pc == 0x089B6F6Cu) goto L_089B6F6C;
    return;
L_089B6F6C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B6FAC;
      }
      goto L_089B6F74;
    }
L_089B6F74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089B6FA4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 328u, 0x088C5AA4u>(ctx, &aot_mem) && ctx.pc == 0x089B6FA4u) goto L_089B6FA4;
    return;
L_089B6FA4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B6FB8;
      }
      goto L_089B6FAC;
    }
L_089B6FAC:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-7724), 0u);
    ctx.gpr[31] = (0x089B6FB8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 620u, 0x0889B67Cu>(ctx, &aot_mem) && ctx.pc == 0x089B6FB8u) goto L_089B6FB8;
    return;
L_089B6FB8:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-7724), 0u);
    goto L_089B6FBC;
L_089B6FBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 60u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B7448;
      }
      goto L_089B6FCC;
    }
L_089B6FCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B7030;
      }
      goto L_089B6FDC;
    }
L_089B6FDC:
    ctx.gpr[31] = (0x089B6FE4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 748u, 0x0899FCA0u>(ctx, &aot_mem) && ctx.pc == 0x089B6FE4u) goto L_089B6FE4;
    return;
L_089B6FE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2084)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B7038;
      }
      goto L_089B6FF4;
    }
L_089B6FF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7038;
      }
      goto L_089B7000;
    }
L_089B7000:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089B7038;
      }
      goto L_089B7010;
    }
L_089B7010:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 111u);
    ctx.gpr[31] = (0x089B7028u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x089B7028u) goto L_089B7028;
    return;
L_089B7028:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7038;
      }
      goto L_089B7030;
    }
L_089B7030:
    ctx.gpr[31] = (0x089B7038u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x089B7038u) goto L_089B7038;
    return;
L_089B7038:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7154;
      }
      goto L_089B7048;
    }
L_089B7048:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7154;
      }
      goto L_089B7054;
    }
L_089B7054:
    ctx.gpr[31] = (0x089B705Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 837u, 0x089A380Cu>(ctx, &aot_mem) && ctx.pc == 0x089B705Cu) goto L_089B705C;
    return;
L_089B705C:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
        goto L_089B7078;
    }
    goto L_089B7064;
L_089B7064:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B7154;
      }
      goto L_089B7074;
    }
L_089B7074:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    goto L_089B7078;
L_089B7078:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B70D4u);
    ctx.gpr[6] = (0u | 12000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 353u, 0x089A18ACu>(ctx, &aot_mem) && ctx.pc == 0x089B70D4u) goto L_089B70D4;
    return;
L_089B70D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[31] = (0x089B70ECu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089B70ECu) goto L_089B70EC;
    return;
L_089B70EC:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (0u | 5u);
      if (branch_taken) {
          goto L_089B7110;
      }
      goto L_089B70FC;
    }
L_089B70FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 71 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B7130;
      }
      goto L_089B7110;
    }
L_089B7110:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B711Cu);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x089B711Cu) goto L_089B711C;
    return;
L_089B711C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B7128u);
    ctx.gpr[5] = (0u | 120u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B7128u) goto L_089B7128;
    return;
L_089B7128:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_089B714C;
      }
      goto L_089B7130;
    }
L_089B7130:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B713Cu);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x089B713Cu) goto L_089B713C;
    return;
L_089B713C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B7148u);
    ctx.gpr[5] = (0u | 143u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B7148u) goto L_089B7148;
    return;
L_089B7148:
    ctx.gpr[17] = (0u | 1u);
    goto L_089B714C;
L_089B714C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), ctx.gpr[21]);
      if (branch_taken) {
          goto L_089B74A0;
      }
      goto L_089B7154;
    }
L_089B7154:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B71DC;
      }
      goto L_089B7164;
    }
L_089B7164:
    ctx.gpr[31] = (0x089B716Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089B716Cu) goto L_089B716C;
    return;
L_089B716C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28716)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28720)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089B7184u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x089B7184u) goto L_089B7184;
    return;
L_089B7184:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x089B71A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 270u, 0x089A13B4u>(ctx, &aot_mem) && ctx.pc == 0x089B71A8u) goto L_089B71A8;
    return;
L_089B71A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B71D4;
      }
      goto L_089B71C8;
    }
L_089B71C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B71D4u);
    ctx.gpr[5] = (0u | 30000u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 530u, 0x08886B78u>(ctx, &aot_mem) && ctx.pc == 0x089B71D4u) goto L_089B71D4;
    return;
L_089B71D4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), 0u);
      if (branch_taken) {
          goto L_089B74A0;
      }
      goto L_089B71DC;
    }
L_089B71DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (64u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B73C0;
      }
      goto L_089B71F0;
    }
L_089B71F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (65472u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[31] = (0x089B7218u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 837u, 0x089A380Cu>(ctx, &aot_mem) && ctx.pc == 0x089B7218u) goto L_089B7218;
    return;
L_089B7218:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B728C;
      }
      goto L_089B7220;
    }
L_089B7220:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B728C;
      }
      goto L_089B7230;
    }
L_089B7230:
    ctx.gpr[31] = (0x089B7238u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089B7238u) goto L_089B7238;
    return;
L_089B7238:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
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
    ctx.gpr[4] = (16480u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B728C;
      }
      goto L_089B7280;
    }
L_089B7280:
    ctx.gpr[31] = (0x089B7288u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089B7288u) goto L_089B7288;
    return;
L_089B7288:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(600), ctx.gpr[2]);
    goto L_089B728C;
L_089B728C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B72C0;
      }
      goto L_089B7298;
    }
L_089B7298:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B7390;
      }
      goto L_089B72A8;
    }
L_089B72A8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B72B8u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x089B72B8u) goto L_089B72B8;
    return;
L_089B72B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7390;
      }
      goto L_089B72C0;
    }
L_089B72C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
        goto L_089B7324;
    }
    goto L_089B72D0;
L_089B72D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    if (ctx.gpr[4] == ctx.gpr[16]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
        goto L_089B7324;
    }
    goto L_089B72E0;
L_089B72E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x089B72ECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089B72ECu) goto L_089B72EC;
    return;
L_089B72EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7304;
      }
      goto L_089B72F4;
    }
L_089B72F4:
    ctx.gpr[31] = (0x089B72FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 30u, 0x089581F0u>(ctx, &aot_mem) && ctx.pc == 0x089B72FCu) goto L_089B72FC;
    return;
L_089B72FC:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
        goto L_089B7324;
    }
    goto L_089B7304;
L_089B7304:
    ctx.gpr[31] = (0x089B730Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 471u, 0x088868D0u>(ctx, &aot_mem) && ctx.pc == 0x089B730Cu) goto L_089B730C;
    return;
L_089B730C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B731Cu);
    ctx.gpr[5] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x089B731Cu) goto L_089B731C;
    return;
L_089B731C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7370;
      }
      goto L_089B7324;
    }
L_089B7324:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(196));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B7370u);
    ctx.gpr[6] = (0u | 14000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 353u, 0x089A18ACu>(ctx, &aot_mem) && ctx.pc == 0x089B7370u) goto L_089B7370;
    return;
L_089B7370:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B7390u);
    ctx.gpr[5] = (0u | 143u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B7390u) goto L_089B7390;
    return;
L_089B7390:
    ctx.gpr[4] = (0u | 1500u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 15u);
    ctx.gpr[31] = (0x089B73ACu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 537u, 0x089BA35Cu>(ctx, &aot_mem) && ctx.pc == 0x089B73ACu) goto L_089B73AC;
    return;
L_089B73AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B73B8u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x089B73B8u) goto L_089B73B8;
    return;
L_089B73B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_089B74A0;
      }
      goto L_089B73C0;
    }
L_089B73C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B74A0;
      }
      goto L_089B73CC;
    }
L_089B73CC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B74A0;
      }
      goto L_089B73DC;
    }
L_089B73DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B74A0;
      }
      goto L_089B73EC;
    }
L_089B73EC:
    ctx.gpr[31] = (0x089B73F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089B73F4u) goto L_089B73F4;
    return;
L_089B73F4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B74A0;
      }
      goto L_089B73FC;
    }
L_089B73FC:
    ctx.gpr[31] = (0x089B7404u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089B7404u) goto L_089B7404;
    return;
L_089B7404:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28716)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28720)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089B741Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x089B741Cu) goto L_089B741C;
    return;
L_089B741C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x089B7440u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 270u, 0x089A13B4u>(ctx, &aot_mem) && ctx.pc == 0x089B7440u) goto L_089B7440;
    return;
L_089B7440:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B74A0;
      }
      goto L_089B7448;
    }
L_089B7448:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B74A0;
      }
      goto L_089B7458;
    }
L_089B7458:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089B749C;
      }
      goto L_089B7468;
    }
L_089B7468:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7490;
      }
      goto L_089B7474;
    }
L_089B7474:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_089B7490;
    }
    goto L_089B7480;
L_089B7480:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x089B748Cu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089B748Cu) goto L_089B748C;
    return;
L_089B748C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_089B7490;
L_089B7490:
    ctx.gpr[31] = (0x089B7498u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x089B7498u) goto L_089B7498;
    return;
L_089B7498:
    ctx.gpr[4] = (0u | 1u);
    goto L_089B749C;
L_089B749C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    goto L_089B74A0;
L_089B74A0:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B74B4;
      }
      goto L_089B74A8;
    }
L_089B74A8:
    ctx.gpr[4] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089B74B4;
L_089B74B4:
    ctx.gpr[31] = (0x089B74BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A24D8u>(ctx, &aot_mem) && ctx.pc == 0x089B74BCu) goto L_089B74BC;
    return;
L_089B74BC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7848;
      }
      goto L_089B74E8;
    }
L_089B74E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_089B75E4;
      }
      goto L_089B74F8;
    }
L_089B74F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B75E4;
      }
      goto L_089B7508;
    }
L_089B7508:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x089B7514u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089B7514u) goto L_089B7514;
    return;
L_089B7514:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B75E4;
      }
      goto L_089B751C;
    }
L_089B751C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089B75E4;
      }
      goto L_089B752C;
    }
L_089B752C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(216), 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(220), 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(228)));
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
        goto L_089B7594;
    }
    goto L_089B7564;
L_089B7564:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[7] = (ctx.gpr[6] << 7u);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(228)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(1916)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(100));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(1916), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    goto L_089B7594;
L_089B7594:
    ctx.gpr[7] = (ctx.gpr[6] << 7u);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(188)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(228), 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-100));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 0 ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (0u | 0u);
        goto L_089B75C4;
    }
    goto L_089B75C4;
L_089B75C4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[7] = (ctx.gpr[4] << 7u);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), ctx.gpr[6]);
    goto L_089B75E4;
L_089B75E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7648;
      }
      goto L_089B75F0;
    }
L_089B75F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B7648;
      }
      goto L_089B7604;
    }
L_089B7604:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    ctx.gpr[5] = (0u | 15u);
      if (branch_taken) {
          goto L_089B7638;
      }
      goto L_089B7610;
    }
L_089B7610:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 12u);
      if (branch_taken) {
          goto L_089B7630;
      }
      goto L_089B7618;
    }
L_089B7618:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 11u);
      if (branch_taken) {
          goto L_089B7640;
      }
      goto L_089B7620;
    }
L_089B7620:
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
        goto L_089B7690;
    }
    goto L_089B7628;
L_089B7628:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 5u);
      if (branch_taken) {
          goto L_089B768C;
      }
      goto L_089B7630;
    }
L_089B7630:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 5u);
      if (branch_taken) {
          goto L_089B768C;
      }
      goto L_089B7638;
    }
L_089B7638:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 10u);
      if (branch_taken) {
          goto L_089B768C;
      }
      goto L_089B7640;
    }
L_089B7640:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 10u);
      if (branch_taken) {
          goto L_089B768C;
      }
      goto L_089B7648;
    }
L_089B7648:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    ctx.gpr[5] = (0u | 15u);
      if (branch_taken) {
          goto L_089B767C;
      }
      goto L_089B7654;
    }
L_089B7654:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 12u);
      if (branch_taken) {
          goto L_089B7674;
      }
      goto L_089B765C;
    }
L_089B765C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 11u);
      if (branch_taken) {
          goto L_089B7684;
      }
      goto L_089B7664;
    }
L_089B7664:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B768C;
      }
      goto L_089B766C;
    }
L_089B766C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 4u);
      if (branch_taken) {
          goto L_089B768C;
      }
      goto L_089B7674;
    }
L_089B7674:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_089B768C;
      }
      goto L_089B767C;
    }
L_089B767C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 2u);
      if (branch_taken) {
          goto L_089B768C;
      }
      goto L_089B7684;
    }
L_089B7684:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 8u);
      if (branch_taken) {
          goto L_089B768C;
      }
      goto L_089B768C;
    }
L_089B768C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    goto L_089B7690;
L_089B7690:
    ctx.gpr[5] = (~(ctx.gpr[20] | 0u));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(543)));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(543), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089B77AC;
      }
      goto L_089B76B0;
    }
L_089B76B0:
    ctx.gpr[31] = (0x089B76B8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 734u, 0x0889F854u>(ctx, &aot_mem) && ctx.pc == 0x089B76B8u) goto L_089B76B8;
    return;
L_089B76B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (0u | 5u);
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] | 64u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(660)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_089B76F0;
      }
      goto L_089B76E4;
    }
L_089B76E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(660), ctx.gpr[5]);
    goto L_089B76F0;
L_089B76F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B771C;
      }
      goto L_089B7700;
    }
L_089B7700:
    ctx.gpr[31] = (0x089B7708u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 99u, 0x088A078Cu>(ctx, &aot_mem) && ctx.pc == 0x089B7708u) goto L_089B7708;
    return;
L_089B7708:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B771C;
      }
      goto L_089B7710;
    }
L_089B7710:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x089B771Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 93u, 0x088A0730u>(ctx, &aot_mem) && ctx.pc == 0x089B771Cu) goto L_089B771C;
    return;
L_089B771C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_089B77B8;
      }
      goto L_089B772C;
    }
L_089B772C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[31] = (0x089B7740u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x089B7740u) goto L_089B7740;
    return;
L_089B7740:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28628)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28632)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089B7760u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 514u, 0x08AF6790u>(ctx, &aot_mem) && ctx.pc == 0x089B7760u) goto L_089B7760;
    return;
L_089B7760:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089B77B8;
      }
      goto L_089B7768;
    }
L_089B7768:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[31] = (0x089B777Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x089B777Cu) goto L_089B777C;
    return;
L_089B777C:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089B7790u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 514u, 0x08AF6790u>(ctx, &aot_mem) && ctx.pc == 0x089B7790u) goto L_089B7790;
    return;
L_089B7790:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089B77B8;
      }
      goto L_089B7798;
    }
L_089B7798:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1333), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_089B77B8;
      }
      goto L_089B77AC;
    }
L_089B77AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x089B77B8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 667u, 0x0889F3D8u>(ctx, &aot_mem) && ctx.pc == 0x089B77B8u) goto L_089B77B8;
    return;
L_089B77B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7814;
      }
      goto L_089B77CC;
    }
L_089B77CC:
    ctx.gpr[31] = (0x089B77D4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 824u, 0x0889FD00u>(ctx, &aot_mem) && ctx.pc == 0x089B77D4u) goto L_089B77D4;
    return;
L_089B77D4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B7814;
      }
      goto L_089B77DC;
    }
L_089B77DC:
    ctx.gpr[31] = (0x089B77E4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 828u, 0x0889FD44u>(ctx, &aot_mem) && ctx.pc == 0x089B77E4u) goto L_089B77E4;
    return;
L_089B77E4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B7814;
      }
      goto L_089B77EC;
    }
L_089B77EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] | 4096u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B7814;
      }
      goto L_089B7808;
    }
L_089B7808:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B7814u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x089B7814u) goto L_089B7814;
    return;
L_089B7814:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x089B782Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 97u, 0x0893C774u>(ctx, &aot_mem) && ctx.pc == 0x089B782Cu) goto L_089B782C;
    return;
L_089B782C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7848;
      }
      goto L_089B7834;
    }
L_089B7834:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_089B7848;
L_089B7848:
    ctx.gpr[31] = (0x089B7850u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089B7850u) goto L_089B7850;
    return;
L_089B7850:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7878;
      }
      goto L_089B7858;
    }
L_089B7858:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x089B7864u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 503u, 0x08A5EC5Cu>(ctx, &aot_mem) && ctx.pc == 0x089B7864u) goto L_089B7864;
    return;
L_089B7864:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(420)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-241));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(420), ctx.gpr[4]);
    goto L_089B7878;
L_089B7878:
    ctx.gpr[31] = (0x089B7880u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 706u, 0x0899F9BCu>(ctx, &aot_mem) && ctx.pc == 0x089B7880u) goto L_089B7880;
    return;
L_089B7880:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (65520u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B78C8;
      }
      goto L_089B78A0;
    }
L_089B78A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1500u);
    ctx.gpr[6] = (0u | 27u);
    ctx.gpr[31] = (0x089B78B4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 98u, 0x089A0734u>(ctx, &aot_mem) && ctx.pc == 0x089B78B4u) goto L_089B78B4;
    return;
L_089B78B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (65504u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    goto L_089B78C8;
L_089B78C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B78D8;
      }
      goto L_089B78D4;
    }
L_089B78D4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1412), 0u);
    goto L_089B78D8;
L_089B78D8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(856), 0u);
    ctx.gpr[31] = (0x089B78E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089B78E4u) goto L_089B78E4;
    return;
L_089B78E4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B7910;
      }
      goto L_089B78EC;
    }
L_089B78EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B7910;
      }
      goto L_089B78FC;
    }
L_089B78FC:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B7910;
      }
      goto L_089B7904;
    }
L_089B7904:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B7910u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x089B7910u) goto L_089B7910;
    return;
L_089B7910:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (65528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B7960:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B79B8;
      }
      goto L_089B799C;
    }
L_089B799C:
    ctx.gpr[31] = (0x089B79A4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 262u, 0x089A528Cu>(ctx, &aot_mem) && ctx.pc == 0x089B79A4u) goto L_089B79A4;
    return;
L_089B79A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(504)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(504)));
        goto L_089B79C0;
    }
    goto L_089B79B0;
L_089B79B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7AD0;
      }
      goto L_089B79B8;
    }
L_089B79B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 118u, 0x089B85DCu>(ctx, &aot_mem); return;
      }
      goto L_089B79C0;
    }
L_089B79C0:
    ctx.gpr[5] = (0u | 50u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B7AD0;
      }
      goto L_089B79D0;
    }
L_089B79D0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B7AD0;
      }
      goto L_089B79E0;
    }
L_089B79E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B7AD0;
      }
      goto L_089B79F4;
    }
L_089B79F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B7A14;
      }
      goto L_089B7A04;
    }
L_089B7A04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 56u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B7AD0;
      }
      goto L_089B7A14;
    }
L_089B7A14:
    ctx.gpr[31] = (0x089B7A1Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089B7A1Cu) goto L_089B7A1C;
    return;
L_089B7A1C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[16] = (0u | 2u);
      if (branch_taken) {
          goto L_089B7A40;
      }
      goto L_089B7A24;
    }
L_089B7A24:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089B7AC0;
      }
      goto L_089B7A30;
    }
L_089B7A30:
    ctx.gpr[31] = (0x089B7A38u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089B7A38u) goto L_089B7A38;
    return;
L_089B7A38:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B7AC0;
      }
      goto L_089B7A40;
    }
L_089B7A40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089B7A7C;
      }
      goto L_089B7A50;
    }
L_089B7A50:
    ctx.gpr[31] = (0x089B7A58u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 424u, 0x089A1DB8u>(ctx, &aot_mem) && ctx.pc == 0x089B7A58u) goto L_089B7A58;
    return;
L_089B7A58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(152));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089B7A74u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B7A74u) goto L_089B7A74;
    return;
L_089B7A74:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(504), 0u);
      if (branch_taken) {
          goto L_089B7AD0;
      }
      goto L_089B7A7C;
    }
L_089B7A7C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x089B7A8Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089B6D08;
L_089B7A8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7AA8;
      }
      goto L_089B7A98;
    }
L_089B7A98:
    ctx.gpr[31] = (0x089B7AA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 620u, 0x0889B67Cu>(ctx, &aot_mem) && ctx.pc == 0x089B7AA0u) goto L_089B7AA0;
    return;
L_089B7AA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7AB8;
      }
      goto L_089B7AA8;
    }
L_089B7AA8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1332), ctx.gpr[21]);
    ctx.gpr[31] = (0x089B7AB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 620u, 0x0889B67Cu>(ctx, &aot_mem) && ctx.pc == 0x089B7AB4u) goto L_089B7AB4;
    return;
L_089B7AB4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1332), 0u);
    goto L_089B7AB8;
L_089B7AB8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(504), 0u);
      if (branch_taken) {
          goto L_089B7AD0;
      }
      goto L_089B7AC0;
    }
L_089B7AC0:
    ctx.gpr[31] = (0x089B7AC8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 618u, 0x0888F080u>(ctx, &aot_mem) && ctx.pc == 0x089B7AC8u) goto L_089B7AC8;
    return;
L_089B7AC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 118u, 0x089B85DCu>(ctx, &aot_mem); return;
      }
      goto L_089B7AD0;
    }
L_089B7AD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7B04;
      }
      goto L_089B7AE4;
    }
L_089B7AE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_089B7B04;
L_089B7B04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7B40;
      }
      goto L_089B7B14;
    }
L_089B7B14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(416)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[31] = (0x089B7B28u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089B7B28u) goto L_089B7B28;
    return;
L_089B7B28:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7B40;
      }
      goto L_089B7B34;
    }
L_089B7B34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3216)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3216), ctx.gpr[5]);
    goto L_089B7B40;
L_089B7B40:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7BA8;
      }
      goto L_089B7B48;
    }
L_089B7B48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 80u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B7BA8;
      }
      goto L_089B7B5C;
    }
L_089B7B5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B7BA8;
      }
      goto L_089B7B6C;
    }
L_089B7B6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B7BA8;
      }
      goto L_089B7B7C;
    }
L_089B7B7C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1336), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 20u);
    ctx.gpr[16] = (0u | 50u);
    ctx.gpr[22] = (0u | 18u);
    ctx.gpr[23] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[19] = (0u | 11u);
      if (branch_taken) {
          goto L_089B7BB0;
      }
      goto L_089B7BA0;
    }
L_089B7BA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7C20;
      }
      goto L_089B7BA8;
    }
L_089B7BA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 118u, 0x089B85DCu>(ctx, &aot_mem); return;
      }
      goto L_089B7BB0;
    }
L_089B7BB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7C20;
      }
      goto L_089B7BBC;
    }
L_089B7BBC:
    ctx.gpr[31] = (0x089B7BC4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089B7BC4u) goto L_089B7BC4;
    return;
L_089B7BC4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7C20;
      }
      goto L_089B7BCC;
    }
L_089B7BCC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[23];
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_089B7C20;
      }
      goto L_089B7BD8;
    }
L_089B7BD8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] << 7u);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[7] = (2233u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (0u | 1000u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(224), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(220), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(3000));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(216), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(228), ctx.gpr[20]);
    goto L_089B7C20;
L_089B7C20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089B7C3C;
      }
      goto L_089B7C2C;
    }
L_089B7C2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 56u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B7C4C;
      }
      goto L_089B7C3C;
    }
L_089B7C3C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(599), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089B7C4C;
L_089B7C4C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(541)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7C64;
      }
      goto L_089B7C58;
    }
L_089B7C58:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(541)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(541), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089B7C64;
L_089B7C64:
    ctx.gpr[31] = (0x089B7C6Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089B7C6Cu) goto L_089B7C6C;
    return;
L_089B7C6C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7C88;
      }
      goto L_089B7C74;
    }
L_089B7C74:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(2995)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7C88;
      }
      goto L_089B7C80;
    }
L_089B7C80:
    ctx.gpr[31] = (0x089B7C88u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 272u, 0x0894528Cu>(ctx, &aot_mem) && ctx.pc == 0x089B7C88u) goto L_089B7C88;
    return;
L_089B7C88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_089B7D9C;
      }
      goto L_089B7C94;
    }
L_089B7C94:
    ctx.gpr[31] = (0x089B7C9Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089B7C9Cu) goto L_089B7C9C;
    return;
L_089B7C9C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7D1C;
      }
      goto L_089B7CA4;
    }
L_089B7CA4:
    ctx.gpr[31] = (0x089B7CACu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 174u, 0x089ED314u>(ctx, &aot_mem) && ctx.pc == 0x089B7CACu) goto L_089B7CAC;
    return;
L_089B7CAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 32u);
    ctx.gpr[6] = (ctx.gpr[4] & 496u);
    ctx.gpr[4] = (2233u << 16u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
      if (branch_taken) {
          goto L_089B7D08;
      }
      goto L_089B7CC4;
    }
L_089B7CC4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (46887u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 50604u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[21] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_089B7D08;
L_089B7D08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[31] = (0x089B7D1Cu);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 500u, 0x08A5EC3Cu>(ctx, &aot_mem) && ctx.pc == 0x089B7D1Cu) goto L_089B7D1C;
    return;
L_089B7D1C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089B7D28u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 193u, 0x088A1304u>(ctx, &aot_mem) && ctx.pc == 0x089B7D28u) goto L_089B7D28;
    return;
L_089B7D28:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B7D44;
      }
      goto L_089B7D38;
    }
L_089B7D38:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089B7D44;
L_089B7D44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089B7D80;
      }
      goto L_089B7D50;
    }
L_089B7D50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7D78;
      }
      goto L_089B7D5C;
    }
L_089B7D5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(912), 0u);
        goto L_089B7D78;
    }
    goto L_089B7D68;
L_089B7D68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x089B7D74u);
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089B7D74u) goto L_089B7D74;
    return;
L_089B7D74:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(912), 0u);
    goto L_089B7D78;
L_089B7D78:
    ctx.gpr[31] = (0x089B7D80u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x089B7D80u) goto L_089B7D80;
    return;
L_089B7D80:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(844), ctx.gpr[16]);
    ctx.gpr[31] = (0x089B7D8Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 539u, 0x089A2474u>(ctx, &aot_mem) && ctx.pc == 0x089B7D8Cu) goto L_089B7D8C;
    return;
L_089B7D8C:
    ctx.gpr[31] = (0x089B7D94u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 687u, 0x0899F8B4u>(ctx, &aot_mem) && ctx.pc == 0x089B7D94u) goto L_089B7D94;
    return;
L_089B7D94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 118u, 0x089B85DCu>(ctx, &aot_mem); return;
      }
      goto L_089B7D9C;
    }
L_089B7D9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(748)));
    ctx.gpr[16] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (8u << 16u);
      if (branch_taken) {
          goto L_089B7DBC;
      }
      goto L_089B7DAC;
    }
L_089B7DAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(748)));
    ctx.gpr[5] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089B7DBC;
L_089B7DBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(500)));
    ctx.gpr[5] = (0u | 65535u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B7DE4;
      }
      goto L_089B7DDC;
    }
L_089B7DDC:
    ctx.gpr[4] = (0u | 15000u);
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(500), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_089B7DE4;
L_089B7DE4:
    ctx.gpr[31] = (0x089B7DECu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089B7DECu) goto L_089B7DEC;
    return;
L_089B7DEC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7E7C;
      }
      goto L_089B7DF4;
    }
L_089B7DF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(592)));
    ctx.gpr[4] = (2233u << 16u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[22];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
      if (branch_taken) {
          goto L_089B7E10;
      }
      goto L_089B7E04;
    }
L_089B7E04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089B7E6C;
      }
      goto L_089B7E10;
    }
L_089B7E10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u | 32u);
    ctx.gpr[5] = (ctx.gpr[5] & 496u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089B7E5C;
      }
      goto L_089B7E24;
    }
L_089B7E24:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[21] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_089B7E5C;
L_089B7E5C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    goto L_089B7E6C;
L_089B7E6C:
    ctx.gpr[31] = (0x089B7E74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 500u, 0x08A5EC3Cu>(ctx, &aot_mem) && ctx.pc == 0x089B7E74u) goto L_089B7E74;
    return;
L_089B7E74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7EE8;
      }
      goto L_089B7E7C;
    }
L_089B7E7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089B7EE8;
      }
      goto L_089B7E88;
    }
L_089B7E88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 32u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B7ED4;
      }
      goto L_089B7E9C;
    }
L_089B7E9C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_089B7ED4;
L_089B7ED4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 48u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_089B7EE8;
L_089B7EE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089B7F98;
      }
      goto L_089B7EF4;
    }
L_089B7EF4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(544)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_089B7F94;
      }
      goto L_089B7F08;
    }
L_089B7F08:
    ctx.gpr[18] = (256u << 16u);
    ctx.gpr[19] = (2230u << 16u);
    goto L_089B7F10;
L_089B7F10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7F80;
      }
      goto L_089B7F1C;
    }
L_089B7F1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B7F80;
      }
      goto L_089B7F30;
    }
L_089B7F30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[30]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B7F80;
      }
      goto L_089B7F44;
    }
L_089B7F44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(628)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_089B7F64;
      }
      goto L_089B7F54;
    }
L_089B7F54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B7F80;
      }
      goto L_089B7F64;
    }
L_089B7F64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x089B7F74u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x089B7F74u) goto L_089B7F74;
    return;
L_089B7F74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1772), ctx.gpr[4]);
    goto L_089B7F80;
L_089B7F80:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(544)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089B7F10;
      }
      goto L_089B7F94;
    }
L_089B7F94:
    ctx.gpr[19] = (0u | 11u);
    goto L_089B7F98;
L_089B7F98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089B7FB4;
      }
      goto L_089B7FA4;
    }
L_089B7FA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    ctx.gpr[4] = (0u | 56u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 31u, 0x089B81B4u>(ctx, &aot_mem); return;
      }
      goto L_089B7FB4;
    }
L_089B7FB4:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089B7FC0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 193u, 0x088A1304u>(ctx, &aot_mem) && ctx.pc == 0x089B7FC0u) goto L_089B7FC0;
    return;
L_089B7FC0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089B7FF4;
      }
      goto L_089B7FD0;
    }
L_089B7FD0:
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(596), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17184)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-17172)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17184), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-17172), ctx.gpr[4]);
    goto L_089B7FF4;
L_089B7FF4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 2u, 0x089B8024u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 1u, 0x089B8004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0108(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0108_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_108(Runtime &runtime) {
    runtime.register_generated_unit(108u, 0x089B4000u, 16384u, &recomp_unit_0108, &recomp_unit_0108_entry);
    runtime.register_function(0x089B4004u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4028u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4040u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4044u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B404Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4060u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B406Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4074u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4080u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B408Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4094u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B409Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B40A8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B40B4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B40B8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B40D4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B40DCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B40E8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B40F8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4114u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4120u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4148u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4154u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B415Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4178u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4188u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4194u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B41ACu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B41B8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B41D4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B41E4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B41F8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B420Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4220u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4240u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4248u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4254u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4264u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B426Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B427Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4284u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4290u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B42A0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B42B0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B42BCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B42D0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B42D8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B42E0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B42ECu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B42FCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4314u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4320u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4328u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4340u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B434Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4354u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4364u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4368u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4370u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4390u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B43A0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B43B0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B43B8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B43C4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B43D0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B43E0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B43E8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B43FCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4404u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B440Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4414u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4420u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4438u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4448u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4464u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4478u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4480u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4488u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B44A4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B44C0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B44CCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B44DCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B44E8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B44F0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B44F8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4500u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4508u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4520u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4538u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4550u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4558u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4564u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B456Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4574u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4578u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B458Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B45A4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B45ACu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B45B8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B45C8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B45D4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B45E0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B45ECu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B45F8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4604u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B460Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4628u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4648u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4654u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B466Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4678u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4680u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4688u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4698u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B46ACu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B46B4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B46BCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B46C8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B46D0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B46D8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B46ECu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B46F0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B46FCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4704u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B470Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4714u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B471Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4724u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B472Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B473Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4744u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B474Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4754u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B475Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4764u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B476Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4774u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B477Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4784u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4790u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B47A4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B47ACu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B47B4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B47BCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B47D0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B47D8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B47E4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B47F4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B47FCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4804u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4814u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B481Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B482Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4834u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B483Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B484Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4854u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4864u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B486Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4880u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4890u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B48A0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B48A8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B48C0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B48CCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B48E8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B48F4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B48FCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4910u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4928u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B493Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4948u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4950u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4960u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B496Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4974u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4980u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4988u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4998u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B49A4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B49ACu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B49B4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B49BCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B49C4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B49CCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B49D4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B49E0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B49F0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B49F8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4A00u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4A08u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4A24u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4A2Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4A34u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4A40u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4A48u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4A50u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4A58u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4A60u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4A68u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4A74u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4A7Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4A8Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4A9Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4AB0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4AB8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4AC8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4AD0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4AD8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4AE0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4AE8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4AF0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4AF8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4B00u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4B08u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4B10u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4B18u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4B20u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4B2Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4B34u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4B44u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4B54u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4B60u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4B84u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4B8Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4B94u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4BB0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4BB8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4BC8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4BD0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4BD8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4BE0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4BE8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4BF0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4BF8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4C00u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4C08u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4C14u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4C1Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4C24u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4C3Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4C44u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4C50u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4C58u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4C60u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4C68u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4C70u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4C78u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4C80u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4C88u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4C90u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4C98u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4CA0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4CA8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4CB0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4CB8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4CC0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4CC8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4CD0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4CD8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4CE0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4CE8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4CF0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4CF8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4D00u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4D08u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4D10u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4D18u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4D20u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4D28u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4D30u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4D40u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4D4Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4D54u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4D5Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4D68u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4D74u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4D84u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4D90u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4DB4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4DBCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4DCCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4DD4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4DDCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4DECu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4E00u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4E18u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4E2Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4E38u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4E44u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4E50u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4E64u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4E6Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4E7Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4E8Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4E94u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4EB0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4EB8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4EECu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4F1Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4F68u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4FA8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4FB0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4FBCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4FC8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4FCCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4FE0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4FECu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4FFCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5008u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5010u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5018u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5020u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5034u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5050u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B505Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5064u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5074u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5084u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5090u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B50A0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B50B0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B50BCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B50C4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B50D0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B50D8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B50E0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B50E8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B50F0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B50FCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5104u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5110u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B511Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5134u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5174u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B51B8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B51D8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B51E0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B51E8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B51F0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5208u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5218u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5228u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5230u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B523Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5244u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5254u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5268u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5278u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5280u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5294u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B529Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B52A4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B52ACu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B52B4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B52BCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B52C4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B52CCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B52DCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B52E4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B52F4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B52FCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5304u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B530Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5318u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5328u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5340u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5350u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5360u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5368u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5374u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5384u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B538Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5394u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B53ACu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B53BCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B53CCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B53E4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B53F4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5400u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5408u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5418u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5420u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5428u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5438u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5444u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5450u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5460u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5468u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5470u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5480u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5488u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5490u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B549Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B54A8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B54B4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B54BCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B54C4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B54E4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B54E8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B54F8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5548u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5550u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B555Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5564u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B556Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5574u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B557Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5584u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B558Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5598u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B55A8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B55B4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B55BCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B55C4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B55D0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B55D8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B55E0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B55ECu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B55FCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5620u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5638u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5644u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B564Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B565Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5668u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5680u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B56C0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B56D0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B56D8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B56ECu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5700u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5718u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5720u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5728u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5730u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5738u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B573Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B574Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B575Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5770u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5778u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5780u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5788u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B57ACu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B57D0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B57E0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B57F4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5814u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5820u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5828u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5834u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B583Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B584Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5854u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5864u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B586Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5874u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B588Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5894u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B589Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B58B4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B58CCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B58DCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B58E8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B58F8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B58FCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5908u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5918u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5928u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B592Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5934u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5938u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5944u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5954u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5958u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5960u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B596Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5974u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5984u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B598Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B599Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B59A8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B59B8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B59BCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B59C8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B59D4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B59D8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B59E4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B59F0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B59F4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5A00u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5A0Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5A10u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5A1Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5A28u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5A34u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5A44u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5A50u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5A64u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5A74u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5A7Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5A8Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5A9Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5AACu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5AB0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5AB8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5ACCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5AD4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5ADCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5AECu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5AF4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5B00u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5B08u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5B18u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5B20u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5B30u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5B3Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5B50u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5B58u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5B60u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5B70u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5B78u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5B84u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5B8Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5B9Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5BA4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5BACu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5BB4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5BBCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5BE4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5C50u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5C58u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5C74u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5C7Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5C98u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5CA0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5CA8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5CB0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5CB4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5CC4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5CD0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5CE4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5CE8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5CF4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5CFCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5D38u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5D68u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5D70u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5D94u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5DACu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5DC8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5DECu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5E10u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5E28u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5E34u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5E40u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5E4Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5E64u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5E7Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5EA0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5EC4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5EDCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5EE8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5EF4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5F08u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5F10u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5F1Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5F28u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5F3Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5F44u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5F50u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5F5Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5F70u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5F88u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5FACu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5FD0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5FE8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5FF4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6000u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6014u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B601Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6028u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6034u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6048u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6058u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6060u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B606Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6078u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6084u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B60ACu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B60C0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B60D0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B60D8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B60E4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B60F0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B60FCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6120u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6134u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6148u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6158u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B616Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6194u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B61B4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B61C0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B61D8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B61ECu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6204u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6240u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B62B4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B631Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6394u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B640Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B642Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B643Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6464u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6478u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B649Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B64BCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6510u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6518u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6540u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6564u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6570u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B658Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B65A4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B65B0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B65CCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B65D4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B65E4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B65F4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6604u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6614u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6624u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B662Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6640u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6648u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6650u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B665Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6664u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6668u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6674u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6684u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B66A0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B66ACu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B66B4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B66BCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B673Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B675Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6788u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B67B4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B67C4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B67FCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6824u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6830u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6840u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6850u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6864u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B686Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6874u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6888u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B68D0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B68D8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B68E0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B68ECu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B68F0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6910u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6918u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6938u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6940u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6948u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6954u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B695Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6970u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B697Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6A14u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6A24u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6A34u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6A3Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6A44u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6A4Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6A54u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6A60u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6B28u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6B34u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6B48u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6B58u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6B60u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6B64u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6B78u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6B98u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6BE4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6C1Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6C30u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6C3Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6C4Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6C58u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6C60u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6C68u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6C70u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6C80u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6C90u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6C98u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6CA0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6CB0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6CBCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6CC4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6CC8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6CD4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6CE0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6CE8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6D08u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6DA0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6DB4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6DCCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6DD8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6DE0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6DECu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6DF4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6DFCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6E0Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6E1Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6E3Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6E48u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6E50u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6E58u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6E68u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6E78u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6E88u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6E9Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6F14u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6F1Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6F6Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6F74u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6FA4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6FACu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6FB8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6FBCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6FCCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6FDCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6FE4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6FF4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7000u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7010u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7028u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7030u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7038u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7048u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7054u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B705Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7064u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7074u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7078u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B70D4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B70ECu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B70FCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7110u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B711Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7128u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7130u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B713Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7148u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B714Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7154u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7164u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B716Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7184u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B71A8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B71C8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B71D4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B71DCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B71F0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7218u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7220u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7230u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7238u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7280u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7288u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B728Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7298u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B72A8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B72B8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B72C0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B72D0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B72E0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B72ECu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B72F4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B72FCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7304u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B730Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B731Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7324u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7370u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7390u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B73ACu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B73B8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B73C0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B73CCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B73DCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B73ECu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B73F4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B73FCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7404u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B741Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7440u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7448u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7458u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7468u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7474u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7480u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B748Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7490u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7498u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B749Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B74A0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B74A8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B74B4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B74BCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B74E8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B74F8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7508u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7514u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B751Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B752Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7564u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7594u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B75C4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B75E4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B75F0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7604u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7610u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7618u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7620u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7628u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7630u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7638u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7640u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7648u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7654u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B765Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7664u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B766Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7674u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B767Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7684u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B768Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7690u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B76B0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B76B8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B76E4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B76F0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7700u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7708u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7710u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B771Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B772Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7740u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7760u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7768u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B777Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7790u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7798u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B77ACu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B77B8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B77CCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B77D4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B77DCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B77E4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B77ECu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7808u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7814u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B782Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7834u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7848u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7850u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7858u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7864u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7878u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7880u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B78A0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B78B4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B78C8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B78D4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B78D8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B78E4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B78ECu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B78FCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7904u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7910u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7960u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B799Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B79A4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B79B0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B79B8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B79C0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B79D0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B79E0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B79F4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7A04u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7A14u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7A1Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7A24u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7A30u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7A38u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7A40u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7A50u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7A58u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7A74u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7A7Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7A8Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7A98u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7AA0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7AA8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7AB4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7AB8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7AC0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7AC8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7AD0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7AE4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7B04u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7B14u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7B28u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7B34u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7B40u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7B48u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7B5Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7B6Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7B7Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7BA0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7BA8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7BB0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7BBCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7BC4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7BCCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7BD8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7C20u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7C2Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7C3Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7C4Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7C58u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7C64u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7C6Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7C74u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7C80u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7C88u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7C94u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7C9Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7CA4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7CACu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7CC4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7D08u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7D1Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7D28u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7D38u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7D44u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7D50u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7D5Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7D68u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7D74u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7D78u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7D80u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7D8Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7D94u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7D9Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7DACu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7DBCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7DDCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7DE4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7DECu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7DF4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7E04u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7E10u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7E24u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7E5Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7E6Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7E74u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7E7Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7E88u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7E9Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7ED4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7EE8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7EF4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7F08u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7F10u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7F1Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7F30u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7F44u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7F54u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7F64u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7F74u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7F80u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7F94u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7F98u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7FA4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7FB4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7FC0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7FD0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7FF4u, &recomp_unit_0108, "recomp_unit_0108");
}
} // namespace psprecomp
