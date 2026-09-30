#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0036[4093] = {
    1, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0,
    0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 14, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 18, 0, 0,
    19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 27, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 30, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 35, 0, 0, 0, 36, 0, 37, 0, 38, 0, 39, 0, 40,
    0, 0, 0, 41, 0, 42, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 49,
    0, 0, 50, 0, 0, 51, 0, 0, 0, 52, 0, 0, 53, 0, 0, 54, 0, 0, 55, 56, 0, 57, 58, 0, 0, 59, 0, 0, 0, 60, 0, 0,
    61, 0, 62, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 67, 0, 68, 0, 0, 0, 69, 0, 70, 0, 0, 71,
    0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0,
    78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 80, 81, 0, 82, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0,
    85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 88, 0, 89, 0, 90, 0, 91, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0,
    94, 0, 95, 0, 0, 96, 0, 97, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 100, 0, 0, 101, 0, 102, 0, 0, 0, 103, 0, 0, 104, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 106, 0, 0, 0, 107, 0, 108, 0, 0, 109, 0, 0, 110, 0, 111, 0, 112, 113,
    0, 114, 0, 0, 0, 0, 115, 116, 0, 117, 0, 0, 0, 0, 118, 0, 119, 0, 0, 0, 120, 0, 121, 0, 0, 122, 0, 0, 0, 0, 123, 0,
    124, 0, 0, 0, 125, 0, 126, 0, 127, 0, 0, 0, 128, 0, 129, 0, 130, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137,
    0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 144, 0, 145, 0, 0,
    0, 146, 0, 0, 0, 147, 0, 148, 0, 0, 0, 0, 0, 149, 0, 150, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0,
    153, 0, 0, 0, 154, 0, 155, 0, 156, 0, 157, 0, 0, 158, 0, 159, 0, 0, 160, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0,
    164, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168,
    0, 0, 0, 0, 169, 0, 170, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 175, 0, 176, 0, 0, 177, 0,
    0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 181, 0, 182, 0, 0, 183, 0, 0, 184, 0, 185, 0, 0, 186, 0, 0,
    0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 190, 0, 191, 0, 192, 0, 193, 0, 194, 0, 195, 196, 0, 197, 0, 0, 198, 0, 0,
    0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 202, 0, 0, 0, 203, 0, 0, 204,
    0, 0, 205, 0, 0, 206, 207, 0, 208, 209, 0, 0, 210, 0, 0, 0, 211, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 214, 0, 0,
    215, 0, 0, 216, 0, 0, 217, 0, 218, 0, 0, 219, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 222, 0, 223, 0, 224, 0, 225, 226, 0, 227,
    0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 230, 0, 231, 0, 232, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236,
    0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0,
    0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 251,
    0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 255, 0, 0, 0, 0, 0, 256, 0, 257, 0, 0, 0, 0,
    0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 260, 0, 0, 261, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 264,
    0, 0, 0, 0, 0, 265, 0, 0, 266, 0, 267, 0, 268, 0, 269, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0,
    0, 0, 272, 0, 273, 0, 274, 0, 275, 0, 276, 0, 0, 0, 277, 0, 278, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0,
    0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 0,
    289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 293, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 297,
    0, 298, 0, 299, 0, 300, 0, 0, 301, 0, 0, 302, 0, 303, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0,
    308, 0, 0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 313, 0, 314, 0, 315, 0, 316, 0, 317, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0,
    320, 0, 321, 0, 322, 0, 323, 0, 0, 324, 0, 325, 0, 0, 326, 0, 327, 0, 0, 328, 0, 329, 0, 330, 0, 331, 0, 332, 333, 0, 334, 0,
    0, 335, 0, 0, 336, 0, 337, 0, 338, 0, 339, 0, 340, 0, 341, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 344, 0, 345, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 347, 0, 0, 348, 0, 0, 0, 349, 0, 0, 350, 0, 351, 0, 0, 0, 352, 0, 353, 0, 0,
    0, 0, 0, 354, 0, 355, 0, 0, 0, 356, 0, 0, 357, 0, 358, 0, 359, 0, 360, 0, 361, 362, 0, 363, 0, 0, 0, 364, 0, 0, 365, 0,
    366, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 373, 0, 0, 374, 0, 375, 0, 0, 0, 0, 376, 0, 0, 377, 0, 378, 0, 0, 0,
    379, 0, 380, 0, 381, 0, 382, 0, 383, 0, 384, 0, 385, 0, 386, 0, 0, 387, 0, 388, 0, 0, 389, 390, 0, 391, 0, 0, 0, 0, 0, 392,
    0, 0, 393, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0, 0, 0, 398, 0, 0, 399, 0, 400, 0, 0, 0, 0,
    401, 0, 0, 402, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0, 405, 0, 406, 0, 0, 0, 0, 407, 0, 408, 0, 0, 0, 409, 0, 410, 0, 0,
    0, 411, 0, 412, 0, 0, 0, 413, 414, 415, 0, 0, 0, 416, 0, 417, 0, 0, 0, 418, 0, 0, 419, 0, 0, 0, 420, 0, 0, 0, 421, 0,
    422, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 425, 0, 426, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0,
    0, 429, 0, 430, 0, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435,
    0, 0, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 439, 0, 440, 0, 0, 0, 0, 0,
    441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 443, 0, 0, 0, 0, 444, 0, 0, 445, 0, 446, 0, 447, 0, 448,
    0, 449, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 452, 0, 0, 0, 453, 0, 454, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 456, 0, 457, 0, 0, 458, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0,
    460, 0, 461, 0, 0, 462, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 465, 0, 466, 0, 0, 467, 468, 0, 469, 0,
    0, 0, 0, 0, 0, 470, 0, 0, 0, 471, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 474, 0, 475,
    0, 476, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 479, 0, 0, 480, 0, 481, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 483, 0, 0, 0, 484, 0, 485, 0, 486, 0, 0, 0, 0, 0, 487, 0, 0, 488, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0,
    0, 492, 0, 493, 0, 0, 0, 494, 0, 0, 0, 495, 0, 0, 496, 497, 0, 0, 0, 0, 0, 0, 498, 0, 0, 499, 0, 0, 500, 0, 0, 0,
    0, 0, 501, 0, 502, 0, 503, 0, 504, 0, 0, 0, 0, 0, 505, 0, 0, 0, 506, 0, 507, 0, 0, 0, 508, 0, 509, 0, 0, 0, 0, 510,
    0, 0, 511, 0, 0, 0, 0, 0, 512, 0, 0, 0, 513, 0, 514, 0, 0, 0, 0, 0, 515, 0, 0, 516, 0, 0, 0, 517, 0, 0, 0, 0,
    0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 522, 0, 523, 0,
    0, 0, 524, 0, 525, 0, 0, 0, 526, 0, 0, 0, 527, 0, 528, 0, 0, 0, 0, 0, 529, 0, 0, 530, 0, 0, 0, 531, 0, 532, 0, 0,
    0, 533, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 536, 0, 0, 537, 0, 538, 0, 539, 0, 0, 0,
    540, 0, 541, 0, 542, 0, 0, 0, 543, 0, 544, 0, 545, 0, 546, 547, 0, 548, 0, 0, 0, 0, 549, 550, 0, 551, 0, 0, 0, 0, 552, 0,
    0, 553, 0, 0, 0, 0, 554, 0, 555, 0, 0, 0, 556, 0, 557, 0, 558, 0, 0, 0, 559, 0, 560, 0, 561, 0, 0, 0, 562, 0, 0, 0,
    0, 563, 0, 0, 0, 0, 0, 564, 0, 565, 0, 0, 0, 0, 0, 566, 0, 567, 0, 0, 0, 0, 568, 0, 569, 0, 0, 570, 0, 571, 0, 0,
    0, 0, 572, 0, 573, 0, 0, 0, 0, 0, 574, 0, 575, 0, 0, 0, 0, 576, 0, 577, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 579, 0, 0, 0, 580, 0, 0, 0, 0, 581, 0, 0, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0,
    584, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 586, 0, 587, 0, 588, 0, 0, 0, 589, 0, 590, 0, 0, 0,
    591, 0, 592, 0, 0, 0, 593, 0, 0, 0, 594, 0, 595, 0, 0, 0, 0, 596, 0, 597, 0, 598, 0, 0, 0, 0, 599, 0, 600, 0, 0, 0,
    601, 0, 602, 0, 0, 0, 0, 603, 0, 604, 0, 0, 0, 605, 0, 606, 0, 0, 607, 0, 608, 0, 0, 0, 609, 0, 610, 0, 0, 0, 611, 0,
    0, 0, 0, 0, 0, 612, 0, 0, 613, 0, 0, 614, 0, 0, 615, 0, 0, 0, 0, 0, 0, 616, 0, 0, 617, 0, 0, 0, 0, 0, 618, 0,
    0, 619, 0, 0, 0, 620, 0, 0, 0, 621, 0, 622, 0, 0, 0, 623, 0, 0, 0, 624, 0, 625, 0, 0, 0, 626, 0, 627, 0, 0, 628, 0,
    629, 0, 630, 0, 0, 0, 631, 0, 0, 0, 632, 0, 0, 0, 633, 0, 0, 634, 0, 0, 0, 635, 0, 636, 0, 637, 0, 0, 0, 638, 0, 639,
    0, 0, 0, 0, 640, 0, 0, 0, 641, 0, 0, 642, 0, 0, 0, 643, 0, 0, 0, 0, 0, 644, 0, 645, 0, 0, 0, 646, 0, 0, 0, 647,
    0, 0, 0, 0, 648, 0, 0, 0, 0, 649, 0, 0, 650, 0, 0, 651, 0, 0, 652, 0, 0, 0, 653, 0, 0, 0, 654, 0, 655, 0, 0, 0,
    0, 656, 0, 0, 657, 0, 0, 658, 0, 0, 0, 659, 0, 660, 0, 0, 0, 0, 661, 0, 0, 0, 0, 0, 662, 0, 0, 663, 0, 0, 0, 0,
    0, 664, 0, 0, 665, 0, 0, 666, 0, 0, 0, 667, 0, 668, 0, 0, 0, 0, 0, 0, 669, 0, 0, 670, 0, 671, 0, 0, 0, 672, 0, 673,
    0, 0, 674, 0, 675, 0, 676, 0, 0, 0, 677, 0, 678, 0, 0, 679, 0, 680, 0, 0, 681, 0, 0, 0, 682, 0, 0, 683, 0, 684, 0, 0,
    0, 685, 0, 0, 686, 0, 687, 0, 0, 0, 0, 0, 688, 0, 689, 0, 690, 0, 0, 0, 0, 0, 0, 691, 0, 0, 0, 692, 0, 0, 0, 693,
    0, 0, 0, 694, 0, 695, 0, 0, 0, 0, 0, 0, 0, 696, 0, 697, 0, 0, 0, 698, 0, 0, 0, 699, 700, 0, 0, 0, 701, 0, 0, 0,
    702, 0, 0, 703, 0, 0, 0, 704, 0, 0, 705, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 706, 0, 0, 707, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 708,
    0, 0, 709, 0, 710, 0, 711, 0, 0, 0, 0, 0, 712, 0, 0, 0, 713, 0, 0, 714, 0, 0, 0, 715, 0, 0, 716, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 717, 0, 0, 0, 0, 0, 718, 0, 0, 0, 0, 0, 0, 719, 0, 0, 720, 0, 0, 0, 721, 0, 0, 722,
    0, 723, 0, 0, 0, 724, 0, 0, 0, 725, 0, 726, 0, 727, 0, 0, 0, 0, 0, 0, 728, 0, 0, 729, 730, 0, 0, 0, 0, 0, 0, 731,
    0, 0, 732, 0, 0, 733, 0, 0, 0, 0, 0, 734, 0, 735, 0, 736, 0, 737, 0, 0, 738, 0, 0, 739, 0, 0, 0, 0, 740, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 741, 0, 0, 742, 0, 0, 0, 0, 0, 0, 0, 0, 0, 743, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    744, 0, 0, 745, 0, 0, 0, 0, 0, 746, 0, 0, 747, 0, 0, 0, 0, 748, 0, 749, 0, 750, 0, 0, 751, 0, 0, 752, 0, 0, 753, 754,
    0, 755, 0, 0, 756, 0, 0, 757, 0, 0, 758, 759, 0, 760, 0, 0, 0, 0, 0, 0, 0, 0, 0, 761, 0, 0, 0, 0, 0, 0, 0, 762,
    0, 0, 0, 763, 0, 0, 764, 0, 0, 0, 0, 0, 0, 765, 0, 0, 766, 0, 0, 767, 0, 768, 0, 0, 769, 0, 0, 770, 0, 0, 0, 0,
    0, 771, 0, 772, 0, 0, 0, 0, 0, 773, 0, 774, 0, 775, 0, 0, 0, 776, 0, 0, 0, 777, 0, 0, 0, 778, 0, 0, 779, 0, 0, 0,
    780, 0, 781, 0, 0, 782, 0, 0, 0, 0, 783, 0, 0, 0, 0, 784, 0, 0, 0, 0, 0, 785, 0, 0, 0, 0, 0, 786, 0, 787, 0, 0,
    788, 0, 0, 0, 0, 0, 0, 789, 0, 790, 0, 0, 0, 0, 791, 0, 792, 0, 0, 0, 0, 793, 794, 0, 0, 795, 0, 0, 796, 0, 797, 0,
    798, 0, 0, 0, 0, 0, 799, 0, 800, 0, 0, 801, 0, 0, 802, 0, 0, 803, 0, 0, 0, 0, 804, 0, 0, 0, 0, 0, 805, 0, 806, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 807, 0, 808, 0, 0, 0, 809, 0, 810, 0, 0, 811, 0, 0, 0, 0, 812, 0, 0,
    0, 0, 813, 0, 0, 814, 0, 0, 0, 815, 0, 0, 0, 0, 816, 0, 0, 817, 0, 818, 0, 0, 0, 0, 0, 819, 0, 0, 820, 0, 821, 0,
    822, 0, 0, 0, 823, 0, 824, 0, 0, 0, 825, 0, 0, 826, 0, 0, 827, 0, 828, 0, 0, 829, 830, 0, 831, 0, 832, 0, 0, 833, 0, 0,
    0, 0, 0, 0, 834, 0, 0, 0, 835, 0, 0, 836, 0, 0, 0, 837, 0, 838, 0, 0, 839, 0, 0, 0, 840, 0, 0, 0, 0, 0, 841, 0,
    842, 0, 0, 843, 0, 0, 0, 0, 0, 844, 0, 845, 0, 0, 0, 846, 0, 847, 0, 848, 0, 0, 849, 0, 0, 0, 850, 0, 0, 0, 851, 0,
    0, 0, 852, 0, 0, 0, 0, 0, 853, 0, 0, 854, 0, 855, 0, 0, 856, 0, 857, 0, 858, 0, 859, 0, 860, 0, 0, 0, 0, 0, 861, 0,
    862, 0, 0, 0, 0, 0, 0, 0, 863, 0, 0, 864, 0, 865, 0, 0, 866, 0, 867, 0, 868, 0, 0, 869, 0, 870, 0, 0, 0, 0, 0, 871,
    0, 0, 872, 0, 873, 0, 0, 874, 0, 875, 0, 0, 876, 0, 877, 0, 0, 878, 0, 0, 879, 0, 880, 0, 0, 881, 0, 882, 0, 0, 883, 0,
    0, 0, 884, 0, 885, 0, 0, 886, 0, 0, 887, 0, 0, 0, 888, 0, 889, 0, 0, 0, 0, 0, 890, 0, 0, 891, 0, 892, 0, 893, 0, 0,
    894, 0, 0, 0, 895, 0, 0, 896, 0, 0, 897, 0, 898, 0, 0, 0, 899, 0, 0, 0, 0, 0, 900, 0, 0, 901, 0, 902, 0, 0, 903, 0,
    0, 0, 904, 0, 0, 905, 0, 0, 0, 0, 906, 0, 0, 0, 907, 0, 908, 0, 0, 0, 909, 0, 910, 0, 0, 911, 0, 0, 912, 0, 913, 0,
    0, 914, 0, 915, 0, 0, 916, 0, 0, 0, 0, 917, 0, 0, 918, 0, 0, 0, 0, 919, 0, 0, 920, 0, 0, 921, 0, 0, 0, 0, 922, 0,
    923, 0, 0, 0, 0, 0, 924, 0, 0, 925, 0, 0, 0, 0, 926, 0, 0, 927, 0, 928, 0, 0, 929, 0, 0, 0, 0, 930, 0, 0, 931, 0,
    932, 0, 0, 933, 0, 934, 0, 0, 935, 0, 936, 0, 0, 937, 0, 938, 0, 0, 939, 0, 940, 0, 0, 941, 0, 942, 0, 943, 0, 0, 944, 0,
    0, 0, 0, 945, 0, 0, 0, 946, 0, 947, 0, 0, 0, 0, 0, 0, 948, 0, 949, 0, 0, 950, 0, 951, 0, 952, 0, 0, 0, 953, 0, 0,
    0, 954, 0, 0, 0, 0, 0, 0, 0, 0, 0, 955, 0, 0, 956, 0, 0, 0, 957, 0, 0, 958, 0, 0, 959, 0, 0, 960, 0, 0, 961, 0,
    962, 0, 0, 963, 0, 0, 964, 0, 0, 965, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 966, 0, 0, 0, 0, 967,
    0, 0, 968, 0, 0, 969, 0, 0, 970, 0, 0, 971, 0, 0, 0, 0, 0, 972, 0, 0, 0, 973, 0, 0, 974, 0, 0, 975, 0, 976, 0, 0,
    977, 0, 0, 978, 0, 0, 979, 0, 980, 0, 0, 0, 981, 0, 0, 0, 982, 0, 0, 0, 0, 0, 983, 0, 0, 0, 0, 0, 984, 0, 0, 985,
    0, 986, 0, 987, 0, 0, 0, 988, 0, 989, 0, 0, 0, 990, 0, 0, 0, 0, 0, 0, 991, 0, 992, 0, 0, 0, 0, 0, 993, 0, 994, 0,
    0, 0, 0, 995, 0, 0, 996, 0, 997, 0, 998, 0, 0, 0, 0, 999, 0, 1000, 0, 1001, 0, 1002, 0, 0, 0, 1003, 0, 1004, 0, 0, 1005, 0,
    0, 0, 1006, 0, 0, 1007, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1008, 0, 0, 0, 0, 0, 1009, 0, 0, 0, 0, 1010, 0,
    0, 1011, 0, 0, 0, 1012, 0, 0, 1013, 0, 0, 0, 1014, 0, 0, 1015, 0, 1016, 0, 0, 0, 1017, 0, 0, 0, 1018, 0, 0, 1019, 1020, 0, 0,
    0, 0, 0, 0, 1021, 0, 1022, 0, 0, 0, 1023, 0, 1024, 0, 0, 0, 1025, 0, 1026, 0, 0, 1027, 0, 0, 0, 1028, 0, 0, 1029, 0, 1030, 0,
    0, 1031, 0, 1032, 0, 1033, 0, 0, 0, 0, 1034, 0, 1035, 0, 1036, 0, 1037, 0, 1038, 0, 0, 1039, 0, 1040, 0, 1041, 0, 0, 0, 1042, 0, 0,
    0, 0, 0, 0, 1043, 0, 1044, 0, 0, 1045, 0, 0, 0, 0, 1046, 0, 1047, 0, 1048, 0, 1049, 0, 1050, 0, 1051, 0, 0, 1052, 0, 0, 0, 0,
    1053, 0, 1054, 0, 0, 0, 1055, 0, 0, 1056, 0, 1057, 0, 1058, 1059, 0, 0, 0, 1060, 0, 0, 0, 1061, 0, 0, 1062, 0, 0, 1063,
};
void recomp_unit_0036_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08894000u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0036[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08894000;
    case 2u: goto L_08894008;
    case 3u: goto L_08894018;
    case 4u: goto L_0889402C;
    case 5u: goto L_0889403C;
    case 6u: goto L_0889405C;
    case 7u: goto L_08894070;
    case 8u: goto L_088940A0;
    case 9u: goto L_088940AC;
    case 10u: goto L_088940E4;
    case 11u: goto L_088940F8;
    case 12u: goto L_08894110;
    case 13u: goto L_0889411C;
    case 14u: goto L_0889412C;
    case 15u: goto L_08894138;
    case 16u: goto L_08894140;
    case 17u: goto L_0889416C;
    case 18u: goto L_08894174;
    case 19u: goto L_08894180;
    case 20u: goto L_088941AC;
    case 21u: goto L_088941B4;
    case 22u: goto L_088941CC;
    case 23u: goto L_0889422C;
    case 24u: goto L_08894240;
    case 25u: goto L_0889425C;
    case 26u: goto L_0889426C;
    case 27u: goto L_08894274;
    case 28u: goto L_088942A8;
    case 29u: goto L_088942B0;
    case 30u: goto L_088942B8;
    case 31u: goto L_088942C0;
    case 32u: goto L_0889430C;
    case 33u: goto L_08894328;
    case 34u: goto L_08894344;
    case 35u: goto L_0889434C;
    case 36u: goto L_0889435C;
    case 37u: goto L_08894364;
    case 38u: goto L_0889436C;
    case 39u: goto L_08894374;
    case 40u: goto L_0889437C;
    case 41u: goto L_0889438C;
    case 42u: goto L_08894394;
    case 43u: goto L_088943A0;
    case 44u: goto L_088943A8;
    case 45u: goto L_088943C0;
    case 46u: goto L_088943CC;
    case 47u: goto L_088943E4;
    case 48u: goto L_088943F4;
    case 49u: goto L_088943FC;
    case 50u: goto L_08894408;
    case 51u: goto L_08894414;
    case 52u: goto L_08894424;
    case 53u: goto L_08894430;
    case 54u: goto L_0889443C;
    case 55u: goto L_08894448;
    case 56u: goto L_0889444C;
    case 57u: goto L_08894454;
    case 58u: goto L_08894458;
    case 59u: goto L_08894464;
    case 60u: goto L_08894474;
    case 61u: goto L_08894480;
    case 62u: goto L_08894488;
    case 63u: goto L_08894494;
    case 64u: goto L_088944A0;
    case 65u: goto L_088944B8;
    case 66u: goto L_088944C0;
    case 67u: goto L_088944D0;
    case 68u: goto L_088944D8;
    case 69u: goto L_088944E8;
    case 70u: goto L_088944F0;
    case 71u: goto L_088944FC;
    case 72u: goto L_08894508;
    case 73u: goto L_08894520;
    case 74u: goto L_08894544;
    case 75u: goto L_0889454C;
    case 76u: goto L_08894560;
    case 77u: goto L_08894574;
    case 78u: goto L_08894580;
    case 79u: goto L_08894598;
    case 80u: goto L_088945BC;
    case 81u: goto L_088945C0;
    case 82u: goto L_088945C8;
    case 83u: goto L_088945D0;
    case 84u: goto L_088945DC;
    case 85u: goto L_08894600;
    case 86u: goto L_08894620;
    case 87u: goto L_08894628;
    case 88u: goto L_08894638;
    case 89u: goto L_08894640;
    case 90u: goto L_08894648;
    case 91u: goto L_08894650;
    case 92u: goto L_08894660;
    case 93u: goto L_08894670;
    case 94u: goto L_08894680;
    case 95u: goto L_08894688;
    case 96u: goto L_08894694;
    case 97u: goto L_0889469C;
    case 98u: goto L_088946A4;
    case 99u: goto L_088946C0;
    case 100u: goto L_088946C8;
    case 101u: goto L_088946D4;
    case 102u: goto L_088946DC;
    case 103u: goto L_088946EC;
    case 104u: goto L_088946F8;
    case 105u: goto L_08894730;
    case 106u: goto L_08894738;
    case 107u: goto L_08894748;
    case 108u: goto L_08894750;
    case 109u: goto L_0889475C;
    case 110u: goto L_08894768;
    case 111u: goto L_08894770;
    case 112u: goto L_08894778;
    case 113u: goto L_0889477C;
    case 114u: goto L_08894784;
    case 115u: goto L_08894798;
    case 116u: goto L_0889479C;
    case 117u: goto L_088947A4;
    case 118u: goto L_088947B8;
    case 119u: goto L_088947C0;
    case 120u: goto L_088947D0;
    case 121u: goto L_088947D8;
    case 122u: goto L_088947E4;
    case 123u: goto L_088947F8;
    case 124u: goto L_08894800;
    case 125u: goto L_08894810;
    case 126u: goto L_08894818;
    case 127u: goto L_08894820;
    case 128u: goto L_08894830;
    case 129u: goto L_08894838;
    case 130u: goto L_08894840;
    case 131u: goto L_08894848;
    case 132u: goto L_08894854;
    case 133u: goto L_08894898;
    case 134u: goto L_088948DC;
    case 135u: goto L_08894920;
    case 136u: goto L_08894964;
    case 137u: goto L_0889497C;
    case 138u: goto L_0889498C;
    case 139u: goto L_088949CC;
    case 140u: goto L_088949E8;
    case 141u: goto L_088949F8;
    case 142u: goto L_08894A28;
    case 143u: goto L_08894A64;
    case 144u: goto L_08894A6C;
    case 145u: goto L_08894A74;
    case 146u: goto L_08894A84;
    case 147u: goto L_08894A94;
    case 148u: goto L_08894A9C;
    case 149u: goto L_08894AB4;
    case 150u: goto L_08894ABC;
    case 151u: goto L_08894ACC;
    case 152u: goto L_08894ADC;
    case 153u: goto L_08894B00;
    case 154u: goto L_08894B10;
    case 155u: goto L_08894B18;
    case 156u: goto L_08894B20;
    case 157u: goto L_08894B28;
    case 158u: goto L_08894B34;
    case 159u: goto L_08894B3C;
    case 160u: goto L_08894B48;
    case 161u: goto L_08894B50;
    case 162u: goto L_08894B68;
    case 163u: goto L_08894B74;
    case 164u: goto L_08894B80;
    case 165u: goto L_08894B90;
    case 166u: goto L_08894BA0;
    case 167u: goto L_08894BB0;
    case 168u: goto L_08894BFC;
    case 169u: goto L_08894C10;
    case 170u: goto L_08894C18;
    case 171u: goto L_08894C24;
    case 172u: goto L_08894C34;
    case 173u: goto L_08894C44;
    case 174u: goto L_08894C54;
    case 175u: goto L_08894C64;
    case 176u: goto L_08894C6C;
    case 177u: goto L_08894C78;
    case 178u: goto L_08894C90;
    case 179u: goto L_08894CA0;
    case 180u: goto L_08894CB0;
    case 181u: goto L_08894CC0;
    case 182u: goto L_08894CC8;
    case 183u: goto L_08894CD4;
    case 184u: goto L_08894CE0;
    case 185u: goto L_08894CE8;
    case 186u: goto L_08894CF4;
    case 187u: goto L_08894D04;
    case 188u: goto L_08894D14;
    case 189u: goto L_08894D2C;
    case 190u: goto L_08894D34;
    case 191u: goto L_08894D3C;
    case 192u: goto L_08894D44;
    case 193u: goto L_08894D4C;
    case 194u: goto L_08894D54;
    case 195u: goto L_08894D5C;
    case 196u: goto L_08894D60;
    case 197u: goto L_08894D68;
    case 198u: goto L_08894D74;
    case 199u: goto L_08894D8C;
    case 200u: goto L_08894DB4;
    case 201u: goto L_08894DD8;
    case 202u: goto L_08894DE0;
    case 203u: goto L_08894DF0;
    case 204u: goto L_08894DFC;
    case 205u: goto L_08894E08;
    case 206u: goto L_08894E14;
    case 207u: goto L_08894E18;
    case 208u: goto L_08894E20;
    case 209u: goto L_08894E24;
    case 210u: goto L_08894E30;
    case 211u: goto L_08894E40;
    case 212u: goto L_08894E48;
    case 213u: goto L_08894E6C;
    case 214u: goto L_08894E74;
    case 215u: goto L_08894E80;
    case 216u: goto L_08894E8C;
    case 217u: goto L_08894E98;
    case 218u: goto L_08894EA0;
    case 219u: goto L_08894EAC;
    case 220u: goto L_08894EB8;
    case 221u: goto L_08894ED0;
    case 222u: goto L_08894ED8;
    case 223u: goto L_08894EE0;
    case 224u: goto L_08894EE8;
    case 225u: goto L_08894EF0;
    case 226u: goto L_08894EF4;
    case 227u: goto L_08894EFC;
    case 228u: goto L_08894F0C;
    case 229u: goto L_08894F20;
    case 230u: goto L_08894F28;
    case 231u: goto L_08894F30;
    case 232u: goto L_08894F38;
    case 233u: goto L_08894F44;
    case 234u: goto L_08894F54;
    case 235u: goto L_08894F64;
    case 236u: goto L_08894F7C;
    case 237u: goto L_08894F88;
    case 238u: goto L_08894FA0;
    case 239u: goto L_08894FB0;
    case 240u: goto L_08894FC0;
    case 241u: goto L_08894FD4;
    case 242u: goto L_08894FE4;
    case 243u: goto L_08894FF8;
    case 244u: goto L_08895008;
    case 245u: goto L_08895018;
    case 246u: goto L_08895028;
    case 247u: goto L_0889503C;
    case 248u: goto L_0889504C;
    case 249u: goto L_0889505C;
    case 250u: goto L_08895070;
    case 251u: goto L_0889507C;
    case 252u: goto L_08895094;
    case 253u: goto L_088950AC;
    case 254u: goto L_088950C0;
    case 255u: goto L_088950CC;
    case 256u: goto L_088950E4;
    case 257u: goto L_088950EC;
    case 258u: goto L_08895104;
    case 259u: goto L_08895138;
    case 260u: goto L_0889513C;
    case 261u: goto L_08895148;
    case 262u: goto L_08895154;
    case 263u: goto L_08895174;
    case 264u: goto L_0889517C;
    case 265u: goto L_08895194;
    case 266u: goto L_088951A0;
    case 267u: goto L_088951A8;
    case 268u: goto L_088951B0;
    case 269u: goto L_088951B8;
    case 270u: goto L_088951C8;
    case 271u: goto L_088951F8;
    case 272u: goto L_08895208;
    case 273u: goto L_08895210;
    case 274u: goto L_08895218;
    case 275u: goto L_08895220;
    case 276u: goto L_08895228;
    case 277u: goto L_08895238;
    case 278u: goto L_08895240;
    case 279u: goto L_08895248;
    case 280u: goto L_08895260;
    case 281u: goto L_08895274;
    case 282u: goto L_08895284;
    case 283u: goto L_0889529C;
    case 284u: goto L_088952A8;
    case 285u: goto L_088952B8;
    case 286u: goto L_088952C8;
    case 287u: goto L_088952D8;
    case 288u: goto L_088952F0;
    case 289u: goto L_08895300;
    case 290u: goto L_08895318;
    case 291u: goto L_08895328;
    case 292u: goto L_0889533C;
    case 293u: goto L_08895344;
    case 294u: goto L_0889534C;
    case 295u: goto L_08895360;
    case 296u: goto L_08895374;
    case 297u: goto L_0889537C;
    case 298u: goto L_08895384;
    case 299u: goto L_0889538C;
    case 300u: goto L_08895394;
    case 301u: goto L_088953A0;
    case 302u: goto L_088953AC;
    case 303u: goto L_088953B4;
    case 304u: goto L_088953C4;
    case 305u: goto L_088953D4;
    case 306u: goto L_088953E4;
    case 307u: goto L_088953F4;
    case 308u: goto L_08895400;
    case 309u: goto L_0889540C;
    case 310u: goto L_08895428;
    case 311u: goto L_08895460;
    case 312u: goto L_088954A4;
    case 313u: goto L_088954B4;
    case 314u: goto L_088954BC;
    case 315u: goto L_088954C4;
    case 316u: goto L_088954CC;
    case 317u: goto L_088954D4;
    case 318u: goto L_088954E0;
    case 319u: goto L_088954F0;
    case 320u: goto L_08895500;
    case 321u: goto L_08895508;
    case 322u: goto L_08895510;
    case 323u: goto L_08895518;
    case 324u: goto L_08895524;
    case 325u: goto L_0889552C;
    case 326u: goto L_08895538;
    case 327u: goto L_08895540;
    case 328u: goto L_0889554C;
    case 329u: goto L_08895554;
    case 330u: goto L_0889555C;
    case 331u: goto L_08895564;
    case 332u: goto L_0889556C;
    case 333u: goto L_08895570;
    case 334u: goto L_08895578;
    case 335u: goto L_08895584;
    case 336u: goto L_08895590;
    case 337u: goto L_08895598;
    case 338u: goto L_088955A0;
    case 339u: goto L_088955A8;
    case 340u: goto L_088955B0;
    case 341u: goto L_088955B8;
    case 342u: goto L_088955C4;
    case 343u: goto L_088955D4;
    case 344u: goto L_088955E4;
    case 345u: goto L_088955EC;
    case 346u: goto L_08895624;
    case 347u: goto L_0889562C;
    case 348u: goto L_08895638;
    case 349u: goto L_08895648;
    case 350u: goto L_08895654;
    case 351u: goto L_0889565C;
    case 352u: goto L_0889566C;
    case 353u: goto L_08895674;
    case 354u: goto L_0889568C;
    case 355u: goto L_08895694;
    case 356u: goto L_088956A4;
    case 357u: goto L_088956B0;
    case 358u: goto L_088956B8;
    case 359u: goto L_088956C0;
    case 360u: goto L_088956C8;
    case 361u: goto L_088956D0;
    case 362u: goto L_088956D4;
    case 363u: goto L_088956DC;
    case 364u: goto L_088956EC;
    case 365u: goto L_088956F8;
    case 366u: goto L_08895700;
    case 367u: goto L_08895710;
    case 368u: goto L_08895720;
    case 369u: goto L_08895730;
    case 370u: goto L_08895740;
    case 371u: goto L_08895754;
    case 372u: goto L_088957A0;
    case 373u: goto L_088957B4;
    case 374u: goto L_088957C0;
    case 375u: goto L_088957C8;
    case 376u: goto L_088957DC;
    case 377u: goto L_088957E8;
    case 378u: goto L_088957F0;
    case 379u: goto L_08895800;
    case 380u: goto L_08895808;
    case 381u: goto L_08895810;
    case 382u: goto L_08895818;
    case 383u: goto L_08895820;
    case 384u: goto L_08895828;
    case 385u: goto L_08895830;
    case 386u: goto L_08895838;
    case 387u: goto L_08895844;
    case 388u: goto L_0889584C;
    case 389u: goto L_08895858;
    case 390u: goto L_0889585C;
    case 391u: goto L_08895864;
    case 392u: goto L_0889587C;
    case 393u: goto L_08895888;
    case 394u: goto L_08895894;
    case 395u: goto L_088958A4;
    case 396u: goto L_088958B4;
    case 397u: goto L_088958C4;
    case 398u: goto L_088958D8;
    case 399u: goto L_088958E4;
    case 400u: goto L_088958EC;
    case 401u: goto L_08895900;
    case 402u: goto L_0889590C;
    case 403u: goto L_08895914;
    case 404u: goto L_08895928;
    case 405u: goto L_08895938;
    case 406u: goto L_08895940;
    case 407u: goto L_08895954;
    case 408u: goto L_0889595C;
    case 409u: goto L_0889596C;
    case 410u: goto L_08895974;
    case 411u: goto L_08895984;
    case 412u: goto L_0889598C;
    case 413u: goto L_0889599C;
    case 414u: goto L_088959A0;
    case 415u: goto L_088959A4;
    case 416u: goto L_088959B4;
    case 417u: goto L_088959BC;
    case 418u: goto L_088959CC;
    case 419u: goto L_088959D8;
    case 420u: goto L_088959E8;
    case 421u: goto L_088959F8;
    case 422u: goto L_08895A00;
    case 423u: goto L_08895A10;
    case 424u: goto L_08895A20;
    case 425u: goto L_08895A30;
    case 426u: goto L_08895A38;
    case 427u: goto L_08895A48;
    case 428u: goto L_08895A74;
    case 429u: goto L_08895A84;
    case 430u: goto L_08895A8C;
    case 431u: goto L_08895A98;
    case 432u: goto L_08895AAC;
    case 433u: goto L_08895ABC;
    case 434u: goto L_08895ACC;
    case 435u: goto L_08895AFC;
    case 436u: goto L_08895B14;
    case 437u: goto L_08895B24;
    case 438u: goto L_08895B54;
    case 439u: goto L_08895B60;
    case 440u: goto L_08895B68;
    case 441u: goto L_08895B80;
    case 442u: goto L_08895BBC;
    case 443u: goto L_08895BC4;
    case 444u: goto L_08895BD8;
    case 445u: goto L_08895BE4;
    case 446u: goto L_08895BEC;
    case 447u: goto L_08895BF4;
    case 448u: goto L_08895BFC;
    case 449u: goto L_08895C04;
    case 450u: goto L_08895C0C;
    case 451u: goto L_08895C40;
    case 452u: goto L_08895C54;
    case 453u: goto L_08895C64;
    case 454u: goto L_08895C6C;
    case 455u: goto L_08895CA4;
    case 456u: goto L_08895CC0;
    case 457u: goto L_08895CC8;
    case 458u: goto L_08895CD4;
    case 459u: goto L_08895CE8;
    case 460u: goto L_08895D00;
    case 461u: goto L_08895D08;
    case 462u: goto L_08895D14;
    case 463u: goto L_08895D2C;
    case 464u: goto L_08895D4C;
    case 465u: goto L_08895D58;
    case 466u: goto L_08895D60;
    case 467u: goto L_08895D6C;
    case 468u: goto L_08895D70;
    case 469u: goto L_08895D78;
    case 470u: goto L_08895D94;
    case 471u: goto L_08895DA4;
    case 472u: goto L_08895DAC;
    case 473u: goto L_08895DD8;
    case 474u: goto L_08895DF4;
    case 475u: goto L_08895DFC;
    case 476u: goto L_08895E04;
    case 477u: goto L_08895E0C;
    case 478u: goto L_08895E4C;
    case 479u: goto L_08895E58;
    case 480u: goto L_08895E64;
    case 481u: goto L_08895E6C;
    case 482u: goto L_08895E98;
    case 483u: goto L_08895EAC;
    case 484u: goto L_08895EBC;
    case 485u: goto L_08895EC4;
    case 486u: goto L_08895ECC;
    case 487u: goto L_08895EE4;
    case 488u: goto L_08895EF0;
    case 489u: goto L_08895F3C;
    case 490u: goto L_08895F54;
    case 491u: goto L_08895F78;
    case 492u: goto L_08895F84;
    case 493u: goto L_08895F8C;
    case 494u: goto L_08895F9C;
    case 495u: goto L_08895FAC;
    case 496u: goto L_08895FB8;
    case 497u: goto L_08895FBC;
    case 498u: goto L_08895FD8;
    case 499u: goto L_08895FE4;
    case 500u: goto L_08895FF0;
    case 501u: goto L_08896008;
    case 502u: goto L_08896010;
    case 503u: goto L_08896018;
    case 504u: goto L_08896020;
    case 505u: goto L_08896038;
    case 506u: goto L_08896048;
    case 507u: goto L_08896050;
    case 508u: goto L_08896060;
    case 509u: goto L_08896068;
    case 510u: goto L_0889607C;
    case 511u: goto L_08896088;
    case 512u: goto L_088960A0;
    case 513u: goto L_088960B0;
    case 514u: goto L_088960B8;
    case 515u: goto L_088960D0;
    case 516u: goto L_088960DC;
    case 517u: goto L_088960EC;
    case 518u: goto L_08896110;
    case 519u: goto L_08896130;
    case 520u: goto L_0889613C;
    case 521u: goto L_08896168;
    case 522u: goto L_08896170;
    case 523u: goto L_08896178;
    case 524u: goto L_08896188;
    case 525u: goto L_08896190;
    case 526u: goto L_088961A0;
    case 527u: goto L_088961B0;
    case 528u: goto L_088961B8;
    case 529u: goto L_088961D0;
    case 530u: goto L_088961DC;
    case 531u: goto L_088961EC;
    case 532u: goto L_088961F4;
    case 533u: goto L_08896204;
    case 534u: goto L_08896210;
    case 535u: goto L_08896248;
    case 536u: goto L_08896254;
    case 537u: goto L_08896260;
    case 538u: goto L_08896268;
    case 539u: goto L_08896270;
    case 540u: goto L_08896280;
    case 541u: goto L_08896288;
    case 542u: goto L_08896290;
    case 543u: goto L_088962A0;
    case 544u: goto L_088962A8;
    case 545u: goto L_088962B0;
    case 546u: goto L_088962B8;
    case 547u: goto L_088962BC;
    case 548u: goto L_088962C4;
    case 549u: goto L_088962D8;
    case 550u: goto L_088962DC;
    case 551u: goto L_088962E4;
    case 552u: goto L_088962F8;
    case 553u: goto L_08896304;
    case 554u: goto L_08896318;
    case 555u: goto L_08896320;
    case 556u: goto L_08896330;
    case 557u: goto L_08896338;
    case 558u: goto L_08896340;
    case 559u: goto L_08896350;
    case 560u: goto L_08896358;
    case 561u: goto L_08896360;
    case 562u: goto L_08896370;
    case 563u: goto L_08896384;
    case 564u: goto L_0889639C;
    case 565u: goto L_088963A4;
    case 566u: goto L_088963BC;
    case 567u: goto L_088963C4;
    case 568u: goto L_088963D8;
    case 569u: goto L_088963E0;
    case 570u: goto L_088963EC;
    case 571u: goto L_088963F4;
    case 572u: goto L_08896408;
    case 573u: goto L_08896410;
    case 574u: goto L_08896428;
    case 575u: goto L_08896430;
    case 576u: goto L_08896444;
    case 577u: goto L_0889644C;
    case 578u: goto L_0889645C;
    case 579u: goto L_08896488;
    case 580u: goto L_08896498;
    case 581u: goto L_088964AC;
    case 582u: goto L_088964CC;
    case 583u: goto L_088964E0;
    case 584u: goto L_08896500;
    case 585u: goto L_08896514;
    case 586u: goto L_08896548;
    case 587u: goto L_08896550;
    case 588u: goto L_08896558;
    case 589u: goto L_08896568;
    case 590u: goto L_08896570;
    case 591u: goto L_08896580;
    case 592u: goto L_08896588;
    case 593u: goto L_08896598;
    case 594u: goto L_088965A8;
    case 595u: goto L_088965B0;
    case 596u: goto L_088965C4;
    case 597u: goto L_088965CC;
    case 598u: goto L_088965D4;
    case 599u: goto L_088965E8;
    case 600u: goto L_088965F0;
    case 601u: goto L_08896600;
    case 602u: goto L_08896608;
    case 603u: goto L_0889661C;
    case 604u: goto L_08896624;
    case 605u: goto L_08896634;
    case 606u: goto L_0889663C;
    case 607u: goto L_08896648;
    case 608u: goto L_08896650;
    case 609u: goto L_08896660;
    case 610u: goto L_08896668;
    case 611u: goto L_08896678;
    case 612u: goto L_08896694;
    case 613u: goto L_088966A0;
    case 614u: goto L_088966AC;
    case 615u: goto L_088966B8;
    case 616u: goto L_088966D4;
    case 617u: goto L_088966E0;
    case 618u: goto L_088966F8;
    case 619u: goto L_08896704;
    case 620u: goto L_08896714;
    case 621u: goto L_08896724;
    case 622u: goto L_0889672C;
    case 623u: goto L_0889673C;
    case 624u: goto L_0889674C;
    case 625u: goto L_08896754;
    case 626u: goto L_08896764;
    case 627u: goto L_0889676C;
    case 628u: goto L_08896778;
    case 629u: goto L_08896780;
    case 630u: goto L_08896788;
    case 631u: goto L_08896798;
    case 632u: goto L_088967A8;
    case 633u: goto L_088967B8;
    case 634u: goto L_088967C4;
    case 635u: goto L_088967D4;
    case 636u: goto L_088967DC;
    case 637u: goto L_088967E4;
    case 638u: goto L_088967F4;
    case 639u: goto L_088967FC;
    case 640u: goto L_08896810;
    case 641u: goto L_08896820;
    case 642u: goto L_0889682C;
    case 643u: goto L_0889683C;
    case 644u: goto L_08896854;
    case 645u: goto L_0889685C;
    case 646u: goto L_0889686C;
    case 647u: goto L_0889687C;
    case 648u: goto L_08896890;
    case 649u: goto L_088968A4;
    case 650u: goto L_088968B0;
    case 651u: goto L_088968BC;
    case 652u: goto L_088968C8;
    case 653u: goto L_088968D8;
    case 654u: goto L_088968E8;
    case 655u: goto L_088968F0;
    case 656u: goto L_08896904;
    case 657u: goto L_08896910;
    case 658u: goto L_0889691C;
    case 659u: goto L_0889692C;
    case 660u: goto L_08896934;
    case 661u: goto L_08896948;
    case 662u: goto L_08896960;
    case 663u: goto L_0889696C;
    case 664u: goto L_08896984;
    case 665u: goto L_08896990;
    case 666u: goto L_0889699C;
    case 667u: goto L_088969AC;
    case 668u: goto L_088969B4;
    case 669u: goto L_088969D0;
    case 670u: goto L_088969DC;
    case 671u: goto L_088969E4;
    case 672u: goto L_088969F4;
    case 673u: goto L_088969FC;
    case 674u: goto L_08896A08;
    case 675u: goto L_08896A10;
    case 676u: goto L_08896A18;
    case 677u: goto L_08896A28;
    case 678u: goto L_08896A30;
    case 679u: goto L_08896A3C;
    case 680u: goto L_08896A44;
    case 681u: goto L_08896A50;
    case 682u: goto L_08896A60;
    case 683u: goto L_08896A6C;
    case 684u: goto L_08896A74;
    case 685u: goto L_08896A84;
    case 686u: goto L_08896A90;
    case 687u: goto L_08896A98;
    case 688u: goto L_08896AB0;
    case 689u: goto L_08896AB8;
    case 690u: goto L_08896AC0;
    case 691u: goto L_08896ADC;
    case 692u: goto L_08896AEC;
    case 693u: goto L_08896AFC;
    case 694u: goto L_08896B0C;
    case 695u: goto L_08896B14;
    case 696u: goto L_08896B34;
    case 697u: goto L_08896B3C;
    case 698u: goto L_08896B4C;
    case 699u: goto L_08896B5C;
    case 700u: goto L_08896B60;
    case 701u: goto L_08896B70;
    case 702u: goto L_08896B80;
    case 703u: goto L_08896B8C;
    case 704u: goto L_08896B9C;
    case 705u: goto L_08896BA8;
    case 706u: goto L_08896C30;
    case 707u: goto L_08896C3C;
    case 708u: goto L_08896C7C;
    case 709u: goto L_08896C88;
    case 710u: goto L_08896C90;
    case 711u: goto L_08896C98;
    case 712u: goto L_08896CB0;
    case 713u: goto L_08896CC0;
    case 714u: goto L_08896CCC;
    case 715u: goto L_08896CDC;
    case 716u: goto L_08896CE8;
    case 717u: goto L_08896D20;
    case 718u: goto L_08896D38;
    case 719u: goto L_08896D54;
    case 720u: goto L_08896D60;
    case 721u: goto L_08896D70;
    case 722u: goto L_08896D7C;
    case 723u: goto L_08896D84;
    case 724u: goto L_08896D94;
    case 725u: goto L_08896DA4;
    case 726u: goto L_08896DAC;
    case 727u: goto L_08896DB4;
    case 728u: goto L_08896DD0;
    case 729u: goto L_08896DDC;
    case 730u: goto L_08896DE0;
    case 731u: goto L_08896DFC;
    case 732u: goto L_08896E08;
    case 733u: goto L_08896E14;
    case 734u: goto L_08896E2C;
    case 735u: goto L_08896E34;
    case 736u: goto L_08896E3C;
    case 737u: goto L_08896E44;
    case 738u: goto L_08896E50;
    case 739u: goto L_08896E5C;
    case 740u: goto L_08896E70;
    case 741u: goto L_08896E98;
    case 742u: goto L_08896EA4;
    case 743u: goto L_08896ECC;
    case 744u: goto L_08896F00;
    case 745u: goto L_08896F0C;
    case 746u: goto L_08896F24;
    case 747u: goto L_08896F30;
    case 748u: goto L_08896F44;
    case 749u: goto L_08896F4C;
    case 750u: goto L_08896F54;
    case 751u: goto L_08896F60;
    case 752u: goto L_08896F6C;
    case 753u: goto L_08896F78;
    case 754u: goto L_08896F7C;
    case 755u: goto L_08896F84;
    case 756u: goto L_08896F90;
    case 757u: goto L_08896F9C;
    case 758u: goto L_08896FA8;
    case 759u: goto L_08896FAC;
    case 760u: goto L_08896FB4;
    case 761u: goto L_08896FDC;
    case 762u: goto L_08896FFC;
    case 763u: goto L_0889700C;
    case 764u: goto L_08897018;
    case 765u: goto L_08897034;
    case 766u: goto L_08897040;
    case 767u: goto L_0889704C;
    case 768u: goto L_08897054;
    case 769u: goto L_08897060;
    case 770u: goto L_0889706C;
    case 771u: goto L_08897084;
    case 772u: goto L_0889708C;
    case 773u: goto L_088970A4;
    case 774u: goto L_088970AC;
    case 775u: goto L_088970B4;
    case 776u: goto L_088970C4;
    case 777u: goto L_088970D4;
    case 778u: goto L_088970E4;
    case 779u: goto L_088970F0;
    case 780u: goto L_08897100;
    case 781u: goto L_08897108;
    case 782u: goto L_08897114;
    case 783u: goto L_08897128;
    case 784u: goto L_0889713C;
    case 785u: goto L_08897154;
    case 786u: goto L_0889716C;
    case 787u: goto L_08897174;
    case 788u: goto L_08897180;
    case 789u: goto L_0889719C;
    case 790u: goto L_088971A4;
    case 791u: goto L_088971B8;
    case 792u: goto L_088971C0;
    case 793u: goto L_088971D4;
    case 794u: goto L_088971D8;
    case 795u: goto L_088971E4;
    case 796u: goto L_088971F0;
    case 797u: goto L_088971F8;
    case 798u: goto L_08897200;
    case 799u: goto L_08897218;
    case 800u: goto L_08897220;
    case 801u: goto L_0889722C;
    case 802u: goto L_08897238;
    case 803u: goto L_08897244;
    case 804u: goto L_08897258;
    case 805u: goto L_08897270;
    case 806u: goto L_08897278;
    case 807u: goto L_088972B4;
    case 808u: goto L_088972BC;
    case 809u: goto L_088972CC;
    case 810u: goto L_088972D4;
    case 811u: goto L_088972E0;
    case 812u: goto L_088972F4;
    case 813u: goto L_08897308;
    case 814u: goto L_08897314;
    case 815u: goto L_08897324;
    case 816u: goto L_08897338;
    case 817u: goto L_08897344;
    case 818u: goto L_0889734C;
    case 819u: goto L_08897364;
    case 820u: goto L_08897370;
    case 821u: goto L_08897378;
    case 822u: goto L_08897380;
    case 823u: goto L_08897390;
    case 824u: goto L_08897398;
    case 825u: goto L_088973A8;
    case 826u: goto L_088973B4;
    case 827u: goto L_088973C0;
    case 828u: goto L_088973C8;
    case 829u: goto L_088973D4;
    case 830u: goto L_088973D8;
    case 831u: goto L_088973E0;
    case 832u: goto L_088973E8;
    case 833u: goto L_088973F4;
    case 834u: goto L_08897410;
    case 835u: goto L_08897420;
    case 836u: goto L_0889742C;
    case 837u: goto L_0889743C;
    case 838u: goto L_08897444;
    case 839u: goto L_08897450;
    case 840u: goto L_08897460;
    case 841u: goto L_08897478;
    case 842u: goto L_08897480;
    case 843u: goto L_0889748C;
    case 844u: goto L_088974A4;
    case 845u: goto L_088974AC;
    case 846u: goto L_088974BC;
    case 847u: goto L_088974C4;
    case 848u: goto L_088974CC;
    case 849u: goto L_088974D8;
    case 850u: goto L_088974E8;
    case 851u: goto L_088974F8;
    case 852u: goto L_08897508;
    case 853u: goto L_08897520;
    case 854u: goto L_0889752C;
    case 855u: goto L_08897534;
    case 856u: goto L_08897540;
    case 857u: goto L_08897548;
    case 858u: goto L_08897550;
    case 859u: goto L_08897558;
    case 860u: goto L_08897560;
    case 861u: goto L_08897578;
    case 862u: goto L_08897580;
    case 863u: goto L_088975A0;
    case 864u: goto L_088975AC;
    case 865u: goto L_088975B4;
    case 866u: goto L_088975C0;
    case 867u: goto L_088975C8;
    case 868u: goto L_088975D0;
    case 869u: goto L_088975DC;
    case 870u: goto L_088975E4;
    case 871u: goto L_088975FC;
    case 872u: goto L_08897608;
    case 873u: goto L_08897610;
    case 874u: goto L_0889761C;
    case 875u: goto L_08897624;
    case 876u: goto L_08897630;
    case 877u: goto L_08897638;
    case 878u: goto L_08897644;
    case 879u: goto L_08897650;
    case 880u: goto L_08897658;
    case 881u: goto L_08897664;
    case 882u: goto L_0889766C;
    case 883u: goto L_08897678;
    case 884u: goto L_08897688;
    case 885u: goto L_08897690;
    case 886u: goto L_0889769C;
    case 887u: goto L_088976A8;
    case 888u: goto L_088976B8;
    case 889u: goto L_088976C0;
    case 890u: goto L_088976D8;
    case 891u: goto L_088976E4;
    case 892u: goto L_088976EC;
    case 893u: goto L_088976F4;
    case 894u: goto L_08897700;
    case 895u: goto L_08897710;
    case 896u: goto L_0889771C;
    case 897u: goto L_08897728;
    case 898u: goto L_08897730;
    case 899u: goto L_08897740;
    case 900u: goto L_08897758;
    case 901u: goto L_08897764;
    case 902u: goto L_0889776C;
    case 903u: goto L_08897778;
    case 904u: goto L_08897788;
    case 905u: goto L_08897794;
    case 906u: goto L_088977A8;
    case 907u: goto L_088977B8;
    case 908u: goto L_088977C0;
    case 909u: goto L_088977D0;
    case 910u: goto L_088977D8;
    case 911u: goto L_088977E4;
    case 912u: goto L_088977F0;
    case 913u: goto L_088977F8;
    case 914u: goto L_08897804;
    case 915u: goto L_0889780C;
    case 916u: goto L_08897818;
    case 917u: goto L_0889782C;
    case 918u: goto L_08897838;
    case 919u: goto L_0889784C;
    case 920u: goto L_08897858;
    case 921u: goto L_08897864;
    case 922u: goto L_08897878;
    case 923u: goto L_08897880;
    case 924u: goto L_08897898;
    case 925u: goto L_088978A4;
    case 926u: goto L_088978B8;
    case 927u: goto L_088978C4;
    case 928u: goto L_088978CC;
    case 929u: goto L_088978D8;
    case 930u: goto L_088978EC;
    case 931u: goto L_088978F8;
    case 932u: goto L_08897900;
    case 933u: goto L_0889790C;
    case 934u: goto L_08897914;
    case 935u: goto L_08897920;
    case 936u: goto L_08897928;
    case 937u: goto L_08897934;
    case 938u: goto L_0889793C;
    case 939u: goto L_08897948;
    case 940u: goto L_08897950;
    case 941u: goto L_0889795C;
    case 942u: goto L_08897964;
    case 943u: goto L_0889796C;
    case 944u: goto L_08897978;
    case 945u: goto L_0889798C;
    case 946u: goto L_0889799C;
    case 947u: goto L_088979A4;
    case 948u: goto L_088979C0;
    case 949u: goto L_088979C8;
    case 950u: goto L_088979D4;
    case 951u: goto L_088979DC;
    case 952u: goto L_088979E4;
    case 953u: goto L_088979F4;
    case 954u: goto L_08897A04;
    case 955u: goto L_08897A2C;
    case 956u: goto L_08897A38;
    case 957u: goto L_08897A48;
    case 958u: goto L_08897A54;
    case 959u: goto L_08897A60;
    case 960u: goto L_08897A6C;
    case 961u: goto L_08897A78;
    case 962u: goto L_08897A80;
    case 963u: goto L_08897A8C;
    case 964u: goto L_08897A98;
    case 965u: goto L_08897AA4;
    case 966u: goto L_08897AE8;
    case 967u: goto L_08897AFC;
    case 968u: goto L_08897B08;
    case 969u: goto L_08897B14;
    case 970u: goto L_08897B20;
    case 971u: goto L_08897B2C;
    case 972u: goto L_08897B44;
    case 973u: goto L_08897B54;
    case 974u: goto L_08897B60;
    case 975u: goto L_08897B6C;
    case 976u: goto L_08897B74;
    case 977u: goto L_08897B80;
    case 978u: goto L_08897B8C;
    case 979u: goto L_08897B98;
    case 980u: goto L_08897BA0;
    case 981u: goto L_08897BB0;
    case 982u: goto L_08897BC0;
    case 983u: goto L_08897BD8;
    case 984u: goto L_08897BF0;
    case 985u: goto L_08897BFC;
    case 986u: goto L_08897C04;
    case 987u: goto L_08897C0C;
    case 988u: goto L_08897C1C;
    case 989u: goto L_08897C24;
    case 990u: goto L_08897C34;
    case 991u: goto L_08897C50;
    case 992u: goto L_08897C58;
    case 993u: goto L_08897C70;
    case 994u: goto L_08897C78;
    case 995u: goto L_08897C8C;
    case 996u: goto L_08897C98;
    case 997u: goto L_08897CA0;
    case 998u: goto L_08897CA8;
    case 999u: goto L_08897CBC;
    case 1000u: goto L_08897CC4;
    case 1001u: goto L_08897CCC;
    case 1002u: goto L_08897CD4;
    case 1003u: goto L_08897CE4;
    case 1004u: goto L_08897CEC;
    case 1005u: goto L_08897CF8;
    case 1006u: goto L_08897D08;
    case 1007u: goto L_08897D14;
    case 1008u: goto L_08897D4C;
    case 1009u: goto L_08897D64;
    case 1010u: goto L_08897D78;
    case 1011u: goto L_08897D84;
    case 1012u: goto L_08897D94;
    case 1013u: goto L_08897DA0;
    case 1014u: goto L_08897DB0;
    case 1015u: goto L_08897DBC;
    case 1016u: goto L_08897DC4;
    case 1017u: goto L_08897DD4;
    case 1018u: goto L_08897DE4;
    case 1019u: goto L_08897DF0;
    case 1020u: goto L_08897DF4;
    case 1021u: goto L_08897E10;
    case 1022u: goto L_08897E18;
    case 1023u: goto L_08897E28;
    case 1024u: goto L_08897E30;
    case 1025u: goto L_08897E40;
    case 1026u: goto L_08897E48;
    case 1027u: goto L_08897E54;
    case 1028u: goto L_08897E64;
    case 1029u: goto L_08897E70;
    case 1030u: goto L_08897E78;
    case 1031u: goto L_08897E84;
    case 1032u: goto L_08897E8C;
    case 1033u: goto L_08897E94;
    case 1034u: goto L_08897EA8;
    case 1035u: goto L_08897EB0;
    case 1036u: goto L_08897EB8;
    case 1037u: goto L_08897EC0;
    case 1038u: goto L_08897EC8;
    case 1039u: goto L_08897ED4;
    case 1040u: goto L_08897EDC;
    case 1041u: goto L_08897EE4;
    case 1042u: goto L_08897EF4;
    case 1043u: goto L_08897F10;
    case 1044u: goto L_08897F18;
    case 1045u: goto L_08897F24;
    case 1046u: goto L_08897F38;
    case 1047u: goto L_08897F40;
    case 1048u: goto L_08897F48;
    case 1049u: goto L_08897F50;
    case 1050u: goto L_08897F58;
    case 1051u: goto L_08897F60;
    case 1052u: goto L_08897F6C;
    case 1053u: goto L_08897F80;
    case 1054u: goto L_08897F88;
    case 1055u: goto L_08897F98;
    case 1056u: goto L_08897FA4;
    case 1057u: goto L_08897FAC;
    case 1058u: goto L_08897FB4;
    case 1059u: goto L_08897FB8;
    case 1060u: goto L_08897FC8;
    case 1061u: goto L_08897FD8;
    case 1062u: goto L_08897FE4;
    case 1063u: goto L_08897FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08894000:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088940A0;
      }
      goto L_08894008;
    }
L_08894008:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889405C;
      }
      goto L_08894018;
    }
L_08894018:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889405C;
      }
      goto L_0889402C;
    }
L_0889402C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889405C;
      }
      goto L_0889403C;
    }
L_0889403C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08894070;
      }
      goto L_0889405C;
    }
L_0889405C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08894070;
L_08894070:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088940E4;
      }
      goto L_088940A0;
    }
L_088940A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088940E4;
      }
      goto L_088940AC;
    }
L_088940AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_088940E4;
L_088940E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(54) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 66u, 0x088983B4u>(ctx, &aot_mem); return;
      }
      goto L_088940F8;
    }
L_088940F8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(2656)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08894110:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894140;
      }
      goto L_0889411C;
    }
L_0889411C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889416C;
      }
      goto L_0889412C;
    }
L_0889412C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[31] = (0x08894138u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 224u, 0x088D915Cu>(ctx, &aot_mem) && ctx.pc == 0x08894138u) goto L_08894138;
    return;
L_08894138:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889416C;
      }
      goto L_08894140;
    }
L_08894140:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 31u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[31] = (0x0889416Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 535u, 0x08886BB0u>(ctx, &aot_mem) && ctx.pc == 0x0889416Cu) goto L_0889416C;
    return;
L_0889416C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 66u, 0x088983B4u>(ctx, &aot_mem); return;
      }
      goto L_08894174;
    }
L_08894174:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088941B4;
      }
      goto L_08894180;
    }
L_08894180:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 31u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[31] = (0x088941ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 535u, 0x08886BB0u>(ctx, &aot_mem) && ctx.pc == 0x088941ACu) goto L_088941AC;
    return;
L_088941AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889438C;
      }
      goto L_088941B4;
    }
L_088941B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1796)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889438C;
      }
      goto L_088941CC;
    }
L_088941CC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(15728))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[7] = (0u | 6u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x0889422Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 158u, 0x088C0EF8u>(ctx, &aot_mem) && ctx.pc == 0x0889422Cu) goto L_0889422C;
    return;
L_0889422C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(208))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894344;
      }
      goto L_08894240;
    }
L_08894240:
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 36u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08894274;
      }
      goto L_0889425C;
    }
L_0889425C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08894274;
      }
      goto L_0889426C;
    }
L_0889426C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08894328;
      }
      goto L_08894274;
    }
L_08894274:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_088942B8;
      }
      goto L_088942A8;
    }
L_088942A8:
    ctx.gpr[31] = (0x088942B0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 858u, 0x0889FE9Cu>(ctx, &aot_mem) && ctx.pc == 0x088942B0u) goto L_088942B0;
    return;
L_088942B0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088942C0;
      }
      goto L_088942B8;
    }
L_088942B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08894328;
      }
      goto L_088942C0;
    }
L_088942C0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
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
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08894328;
      }
      goto L_0889430C;
    }
L_0889430C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
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
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    goto L_08894328;
L_08894328:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[4] << 16u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(208))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08894240;
      }
      goto L_08894344;
    }
L_08894344:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894364;
      }
      goto L_0889434C;
    }
L_0889434C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[31] = (0x0889435Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x0889435Cu) goto L_0889435C;
    return;
L_0889435C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889437C;
      }
      goto L_08894364;
    }
L_08894364:
    ctx.gpr[31] = (0x0889436Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 535u, 0x08886BB0u>(ctx, &aot_mem) && ctx.pc == 0x0889436Cu) goto L_0889436C;
    return;
L_0889436C:
    ctx.gpr[31] = (0x08894374u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x08894374u) goto L_08894374;
    return;
L_08894374:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 66u, 0x088983B4u>(ctx, &aot_mem); return;
      }
      goto L_0889437C;
    }
L_0889437C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1796), ctx.gpr[4]);
    goto L_0889438C;
L_0889438C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 66u, 0x088983B4u>(ctx, &aot_mem); return;
      }
      goto L_08894394;
    }
L_08894394:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088943A0u);
    ctx.gpr[5] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088943A0u) goto L_088943A0;
    return;
L_088943A0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088943F4;
      }
      goto L_088943A8;
    }
L_088943A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088943F4;
      }
      goto L_088943C0;
    }
L_088943C0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088943CCu);
    ctx.gpr[5] = (0u | 137u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x088943CCu) goto L_088943CC;
    return;
L_088943CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088943E4u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088943E4u) goto L_088943E4;
    return;
L_088943E4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
    goto L_088943F4;
L_088943F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 66u, 0x088983B4u>(ctx, &aot_mem); return;
      }
      goto L_088943FC;
    }
L_088943FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08894414;
      }
      goto L_08894408;
    }
L_08894408:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(592), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 66u, 0x088983B4u>(ctx, &aot_mem); return;
      }
      goto L_08894414;
    }
L_08894414:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 50u);
      if (branch_taken) {
          goto L_08894458;
      }
      goto L_08894424;
    }
L_08894424:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889444C;
      }
      goto L_08894430;
    }
L_08894430:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_0889444C;
    }
    goto L_0889443C;
L_0889443C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x08894448u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x08894448u) goto L_08894448;
    return;
L_08894448:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_0889444C;
L_0889444C:
    ctx.gpr[31] = (0x08894454u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x08894454u) goto L_08894454;
    return;
L_08894454:
    ctx.gpr[4] = (0u | 50u);
    goto L_08894458;
L_08894458:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 66u, 0x088983B4u>(ctx, &aot_mem); return;
      }
      goto L_08894464;
    }
L_08894464:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08894480;
      }
      goto L_08894474;
    }
L_08894474:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(592), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 66u, 0x088983B4u>(ctx, &aot_mem); return;
      }
      goto L_08894480;
    }
L_08894480:
    ctx.gpr[31] = (0x08894488u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 748u, 0x0899FCA0u>(ctx, &aot_mem) && ctx.pc == 0x08894488u) goto L_08894488;
    return;
L_08894488:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088944D8;
      }
      goto L_08894494;
    }
L_08894494:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1800)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088944E8;
      }
      goto L_088944A0;
    }
L_088944A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1800)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088944E8;
      }
      goto L_088944B8;
    }
L_088944B8:
    ctx.gpr[31] = (0x088944C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A295CCu>(ctx, &aot_mem) && ctx.pc == 0x088944C0u) goto L_088944C0;
    return;
L_088944C0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088944D0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 566u, 0x08A2ABB4u>(ctx, &aot_mem) && ctx.pc == 0x088944D0u) goto L_088944D0;
    return;
L_088944D0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1800), 0u);
      if (branch_taken) {
          goto L_088944E8;
      }
      goto L_088944D8;
    }
L_088944D8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(592), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088944E8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x088944E8u) goto L_088944E8;
    return;
L_088944E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 66u, 0x088983B4u>(ctx, &aot_mem); return;
      }
      goto L_088944F0;
    }
L_088944F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889454C;
      }
      goto L_088944FC;
    }
L_088944FC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(592), 0u);
    ctx.gpr[31] = (0x08894508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08894508u) goto L_08894508;
    return;
L_08894508:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15756)));
    ctx.gpr[31] = (0x08894520u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15752)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x08894520u) goto L_08894520;
    return;
L_08894520:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08894544u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 270u, 0x089A13B4u>(ctx, &aot_mem) && ctx.pc == 0x08894544u) goto L_08894544;
    return;
L_08894544:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088945C0;
      }
      goto L_0889454C;
    }
L_0889454C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088945C0;
      }
      goto L_08894560;
    }
L_08894560:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088945C0;
      }
      goto L_08894574;
    }
L_08894574:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(592), 0u);
    ctx.gpr[31] = (0x08894580u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08894580u) goto L_08894580;
    return;
L_08894580:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15756)));
    ctx.gpr[31] = (0x08894598u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15752)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x08894598u) goto L_08894598;
    return;
L_08894598:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x088945BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 270u, 0x089A13B4u>(ctx, &aot_mem) && ctx.pc == 0x088945BCu) goto L_088945BC;
    return;
L_088945BC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(600), 0u);
    goto L_088945C0;
L_088945C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 66u, 0x088983B4u>(ctx, &aot_mem); return;
      }
      goto L_088945C8;
    }
L_088945C8:
    ctx.gpr[31] = (0x088945D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 748u, 0x0899FCA0u>(ctx, &aot_mem) && ctx.pc == 0x088945D0u) goto L_088945D0;
    return;
L_088945D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894638;
      }
      goto L_088945DC;
    }
L_088945DC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7808)));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08894638;
      }
      goto L_08894600;
    }
L_08894600:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6976)));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08894638;
      }
      goto L_08894620;
    }
L_08894620:
    ctx.gpr[31] = (0x08894628u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A295CCu>(ctx, &aot_mem) && ctx.pc == 0x08894628u) goto L_08894628;
    return;
L_08894628:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08894638u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 510u, 0x08A2A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08894638u) goto L_08894638;
    return;
L_08894638:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 66u, 0x088983B4u>(ctx, &aot_mem); return;
      }
      goto L_08894640;
    }
L_08894640:
    ctx.gpr[31] = (0x08894648u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 748u, 0x0899FCA0u>(ctx, &aot_mem) && ctx.pc == 0x08894648u) goto L_08894648;
    return;
L_08894648:
    ctx.gpr[31] = (0x08894650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A295CCu>(ctx, &aot_mem) && ctx.pc == 0x08894650u) goto L_08894650;
    return;
L_08894650:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08894660u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 719u, 0x08A2B500u>(ctx, &aot_mem) && ctx.pc == 0x08894660u) goto L_08894660;
    return;
L_08894660:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088946C8;
      }
      goto L_08894670;
    }
L_08894670:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    ctx.gpr[6] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088946C8;
      }
      goto L_08894680;
    }
L_08894680:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088946C8;
      }
      goto L_08894688;
    }
L_08894688:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088946C8;
      }
      goto L_08894694;
    }
L_08894694:
    ctx.gpr[31] = (0x0889469Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x0889469Cu) goto L_0889469C;
    return;
L_0889469C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088946C8;
      }
      goto L_088946A4;
    }
L_088946A4:
    ctx.gpr[4] = (0u | 5000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 19u);
    ctx.gpr[31] = (0x088946C0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 537u, 0x089BA35Cu>(ctx, &aot_mem) && ctx.pc == 0x088946C0u) goto L_088946C0;
    return;
L_088946C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08894838;
      }
      goto L_088946C8;
    }
L_088946C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894838;
      }
      goto L_088946D4;
    }
L_088946D4:
    ctx.gpr[31] = (0x088946DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A295CCu>(ctx, &aot_mem) && ctx.pc == 0x088946DCu) goto L_088946DC;
    return;
L_088946DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088946ECu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 719u, 0x08A2B500u>(ctx, &aot_mem) && ctx.pc == 0x088946ECu) goto L_088946EC;
    return;
L_088946EC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894838;
      }
      goto L_088946F8;
    }
L_088946F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(292)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08894750;
      }
      goto L_08894730;
    }
L_08894730:
    ctx.gpr[31] = (0x08894738u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A295CCu>(ctx, &aot_mem) && ctx.pc == 0x08894738u) goto L_08894738;
    return;
L_08894738:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08894748u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 510u, 0x08A2A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08894748u) goto L_08894748;
    return;
L_08894748:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08894838;
      }
      goto L_08894750;
    }
L_08894750:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088947B8;
      }
      goto L_0889475C;
    }
L_0889475C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
        goto L_0889477C;
    }
    goto L_08894768;
L_08894768:
    ctx.gpr[31] = (0x08894770u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x08894770u) goto L_08894770;
    return;
L_08894770:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088947B8;
      }
      goto L_08894778;
    }
L_08894778:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    goto L_0889477C;
L_0889477C:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
        goto L_0889479C;
    }
    goto L_08894784;
L_08894784:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 62u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088947B8;
      }
      goto L_08894798;
    }
L_08894798:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    goto L_0889479C;
L_0889479C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088947D8;
      }
      goto L_088947A4;
    }
L_088947A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088947D8;
      }
      goto L_088947B8;
    }
L_088947B8:
    ctx.gpr[31] = (0x088947C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A295CCu>(ctx, &aot_mem) && ctx.pc == 0x088947C0u) goto L_088947C0;
    return;
L_088947C0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088947D0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 510u, 0x08A2A90Cu>(ctx, &aot_mem) && ctx.pc == 0x088947D0u) goto L_088947D0;
    return;
L_088947D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08894838;
      }
      goto L_088947D8;
    }
L_088947D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(685)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894818;
      }
      goto L_088947E4;
    }
L_088947E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    ctx.gpr[5] = (0u | 80u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08894838;
      }
      goto L_088947F8;
    }
L_088947F8:
    ctx.gpr[31] = (0x08894800u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A295CCu>(ctx, &aot_mem) && ctx.pc == 0x08894800u) goto L_08894800;
    return;
L_08894800:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08894810u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 510u, 0x08A2A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08894810u) goto L_08894810;
    return;
L_08894810:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 88u, 0x088984A8u>(ctx, &aot_mem); return;
      }
      goto L_08894818;
    }
L_08894818:
    ctx.gpr[31] = (0x08894820u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A295CCu>(ctx, &aot_mem) && ctx.pc == 0x08894820u) goto L_08894820;
    return;
L_08894820:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08894830u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 510u, 0x08A2A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08894830u) goto L_08894830;
    return;
L_08894830:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 88u, 0x088984A8u>(ctx, &aot_mem); return;
      }
      goto L_08894838;
    }
L_08894838:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 66u, 0x088983B4u>(ctx, &aot_mem); return;
      }
      goto L_08894840;
    }
L_08894840:
    ctx.gpr[31] = (0x08894848u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 748u, 0x0899FCA0u>(ctx, &aot_mem) && ctx.pc == 0x08894848u) goto L_08894848;
    return;
L_08894848:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894B48;
      }
      goto L_08894854;
    }
L_08894854:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_08894898;
    }
    goto L_08894898;
L_08894898:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[5] = (16928u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
        goto L_088948DC;
    }
    goto L_088948DC;
L_088948DC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[5] = (16928u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u | 99u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
        goto L_08894920;
    }
    goto L_08894920;
L_08894920:
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[6] = (16928u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[6] = (16968u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (0u | 99u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
        goto L_08894964;
    }
    goto L_08894964;
L_08894964:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[8] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08894A94;
      }
      goto L_0889497C;
    }
L_0889497C:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08894A84;
      }
      goto L_0889498C;
    }
L_0889498C:
    ctx.gpr[9] = (2227u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[10] = (ctx.gpr[7] << 5u);
    ctx.gpr[11] = (ctx.gpr[7] + ctx.gpr[10]);
    ctx.gpr[11] = (ctx.gpr[11] << 2u);
    ctx.gpr[10] = (ctx.gpr[11] - ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[8] + ctx.gpr[10]);
    ctx.gpr[11] = (ctx.gpr[10] << 4u);
    ctx.gpr[10] = (ctx.gpr[11] - ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[10] << 2u);
    ctx.gpr[10] = (ctx.gpr[10] - ctx.gpr[11]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(20));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894A74;
      }
      goto L_088949CC;
    }
L_088949CC:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(68)));
    ctx.gpr[11] = (ctx.gpr[11] & 14u);
    ctx.gpr[2] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08894A6C;
      }
      goto L_088949E8;
    }
L_088949E8:
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[11] = (ctx.gpr[11] & 2u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894A6C;
      }
      goto L_088949F8;
    }
L_088949F8:
    ctx.gpr[11] = (ctx.gpr[10] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[11] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[11] = (14289u << 16u);
    ctx.gpr[11] = (ctx.gpr[11] | 46871u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08894A6C;
      }
      goto L_08894A28;
    }
L_08894A28:
    ctx.gpr[11] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[11] = (ctx.gpr[10] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[11] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[11] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08894A6C;
      }
      goto L_08894A64;
    }
L_08894A64:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[17] = (ctx.gpr[10] | 0u);
    goto L_08894A6C;
L_08894A6C:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_088949CC;
      }
      goto L_08894A74;
    }
L_08894A74:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889498C;
      }
      goto L_08894A84;
    }
L_08894A84:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889497C;
      }
      goto L_08894A94;
    }
L_08894A94:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894B48;
      }
      goto L_08894A9C;
    }
L_08894A9C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(540)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(544)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894B3C;
      }
      goto L_08894AB4;
    }
L_08894AB4:
    ctx.gpr[31] = (0x08894ABCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A295CCu>(ctx, &aot_mem) && ctx.pc == 0x08894ABCu) goto L_08894ABC;
    return;
L_08894ABC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08894ACCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 510u, 0x08A2A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08894ACCu) goto L_08894ACC;
    return;
L_08894ACC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 17u);
    ctx.gpr[31] = (0x08894ADCu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x08894ADCu) goto L_08894ADC;
    return;
L_08894ADC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] | 1024u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[31] = (0x08894B00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08894B00u) goto L_08894B00;
    return;
L_08894B00:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08894B10u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 771u, 0x0889FA94u>(ctx, &aot_mem) && ctx.pc == 0x08894B10u) goto L_08894B10;
    return;
L_08894B10:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08894B28;
      }
      goto L_08894B18;
    }
L_08894B18:
    ctx.gpr[31] = (0x08894B20u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 786u, 0x0889FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08894B20u) goto L_08894B20;
    return;
L_08894B20:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894B34;
      }
      goto L_08894B28;
    }
L_08894B28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    goto L_08894B34;
L_08894B34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08894B48;
      }
      goto L_08894B3C;
    }
L_08894B3C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08894B48u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 881u, 0x08892EE0u>(ctx, &aot_mem) && ctx.pc == 0x08894B48u) goto L_08894B48;
    return;
L_08894B48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 66u, 0x088983B4u>(ctx, &aot_mem); return;
      }
      goto L_08894B50;
    }
L_08894B50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1772)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894C10;
      }
      goto L_08894B68;
    }
L_08894B68:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894BA0;
      }
      goto L_08894B74;
    }
L_08894B74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894BA0;
      }
      goto L_08894B80;
    }
L_08894B80:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08894B90u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x08894B90u) goto L_08894B90;
    return;
L_08894B90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] | 128u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08894C10;
      }
      goto L_08894BA0;
    }
L_08894BA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08894C10;
      }
      goto L_08894BB0;
    }
L_08894BB0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1360), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1364), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08894BFCu);
    ctx.gpr[6] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 353u, 0x089A18ACu>(ctx, &aot_mem) && ctx.pc == 0x08894BFCu) goto L_08894BFC;
    return;
L_08894BFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
    goto L_08894C10;
L_08894C10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 66u, 0x088983B4u>(ctx, &aot_mem); return;
      }
      goto L_08894C18;
    }
L_08894C18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894C64;
      }
      goto L_08894C24;
    }
L_08894C24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 29u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08894C64;
      }
      goto L_08894C34;
    }
L_08894C34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08894C64;
      }
      goto L_08894C44;
    }
L_08894C44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08894C64;
      }
      goto L_08894C54;
    }
L_08894C54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08894C64u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 670u, 0x089A2CB4u>(ctx, &aot_mem) && ctx.pc == 0x08894C64u) goto L_08894C64;
    return;
L_08894C64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 66u, 0x088983B4u>(ctx, &aot_mem); return;
      }
      goto L_08894C6C;
    }
L_08894C6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894D3C;
      }
      goto L_08894C78;
    }
L_08894C78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1800)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894CC8;
      }
      goto L_08894C90;
    }
L_08894C90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08894D60;
      }
      goto L_08894CA0;
    }
L_08894CA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08894D60;
      }
      goto L_08894CB0;
    }
L_08894CB0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08894CC0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 670u, 0x089A2CB4u>(ctx, &aot_mem) && ctx.pc == 0x08894CC0u) goto L_08894CC0;
    return;
L_08894CC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08894D60;
      }
      goto L_08894CC8;
    }
L_08894CC8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08894D60;
      }
      goto L_08894CD4;
    }
L_08894CD4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08894CE0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 881u, 0x08892EE0u>(ctx, &aot_mem) && ctx.pc == 0x08894CE0u) goto L_08894CE0;
    return;
L_08894CE0:
    ctx.gpr[31] = (0x08894CE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08894CE8u) goto L_08894CE8;
    return;
L_08894CE8:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
        goto L_08894D04;
    }
    goto L_08894CF4;
L_08894CF4:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08894D04;
      }
      goto L_08894D04;
    }
L_08894D04:
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08894D14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 270u, 0x089A13B4u>(ctx, &aot_mem) && ctx.pc == 0x08894D14u) goto L_08894D14;
    return;
L_08894D14:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1800), ctx.gpr[4]);
    ctx.gpr[31] = (0x08894D2Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x08894D2Cu) goto L_08894D2C;
    return;
L_08894D2C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894D60;
      }
      goto L_08894D34;
    }
L_08894D34:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1332), 0u);
      if (branch_taken) {
          goto L_08894D60;
      }
      goto L_08894D3C;
    }
L_08894D3C:
    ctx.gpr[31] = (0x08894D44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 535u, 0x08886BB0u>(ctx, &aot_mem) && ctx.pc == 0x08894D44u) goto L_08894D44;
    return;
L_08894D44:
    ctx.gpr[31] = (0x08894D4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x08894D4Cu) goto L_08894D4C;
    return;
L_08894D4C:
    ctx.gpr[31] = (0x08894D54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x08894D54u) goto L_08894D54;
    return;
L_08894D54:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894D60;
      }
      goto L_08894D5C;
    }
L_08894D5C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1332), 0u);
    goto L_08894D60;
L_08894D60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 66u, 0x088983B4u>(ctx, &aot_mem); return;
      }
      goto L_08894D68;
    }
L_08894D68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894DB4;
      }
      goto L_08894D74;
    }
L_08894D74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1800)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894DD8;
      }
      goto L_08894D8C;
    }
L_08894D8C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 31u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08894DD8;
      }
      goto L_08894DB4;
    }
L_08894DB4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 31u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_08894DD8;
L_08894DD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 66u, 0x088983B4u>(ctx, &aot_mem); return;
      }
      goto L_08894DE0;
    }
L_08894DE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 50u);
      if (branch_taken) {
          goto L_08894E24;
      }
      goto L_08894DF0;
    }
L_08894DF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894E18;
      }
      goto L_08894DFC;
    }
L_08894DFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_08894E18;
    }
    goto L_08894E08;
L_08894E08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x08894E14u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x08894E14u) goto L_08894E14;
    return;
L_08894E14:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_08894E18;
L_08894E18:
    ctx.gpr[31] = (0x08894E20u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x08894E20u) goto L_08894E20;
    return;
L_08894E20:
    ctx.gpr[4] = (0u | 50u);
    goto L_08894E24;
L_08894E24:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 66u, 0x088983B4u>(ctx, &aot_mem); return;
      }
      goto L_08894E30;
    }
L_08894E30:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08894E40u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 587u, 0x08886F50u>(ctx, &aot_mem) && ctx.pc == 0x08894E40u) goto L_08894E40;
    return;
L_08894E40:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08894E74;
      }
      goto L_08894E48;
    }
L_08894E48:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(608));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08894E6Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 303u, 0x089A1630u>(ctx, &aot_mem) && ctx.pc == 0x08894E6Cu) goto L_08894E6C;
    return;
L_08894E6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08894E98;
      }
      goto L_08894E74;
    }
L_08894E74:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.gpr[31] = (0x08894E80u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 574u, 0x08886E60u>(ctx, &aot_mem) && ctx.pc == 0x08894E80u) goto L_08894E80;
    return;
L_08894E80:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08894E8Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 533u, 0x08ACE50Cu>(ctx, &aot_mem) && ctx.pc == 0x08894E8Cu) goto L_08894E8C;
    return;
L_08894E8C:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(608));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08894E98;
L_08894E98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 66u, 0x088983B4u>(ctx, &aot_mem); return;
      }
      goto L_08894EA0;
    }
L_08894EA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889513C;
      }
      goto L_08894EAC;
    }
L_08894EAC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08894EFC;
      }
      goto L_08894EB8;
    }
L_08894EB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(540)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(544)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08894EFC;
      }
      goto L_08894ED0;
    }
L_08894ED0:
    ctx.gpr[31] = (0x08894ED8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 535u, 0x08886BB0u>(ctx, &aot_mem) && ctx.pc == 0x08894ED8u) goto L_08894ED8;
    return;
L_08894ED8:
    ctx.gpr[31] = (0x08894EE0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x08894EE0u) goto L_08894EE0;
    return;
L_08894EE0:
    ctx.gpr[31] = (0x08894EE8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x08894EE8u) goto L_08894EE8;
    return;
L_08894EE8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894EF4;
      }
      goto L_08894EF0;
    }
L_08894EF0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1332), 0u);
    goto L_08894EF4;
L_08894EF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 66u, 0x088983B4u>(ctx, &aot_mem); return;
      }
      goto L_08894EFC;
    }
L_08894EFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u | 32u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08894F7C;
      }
      goto L_08894F0C;
    }
L_08894F0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08894F7C;
      }
      goto L_08894F20;
    }
L_08894F20:
    ctx.gpr[31] = (0x08894F28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 535u, 0x08886BB0u>(ctx, &aot_mem) && ctx.pc == 0x08894F28u) goto L_08894F28;
    return;
L_08894F28:
    ctx.gpr[31] = (0x08894F30u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 471u, 0x088868D0u>(ctx, &aot_mem) && ctx.pc == 0x08894F30u) goto L_08894F30;
    return;
L_08894F30:
    ctx.gpr[31] = (0x08894F38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08894F38u) goto L_08894F38;
    return;
L_08894F38:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
        goto L_08894F54;
    }
    goto L_08894F44;
L_08894F44:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08894F54;
      }
      goto L_08894F54;
    }
L_08894F54:
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08894F64u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 270u, 0x089A13B4u>(ctx, &aot_mem) && ctx.pc == 0x08894F64u) goto L_08894F64;
    return;
L_08894F64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-8193));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 66u, 0x088983B4u>(ctx, &aot_mem); return;
      }
      goto L_08894F7C;
    }
L_08894F7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1800)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889513C;
      }
      goto L_08894F88;
    }
L_08894F88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1800)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889513C;
      }
      goto L_08894FA0;
    }
L_08894FA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08895138;
      }
      goto L_08894FB0;
    }
L_08894FB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 56u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08895138;
      }
      goto L_08894FC0;
    }
L_08894FC0:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[5] = (ctx.gpr[5] & 512u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08895008;
      }
      goto L_08894FD4;
    }
L_08894FD4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08895008;
      }
      goto L_08894FE4;
    }
L_08894FE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(542)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08895008;
      }
      goto L_08894FF8;
    }
L_08894FF8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1260), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0889507C;
      }
      goto L_08895008;
    }
L_08895008:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[5] = (ctx.gpr[5] & 1024u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889507C;
      }
      goto L_08895018;
    }
L_08895018:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(512)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889504C;
      }
      goto L_08895028;
    }
L_08895028:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(542)));
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889504C;
      }
      goto L_0889503C;
    }
L_0889503C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1260), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0889507C;
      }
      goto L_0889504C;
    }
L_0889504C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(516)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889507C;
      }
      goto L_0889505C;
    }
L_0889505C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(542)));
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889507C;
      }
      goto L_08895070;
    }
L_08895070:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (0u | 12u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1260), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_0889507C;
L_0889507C:
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(544)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088950E4;
      }
      goto L_08895094;
    }
L_08895094:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088950CC;
      }
      goto L_088950AC;
    }
L_088950AC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(542)));
    ctx.gpr[6] = (ctx.gpr[6] & 4u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088950CC;
      }
      goto L_088950C0;
    }
L_088950C0:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[6] = (0u | 11u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1260), static_cast<std::uint16_t>(ctx.gpr[6]));
    goto L_088950CC;
L_088950CC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(544)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08895094;
      }
      goto L_088950E4;
    }
L_088950E4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895138;
      }
      goto L_088950EC;
    }
L_088950EC:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08895104u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 469u, 0x0888E3CCu>(ctx, &aot_mem) && ctx.pc == 0x08895104u) goto L_08895104;
    return;
L_08895104:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[31] = (0x08895138u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 863u, 0x0888BA84u>(ctx, &aot_mem) && ctx.pc == 0x08895138u) goto L_08895138;
    return;
L_08895138:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1800), 0u);
    goto L_0889513C;
L_0889513C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088955B8;
      }
      goto L_08895148;
    }
L_08895148:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088955B8;
      }
      goto L_08895154;
    }
L_08895154:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 12u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889517C;
      }
      goto L_08895174;
    }
L_08895174:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 66u, 0x088983B4u>(ctx, &aot_mem); return;
      }
      goto L_0889517C;
    }
L_0889517C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1772)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088951A8;
      }
      goto L_08895194;
    }
L_08895194:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088951A0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x088951A0u) goto L_088951A0;
    return;
L_088951A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 66u, 0x088983B4u>(ctx, &aot_mem); return;
      }
      goto L_088951A8;
    }
L_088951A8:
    ctx.gpr[31] = (0x088951B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x088951B0u) goto L_088951B0;
    return;
L_088951B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895624;
      }
      goto L_088951B8;
    }
L_088951B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889529C;
      }
      goto L_088951C8;
    }
L_088951C8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08895210;
      }
      goto L_088951F8;
    }
L_088951F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08895228;
      }
      goto L_08895208;
    }
L_08895208:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889533C;
      }
      goto L_08895210;
    }
L_08895210:
    ctx.gpr[31] = (0x08895218u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 535u, 0x08886BB0u>(ctx, &aot_mem) && ctx.pc == 0x08895218u) goto L_08895218;
    return;
L_08895218:
    ctx.gpr[31] = (0x08895220u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x08895220u) goto L_08895220;
    return;
L_08895220:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 88u, 0x088984A8u>(ctx, &aot_mem); return;
      }
      goto L_08895228;
    }
L_08895228:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889533C;
      }
      goto L_08895238;
    }
L_08895238:
    ctx.gpr[31] = (0x08895240u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x08895240u) goto L_08895240;
    return;
L_08895240:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889533C;
      }
      goto L_08895248;
    }
L_08895248:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889533C;
      }
      goto L_08895260;
    }
L_08895260:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889533C;
      }
      goto L_08895274;
    }
L_08895274:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08895284u);
    ctx.gpr[5] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x08895284u) goto L_08895284;
    return;
L_08895284:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(599), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0889533C;
      }
      goto L_0889529C;
    }
L_0889529C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889533C;
      }
      goto L_088952A8;
    }
L_088952A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889533C;
      }
      goto L_088952B8;
    }
L_088952B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889533C;
      }
      goto L_088952C8;
    }
L_088952C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889533C;
      }
      goto L_088952D8;
    }
L_088952D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889533C;
      }
      goto L_088952F0;
    }
L_088952F0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08895318;
      }
      goto L_08895300;
    }
L_08895300:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889533C;
      }
      goto L_08895318;
    }
L_08895318:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08895328u);
    ctx.gpr[5] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x08895328u) goto L_08895328;
    return;
L_08895328:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(599), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_0889533C;
L_0889533C:
    ctx.gpr[31] = (0x08895344u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 824u, 0x0889FD00u>(ctx, &aot_mem) && ctx.pc == 0x08895344u) goto L_08895344;
    return;
L_08895344:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895360;
      }
      goto L_0889534C;
    }
L_0889534C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889537C;
      }
      goto L_08895360;
    }
L_08895360:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
        goto L_08895394;
    }
    goto L_08895374;
L_08895374:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088953B4;
      }
      goto L_0889537C;
    }
L_0889537C:
    ctx.gpr[31] = (0x08895384u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 535u, 0x08886BB0u>(ctx, &aot_mem) && ctx.pc == 0x08895384u) goto L_08895384;
    return;
L_08895384:
    ctx.gpr[31] = (0x0889538Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x0889538Cu) goto L_0889538C;
    return;
L_0889538C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 88u, 0x088984A8u>(ctx, &aot_mem); return;
      }
      goto L_08895394;
    }
L_08895394:
    ctx.gpr[5] = (0u | 25u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088953B4;
      }
      goto L_088953A0;
    }
L_088953A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[31] = (0x088953ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 227u, 0x08885270u>(ctx, &aot_mem) && ctx.pc == 0x088953ACu) goto L_088953AC;
    return;
L_088953AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088953D4;
      }
      goto L_088953B4;
    }
L_088953B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 24u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088953D4;
      }
      goto L_088953C4;
    }
L_088953C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088953D4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 670u, 0x089A2CB4u>(ctx, &aot_mem) && ctx.pc == 0x088953D4u) goto L_088953D4;
    return;
L_088953D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08895400;
      }
      goto L_088953E4;
    }
L_088953E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08895400;
      }
      goto L_088953F4;
    }
L_088953F4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08895400u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x08895400u) goto L_08895400;
    return;
L_08895400:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895578;
      }
      goto L_0889540C;
    }
L_0889540C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(616)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08895578;
      }
      goto L_08895428;
    }
L_08895428:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
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
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08895570;
      }
      goto L_08895460;
    }
L_08895460:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(15728))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08895570;
      }
      goto L_088954A4;
    }
L_088954A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088954E0;
      }
      goto L_088954B4;
    }
L_088954B4:
    ctx.gpr[31] = (0x088954BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 745u, 0x08A2F69Cu>(ctx, &aot_mem) && ctx.pc == 0x088954BCu) goto L_088954BC;
    return;
L_088954BC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088954E0;
      }
      goto L_088954C4;
    }
L_088954C4:
    ctx.gpr[31] = (0x088954CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 745u, 0x08A2F69Cu>(ctx, &aot_mem) && ctx.pc == 0x088954CCu) goto L_088954CC;
    return;
L_088954CC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088954E0;
      }
      goto L_088954D4;
    }
L_088954D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[31] = (0x088954E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 29u, 0x08888330u>(ctx, &aot_mem) && ctx.pc == 0x088954E0u) goto L_088954E0;
    return;
L_088954E0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08895540;
      }
      goto L_088954F0;
    }
L_088954F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08895540;
      }
      goto L_08895500;
    }
L_08895500:
    ctx.gpr[31] = (0x08895508u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x08895508u) goto L_08895508;
    return;
L_08895508:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895524;
      }
      goto L_08895510;
    }
L_08895510:
    ctx.gpr[31] = (0x08895518u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08895518u) goto L_08895518;
    return;
L_08895518:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895540;
      }
      goto L_08895524;
    }
L_08895524:
    ctx.gpr[31] = (0x0889552Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 748u, 0x0899FCA0u>(ctx, &aot_mem) && ctx.pc == 0x0889552Cu) goto L_0889552C;
    return;
L_0889552C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08895538u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x08895538u) goto L_08895538;
    return;
L_08895538:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08895570;
      }
      goto L_08895540;
    }
L_08895540:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0889554Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(188));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 109u, 0x08884810u>(ctx, &aot_mem) && ctx.pc == 0x0889554Cu) goto L_0889554C;
    return;
L_0889554C:
    ctx.gpr[31] = (0x08895554u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 535u, 0x08886BB0u>(ctx, &aot_mem) && ctx.pc == 0x08895554u) goto L_08895554;
    return;
L_08895554:
    ctx.gpr[31] = (0x0889555Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x0889555Cu) goto L_0889555C;
    return;
L_0889555C:
    ctx.gpr[31] = (0x08895564u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x08895564u) goto L_08895564;
    return;
L_08895564:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895570;
      }
      goto L_0889556C;
    }
L_0889556C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1332), 0u);
    goto L_08895570;
L_08895570:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08895624;
      }
      goto L_08895578;
    }
L_08895578:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08895624;
      }
      goto L_08895584;
    }
L_08895584:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08895590u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(196));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 109u, 0x08884810u>(ctx, &aot_mem) && ctx.pc == 0x08895590u) goto L_08895590;
    return;
L_08895590:
    ctx.gpr[31] = (0x08895598u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 535u, 0x08886BB0u>(ctx, &aot_mem) && ctx.pc == 0x08895598u) goto L_08895598;
    return;
L_08895598:
    ctx.gpr[31] = (0x088955A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x088955A0u) goto L_088955A0;
    return;
L_088955A0:
    ctx.gpr[31] = (0x088955A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x088955A8u) goto L_088955A8;
    return;
L_088955A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895624;
      }
      goto L_088955B0;
    }
L_088955B0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1332), 0u);
      if (branch_taken) {
          goto L_08895624;
      }
      goto L_088955B8;
    }
L_088955B8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088955EC;
      }
      goto L_088955C4;
    }
L_088955C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088955EC;
      }
      goto L_088955D4;
    }
L_088955D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088955E4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 227u, 0x088892A4u>(ctx, &aot_mem) && ctx.pc == 0x088955E4u) goto L_088955E4;
    return;
L_088955E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08895624;
      }
      goto L_088955EC;
    }
L_088955EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 31u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[31] = (0x08895624u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x08895624u) goto L_08895624;
    return;
L_08895624:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 66u, 0x088983B4u>(ctx, &aot_mem); return;
      }
      goto L_0889562C;
    }
L_0889562C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08895674;
      }
      goto L_08895638;
    }
L_08895638:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889566C;
      }
      goto L_08895648;
    }
L_08895648:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889566C;
      }
      goto L_08895654;
    }
L_08895654:
    ctx.gpr[31] = (0x0889565Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 535u, 0x08886BB0u>(ctx, &aot_mem) && ctx.pc == 0x0889565Cu) goto L_0889565C;
    return;
L_0889565C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889566Cu);
    ctx.gpr[6] = (0u | 6000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 377u, 0x089A1A5Cu>(ctx, &aot_mem) && ctx.pc == 0x0889566Cu) goto L_0889566C;
    return;
L_0889566C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 66u, 0x088983B4u>(ctx, &aot_mem); return;
      }
      goto L_08895674;
    }
L_08895674:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1772)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895810;
      }
      goto L_0889568C;
    }
L_0889568C:
    ctx.gpr[31] = (0x08895694u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08895694u) goto L_08895694;
    return;
L_08895694:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
        goto L_088956D4;
    }
    goto L_088956A4;
L_088956A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
        goto L_088956D4;
    }
    goto L_088956B0;
L_088956B0:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08895700;
      }
      goto L_088956B8;
    }
L_088956B8:
    ctx.gpr[31] = (0x088956C0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x088956C0u) goto L_088956C0;
    return;
L_088956C0:
    ctx.gpr[31] = (0x088956C8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 7u, 0x08A9802Cu>(ctx, &aot_mem) && ctx.pc == 0x088956C8u) goto L_088956C8;
    return;
L_088956C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895700;
      }
      goto L_088956D0;
    }
L_088956D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    goto L_088956D4;
L_088956D4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895808;
      }
      goto L_088956DC;
    }
L_088956DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08895808;
      }
      goto L_088956EC;
    }
L_088956EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x088956F8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 771u, 0x0889FA94u>(ctx, &aot_mem) && ctx.pc == 0x088956F8u) goto L_088956F8;
    return;
L_088956F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895808;
      }
      goto L_08895700;
    }
L_08895700:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 60u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08895810;
      }
      goto L_08895710;
    }
L_08895710:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08895810;
      }
      goto L_08895720;
    }
L_08895720:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 48u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08895810;
      }
      goto L_08895730;
    }
L_08895730:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088957A0;
      }
      goto L_08895740;
    }
L_08895740:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088957A0;
      }
      goto L_08895754;
    }
L_08895754:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[4] = (14289u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46871u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08895810;
      }
      goto L_088957A0;
    }
L_088957A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088957C8;
      }
      goto L_088957B4;
    }
L_088957B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x088957C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 176u, 0x08884F08u>(ctx, &aot_mem) && ctx.pc == 0x088957C0u) goto L_088957C0;
    return;
L_088957C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08895810;
      }
      goto L_088957C8;
    }
L_088957C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088957F0;
      }
      goto L_088957DC;
    }
L_088957DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x088957E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 592u, 0x0888A63Cu>(ctx, &aot_mem) && ctx.pc == 0x088957E8u) goto L_088957E8;
    return;
L_088957E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08895810;
      }
      goto L_088957F0;
    }
L_088957F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08895800u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 227u, 0x088892A4u>(ctx, &aot_mem) && ctx.pc == 0x08895800u) goto L_08895800;
    return;
L_08895800:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08895810;
      }
      goto L_08895808;
    }
L_08895808:
    ctx.gpr[31] = (0x08895810u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 535u, 0x08886BB0u>(ctx, &aot_mem) && ctx.pc == 0x08895810u) goto L_08895810;
    return;
L_08895810:
    ctx.gpr[31] = (0x08895818u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 30u, 0x089581F0u>(ctx, &aot_mem) && ctx.pc == 0x08895818u) goto L_08895818;
    return;
L_08895818:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889585C;
      }
      goto L_08895820;
    }
L_08895820:
    ctx.gpr[31] = (0x08895828u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08895828u) goto L_08895828;
    return;
L_08895828:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889585C;
      }
      goto L_08895830;
    }
L_08895830:
    ctx.gpr[31] = (0x08895838u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08895838u) goto L_08895838;
    return;
L_08895838:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08895844u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 771u, 0x0889FA94u>(ctx, &aot_mem) && ctx.pc == 0x08895844u) goto L_08895844;
    return;
L_08895844:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889585C;
      }
      goto L_0889584C;
    }
L_0889584C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889585C;
      }
      goto L_08895858;
    }
L_08895858:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1772), 0u);
    goto L_0889585C;
L_0889585C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 66u, 0x088983B4u>(ctx, &aot_mem); return;
      }
      goto L_08895864;
    }
L_08895864:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1772)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088959B4;
      }
      goto L_0889587C;
    }
L_0889587C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088959B4;
      }
      goto L_08895888;
    }
L_08895888:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088959B4;
      }
      goto L_08895894;
    }
L_08895894:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 60u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088959B4;
      }
      goto L_088958A4;
    }
L_088958A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088959B4;
      }
      goto L_088958B4;
    }
L_088958B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 48u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088959B4;
      }
      goto L_088958C4;
    }
L_088958C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088958EC;
      }
      goto L_088958D8;
    }
L_088958D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x088958E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 176u, 0x08884F08u>(ctx, &aot_mem) && ctx.pc == 0x088958E4u) goto L_088958E4;
    return;
L_088958E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088959B4;
      }
      goto L_088958EC;
    }
L_088958EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08895914;
      }
      goto L_08895900;
    }
L_08895900:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x0889590Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 592u, 0x0888A63Cu>(ctx, &aot_mem) && ctx.pc == 0x0889590Cu) goto L_0889590C;
    return;
L_0889590C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088959B4;
      }
      goto L_08895914;
    }
L_08895914:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895940;
      }
      goto L_08895928;
    }
L_08895928:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08895938u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 227u, 0x088892A4u>(ctx, &aot_mem) && ctx.pc == 0x08895938u) goto L_08895938;
    return;
L_08895938:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088959B4;
      }
      goto L_08895940;
    }
L_08895940:
    ctx.gpr[4] = (0u | 15u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0889595C;
      }
      goto L_08895954;
    }
L_08895954:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 15u);
      if (branch_taken) {
          goto L_088959A0;
      }
      goto L_0889595C;
    }
L_0889595C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08895974;
      }
      goto L_0889596C;
    }
L_0889596C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 11u);
      if (branch_taken) {
          goto L_088959A0;
      }
      goto L_08895974;
    }
L_08895974:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(512)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0889598C;
      }
      goto L_08895984;
    }
L_08895984:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 16u);
      if (branch_taken) {
          goto L_088959A0;
      }
      goto L_0889598C;
    }
L_0889598C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(516)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088959A4;
      }
      goto L_0889599C;
    }
L_0889599C:
    ctx.gpr[4] = (0u | 12u);
    goto L_088959A0;
L_088959A0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    goto L_088959A4;
L_088959A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088959B4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 761u, 0x0888B3F0u>(ctx, &aot_mem) && ctx.pc == 0x088959B4u) goto L_088959B4;
    return;
L_088959B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 66u, 0x088983B4u>(ctx, &aot_mem); return;
      }
      goto L_088959BC;
    }
L_088959BC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08895A00;
      }
      goto L_088959CC;
    }
L_088959CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895A00;
      }
      goto L_088959D8;
    }
L_088959D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088959F8;
      }
      goto L_088959E8;
    }
L_088959E8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088959F8u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x088959F8u) goto L_088959F8;
    return;
L_088959F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 66u, 0x088983B4u>(ctx, &aot_mem); return;
      }
      goto L_08895A00;
    }
L_08895A00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08895A84;
      }
      goto L_08895A10;
    }
L_08895A10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08895A38;
      }
      goto L_08895A20;
    }
L_08895A20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08895A30u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 377u, 0x089A1A5Cu>(ctx, &aot_mem) && ctx.pc == 0x08895A30u) goto L_08895A30;
    return;
L_08895A30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08895A48;
      }
      goto L_08895A38;
    }
L_08895A38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08895A48u);
    ctx.gpr[6] = (0u | 6000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 377u, 0x089A1A5Cu>(ctx, &aot_mem) && ctx.pc == 0x08895A48u) goto L_08895A48;
    return;
L_08895A48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7860)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08895A84;
      }
      goto L_08895A74;
    }
L_08895A74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    goto L_08895A84;
L_08895A84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 66u, 0x088983B4u>(ctx, &aot_mem); return;
      }
      goto L_08895A8C;
    }
L_08895A8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895BFC;
      }
      goto L_08895A98;
    }
L_08895A98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08895AACu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 77u, 0x089A0598u>(ctx, &aot_mem) && ctx.pc == 0x08895AACu) goto L_08895AAC;
    return;
L_08895AAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1760), ctx.gpr[4]);
    ctx.gpr[31] = (0x08895ABCu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1760));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08895ABCu) goto L_08895ABC;
    return;
L_08895ABC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1788)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1780), ctx.gpr[4]);
    ctx.gpr[31] = (0x08895ACCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 795u, 0x0899FF58u>(ctx, &aot_mem) && ctx.pc == 0x08895ACCu) goto L_08895ACC;
    return;
L_08895ACC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08895BEC;
      }
      goto L_08895AFC;
    }
L_08895AFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1788)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895C04;
      }
      goto L_08895B14;
    }
L_08895B14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08895B54;
      }
      goto L_08895B24;
    }
L_08895B24:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08895BC4;
      }
      goto L_08895B54;
    }
L_08895B54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[31] = (0x08895B60u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 224u, 0x088D915Cu>(ctx, &aot_mem) && ctx.pc == 0x08895B60u) goto L_08895B60;
    return;
L_08895B60:
    ctx.gpr[31] = (0x08895B68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08895B68u) goto L_08895B68;
    return;
L_08895B68:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15804)));
    ctx.gpr[31] = (0x08895B80u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15800)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x08895B80u) goto L_08895B80;
    return;
L_08895B80:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15812)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15808)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08895BBCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 254u, 0x089A1230u>(ctx, &aot_mem) && ctx.pc == 0x08895BBCu) goto L_08895BBC;
    return;
L_08895BBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08895BD8;
      }
      goto L_08895BC4;
    }
L_08895BC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08895BD8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 328u, 0x089A1774u>(ctx, &aot_mem) && ctx.pc == 0x08895BD8u) goto L_08895BD8;
    return;
L_08895BD8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08895BE4u);
    ctx.gpr[5] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 239u, 0x089A10F0u>(ctx, &aot_mem) && ctx.pc == 0x08895BE4u) goto L_08895BE4;
    return;
L_08895BE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08895C04;
      }
      goto L_08895BEC;
    }
L_08895BEC:
    ctx.gpr[31] = (0x08895BF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 535u, 0x08886BB0u>(ctx, &aot_mem) && ctx.pc == 0x08895BF4u) goto L_08895BF4;
    return;
L_08895BF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08895C04;
      }
      goto L_08895BFC;
    }
L_08895BFC:
    ctx.gpr[31] = (0x08895C04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 535u, 0x08886BB0u>(ctx, &aot_mem) && ctx.pc == 0x08895C04u) goto L_08895C04;
    return;
L_08895C04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 66u, 0x088983B4u>(ctx, &aot_mem); return;
      }
      goto L_08895C0C;
    }
L_08895C0C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2016));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895C6C;
      }
      goto L_08895C40;
    }
L_08895C40:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08895C54u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 77u, 0x089A0598u>(ctx, &aot_mem) && ctx.pc == 0x08895C54u) goto L_08895C54;
    return;
L_08895C54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1760), ctx.gpr[4]);
    ctx.gpr[31] = (0x08895C64u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1760));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08895C64u) goto L_08895C64;
    return;
L_08895C64:
    ctx.gpr[31] = (0x08895C6Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 795u, 0x0899FF58u>(ctx, &aot_mem) && ctx.pc == 0x08895C6Cu) goto L_08895C6C;
    return;
L_08895C6C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2032)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08895CC8;
      }
      goto L_08895CA4;
    }
L_08895CA4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2016));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2032)));
    ctx.gpr[31] = (0x08895CC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 303u, 0x089A1630u>(ctx, &aot_mem) && ctx.pc == 0x08895CC0u) goto L_08895CC0;
    return;
L_08895CC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08895E04;
      }
      goto L_08895CC8;
    }
L_08895CC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895CE8;
      }
      goto L_08895CD4;
    }
L_08895CD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08895DAC;
      }
      goto L_08895CE8;
    }
L_08895CE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1780)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895E04;
      }
      goto L_08895D00;
    }
L_08895D00:
    ctx.gpr[31] = (0x08895D08u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 743u, 0x089AB604u>(ctx, &aot_mem) && ctx.pc == 0x08895D08u) goto L_08895D08;
    return;
L_08895D08:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08895D14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08895D14u) goto L_08895D14;
    return;
L_08895D14:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15804)));
    ctx.gpr[31] = (0x08895D2Cu);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15800)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x08895D2Cu) goto L_08895D2C;
    return;
L_08895D2C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(500));
    ctx.gpr[31] = (0x08895D4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 787u, 0x0899FEE8u>(ctx, &aot_mem) && ctx.pc == 0x08895D4Cu) goto L_08895D4C;
    return;
L_08895D4C:
    ctx.gpr[4] = (16u << 16u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (128u << 16u);
      if (branch_taken) {
          goto L_08895D78;
      }
      goto L_08895D58;
    }
L_08895D58:
    if (ctx.gpr[17] != ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(640)));
        goto L_08895D70;
    }
    goto L_08895D60;
L_08895D60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(640)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08895D78;
      }
      goto L_08895D6C;
    }
L_08895D6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(640)));
    goto L_08895D70;
L_08895D70:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895DA4;
      }
      goto L_08895D78;
    }
L_08895D78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08895DA4;
      }
      goto L_08895D94;
    }
L_08895D94:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(640)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08895DA4u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x08895DA4u) goto L_08895DA4;
    return;
L_08895DA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08895E04;
      }
      goto L_08895DAC;
    }
L_08895DAC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2032)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08895DFC;
      }
      goto L_08895DD8;
    }
L_08895DD8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2016));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2032)));
    ctx.gpr[31] = (0x08895DF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 303u, 0x089A1630u>(ctx, &aot_mem) && ctx.pc == 0x08895DF4u) goto L_08895DF4;
    return;
L_08895DF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08895E04;
      }
      goto L_08895DFC;
    }
L_08895DFC:
    ctx.gpr[31] = (0x08895E04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 748u, 0x0899FCA0u>(ctx, &aot_mem) && ctx.pc == 0x08895E04u) goto L_08895E04;
    return;
L_08895E04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 66u, 0x088983B4u>(ctx, &aot_mem); return;
      }
      goto L_08895E0C;
    }
L_08895E0C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(608));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
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
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08895EC4;
      }
      goto L_08895E4C;
    }
L_08895E4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895EC4;
      }
      goto L_08895E58;
    }
L_08895E58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x08895E64u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(608));
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 197u, 0x0891D1ACu>(ctx, &aot_mem) && ctx.pc == 0x08895E64u) goto L_08895E64;
    return;
L_08895E64:
    ctx.gpr[31] = (0x08895E6Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 174u, 0x089ED314u>(ctx, &aot_mem) && ctx.pc == 0x08895E6Cu) goto L_08895E6C;
    return;
L_08895E6C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    ctx.gpr[4] = (17352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08895EBC;
      }
      goto L_08895E98;
    }
L_08895E98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08895EACu);
    ctx.gpr[5] = (0u | 23u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 514u, 0x08886AE0u>(ctx, &aot_mem) && ctx.pc == 0x08895EACu) goto L_08895EAC;
    return;
L_08895EAC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08895EBCu);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x08895EBCu) goto L_08895EBC;
    return;
L_08895EBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 66u, 0x088983B4u>(ctx, &aot_mem); return;
      }
      goto L_08895EC4;
    }
L_08895EC4:
    ctx.gpr[31] = (0x08895ECCu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 118u, 0x088848FCu>(ctx, &aot_mem) && ctx.pc == 0x08895ECCu) goto L_08895ECC;
    return;
L_08895ECC:
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08896020;
      }
      goto L_08895EE4;
    }
L_08895EE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08896010;
      }
      goto L_08895EF0;
    }
L_08895EF0:
    ctx.gpr[4] = (17761u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (16840u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[7] = (0u | 6u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x08895F3Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 158u, 0x088C0EF8u>(ctx, &aot_mem) && ctx.pc == 0x08895F3Cu) goto L_08895F3C;
    return;
L_08895F3C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(496))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895FD8;
      }
      goto L_08895F54;
    }
L_08895F54:
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(448)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08895F78u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 112u, 0x0888487Cu>(ctx, &aot_mem) && ctx.pc == 0x08895F78u) goto L_08895F78;
    return;
L_08895F78:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08895F84u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 121u, 0x0888494Cu>(ctx, &aot_mem) && ctx.pc == 0x08895F84u) goto L_08895F84;
    return;
L_08895F84:
    ctx.gpr[31] = (0x08895F8Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 120u, 0x08884934u>(ctx, &aot_mem) && ctx.pc == 0x08895F8Cu) goto L_08895F8C;
    return;
L_08895F8C:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08895FBC;
      }
      goto L_08895F9C;
    }
L_08895F9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08895FBC;
      }
      goto L_08895FAC;
    }
L_08895FAC:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08895FB8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 120u, 0x08884934u>(ctx, &aot_mem) && ctx.pc == 0x08895FB8u) goto L_08895FB8;
    return;
L_08895FB8:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08895FBC;
L_08895FBC:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[4] << 16u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(496))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08895F54;
      }
      goto L_08895FD8;
    }
L_08895FD8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1332), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08896008;
      }
      goto L_08895FE4;
    }
L_08895FE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x08895FF0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1332));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08895FF0u) goto L_08895FF0;
    return;
L_08895FF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08896008u);
    ctx.gpr[5] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x08896008u) goto L_08896008;
    return;
L_08896008:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08896018;
      }
      goto L_08896010;
    }
L_08896010:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
    goto L_08896018;
L_08896018:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 66u, 0x088983B4u>(ctx, &aot_mem); return;
      }
      goto L_08896020;
    }
L_08896020:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1800)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08896068;
      }
      goto L_08896038;
    }
L_08896038:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1800), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08896060;
      }
      goto L_08896048;
    }
L_08896048:
    ctx.gpr[31] = (0x08896050u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A295CCu>(ctx, &aot_mem) && ctx.pc == 0x08896050u) goto L_08896050;
    return;
L_08896050:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08896060u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 510u, 0x08A2A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08896060u) goto L_08896060;
    return;
L_08896060:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 88u, 0x088984A8u>(ctx, &aot_mem); return;
      }
      goto L_08896068;
    }
L_08896068:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(608));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x0889607Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 112u, 0x0888487Cu>(ctx, &aot_mem) && ctx.pc == 0x0889607Cu) goto L_0889607C;
    return;
L_0889607C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08896088u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 121u, 0x0888494Cu>(ctx, &aot_mem) && ctx.pc == 0x08896088u) goto L_08896088;
    return;
L_08896088:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08896190;
      }
      goto L_088960A0;
    }
L_088960A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088960EC;
      }
      goto L_088960B0;
    }
L_088960B0:
    ctx.gpr[31] = (0x088960B8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 120u, 0x08884934u>(ctx, &aot_mem) && ctx.pc == 0x088960B8u) goto L_088960B8;
    return;
L_088960B8:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088960EC;
      }
      goto L_088960D0;
    }
L_088960D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088960DCu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x088960DCu) goto L_088960DC;
    return;
L_088960DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-8193));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_088960EC;
L_088960EC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7808)));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0889613C;
      }
      goto L_08896110;
    }
L_08896110:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6976)));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889613C;
      }
      goto L_08896130;
    }
L_08896130:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08896170;
      }
      goto L_0889613C;
    }
L_0889613C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1340)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08896360;
      }
      goto L_08896168;
    }
L_08896168:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08896780;
      }
      goto L_08896170;
    }
L_08896170:
    ctx.gpr[31] = (0x08896178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A295CCu>(ctx, &aot_mem) && ctx.pc == 0x08896178u) goto L_08896178;
    return;
L_08896178:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08896188u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 510u, 0x08A2A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08896188u) goto L_08896188;
    return;
L_08896188:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 88u, 0x088984A8u>(ctx, &aot_mem); return;
      }
      goto L_08896190;
    }
L_08896190:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 53u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889613C;
      }
      goto L_088961A0;
    }
L_088961A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088961EC;
      }
      goto L_088961B0;
    }
L_088961B0:
    ctx.gpr[31] = (0x088961B8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 120u, 0x08884934u>(ctx, &aot_mem) && ctx.pc == 0x088961B8u) goto L_088961B8;
    return;
L_088961B8:
    ctx.gpr[4] = (16768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088961EC;
      }
      goto L_088961D0;
    }
L_088961D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088961DCu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x088961DCu) goto L_088961DC;
    return;
L_088961DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-8193));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_088961EC;
L_088961EC:
    ctx.gpr[31] = (0x088961F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A295CCu>(ctx, &aot_mem) && ctx.pc == 0x088961F4u) goto L_088961F4;
    return;
L_088961F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08896204u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 719u, 0x08A2B500u>(ctx, &aot_mem) && ctx.pc == 0x08896204u) goto L_08896204;
    return;
L_08896204:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08896358;
      }
      goto L_08896210;
    }
L_08896210:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(292)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08896288;
      }
      goto L_08896248;
    }
L_08896248:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08896268;
      }
      goto L_08896254;
    }
L_08896254:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088962A8;
      }
      goto L_08896260;
    }
L_08896260:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
      if (branch_taken) {
          goto L_088962BC;
      }
      goto L_08896268;
    }
L_08896268:
    ctx.gpr[31] = (0x08896270u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A295CCu>(ctx, &aot_mem) && ctx.pc == 0x08896270u) goto L_08896270;
    return;
L_08896270:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08896280u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 510u, 0x08A2A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08896280u) goto L_08896280;
    return;
L_08896280:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 88u, 0x088984A8u>(ctx, &aot_mem); return;
      }
      goto L_08896288;
    }
L_08896288:
    ctx.gpr[31] = (0x08896290u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A295CCu>(ctx, &aot_mem) && ctx.pc == 0x08896290u) goto L_08896290;
    return;
L_08896290:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088962A0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 510u, 0x08A2A90Cu>(ctx, &aot_mem) && ctx.pc == 0x088962A0u) goto L_088962A0;
    return;
L_088962A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 88u, 0x088984A8u>(ctx, &aot_mem); return;
      }
      goto L_088962A8;
    }
L_088962A8:
    ctx.gpr[31] = (0x088962B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088962B0u) goto L_088962B0;
    return;
L_088962B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08896268;
      }
      goto L_088962B8;
    }
L_088962B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    goto L_088962BC;
L_088962BC:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
        goto L_088962DC;
    }
    goto L_088962C4;
L_088962C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 62u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08896268;
      }
      goto L_088962D8;
    }
L_088962D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    goto L_088962DC;
L_088962DC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088962F8;
      }
      goto L_088962E4;
    }
L_088962E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08896268;
      }
      goto L_088962F8;
    }
L_088962F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(685)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08896338;
      }
      goto L_08896304;
    }
L_08896304:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    ctx.gpr[5] = (0u | 80u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08896358;
      }
      goto L_08896318;
    }
L_08896318:
    ctx.gpr[31] = (0x08896320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A295CCu>(ctx, &aot_mem) && ctx.pc == 0x08896320u) goto L_08896320;
    return;
L_08896320:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08896330u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 510u, 0x08A2A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08896330u) goto L_08896330;
    return;
L_08896330:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 88u, 0x088984A8u>(ctx, &aot_mem); return;
      }
      goto L_08896338;
    }
L_08896338:
    ctx.gpr[31] = (0x08896340u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A295CCu>(ctx, &aot_mem) && ctx.pc == 0x08896340u) goto L_08896340;
    return;
L_08896340:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08896350u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 510u, 0x08A2A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08896350u) goto L_08896350;
    return;
L_08896350:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 88u, 0x088984A8u>(ctx, &aot_mem); return;
      }
      goto L_08896358;
    }
L_08896358:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889613C;
      }
      goto L_08896360;
    }
L_08896360:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08896488;
      }
      goto L_08896370;
    }
L_08896370:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(624)));
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[31] = (0x08896384u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 376u, 0x08AF99E4u>(ctx, &aot_mem) && ctx.pc == 0x08896384u) goto L_08896384;
    return;
L_08896384:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088963F4;
      }
      goto L_0889639C;
    }
L_0889639C:
    ctx.gpr[31] = (0x088963A4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 377u, 0x08AF9A08u>(ctx, &aot_mem) && ctx.pc == 0x088963A4u) goto L_088963A4;
    return;
L_088963A4:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088963D8;
      }
      goto L_088963BC;
    }
L_088963BC:
    ctx.gpr[31] = (0x088963C4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 378u, 0x08AF9A2Cu>(ctx, &aot_mem) && ctx.pc == 0x088963C4u) goto L_088963C4;
    return;
L_088963C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(624), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088963EC;
      }
      goto L_088963D8;
    }
L_088963D8:
    ctx.gpr[31] = (0x088963E0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 379u, 0x08AF9A54u>(ctx, &aot_mem) && ctx.pc == 0x088963E0u) goto L_088963E0;
    return;
L_088963E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(624), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088963EC;
L_088963EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889645C;
      }
      goto L_088963F4;
    }
L_088963F4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889645C;
      }
      goto L_08896408;
    }
L_08896408:
    ctx.gpr[31] = (0x08896410u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 377u, 0x08AF9A08u>(ctx, &aot_mem) && ctx.pc == 0x08896410u) goto L_08896410;
    return;
L_08896410:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08896444;
      }
      goto L_08896428;
    }
L_08896428:
    ctx.gpr[31] = (0x08896430u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 378u, 0x08AF9A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08896430u) goto L_08896430;
    return;
L_08896430:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(624), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889645C;
      }
      goto L_08896444;
    }
L_08896444:
    ctx.gpr[31] = (0x0889644Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 379u, 0x08AF9A54u>(ctx, &aot_mem) && ctx.pc == 0x0889644Cu) goto L_0889644C;
    return;
L_0889644C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]) ^ 0x80000000u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(624), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0889645C;
L_0889645C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(624)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16480u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    goto L_08896488;
L_08896488:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(624)));
    ctx.gpr[31] = (0x08896498u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 115u, 0x088848CCu>(ctx, &aot_mem) && ctx.pc == 0x08896498u) goto L_08896498;
    return;
L_08896498:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1344)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08896514;
      }
      goto L_088964AC;
    }
L_088964AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(624)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x088964CCu);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 115u, 0x088848CCu>(ctx, &aot_mem) && ctx.pc == 0x088964CCu) goto L_088964CC;
    return;
L_088964CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1344)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08896514;
      }
      goto L_088964E0;
    }
L_088964E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(624)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08896500u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 115u, 0x088848CCu>(ctx, &aot_mem) && ctx.pc == 0x08896500u) goto L_08896500;
    return;
L_08896500:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1344)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889676C;
      }
      goto L_08896514;
    }
L_08896514:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08896548u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 471u, 0x08AFDFA0u>(ctx, &aot_mem) && ctx.pc == 0x08896548u) goto L_08896548;
    return;
L_08896548:
    ctx.gpr[31] = (0x08896550u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 879u, 0x089A3B74u>(ctx, &aot_mem) && ctx.pc == 0x08896550u) goto L_08896550;
    return;
L_08896550:
    ctx.gpr[31] = (0x08896558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A295CCu>(ctx, &aot_mem) && ctx.pc == 0x08896558u) goto L_08896558;
    return;
L_08896558:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08896568u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 538u, 0x08A2AA60u>(ctx, &aot_mem) && ctx.pc == 0x08896568u) goto L_08896568;
    return;
L_08896568:
    ctx.gpr[31] = (0x08896570u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A295CCu>(ctx, &aot_mem) && ctx.pc == 0x08896570u) goto L_08896570;
    return;
L_08896570:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08896580u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 594u, 0x08A2AD08u>(ctx, &aot_mem) && ctx.pc == 0x08896580u) goto L_08896580;
    return;
L_08896580:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08896754;
      }
      goto L_08896588;
    }
L_08896588:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088965F0;
      }
      goto L_08896598;
    }
L_08896598:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088965CC;
      }
      goto L_088965A8;
    }
L_088965A8:
    ctx.gpr[31] = (0x088965B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 471u, 0x088868D0u>(ctx, &aot_mem) && ctx.pc == 0x088965B0u) goto L_088965B0;
    return;
L_088965B0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 22u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088965C4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 537u, 0x089BA35Cu>(ctx, &aot_mem) && ctx.pc == 0x088965C4u) goto L_088965C4;
    return;
L_088965C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088967D4;
      }
      goto L_088965CC;
    }
L_088965CC:
    ctx.gpr[31] = (0x088965D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 471u, 0x088868D0u>(ctx, &aot_mem) && ctx.pc == 0x088965D4u) goto L_088965D4;
    return;
L_088965D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 21u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088965E8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 537u, 0x089BA35Cu>(ctx, &aot_mem) && ctx.pc == 0x088965E8u) goto L_088965E8;
    return;
L_088965E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088967D4;
      }
      goto L_088965F0;
    }
L_088965F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 40u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08896624;
      }
      goto L_08896600;
    }
L_08896600:
    ctx.gpr[31] = (0x08896608u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 471u, 0x088868D0u>(ctx, &aot_mem) && ctx.pc == 0x08896608u) goto L_08896608;
    return;
L_08896608:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 25u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0889661Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 537u, 0x089BA35Cu>(ctx, &aot_mem) && ctx.pc == 0x0889661Cu) goto L_0889661C;
    return;
L_0889661C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088967D4;
      }
      goto L_08896624;
    }
L_08896624:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08896650;
      }
      goto L_08896634;
    }
L_08896634:
    ctx.gpr[31] = (0x0889663Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 471u, 0x088868D0u>(ctx, &aot_mem) && ctx.pc == 0x0889663Cu) goto L_0889663C;
    return;
L_0889663C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08896648u);
    ctx.gpr[5] = (0u | 52u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 881u, 0x08892EE0u>(ctx, &aot_mem) && ctx.pc == 0x08896648u) goto L_08896648;
    return;
L_08896648:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088967D4;
      }
      goto L_08896650;
    }
L_08896650:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 44u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08896704;
      }
      goto L_08896660;
    }
L_08896660:
    ctx.gpr[31] = (0x08896668u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 471u, 0x088868D0u>(ctx, &aot_mem) && ctx.pc == 0x08896668u) goto L_08896668;
    return;
L_08896668:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(596), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08896678u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 881u, 0x08892EE0u>(ctx, &aot_mem) && ctx.pc == 0x08896678u) goto L_08896678;
    return;
L_08896678:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08896694u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08896694u) goto L_08896694;
    return;
L_08896694:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x088966A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 339u, 0x08AF97E8u>(ctx, &aot_mem) && ctx.pc == 0x088966A0u) goto L_088966A0;
    return;
L_088966A0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_088966B8;
      }
      goto L_088966AC;
    }
L_088966AC:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_088966B8;
L_088966B8:
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[20];
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (20224u << 16u);
      if (branch_taken) {
          goto L_088966E0;
      }
      goto L_088966D4;
    }
L_088966D4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088966F8;
      }
      goto L_088966E0;
    }
L_088966E0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_088966F8;
L_088966F8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1800), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088967D4;
      }
      goto L_08896704;
    }
L_08896704:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889672C;
      }
      goto L_08896714;
    }
L_08896714:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(596), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08896724u);
    ctx.gpr[5] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 881u, 0x08892EE0u>(ctx, &aot_mem) && ctx.pc == 0x08896724u) goto L_08896724;
    return;
L_08896724:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088967D4;
      }
      goto L_0889672C;
    }
L_0889672C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 53u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088967D4;
      }
      goto L_0889673C;
    }
L_0889673C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(596), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889674Cu);
    ctx.gpr[5] = (0u | 54u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 881u, 0x08892EE0u>(ctx, &aot_mem) && ctx.pc == 0x0889674Cu) goto L_0889674C;
    return;
L_0889674C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088967D4;
      }
      goto L_08896754;
    }
L_08896754:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(596), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08896764u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 881u, 0x08892EE0u>(ctx, &aot_mem) && ctx.pc == 0x08896764u) goto L_08896764;
    return;
L_08896764:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1800), 0u);
      if (branch_taken) {
          goto L_088967D4;
      }
      goto L_0889676C;
    }
L_0889676C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08896778u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x08896778u) goto L_08896778;
    return;
L_08896778:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088967D4;
      }
      goto L_08896780;
    }
L_08896780:
    ctx.gpr[31] = (0x08896788u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 339u, 0x08AF97E8u>(ctx, &aot_mem) && ctx.pc == 0x08896788u) goto L_08896788;
    return;
L_08896788:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088967A8;
      }
      goto L_08896798;
    }
L_08896798:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088967D4;
      }
      goto L_088967A8;
    }
L_088967A8:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(1312));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(608));
    ctx.gpr[31] = (0x088967B8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 121u, 0x0888494Cu>(ctx, &aot_mem) && ctx.pc == 0x088967B8u) goto L_088967B8;
    return;
L_088967B8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    ctx.gpr[31] = (0x088967C4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 117u, 0x088848ECu>(ctx, &aot_mem) && ctx.pc == 0x088967C4u) goto L_088967C4;
    return;
L_088967C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1340)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088967D4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 303u, 0x089A1630u>(ctx, &aot_mem) && ctx.pc == 0x088967D4u) goto L_088967D4;
    return;
L_088967D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 88u, 0x088984A8u>(ctx, &aot_mem); return;
      }
      goto L_088967DC;
    }
L_088967DC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088967FC;
      }
      goto L_088967E4;
    }
L_088967E4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088967F4u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x088967F4u) goto L_088967F4;
    return;
L_088967F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 66u, 0x088983B4u>(ctx, &aot_mem); return;
      }
      goto L_088967FC;
    }
L_088967FC:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(608));
    ctx.gpr[31] = (0x08896810u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08896810u) goto L_08896810;
    return;
L_08896810:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08896820u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 112u, 0x0888487Cu>(ctx, &aot_mem) && ctx.pc == 0x08896820u) goto L_08896820;
    return;
L_08896820:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889682Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 121u, 0x0888494Cu>(ctx, &aot_mem) && ctx.pc == 0x0889682Cu) goto L_0889682C;
    return;
L_0889682C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0889683Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 120u, 0x08884934u>(ctx, &aot_mem) && ctx.pc == 0x0889683Cu) goto L_0889683C;
    return;
L_0889683C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1340)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088969B4;
      }
      goto L_08896854;
    }
L_08896854:
    ctx.gpr[31] = (0x0889685Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 339u, 0x08AF97E8u>(ctx, &aot_mem) && ctx.pc == 0x0889685Cu) goto L_0889685C;
    return;
L_0889685C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889687C;
      }
      goto L_0889686C;
    }
L_0889686C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088969DC;
      }
      goto L_0889687C;
    }
L_0889687C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08896990;
      }
      goto L_08896890;
    }
L_08896890:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088968A4u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 116u, 0x088848D8u>(ctx, &aot_mem) && ctx.pc == 0x088968A4u) goto L_088968A4;
    return;
L_088968A4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1312));
    ctx.gpr[31] = (0x088968B0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(608));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 121u, 0x0888494Cu>(ctx, &aot_mem) && ctx.pc == 0x088968B0u) goto L_088968B0;
    return;
L_088968B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08896960;
      }
      goto L_088968BC;
    }
L_088968BC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(608));
    ctx.gpr[31] = (0x088968C8u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1312));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 117u, 0x088848ECu>(ctx, &aot_mem) && ctx.pc == 0x088968C8u) goto L_088968C8;
    return;
L_088968C8:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088968D8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 472u, 0x08899D50u>(ctx, &aot_mem) && ctx.pc == 0x088968D8u) goto L_088968D8;
    return;
L_088968D8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08896960;
      }
      goto L_088968E8;
    }
L_088968E8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08896910;
      }
      goto L_088968F0;
    }
L_088968F0:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[31] = (0x08896904u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 719u, 0x08977A28u>(ctx, &aot_mem) && ctx.pc == 0x08896904u) goto L_08896904;
    return;
L_08896904:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    ctx.gpr[31] = (0x08896910u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 121u, 0x0888494Cu>(ctx, &aot_mem) && ctx.pc == 0x08896910u) goto L_08896910;
    return;
L_08896910:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(624));
    ctx.gpr[31] = (0x0889691Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x0889691Cu) goto L_0889691C;
    return;
L_0889691C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    ctx.gpr[31] = (0x0889692Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 112u, 0x0888487Cu>(ctx, &aot_mem) && ctx.pc == 0x0889692Cu) goto L_0889692C;
    return;
L_0889692C:
    ctx.gpr[31] = (0x08896934u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 119u, 0x08884918u>(ctx, &aot_mem) && ctx.pc == 0x08896934u) goto L_08896934;
    return;
L_08896934:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1340)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08896960;
      }
      goto L_08896948;
    }
L_08896948:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (57344u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_08896960;
L_08896960:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08896990;
      }
      goto L_0889696C;
    }
L_0889696C:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(1312));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(656));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[31] = (0x08896984u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 719u, 0x08977A28u>(ctx, &aot_mem) && ctx.pc == 0x08896984u) goto L_08896984;
    return;
L_08896984:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08896990u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 121u, 0x0888494Cu>(ctx, &aot_mem) && ctx.pc == 0x08896990u) goto L_08896990;
    return;
L_08896990:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    ctx.gpr[31] = (0x0889699Cu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1312));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 117u, 0x088848ECu>(ctx, &aot_mem) && ctx.pc == 0x0889699Cu) goto L_0889699C;
    return;
L_0889699C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1340)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088969ACu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 303u, 0x089A1630u>(ctx, &aot_mem) && ctx.pc == 0x088969ACu) goto L_088969AC;
    return;
L_088969AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088969DC;
      }
      goto L_088969B4;
    }
L_088969B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088969D0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 471u, 0x08AFDFA0u>(ctx, &aot_mem) && ctx.pc == 0x088969D0u) goto L_088969D0;
    return;
L_088969D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088969DCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x088969DCu) goto L_088969DC;
    return;
L_088969DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 66u, 0x088983B4u>(ctx, &aot_mem); return;
      }
      goto L_088969E4;
    }
L_088969E4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088967FC;
      }
      goto L_088969F4;
    }
L_088969F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
      if (branch_taken) {
          goto L_088967DC;
      }
      goto L_088969FC;
    }
L_088969FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088970AC;
      }
      goto L_08896A08;
    }
L_08896A08:
    ctx.gpr[31] = (0x08896A10u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x08896A10u) goto L_08896A10;
    return;
L_08896A10:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08896A74;
      }
      goto L_08896A18;
    }
L_08896A18:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08896A74;
      }
      goto L_08896A28;
    }
L_08896A28:
    ctx.gpr[31] = (0x08896A30u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 470u, 0x08AFA180u>(ctx, &aot_mem) && ctx.pc == 0x08896A30u) goto L_08896A30;
    return;
L_08896A30:
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08896A74;
      }
      goto L_08896A3C;
    }
L_08896A3C:
    ctx.gpr[31] = (0x08896A44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08896A44u) goto L_08896A44;
    return;
L_08896A44:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2088)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08896A74;
      }
      goto L_08896A50;
    }
L_08896A50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08896A74;
      }
      goto L_08896A60;
    }
L_08896A60:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08896A6Cu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 881u, 0x08892EE0u>(ctx, &aot_mem) && ctx.pc == 0x08896A6Cu) goto L_08896A6C;
    return;
L_08896A6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 66u, 0x088983B4u>(ctx, &aot_mem); return;
      }
      goto L_08896A74;
    }
L_08896A74:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08896C90;
      }
      goto L_08896A84;
    }
L_08896A84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08896C90;
      }
      goto L_08896A90;
    }
L_08896A90:
    ctx.gpr[31] = (0x08896A98u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 118u, 0x088848FCu>(ctx, &aot_mem) && ctx.pc == 0x08896A98u) goto L_08896A98;
    return;
L_08896A98:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08896B3C;
      }
      goto L_08896AB0;
    }
L_08896AB0:
    ctx.gpr[31] = (0x08896AB8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 429u, 0x08AF9E60u>(ctx, &aot_mem) && ctx.pc == 0x08896AB8u) goto L_08896AB8;
    return;
L_08896AB8:
    ctx.gpr[31] = (0x08896AC0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 120u, 0x08884934u>(ctx, &aot_mem) && ctx.pc == 0x08896AC0u) goto L_08896AC0;
    return;
L_08896AC0:
    ctx.gpr[4] = (14801u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46871u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08896B3C;
      }
      goto L_08896ADC;
    }
L_08896ADC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08896B14;
      }
      goto L_08896AEC;
    }
L_08896AEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08896C88;
      }
      goto L_08896AFC;
    }
L_08896AFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x08896B0Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 10u, 0x088A00B4u>(ctx, &aot_mem) && ctx.pc == 0x08896B0Cu) goto L_08896B0C;
    return;
L_08896B0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08896C88;
      }
      goto L_08896B14;
    }
L_08896B14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08896B34u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x08896B34u) goto L_08896B34;
    return;
L_08896B34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08896C88;
      }
      goto L_08896B3C;
    }
L_08896B3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    if (ctx.gpr[4] != ctx.gpr[16]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
        goto L_08896B60;
    }
    goto L_08896B4C;
L_08896B4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(398))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08896B70;
      }
      goto L_08896B5C;
    }
L_08896B5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    goto L_08896B60;
L_08896B60:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08896C88;
      }
      goto L_08896B70;
    }
L_08896B70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(542)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08896C88;
      }
      goto L_08896B80;
    }
L_08896B80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x08896B8Cu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 410u, 0x08AF9CE0u>(ctx, &aot_mem) && ctx.pc == 0x08896B8Cu) goto L_08896B8C;
    return;
L_08896B8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(360), 0u);
    ctx.gpr[31] = (0x08896B9Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 470u, 0x08AFA180u>(ctx, &aot_mem) && ctx.pc == 0x08896B9Cu) goto L_08896B9C;
    return;
L_08896B9C:
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08896C3C;
      }
      goto L_08896BA8;
    }
L_08896BA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2096)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (16153u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08896C30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 290u, 0x0891D8A4u>(ctx, &aot_mem) && ctx.pc == 0x08896C30u) goto L_08896C30;
    return;
L_08896C30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08896C7C;
      }
      goto L_08896C3C;
    }
L_08896C3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (16204u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08896C7C;
L_08896C7C:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(397), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08896C88;
L_08896C88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 66u, 0x088983B4u>(ctx, &aot_mem); return;
      }
      goto L_08896C90;
    }
L_08896C90:
    ctx.gpr[31] = (0x08896C98u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 118u, 0x088848FCu>(ctx, &aot_mem) && ctx.pc == 0x08896C98u) goto L_08896C98;
    return;
L_08896C98:
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088970C4;
      }
      goto L_08896CB0;
    }
L_08896CB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088970C4;
      }
      goto L_08896CC0;
    }
L_08896CC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889708C;
      }
      goto L_08896CCC;
    }
L_08896CCC:
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08896CDCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08896CDCu) goto L_08896CDC;
    return;
L_08896CDC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    ctx.gpr[31] = (0x08896CE8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 117u, 0x088848ECu>(ctx, &aot_mem) && ctx.pc == 0x08896CE8u) goto L_08896CE8;
    return;
L_08896CE8:
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(736));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(688));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[7] = (0u | 6u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x08896D20u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 158u, 0x088C0EF8u>(ctx, &aot_mem) && ctx.pc == 0x08896D20u) goto L_08896D20;
    return;
L_08896D20:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(736))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08896DFC;
      }
      goto L_08896D38;
    }
L_08896D38:
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(688)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(720));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(752));
    ctx.gpr[31] = (0x08896D54u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08896D54u) goto L_08896D54;
    return;
L_08896D54:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08896D60u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08896D60u) goto L_08896D60;
    return;
L_08896D60:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08896D70u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 112u, 0x0888487Cu>(ctx, &aot_mem) && ctx.pc == 0x08896D70u) goto L_08896D70;
    return;
L_08896D70:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08896D7Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 121u, 0x0888494Cu>(ctx, &aot_mem) && ctx.pc == 0x08896D7Cu) goto L_08896D7C;
    return;
L_08896D7C:
    ctx.gpr[31] = (0x08896D84u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 118u, 0x088848FCu>(ctx, &aot_mem) && ctx.pc == 0x08896D84u) goto L_08896D84;
    return;
L_08896D84:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08896DE0;
      }
      goto L_08896D94;
    }
L_08896D94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08896DE0;
      }
      goto L_08896DA4;
    }
L_08896DA4:
    ctx.gpr[31] = (0x08896DACu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 858u, 0x0889FE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08896DACu) goto L_08896DAC;
    return;
L_08896DAC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08896DE0;
      }
      goto L_08896DB4;
    }
L_08896DB4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(616)));
    ctx.gpr[4] = (17274u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08896DE0;
      }
      goto L_08896DD0;
    }
L_08896DD0:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08896DDCu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(720));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 118u, 0x088848FCu>(ctx, &aot_mem) && ctx.pc == 0x08896DDCu) goto L_08896DDC;
    return;
L_08896DDC:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08896DE0;
L_08896DE0:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[4] << 16u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(736))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08896D38;
      }
      goto L_08896DFC;
    }
L_08896DFC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1332), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08896E34;
      }
      goto L_08896E08;
    }
L_08896E08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x08896E14u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1332));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08896E14u) goto L_08896E14;
    return;
L_08896E14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08896E2Cu);
    ctx.gpr[5] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x08896E2Cu) goto L_08896E2C;
    return;
L_08896E2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08897084;
      }
      goto L_08896E34;
    }
L_08896E34:
    ctx.gpr[31] = (0x08896E3Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 745u, 0x08A2F69Cu>(ctx, &aot_mem) && ctx.pc == 0x08896E3Cu) goto L_08896E3C;
    return;
L_08896E3C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08897084;
      }
      goto L_08896E44;
    }
L_08896E44:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(800));
    ctx.gpr[31] = (0x08896E50u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08896E50u) goto L_08896E50;
    return;
L_08896E50:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08896E5Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 117u, 0x088848ECu>(ctx, &aot_mem) && ctx.pc == 0x08896E5Cu) goto L_08896E5C;
    return;
L_08896E5C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(768));
    ctx.gpr[31] = (0x08896E70u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 117u, 0x088848ECu>(ctx, &aot_mem) && ctx.pc == 0x08896E70u) goto L_08896E70;
    return;
L_08896E70:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08896E98u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 369u, 0x0897572Cu>(ctx, &aot_mem) && ctx.pc == 0x08896E98u) goto L_08896E98;
    return;
L_08896E98:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_08897084;
      }
      goto L_08896EA4;
    }
L_08896EA4:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[17] << 4u);
    ctx.gpr[6] = (ctx.gpr[17] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(896));
    ctx.gpr[31] = (0x08896ECCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 837u, 0x08AFB9B8u>(ctx, &aot_mem) && ctx.pc == 0x08896ECCu) goto L_08896ECC;
    return;
L_08896ECC:
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(788));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x08896F00u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 270u, 0x088C1A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08896F00u) goto L_08896F00;
    return;
L_08896F00:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(788))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08897084;
      }
      goto L_08896F0C;
    }
L_08896F0C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13820)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(800));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(816));
    ctx.gpr[31] = (0x08896F24u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 390u, 0x088724BCu>(ctx, &aot_mem) && ctx.pc == 0x08896F24u) goto L_08896F24;
    return;
L_08896F24:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(784));
    ctx.gpr[31] = (0x08896F30u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 314u, 0x089EA1FCu>(ctx, &aot_mem) && ctx.pc == 0x08896F30u) goto L_08896F30;
    return;
L_08896F30:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08896FAC;
      }
      goto L_08896F44;
    }
L_08896F44:
    ctx.gpr[31] = (0x08896F4Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 148u, 0x08A28E68u>(ctx, &aot_mem) && ctx.pc == 0x08896F4Cu) goto L_08896F4C;
    return;
L_08896F4C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08896F84;
      }
      goto L_08896F54;
    }
L_08896F54:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08896F60u);
    ctx.gpr[4] = (0u | 1472u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 510u, 0x0889E8B4u>(ctx, &aot_mem) && ctx.pc == 0x08896F60u) goto L_08896F60;
    return;
L_08896F60:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08896F7C;
      }
      goto L_08896F6C;
    }
L_08896F6C:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08896F78u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 565u, 0x08A378CCu>(ctx, &aot_mem) && ctx.pc == 0x08896F78u) goto L_08896F78;
    return;
L_08896F78:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_08896F7C;
L_08896F7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08896FAC;
      }
      goto L_08896F84;
    }
L_08896F84:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08896F90u);
    ctx.gpr[4] = (0u | 1760u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 510u, 0x0889E8B4u>(ctx, &aot_mem) && ctx.pc == 0x08896F90u) goto L_08896F90;
    return;
L_08896F90:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08896FAC;
      }
      goto L_08896F9C;
    }
L_08896F9C:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08896FA8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 357u, 0x0880E120u>(ctx, &aot_mem) && ctx.pc == 0x08896FA8u) goto L_08896FA8;
    return;
L_08896FA8:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_08896FAC;
L_08896FAC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08897084;
      }
      goto L_08896FB4;
    }
L_08896FB4:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[17] << 4u);
    ctx.gpr[6] = (ctx.gpr[17] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(944));
    ctx.gpr[31] = (0x08896FDCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 477u, 0x08AFE064u>(ctx, &aot_mem) && ctx.pc == 0x08896FDCu) goto L_08896FDC;
    return;
L_08896FDC:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(912));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(928));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (16512u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08896FFCu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 116u, 0x088848D8u>(ctx, &aot_mem) && ctx.pc == 0x08896FFCu) goto L_08896FFC;
    return;
L_08896FFC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889700Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 111u, 0x08884864u>(ctx, &aot_mem) && ctx.pc == 0x0889700Cu) goto L_0889700C;
    return;
L_0889700C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08897018u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 391u, 0x08AF9B70u>(ctx, &aot_mem) && ctx.pc == 0x08897018u) goto L_08897018;
    return;
L_08897018:
    ctx.gpr[4] = (16479u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26355u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08897034u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 123u, 0x08884978u>(ctx, &aot_mem) && ctx.pc == 0x08897034u) goto L_08897034;
    return;
L_08897034:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08897040u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 410u, 0x08AF9CE0u>(ctx, &aot_mem) && ctx.pc == 0x08897040u) goto L_08897040;
    return;
L_08897040:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0889704Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 479u, 0x08AFE088u>(ctx, &aot_mem) && ctx.pc == 0x0889704Cu) goto L_0889704C;
    return;
L_0889704C:
    ctx.gpr[31] = (0x08897054u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x08897054u) goto L_08897054;
    return;
L_08897054:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1332), ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08897084;
      }
      goto L_08897060;
    }
L_08897060:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x0889706Cu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1332));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x0889706Cu) goto L_0889706C;
    return;
L_0889706C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08897084u);
    ctx.gpr[5] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x08897084u) goto L_08897084;
    return;
L_08897084:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088970A4;
      }
      goto L_0889708C;
    }
L_0889708C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088970A4u);
    ctx.gpr[5] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x088970A4u) goto L_088970A4;
    return;
L_088970A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 66u, 0x088983B4u>(ctx, &aot_mem); return;
      }
      goto L_088970AC;
    }
L_088970AC:
    ctx.gpr[31] = (0x088970B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 84u, 0x089A0660u>(ctx, &aot_mem) && ctx.pc == 0x088970B4u) goto L_088970B4;
    return;
L_088970B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_088970C4;
L_088970C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08897108;
      }
      goto L_088970D4;
    }
L_088970D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08897108;
      }
      goto L_088970E4;
    }
L_088970E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08897108;
      }
      goto L_088970F0;
    }
L_088970F0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08897100u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x08897100u) goto L_08897100;
    return;
L_08897100:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 66u, 0x088983B4u>(ctx, &aot_mem); return;
      }
      goto L_08897108;
    }
L_08897108:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889713C;
      }
      goto L_08897114;
    }
L_08897114:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889713C;
      }
      goto L_08897128;
    }
L_08897128:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08897174;
      }
      goto L_0889713C;
    }
L_0889713C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[31] = (0x08897154u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 84u, 0x089A0660u>(ctx, &aot_mem) && ctx.pc == 0x08897154u) goto L_08897154;
    return;
L_08897154:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0889716Cu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889716Cu) goto L_0889716C;
    return;
L_0889716C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 66u, 0x088983B4u>(ctx, &aot_mem); return;
      }
      goto L_08897174;
    }
L_08897174:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08897200;
      }
      goto L_08897180;
    }
L_08897180:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0889719Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 138u, 0x08850D9Cu>(ctx, &aot_mem) && ctx.pc == 0x0889719Cu) goto L_0889719C;
    return;
L_0889719C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088971C0;
      }
      goto L_088971A4;
    }
L_088971A4:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x088971B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 290u, 0x0889D7A8u>(ctx, &aot_mem) && ctx.pc == 0x088971B8u) goto L_088971B8;
    return;
L_088971B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088971D8;
      }
      goto L_088971C0;
    }
L_088971C0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x088971D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 39u, 0x0889C4C0u>(ctx, &aot_mem) && ctx.pc == 0x088971D4u) goto L_088971D4;
    return;
L_088971D4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088971D8;
L_088971D8:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088971F8;
      }
      goto L_088971E4;
    }
L_088971E4:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08897200;
      }
      goto L_088971F0;
    }
L_088971F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 66u, 0x088983B4u>(ctx, &aot_mem); return;
      }
      goto L_088971F8;
    }
L_088971F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 88u, 0x088984A8u>(ctx, &aot_mem); return;
      }
      goto L_08897200;
    }
L_08897200:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08897218u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08897218u) goto L_08897218;
    return;
L_08897218:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 66u, 0x088983B4u>(ctx, &aot_mem); return;
      }
      goto L_08897220;
    }
L_08897220:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889722Cu);
    ctx.gpr[5] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 264u, 0x0899DB34u>(ctx, &aot_mem) && ctx.pc == 0x0889722Cu) goto L_0889722C;
    return;
L_0889722C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088972D4;
      }
      goto L_08897238;
    }
L_08897238:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088972BC;
      }
      goto L_08897244;
    }
L_08897244:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1264)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088972BC;
      }
      goto L_08897258;
    }
L_08897258:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[31] = (0x08897270u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 471u, 0x088868D0u>(ctx, &aot_mem) && ctx.pc == 0x08897270u) goto L_08897270;
    return;
L_08897270:
    ctx.gpr[31] = (0x08897278u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 205u, 0x089ED4F0u>(ctx, &aot_mem) && ctx.pc == 0x08897278u) goto L_08897278;
    return;
L_08897278:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(397), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x088972B4u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 410u, 0x08AF9CE0u>(ctx, &aot_mem) && ctx.pc == 0x088972B4u) goto L_088972B4;
    return;
L_088972B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08897478;
      }
      goto L_088972BC;
    }
L_088972BC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088972CCu);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x088972CCu) goto L_088972CC;
    return;
L_088972CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 66u, 0x088983B4u>(ctx, &aot_mem); return;
      }
      goto L_088972D4;
    }
L_088972D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08897344;
      }
      goto L_088972E0;
    }
L_088972E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08897344;
      }
      goto L_088972F4;
    }
L_088972F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08897344;
      }
      goto L_08897308;
    }
L_08897308:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08897398;
      }
      goto L_08897314;
    }
L_08897314:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1264)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08897398;
      }
      goto L_08897324;
    }
L_08897324:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1264)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08897398;
      }
      goto L_08897338;
    }
L_08897338:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08897398;
      }
      goto L_08897344;
    }
L_08897344:
    ctx.gpr[31] = (0x0889734Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 84u, 0x089A0660u>(ctx, &aot_mem) && ctx.pc == 0x0889734Cu) goto L_0889734C;
    return;
L_0889734C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08897364u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08897364u) goto L_08897364;
    return;
L_08897364:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08897390;
      }
      goto L_08897370;
    }
L_08897370:
    ctx.gpr[31] = (0x08897378u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 405u, 0x08AF9C88u>(ctx, &aot_mem) && ctx.pc == 0x08897378u) goto L_08897378;
    return;
L_08897378:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08897390;
      }
      goto L_08897380;
    }
L_08897380:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08897390u);
    ctx.gpr[5] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x08897390u) goto L_08897390;
    return;
L_08897390:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 66u, 0x088983B4u>(ctx, &aot_mem); return;
      }
      goto L_08897398;
    }
L_08897398:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088973D8;
      }
      goto L_088973A8;
    }
L_088973A8:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    ctx.gpr[31] = (0x088973B4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 488u, 0x08AFA274u>(ctx, &aot_mem) && ctx.pc == 0x088973B4u) goto L_088973B4;
    return;
L_088973B4:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088973D8;
      }
      goto L_088973C0;
    }
L_088973C0:
    ctx.gpr[31] = (0x088973C8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 451u, 0x08AFA08Cu>(ctx, &aot_mem) && ctx.pc == 0x088973C8u) goto L_088973C8;
    return;
L_088973C8:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088973D8;
      }
      goto L_088973D4;
    }
L_088973D4:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_088973D8;
L_088973D8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08897444;
      }
      goto L_088973E0;
    }
L_088973E0:
    ctx.gpr[31] = (0x088973E8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x088973E8u) goto L_088973E8;
    return;
L_088973E8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088973F4u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x088973F4u) goto L_088973F4;
    return;
L_088973F4:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(960));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08897410u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 114u, 0x088848B0u>(ctx, &aot_mem) && ctx.pc == 0x08897410u) goto L_08897410;
    return;
L_08897410:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08897420u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 112u, 0x0888487Cu>(ctx, &aot_mem) && ctx.pc == 0x08897420u) goto L_08897420;
    return;
L_08897420:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(976));
    ctx.gpr[31] = (0x0889742Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 117u, 0x088848ECu>(ctx, &aot_mem) && ctx.pc == 0x0889742Cu) goto L_0889742C;
    return;
L_0889742C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 25u);
    ctx.gpr[31] = (0x0889743Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 1046u, 0x08893734u>(ctx, &aot_mem) && ctx.pc == 0x0889743Cu) goto L_0889743C;
    return;
L_0889743C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08897460;
      }
      goto L_08897444;
    }
L_08897444:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08897460;
      }
      goto L_08897450;
    }
L_08897450:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08897460u);
    ctx.gpr[5] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x08897460u) goto L_08897460;
    return;
L_08897460:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08897478u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08897478u) goto L_08897478;
    return;
L_08897478:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 66u, 0x088983B4u>(ctx, &aot_mem); return;
      }
      goto L_08897480;
    }
L_08897480:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088977F8;
      }
      goto L_0889748C;
    }
L_0889748C:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088974AC;
      }
      goto L_088974A4;
    }
L_088974A4:
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_088974AC;
L_088974AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 14u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088974C4;
      }
      goto L_088974BC;
    }
L_088974BC:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_088974C4;
L_088974C4:
    ctx.gpr[31] = (0x088974CCu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 118u, 0x088848FCu>(ctx, &aot_mem) && ctx.pc == 0x088974CCu) goto L_088974CC;
    return;
L_088974CC:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x088974D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 339u, 0x08AF97E8u>(ctx, &aot_mem) && ctx.pc == 0x088974D8u) goto L_088974D8;
    return;
L_088974D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088977F0;
      }
      goto L_088974E8;
    }
L_088974E8:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889766C;
      }
      goto L_088974F8;
    }
L_088974F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08897508u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 328u, 0x089A1774u>(ctx, &aot_mem) && ctx.pc == 0x08897508u) goto L_08897508;
    return;
L_08897508:
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08897624;
      }
      goto L_08897520;
    }
L_08897520:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(628)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088975E4;
      }
      goto L_0889752C;
    }
L_0889752C:
    ctx.gpr[31] = (0x08897534u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(628)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 811u, 0x08AFB7E0u>(ctx, &aot_mem) && ctx.pc == 0x08897534u) goto L_08897534;
    return;
L_08897534:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088975E4;
      }
      goto L_08897540;
    }
L_08897540:
    ctx.gpr[31] = (0x08897548u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(628)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 811u, 0x08AFB7E0u>(ctx, &aot_mem) && ctx.pc == 0x08897548u) goto L_08897548;
    return;
L_08897548:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088975E4;
      }
      goto L_08897550;
    }
L_08897550:
    ctx.gpr[31] = (0x08897558u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(628)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x08897558u) goto L_08897558;
    return;
L_08897558:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088975C8;
      }
      goto L_08897560;
    }
L_08897560:
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088975A0;
      }
      goto L_08897578;
    }
L_08897578:
    ctx.gpr[31] = (0x08897580u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08897580u) goto L_08897580;
    return;
L_08897580:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2932)));
    ctx.gpr[4] = (16294u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088975B4;
      }
      goto L_088975A0;
    }
L_088975A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088975ACu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x088975ACu) goto L_088975AC;
    return;
L_088975AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088977C0;
      }
      goto L_088975B4;
    }
L_088975B4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088975C0u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x088975C0u) goto L_088975C0;
    return;
L_088975C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088977C0;
      }
      goto L_088975C8;
    }
L_088975C8:
    ctx.gpr[31] = (0x088975D0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(628)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 811u, 0x08AFB7E0u>(ctx, &aot_mem) && ctx.pc == 0x088975D0u) goto L_088975D0;
    return;
L_088975D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088975DCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x088975DCu) goto L_088975DC;
    return;
L_088975DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088977C0;
      }
      goto L_088975E4;
    }
L_088975E4:
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08897610;
      }
      goto L_088975FC;
    }
L_088975FC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08897608u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x08897608u) goto L_08897608;
    return;
L_08897608:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088977C0;
      }
      goto L_08897610;
    }
L_08897610:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889761Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x0889761Cu) goto L_0889761C;
    return;
L_0889761C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088977C0;
      }
      goto L_08897624;
    }
L_08897624:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(628)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08897658;
      }
      goto L_08897630;
    }
L_08897630:
    ctx.gpr[31] = (0x08897638u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(628)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 811u, 0x08AFB7E0u>(ctx, &aot_mem) && ctx.pc == 0x08897638u) goto L_08897638;
    return;
L_08897638:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08897658;
      }
      goto L_08897644;
    }
L_08897644:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08897650u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x08897650u) goto L_08897650;
    return;
L_08897650:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088977C0;
      }
      goto L_08897658;
    }
L_08897658:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08897664u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x08897664u) goto L_08897664;
    return;
L_08897664:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088977C0;
      }
      goto L_0889766C;
    }
L_0889766C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08897678u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 471u, 0x08AFDFA0u>(ctx, &aot_mem) && ctx.pc == 0x08897678u) goto L_08897678;
    return;
L_08897678:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088976C0;
      }
      goto L_08897688;
    }
L_08897688:
    ctx.gpr[31] = (0x08897690u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 748u, 0x0899FCA0u>(ctx, &aot_mem) && ctx.pc == 0x08897690u) goto L_08897690;
    return;
L_08897690:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088976A8;
      }
      goto L_0889769C;
    }
L_0889769C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
    ctx.gpr[31] = (0x088976A8u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1760));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x088976A8u) goto L_088976A8;
    return;
L_088976A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1760), ctx.gpr[4]);
    ctx.gpr[31] = (0x088976B8u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1760));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x088976B8u) goto L_088976B8;
    return;
L_088976B8:
    ctx.gpr[31] = (0x088976C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 795u, 0x0899FF58u>(ctx, &aot_mem) && ctx.pc == 0x088976C0u) goto L_088976C0;
    return;
L_088976C0:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088976EC;
      }
      goto L_088976D8;
    }
L_088976D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088976E4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x088976E4u) goto L_088976E4;
    return;
L_088976E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08897700;
      }
      goto L_088976EC;
    }
L_088976EC:
    ctx.gpr[31] = (0x088976F4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 811u, 0x08AFB7E0u>(ctx, &aot_mem) && ctx.pc == 0x088976F4u) goto L_088976F4;
    return;
L_088976F4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08897700u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x08897700u) goto L_08897700;
    return;
L_08897700:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 14u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088977C0;
      }
      goto L_08897710;
    }
L_08897710:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889771Cu);
    ctx.gpr[5] = (0u | 134u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x0889771Cu) goto L_0889771C;
    return;
L_0889771C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[31] = (0x08897728u);
    ctx.gpr[5] = (0u | 126u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08897728u) goto L_08897728;
    return;
L_08897728:
    ctx.gpr[31] = (0x08897730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 339u, 0x08AF97E8u>(ctx, &aot_mem) && ctx.pc == 0x08897730u) goto L_08897730;
    return;
L_08897730:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(3000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1772), ctx.gpr[4]);
    ctx.gpr[31] = (0x08897740u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 339u, 0x08AF97E8u>(ctx, &aot_mem) && ctx.pc == 0x08897740u) goto L_08897740;
    return;
L_08897740:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(3000));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1772), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08897758u);
    ctx.gpr[5] = (0u | 47u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 881u, 0x08892EE0u>(ctx, &aot_mem) && ctx.pc == 0x08897758u) goto L_08897758;
    return;
L_08897758:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[31] = (0x08897764u);
    ctx.gpr[5] = (0u | 47u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 881u, 0x08892EE0u>(ctx, &aot_mem) && ctx.pc == 0x08897764u) goto L_08897764;
    return;
L_08897764:
    ctx.gpr[31] = (0x0889776Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x0889776Cu) goto L_0889776C;
    return;
L_0889776C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08897778u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08897778u) goto L_08897778;
    return;
L_08897778:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[31] = (0x08897788u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08897788u) goto L_08897788;
    return;
L_08897788:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08897794u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08897794u) goto L_08897794;
    return;
L_08897794:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088977A8u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 243u, 0x08A1D2ECu>(ctx, &aot_mem) && ctx.pc == 0x088977A8u) goto L_088977A8;
    return;
L_088977A8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1168), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    ctx.gpr[31] = (0x088977B8u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 243u, 0x08A1D2ECu>(ctx, &aot_mem) && ctx.pc == 0x088977B8u) goto L_088977B8;
    return;
L_088977B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1168), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_088977C0;
L_088977C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 13u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088977F0;
      }
      goto L_088977D0;
    }
L_088977D0:
    ctx.gpr[31] = (0x088977D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 811u, 0x08AFB7E0u>(ctx, &aot_mem) && ctx.pc == 0x088977D8u) goto L_088977D8;
    return;
L_088977D8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088977F0;
      }
      goto L_088977E4;
    }
L_088977E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088977F0u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x088977F0u) goto L_088977F0;
    return;
L_088977F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08897804;
      }
      goto L_088977F8;
    }
L_088977F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08897804u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 881u, 0x08892EE0u>(ctx, &aot_mem) && ctx.pc == 0x08897804u) goto L_08897804;
    return;
L_08897804:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 66u, 0x088983B4u>(ctx, &aot_mem); return;
      }
      goto L_0889780C;
    }
L_0889780C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08897928;
      }
      goto L_08897818;
    }
L_08897818:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1024));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889782Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 606u, 0x0888718Cu>(ctx, &aot_mem) && ctx.pc == 0x0889782Cu) goto L_0889782C;
    return;
L_0889782C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08897838u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 121u, 0x0888494Cu>(ctx, &aot_mem) && ctx.pc == 0x08897838u) goto L_08897838;
    return;
L_08897838:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0889784Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 112u, 0x0888487Cu>(ctx, &aot_mem) && ctx.pc == 0x0889784Cu) goto L_0889784C;
    return;
L_0889784C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08897858u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 121u, 0x0888494Cu>(ctx, &aot_mem) && ctx.pc == 0x08897858u) goto L_08897858;
    return;
L_08897858:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08897864u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 117u, 0x088848ECu>(ctx, &aot_mem) && ctx.pc == 0x08897864u) goto L_08897864;
    return;
L_08897864:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08897878u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 303u, 0x089A1630u>(ctx, &aot_mem) && ctx.pc == 0x08897878u) goto L_08897878;
    return;
L_08897878:
    ctx.gpr[31] = (0x08897880u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 118u, 0x088848FCu>(ctx, &aot_mem) && ctx.pc == 0x08897880u) goto L_08897880;
    return;
L_08897880:
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088978CC;
      }
      goto L_08897898;
    }
L_08897898:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    ctx.gpr[31] = (0x088978A4u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 117u, 0x088848ECu>(ctx, &aot_mem) && ctx.pc == 0x088978A4u) goto L_088978A4;
    return;
L_088978A4:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088978B8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 303u, 0x089A1630u>(ctx, &aot_mem) && ctx.pc == 0x088978B8u) goto L_088978B8;
    return;
L_088978B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088978C4u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x088978C4u) goto L_088978C4;
    return;
L_088978C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08897920;
      }
      goto L_088978CC;
    }
L_088978CC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    ctx.gpr[31] = (0x088978D8u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 117u, 0x088848ECu>(ctx, &aot_mem) && ctx.pc == 0x088978D8u) goto L_088978D8;
    return;
L_088978D8:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088978ECu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 303u, 0x089A1630u>(ctx, &aot_mem) && ctx.pc == 0x088978ECu) goto L_088978EC;
    return;
L_088978EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08897920;
      }
      goto L_088978F8;
    }
L_088978F8:
    ctx.gpr[31] = (0x08897900u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 811u, 0x08AFB7E0u>(ctx, &aot_mem) && ctx.pc == 0x08897900u) goto L_08897900;
    return;
L_08897900:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08897920;
      }
      goto L_0889790C;
    }
L_0889790C:
    ctx.gpr[31] = (0x08897914u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 811u, 0x08AFB7E0u>(ctx, &aot_mem) && ctx.pc == 0x08897914u) goto L_08897914;
    return;
L_08897914:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08897920u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x08897920u) goto L_08897920;
    return;
L_08897920:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08897934;
      }
      goto L_08897928;
    }
L_08897928:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08897934u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 881u, 0x08892EE0u>(ctx, &aot_mem) && ctx.pc == 0x08897934u) goto L_08897934;
    return;
L_08897934:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 66u, 0x088983B4u>(ctx, &aot_mem); return;
      }
      goto L_0889793C;
    }
L_0889793C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08897CCC;
      }
      goto L_08897948;
    }
L_08897948:
    ctx.gpr[31] = (0x08897950u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 118u, 0x088848FCu>(ctx, &aot_mem) && ctx.pc == 0x08897950u) goto L_08897950;
    return;
L_08897950:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x0889795Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 816u, 0x08AFB840u>(ctx, &aot_mem) && ctx.pc == 0x0889795Cu) goto L_0889795C;
    return;
L_0889795C:
    ctx.gpr[31] = (0x08897964u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 815u, 0x08AFB838u>(ctx, &aot_mem) && ctx.pc == 0x08897964u) goto L_08897964;
    return;
L_08897964:
    ctx.gpr[31] = (0x0889796Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x0889796Cu) goto L_0889796C;
    return;
L_0889796C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08897978u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 814u, 0x08AFB830u>(ctx, &aot_mem) && ctx.pc == 0x08897978u) goto L_08897978;
    return;
L_08897978:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1760), ctx.gpr[4]);
    ctx.gpr[31] = (0x0889798Cu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1760));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x0889798Cu) goto L_0889798C;
    return;
L_0889798C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1328), ctx.gpr[4]);
    ctx.gpr[31] = (0x0889799Cu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1328));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x0889799Cu) goto L_0889799C;
    return;
L_0889799C:
    ctx.gpr[31] = (0x088979A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 795u, 0x0899FF58u>(ctx, &aot_mem) && ctx.pc == 0x088979A4u) goto L_088979A4;
    return;
L_088979A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(616)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088979DC;
      }
      goto L_088979C0;
    }
L_088979C0:
    ctx.gpr[31] = (0x088979C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 84u, 0x089A0660u>(ctx, &aot_mem) && ctx.pc == 0x088979C8u) goto L_088979C8;
    return;
L_088979C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088979D4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 471u, 0x08AFDFA0u>(ctx, &aot_mem) && ctx.pc == 0x088979D4u) goto L_088979D4;
    return;
L_088979D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08897CC4;
      }
      goto L_088979DC;
    }
L_088979DC:
    ctx.gpr[31] = (0x088979E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 339u, 0x08AF97E8u>(ctx, &aot_mem) && ctx.pc == 0x088979E4u) goto L_088979E4;
    return;
L_088979E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1788)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08897BA0;
      }
      goto L_088979F4;
    }
L_088979F4:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08897BA0;
      }
      goto L_08897A04;
    }
L_08897A04:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1104));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08897A2Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 116u, 0x088848D8u>(ctx, &aot_mem) && ctx.pc == 0x08897A2Cu) goto L_08897A2C;
    return;
L_08897A2C:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    ctx.gpr[31] = (0x08897A38u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 390u, 0x08AF9B68u>(ctx, &aot_mem) && ctx.pc == 0x08897A38u) goto L_08897A38;
    return;
L_08897A38:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08897A48u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 110u, 0x0888483Cu>(ctx, &aot_mem) && ctx.pc == 0x08897A48u) goto L_08897A48;
    return;
L_08897A48:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08897A54u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 121u, 0x0888494Cu>(ctx, &aot_mem) && ctx.pc == 0x08897A54u) goto L_08897A54;
    return;
L_08897A54:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1120));
    ctx.gpr[31] = (0x08897A60u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08897A60u) goto L_08897A60;
    return;
L_08897A60:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08897A6Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 121u, 0x0888494Cu>(ctx, &aot_mem) && ctx.pc == 0x08897A6Cu) goto L_08897A6C;
    return;
L_08897A6C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08897A78u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x089274C4u>(ctx, &aot_mem) && ctx.pc == 0x08897A78u) goto L_08897A78;
    return;
L_08897A78:
    ctx.gpr[31] = (0x08897A80u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 814u, 0x08AFB830u>(ctx, &aot_mem) && ctx.pc == 0x08897A80u) goto L_08897A80;
    return;
L_08897A80:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08897A8Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 118u, 0x088848FCu>(ctx, &aot_mem) && ctx.pc == 0x08897A8Cu) goto L_08897A8C;
    return;
L_08897A8C:
    ctx.fpr[12] = ctx.fpr[22] / ctx.fpr[0];
    ctx.gpr[31] = (0x08897A98u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 122u, 0x0888495Cu>(ctx, &aot_mem) && ctx.pc == 0x08897A98u) goto L_08897A98;
    return;
L_08897A98:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08897AA4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x08897AA4u) goto L_08897AA4;
    return;
L_08897AA4:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[17] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(-7119), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1136));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x08897AE8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 478u, 0x088C68F4u>(ctx, &aot_mem) && ctx.pc == 0x08897AE8u) goto L_08897AE8;
    return;
L_08897AE8:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(-7119), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1088)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08897B98;
      }
      goto L_08897AFC;
    }
L_08897AFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[31] = (0x08897B08u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 224u, 0x088D915Cu>(ctx, &aot_mem) && ctx.pc == 0x08897B08u) goto L_08897B08;
    return;
L_08897B08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[31] = (0x08897B14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 505u, 0x0899ED08u>(ctx, &aot_mem) && ctx.pc == 0x08897B14u) goto L_08897B14;
    return;
L_08897B14:
    ctx.gpr[4] = (0u | 500u);
    ctx.gpr[31] = (0x08897B20u);
    ctx.gpr[5] = (0u | 2000u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 553u, 0x08886C98u>(ctx, &aot_mem) && ctx.pc == 0x08897B20u) goto L_08897B20;
    return;
L_08897B20:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08897B2Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 254u, 0x089A1230u>(ctx, &aot_mem) && ctx.pc == 0x08897B2Cu) goto L_08897B2C;
    return;
L_08897B2C:
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08897B74;
      }
      goto L_08897B44;
    }
L_08897B44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08897B74;
      }
      goto L_08897B54;
    }
L_08897B54:
    ctx.gpr[4] = (0u | 2000u);
    ctx.gpr[31] = (0x08897B60u);
    ctx.gpr[5] = (0u | 5000u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 553u, 0x08886C98u>(ctx, &aot_mem) && ctx.pc == 0x08897B60u) goto L_08897B60;
    return;
L_08897B60:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08897B6Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 239u, 0x089A10F0u>(ctx, &aot_mem) && ctx.pc == 0x08897B6Cu) goto L_08897B6C;
    return;
L_08897B6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08897B98;
      }
      goto L_08897B74;
    }
L_08897B74:
    ctx.gpr[4] = (0u | 50u);
    ctx.gpr[31] = (0x08897B80u);
    ctx.gpr[5] = (0u | 300u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 553u, 0x08886C98u>(ctx, &aot_mem) && ctx.pc == 0x08897B80u) goto L_08897B80;
    return;
L_08897B80:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08897B8Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 239u, 0x089A10F0u>(ctx, &aot_mem) && ctx.pc == 0x08897B8Cu) goto L_08897B8C;
    return;
L_08897B8C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08897B98u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x08897B98u) goto L_08897B98;
    return;
L_08897B98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08897CA8;
      }
      goto L_08897BA0;
    }
L_08897BA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08897CA8;
      }
      goto L_08897BB0;
    }
L_08897BB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08897CA8;
      }
      goto L_08897BC0;
    }
L_08897BC0:
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08897C04;
      }
      goto L_08897BD8;
    }
L_08897BD8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08897BF0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 328u, 0x089A1774u>(ctx, &aot_mem) && ctx.pc == 0x08897BF0u) goto L_08897BF0;
    return;
L_08897BF0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08897BFCu);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x08897BFCu) goto L_08897BFC;
    return;
L_08897BFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08897CA8;
      }
      goto L_08897C04;
    }
L_08897C04:
    ctx.gpr[31] = (0x08897C0Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 372u, 0x08AF9994u>(ctx, &aot_mem) && ctx.pc == 0x08897C0Cu) goto L_08897C0C;
    return;
L_08897C0C:
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08897C78;
      }
      goto L_08897C1C;
    }
L_08897C1C:
    ctx.gpr[31] = (0x08897C24u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 372u, 0x08AF9994u>(ctx, &aot_mem) && ctx.pc == 0x08897C24u) goto L_08897C24;
    return;
L_08897C24:
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08897C78;
      }
      goto L_08897C34;
    }
L_08897C34:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08897CA0;
      }
      goto L_08897C50;
    }
L_08897C50:
    ctx.gpr[31] = (0x08897C58u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08897C58u) goto L_08897C58;
    return;
L_08897C58:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15820)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15816)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08897C70u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 514u, 0x08AF6790u>(ctx, &aot_mem) && ctx.pc == 0x08897C70u) goto L_08897C70;
    return;
L_08897C70:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08897CA0;
      }
      goto L_08897C78;
    }
L_08897C78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08897C8Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 328u, 0x089A1774u>(ctx, &aot_mem) && ctx.pc == 0x08897C8Cu) goto L_08897C8C;
    return;
L_08897C8C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08897C98u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x08897C98u) goto L_08897C98;
    return;
L_08897C98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08897CA8;
      }
      goto L_08897CA0;
    }
L_08897CA0:
    ctx.gpr[31] = (0x08897CA8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 748u, 0x0899FCA0u>(ctx, &aot_mem) && ctx.pc == 0x08897CA8u) goto L_08897CA8;
    return;
L_08897CA8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08897CBCu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 77u, 0x089A0598u>(ctx, &aot_mem) && ctx.pc == 0x08897CBCu) goto L_08897CBC;
    return;
L_08897CBC:
    ctx.gpr[31] = (0x08897CC4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 795u, 0x0899FF58u>(ctx, &aot_mem) && ctx.pc == 0x08897CC4u) goto L_08897CC4;
    return;
L_08897CC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08897CE4;
      }
      goto L_08897CCC;
    }
L_08897CCC:
    ctx.gpr[31] = (0x08897CD4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 84u, 0x089A0660u>(ctx, &aot_mem) && ctx.pc == 0x08897CD4u) goto L_08897CD4;
    return;
L_08897CD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_08897CE4;
L_08897CE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 66u, 0x088983B4u>(ctx, &aot_mem); return;
      }
      goto L_08897CEC;
    }
L_08897CEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08897E30;
      }
      goto L_08897CF8;
    }
L_08897CF8:
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08897D08u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08897D08u) goto L_08897D08;
    return;
L_08897D08:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1168));
    ctx.gpr[31] = (0x08897D14u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 117u, 0x088848ECu>(ctx, &aot_mem) && ctx.pc == 0x08897D14u) goto L_08897D14;
    return;
L_08897D14:
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1232));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(1184));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[7] = (0u | 6u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x08897D4Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 158u, 0x088C0EF8u>(ctx, &aot_mem) && ctx.pc == 0x08897D4Cu) goto L_08897D4C;
    return;
L_08897D4C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(1232))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08897E10;
      }
      goto L_08897D64;
    }
L_08897D64:
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1184)));
    ctx.gpr[31] = (0x08897D78u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 451u, 0x08AFA08Cu>(ctx, &aot_mem) && ctx.pc == 0x08897D78u) goto L_08897D78;
    return;
L_08897D78:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08897DF4;
      }
      goto L_08897D84;
    }
L_08897D84:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1216));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1248));
    ctx.gpr[31] = (0x08897D94u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08897D94u) goto L_08897D94;
    return;
L_08897D94:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08897DA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08897DA0u) goto L_08897DA0;
    return;
L_08897DA0:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08897DB0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 112u, 0x0888487Cu>(ctx, &aot_mem) && ctx.pc == 0x08897DB0u) goto L_08897DB0;
    return;
L_08897DB0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08897DBCu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 121u, 0x0888494Cu>(ctx, &aot_mem) && ctx.pc == 0x08897DBCu) goto L_08897DBC;
    return;
L_08897DBC:
    ctx.gpr[31] = (0x08897DC4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 118u, 0x088848FCu>(ctx, &aot_mem) && ctx.pc == 0x08897DC4u) goto L_08897DC4;
    return;
L_08897DC4:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08897DF4;
      }
      goto L_08897DD4;
    }
L_08897DD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08897DF4;
      }
      goto L_08897DE4;
    }
L_08897DE4:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08897DF0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1216));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 118u, 0x088848FCu>(ctx, &aot_mem) && ctx.pc == 0x08897DF0u) goto L_08897DF0;
    return;
L_08897DF0:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08897DF4;
L_08897DF4:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[4] << 16u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(1232))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08897D64;
      }
      goto L_08897E10;
    }
L_08897E10:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08897E28;
      }
      goto L_08897E18;
    }
L_08897E18:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(604), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(604));
    ctx.gpr[31] = (0x08897E28u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08897E28u) goto L_08897E28;
    return;
L_08897E28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08897E40;
      }
      goto L_08897E30;
    }
L_08897E30:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08897E40u);
    ctx.gpr[5] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x08897E40u) goto L_08897E40;
    return;
L_08897E40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 66u, 0x088983B4u>(ctx, &aot_mem); return;
      }
      goto L_08897E48;
    }
L_08897E48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08897EB8;
      }
      goto L_08897E54;
    }
L_08897E54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08897E70;
      }
      goto L_08897E64;
    }
L_08897E64:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[31] = (0x08897E70u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 256u, 0x088D52C4u>(ctx, &aot_mem) && ctx.pc == 0x08897E70u) goto L_08897E70;
    return;
L_08897E70:
    ctx.gpr[31] = (0x08897E78u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 811u, 0x08AFB7E0u>(ctx, &aot_mem) && ctx.pc == 0x08897E78u) goto L_08897E78;
    return;
L_08897E78:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08897EC0;
      }
      goto L_08897E84;
    }
L_08897E84:
    ctx.gpr[31] = (0x08897E8Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x08897E8Cu) goto L_08897E8C;
    return;
L_08897E8C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08897EC0;
      }
      goto L_08897E94;
    }
L_08897E94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08897EA8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 77u, 0x089A0598u>(ctx, &aot_mem) && ctx.pc == 0x08897EA8u) goto L_08897EA8;
    return;
L_08897EA8:
    ctx.gpr[31] = (0x08897EB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 795u, 0x0899FF58u>(ctx, &aot_mem) && ctx.pc == 0x08897EB0u) goto L_08897EB0;
    return;
L_08897EB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08897EC0;
      }
      goto L_08897EB8;
    }
L_08897EB8:
    ctx.gpr[31] = (0x08897EC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 471u, 0x088868D0u>(ctx, &aot_mem) && ctx.pc == 0x08897EC0u) goto L_08897EC0;
    return;
L_08897EC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 66u, 0x088983B4u>(ctx, &aot_mem); return;
      }
      goto L_08897EC8;
    }
L_08897EC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 60u, 0x08898368u>(ctx, &aot_mem); return;
      }
      goto L_08897ED4;
    }
L_08897ED4:
    ctx.gpr[31] = (0x08897EDCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x08897EDCu) goto L_08897EDC;
    return;
L_08897EDC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08897F50;
      }
      goto L_08897EE4;
    }
L_08897EE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08897F50;
      }
      goto L_08897EF4;
    }
L_08897EF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08897F50;
      }
      goto L_08897F10;
    }
L_08897F10:
    ctx.gpr[31] = (0x08897F18u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 811u, 0x08AFB7E0u>(ctx, &aot_mem) && ctx.pc == 0x08897F18u) goto L_08897F18;
    return;
L_08897F18:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08897F40;
      }
      goto L_08897F24;
    }
L_08897F24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 8u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
        goto L_08897F60;
    }
    goto L_08897F38;
L_08897F38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08897F6C;
      }
      goto L_08897F40;
    }
L_08897F40:
    ctx.gpr[31] = (0x08897F48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 471u, 0x088868D0u>(ctx, &aot_mem) && ctx.pc == 0x08897F48u) goto L_08897F48;
    return;
L_08897F48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 88u, 0x088984A8u>(ctx, &aot_mem); return;
      }
      goto L_08897F50;
    }
L_08897F50:
    ctx.gpr[31] = (0x08897F58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 471u, 0x088868D0u>(ctx, &aot_mem) && ctx.pc == 0x08897F58u) goto L_08897F58;
    return;
L_08897F58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 88u, 0x088984A8u>(ctx, &aot_mem); return;
      }
      goto L_08897F60;
    }
L_08897F60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08897F88;
      }
      goto L_08897F6C;
    }
L_08897F6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 9u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1392)));
        goto L_08897FAC;
    }
    goto L_08897F80;
L_08897F80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
      if (branch_taken) {
          goto L_08897FB8;
      }
      goto L_08897F88;
    }
L_08897F88:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08897F98u);
    ctx.gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x08897F98u) goto L_08897F98;
    return;
L_08897F98:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08897FA4u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x08897FA4u) goto L_08897FA4;
    return;
L_08897FA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 88u, 0x088984A8u>(ctx, &aot_mem); return;
      }
      goto L_08897FAC;
    }
L_08897FAC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 7u, 0x08898050u>(ctx, &aot_mem); return;
      }
      goto L_08897FB4;
    }
L_08897FB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    goto L_08897FB8;
L_08897FB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08897FD8;
      }
      goto L_08897FC8;
    }
L_08897FC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 7u, 0x08898050u>(ctx, &aot_mem); return;
      }
      goto L_08897FD8;
    }
L_08897FD8:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1264));
    ctx.gpr[31] = (0x08897FE4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08897FE4u) goto L_08897FE4;
    return;
L_08897FE4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08897FF0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08897FF0u) goto L_08897FF0;
    return;
L_08897FF0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08898000u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 112u, 0x0888487Cu>(ctx, &aot_mem);
    return;
}

void recomp_unit_0036(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0036_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_36(Runtime &runtime) {
    runtime.register_generated_unit(36u, 0x08894000u, 16384u, &recomp_unit_0036, &recomp_unit_0036_entry);
    runtime.register_function(0x08894000u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894008u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894018u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889402Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889403Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889405Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894070u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088940A0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088940ACu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088940E4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088940F8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894110u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889411Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889412Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894138u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894140u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889416Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894174u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894180u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088941ACu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088941B4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088941CCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889422Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894240u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889425Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889426Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894274u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088942A8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088942B0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088942B8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088942C0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889430Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894328u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894344u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889434Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889435Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894364u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889436Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894374u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889437Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889438Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894394u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088943A0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088943A8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088943C0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088943CCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088943E4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088943F4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088943FCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894408u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894414u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894424u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894430u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889443Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894448u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889444Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894454u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894458u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894464u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894474u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894480u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894488u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894494u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088944A0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088944B8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088944C0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088944D0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088944D8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088944E8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088944F0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088944FCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894508u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894520u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894544u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889454Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894560u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894574u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894580u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894598u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088945BCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088945C0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088945C8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088945D0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088945DCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894600u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894620u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894628u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894638u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894640u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894648u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894650u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894660u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894670u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894680u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894688u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894694u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889469Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088946A4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088946C0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088946C8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088946D4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088946DCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088946ECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088946F8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894730u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894738u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894748u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894750u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889475Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894768u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894770u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894778u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889477Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894784u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894798u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889479Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088947A4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088947B8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088947C0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088947D0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088947D8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088947E4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088947F8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894800u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894810u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894818u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894820u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894830u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894838u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894840u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894848u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894854u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894898u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088948DCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894920u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894964u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889497Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889498Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088949CCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088949E8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088949F8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894A28u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894A64u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894A6Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894A74u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894A84u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894A94u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894A9Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894AB4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894ABCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894ACCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894ADCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894B00u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894B10u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894B18u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894B20u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894B28u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894B34u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894B3Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894B48u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894B50u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894B68u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894B74u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894B80u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894B90u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894BA0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894BB0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894BFCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894C10u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894C18u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894C24u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894C34u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894C44u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894C54u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894C64u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894C6Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894C78u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894C90u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894CA0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894CB0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894CC0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894CC8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894CD4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894CE0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894CE8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894CF4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894D04u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894D14u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894D2Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894D34u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894D3Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894D44u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894D4Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894D54u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894D5Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894D60u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894D68u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894D74u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894D8Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894DB4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894DD8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894DE0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894DF0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894DFCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894E08u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894E14u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894E18u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894E20u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894E24u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894E30u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894E40u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894E48u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894E6Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894E74u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894E80u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894E8Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894E98u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894EA0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894EACu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894EB8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894ED0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894ED8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894EE0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894EE8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894EF0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894EF4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894EFCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894F0Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894F20u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894F28u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894F30u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894F38u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894F44u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894F54u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894F64u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894F7Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894F88u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894FA0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894FB0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894FC0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894FD4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894FE4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894FF8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895008u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895018u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895028u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889503Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889504Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889505Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895070u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889507Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895094u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088950ACu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088950C0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088950CCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088950E4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088950ECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895104u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895138u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889513Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895148u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895154u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895174u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889517Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895194u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088951A0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088951A8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088951B0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088951B8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088951C8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088951F8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895208u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895210u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895218u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895220u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895228u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895238u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895240u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895248u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895260u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895274u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895284u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889529Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088952A8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088952B8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088952C8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088952D8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088952F0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895300u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895318u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895328u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889533Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895344u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889534Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895360u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895374u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889537Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895384u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889538Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895394u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088953A0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088953ACu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088953B4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088953C4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088953D4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088953E4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088953F4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895400u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889540Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895428u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895460u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088954A4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088954B4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088954BCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088954C4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088954CCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088954D4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088954E0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088954F0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895500u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895508u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895510u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895518u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895524u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889552Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895538u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895540u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889554Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895554u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889555Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895564u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889556Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895570u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895578u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895584u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895590u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895598u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088955A0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088955A8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088955B0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088955B8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088955C4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088955D4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088955E4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088955ECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895624u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889562Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895638u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895648u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895654u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889565Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889566Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895674u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889568Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895694u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088956A4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088956B0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088956B8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088956C0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088956C8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088956D0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088956D4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088956DCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088956ECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088956F8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895700u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895710u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895720u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895730u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895740u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895754u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088957A0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088957B4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088957C0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088957C8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088957DCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088957E8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088957F0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895800u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895808u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895810u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895818u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895820u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895828u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895830u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895838u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895844u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889584Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895858u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889585Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895864u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889587Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895888u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895894u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088958A4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088958B4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088958C4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088958D8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088958E4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088958ECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895900u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889590Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895914u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895928u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895938u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895940u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895954u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889595Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889596Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895974u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895984u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889598Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889599Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088959A0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088959A4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088959B4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088959BCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088959CCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088959D8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088959E8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088959F8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895A00u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895A10u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895A20u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895A30u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895A38u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895A48u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895A74u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895A84u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895A8Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895A98u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895AACu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895ABCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895ACCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895AFCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895B14u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895B24u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895B54u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895B60u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895B68u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895B80u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895BBCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895BC4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895BD8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895BE4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895BECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895BF4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895BFCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895C04u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895C0Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895C40u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895C54u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895C64u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895C6Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895CA4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895CC0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895CC8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895CD4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895CE8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895D00u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895D08u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895D14u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895D2Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895D4Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895D58u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895D60u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895D6Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895D70u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895D78u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895D94u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895DA4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895DACu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895DD8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895DF4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895DFCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895E04u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895E0Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895E4Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895E58u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895E64u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895E6Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895E98u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895EACu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895EBCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895EC4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895ECCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895EE4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895EF0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895F3Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895F54u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895F78u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895F84u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895F8Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895F9Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895FACu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895FB8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895FBCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895FD8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895FE4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895FF0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896008u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896010u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896018u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896020u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896038u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896048u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896050u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896060u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896068u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889607Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896088u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088960A0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088960B0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088960B8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088960D0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088960DCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088960ECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896110u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896130u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889613Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896168u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896170u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896178u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896188u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896190u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088961A0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088961B0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088961B8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088961D0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088961DCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088961ECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088961F4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896204u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896210u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896248u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896254u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896260u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896268u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896270u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896280u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896288u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896290u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088962A0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088962A8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088962B0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088962B8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088962BCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088962C4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088962D8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088962DCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088962E4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088962F8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896304u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896318u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896320u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896330u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896338u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896340u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896350u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896358u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896360u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896370u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896384u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889639Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088963A4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088963BCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088963C4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088963D8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088963E0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088963ECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088963F4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896408u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896410u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896428u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896430u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896444u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889644Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889645Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896488u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896498u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088964ACu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088964CCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088964E0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896500u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896514u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896548u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896550u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896558u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896568u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896570u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896580u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896588u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896598u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088965A8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088965B0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088965C4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088965CCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088965D4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088965E8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088965F0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896600u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896608u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889661Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896624u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896634u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889663Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896648u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896650u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896660u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896668u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896678u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896694u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088966A0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088966ACu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088966B8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088966D4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088966E0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088966F8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896704u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896714u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896724u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889672Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889673Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889674Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896754u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896764u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889676Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896778u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896780u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896788u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896798u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088967A8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088967B8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088967C4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088967D4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088967DCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088967E4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088967F4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088967FCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896810u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896820u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889682Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889683Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896854u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889685Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889686Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889687Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896890u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088968A4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088968B0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088968BCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088968C8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088968D8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088968E8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088968F0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896904u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896910u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889691Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889692Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896934u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896948u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896960u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889696Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896984u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896990u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889699Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088969ACu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088969B4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088969D0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088969DCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088969E4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088969F4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088969FCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896A08u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896A10u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896A18u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896A28u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896A30u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896A3Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896A44u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896A50u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896A60u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896A6Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896A74u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896A84u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896A90u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896A98u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896AB0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896AB8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896AC0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896ADCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896AECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896AFCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896B0Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896B14u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896B34u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896B3Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896B4Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896B5Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896B60u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896B70u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896B80u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896B8Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896B9Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896BA8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896C30u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896C3Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896C7Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896C88u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896C90u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896C98u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896CB0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896CC0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896CCCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896CDCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896CE8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896D20u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896D38u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896D54u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896D60u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896D70u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896D7Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896D84u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896D94u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896DA4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896DACu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896DB4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896DD0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896DDCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896DE0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896DFCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896E08u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896E14u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896E2Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896E34u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896E3Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896E44u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896E50u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896E5Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896E70u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896E98u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896EA4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896ECCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896F00u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896F0Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896F24u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896F30u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896F44u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896F4Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896F54u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896F60u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896F6Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896F78u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896F7Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896F84u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896F90u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896F9Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896FA8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896FACu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896FB4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896FDCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896FFCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889700Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897018u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897034u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897040u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889704Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897054u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897060u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889706Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897084u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889708Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088970A4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088970ACu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088970B4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088970C4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088970D4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088970E4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088970F0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897100u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897108u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897114u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897128u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889713Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897154u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889716Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897174u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897180u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889719Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088971A4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088971B8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088971C0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088971D4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088971D8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088971E4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088971F0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088971F8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897200u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897218u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897220u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889722Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897238u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897244u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897258u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897270u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897278u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088972B4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088972BCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088972CCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088972D4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088972E0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088972F4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897308u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897314u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897324u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897338u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897344u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889734Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897364u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897370u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897378u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897380u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897390u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897398u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088973A8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088973B4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088973C0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088973C8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088973D4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088973D8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088973E0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088973E8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088973F4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897410u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897420u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889742Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889743Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897444u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897450u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897460u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897478u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897480u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889748Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088974A4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088974ACu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088974BCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088974C4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088974CCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088974D8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088974E8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088974F8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897508u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897520u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889752Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897534u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897540u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897548u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897550u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897558u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897560u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897578u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897580u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088975A0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088975ACu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088975B4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088975C0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088975C8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088975D0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088975DCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088975E4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088975FCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897608u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897610u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889761Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897624u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897630u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897638u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897644u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897650u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897658u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897664u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889766Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897678u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897688u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897690u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889769Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088976A8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088976B8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088976C0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088976D8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088976E4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088976ECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088976F4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897700u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897710u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889771Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897728u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897730u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897740u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897758u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897764u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889776Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897778u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897788u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897794u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088977A8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088977B8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088977C0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088977D0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088977D8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088977E4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088977F0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088977F8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897804u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889780Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897818u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889782Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897838u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889784Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897858u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897864u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897878u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897880u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897898u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088978A4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088978B8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088978C4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088978CCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088978D8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088978ECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088978F8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897900u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889790Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897914u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897920u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897928u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897934u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889793Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897948u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897950u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889795Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897964u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889796Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897978u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889798Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889799Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088979A4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088979C0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088979C8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088979D4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088979DCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088979E4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088979F4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897A04u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897A2Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897A38u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897A48u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897A54u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897A60u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897A6Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897A78u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897A80u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897A8Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897A98u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897AA4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897AE8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897AFCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897B08u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897B14u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897B20u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897B2Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897B44u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897B54u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897B60u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897B6Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897B74u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897B80u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897B8Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897B98u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897BA0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897BB0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897BC0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897BD8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897BF0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897BFCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897C04u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897C0Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897C1Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897C24u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897C34u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897C50u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897C58u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897C70u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897C78u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897C8Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897C98u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897CA0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897CA8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897CBCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897CC4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897CCCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897CD4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897CE4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897CECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897CF8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897D08u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897D14u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897D4Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897D64u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897D78u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897D84u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897D94u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897DA0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897DB0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897DBCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897DC4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897DD4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897DE4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897DF0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897DF4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897E10u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897E18u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897E28u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897E30u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897E40u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897E48u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897E54u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897E64u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897E70u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897E78u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897E84u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897E8Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897E94u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897EA8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897EB0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897EB8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897EC0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897EC8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897ED4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897EDCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897EE4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897EF4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897F10u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897F18u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897F24u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897F38u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897F40u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897F48u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897F50u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897F58u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897F60u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897F6Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897F80u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897F88u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897F98u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897FA4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897FACu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897FB4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897FB8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897FC8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897FD8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897FE4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897FF0u, &recomp_unit_0036, "recomp_unit_0036");
}
} // namespace psprecomp
