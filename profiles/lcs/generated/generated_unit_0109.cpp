#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0109[4094] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 6, 0, 7, 0, 0, 8,
    0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 12, 0, 13, 0, 14, 0, 0, 0, 15, 0, 16, 0, 0,
    0, 0, 0, 17, 0, 0, 18, 0, 0, 19, 0, 0, 20, 0, 0, 21, 22, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 26,
    0, 0, 0, 27, 0, 0, 0, 28, 29, 0, 30, 0, 31, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 34, 35, 0, 0, 36, 0, 0, 37, 0,
    0, 38, 0, 0, 0, 39, 0, 40, 0, 0, 41, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 44, 0, 45, 0, 0, 0, 46, 0, 0, 47, 0,
    48, 0, 0, 0, 49, 0, 0, 50, 0, 51, 0, 0, 0, 52, 0, 53, 0, 54, 0, 0, 0, 55, 0, 56, 0, 0, 0, 57, 0, 58, 0, 0,
    59, 0, 0, 60, 0, 0, 61, 0, 0, 62, 0, 0, 63, 64, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0,
    0, 69, 70, 0, 71, 0, 72, 0, 0, 0, 73, 0, 74, 75, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 79, 0, 80, 0,
    0, 0, 81, 0, 0, 0, 82, 0, 83, 0, 0, 0, 84, 0, 85, 0, 86, 0, 87, 0, 88, 0, 0, 89, 0, 90, 91, 0, 92, 0, 0, 93,
    0, 94, 95, 0, 96, 0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0,
    102, 0, 103, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 108, 0, 109, 0, 110, 0, 111, 0, 0,
    0, 112, 0, 113, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 121, 0, 122, 0, 123, 124, 0, 125, 0, 0, 0, 126, 0, 0,
    127, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134,
    0, 135, 0, 0, 0, 136, 0, 137, 0, 0, 138, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143,
    0, 0, 144, 0, 0, 145, 0, 0, 146, 0, 147, 0, 148, 0, 0, 149, 0, 150, 0, 151, 0, 152, 0, 0, 153, 0, 0, 154, 0, 0, 155, 0,
    156, 0, 157, 0, 0, 0, 0, 158, 0, 159, 0, 0, 160, 0, 161, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 164, 0, 165, 0, 166, 0, 0,
    167, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 173, 0, 174, 0, 0, 175, 0,
    0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 180, 0, 0, 181, 0, 182, 0, 0, 183, 0,
    184, 0, 185, 0, 0, 0, 0, 186, 0, 187, 0, 0, 0, 0, 188, 0, 189, 0, 190, 0, 0, 0, 0, 0, 191, 0, 192, 0, 0, 0, 0, 193,
    0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202,
    0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0,
    207, 0, 0, 0, 208, 0, 209, 210, 0, 211, 212, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 220, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 228,
    0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 231,
    232, 0, 0, 0, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 238, 0, 0, 239, 0, 0, 240, 241, 0, 242, 0, 0,
    243, 244, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 247, 0, 248, 0, 0, 249, 0, 0, 250, 0, 0, 251, 252, 0, 253, 0, 0, 254, 255, 0,
    256, 0, 0, 257, 258, 0, 259, 0, 0, 260, 261, 0, 262, 0, 0, 263, 264, 0, 265, 0, 0, 266, 267, 0, 268, 0, 0, 269, 270, 0, 271, 0,
    0, 272, 273, 0, 274, 0, 0, 275, 276, 0, 277, 0, 0, 278, 279, 0, 280, 0, 0, 281, 282, 0, 283, 0, 0, 284, 285, 0, 286, 0, 0, 287,
    288, 0, 289, 0, 290, 291, 0, 292, 0, 0, 293, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0,
    296, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 303,
    0, 0, 304, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 0, 310, 0,
    311, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 317, 0, 318, 0,
    319, 0, 0, 0, 320, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 328, 0, 329, 330, 0,
    0, 0, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 333, 0, 0, 334, 0, 335, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 337, 0, 0, 0, 338, 0, 339, 0, 340, 341, 0, 0, 0, 0, 0, 342, 0, 0, 343, 0, 0, 344, 0, 345, 0, 0, 0, 0, 0,
    0, 346, 0, 0, 0, 347, 0, 348, 0, 349, 0, 350, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 352, 0, 353, 0, 354, 355, 0, 0, 356, 0,
    0, 0, 357, 0, 0, 358, 0, 359, 360, 0, 0, 361, 0, 0, 362, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 366, 0, 367, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 371, 0, 372, 0, 0, 0, 0, 373, 0, 374, 0, 375, 0, 0, 0, 0, 376, 0, 377, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 378, 0, 379, 0, 380, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 382, 0, 0, 383, 0, 0, 0, 384, 0,
    0, 385, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 390, 0, 391, 0, 0, 0, 0, 0, 392, 0, 393, 394, 0, 395, 0, 396, 0, 0, 0, 0, 0, 0, 0, 397, 0,
    0, 0, 0, 398, 0, 0, 399, 0, 0, 0, 400, 0, 0, 401, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0,
    0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 407, 0, 0, 0, 0, 0, 408, 0, 409, 410, 0,
    411, 0, 412, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 415, 0, 0, 0, 416, 0, 0, 417, 0, 0, 0, 0, 0, 0,
    418, 0, 0, 0, 419, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422,
    0, 423, 0, 0, 0, 0, 0, 424, 0, 425, 426, 0, 427, 0, 428, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 430, 0, 0, 431, 0,
    0, 0, 432, 0, 0, 433, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 435, 0, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 439, 0, 0, 0, 0, 0, 440, 0, 441, 0, 0, 0, 442, 0, 0, 0, 443, 0, 444, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 447, 0, 0, 0, 0, 448, 0, 0, 0, 449,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 453, 0, 454, 0, 455, 0, 456, 0, 0,
    0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0,
    460, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 463, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0,
    0, 0, 0, 0, 0, 0, 466, 0, 467, 0, 0, 0, 0, 0, 468, 0, 0, 469, 0, 470, 0, 0, 0, 0, 0, 471, 0, 0, 472, 0, 0, 473,
    0, 0, 474, 0, 0, 475, 0, 0, 476, 0, 477, 0, 0, 0, 478, 0, 479, 0, 0, 480, 0, 0, 481, 0, 0, 482, 0, 0, 483, 0, 0, 484,
    0, 485, 0, 0, 0, 486, 0, 487, 0, 0, 488, 0, 489, 0, 490, 0, 491, 0, 492, 0, 0, 493, 0, 0, 494, 0, 0, 0, 495, 0, 0, 496,
    0, 0, 497, 0, 0, 498, 0, 0, 0, 499, 0, 0, 500, 0, 0, 501, 0, 0, 502, 0, 0, 503, 0, 0, 504, 0, 505, 0, 0, 0, 506, 0,
    507, 0, 0, 0, 508, 0, 509, 0, 0, 0, 510, 0, 511, 0, 0, 512, 0, 513, 0, 514, 0, 515, 0, 0, 516, 0, 0, 517, 0, 0, 518, 0,
    519, 0, 0, 520, 0, 0, 521, 0, 0, 522, 0, 523, 0, 0, 524, 0, 0, 525, 0, 0, 526, 0, 527, 0, 0, 528, 0, 0, 529, 0, 0, 530,
    0, 531, 0, 0, 532, 0, 0, 533, 0, 0, 0, 0, 534, 0, 535, 0, 536, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 539, 0, 0, 0, 540, 0, 541, 0, 542, 0, 543, 0, 544, 0, 545, 0, 546, 0, 0, 547, 0, 0,
    548, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 550, 0, 551, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 552, 0, 553, 0, 0, 0,
    0, 0, 554, 0, 555, 0, 556, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0,
    0, 559, 0, 560, 0, 561, 0, 562, 0, 563, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 566, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 569, 0, 0, 0, 570, 0, 0, 0,
    571, 0, 572, 0, 573, 0, 0, 574, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 577, 0, 578, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 580, 0, 581, 0, 0, 0, 582, 0, 0, 0, 0, 0, 583, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 585, 0, 0, 586, 0, 0, 0, 587, 0, 588, 0, 589, 0, 0, 590, 0, 591, 0,
    0, 592, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 594, 0, 595, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    596, 0, 0, 0, 0, 0, 0, 0, 597, 0, 598, 599, 0, 600, 0, 0, 0, 0, 0, 0, 0, 601, 0, 602, 603, 0, 0, 604, 0, 0, 0, 605,
    0, 606, 0, 0, 0, 0, 607, 0, 0, 0, 0, 608, 0, 609, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0, 0, 0, 0,
    0, 611, 0, 612, 613, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 616, 617, 0, 618, 0, 0, 0, 619, 0, 620, 0, 0, 0, 621, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0, 623, 0, 0, 624, 0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 626, 0, 627, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 631,
    0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0, 634, 0, 0, 635, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0,
    0, 637, 0, 0, 0, 0, 0, 0, 0, 0, 638, 0, 0, 639, 0, 0, 0, 0, 640, 0, 0, 641, 0, 0, 0, 642, 643, 0, 644, 0, 0, 0,
    0, 0, 645, 0, 0, 0, 0, 0, 646, 0, 0, 647, 0, 0, 0, 648, 0, 0, 0, 649, 0, 650, 0, 0, 0, 0, 0, 0, 0, 651, 0, 0,
    0, 0, 0, 652, 0, 0, 0, 0, 0, 0, 653, 0, 0, 0, 0, 0, 0, 0, 0, 0, 654, 0, 0, 655, 0, 0, 0, 0, 656, 0, 0, 657,
    0, 0, 0, 658, 0, 659, 0, 660, 0, 0, 0, 0, 0, 661, 0, 662, 0, 0, 0, 0, 663, 0, 664, 0, 0, 0, 0, 0, 665, 0, 0, 0,
    0, 0, 0, 666, 0, 0, 0, 0, 0, 0, 0, 667, 0, 0, 668, 0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 670, 0, 671, 0, 0, 0, 672,
    0, 0, 0, 0, 0, 0, 673, 0, 674, 0, 0, 675, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 676, 0, 0, 0, 0, 0, 0, 677,
    0, 0, 0, 0, 0, 678, 0, 0, 0, 0, 679, 0, 680, 0, 0, 0, 0, 0, 681, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 682,
    0, 0, 0, 0, 0, 683, 0, 0, 0, 0, 0, 0, 684, 0, 0, 685, 0, 0, 0, 0, 0, 0, 686, 0, 0, 687, 0, 0, 0, 0, 0, 0,
    0, 688, 0, 0, 689, 0, 0, 0, 0, 0, 0, 690, 0, 0, 691, 0, 0, 0, 0, 0, 0, 692, 0, 0, 693, 0, 0, 0, 694, 0, 0, 0,
    0, 695, 0, 0, 0, 696, 0, 0, 0, 0, 697, 0, 0, 0, 698, 0, 0, 0, 0, 699, 0, 0, 0, 700, 0, 0, 0, 0, 701, 0, 0, 0,
    702, 0, 0, 0, 0, 703, 0, 0, 0, 704, 0, 0, 0, 0, 705, 0, 0, 0, 706, 0, 0, 0, 0, 707, 0, 0, 0, 708, 0, 0, 0, 0,
    709, 0, 0, 0, 710, 0, 0, 0, 0, 711, 0, 0, 0, 712, 0, 0, 0, 0, 713, 0, 0, 0, 714, 0, 0, 0, 0, 715, 0, 0, 0, 716,
    0, 0, 0, 0, 717, 0, 0, 0, 718, 0, 0, 0, 0, 719, 0, 0, 0, 720, 0, 0, 0, 0, 721, 0, 0, 0, 722, 0, 0, 0, 0, 723,
    0, 0, 0, 724, 0, 0, 0, 0, 725, 0, 0, 0, 726, 0, 0, 0, 0, 727, 0, 0, 0, 728, 0, 0, 0, 0, 729, 0, 0, 0, 730, 0,
    0, 0, 0, 731, 0, 0, 0, 732, 0, 0, 0, 0, 733, 0, 0, 0, 734, 0, 0, 0, 0, 735, 0, 0, 0, 736, 0, 0, 0, 0, 737, 0,
    0, 0, 738, 0, 0, 0, 0, 739, 0, 0, 0, 740, 0, 0, 0, 0, 741, 0, 0, 0, 742, 0, 0, 0, 0, 743, 0, 0, 0, 744, 0, 0,
    0, 0, 745, 0, 0, 0, 746, 0, 0, 0, 0, 747, 0, 0, 0, 748, 0, 0, 0, 0, 749, 0, 0, 0, 750, 0, 0, 0, 0, 751, 0, 0,
    0, 752, 0, 0, 0, 0, 753, 0, 0, 0, 754, 0, 0, 0, 0, 755, 0, 0, 0, 756, 0, 0, 0, 0, 757, 0, 0, 0, 758, 0, 0, 0,
    0, 759, 0, 0, 0, 760, 0, 0, 0, 0, 761, 0, 0, 0, 762, 0, 0, 0, 0, 763, 0, 0, 0, 764, 0, 0, 0, 0, 765, 0, 0, 0,
    766, 0, 0, 0, 0, 767, 0, 0, 0, 768, 0, 0, 0, 0, 769, 0, 770, 0, 771, 0, 772, 0, 773, 0, 774, 0, 0, 775, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 776, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 777, 0, 0, 0, 778, 0, 0, 0, 0,
    779, 0, 0, 0, 0, 0, 780, 0, 781, 0, 782, 0, 783, 0, 0, 0, 0, 0, 784, 0, 785, 0, 786, 0, 787, 0, 0, 788, 0, 789, 0, 0,
    0, 0, 0, 790, 0, 791, 0, 0, 0, 792, 0, 0, 793, 0, 0, 0, 0, 794, 0, 795, 0, 796, 0, 0, 797, 0, 0, 798, 0, 0, 0, 0,
    0, 799, 0, 800, 0, 0, 0, 0, 0, 801, 0, 802, 0, 0, 803, 0, 0, 804, 0, 0, 0, 0, 0, 805, 0, 806, 0, 807, 0, 808, 0, 809,
    0, 810, 0, 0, 0, 0, 0, 811, 0, 812, 0, 0, 813, 0, 814, 0, 0, 0, 0, 0, 815, 0, 0, 0, 0, 0, 816, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 817, 0, 818, 0, 0, 0, 0, 0, 819, 0, 820, 0, 821, 0, 0, 0, 0, 822, 0, 0, 823, 0, 824, 0, 0, 0, 0, 0,
    825, 0, 826, 0, 0, 0, 0, 0, 0, 0, 0, 827, 0, 828, 0, 0, 0, 0, 829, 0, 0, 830, 0, 831, 0, 0, 0, 0, 0, 832, 0, 0,
    833, 0, 834, 0, 0, 0, 0, 0, 835, 0, 0, 0, 0, 836, 0, 0, 0, 837, 0, 838, 0, 839, 0, 0, 0, 0, 0, 840, 0, 841, 0, 0,
    842, 0, 0, 843, 0, 0, 0, 0, 0, 844, 0, 845, 0, 0, 0, 0, 0, 846, 0, 0, 847, 0, 0, 848, 0, 0, 849, 850, 0, 851, 0, 0,
    852, 853, 0, 854, 0, 0, 855, 856, 0, 857, 0, 0, 0, 0, 0, 858, 0, 0, 0, 0, 0, 0, 0, 0, 859, 0, 860, 0, 0, 0, 0, 0,
    861, 0, 0, 862, 0, 863, 0, 0, 0, 0, 864, 0, 865, 0, 0, 0, 0, 0, 866, 0, 0, 867, 0, 0, 868, 0, 0, 869, 0, 870, 0, 871,
    0, 872, 0, 873, 0, 874, 0, 875, 0, 876, 0, 877, 878, 0, 0, 0, 0, 0, 879, 0, 880, 0, 0, 0, 881, 0, 882, 0, 0, 0, 0, 0,
    883, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 884, 0, 885, 0, 0, 886, 887, 0, 888, 889, 0, 0, 890, 0, 0, 891,
    0, 0, 0, 0, 0, 0, 892, 0, 0, 0, 893, 894, 0, 0, 895, 0, 0, 0, 896, 0, 0, 0, 0, 0, 897, 0, 898, 0, 899, 0, 0, 0,
    900, 0, 0, 0, 0, 0, 0, 901, 0, 0, 0, 902, 0, 0, 0, 903, 0, 0, 0, 904, 0, 0, 0, 905, 0, 0, 906, 0, 0, 0, 907, 0,
    908, 0, 0, 0, 0, 0, 0, 0, 0, 909, 0, 0, 0, 910, 0, 0, 911, 0, 0, 0, 912, 0, 0, 0, 0, 913, 0, 0, 914, 0, 0, 915,
    0, 916, 0, 0, 0, 0, 0, 0, 917, 0, 918, 0, 0, 0, 919, 0, 0, 920, 0, 921, 0, 0, 0, 0, 922, 0, 0, 0, 923, 0, 0, 924,
    0, 0, 0, 925, 0, 0, 0, 0, 926, 0, 0, 927, 0, 0, 928, 0, 0, 0, 929, 0, 930, 0, 0, 931, 0, 932, 0, 0, 933, 0, 934, 0,
    0, 0, 0, 0, 935, 0, 0, 0, 0, 0, 0, 0, 0, 936, 0, 0, 937, 0, 0, 938, 0, 0, 0, 0, 0, 939, 0, 940, 0, 0, 941, 0,
    942, 0, 943, 0, 0, 0, 944, 0, 945, 0, 946, 947, 0, 948, 0, 949, 0, 950, 951, 0, 952, 0, 953, 0, 954, 955, 0, 0, 0, 0, 956, 0,
    0, 957, 0, 0, 958, 0, 0, 0, 0, 0, 959, 0, 0, 960, 0, 0, 961, 0, 962, 0, 0, 0, 963, 0, 0, 964, 0, 965, 0, 966, 0, 0,
    0, 967, 0, 0, 968, 0, 0, 0, 969, 0, 0, 0, 970, 0, 0, 971, 0, 0, 972, 0, 0, 0, 973, 0, 974, 0, 975, 0, 0, 976,
};
void recomp_unit_0109_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089B8004u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0109[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089B8004;
    case 2u: goto L_089B8024;
    case 3u: goto L_089B8034;
    case 4u: goto L_089B8054;
    case 5u: goto L_089B8064;
    case 6u: goto L_089B806C;
    case 7u: goto L_089B8074;
    case 8u: goto L_089B8080;
    case 9u: goto L_089B8090;
    case 10u: goto L_089B80B8;
    case 11u: goto L_089B80C4;
    case 12u: goto L_089B80D0;
    case 13u: goto L_089B80D8;
    case 14u: goto L_089B80E0;
    case 15u: goto L_089B80F0;
    case 16u: goto L_089B80F8;
    case 17u: goto L_089B8110;
    case 18u: goto L_089B811C;
    case 19u: goto L_089B8128;
    case 20u: goto L_089B8134;
    case 21u: goto L_089B8140;
    case 22u: goto L_089B8144;
    case 23u: goto L_089B814C;
    case 24u: goto L_089B8160;
    case 25u: goto L_089B8170;
    case 26u: goto L_089B8180;
    case 27u: goto L_089B8190;
    case 28u: goto L_089B81A0;
    case 29u: goto L_089B81A4;
    case 30u: goto L_089B81AC;
    case 31u: goto L_089B81B4;
    case 32u: goto L_089B81C8;
    case 33u: goto L_089B81D4;
    case 34u: goto L_089B81E0;
    case 35u: goto L_089B81E4;
    case 36u: goto L_089B81F0;
    case 37u: goto L_089B81FC;
    case 38u: goto L_089B8208;
    case 39u: goto L_089B8218;
    case 40u: goto L_089B8220;
    case 41u: goto L_089B822C;
    case 42u: goto L_089B8238;
    case 43u: goto L_089B8248;
    case 44u: goto L_089B8258;
    case 45u: goto L_089B8260;
    case 46u: goto L_089B8270;
    case 47u: goto L_089B827C;
    case 48u: goto L_089B8284;
    case 49u: goto L_089B8294;
    case 50u: goto L_089B82A0;
    case 51u: goto L_089B82A8;
    case 52u: goto L_089B82B8;
    case 53u: goto L_089B82C0;
    case 54u: goto L_089B82C8;
    case 55u: goto L_089B82D8;
    case 56u: goto L_089B82E0;
    case 57u: goto L_089B82F0;
    case 58u: goto L_089B82F8;
    case 59u: goto L_089B8304;
    case 60u: goto L_089B8310;
    case 61u: goto L_089B831C;
    case 62u: goto L_089B8328;
    case 63u: goto L_089B8334;
    case 64u: goto L_089B8338;
    case 65u: goto L_089B8340;
    case 66u: goto L_089B8358;
    case 67u: goto L_089B8368;
    case 68u: goto L_089B8378;
    case 69u: goto L_089B8388;
    case 70u: goto L_089B838C;
    case 71u: goto L_089B8394;
    case 72u: goto L_089B839C;
    case 73u: goto L_089B83AC;
    case 74u: goto L_089B83B4;
    case 75u: goto L_089B83B8;
    case 76u: goto L_089B83C8;
    case 77u: goto L_089B83D8;
    case 78u: goto L_089B83E4;
    case 79u: goto L_089B83F4;
    case 80u: goto L_089B83FC;
    case 81u: goto L_089B840C;
    case 82u: goto L_089B841C;
    case 83u: goto L_089B8424;
    case 84u: goto L_089B8434;
    case 85u: goto L_089B843C;
    case 86u: goto L_089B8444;
    case 87u: goto L_089B844C;
    case 88u: goto L_089B8454;
    case 89u: goto L_089B8460;
    case 90u: goto L_089B8468;
    case 91u: goto L_089B846C;
    case 92u: goto L_089B8474;
    case 93u: goto L_089B8480;
    case 94u: goto L_089B8488;
    case 95u: goto L_089B848C;
    case 96u: goto L_089B8494;
    case 97u: goto L_089B849C;
    case 98u: goto L_089B84BC;
    case 99u: goto L_089B84C8;
    case 100u: goto L_089B84D8;
    case 101u: goto L_089B84EC;
    case 102u: goto L_089B8504;
    case 103u: goto L_089B850C;
    case 104u: goto L_089B8518;
    case 105u: goto L_089B8534;
    case 106u: goto L_089B8544;
    case 107u: goto L_089B8558;
    case 108u: goto L_089B8560;
    case 109u: goto L_089B8568;
    case 110u: goto L_089B8570;
    case 111u: goto L_089B8578;
    case 112u: goto L_089B8588;
    case 113u: goto L_089B8590;
    case 114u: goto L_089B85A0;
    case 115u: goto L_089B85AC;
    case 116u: goto L_089B85C4;
    case 117u: goto L_089B85D0;
    case 118u: goto L_089B85DC;
    case 119u: goto L_089B860C;
    case 120u: goto L_089B8640;
    case 121u: goto L_089B864C;
    case 122u: goto L_089B8654;
    case 123u: goto L_089B865C;
    case 124u: goto L_089B8660;
    case 125u: goto L_089B8668;
    case 126u: goto L_089B8678;
    case 127u: goto L_089B8684;
    case 128u: goto L_089B869C;
    case 129u: goto L_089B86A8;
    case 130u: goto L_089B86B4;
    case 131u: goto L_089B86C8;
    case 132u: goto L_089B86D4;
    case 133u: goto L_089B86E4;
    case 134u: goto L_089B8700;
    case 135u: goto L_089B8708;
    case 136u: goto L_089B8718;
    case 137u: goto L_089B8720;
    case 138u: goto L_089B872C;
    case 139u: goto L_089B8734;
    case 140u: goto L_089B8748;
    case 141u: goto L_089B8758;
    case 142u: goto L_089B8768;
    case 143u: goto L_089B8780;
    case 144u: goto L_089B878C;
    case 145u: goto L_089B8798;
    case 146u: goto L_089B87A4;
    case 147u: goto L_089B87AC;
    case 148u: goto L_089B87B4;
    case 149u: goto L_089B87C0;
    case 150u: goto L_089B87C8;
    case 151u: goto L_089B87D0;
    case 152u: goto L_089B87D8;
    case 153u: goto L_089B87E4;
    case 154u: goto L_089B87F0;
    case 155u: goto L_089B87FC;
    case 156u: goto L_089B8804;
    case 157u: goto L_089B880C;
    case 158u: goto L_089B8820;
    case 159u: goto L_089B8828;
    case 160u: goto L_089B8834;
    case 161u: goto L_089B883C;
    case 162u: goto L_089B8850;
    case 163u: goto L_089B8858;
    case 164u: goto L_089B8868;
    case 165u: goto L_089B8870;
    case 166u: goto L_089B8878;
    case 167u: goto L_089B8884;
    case 168u: goto L_089B888C;
    case 169u: goto L_089B88A0;
    case 170u: goto L_089B88B0;
    case 171u: goto L_089B88C8;
    case 172u: goto L_089B88DC;
    case 173u: goto L_089B88E8;
    case 174u: goto L_089B88F0;
    case 175u: goto L_089B88FC;
    case 176u: goto L_089B890C;
    case 177u: goto L_089B8920;
    case 178u: goto L_089B8948;
    case 179u: goto L_089B8954;
    case 180u: goto L_089B895C;
    case 181u: goto L_089B8968;
    case 182u: goto L_089B8970;
    case 183u: goto L_089B897C;
    case 184u: goto L_089B8984;
    case 185u: goto L_089B898C;
    case 186u: goto L_089B89A0;
    case 187u: goto L_089B89A8;
    case 188u: goto L_089B89BC;
    case 189u: goto L_089B89C4;
    case 190u: goto L_089B89CC;
    case 191u: goto L_089B89E4;
    case 192u: goto L_089B89EC;
    case 193u: goto L_089B8A00;
    case 194u: goto L_089B8A20;
    case 195u: goto L_089B8A98;
    case 196u: goto L_089B8AA8;
    case 197u: goto L_089B8AB4;
    case 198u: goto L_089B8AE8;
    case 199u: goto L_089B8B44;
    case 200u: goto L_089B8B4C;
    case 201u: goto L_089B8B68;
    case 202u: goto L_089B8B80;
    case 203u: goto L_089B8B90;
    case 204u: goto L_089B8BB0;
    case 205u: goto L_089B8BCC;
    case 206u: goto L_089B8BE0;
    case 207u: goto L_089B8C04;
    case 208u: goto L_089B8C14;
    case 209u: goto L_089B8C1C;
    case 210u: goto L_089B8C20;
    case 211u: goto L_089B8C28;
    case 212u: goto L_089B8C2C;
    case 213u: goto L_089B8C38;
    case 214u: goto L_089B8C50;
    case 215u: goto L_089B8C5C;
    case 216u: goto L_089B8CE0;
    case 217u: goto L_089B8D48;
    case 218u: goto L_089B8D68;
    case 219u: goto L_089B8DE0;
    case 220u: goto L_089B8E18;
    case 221u: goto L_089B8E20;
    case 222u: goto L_089B8E70;
    case 223u: goto L_089B8EA0;
    case 224u: goto L_089B8EAC;
    case 225u: goto L_089B8EC4;
    case 226u: goto L_089B8EDC;
    case 227u: goto L_089B8EEC;
    case 228u: goto L_089B8F00;
    case 229u: goto L_089B8F0C;
    case 230u: goto L_089B8F74;
    case 231u: goto L_089B8F80;
    case 232u: goto L_089B8F84;
    case 233u: goto L_089B8F9C;
    case 234u: goto L_089B8FA8;
    case 235u: goto L_089B8FF0;
    case 236u: goto L_089B9038;
    case 237u: goto L_089B9048;
    case 238u: goto L_089B9054;
    case 239u: goto L_089B9060;
    case 240u: goto L_089B906C;
    case 241u: goto L_089B9070;
    case 242u: goto L_089B9078;
    case 243u: goto L_089B9084;
    case 244u: goto L_089B9088;
    case 245u: goto L_089B9090;
    case 246u: goto L_089B90A8;
    case 247u: goto L_089B90B4;
    case 248u: goto L_089B90BC;
    case 249u: goto L_089B90C8;
    case 250u: goto L_089B90D4;
    case 251u: goto L_089B90E0;
    case 252u: goto L_089B90E4;
    case 253u: goto L_089B90EC;
    case 254u: goto L_089B90F8;
    case 255u: goto L_089B90FC;
    case 256u: goto L_089B9104;
    case 257u: goto L_089B9110;
    case 258u: goto L_089B9114;
    case 259u: goto L_089B911C;
    case 260u: goto L_089B9128;
    case 261u: goto L_089B912C;
    case 262u: goto L_089B9134;
    case 263u: goto L_089B9140;
    case 264u: goto L_089B9144;
    case 265u: goto L_089B914C;
    case 266u: goto L_089B9158;
    case 267u: goto L_089B915C;
    case 268u: goto L_089B9164;
    case 269u: goto L_089B9170;
    case 270u: goto L_089B9174;
    case 271u: goto L_089B917C;
    case 272u: goto L_089B9188;
    case 273u: goto L_089B918C;
    case 274u: goto L_089B9194;
    case 275u: goto L_089B91A0;
    case 276u: goto L_089B91A4;
    case 277u: goto L_089B91AC;
    case 278u: goto L_089B91B8;
    case 279u: goto L_089B91BC;
    case 280u: goto L_089B91C4;
    case 281u: goto L_089B91D0;
    case 282u: goto L_089B91D4;
    case 283u: goto L_089B91DC;
    case 284u: goto L_089B91E8;
    case 285u: goto L_089B91EC;
    case 286u: goto L_089B91F4;
    case 287u: goto L_089B9200;
    case 288u: goto L_089B9204;
    case 289u: goto L_089B920C;
    case 290u: goto L_089B9214;
    case 291u: goto L_089B9218;
    case 292u: goto L_089B9220;
    case 293u: goto L_089B922C;
    case 294u: goto L_089B9244;
    case 295u: goto L_089B9270;
    case 296u: goto L_089B9284;
    case 297u: goto L_089B9290;
    case 298u: goto L_089B92B4;
    case 299u: goto L_089B92C4;
    case 300u: goto L_089B92CC;
    case 301u: goto L_089B92E0;
    case 302u: goto L_089B92F0;
    case 303u: goto L_089B9300;
    case 304u: goto L_089B930C;
    case 305u: goto L_089B9320;
    case 306u: goto L_089B9338;
    case 307u: goto L_089B9348;
    case 308u: goto L_089B9358;
    case 309u: goto L_089B936C;
    case 310u: goto L_089B937C;
    case 311u: goto L_089B9384;
    case 312u: goto L_089B9394;
    case 313u: goto L_089B93A4;
    case 314u: goto L_089B93C0;
    case 315u: goto L_089B93D0;
    case 316u: goto L_089B93E4;
    case 317u: goto L_089B93F4;
    case 318u: goto L_089B93FC;
    case 319u: goto L_089B9404;
    case 320u: goto L_089B9414;
    case 321u: goto L_089B941C;
    case 322u: goto L_089B942C;
    case 323u: goto L_089B948C;
    case 324u: goto L_089B94A0;
    case 325u: goto L_089B94B0;
    case 326u: goto L_089B94D8;
    case 327u: goto L_089B94E8;
    case 328u: goto L_089B94F0;
    case 329u: goto L_089B94F8;
    case 330u: goto L_089B94FC;
    case 331u: goto L_089B9514;
    case 332u: goto L_089B9528;
    case 333u: goto L_089B9544;
    case 334u: goto L_089B9550;
    case 335u: goto L_089B9558;
    case 336u: goto L_089B9568;
    case 337u: goto L_089B9590;
    case 338u: goto L_089B95A0;
    case 339u: goto L_089B95A8;
    case 340u: goto L_089B95B0;
    case 341u: goto L_089B95B4;
    case 342u: goto L_089B95CC;
    case 343u: goto L_089B95D8;
    case 344u: goto L_089B95E4;
    case 345u: goto L_089B95EC;
    case 346u: goto L_089B9608;
    case 347u: goto L_089B9618;
    case 348u: goto L_089B9620;
    case 349u: goto L_089B9628;
    case 350u: goto L_089B9630;
    case 351u: goto L_089B964C;
    case 352u: goto L_089B965C;
    case 353u: goto L_089B9664;
    case 354u: goto L_089B966C;
    case 355u: goto L_089B9670;
    case 356u: goto L_089B967C;
    case 357u: goto L_089B968C;
    case 358u: goto L_089B9698;
    case 359u: goto L_089B96A0;
    case 360u: goto L_089B96A4;
    case 361u: goto L_089B96B0;
    case 362u: goto L_089B96BC;
    case 363u: goto L_089B96C4;
    case 364u: goto L_089B96F4;
    case 365u: goto L_089B9748;
    case 366u: goto L_089B9760;
    case 367u: goto L_089B9768;
    case 368u: goto L_089B97CC;
    case 369u: goto L_089B9810;
    case 370u: goto L_089B9858;
    case 371u: goto L_089B989C;
    case 372u: goto L_089B98A4;
    case 373u: goto L_089B98B8;
    case 374u: goto L_089B98C0;
    case 375u: goto L_089B98C8;
    case 376u: goto L_089B98DC;
    case 377u: goto L_089B98E4;
    case 378u: goto L_089B991C;
    case 379u: goto L_089B9924;
    case 380u: goto L_089B992C;
    case 381u: goto L_089B994C;
    case 382u: goto L_089B9960;
    case 383u: goto L_089B996C;
    case 384u: goto L_089B997C;
    case 385u: goto L_089B9988;
    case 386u: goto L_089B99A4;
    case 387u: goto L_089B99B4;
    case 388u: goto L_089B99C8;
    case 389u: goto L_089B99E0;
    case 390u: goto L_089B9A20;
    case 391u: goto L_089B9A28;
    case 392u: goto L_089B9A40;
    case 393u: goto L_089B9A48;
    case 394u: goto L_089B9A4C;
    case 395u: goto L_089B9A54;
    case 396u: goto L_089B9A5C;
    case 397u: goto L_089B9A7C;
    case 398u: goto L_089B9A90;
    case 399u: goto L_089B9A9C;
    case 400u: goto L_089B9AAC;
    case 401u: goto L_089B9AB8;
    case 402u: goto L_089B9AD4;
    case 403u: goto L_089B9AE4;
    case 404u: goto L_089B9AF8;
    case 405u: goto L_089B9B10;
    case 406u: goto L_089B9B50;
    case 407u: goto L_089B9B58;
    case 408u: goto L_089B9B70;
    case 409u: goto L_089B9B78;
    case 410u: goto L_089B9B7C;
    case 411u: goto L_089B9B84;
    case 412u: goto L_089B9B8C;
    case 413u: goto L_089B9BAC;
    case 414u: goto L_089B9BC0;
    case 415u: goto L_089B9BCC;
    case 416u: goto L_089B9BDC;
    case 417u: goto L_089B9BE8;
    case 418u: goto L_089B9C04;
    case 419u: goto L_089B9C14;
    case 420u: goto L_089B9C28;
    case 421u: goto L_089B9C40;
    case 422u: goto L_089B9C80;
    case 423u: goto L_089B9C88;
    case 424u: goto L_089B9CA0;
    case 425u: goto L_089B9CA8;
    case 426u: goto L_089B9CAC;
    case 427u: goto L_089B9CB4;
    case 428u: goto L_089B9CBC;
    case 429u: goto L_089B9CDC;
    case 430u: goto L_089B9CF0;
    case 431u: goto L_089B9CFC;
    case 432u: goto L_089B9D0C;
    case 433u: goto L_089B9D18;
    case 434u: goto L_089B9D34;
    case 435u: goto L_089B9D44;
    case 436u: goto L_089B9D58;
    case 437u: goto L_089B9D68;
    case 438u: goto L_089B9DA8;
    case 439u: goto L_089B9DB0;
    case 440u: goto L_089B9DC8;
    case 441u: goto L_089B9DD0;
    case 442u: goto L_089B9DE0;
    case 443u: goto L_089B9DF0;
    case 444u: goto L_089B9DF8;
    case 445u: goto L_089B9E24;
    case 446u: goto L_089B9E4C;
    case 447u: goto L_089B9E5C;
    case 448u: goto L_089B9E70;
    case 449u: goto L_089B9E80;
    case 450u: goto L_089B9EAC;
    case 451u: goto L_089B9EB4;
    case 452u: goto L_089B9ED8;
    case 453u: goto L_089B9EE0;
    case 454u: goto L_089B9EE8;
    case 455u: goto L_089B9EF0;
    case 456u: goto L_089B9EF8;
    case 457u: goto L_089B9F18;
    case 458u: goto L_089B9F2C;
    case 459u: goto L_089B9F7C;
    case 460u: goto L_089B9F84;
    case 461u: goto L_089B9F8C;
    case 462u: goto L_089B9FB0;
    case 463u: goto L_089B9FBC;
    case 464u: goto L_089B9FC0;
    case 465u: goto L_089B9FF8;
    case 466u: goto L_089BA01C;
    case 467u: goto L_089BA024;
    case 468u: goto L_089BA03C;
    case 469u: goto L_089BA048;
    case 470u: goto L_089BA050;
    case 471u: goto L_089BA068;
    case 472u: goto L_089BA074;
    case 473u: goto L_089BA080;
    case 474u: goto L_089BA08C;
    case 475u: goto L_089BA098;
    case 476u: goto L_089BA0A4;
    case 477u: goto L_089BA0AC;
    case 478u: goto L_089BA0BC;
    case 479u: goto L_089BA0C4;
    case 480u: goto L_089BA0D0;
    case 481u: goto L_089BA0DC;
    case 482u: goto L_089BA0E8;
    case 483u: goto L_089BA0F4;
    case 484u: goto L_089BA100;
    case 485u: goto L_089BA108;
    case 486u: goto L_089BA118;
    case 487u: goto L_089BA120;
    case 488u: goto L_089BA12C;
    case 489u: goto L_089BA134;
    case 490u: goto L_089BA13C;
    case 491u: goto L_089BA144;
    case 492u: goto L_089BA14C;
    case 493u: goto L_089BA158;
    case 494u: goto L_089BA164;
    case 495u: goto L_089BA174;
    case 496u: goto L_089BA180;
    case 497u: goto L_089BA18C;
    case 498u: goto L_089BA198;
    case 499u: goto L_089BA1A8;
    case 500u: goto L_089BA1B4;
    case 501u: goto L_089BA1C0;
    case 502u: goto L_089BA1CC;
    case 503u: goto L_089BA1D8;
    case 504u: goto L_089BA1E4;
    case 505u: goto L_089BA1EC;
    case 506u: goto L_089BA1FC;
    case 507u: goto L_089BA204;
    case 508u: goto L_089BA214;
    case 509u: goto L_089BA21C;
    case 510u: goto L_089BA22C;
    case 511u: goto L_089BA234;
    case 512u: goto L_089BA240;
    case 513u: goto L_089BA248;
    case 514u: goto L_089BA250;
    case 515u: goto L_089BA258;
    case 516u: goto L_089BA264;
    case 517u: goto L_089BA270;
    case 518u: goto L_089BA27C;
    case 519u: goto L_089BA284;
    case 520u: goto L_089BA290;
    case 521u: goto L_089BA29C;
    case 522u: goto L_089BA2A8;
    case 523u: goto L_089BA2B0;
    case 524u: goto L_089BA2BC;
    case 525u: goto L_089BA2C8;
    case 526u: goto L_089BA2D4;
    case 527u: goto L_089BA2DC;
    case 528u: goto L_089BA2E8;
    case 529u: goto L_089BA2F4;
    case 530u: goto L_089BA300;
    case 531u: goto L_089BA308;
    case 532u: goto L_089BA314;
    case 533u: goto L_089BA320;
    case 534u: goto L_089BA334;
    case 535u: goto L_089BA33C;
    case 536u: goto L_089BA344;
    case 537u: goto L_089BA35C;
    case 538u: goto L_089BA3A4;
    case 539u: goto L_089BA3AC;
    case 540u: goto L_089BA3BC;
    case 541u: goto L_089BA3C4;
    case 542u: goto L_089BA3CC;
    case 543u: goto L_089BA3D4;
    case 544u: goto L_089BA3DC;
    case 545u: goto L_089BA3E4;
    case 546u: goto L_089BA3EC;
    case 547u: goto L_089BA3F8;
    case 548u: goto L_089BA404;
    case 549u: goto L_089BA41C;
    case 550u: goto L_089BA438;
    case 551u: goto L_089BA440;
    case 552u: goto L_089BA46C;
    case 553u: goto L_089BA474;
    case 554u: goto L_089BA48C;
    case 555u: goto L_089BA494;
    case 556u: goto L_089BA49C;
    case 557u: goto L_089BA4B4;
    case 558u: goto L_089BA4F8;
    case 559u: goto L_089BA508;
    case 560u: goto L_089BA510;
    case 561u: goto L_089BA518;
    case 562u: goto L_089BA520;
    case 563u: goto L_089BA528;
    case 564u: goto L_089BA530;
    case 565u: goto L_089BA564;
    case 566u: goto L_089BA56C;
    case 567u: goto L_089BA5A4;
    case 568u: goto L_089BA5D4;
    case 569u: goto L_089BA5E4;
    case 570u: goto L_089BA5F4;
    case 571u: goto L_089BA604;
    case 572u: goto L_089BA60C;
    case 573u: goto L_089BA614;
    case 574u: goto L_089BA620;
    case 575u: goto L_089BA628;
    case 576u: goto L_089BA65C;
    case 577u: goto L_089BA674;
    case 578u: goto L_089BA67C;
    case 579u: goto L_089BA6B0;
    case 580u: goto L_089BA6C8;
    case 581u: goto L_089BA6D0;
    case 582u: goto L_089BA6E0;
    case 583u: goto L_089BA6F8;
    case 584u: goto L_089BA72C;
    case 585u: goto L_089BA73C;
    case 586u: goto L_089BA748;
    case 587u: goto L_089BA758;
    case 588u: goto L_089BA760;
    case 589u: goto L_089BA768;
    case 590u: goto L_089BA774;
    case 591u: goto L_089BA77C;
    case 592u: goto L_089BA788;
    case 593u: goto L_089BA7A0;
    case 594u: goto L_089BA7D4;
    case 595u: goto L_089BA7DC;
    case 596u: goto L_089BA804;
    case 597u: goto L_089BA824;
    case 598u: goto L_089BA82C;
    case 599u: goto L_089BA830;
    case 600u: goto L_089BA838;
    case 601u: goto L_089BA858;
    case 602u: goto L_089BA860;
    case 603u: goto L_089BA864;
    case 604u: goto L_089BA870;
    case 605u: goto L_089BA880;
    case 606u: goto L_089BA888;
    case 607u: goto L_089BA89C;
    case 608u: goto L_089BA8B0;
    case 609u: goto L_089BA8B8;
    case 610u: goto L_089BA8E4;
    case 611u: goto L_089BA908;
    case 612u: goto L_089BA910;
    case 613u: goto L_089BA914;
    case 614u: goto L_089BA91C;
    case 615u: goto L_089BA940;
    case 616u: goto L_089BA948;
    case 617u: goto L_089BA94C;
    case 618u: goto L_089BA954;
    case 619u: goto L_089BA964;
    case 620u: goto L_089BA96C;
    case 621u: goto L_089BA97C;
    case 622u: goto L_089BA9B4;
    case 623u: goto L_089BA9BC;
    case 624u: goto L_089BA9C8;
    case 625u: goto L_089BA9E0;
    case 626u: goto L_089BAA14;
    case 627u: goto L_089BAA1C;
    case 628u: goto L_089BAA34;
    case 629u: goto L_089BAA4C;
    case 630u: goto L_089BAA68;
    case 631u: goto L_089BAA80;
    case 632u: goto L_089BAA98;
    case 633u: goto L_089BAAB4;
    case 634u: goto L_089BAACC;
    case 635u: goto L_089BAAD8;
    case 636u: goto L_089BAAEC;
    case 637u: goto L_089BAB08;
    case 638u: goto L_089BAB2C;
    case 639u: goto L_089BAB38;
    case 640u: goto L_089BAB4C;
    case 641u: goto L_089BAB58;
    case 642u: goto L_089BAB68;
    case 643u: goto L_089BAB6C;
    case 644u: goto L_089BAB74;
    case 645u: goto L_089BAB8C;
    case 646u: goto L_089BABA4;
    case 647u: goto L_089BABB0;
    case 648u: goto L_089BABC0;
    case 649u: goto L_089BABD0;
    case 650u: goto L_089BABD8;
    case 651u: goto L_089BABF8;
    case 652u: goto L_089BAC10;
    case 653u: goto L_089BAC2C;
    case 654u: goto L_089BAC54;
    case 655u: goto L_089BAC60;
    case 656u: goto L_089BAC74;
    case 657u: goto L_089BAC80;
    case 658u: goto L_089BAC90;
    case 659u: goto L_089BAC98;
    case 660u: goto L_089BACA0;
    case 661u: goto L_089BACB8;
    case 662u: goto L_089BACC0;
    case 663u: goto L_089BACD4;
    case 664u: goto L_089BACDC;
    case 665u: goto L_089BACF4;
    case 666u: goto L_089BAD10;
    case 667u: goto L_089BAD30;
    case 668u: goto L_089BAD3C;
    case 669u: goto L_089BAD54;
    case 670u: goto L_089BAD68;
    case 671u: goto L_089BAD70;
    case 672u: goto L_089BAD80;
    case 673u: goto L_089BAD9C;
    case 674u: goto L_089BADA4;
    case 675u: goto L_089BADB0;
    case 676u: goto L_089BADE4;
    case 677u: goto L_089BAE00;
    case 678u: goto L_089BAE18;
    case 679u: goto L_089BAE2C;
    case 680u: goto L_089BAE34;
    case 681u: goto L_089BAE4C;
    case 682u: goto L_089BAE80;
    case 683u: goto L_089BAE98;
    case 684u: goto L_089BAEB4;
    case 685u: goto L_089BAEC0;
    case 686u: goto L_089BAEDC;
    case 687u: goto L_089BAEE8;
    case 688u: goto L_089BAF08;
    case 689u: goto L_089BAF14;
    case 690u: goto L_089BAF30;
    case 691u: goto L_089BAF3C;
    case 692u: goto L_089BAF58;
    case 693u: goto L_089BAF64;
    case 694u: goto L_089BAF74;
    case 695u: goto L_089BAF88;
    case 696u: goto L_089BAF98;
    case 697u: goto L_089BAFAC;
    case 698u: goto L_089BAFBC;
    case 699u: goto L_089BAFD0;
    case 700u: goto L_089BAFE0;
    case 701u: goto L_089BAFF4;
    case 702u: goto L_089BB004;
    case 703u: goto L_089BB018;
    case 704u: goto L_089BB028;
    case 705u: goto L_089BB03C;
    case 706u: goto L_089BB04C;
    case 707u: goto L_089BB060;
    case 708u: goto L_089BB070;
    case 709u: goto L_089BB084;
    case 710u: goto L_089BB094;
    case 711u: goto L_089BB0A8;
    case 712u: goto L_089BB0B8;
    case 713u: goto L_089BB0CC;
    case 714u: goto L_089BB0DC;
    case 715u: goto L_089BB0F0;
    case 716u: goto L_089BB100;
    case 717u: goto L_089BB114;
    case 718u: goto L_089BB124;
    case 719u: goto L_089BB138;
    case 720u: goto L_089BB148;
    case 721u: goto L_089BB15C;
    case 722u: goto L_089BB16C;
    case 723u: goto L_089BB180;
    case 724u: goto L_089BB190;
    case 725u: goto L_089BB1A4;
    case 726u: goto L_089BB1B4;
    case 727u: goto L_089BB1C8;
    case 728u: goto L_089BB1D8;
    case 729u: goto L_089BB1EC;
    case 730u: goto L_089BB1FC;
    case 731u: goto L_089BB210;
    case 732u: goto L_089BB220;
    case 733u: goto L_089BB234;
    case 734u: goto L_089BB244;
    case 735u: goto L_089BB258;
    case 736u: goto L_089BB268;
    case 737u: goto L_089BB27C;
    case 738u: goto L_089BB28C;
    case 739u: goto L_089BB2A0;
    case 740u: goto L_089BB2B0;
    case 741u: goto L_089BB2C4;
    case 742u: goto L_089BB2D4;
    case 743u: goto L_089BB2E8;
    case 744u: goto L_089BB2F8;
    case 745u: goto L_089BB30C;
    case 746u: goto L_089BB31C;
    case 747u: goto L_089BB330;
    case 748u: goto L_089BB340;
    case 749u: goto L_089BB354;
    case 750u: goto L_089BB364;
    case 751u: goto L_089BB378;
    case 752u: goto L_089BB388;
    case 753u: goto L_089BB39C;
    case 754u: goto L_089BB3AC;
    case 755u: goto L_089BB3C0;
    case 756u: goto L_089BB3D0;
    case 757u: goto L_089BB3E4;
    case 758u: goto L_089BB3F4;
    case 759u: goto L_089BB408;
    case 760u: goto L_089BB418;
    case 761u: goto L_089BB42C;
    case 762u: goto L_089BB43C;
    case 763u: goto L_089BB450;
    case 764u: goto L_089BB460;
    case 765u: goto L_089BB474;
    case 766u: goto L_089BB484;
    case 767u: goto L_089BB498;
    case 768u: goto L_089BB4A8;
    case 769u: goto L_089BB4BC;
    case 770u: goto L_089BB4C4;
    case 771u: goto L_089BB4CC;
    case 772u: goto L_089BB4D4;
    case 773u: goto L_089BB4DC;
    case 774u: goto L_089BB4E4;
    case 775u: goto L_089BB4F0;
    case 776u: goto L_089BB520;
    case 777u: goto L_089BB560;
    case 778u: goto L_089BB570;
    case 779u: goto L_089BB584;
    case 780u: goto L_089BB59C;
    case 781u: goto L_089BB5A4;
    case 782u: goto L_089BB5AC;
    case 783u: goto L_089BB5B4;
    case 784u: goto L_089BB5CC;
    case 785u: goto L_089BB5D4;
    case 786u: goto L_089BB5DC;
    case 787u: goto L_089BB5E4;
    case 788u: goto L_089BB5F0;
    case 789u: goto L_089BB5F8;
    case 790u: goto L_089BB610;
    case 791u: goto L_089BB618;
    case 792u: goto L_089BB628;
    case 793u: goto L_089BB634;
    case 794u: goto L_089BB648;
    case 795u: goto L_089BB650;
    case 796u: goto L_089BB658;
    case 797u: goto L_089BB664;
    case 798u: goto L_089BB670;
    case 799u: goto L_089BB688;
    case 800u: goto L_089BB690;
    case 801u: goto L_089BB6A8;
    case 802u: goto L_089BB6B0;
    case 803u: goto L_089BB6BC;
    case 804u: goto L_089BB6C8;
    case 805u: goto L_089BB6E0;
    case 806u: goto L_089BB6E8;
    case 807u: goto L_089BB6F0;
    case 808u: goto L_089BB6F8;
    case 809u: goto L_089BB700;
    case 810u: goto L_089BB708;
    case 811u: goto L_089BB720;
    case 812u: goto L_089BB728;
    case 813u: goto L_089BB734;
    case 814u: goto L_089BB73C;
    case 815u: goto L_089BB754;
    case 816u: goto L_089BB76C;
    case 817u: goto L_089BB794;
    case 818u: goto L_089BB79C;
    case 819u: goto L_089BB7B4;
    case 820u: goto L_089BB7BC;
    case 821u: goto L_089BB7C4;
    case 822u: goto L_089BB7D8;
    case 823u: goto L_089BB7E4;
    case 824u: goto L_089BB7EC;
    case 825u: goto L_089BB804;
    case 826u: goto L_089BB80C;
    case 827u: goto L_089BB830;
    case 828u: goto L_089BB838;
    case 829u: goto L_089BB84C;
    case 830u: goto L_089BB858;
    case 831u: goto L_089BB860;
    case 832u: goto L_089BB878;
    case 833u: goto L_089BB884;
    case 834u: goto L_089BB88C;
    case 835u: goto L_089BB8A4;
    case 836u: goto L_089BB8B8;
    case 837u: goto L_089BB8C8;
    case 838u: goto L_089BB8D0;
    case 839u: goto L_089BB8D8;
    case 840u: goto L_089BB8F0;
    case 841u: goto L_089BB8F8;
    case 842u: goto L_089BB904;
    case 843u: goto L_089BB910;
    case 844u: goto L_089BB928;
    case 845u: goto L_089BB930;
    case 846u: goto L_089BB948;
    case 847u: goto L_089BB954;
    case 848u: goto L_089BB960;
    case 849u: goto L_089BB96C;
    case 850u: goto L_089BB970;
    case 851u: goto L_089BB978;
    case 852u: goto L_089BB984;
    case 853u: goto L_089BB988;
    case 854u: goto L_089BB990;
    case 855u: goto L_089BB99C;
    case 856u: goto L_089BB9A0;
    case 857u: goto L_089BB9A8;
    case 858u: goto L_089BB9C0;
    case 859u: goto L_089BB9E4;
    case 860u: goto L_089BB9EC;
    case 861u: goto L_089BBA04;
    case 862u: goto L_089BBA10;
    case 863u: goto L_089BBA18;
    case 864u: goto L_089BBA2C;
    case 865u: goto L_089BBA34;
    case 866u: goto L_089BBA4C;
    case 867u: goto L_089BBA58;
    case 868u: goto L_089BBA64;
    case 869u: goto L_089BBA70;
    case 870u: goto L_089BBA78;
    case 871u: goto L_089BBA80;
    case 872u: goto L_089BBA88;
    case 873u: goto L_089BBA90;
    case 874u: goto L_089BBA98;
    case 875u: goto L_089BBAA0;
    case 876u: goto L_089BBAA8;
    case 877u: goto L_089BBAB0;
    case 878u: goto L_089BBAB4;
    case 879u: goto L_089BBACC;
    case 880u: goto L_089BBAD4;
    case 881u: goto L_089BBAE4;
    case 882u: goto L_089BBAEC;
    case 883u: goto L_089BBB04;
    case 884u: goto L_089BBB44;
    case 885u: goto L_089BBB4C;
    case 886u: goto L_089BBB58;
    case 887u: goto L_089BBB5C;
    case 888u: goto L_089BBB64;
    case 889u: goto L_089BBB68;
    case 890u: goto L_089BBB74;
    case 891u: goto L_089BBB80;
    case 892u: goto L_089BBB9C;
    case 893u: goto L_089BBBAC;
    case 894u: goto L_089BBBB0;
    case 895u: goto L_089BBBBC;
    case 896u: goto L_089BBBCC;
    case 897u: goto L_089BBBE4;
    case 898u: goto L_089BBBEC;
    case 899u: goto L_089BBBF4;
    case 900u: goto L_089BBC04;
    case 901u: goto L_089BBC20;
    case 902u: goto L_089BBC30;
    case 903u: goto L_089BBC40;
    case 904u: goto L_089BBC50;
    case 905u: goto L_089BBC60;
    case 906u: goto L_089BBC6C;
    case 907u: goto L_089BBC7C;
    case 908u: goto L_089BBC84;
    case 909u: goto L_089BBCA8;
    case 910u: goto L_089BBCB8;
    case 911u: goto L_089BBCC4;
    case 912u: goto L_089BBCD4;
    case 913u: goto L_089BBCE8;
    case 914u: goto L_089BBCF4;
    case 915u: goto L_089BBD00;
    case 916u: goto L_089BBD08;
    case 917u: goto L_089BBD24;
    case 918u: goto L_089BBD2C;
    case 919u: goto L_089BBD3C;
    case 920u: goto L_089BBD48;
    case 921u: goto L_089BBD50;
    case 922u: goto L_089BBD64;
    case 923u: goto L_089BBD74;
    case 924u: goto L_089BBD80;
    case 925u: goto L_089BBD90;
    case 926u: goto L_089BBDA4;
    case 927u: goto L_089BBDB0;
    case 928u: goto L_089BBDBC;
    case 929u: goto L_089BBDCC;
    case 930u: goto L_089BBDD4;
    case 931u: goto L_089BBDE0;
    case 932u: goto L_089BBDE8;
    case 933u: goto L_089BBDF4;
    case 934u: goto L_089BBDFC;
    case 935u: goto L_089BBE14;
    case 936u: goto L_089BBE38;
    case 937u: goto L_089BBE44;
    case 938u: goto L_089BBE50;
    case 939u: goto L_089BBE68;
    case 940u: goto L_089BBE70;
    case 941u: goto L_089BBE7C;
    case 942u: goto L_089BBE84;
    case 943u: goto L_089BBE8C;
    case 944u: goto L_089BBE9C;
    case 945u: goto L_089BBEA4;
    case 946u: goto L_089BBEAC;
    case 947u: goto L_089BBEB0;
    case 948u: goto L_089BBEB8;
    case 949u: goto L_089BBEC0;
    case 950u: goto L_089BBEC8;
    case 951u: goto L_089BBECC;
    case 952u: goto L_089BBED4;
    case 953u: goto L_089BBEDC;
    case 954u: goto L_089BBEE4;
    case 955u: goto L_089BBEE8;
    case 956u: goto L_089BBEFC;
    case 957u: goto L_089BBF08;
    case 958u: goto L_089BBF14;
    case 959u: goto L_089BBF2C;
    case 960u: goto L_089BBF38;
    case 961u: goto L_089BBF44;
    case 962u: goto L_089BBF4C;
    case 963u: goto L_089BBF5C;
    case 964u: goto L_089BBF68;
    case 965u: goto L_089BBF70;
    case 966u: goto L_089BBF78;
    case 967u: goto L_089BBF88;
    case 968u: goto L_089BBF94;
    case 969u: goto L_089BBFA4;
    case 970u: goto L_089BBFB4;
    case 971u: goto L_089BBFC0;
    case 972u: goto L_089BBFCC;
    case 973u: goto L_089BBFDC;
    case 974u: goto L_089BBFE4;
    case 975u: goto L_089BBFEC;
    case 976u: goto L_089BBFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089B8004:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17164)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17164), ctx.gpr[5]);
    goto L_089B8024;
L_089B8024:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8054;
      }
      goto L_089B8034;
    }
L_089B8034:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17160)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17160), ctx.gpr[5]);
    goto L_089B8054;
L_089B8054:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B8080;
      }
      goto L_089B8064;
    }
L_089B8064:
    ctx.gpr[31] = (0x089B806Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 99u, 0x088A078Cu>(ctx, &aot_mem) && ctx.pc == 0x089B806Cu) goto L_089B806C;
    return;
L_089B806C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8080;
      }
      goto L_089B8074;
    }
L_089B8074:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089B8080u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 93u, 0x088A0730u>(ctx, &aot_mem) && ctx.pc == 0x089B8080u) goto L_089B8080;
    return;
L_089B8080:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B80B8;
      }
      goto L_089B8090;
    }
L_089B8090:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[6] = (0u | 18u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x089B80B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x089B80B8u) goto L_089B80B8;
    return;
L_089B80B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089B8110;
      }
      goto L_089B80C4;
    }
L_089B80C4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_089B8110;
      }
      goto L_089B80D0;
    }
L_089B80D0:
    ctx.gpr[31] = (0x089B80D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089B80D8u) goto L_089B80D8;
    return;
L_089B80D8:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089B8110;
      }
      goto L_089B80E0;
    }
L_089B80E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B8110;
      }
      goto L_089B80F0;
    }
L_089B80F0:
    ctx.gpr[31] = (0x089B80F8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 206u, 0x089ED510u>(ctx, &aot_mem) && ctx.pc == 0x089B80F8u) goto L_089B80F8;
    return;
L_089B80F8:
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(397), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 25u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089B8110;
L_089B8110:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089B814C;
      }
      goto L_089B811C;
    }
L_089B811C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8144;
      }
      goto L_089B8128;
    }
L_089B8128:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(912), 0u);
        goto L_089B8144;
    }
    goto L_089B8134;
L_089B8134:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x089B8140u);
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089B8140u) goto L_089B8140;
    return;
L_089B8140:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(912), 0u);
    goto L_089B8144;
L_089B8144:
    ctx.gpr[31] = (0x089B814Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x089B814Cu) goto L_089B814C;
    return;
L_089B814C:
    ctx.gpr[4] = (0u | 50u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089B83B8;
      }
      goto L_089B8160;
    }
L_089B8160:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u | 25u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B81A0;
      }
      goto L_089B8170;
    }
L_089B8170:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u | 49u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B81A0;
      }
      goto L_089B8180;
    }
L_089B8180:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B81A0;
      }
      goto L_089B8190;
    }
L_089B8190:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B81A4;
      }
      goto L_089B81A0;
    }
L_089B81A0:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(596), 0u);
    goto L_089B81A4;
L_089B81A4:
    ctx.gpr[31] = (0x089B81ACu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 535u, 0x08886BB0u>(ctx, &aot_mem) && ctx.pc == 0x089B81ACu) goto L_089B81AC;
    return;
L_089B81AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B83B8;
      }
      goto L_089B81B4;
    }
L_089B81B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(592)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_089B81E4;
      }
      goto L_089B81C8;
    }
L_089B81C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B81E4;
      }
      goto L_089B81D4;
    }
L_089B81D4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_089B81E4;
      }
      goto L_089B81E0;
    }
L_089B81E0:
    ctx.gpr[16] = (0u | 1u);
    goto L_089B81E4;
L_089B81E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B8238;
      }
      goto L_089B81F0;
    }
L_089B81F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089B8238;
      }
      goto L_089B81FC;
    }
L_089B81FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B8220;
      }
      goto L_089B8208;
    }
L_089B8208:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089B8218u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 654u, 0x0889F270u>(ctx, &aot_mem) && ctx.pc == 0x089B8218u) goto L_089B8218;
    return;
L_089B8218:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B822C;
      }
      goto L_089B8220;
    }
L_089B8220:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089B822Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 643u, 0x0889F120u>(ctx, &aot_mem) && ctx.pc == 0x089B822Cu) goto L_089B822C;
    return;
L_089B822C:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_089B8304;
      }
      goto L_089B8238;
    }
L_089B8238:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B8260;
      }
      goto L_089B8248;
    }
L_089B8248:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089B8258u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 654u, 0x0889F270u>(ctx, &aot_mem) && ctx.pc == 0x089B8258u) goto L_089B8258;
    return;
L_089B8258:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8304;
      }
      goto L_089B8260;
    }
L_089B8260:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8284;
      }
      goto L_089B8270;
    }
L_089B8270:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089B827Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 643u, 0x0889F120u>(ctx, &aot_mem) && ctx.pc == 0x089B827Cu) goto L_089B827C;
    return;
L_089B827C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8304;
      }
      goto L_089B8284;
    }
L_089B8284:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 13 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 16u);
      if (branch_taken) {
          goto L_089B82C0;
      }
      goto L_089B8294;
    }
L_089B8294:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 12 ? 1u : 0u);
      if (branch_taken) {
          goto L_089B82F8;
      }
      goto L_089B82A0;
    }
L_089B82A0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B82E0;
      }
      goto L_089B82A8;
    }
L_089B82A8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089B82B8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 654u, 0x0889F270u>(ctx, &aot_mem) && ctx.pc == 0x089B82B8u) goto L_089B82B8;
    return;
L_089B82B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8304;
      }
      goto L_089B82C0;
    }
L_089B82C0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B82F8;
      }
      goto L_089B82C8;
    }
L_089B82C8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089B82D8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 654u, 0x0889F270u>(ctx, &aot_mem) && ctx.pc == 0x089B82D8u) goto L_089B82D8;
    return;
L_089B82D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8304;
      }
      goto L_089B82E0;
    }
L_089B82E0:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089B82F0u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 654u, 0x0889F270u>(ctx, &aot_mem) && ctx.pc == 0x089B82F0u) goto L_089B82F0;
    return;
L_089B82F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8304;
      }
      goto L_089B82F8;
    }
L_089B82F8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089B8304u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 643u, 0x0889F120u>(ctx, &aot_mem) && ctx.pc == 0x089B8304u) goto L_089B8304;
    return;
L_089B8304:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089B8340;
      }
      goto L_089B8310;
    }
L_089B8310:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8338;
      }
      goto L_089B831C;
    }
L_089B831C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(912), 0u);
        goto L_089B8338;
    }
    goto L_089B8328;
L_089B8328:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x089B8334u);
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089B8334u) goto L_089B8334;
    return;
L_089B8334:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(912), 0u);
    goto L_089B8338;
L_089B8338:
    ctx.gpr[31] = (0x089B8340u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x089B8340u) goto L_089B8340;
    return;
L_089B8340:
    ctx.gpr[4] = (0u | 50u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u | 25u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B8388;
      }
      goto L_089B8358;
    }
L_089B8358:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u | 49u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B8388;
      }
      goto L_089B8368;
    }
L_089B8368:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B8388;
      }
      goto L_089B8378;
    }
L_089B8378:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B838C;
      }
      goto L_089B8388;
    }
L_089B8388:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(596), 0u);
    goto L_089B838C;
L_089B838C:
    ctx.gpr[31] = (0x089B8394u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 535u, 0x08886BB0u>(ctx, &aot_mem) && ctx.pc == 0x089B8394u) goto L_089B8394;
    return;
L_089B8394:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B83AC;
      }
      goto L_089B839C;
    }
L_089B839C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x089B83ACu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x089B83ACu) goto L_089B83AC;
    return;
L_089B83AC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B83B8;
      }
      goto L_089B83B4;
    }
L_089B83B4:
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_089B83B8;
L_089B83B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B8424;
      }
      goto L_089B83C8;
    }
L_089B83C8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B83F4;
      }
      goto L_089B83D8;
    }
L_089B83D8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(1260)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089B83F4;
      }
      goto L_089B83E4;
    }
L_089B83E4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B83FC;
      }
      goto L_089B83F4;
    }
L_089B83F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 5u);
      if (branch_taken) {
          goto L_089B849C;
      }
      goto L_089B83FC;
    }
L_089B83FC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B841C;
      }
      goto L_089B840C;
    }
L_089B840C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B849C;
      }
      goto L_089B841C;
    }
L_089B841C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 10u);
      if (branch_taken) {
          goto L_089B849C;
      }
      goto L_089B8424;
    }
L_089B8424:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 15u);
      if (branch_taken) {
          goto L_089B8474;
      }
      goto L_089B8434;
    }
L_089B8434:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 12u);
      if (branch_taken) {
          goto L_089B8454;
      }
      goto L_089B843C;
    }
L_089B843C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B8494;
      }
      goto L_089B8444;
    }
L_089B8444:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089B849C;
      }
      goto L_089B844C;
    }
L_089B844C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_089B849C;
      }
      goto L_089B8454;
    }
L_089B8454:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(544)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089B8468;
      }
      goto L_089B8460;
    }
L_089B8460:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089B846C;
      }
      goto L_089B8468;
    }
L_089B8468:
    ctx.gpr[4] = (0u | 3u);
    goto L_089B846C;
L_089B846C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B849C;
      }
      goto L_089B8474;
    }
L_089B8474:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(544)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089B8488;
      }
      goto L_089B8480;
    }
L_089B8480:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_089B848C;
      }
      goto L_089B8488;
    }
L_089B8488:
    ctx.gpr[4] = (0u | 3u);
    goto L_089B848C;
L_089B848C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B849C;
      }
      goto L_089B8494;
    }
L_089B8494:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 8u);
      if (branch_taken) {
          goto L_089B849C;
      }
      goto L_089B849C;
    }
L_089B849C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(542)));
    ctx.gpr[4] = (~(ctx.gpr[4] | 0u));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(598))))));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(542), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B84D8;
      }
      goto L_089B84BC;
    }
L_089B84BC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(542)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B84D8;
      }
      goto L_089B84C8;
    }
L_089B84C8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 1000u);
    ctx.gpr[31] = (0x089B84D8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 123u, 0x0880C8C0u>(ctx, &aot_mem) && ctx.pc == 0x089B84D8u) goto L_089B84D8;
    return;
L_089B84D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(592)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(46) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B850C;
      }
      goto L_089B84EC;
    }
L_089B84EC:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-17152)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8504:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8518;
      }
      goto L_089B850C;
    }
L_089B850C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089B8518u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 881u, 0x08892EE0u>(ctx, &aot_mem) && ctx.pc == 0x089B8518u) goto L_089B8518;
    return;
L_089B8518:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[20]);
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[31] = (0x089B8534u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 725u, 0x08887A68u>(ctx, &aot_mem) && ctx.pc == 0x089B8534u) goto L_089B8534;
    return;
L_089B8534:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8558;
      }
      goto L_089B8544;
    }
L_089B8544:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (65532u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_089B8558;
L_089B8558:
    ctx.gpr[31] = (0x089B8560u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089B8560u) goto L_089B8560;
    return;
L_089B8560:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B85D0;
      }
      goto L_089B8568;
    }
L_089B8568:
    ctx.gpr[31] = (0x089B8570u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 191u, 0x089ED428u>(ctx, &aot_mem) && ctx.pc == 0x089B8570u) goto L_089B8570;
    return;
L_089B8570:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B85D0;
      }
      goto L_089B8578;
    }
L_089B8578:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(596)));
    ctx.gpr[16] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089B85D0;
      }
      goto L_089B8588;
    }
L_089B8588:
    ctx.gpr[31] = (0x089B8590u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 174u, 0x089ED314u>(ctx, &aot_mem) && ctx.pc == 0x089B8590u) goto L_089B8590;
    return;
L_089B8590:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B85C4;
      }
      goto L_089B85A0;
    }
L_089B85A0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(596)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089B85C4;
      }
      goto L_089B85AC;
    }
L_089B85AC:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089B85C4u);
    ctx.gpr[8] = (0u | 1500u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 542u, 0x08A92740u>(ctx, &aot_mem) && ctx.pc == 0x089B85C4u) goto L_089B85C4;
    return;
L_089B85C4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(599), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089B85D0;
L_089B85D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_089B85DC;
L_089B85DC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B860C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x089B8640u);
    ctx.gpr[5] = (0u | 68u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089B8640u) goto L_089B8640;
    return;
L_089B8640:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089B864Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 262u, 0x089A528Cu>(ctx, &aot_mem) && ctx.pc == 0x089B864Cu) goto L_089B864C;
    return;
L_089B864C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B865C;
      }
      goto L_089B8654;
    }
L_089B8654:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_089B8660;
      }
      goto L_089B865C;
    }
L_089B865C:
    ctx.gpr[19] = (0u | 0u);
    goto L_089B8660;
L_089B8660:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8708;
      }
      goto L_089B8668;
    }
L_089B8668:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 193u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B8708;
      }
      goto L_089B8678;
    }
L_089B8678:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8708;
      }
      goto L_089B8684;
    }
L_089B8684:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[7] = (17096u << 16u);
    ctx.gpr[6] = (0u | 15u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_089B86A8;
      }
      goto L_089B869C;
    }
L_089B869C:
    ctx.gpr[6] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089B86C8;
      }
      goto L_089B86A8;
    }
L_089B86A8:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089B86B4u);
    ctx.gpr[6] = (0u | 120u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089B86B4u) goto L_089B86B4;
    return;
L_089B86B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-6));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(543)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B86E4;
      }
      goto L_089B86C8;
    }
L_089B86C8:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089B86D4u);
    ctx.gpr[6] = (0u | 121u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089B86D4u) goto L_089B86D4;
    return;
L_089B86D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-11));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(543)));
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[4]);
    goto L_089B86E4;
L_089B86E4:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(543), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 45u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B8700u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 77u, 0x08A407CCu>(ctx, &aot_mem) && ctx.pc == 0x089B8700u) goto L_089B8700;
    return;
L_089B8700:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8A00;
      }
      goto L_089B8708;
    }
L_089B8708:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 62u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B872C;
      }
      goto L_089B8718;
    }
L_089B8718:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(848), 0u);
      if (branch_taken) {
          goto L_089B872C;
      }
      goto L_089B8720;
    }
L_089B8720:
    ctx.gpr[4] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089B872C;
L_089B872C:
    ctx.gpr[31] = (0x089B8734u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A24D8u>(ctx, &aot_mem) && ctx.pc == 0x089B8734u) goto L_089B8734;
    return;
L_089B8734:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(748), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1328), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1260)));
      if (branch_taken) {
          goto L_089B87B4;
      }
      goto L_089B8748;
    }
L_089B8748:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    ctx.gpr[7] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_089B87B4;
      }
      goto L_089B8758;
    }
L_089B8758:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8804;
      }
      goto L_089B8768;
    }
L_089B8768:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-16968)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8780:
    ctx.gpr[18] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 2u);
      if (branch_taken) {
          goto L_089B8804;
      }
      goto L_089B878C;
    }
L_089B878C:
    ctx.gpr[18] = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 4u);
      if (branch_taken) {
          goto L_089B8804;
      }
      goto L_089B8798;
    }
L_089B8798:
    ctx.gpr[18] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 3u);
      if (branch_taken) {
          goto L_089B8804;
      }
      goto L_089B87A4;
    }
L_089B87A4:
    ctx.gpr[18] = (0u | 10u);
    ctx.gpr[20] = (0u | 5u);
    goto L_089B87AC;
L_089B87AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8804;
      }
      goto L_089B87B4;
    }
L_089B87B4:
    ctx.gpr[6] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 15u);
      if (branch_taken) {
          goto L_089B87F0;
      }
      goto L_089B87C0;
    }
L_089B87C0:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 12u);
      if (branch_taken) {
          goto L_089B87E4;
      }
      goto L_089B87C8;
    }
L_089B87C8:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 11u);
      if (branch_taken) {
          goto L_089B87FC;
      }
      goto L_089B87D0;
    }
L_089B87D0:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089B8804;
      }
      goto L_089B87D8;
    }
L_089B87D8:
    ctx.gpr[18] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 3u);
      if (branch_taken) {
          goto L_089B8804;
      }
      goto L_089B87E4;
    }
L_089B87E4:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 2u);
      if (branch_taken) {
          goto L_089B8804;
      }
      goto L_089B87F0;
    }
L_089B87F0:
    ctx.gpr[18] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 4u);
      if (branch_taken) {
          goto L_089B8804;
      }
      goto L_089B87FC;
    }
L_089B87FC:
    ctx.gpr[18] = (0u | 8u);
    ctx.gpr[20] = (0u | 5u);
    goto L_089B8804;
L_089B8804:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8820;
      }
      goto L_089B880C;
    }
L_089B880C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(543)));
    ctx.gpr[6] = (~(ctx.gpr[18] | 0u));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(543), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    goto L_089B8820;
L_089B8820:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B88DC;
      }
      goto L_089B8828;
    }
L_089B8828:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089B888C;
      }
      goto L_089B8834;
    }
L_089B8834:
    ctx.gpr[31] = (0x089B883Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 734u, 0x0889F854u>(ctx, &aot_mem) && ctx.pc == 0x089B883Cu) goto L_089B883C;
    return;
L_089B883C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(660)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B8858;
      }
      goto L_089B8850;
    }
L_089B8850:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(660), ctx.gpr[5]);
    goto L_089B8858;
L_089B8858:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B88DC;
      }
      goto L_089B8868;
    }
L_089B8868:
    ctx.gpr[31] = (0x089B8870u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 99u, 0x088A078Cu>(ctx, &aot_mem) && ctx.pc == 0x089B8870u) goto L_089B8870;
    return;
L_089B8870:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B88DC;
      }
      goto L_089B8878;
    }
L_089B8878:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x089B8884u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 93u, 0x088A0730u>(ctx, &aot_mem) && ctx.pc == 0x089B8884u) goto L_089B8884;
    return;
L_089B8884:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B88DC;
      }
      goto L_089B888C;
    }
L_089B888C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(544)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_089B88DC;
      }
      goto L_089B88A0;
    }
L_089B88A0:
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089B88C8;
      }
      goto L_089B88B0;
    }
L_089B88B0:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(508), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(540)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(540), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    goto L_089B88C8;
L_089B88C8:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(544)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089B88A0;
      }
      goto L_089B88DC;
    }
L_089B88DC:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1336), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x089B88E8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089B88E8u) goto L_089B88E8;
    return;
L_089B88E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B88FC;
      }
      goto L_089B88F0;
    }
L_089B88F0:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x089B88FCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 503u, 0x08A5EC5Cu>(ctx, &aot_mem) && ctx.pc == 0x089B88FCu) goto L_089B88FC;
    return;
L_089B88FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 38u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B8984;
      }
      goto L_089B890C;
    }
L_089B890C:
    ctx.gpr[5] = (2185u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B8920u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3264));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 48u, 0x088B43F4u>(ctx, &aot_mem) && ctx.pc == 0x089B8920u) goto L_089B8920;
    return;
L_089B8920:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16128u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_089B8970;
      }
      goto L_089B8948;
    }
L_089B8948:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_089B895C;
      }
      goto L_089B8954;
    }
L_089B8954:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B8970;
      }
      goto L_089B895C;
    }
L_089B895C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B8968u);
    ctx.gpr[5] = (0u | 39u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 144u, 0x089B07D0u>(ctx, &aot_mem) && ctx.pc == 0x089B8968u) goto L_089B8968;
    return;
L_089B8968:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B897C;
      }
      goto L_089B8970;
    }
L_089B8970:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B897Cu);
    ctx.gpr[5] = (0u | 37u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 144u, 0x089B07D0u>(ctx, &aot_mem) && ctx.pc == 0x089B897Cu) goto L_089B897C;
    return;
L_089B897C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8A00;
      }
      goto L_089B8984;
    }
L_089B8984:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B89A8;
      }
      goto L_089B898C;
    }
L_089B898C:
    ctx.gpr[5] = (2185u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B89A0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-968));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 48u, 0x088B43F4u>(ctx, &aot_mem) && ctx.pc == 0x089B89A0u) goto L_089B89A0;
    return;
L_089B89A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B89E4;
      }
      goto L_089B89A8;
    }
L_089B89A8:
    ctx.gpr[5] = (2185u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B89BCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3264));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 48u, 0x088B43F4u>(ctx, &aot_mem) && ctx.pc == 0x089B89BCu) goto L_089B89BC;
    return;
L_089B89BC:
    ctx.gpr[31] = (0x089B89C4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 368u, 0x0899E2A8u>(ctx, &aot_mem) && ctx.pc == 0x089B89C4u) goto L_089B89C4;
    return;
L_089B89C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B89E4;
      }
      goto L_089B89CC;
    }
L_089B89CC:
    ctx.gpr[7] = (17530u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089B89E4u);
    ctx.gpr[6] = (0u | 132u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089B89E4u) goto L_089B89E4;
    return;
L_089B89E4:
    ctx.gpr[31] = (0x089B89ECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 706u, 0x0899F9BCu>(ctx, &aot_mem) && ctx.pc == 0x089B89ECu) goto L_089B89EC;
    return;
L_089B89EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(856), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    goto L_089B8A00;
L_089B8A00:
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
L_089B8A20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-528));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(404), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(336)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(492), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(508), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), ctx.gpr[23]);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[19] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[23] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.gpr[22] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(476), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[30] = (2229u << 16u);
      if (branch_taken) {
          goto L_089B8AB4;
      }
      goto L_089B8A98;
    }
L_089B8A98:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.gpr[31] = (0x089B8AA8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x089B8AA8u) goto L_089B8AA8;
    return;
L_089B8AA8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089B8AB4;
L_089B8AB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[20] = std::sqrt(ctx.fpr[20]);
    ctx.gpr[31] = (0x089B8AE8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 338u, 0x0899E180u>(ctx, &aot_mem) && ctx.pc == 0x089B8AE8u) goto L_089B8AE8;
    return;
L_089B8AE8:
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (15267u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (16448u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17723u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
      if (branch_taken) {
          goto L_089B8B4C;
      }
      goto L_089B8B44;
    }
L_089B8B44:
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089B8B4C;
L_089B8B4C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[23]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), ctx.gpr[20]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089B8B68u);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17960));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x089B8B68u) goto L_089B8B68;
    return;
L_089B8B68:
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), ctx.gpr[22]);
    ctx.gpr[31] = (0x089B8B80u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x089B8B80u) goto L_089B8B80;
    return;
L_089B8B80:
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089B8B90u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x089B8B90u) goto L_089B8B90;
    return;
L_089B8B90:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (ctx.gpr[23] | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[11] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089B8BB0u);
    ctx.gpr[10] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 101u, 0x0899CDCCu>(ctx, &aot_mem) && ctx.pc == 0x089B8BB0u) goto L_089B8BB0;
    return;
L_089B8BB0:
    ctx.gpr[8] = (ctx.gpr[16] & 255u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 39u);
    ctx.gpr[31] = (0x089B8BCCu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 575u, 0x088DEE0Cu>(ctx, &aot_mem) && ctx.pc == 0x089B8BCCu) goto L_089B8BCC;
    return;
L_089B8BCC:
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(25));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089B8BE0u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 98u, 0x089A0734u>(ctx, &aot_mem) && ctx.pc == 0x089B8BE0u) goto L_089B8BE0;
    return;
L_089B8BE0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[24])) && ctx.fpr[20] == ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
      if (branch_taken) {
          goto L_089B8C1C;
      }
      goto L_089B8C04;
    }
L_089B8C04:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[24])) && ctx.fpr[12] == ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_089B8C20;
    }
    goto L_089B8C14;
L_089B8C14:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_089B8C2C;
      }
      goto L_089B8C1C;
    }
L_089B8C1C:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089B8C20;
L_089B8C20:
    ctx.gpr[31] = (0x089B8C28u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089B8C28u) goto L_089B8C28;
    return;
L_089B8C28:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089B8C2C;
L_089B8C2C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089B8C38u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A287ACu>(ctx, &aot_mem) && ctx.pc == 0x089B8C38u) goto L_089B8C38;
    return;
L_089B8C38:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1412), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(250));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1776), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B8C5C;
      }
      goto L_089B8C50;
    }
L_089B8C50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1412)));
    ctx.gpr[31] = (0x089B8C5Cu);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(1412));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089B8C5Cu) goto L_089B8C5C;
    return;
L_089B8C5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(324), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (48716u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[5] | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B8D48;
      }
      goto L_089B8CE0;
    }
L_089B8CE0:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8E70;
      }
      goto L_089B8D48;
    }
L_089B8D48:
    ctx.gpr[4] = (15820u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B8E20;
      }
      goto L_089B8D68;
    }
L_089B8D68:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = ctx.fpr[14] - ctx.fpr[15];
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B8E18;
      }
      goto L_089B8DE0;
    }
L_089B8DE0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16000u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    goto L_089B8E18;
L_089B8E18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8E70;
      }
      goto L_089B8E20;
    }
L_089B8E20:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_089B8E70;
L_089B8E70:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.fpr[20] = ctx.fpr[14] / ctx.fpr[12];
    ctx.gpr[31] = (0x089B8EA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089B8EA0u) goto L_089B8EA0;
    return;
L_089B8EA0:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[31] = (0x089B8EACu);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 518u, 0x08AF67ECu>(ctx, &aot_mem) && ctx.pc == 0x089B8EACu) goto L_089B8EAC;
    return;
L_089B8EAC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28620)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28624)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089B8EC4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x089B8EC4u) goto L_089B8EC4;
    return;
L_089B8EC4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28612)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28616)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089B8EDCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 426u, 0x08AF6118u>(ctx, &aot_mem) && ctx.pc == 0x089B8EDCu) goto L_089B8EDC;
    return;
L_089B8EDC:
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089B8EECu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x089B8EECu) goto L_089B8EEC;
    return;
L_089B8EEC:
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089B8F00u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x089B8F00u) goto L_089B8F00;
    return;
L_089B8F00:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089B8F0Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x089B8F0Cu) goto L_089B8F0C;
    return;
L_089B8F0C:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (16320u << 16u);
      if (branch_taken) {
          goto L_089B8F84;
      }
      goto L_089B8F74;
    }
L_089B8F74:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B8F9C;
      }
      goto L_089B8F80;
    }
L_089B8F80:
    ctx.gpr[4] = (16320u << 16u);
    goto L_089B8F84;
L_089B8F84:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089B8FA8;
      }
      goto L_089B8F9C;
    }
L_089B8F9C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089B8FA8;
L_089B8FA8:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(476)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(488)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(492)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(496)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(504)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(508)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(516)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8FF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-288));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (8u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[17] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089B9244;
      }
      goto L_089B9038;
    }
L_089B9038:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089B90BC;
      }
      goto L_089B9048;
    }
L_089B9048:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B9054u);
    ctx.gpr[5] = (0u | 190u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089B9054u) goto L_089B9054;
    return;
L_089B9054:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9070;
      }
      goto L_089B9060;
    }
L_089B9060:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B906Cu);
    ctx.gpr[5] = (0u | 191u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089B906Cu) goto L_089B906C;
    return;
L_089B906C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089B9070;
L_089B9070:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9088;
      }
      goto L_089B9078;
    }
L_089B9078:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B9084u);
    ctx.gpr[5] = (0u | 192u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089B9084u) goto L_089B9084;
    return;
L_089B9084:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089B9088;
L_089B9088:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B90A8;
      }
      goto L_089B9090;
    }
L_089B9090:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (65528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B9218;
      }
      goto L_089B90A8;
    }
L_089B90A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B90B4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 201u, 0x0888D060u>(ctx, &aot_mem) && ctx.pc == 0x089B90B4u) goto L_089B90B4;
    return;
L_089B90B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B96C4;
      }
      goto L_089B90BC;
    }
L_089B90BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B90C8u);
    ctx.gpr[5] = (0u | 75u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089B90C8u) goto L_089B90C8;
    return;
L_089B90C8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B90E4;
      }
      goto L_089B90D4;
    }
L_089B90D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B90E0u);
    ctx.gpr[5] = (0u | 76u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089B90E0u) goto L_089B90E0;
    return;
L_089B90E0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089B90E4;
L_089B90E4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B90FC;
      }
      goto L_089B90EC;
    }
L_089B90EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B90F8u);
    ctx.gpr[5] = (0u | 77u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089B90F8u) goto L_089B90F8;
    return;
L_089B90F8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089B90FC;
L_089B90FC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9114;
      }
      goto L_089B9104;
    }
L_089B9104:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B9110u);
    ctx.gpr[5] = (0u | 93u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089B9110u) goto L_089B9110;
    return;
L_089B9110:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089B9114;
L_089B9114:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B912C;
      }
      goto L_089B911C;
    }
L_089B911C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B9128u);
    ctx.gpr[5] = (0u | 78u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089B9128u) goto L_089B9128;
    return;
L_089B9128:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089B912C;
L_089B912C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9144;
      }
      goto L_089B9134;
    }
L_089B9134:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B9140u);
    ctx.gpr[5] = (0u | 95u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089B9140u) goto L_089B9140;
    return;
L_089B9140:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089B9144;
L_089B9144:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B915C;
      }
      goto L_089B914C;
    }
L_089B914C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B9158u);
    ctx.gpr[5] = (0u | 96u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089B9158u) goto L_089B9158;
    return;
L_089B9158:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089B915C;
L_089B915C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9174;
      }
      goto L_089B9164;
    }
L_089B9164:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B9170u);
    ctx.gpr[5] = (0u | 172u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089B9170u) goto L_089B9170;
    return;
L_089B9170:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089B9174;
L_089B9174:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B918C;
      }
      goto L_089B917C;
    }
L_089B917C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B9188u);
    ctx.gpr[5] = (0u | 176u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089B9188u) goto L_089B9188;
    return;
L_089B9188:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089B918C;
L_089B918C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B91A4;
      }
      goto L_089B9194;
    }
L_089B9194:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B91A0u);
    ctx.gpr[5] = (0u | 171u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089B91A0u) goto L_089B91A0;
    return;
L_089B91A0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089B91A4;
L_089B91A4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B91BC;
      }
      goto L_089B91AC;
    }
L_089B91AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B91B8u);
    ctx.gpr[5] = (0u | 175u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089B91B8u) goto L_089B91B8;
    return;
L_089B91B8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089B91BC;
L_089B91BC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B91D4;
      }
      goto L_089B91C4;
    }
L_089B91C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B91D0u);
    ctx.gpr[5] = (0u | 180u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089B91D0u) goto L_089B91D0;
    return;
L_089B91D0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089B91D4;
L_089B91D4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B91EC;
      }
      goto L_089B91DC;
    }
L_089B91DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B91E8u);
    ctx.gpr[5] = (0u | 181u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089B91E8u) goto L_089B91E8;
    return;
L_089B91E8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089B91EC;
L_089B91EC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9204;
      }
      goto L_089B91F4;
    }
L_089B91F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B9200u);
    ctx.gpr[5] = (0u | 81u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089B9200u) goto L_089B9200;
    return;
L_089B9200:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089B9204;
L_089B9204:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9214;
      }
      goto L_089B920C;
    }
L_089B920C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_089B9218;
      }
      goto L_089B9214;
    }
L_089B9214:
    ctx.gpr[18] = (0u | 1u);
    goto L_089B9218;
L_089B9218:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9244;
      }
      goto L_089B9220;
    }
L_089B9220:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B922Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 201u, 0x0888D060u>(ctx, &aot_mem) && ctx.pc == 0x089B922Cu) goto L_089B922C;
    return;
L_089B922C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (65528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B96C4;
      }
      goto L_089B9244;
    }
L_089B9244:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_089B9284;
      }
      goto L_089B9270;
    }
L_089B9270:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089B9284;
L_089B9284:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x089B9290u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 481u, 0x08A05DFCu>(ctx, &aot_mem) && ctx.pc == 0x089B9290u) goto L_089B9290;
    return;
L_089B9290:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B9338;
      }
      goto L_089B92B4;
    }
L_089B92B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[21]) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(112));
        goto L_089B92CC;
    }
    goto L_089B92C4;
L_089B92C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_089B92CC;
      }
      goto L_089B92CC;
    }
L_089B92CC:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B92E0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 393u, 0x0899E3A4u>(ctx, &aot_mem) && ctx.pc == 0x089B92E0u) goto L_089B92E0;
    return;
L_089B92E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_089B930C;
      }
      goto L_089B92F0;
    }
L_089B92F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089B930C;
      }
      goto L_089B9300;
    }
L_089B9300:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089B930C;
L_089B930C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9404;
      }
      goto L_089B9320;
    }
L_089B9320:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089B9404;
      }
      goto L_089B9338;
    }
L_089B9338:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B9394;
      }
      goto L_089B9348;
    }
L_089B9348:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089B936C;
      }
      goto L_089B9358;
    }
L_089B9358:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9404;
      }
      goto L_089B936C;
    }
L_089B936C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(112));
        goto L_089B9384;
    }
    goto L_089B937C;
L_089B937C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_089B9384;
      }
      goto L_089B9384;
    }
L_089B9384:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9404;
      }
      goto L_089B9394;
    }
L_089B9394:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(512)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B93C0;
      }
      goto L_089B93A4;
    }
L_089B93A4:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089B9404;
      }
      goto L_089B93C0;
    }
L_089B93C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(516)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B93E4;
      }
      goto L_089B93D0;
    }
L_089B93D0:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9404;
      }
      goto L_089B93E4;
    }
L_089B93E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(112));
        goto L_089B93FC;
    }
    goto L_089B93F4;
L_089B93F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_089B93FC;
      }
      goto L_089B93FC;
    }
L_089B93FC:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_089B9404;
L_089B9404:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089B942C;
      }
      goto L_089B9414;
    }
L_089B9414:
    ctx.gpr[31] = (0x089B941Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 491u, 0x08A36E90u>(ctx, &aot_mem) && ctx.pc == 0x089B941Cu) goto L_089B941C;
    return;
L_089B941C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089B942Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(896));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 519u, 0x08A0695Cu>(ctx, &aot_mem) && ctx.pc == 0x089B942Cu) goto L_089B942C;
    return;
L_089B942C:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<7u, 3u>(vfpu_target_raw);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089B948Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 509u, 0x08A0654Cu>(ctx, &aot_mem) && ctx.pc == 0x089B948Cu) goto L_089B948C;
    return;
L_089B948C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9630;
      }
      goto L_089B94A0;
    }
L_089B94A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(512)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B9558;
      }
      goto L_089B94B0;
    }
L_089B94B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (16329u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[4] = (ctx.gpr[5] | 4059u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B94F0;
      }
      goto L_089B94D8;
    }
L_089B94D8:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[20])) && ctx.fpr[13] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B94F0;
      }
      goto L_089B94E8;
    }
L_089B94E8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = ctx.fpr[20] - ctx.fpr[22];
      if (branch_taken) {
          goto L_089B94FC;
      }
      goto L_089B94F0;
    }
L_089B94F0:
    ctx.gpr[31] = (0x089B94F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089B94F8u) goto L_089B94F8;
    return;
L_089B94F8:
    ctx.fpr[22] = ctx.fpr[0] - ctx.fpr[22];
    goto L_089B94FC;
L_089B94FC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089B9514u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 512u, 0x08A065B8u>(ctx, &aot_mem) && ctx.pc == 0x089B9514u) goto L_089B9514;
    return;
L_089B9514:
    ctx.gpr[5] = (49097u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089B9528u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 495u, 0x08A062F0u>(ctx, &aot_mem) && ctx.pc == 0x089B9528u) goto L_089B9528;
    return;
L_089B9528:
    ctx.gpr[5] = (16153u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089B9544u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x089B9544u) goto L_089B9544;
    return;
L_089B9544:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089B9550u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 522u, 0x08A069A4u>(ctx, &aot_mem) && ctx.pc == 0x089B9550u) goto L_089B9550;
    return;
L_089B9550:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9670;
      }
      goto L_089B9558;
    }
L_089B9558:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(516)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B95EC;
      }
      goto L_089B9568;
    }
L_089B9568:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (16329u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[4] = (ctx.gpr[5] | 4059u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B95A8;
      }
      goto L_089B9590;
    }
L_089B9590:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[20])) && ctx.fpr[13] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B95A8;
      }
      goto L_089B95A0;
    }
L_089B95A0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[22];
      if (branch_taken) {
          goto L_089B95B4;
      }
      goto L_089B95A8;
    }
L_089B95A8:
    ctx.gpr[31] = (0x089B95B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089B95B0u) goto L_089B95B0;
    return;
L_089B95B0:
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[22];
    goto L_089B95B4;
L_089B95B4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089B95CCu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 512u, 0x08A065B8u>(ctx, &aot_mem) && ctx.pc == 0x089B95CCu) goto L_089B95CC;
    return;
L_089B95CC:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089B95D8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 495u, 0x08A062F0u>(ctx, &aot_mem) && ctx.pc == 0x089B95D8u) goto L_089B95D8;
    return;
L_089B95D8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089B95E4u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 522u, 0x08A069A4u>(ctx, &aot_mem) && ctx.pc == 0x089B95E4u) goto L_089B95E4;
    return;
L_089B95E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9670;
      }
      goto L_089B95EC;
    }
L_089B95EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089B9618;
      }
      goto L_089B9608;
    }
L_089B9608:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[20])) && ctx.fpr[13] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B9628;
      }
      goto L_089B9618;
    }
L_089B9618:
    ctx.gpr[31] = (0x089B9620u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089B9620u) goto L_089B9620;
    return;
L_089B9620:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_089B9628;
      }
      goto L_089B9628;
    }
L_089B9628:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_089B9670;
      }
      goto L_089B9630;
    }
L_089B9630:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089B965C;
      }
      goto L_089B964C;
    }
L_089B964C:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[20])) && ctx.fpr[13] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B966C;
      }
      goto L_089B965C;
    }
L_089B965C:
    ctx.gpr[31] = (0x089B9664u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089B9664u) goto L_089B9664;
    return;
L_089B9664:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_089B966C;
      }
      goto L_089B966C;
    }
L_089B966C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_089B9670;
L_089B9670:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B967Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 519u, 0x08A0695Cu>(ctx, &aot_mem) && ctx.pc == 0x089B967Cu) goto L_089B967C;
    return;
L_089B967C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
        goto L_089B96A4;
    }
    goto L_089B968C;
L_089B968C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
        goto L_089B96A4;
    }
    goto L_089B9698;
L_089B9698:
    ctx.gpr[31] = (0x089B96A0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089B96A0u) goto L_089B96A0;
    return;
L_089B96A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    goto L_089B96A4;
L_089B96A4:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B96C4;
      }
      goto L_089B96B0;
    }
L_089B96B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B96C4;
      }
      goto L_089B96BC;
    }
L_089B96BC:
    ctx.gpr[31] = (0x089B96C4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089B96C4u) goto L_089B96C4;
    return;
L_089B96C4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B96F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-432));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7820)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), ctx.gpr[22]);
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9FBC;
      }
      goto L_089B9748;
    }
L_089B9748:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9FBC;
      }
      goto L_089B9760;
    }
L_089B9760:
    ctx.gpr[31] = (0x089B9768u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089B9768u) goto L_089B9768;
    return;
L_089B9768:
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[5] = (16968u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(364), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[4]);
        goto L_089B97CC;
    }
    goto L_089B97CC;
L_089B97CC:
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[5] = (16968u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_089B9810;
    }
    goto L_089B9810;
L_089B9810:
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (16752u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16928u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[5] = (16968u << 16u);
    ctx.gpr[6] = (0u | 100u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[6]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[5]);
        goto L_089B9858;
    }
    goto L_089B9858;
L_089B9858:
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (16752u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16928u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[5] = (16968u << 16u);
    ctx.gpr[6] = (0u | 100u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
        goto L_089B989C;
    }
    goto L_089B989C;
L_089B989C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[4]);
    goto L_089B98A4;
L_089B98A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9DF0;
      }
      goto L_089B98B8;
    }
L_089B98B8:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9DF0;
      }
      goto L_089B98C0;
    }
L_089B98C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[4]);
    goto L_089B98C8;
L_089B98C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9DE0;
      }
      goto L_089B98DC;
    }
L_089B98DC:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9DE0;
      }
      goto L_089B98E4;
    }
L_089B98E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[30] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[30] = (ctx.gpr[4] + ctx.gpr[30]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(20)));
    goto L_089B991C;
L_089B991C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9A48;
      }
      goto L_089B9924;
    }
L_089B9924:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9A48;
      }
      goto L_089B992C;
    }
L_089B992C:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089B9960;
      }
      goto L_089B994C;
    }
L_089B994C:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089B9960;
L_089B9960:
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(17)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9A40;
      }
      goto L_089B996C;
    }
L_089B996C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9A40;
      }
      goto L_089B997C;
    }
L_089B997C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(24))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_089B99A4;
      }
      goto L_089B9988;
    }
L_089B9988:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7092)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B99A4;
      }
      goto L_089B99A4;
    }
L_089B99A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B9A28;
      }
      goto L_089B99B4;
    }
L_089B99B4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(37)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9A28;
      }
      goto L_089B99C8;
    }
L_089B99C8:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(380), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089B99E0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 102u, 0x0899CDF8u>(ctx, &aot_mem) && ctx.pc == 0x089B99E0u) goto L_089B99E0;
    return;
L_089B99E0:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17024u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
      if (branch_taken) {
          goto L_089B9A28;
      }
      goto L_089B9A20;
    }
L_089B9A20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_089B9A40;
      }
      goto L_089B9A28;
    }
L_089B9A28:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B997C;
      }
      goto L_089B9A40;
    }
L_089B9A40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B991C;
      }
      goto L_089B9A48;
    }
L_089B9A48:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(12)));
    goto L_089B9A4C;
L_089B9A4C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9B78;
      }
      goto L_089B9A54;
    }
L_089B9A54:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9B78;
      }
      goto L_089B9A5C;
    }
L_089B9A5C:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089B9A90;
      }
      goto L_089B9A7C;
    }
L_089B9A7C:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089B9A90;
L_089B9A90:
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(17)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9B70;
      }
      goto L_089B9A9C;
    }
L_089B9A9C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9B70;
      }
      goto L_089B9AAC;
    }
L_089B9AAC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(24))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_089B9AD4;
      }
      goto L_089B9AB8;
    }
L_089B9AB8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7092)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B9AD4;
      }
      goto L_089B9AD4;
    }
L_089B9AD4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B9B58;
      }
      goto L_089B9AE4;
    }
L_089B9AE4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(37)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9B58;
      }
      goto L_089B9AF8;
    }
L_089B9AF8:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(380), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089B9B10u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 102u, 0x0899CDF8u>(ctx, &aot_mem) && ctx.pc == 0x089B9B10u) goto L_089B9B10;
    return;
L_089B9B10:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17024u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
      if (branch_taken) {
          goto L_089B9B58;
      }
      goto L_089B9B50;
    }
L_089B9B50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_089B9B70;
      }
      goto L_089B9B58;
    }
L_089B9B58:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9AAC;
      }
      goto L_089B9B70;
    }
L_089B9B70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9A4C;
      }
      goto L_089B9B78;
    }
L_089B9B78:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    goto L_089B9B7C;
L_089B9B7C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9CA8;
      }
      goto L_089B9B84;
    }
L_089B9B84:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9CA8;
      }
      goto L_089B9B8C;
    }
L_089B9B8C:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089B9BC0;
      }
      goto L_089B9BAC;
    }
L_089B9BAC:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089B9BC0;
L_089B9BC0:
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(17)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9CA0;
      }
      goto L_089B9BCC;
    }
L_089B9BCC:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9CA0;
      }
      goto L_089B9BDC;
    }
L_089B9BDC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(24))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_089B9C04;
      }
      goto L_089B9BE8;
    }
L_089B9BE8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7092)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B9C04;
      }
      goto L_089B9C04;
    }
L_089B9C04:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B9C88;
      }
      goto L_089B9C14;
    }
L_089B9C14:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(37)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9C88;
      }
      goto L_089B9C28;
    }
L_089B9C28:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(380), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089B9C40u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 102u, 0x0899CDF8u>(ctx, &aot_mem) && ctx.pc == 0x089B9C40u) goto L_089B9C40;
    return;
L_089B9C40:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17024u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
      if (branch_taken) {
          goto L_089B9C88;
      }
      goto L_089B9C80;
    }
L_089B9C80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_089B9CA0;
      }
      goto L_089B9C88;
    }
L_089B9C88:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9BDC;
      }
      goto L_089B9CA0;
    }
L_089B9CA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9B7C;
      }
      goto L_089B9CA8;
    }
L_089B9CA8:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    goto L_089B9CAC;
L_089B9CAC:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9DD0;
      }
      goto L_089B9CB4;
    }
L_089B9CB4:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9DD0;
      }
      goto L_089B9CBC;
    }
L_089B9CBC:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089B9CF0;
      }
      goto L_089B9CDC;
    }
L_089B9CDC:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089B9CF0;
L_089B9CF0:
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(17)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9DC8;
      }
      goto L_089B9CFC;
    }
L_089B9CFC:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9DC8;
      }
      goto L_089B9D0C;
    }
L_089B9D0C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(24))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_089B9D34;
      }
      goto L_089B9D18;
    }
L_089B9D18:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7092)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B9D34;
      }
      goto L_089B9D34;
    }
L_089B9D34:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B9DB0;
      }
      goto L_089B9D44;
    }
L_089B9D44:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(37)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
      if (branch_taken) {
          goto L_089B9DB0;
      }
      goto L_089B9D58;
    }
L_089B9D58:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089B9D68u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 102u, 0x0899CDF8u>(ctx, &aot_mem) && ctx.pc == 0x089B9D68u) goto L_089B9D68;
    return;
L_089B9D68:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17024u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B9DB0;
      }
      goto L_089B9DA8;
    }
L_089B9DA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_089B9DC8;
      }
      goto L_089B9DB0;
    }
L_089B9DB0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9D0C;
      }
      goto L_089B9DC8;
    }
L_089B9DC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9CAC;
      }
      goto L_089B9DD0;
    }
L_089B9DD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B98C8;
      }
      goto L_089B9DE0;
    }
L_089B9DE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B98A4;
      }
      goto L_089B9DF0;
    }
L_089B9DF0:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9FBC;
      }
      goto L_089B9DF8;
    }
L_089B9DF8:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B9E24u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 102u, 0x0899CDF8u>(ctx, &aot_mem) && ctx.pc == 0x089B9E24u) goto L_089B9E24;
    return;
L_089B9E24:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x089B9E4Cu);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089B9E4Cu) goto L_089B9E4C;
    return;
L_089B9E4C:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86)));
    ctx.gpr[31] = (0x089B9E5Cu);
    ctx.gpr[16] = (ctx.gpr[4] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089B9E5Cu) goto L_089B9E5C;
    return;
L_089B9E5C:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9F8C;
      }
      goto L_089B9E70;
    }
L_089B9E70:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089B9E80u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 102u, 0x0899CDF8u>(ctx, &aot_mem) && ctx.pc == 0x089B9E80u) goto L_089B9E80;
    return;
L_089B9E80:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[5]);
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) > 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_089B9EE0;
      }
      goto L_089B9EAC;
    }
L_089B9EAC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) < 0;
    // nop
      if (branch_taken) {
          goto L_089B9F84;
      }
      goto L_089B9EB4;
    }
L_089B9EB4:
    ctx.gpr[8] = (15820u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (ctx.gpr[8] | 52429u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (0u | 20u);
    ctx.gpr[31] = (0x089B9ED8u);
    ctx.gpr[7] = (0u | 15000u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 192u, 0x088D4F00u>(ctx, &aot_mem) && ctx.pc == 0x089B9ED8u) goto L_089B9ED8;
    return;
L_089B9ED8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9F84;
      }
      goto L_089B9EE0;
    }
L_089B9EE0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_089B9EF8;
      }
      goto L_089B9EE8;
    }
L_089B9EE8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9F84;
      }
      goto L_089B9EF0;
    }
L_089B9EF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9F84;
      }
      goto L_089B9EF8;
    }
L_089B9EF8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(37)));
    ctx.gpr[5] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(8500));
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[31] = (0x089B9F18u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089B9F18u) goto L_089B9F18;
    return;
L_089B9F18:
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(-8000));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089B9F2Cu);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x089B9F2Cu) goto L_089B9F2C;
    return;
L_089B9F2C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-28604)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-28608)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (0u | 22u);
    ctx.gpr[31] = (0x089B9F7Cu);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 192u, 0x088D4F00u>(ctx, &aot_mem) && ctx.pc == 0x089B9F7Cu) goto L_089B9F7C;
    return;
L_089B9F7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9F84;
      }
      goto L_089B9F84;
    }
L_089B9F84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089B9FC0;
      }
      goto L_089B9F8C;
    }
L_089B9F8C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2000));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1784), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x089B9FB0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 71u, 0x089A04F8u>(ctx, &aot_mem) && ctx.pc == 0x089B9FB0u) goto L_089B9FB0;
    return;
L_089B9FB0:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089B9FBCu);
    ctx.gpr[5] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 787u, 0x0899FEE8u>(ctx, &aot_mem) && ctx.pc == 0x089B9FBCu) goto L_089B9FBC;
    return;
L_089B9FBC:
    ctx.gpr[2] = (0u | 0u);
    goto L_089B9FC0;
L_089B9FC0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(400)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(404)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(412)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(420)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B9FF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 48 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 19 ? 1u : 0u);
      if (branch_taken) {
          goto L_089BA03C;
      }
      goto L_089BA01C;
    }
L_089BA01C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19));
      if (branch_taken) {
          goto L_089BA344;
      }
      goto L_089BA024;
    }
L_089BA024:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-16928)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BA03C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 86 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BA308;
      }
      goto L_089BA048;
    }
L_089BA048:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA344;
      }
      goto L_089BA050;
    }
L_089BA050:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BA1FC;
      }
      goto L_089BA068;
    }
L_089BA068:
    ctx.gpr[5] = (0u | 25u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BA0C4;
      }
      goto L_089BA074;
    }
L_089BA074:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089BA080u);
    ctx.gpr[5] = (0u | 167u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089BA080u) goto L_089BA080;
    return;
L_089BA080:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA098;
      }
      goto L_089BA08C;
    }
L_089BA08C:
    ctx.gpr[5] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089BA098;
L_089BA098:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA1FC;
      }
      goto L_089BA0A4;
    }
L_089BA0A4:
    ctx.gpr[31] = (0x089BA0ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A295CCu>(ctx, &aot_mem) && ctx.pc == 0x089BA0ACu) goto L_089BA0AC;
    return;
L_089BA0AC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089BA0BCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 510u, 0x08A2A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089BA0BCu) goto L_089BA0BC;
    return;
L_089BA0BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA1FC;
      }
      goto L_089BA0C4;
    }
L_089BA0C4:
    ctx.gpr[5] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BA120;
      }
      goto L_089BA0D0;
    }
L_089BA0D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089BA0DCu);
    ctx.gpr[5] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089BA0DCu) goto L_089BA0DC;
    return;
L_089BA0DC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA0F4;
      }
      goto L_089BA0E8;
    }
L_089BA0E8:
    ctx.gpr[5] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089BA0F4;
L_089BA0F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA1FC;
      }
      goto L_089BA100;
    }
L_089BA100:
    ctx.gpr[31] = (0x089BA108u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A295CCu>(ctx, &aot_mem) && ctx.pc == 0x089BA108u) goto L_089BA108;
    return;
L_089BA108:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089BA118u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 510u, 0x08A2A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089BA118u) goto L_089BA118;
    return;
L_089BA118:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA1FC;
      }
      goto L_089BA120;
    }
L_089BA120:
    ctx.gpr[5] = (0u | 21u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[6] = (0u | 22u);
      if (branch_taken) {
          goto L_089BA144;
      }
      goto L_089BA12C;
    }
L_089BA12C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 24u);
      if (branch_taken) {
          goto L_089BA144;
      }
      goto L_089BA134;
    }
L_089BA134:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 23u);
      if (branch_taken) {
          goto L_089BA144;
      }
      goto L_089BA13C;
    }
L_089BA13C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089BA1FC;
      }
      goto L_089BA144;
    }
L_089BA144:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BA174;
      }
      goto L_089BA14C;
    }
L_089BA14C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089BA158u);
    ctx.gpr[5] = (0u | 163u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089BA158u) goto L_089BA158;
    return;
L_089BA158:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA1D8;
      }
      goto L_089BA164;
    }
L_089BA164:
    ctx.gpr[5] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BA1D8;
      }
      goto L_089BA174;
    }
L_089BA174:
    ctx.gpr[5] = (0u | 24u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BA1A8;
      }
      goto L_089BA180;
    }
L_089BA180:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089BA18Cu);
    ctx.gpr[5] = (0u | 165u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089BA18Cu) goto L_089BA18C;
    return;
L_089BA18C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA1D8;
      }
      goto L_089BA198;
    }
L_089BA198:
    ctx.gpr[5] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BA1D8;
      }
      goto L_089BA1A8;
    }
L_089BA1A8:
    ctx.gpr[5] = (0u | 23u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BA1D8;
      }
      goto L_089BA1B4;
    }
L_089BA1B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089BA1C0u);
    ctx.gpr[5] = (0u | 164u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089BA1C0u) goto L_089BA1C0;
    return;
L_089BA1C0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA1D8;
      }
      goto L_089BA1CC;
    }
L_089BA1CC:
    ctx.gpr[5] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089BA1D8;
L_089BA1D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA1FC;
      }
      goto L_089BA1E4;
    }
L_089BA1E4:
    ctx.gpr[31] = (0x089BA1ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A295CCu>(ctx, &aot_mem) && ctx.pc == 0x089BA1ECu) goto L_089BA1EC;
    return;
L_089BA1EC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089BA1FCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 510u, 0x08A2A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089BA1FCu) goto L_089BA1FC;
    return;
L_089BA1FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA344;
      }
      goto L_089BA204;
    }
L_089BA204:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089BA214u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-17924));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 162u, 0x0899D3DCu>(ctx, &aot_mem) && ctx.pc == 0x089BA214u) goto L_089BA214;
    return;
L_089BA214:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA344;
      }
      goto L_089BA21C;
    }
L_089BA21C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089BA22Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-17916));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 162u, 0x0899D3DCu>(ctx, &aot_mem) && ctx.pc == 0x089BA22Cu) goto L_089BA22C;
    return;
L_089BA22C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA344;
      }
      goto L_089BA234;
    }
L_089BA234:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089BA240u);
    ctx.gpr[5] = (0u | 25u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089BA240u) goto L_089BA240;
    return;
L_089BA240:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA250;
      }
      goto L_089BA248;
    }
L_089BA248:
    ctx.gpr[31] = (0x089BA250u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 347u, 0x089ADDC8u>(ctx, &aot_mem) && ctx.pc == 0x089BA250u) goto L_089BA250;
    return;
L_089BA250:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA344;
      }
      goto L_089BA258;
    }
L_089BA258:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089BA264u);
    ctx.gpr[5] = (0u | 57u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089BA264u) goto L_089BA264;
    return;
L_089BA264:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA27C;
      }
      goto L_089BA270;
    }
L_089BA270:
    ctx.gpr[5] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089BA27C;
L_089BA27C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA344;
      }
      goto L_089BA284;
    }
L_089BA284:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089BA290u);
    ctx.gpr[5] = (0u | 157u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089BA290u) goto L_089BA290;
    return;
L_089BA290:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA2A8;
      }
      goto L_089BA29C;
    }
L_089BA29C:
    ctx.gpr[5] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089BA2A8;
L_089BA2A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA344;
      }
      goto L_089BA2B0;
    }
L_089BA2B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089BA2BCu);
    ctx.gpr[5] = (0u | 206u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089BA2BCu) goto L_089BA2BC;
    return;
L_089BA2BC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA2D4;
      }
      goto L_089BA2C8;
    }
L_089BA2C8:
    ctx.gpr[5] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089BA2D4;
L_089BA2D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA344;
      }
      goto L_089BA2DC;
    }
L_089BA2DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089BA2E8u);
    ctx.gpr[5] = (0u | 240u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089BA2E8u) goto L_089BA2E8;
    return;
L_089BA2E8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA300;
      }
      goto L_089BA2F4;
    }
L_089BA2F4:
    ctx.gpr[5] = (49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089BA300;
L_089BA300:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA344;
      }
      goto L_089BA308;
    }
L_089BA308:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089BA314u);
    ctx.gpr[5] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 336u, 0x08865854u>(ctx, &aot_mem) && ctx.pc == 0x089BA314u) goto L_089BA314;
    return;
L_089BA314:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA33C;
      }
      goto L_089BA320;
    }
L_089BA320:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17908));
    ctx.gpr[31] = (0x089BA334u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 101u, 0x0899CDCCu>(ctx, &aot_mem) && ctx.pc == 0x089BA334u) goto L_089BA334;
    return;
L_089BA334:
    ctx.gpr[31] = (0x089BA33Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 872u, 0x088B3F18u>(ctx, &aot_mem) && ctx.pc == 0x089BA33Cu) goto L_089BA33C;
    return;
L_089BA33C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA344;
      }
      goto L_089BA344;
    }
L_089BA344:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(864), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BA35C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[7] & 255u);
    ctx.gpr[20] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x089BA3A4u);
    ctx.gpr[21] = (0u | 169u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x089BA3A4u) goto L_089BA3A4;
    return;
L_089BA3A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA3C4;
      }
      goto L_089BA3AC;
    }
L_089BA3AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    ctx.gpr[5] = (0u | 29u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BA3CC;
      }
      goto L_089BA3BC;
    }
L_089BA3BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA3D4;
      }
      goto L_089BA3C4;
    }
L_089BA3C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB4F0;
      }
      goto L_089BA3CC;
    }
L_089BA3CC:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BA3E4;
      }
      goto L_089BA3D4;
    }
L_089BA3D4:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    ctx.gpr[22] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089BA3EC;
      }
      goto L_089BA3DC;
    }
L_089BA3DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA3F8;
      }
      goto L_089BA3E4;
    }
L_089BA3E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB4F0;
      }
      goto L_089BA3EC;
    }
L_089BA3EC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x089BA3F8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 768u, 0x089A3230u>(ctx, &aot_mem) && ctx.pc == 0x089BA3F8u) goto L_089BA3F8;
    return;
L_089BA3F8:
    ctx.gpr[4] = (ctx.gpr[22] < static_cast<std::uint32_t>(85) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB4BC;
      }
      goto L_089BA404;
    }
L_089BA404:
    ctx.gpr[22] = (ctx.gpr[22] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[22]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-16808)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BA41C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(500));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[5]);
    ctx.gpr[31] = (0x089BA438u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x089BA438u) goto L_089BA438;
    return;
L_089BA438:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BA440;
    }
L_089BA440:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x089BA46Cu);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089BA46Cu) goto L_089BA46C;
    return;
L_089BA46C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BA474;
    }
L_089BA474:
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089BA48Cu);
    ctx.gpr[6] = (0u | 149u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089BA48Cu) goto L_089BA48C;
    return;
L_089BA48C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[21] = (2230u << 16u);
      if (branch_taken) {
          goto L_089BA4F8;
      }
      goto L_089BA494;
    }
L_089BA494:
    ctx.gpr[31] = (0x089BA49Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089BA49Cu) goto L_089BA49C;
    return;
L_089BA49C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28844)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28848)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089BA4B4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x089BA4B4u) goto L_089BA4B4;
    return;
L_089BA4B4:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-28740)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-28744)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089BA508;
      }
      goto L_089BA4F8;
    }
L_089BA4F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
    goto L_089BA508;
L_089BA508:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BA510;
    }
L_089BA510:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BA518;
    }
L_089BA518:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BA520;
    }
L_089BA520:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BA528;
    }
L_089BA528:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BA530;
    }
L_089BA530:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3500));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x089BA564u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089BA564u) goto L_089BA564;
    return;
L_089BA564:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BA56C;
    }
L_089BA56C:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x089BA5A4u);
    ctx.gpr[6] = (0u | 38u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089BA5A4u) goto L_089BA5A4;
    return;
L_089BA5A4:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 8u);
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (2202u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BA5D4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12848));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 48u, 0x088B43F4u>(ctx, &aot_mem) && ctx.pc == 0x089BA5D4u) goto L_089BA5D4;
    return;
L_089BA5D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BA620;
      }
      goto L_089BA5E4;
    }
L_089BA5E4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BA620;
      }
      goto L_089BA5F4;
    }
L_089BA5F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 24u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BA620;
      }
      goto L_089BA604;
    }
L_089BA604:
    ctx.gpr[31] = (0x089BA60Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 471u, 0x088868D0u>(ctx, &aot_mem) && ctx.pc == 0x089BA60Cu) goto L_089BA60C;
    return;
L_089BA60C:
    ctx.gpr[31] = (0x089BA614u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x089BA614u) goto L_089BA614;
    return;
L_089BA614:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1796), ctx.gpr[4]);
    goto L_089BA620;
L_089BA620:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BA628;
    }
L_089BA628:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x089BA65Cu);
    ctx.gpr[6] = (0u | 150u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089BA65Cu) goto L_089BA65C;
    return;
L_089BA65C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (2202u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BA674u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12848));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 47u, 0x088B43E0u>(ctx, &aot_mem) && ctx.pc == 0x089BA674u) goto L_089BA674;
    return;
L_089BA674:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BA67C;
    }
L_089BA67C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x089BA6B0u);
    ctx.gpr[6] = (0u | 38u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089BA6B0u) goto L_089BA6B0;
    return;
L_089BA6B0:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (2202u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BA6C8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12848));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 47u, 0x088B43E0u>(ctx, &aot_mem) && ctx.pc == 0x089BA6C8u) goto L_089BA6C8;
    return;
L_089BA6C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BA6D0;
    }
L_089BA6D0:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BA6E0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x089BA6E0u) goto L_089BA6E0;
    return;
L_089BA6E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089BA6F8u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BA6F8u) goto L_089BA6F8;
    return;
L_089BA6F8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[21] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x089BA72Cu);
    ctx.gpr[6] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089BA72Cu) goto L_089BA72C;
    return;
L_089BA72C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BA774;
      }
      goto L_089BA73C;
    }
L_089BA73C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089BA774;
      }
      goto L_089BA748;
    }
L_089BA748:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 24u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BA774;
      }
      goto L_089BA758;
    }
L_089BA758:
    ctx.gpr[31] = (0x089BA760u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 471u, 0x088868D0u>(ctx, &aot_mem) && ctx.pc == 0x089BA760u) goto L_089BA760;
    return;
L_089BA760:
    ctx.gpr[31] = (0x089BA768u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x089BA768u) goto L_089BA768;
    return;
L_089BA768:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1796), ctx.gpr[4]);
    goto L_089BA774;
L_089BA774:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BA77C;
    }
L_089BA77C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BA788u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x089BA788u) goto L_089BA788;
    return;
L_089BA788:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089BA7A0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BA7A0u) goto L_089BA7A0;
    return;
L_089BA7A0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x089BA7D4u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089BA7D4u) goto L_089BA7D4;
    return;
L_089BA7D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BA7DC;
    }
L_089BA7DC:
    ctx.gpr[6] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[20] = (2202u << 16u);
    ctx.gpr[5] = (0u | 169u);
    ctx.gpr[21] = (0u | 158u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(12848));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (2230u << 16u);
      if (branch_taken) {
          goto L_089BA824;
      }
      goto L_089BA804;
    }
L_089BA804:
    ctx.gpr[6] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[20] = (2202u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 169u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(12848));
    ctx.gpr[6] = (2230u << 16u);
    goto L_089BA824;
L_089BA824:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BA830;
      }
      goto L_089BA82C;
    }
L_089BA82C:
    ctx.gpr[21] = (0u | 157u);
    goto L_089BA830;
L_089BA830:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA858;
      }
      goto L_089BA838;
    }
L_089BA838:
    ctx.gpr[6] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[20] = (2202u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 169u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(12848));
    ctx.gpr[6] = (2230u << 16u);
    goto L_089BA858;
L_089BA858:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BA864;
      }
      goto L_089BA860;
    }
L_089BA860:
    ctx.gpr[21] = (0u | 158u);
    goto L_089BA864;
L_089BA864:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7868)));
      if (branch_taken) {
          goto L_089BA880;
      }
      goto L_089BA870;
    }
L_089BA870:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089BA888;
      }
      goto L_089BA880;
    }
L_089BA880:
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(3000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[5]);
    goto L_089BA888;
L_089BA888:
    ctx.gpr[18] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089BA89Cu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089BA89Cu) goto L_089BA89C;
    return;
L_089BA89C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089BA8B0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 48u, 0x088B43F4u>(ctx, &aot_mem) && ctx.pc == 0x089BA8B0u) goto L_089BA8B0;
    return;
L_089BA8B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BA8B8;
    }
L_089BA8B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[22] = (2202u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 169u);
    ctx.gpr[21] = (0u | 153u);
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7868)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(12848));
      if (branch_taken) {
          goto L_089BA908;
      }
      goto L_089BA8E4;
    }
L_089BA8E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[22] = (2202u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 169u);
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(12848));
    goto L_089BA908;
L_089BA908:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BA914;
      }
      goto L_089BA910;
    }
L_089BA910:
    ctx.gpr[21] = (0u | 12u);
    goto L_089BA914;
L_089BA914:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA940;
      }
      goto L_089BA91C;
    }
L_089BA91C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[22] = (2202u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 169u);
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(12848));
    goto L_089BA940;
L_089BA940:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BA94C;
      }
      goto L_089BA948;
    }
L_089BA948:
    ctx.gpr[21] = (0u | 11u);
    goto L_089BA94C;
L_089BA94C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA964;
      }
      goto L_089BA954;
    }
L_089BA954:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089BA96C;
      }
      goto L_089BA964;
    }
L_089BA964:
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(3000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[5]);
    goto L_089BA96C;
L_089BA96C:
    ctx.gpr[18] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089BA97Cu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089BA97Cu) goto L_089BA97C;
    return;
L_089BA97C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 16u);
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x089BA9B4u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 48u, 0x088B43F4u>(ctx, &aot_mem) && ctx.pc == 0x089BA9B4u) goto L_089BA9B4;
    return;
L_089BA9B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BA9BC;
    }
L_089BA9BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BA9C8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x089BA9C8u) goto L_089BA9C8;
    return;
L_089BA9C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089BA9E0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BA9E0u) goto L_089BA9E0;
    return;
L_089BA9E0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2500));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x089BAA14u);
    ctx.gpr[6] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089BAA14u) goto L_089BAA14;
    return;
L_089BAA14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BAA1C;
    }
L_089BAA1C:
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089BAA34u);
    ctx.gpr[6] = (0u | 163u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089BAA34u) goto L_089BAA34;
    return;
L_089BAA34:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (2202u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BAA4Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12848));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 47u, 0x088B43E0u>(ctx, &aot_mem) && ctx.pc == 0x089BAA4Cu) goto L_089BAA4C;
    return;
L_089BAA4C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31072));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BAA68;
    }
L_089BAA68:
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089BAA80u);
    ctx.gpr[6] = (0u | 164u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089BAA80u) goto L_089BAA80;
    return;
L_089BAA80:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (2202u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BAA98u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12848));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 47u, 0x088B43E0u>(ctx, &aot_mem) && ctx.pc == 0x089BAA98u) goto L_089BAA98;
    return;
L_089BAA98:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31072));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BAAB4;
    }
L_089BAAB4:
    ctx.gpr[7] = (17152u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089BAACCu);
    ctx.gpr[6] = (0u | 165u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089BAACCu) goto L_089BAACC;
    return;
L_089BAACC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[21] = (2230u << 16u);
      if (branch_taken) {
          goto L_089BAAEC;
      }
      goto L_089BAAD8;
    }
L_089BAAD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089BAB6C;
      }
      goto L_089BAAEC;
    }
L_089BAAEC:
    ctx.gpr[4] = (18115u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20480u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (18154u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 24576u);
    ctx.gpr[31] = (0x089BAB08u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089BAB08u) goto L_089BAB08;
    return;
L_089BAB08:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
      if (branch_taken) {
          goto L_089BAB38;
      }
      goto L_089BAB2C;
    }
L_089BAB2C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    goto L_089BAB38;
L_089BAB38:
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
        goto L_089BAB58;
    }
    goto L_089BAB4C;
L_089BAB4C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BAB68;
      }
      goto L_089BAB58;
    }
L_089BAB58:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_089BAB68;
L_089BAB68:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
    goto L_089BAB6C;
L_089BAB6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BAB74;
    }
L_089BAB74:
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089BAB8Cu);
    ctx.gpr[6] = (0u | 167u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089BAB8Cu) goto L_089BAB8C;
    return;
L_089BAB8C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (2202u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BABA4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12848));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 47u, 0x088B43E0u>(ctx, &aot_mem) && ctx.pc == 0x089BABA4u) goto L_089BABA4;
    return;
L_089BABA4:
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
      if (branch_taken) {
          goto L_089BABC0;
      }
      goto L_089BABB0;
    }
L_089BABB0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089BABD0;
      }
      goto L_089BABC0;
    }
L_089BABC0:
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31072));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
    goto L_089BABD0;
L_089BABD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BABD8;
    }
L_089BABD8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[5] = (0u | 26u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x089BABF8u);
    ctx.gpr[6] = (0u | 206u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089BABF8u) goto L_089BABF8;
    return;
L_089BABF8:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (2202u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BAC10u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12944));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 48u, 0x088B43F4u>(ctx, &aot_mem) && ctx.pc == 0x089BAC10u) goto L_089BAC10;
    return;
L_089BAC10:
    ctx.gpr[4] = (18243u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20480u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (18371u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20480u);
    ctx.gpr[31] = (0x089BAC2Cu);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089BAC2Cu) goto L_089BAC2C;
    return;
L_089BAC2C:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = ctx.fpr[20] + ctx.fpr[13];
      if (branch_taken) {
          goto L_089BAC60;
      }
      goto L_089BAC54;
    }
L_089BAC54:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    goto L_089BAC60;
L_089BAC60:
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
        goto L_089BAC80;
    }
    goto L_089BAC74;
L_089BAC74:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BAC90;
      }
      goto L_089BAC80;
    }
L_089BAC80:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_089BAC90;
L_089BAC90:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BAC98;
    }
L_089BAC98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BACA0;
    }
L_089BACA0:
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 30u);
    ctx.gpr[31] = (0x089BACB8u);
    ctx.gpr[6] = (0u | 206u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089BACB8u) goto L_089BACB8;
    return;
L_089BACB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BACC0;
    }
L_089BACC0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 25u);
    ctx.gpr[31] = (0x089BACD4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 98u, 0x089A0734u>(ctx, &aot_mem) && ctx.pc == 0x089BACD4u) goto L_089BACD4;
    return;
L_089BACD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BACDC;
    }
L_089BACDC:
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089BACF4u);
    ctx.gpr[6] = (0u | 57u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089BACF4u) goto L_089BACF4;
    return;
L_089BACF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BAD10;
    }
L_089BAD10:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x089BAD30u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x089BAD30u) goto L_089BAD30;
    return;
L_089BAD30:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BAE2C;
      }
      goto L_089BAD3C;
    }
L_089BAD3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[5] & 8192u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_089BAD68;
      }
      goto L_089BAD54;
    }
L_089BAD54:
    ctx.gpr[6] = (8u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    goto L_089BAD68;
L_089BAD68:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BAE2C;
      }
      goto L_089BAD70;
    }
L_089BAD70:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[20] = (0u | 202u);
      if (branch_taken) {
          goto L_089BAD9C;
      }
      goto L_089BAD80;
    }
L_089BAD80:
    ctx.gpr[6] = (8u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[20] = (0u | 205u);
        goto L_089BAD9C;
    }
    goto L_089BAD9C;
L_089BAD9C:
    ctx.gpr[31] = (0x089BADA4u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089BADA4u) goto L_089BADA4;
    return;
L_089BADA4:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089BAE2C;
      }
      goto L_089BADB0;
    }
L_089BADB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (0u | 202u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.gpr[7] = (ctx.gpr[6] & 8192u);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[18] = (2202u << 16u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12848));
      if (branch_taken) {
          goto L_089BAE00;
      }
      goto L_089BADE4;
    }
L_089BADE4:
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (0u | 205u);
        goto L_089BAE00;
    }
    goto L_089BAE00;
L_089BAE00:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089BAE18u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089BAE18u) goto L_089BAE18;
    return;
L_089BAE18:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089BAE2Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 48u, 0x088B43F4u>(ctx, &aot_mem) && ctx.pc == 0x089BAE2Cu) goto L_089BAE2C;
    return;
L_089BAE2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BAE34;
    }
L_089BAE34:
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089BAE4Cu);
    ctx.gpr[6] = (0u | 157u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089BAE4Cu) goto L_089BAE4C;
    return;
L_089BAE4C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (2202u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BAE80u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12848));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 48u, 0x088B43F4u>(ctx, &aot_mem) && ctx.pc == 0x089BAE80u) goto L_089BAE80;
    return;
L_089BAE80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BAE98;
    }
L_089BAE98:
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 60u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089BAEB4u);
    ctx.gpr[6] = (0u | 229u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089BAEB4u) goto L_089BAEB4;
    return;
L_089BAEB4:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BAEC0;
    }
L_089BAEC0:
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 60u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089BAEDCu);
    ctx.gpr[6] = (0u | 230u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089BAEDCu) goto L_089BAEDC;
    return;
L_089BAEDC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BAEE8;
    }
L_089BAEE8:
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(-39));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(232));
    ctx.gpr[31] = (0x089BAF08u);
    ctx.gpr[5] = (0u | 61u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089BAF08u) goto L_089BAF08;
    return;
L_089BAF08:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BAF14;
    }
L_089BAF14:
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 62u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089BAF30u);
    ctx.gpr[6] = (0u | 239u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089BAF30u) goto L_089BAF30;
    return;
L_089BAF30:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BAF3C;
    }
L_089BAF3C:
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 63u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089BAF58u);
    ctx.gpr[6] = (0u | 240u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089BAF58u) goto L_089BAF58;
    return;
L_089BAF58:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BAF64;
    }
L_089BAF64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 64u);
    ctx.gpr[31] = (0x089BAF74u);
    ctx.gpr[6] = (0u | 241u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089BAF74u) goto L_089BAF74;
    return;
L_089BAF74:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BAF88;
    }
L_089BAF88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 64u);
    ctx.gpr[31] = (0x089BAF98u);
    ctx.gpr[6] = (0u | 242u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089BAF98u) goto L_089BAF98;
    return;
L_089BAF98:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BAFAC;
    }
L_089BAFAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 65u);
    ctx.gpr[31] = (0x089BAFBCu);
    ctx.gpr[6] = (0u | 243u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089BAFBCu) goto L_089BAFBC;
    return;
L_089BAFBC:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BAFD0;
    }
L_089BAFD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 66u);
    ctx.gpr[31] = (0x089BAFE0u);
    ctx.gpr[6] = (0u | 244u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089BAFE0u) goto L_089BAFE0;
    return;
L_089BAFE0:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BAFF4;
    }
L_089BAFF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 66u);
    ctx.gpr[31] = (0x089BB004u);
    ctx.gpr[6] = (0u | 245u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB004u) goto L_089BB004;
    return;
L_089BB004:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BB018;
    }
L_089BB018:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 67u);
    ctx.gpr[31] = (0x089BB028u);
    ctx.gpr[6] = (0u | 246u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB028u) goto L_089BB028;
    return;
L_089BB028:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BB03C;
    }
L_089BB03C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 68u);
    ctx.gpr[31] = (0x089BB04Cu);
    ctx.gpr[6] = (0u | 248u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB04Cu) goto L_089BB04C;
    return;
L_089BB04C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BB060;
    }
L_089BB060:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 69u);
    ctx.gpr[31] = (0x089BB070u);
    ctx.gpr[6] = (0u | 249u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB070u) goto L_089BB070;
    return;
L_089BB070:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BB084;
    }
L_089BB084:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 69u);
    ctx.gpr[31] = (0x089BB094u);
    ctx.gpr[6] = (0u | 250u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB094u) goto L_089BB094;
    return;
L_089BB094:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BB0A8;
    }
L_089BB0A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 69u);
    ctx.gpr[31] = (0x089BB0B8u);
    ctx.gpr[6] = (0u | 251u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB0B8u) goto L_089BB0B8;
    return;
L_089BB0B8:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BB0CC;
    }
L_089BB0CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 69u);
    ctx.gpr[31] = (0x089BB0DCu);
    ctx.gpr[6] = (0u | 252u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB0DCu) goto L_089BB0DC;
    return;
L_089BB0DC:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BB0F0;
    }
L_089BB0F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 70u);
    ctx.gpr[31] = (0x089BB100u);
    ctx.gpr[6] = (0u | 253u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB100u) goto L_089BB100;
    return;
L_089BB100:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BB114;
    }
L_089BB114:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 70u);
    ctx.gpr[31] = (0x089BB124u);
    ctx.gpr[6] = (0u | 254u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB124u) goto L_089BB124;
    return;
L_089BB124:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BB138;
    }
L_089BB138:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 70u);
    ctx.gpr[31] = (0x089BB148u);
    ctx.gpr[6] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB148u) goto L_089BB148;
    return;
L_089BB148:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BB15C;
    }
L_089BB15C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 71u);
    ctx.gpr[31] = (0x089BB16Cu);
    ctx.gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB16Cu) goto L_089BB16C;
    return;
L_089BB16C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BB180;
    }
L_089BB180:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 72u);
    ctx.gpr[31] = (0x089BB190u);
    ctx.gpr[6] = (0u | 257u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB190u) goto L_089BB190;
    return;
L_089BB190:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BB1A4;
    }
L_089BB1A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 72u);
    ctx.gpr[31] = (0x089BB1B4u);
    ctx.gpr[6] = (0u | 258u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB1B4u) goto L_089BB1B4;
    return;
L_089BB1B4:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BB1C8;
    }
L_089BB1C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 73u);
    ctx.gpr[31] = (0x089BB1D8u);
    ctx.gpr[6] = (0u | 259u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB1D8u) goto L_089BB1D8;
    return;
L_089BB1D8:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BB1EC;
    }
L_089BB1EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 73u);
    ctx.gpr[31] = (0x089BB1FCu);
    ctx.gpr[6] = (0u | 260u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB1FCu) goto L_089BB1FC;
    return;
L_089BB1FC:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BB210;
    }
L_089BB210:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 74u);
    ctx.gpr[31] = (0x089BB220u);
    ctx.gpr[6] = (0u | 262u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB220u) goto L_089BB220;
    return;
L_089BB220:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BB234;
    }
L_089BB234:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 74u);
    ctx.gpr[31] = (0x089BB244u);
    ctx.gpr[6] = (0u | 263u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB244u) goto L_089BB244;
    return;
L_089BB244:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BB258;
    }
L_089BB258:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 75u);
    ctx.gpr[31] = (0x089BB268u);
    ctx.gpr[6] = (0u | 264u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB268u) goto L_089BB268;
    return;
L_089BB268:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BB27C;
    }
L_089BB27C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 75u);
    ctx.gpr[31] = (0x089BB28Cu);
    ctx.gpr[6] = (0u | 265u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB28Cu) goto L_089BB28C;
    return;
L_089BB28C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BB2A0;
    }
L_089BB2A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 76u);
    ctx.gpr[31] = (0x089BB2B0u);
    ctx.gpr[6] = (0u | 266u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB2B0u) goto L_089BB2B0;
    return;
L_089BB2B0:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BB2C4;
    }
L_089BB2C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 77u);
    ctx.gpr[31] = (0x089BB2D4u);
    ctx.gpr[6] = (0u | 267u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB2D4u) goto L_089BB2D4;
    return;
L_089BB2D4:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BB2E8;
    }
L_089BB2E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 78u);
    ctx.gpr[31] = (0x089BB2F8u);
    ctx.gpr[6] = (0u | 268u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB2F8u) goto L_089BB2F8;
    return;
L_089BB2F8:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BB30C;
    }
L_089BB30C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 78u);
    ctx.gpr[31] = (0x089BB31Cu);
    ctx.gpr[6] = (0u | 269u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB31Cu) goto L_089BB31C;
    return;
L_089BB31C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BB330;
    }
L_089BB330:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 79u);
    ctx.gpr[31] = (0x089BB340u);
    ctx.gpr[6] = (0u | 270u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB340u) goto L_089BB340;
    return;
L_089BB340:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BB354;
    }
L_089BB354:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 79u);
    ctx.gpr[31] = (0x089BB364u);
    ctx.gpr[6] = (0u | 271u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB364u) goto L_089BB364;
    return;
L_089BB364:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BB378;
    }
L_089BB378:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 79u);
    ctx.gpr[31] = (0x089BB388u);
    ctx.gpr[6] = (0u | 272u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB388u) goto L_089BB388;
    return;
L_089BB388:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BB39C;
    }
L_089BB39C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 80u);
    ctx.gpr[31] = (0x089BB3ACu);
    ctx.gpr[6] = (0u | 273u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB3ACu) goto L_089BB3AC;
    return;
L_089BB3AC:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BB3C0;
    }
L_089BB3C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 81u);
    ctx.gpr[31] = (0x089BB3D0u);
    ctx.gpr[6] = (0u | 274u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB3D0u) goto L_089BB3D0;
    return;
L_089BB3D0:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BB3E4;
    }
L_089BB3E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 81u);
    ctx.gpr[31] = (0x089BB3F4u);
    ctx.gpr[6] = (0u | 275u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB3F4u) goto L_089BB3F4;
    return;
L_089BB3F4:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BB408;
    }
L_089BB408:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 81u);
    ctx.gpr[31] = (0x089BB418u);
    ctx.gpr[6] = (0u | 276u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB418u) goto L_089BB418;
    return;
L_089BB418:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BB42C;
    }
L_089BB42C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 82u);
    ctx.gpr[31] = (0x089BB43Cu);
    ctx.gpr[6] = (0u | 277u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB43Cu) goto L_089BB43C;
    return;
L_089BB43C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BB450;
    }
L_089BB450:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 67u);
    ctx.gpr[31] = (0x089BB460u);
    ctx.gpr[6] = (0u | 247u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB460u) goto L_089BB460;
    return;
L_089BB460:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BB474;
    }
L_089BB474:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 73u);
    ctx.gpr[31] = (0x089BB484u);
    ctx.gpr[6] = (0u | 261u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB484u) goto L_089BB484;
    return;
L_089BB484:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BB498;
    }
L_089BB498:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 83u);
    ctx.gpr[31] = (0x089BB4A8u);
    ctx.gpr[6] = (0u | 278u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB4A8u) goto L_089BB4A8;
    return;
L_089BB4A8:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BB4BC;
    }
L_089BB4BC:
    ctx.gpr[31] = (0x089BB4C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089B9FF8;
L_089BB4C4:
    ctx.gpr[31] = (0x089BB4CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 879u, 0x089A3B74u>(ctx, &aot_mem) && ctx.pc == 0x089BB4CCu) goto L_089BB4CC;
    return;
L_089BB4CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB4F0;
      }
      goto L_089BB4D4;
    }
L_089BB4D4:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(864), ctx.gpr[17]);
      if (branch_taken) {
          goto L_089BB4F0;
      }
      goto L_089BB4DC;
    }
L_089BB4DC:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB4F0;
      }
      goto L_089BB4E4;
    }
L_089BB4E4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_089BB4F0;
L_089BB4F0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BB520:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-288));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[18]);
    ctx.gpr[17] = (0u | 169u);
    ctx.gpr[18] = (0u | 54u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[18];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089BB59C;
      }
      goto L_089BB560;
    }
L_089BB560:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BB59C;
      }
      goto L_089BB570;
    }
L_089BB570:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(35) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 110u, 0x089BC760u>(ctx, &aot_mem); return;
      }
      goto L_089BB584;
    }
L_089BB584:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-16464)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BB59C:
    ctx.gpr[31] = (0x089BB5A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089B9FF8;
L_089BB5A4:
    ctx.gpr[31] = (0x089BB5ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 879u, 0x089A3B74u>(ctx, &aot_mem) && ctx.pc == 0x089BB5ACu) goto L_089BB5AC;
    return;
L_089BB5AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 112u, 0x089BC774u>(ctx, &aot_mem); return;
      }
      goto L_089BB5B4;
    }
L_089BB5B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB5F0;
      }
      goto L_089BB5CC;
    }
L_089BB5CC:
    ctx.gpr[31] = (0x089BB5D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 387u, 0x08865B20u>(ctx, &aot_mem) && ctx.pc == 0x089BB5D4u) goto L_089BB5D4;
    return;
L_089BB5D4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BB5F0;
      }
      goto L_089BB5DC;
    }
L_089BB5DC:
    ctx.gpr[31] = (0x089BB5E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089B9FF8;
L_089BB5E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BB5F0u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB5F0u) goto L_089BB5F0;
    return;
L_089BB5F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 110u, 0x089BC760u>(ctx, &aot_mem); return;
      }
      goto L_089BB5F8;
    }
L_089BB5F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB688;
      }
      goto L_089BB610;
    }
L_089BB610:
    ctx.gpr[31] = (0x089BB618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089BB618u) goto L_089BB618;
    return;
L_089BB618:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BB650;
      }
      goto L_089BB628;
    }
L_089BB628:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB650;
      }
      goto L_089BB634;
    }
L_089BB634:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089BB648u);
    ctx.gpr[7] = (0u | 0u);
    goto L_089BA35C;
L_089BB648:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB658;
      }
      goto L_089BB650;
    }
L_089BB650:
    ctx.gpr[31] = (0x089BB658u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089B9FF8;
L_089BB658:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089BB664u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089BB664u) goto L_089BB664;
    return;
L_089BB664:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB688;
      }
      goto L_089BB670;
    }
L_089BB670:
    ctx.gpr[5] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_089BB688;
L_089BB688:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 110u, 0x089BC760u>(ctx, &aot_mem); return;
      }
      goto L_089BB690;
    }
L_089BB690:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB6E0;
      }
      goto L_089BB6A8;
    }
L_089BB6A8:
    ctx.gpr[31] = (0x089BB6B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089B9FF8;
L_089BB6B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089BB6BCu);
    ctx.gpr[5] = (0u | 149u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089BB6BCu) goto L_089BB6BC;
    return;
L_089BB6BC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB6E0;
      }
      goto L_089BB6C8;
    }
L_089BB6C8:
    ctx.gpr[5] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_089BB6E0;
L_089BB6E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 110u, 0x089BC760u>(ctx, &aot_mem); return;
      }
      goto L_089BB6E8;
    }
L_089BB6E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 110u, 0x089BC760u>(ctx, &aot_mem); return;
      }
      goto L_089BB6F0;
    }
L_089BB6F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 110u, 0x089BC760u>(ctx, &aot_mem); return;
      }
      goto L_089BB6F8;
    }
L_089BB6F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 110u, 0x089BC760u>(ctx, &aot_mem); return;
      }
      goto L_089BB700;
    }
L_089BB700:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 110u, 0x089BC760u>(ctx, &aot_mem); return;
      }
      goto L_089BB708;
    }
L_089BB708:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB73C;
      }
      goto L_089BB720;
    }
L_089BB720:
    ctx.gpr[31] = (0x089BB728u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089B9FF8;
L_089BB728:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BB734u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB734u) goto L_089BB734;
    return;
L_089BB734:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB794;
      }
      goto L_089BB73C;
    }
L_089BB73C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(2500) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB794;
      }
      goto L_089BB754;
    }
L_089BB754:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(2001) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BB794;
      }
      goto L_089BB76C;
    }
L_089BB76C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-500));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x089BB794u);
    ctx.gpr[6] = (0u | 148u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089BB794u) goto L_089BB794;
    return;
L_089BB794:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 110u, 0x089BC760u>(ctx, &aot_mem); return;
      }
      goto L_089BB79C;
    }
L_089BB79C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB7C4;
      }
      goto L_089BB7B4;
    }
L_089BB7B4:
    ctx.gpr[31] = (0x089BB7BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089B9FF8;
L_089BB7BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB7E4;
      }
      goto L_089BB7C4;
    }
L_089BB7C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1408)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB7E4;
      }
      goto L_089BB7D8;
    }
L_089BB7D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2500));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1408), ctx.gpr[4]);
    goto L_089BB7E4;
L_089BB7E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 110u, 0x089BC760u>(ctx, &aot_mem); return;
      }
      goto L_089BB7EC;
    }
L_089BB7EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB838;
      }
      goto L_089BB804;
    }
L_089BB804:
    ctx.gpr[31] = (0x089BB80Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089B9FF8;
L_089BB80C:
    ctx.gpr[4] = (16457u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 30u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB838;
      }
      goto L_089BB830;
    }
L_089BB830:
    ctx.gpr[31] = (0x089BB838u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 210u, 0x088D5048u>(ctx, &aot_mem) && ctx.pc == 0x089BB838u) goto L_089BB838;
    return;
L_089BB838:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1408)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB858;
      }
      goto L_089BB84C;
    }
L_089BB84C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2500));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1408), ctx.gpr[4]);
    goto L_089BB858;
L_089BB858:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 110u, 0x089BC760u>(ctx, &aot_mem); return;
      }
      goto L_089BB860;
    }
L_089BB860:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB8D0;
      }
      goto L_089BB878;
    }
L_089BB878:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089BB884u);
    ctx.gpr[5] = (0u | 38u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089BB884u) goto L_089BB884;
    return;
L_089BB884:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB8C8;
      }
      goto L_089BB88C;
    }
L_089BB88C:
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089BB8A4u);
    ctx.gpr[6] = (0u | 148u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089BB8A4u) goto L_089BB8A4;
    return;
L_089BB8A4:
    ctx.gpr[5] = (2202u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BB8B8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12848));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 47u, 0x088B43E0u>(ctx, &aot_mem) && ctx.pc == 0x089BB8B8u) goto L_089BB8B8;
    return;
L_089BB8B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089BB8D0;
      }
      goto L_089BB8C8;
    }
L_089BB8C8:
    ctx.gpr[31] = (0x089BB8D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089B9FF8;
L_089BB8D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 110u, 0x089BC760u>(ctx, &aot_mem); return;
      }
      goto L_089BB8D8;
    }
L_089BB8D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB928;
      }
      goto L_089BB8F0;
    }
L_089BB8F0:
    ctx.gpr[31] = (0x089BB8F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089B9FF8;
L_089BB8F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089BB904u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089BB904u) goto L_089BB904;
    return;
L_089BB904:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB928;
      }
      goto L_089BB910;
    }
L_089BB910:
    ctx.gpr[5] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_089BB928;
L_089BB928:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 110u, 0x089BC760u>(ctx, &aot_mem); return;
      }
      goto L_089BB930;
    }
L_089BB930:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BBB44;
      }
      goto L_089BB948;
    }
L_089BB948:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089BB954u);
    ctx.gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089BB954u) goto L_089BB954;
    return;
L_089BB954:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[17] = (0u | 150u);
      if (branch_taken) {
          goto L_089BB970;
      }
      goto L_089BB960;
    }
L_089BB960:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089BB96Cu);
    ctx.gpr[5] = (0u | 150u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089BB96Cu) goto L_089BB96C;
    return;
L_089BB96C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_089BB970;
L_089BB970:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BB988;
      }
      goto L_089BB978;
    }
L_089BB978:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089BB984u);
    ctx.gpr[5] = (0u | 148u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089BB984u) goto L_089BB984;
    return;
L_089BB984:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_089BB988;
L_089BB988:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BB9A0;
      }
      goto L_089BB990;
    }
L_089BB990:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089BB99Cu);
    ctx.gpr[5] = (0u | 149u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089BB99Cu) goto L_089BB99C;
    return;
L_089BB99C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_089BB9A0;
L_089BB9A0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BBA10;
      }
      goto L_089BB9A8;
    }
L_089BB9A8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BB9EC;
      }
      goto L_089BB9C0;
    }
L_089BB9C0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (16512u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    ctx.gpr[31] = (0x089BB9E4u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089BB9E4u) goto L_089BB9E4;
    return;
L_089BB9E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BBA04;
      }
      goto L_089BB9EC;
    }
L_089BB9EC:
    ctx.gpr[4] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_089BBA04;
L_089BBA04:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(48))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089BBA34;
      }
      goto L_089BBA10;
    }
L_089BBA10:
    ctx.gpr[31] = (0x089BBA18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089BBA18u) goto L_089BBA18;
    return;
L_089BBA18:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BBA70;
      }
      goto L_089BBA2C;
    }
L_089BBA2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_089BBA88;
      }
      goto L_089BBA34;
    }
L_089BBA34:
    ctx.gpr[4] = (16457u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089BBA4Cu);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089BBA4Cu) goto L_089BBA4C;
    return;
L_089BBA4C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x089BBA58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089B9FF8;
L_089BBA58:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BBA64u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x089BBA64u) goto L_089BBA64;
    return;
L_089BBA64:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(856), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1824), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 112u, 0x089BC774u>(ctx, &aot_mem); return;
      }
      goto L_089BBA70;
    }
L_089BBA70:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089BBAB4;
      }
      goto L_089BBA78;
    }
L_089BBA78:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_089BBAA0;
      }
      goto L_089BBA80;
    }
L_089BBA80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 149u);
      if (branch_taken) {
          goto L_089BBAB4;
      }
      goto L_089BBA88;
    }
L_089BBA88:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_089BBAA8;
      }
      goto L_089BBA90;
    }
L_089BBA90:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BBAB0;
      }
      goto L_089BBA98;
    }
L_089BBA98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BBAB4;
      }
      goto L_089BBAA0;
    }
L_089BBAA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 9u);
      if (branch_taken) {
          goto L_089BBAB4;
      }
      goto L_089BBAA8;
    }
L_089BBAA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 148u);
      if (branch_taken) {
          goto L_089BBAB4;
      }
      goto L_089BBAB0;
    }
L_089BBAB0:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_089BBAB4;
L_089BBAB4:
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089BBACCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089BBACCu) goto L_089BBACC;
    return;
L_089BBACC:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089BBAE4;
      }
      goto L_089BBAD4;
    }
L_089BBAD4:
    ctx.gpr[5] = (2202u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BBAE4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12848));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 47u, 0x088B43E0u>(ctx, &aot_mem) && ctx.pc == 0x089BBAE4u) goto L_089BBAE4;
    return;
L_089BBAE4:
    ctx.gpr[31] = (0x089BBAECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089BBAECu) goto L_089BBAEC;
    return;
L_089BBAEC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28596)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28600)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089BBB04u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x089BBB04u) goto L_089BBB04;
    return;
L_089BBB04:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-28588)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-28592)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
    goto L_089BBB44;
L_089BBB44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 110u, 0x089BC760u>(ctx, &aot_mem); return;
      }
      goto L_089BBB4C;
    }
L_089BBB4C:
    ctx.gpr[4] = (0u | 169u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 157u);
      if (branch_taken) {
          goto L_089BBB5C;
      }
      goto L_089BBB58;
    }
L_089BBB58:
    ctx.gpr[4] = (0u | 169u);
    goto L_089BBB5C;
L_089BBB5C:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089BBB68;
      }
      goto L_089BBB64;
    }
L_089BBB64:
    ctx.gpr[17] = (0u | 158u);
    goto L_089BBB68;
L_089BBB68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089BBB74u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089BBB74u) goto L_089BBB74;
    return;
L_089BBB74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089BBBAC;
      }
      goto L_089BBB80;
    }
L_089BBB80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] >> 1u);
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
        goto L_089BBBB0;
    }
    goto L_089BBB9C;
L_089BBB9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1724)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BBBEC;
      }
      goto L_089BBBAC;
    }
L_089BBBAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    goto L_089BBBB0;
L_089BBBB0:
    ctx.gpr[6] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089BBBEC;
      }
      goto L_089BBBBC;
    }
L_089BBBBC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089BBBEC;
      }
      goto L_089BBBCC;
    }
L_089BBBCC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BBBEC;
      }
      goto L_089BBBE4;
    }
L_089BBBE4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BBE70;
      }
      goto L_089BBBEC;
    }
L_089BBBEC:
    ctx.gpr[31] = (0x089BBBF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089B9FF8;
L_089BBBF4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BBE38;
      }
      goto L_089BBC04;
    }
L_089BBC04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BBE38;
      }
      goto L_089BBC20;
    }
L_089BBC20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[18] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089BBE38;
      }
      goto L_089BBC30;
    }
L_089BBC30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BBE38;
      }
      goto L_089BBC40;
    }
L_089BBC40:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
      if (branch_taken) {
          goto L_089BBC84;
      }
      goto L_089BBC50;
    }
L_089BBC50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BBE38;
      }
      goto L_089BBC60;
    }
L_089BBC60:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BBC6Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 683u, 0x088877D0u>(ctx, &aot_mem) && ctx.pc == 0x089BBC6Cu) goto L_089BBC6C;
    return;
L_089BBC6C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 10000u);
    ctx.gpr[31] = (0x089BBC7Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 656u, 0x088875FCu>(ctx, &aot_mem) && ctx.pc == 0x089BBC7Cu) goto L_089BBC7C;
    return;
L_089BBC7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BBE38;
      }
      goto L_089BBC84;
    }
L_089BBC84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(37))))));
    ctx.gpr[6] = (0u | 100u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BBD08;
      }
      goto L_089BBCA8;
    }
L_089BBCA8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BBCB8u);
    ctx.gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x089BBCB8u) goto L_089BBCB8;
    return;
L_089BBCB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089BBCD4;
      }
      goto L_089BBCC4;
    }
L_089BBCC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BBCE8;
      }
      goto L_089BBCD4;
    }
L_089BBCD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
    goto L_089BBCE8;
L_089BBCE8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BBCF4u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x089BBCF4u) goto L_089BBCF4;
    return;
L_089BBCF4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BBD00u);
    ctx.gpr[5] = (0u | 143u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089BBD00u) goto L_089BBD00;
    return;
L_089BBD00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BBE38;
      }
      goto L_089BBD08;
    }
L_089BBD08:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[31] = (0x089BBD24u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 138u, 0x08850D9Cu>(ctx, &aot_mem) && ctx.pc == 0x089BBD24u) goto L_089BBD24;
    return;
L_089BBD24:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BBD50;
      }
      goto L_089BBD2C;
    }
L_089BBD2C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BBD3Cu);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x089BBD3Cu) goto L_089BBD3C;
    return;
L_089BBD3C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BBD48u);
    ctx.gpr[5] = (0u | 20000u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 530u, 0x08886B78u>(ctx, &aot_mem) && ctx.pc == 0x089BBD48u) goto L_089BBD48;
    return;
L_089BBD48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BBE38;
      }
      goto L_089BBD50;
    }
L_089BBD50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BBDE8;
      }
      goto L_089BBD64;
    }
L_089BBD64:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BBD74u);
    ctx.gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x089BBD74u) goto L_089BBD74;
    return;
L_089BBD74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[18];
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_089BBD90;
      }
      goto L_089BBD80;
    }
L_089BBD80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089BBDA4;
      }
      goto L_089BBD90;
    }
L_089BBD90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (8192u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
    goto L_089BBDA4;
L_089BBDA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089BBDBC;
      }
      goto L_089BBDB0;
    }
L_089BBDB0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BBDBCu);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x089BBDBCu) goto L_089BBDBC;
    return;
L_089BBDBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BBE38;
      }
      goto L_089BBDCC;
    }
L_089BBDCC:
    ctx.gpr[31] = (0x089BBDD4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 1164u, 0x08893EE8u>(ctx, &aot_mem) && ctx.pc == 0x089BBDD4u) goto L_089BBDD4;
    return;
L_089BBDD4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BBDE0u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x089BBDE0u) goto L_089BBDE0;
    return;
L_089BBDE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BBE38;
      }
      goto L_089BBDE8;
    }
L_089BBDE8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BBDF4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 881u, 0x08892EE0u>(ctx, &aot_mem) && ctx.pc == 0x089BBDF4u) goto L_089BBDF4;
    return;
L_089BBDF4:
    ctx.gpr[31] = (0x089BBDFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089BBDFCu) goto L_089BBDFC;
    return;
L_089BBDFC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28716)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28720)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089BBE14u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x089BBE14u) goto L_089BBE14;
    return;
L_089BBE14:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x089BBE38u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 270u, 0x089A13B4u>(ctx, &aot_mem) && ctx.pc == 0x089BBE38u) goto L_089BBE38;
    return;
L_089BBE38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089BBE44u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089BBE44u) goto L_089BBE44;
    return;
L_089BBE44:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BBE68;
      }
      goto L_089BBE50;
    }
L_089BBE50:
    ctx.gpr[4] = (49280u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_089BBE68;
L_089BBE68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 110u, 0x089BC760u>(ctx, &aot_mem); return;
      }
      goto L_089BBE70;
    }
L_089BBE70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BBE84;
      }
      goto L_089BBE7C;
    }
L_089BBE7C:
    ctx.gpr[31] = (0x089BBE84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 795u, 0x0899FF58u>(ctx, &aot_mem) && ctx.pc == 0x089BBE84u) goto L_089BBE84;
    return;
L_089BBE84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 110u, 0x089BC760u>(ctx, &aot_mem); return;
      }
      goto L_089BBE8C;
    }
L_089BBE8C:
    ctx.gpr[5] = (0u | 169u);
    ctx.gpr[17] = (0u | 158u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089BBEA4;
      }
      goto L_089BBE9C;
    }
L_089BBE9C:
    ctx.gpr[5] = (0u | 169u);
    ctx.gpr[4] = (2230u << 16u);
    goto L_089BBEA4;
L_089BBEA4:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BBEB0;
      }
      goto L_089BBEAC;
    }
L_089BBEAC:
    ctx.gpr[17] = (0u | 153u);
    goto L_089BBEB0;
L_089BBEB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BBEC0;
      }
      goto L_089BBEB8;
    }
L_089BBEB8:
    ctx.gpr[5] = (0u | 169u);
    ctx.gpr[4] = (2230u << 16u);
    goto L_089BBEC0;
L_089BBEC0:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BBECC;
      }
      goto L_089BBEC8;
    }
L_089BBEC8:
    ctx.gpr[17] = (0u | 12u);
    goto L_089BBECC;
L_089BBECC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BBEDC;
      }
      goto L_089BBED4;
    }
L_089BBED4:
    ctx.gpr[5] = (0u | 169u);
    ctx.gpr[4] = (2230u << 16u);
    goto L_089BBEDC;
L_089BBEDC:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BBEE8;
      }
      goto L_089BBEE4;
    }
L_089BBEE4:
    ctx.gpr[17] = (0u | 11u);
    goto L_089BBEE8;
L_089BBEE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BBF78;
      }
      goto L_089BBEFC;
    }
L_089BBEFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089BBF08u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089BBF08u) goto L_089BBF08;
    return;
L_089BBF08:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BBF2C;
      }
      goto L_089BBF14;
    }
L_089BBF14:
    ctx.gpr[4] = (49280u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_089BBF2C;
L_089BBF2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BBF68;
      }
      goto L_089BBF38;
    }
L_089BBF38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089BBF68;
      }
      goto L_089BBF44;
    }
L_089BBF44:
    ctx.gpr[31] = (0x089BBF4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A295CCu>(ctx, &aot_mem) && ctx.pc == 0x089BBF4Cu) goto L_089BBF4C;
    return;
L_089BBF4C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089BBF5Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 566u, 0x08A2ABB4u>(ctx, &aot_mem) && ctx.pc == 0x089BBF5Cu) goto L_089BBF5C;
    return;
L_089BBF5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    goto L_089BBF68;
L_089BBF68:
    ctx.gpr[31] = (0x089BBF70u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089B9FF8;
L_089BBF70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BBFE4;
      }
      goto L_089BBF78;
    }
L_089BBF78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BBFE4;
      }
      goto L_089BBF88;
    }
L_089BBF88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BBFE4;
      }
      goto L_089BBF94;
    }
L_089BBF94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BBFB4;
      }
      goto L_089BBFA4;
    }
L_089BBFA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BBFE4;
      }
      goto L_089BBFB4;
    }
L_089BBFB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(1760));
      if (branch_taken) {
          goto L_089BBFCC;
      }
      goto L_089BBFC0;
    }
L_089BBFC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
    ctx.gpr[31] = (0x089BBFCCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089BBFCCu) goto L_089BBFCC;
    return;
L_089BBFCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089BBFDCu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1760), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089BBFDCu) goto L_089BBFDC;
    return;
L_089BBFDC:
    ctx.gpr[31] = (0x089BBFE4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 795u, 0x0899FF58u>(ctx, &aot_mem) && ctx.pc == 0x089BBFE4u) goto L_089BBFE4;
    return;
L_089BBFE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 110u, 0x089BC760u>(ctx, &aot_mem); return;
      }
      goto L_089BBFEC;
    }
L_089BBFEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089BBFF8u);
    ctx.gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089BBFF8u) goto L_089BBFF8;
    return;
L_089BBFF8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 3u, 0x089BC014u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 1u, 0x089BC004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0109(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0109_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_109(Runtime &runtime) {
    runtime.register_generated_unit(109u, 0x089B8000u, 16384u, &recomp_unit_0109, &recomp_unit_0109_entry);
    runtime.register_function(0x089B8004u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8024u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8034u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8054u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8064u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B806Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8074u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8080u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8090u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B80B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B80C4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B80D0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B80D8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B80E0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B80F0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B80F8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8110u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B811Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8128u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8134u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8140u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8144u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B814Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8160u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8170u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8180u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8190u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B81A0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B81A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B81ACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B81B4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B81C8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B81D4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B81E0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B81E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B81F0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B81FCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8208u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8218u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8220u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B822Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8238u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8248u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8258u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8260u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8270u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B827Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8284u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8294u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B82A0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B82A8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B82B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B82C0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B82C8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B82D8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B82E0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B82F0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B82F8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8304u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8310u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B831Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8328u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8334u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8338u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8340u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8358u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8368u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8378u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8388u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B838Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8394u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B839Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B83ACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B83B4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B83B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B83C8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B83D8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B83E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B83F4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B83FCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B840Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B841Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8424u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8434u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B843Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8444u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B844Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8454u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8460u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8468u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B846Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8474u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8480u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8488u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B848Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8494u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B849Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B84BCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B84C8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B84D8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B84ECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8504u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B850Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8518u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8534u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8544u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8558u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8560u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8568u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8570u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8578u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8588u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8590u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B85A0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B85ACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B85C4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B85D0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B85DCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B860Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8640u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B864Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8654u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B865Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8660u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8668u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8678u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8684u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B869Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B86A8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B86B4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B86C8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B86D4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B86E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8700u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8708u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8718u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8720u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B872Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8734u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8748u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8758u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8768u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8780u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B878Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8798u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B87A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B87ACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B87B4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B87C0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B87C8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B87D0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B87D8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B87E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B87F0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B87FCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8804u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B880Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8820u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8828u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8834u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B883Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8850u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8858u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8868u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8870u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8878u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8884u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B888Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B88A0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B88B0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B88C8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B88DCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B88E8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B88F0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B88FCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B890Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8920u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8948u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8954u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B895Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8968u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8970u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B897Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8984u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B898Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B89A0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B89A8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B89BCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B89C4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B89CCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B89E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B89ECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8A00u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8A20u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8A98u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8AA8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8AB4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8AE8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8B44u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8B4Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8B68u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8B80u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8B90u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8BB0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8BCCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8BE0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8C04u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8C14u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8C1Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8C20u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8C28u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8C2Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8C38u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8C50u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8C5Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8CE0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8D48u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8D68u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8DE0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8E18u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8E20u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8E70u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8EA0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8EACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8EC4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8EDCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8EECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8F00u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8F0Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8F74u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8F80u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8F84u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8F9Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8FA8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8FF0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9038u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9048u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9054u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9060u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B906Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9070u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9078u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9084u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9088u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9090u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B90A8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B90B4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B90BCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B90C8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B90D4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B90E0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B90E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B90ECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B90F8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B90FCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9104u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9110u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9114u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B911Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9128u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B912Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9134u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9140u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9144u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B914Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9158u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B915Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9164u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9170u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9174u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B917Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9188u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B918Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9194u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B91A0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B91A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B91ACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B91B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B91BCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B91C4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B91D0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B91D4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B91DCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B91E8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B91ECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B91F4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9200u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9204u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B920Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9214u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9218u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9220u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B922Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9244u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9270u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9284u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9290u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B92B4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B92C4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B92CCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B92E0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B92F0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9300u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B930Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9320u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9338u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9348u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9358u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B936Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B937Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9384u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9394u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B93A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B93C0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B93D0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B93E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B93F4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B93FCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9404u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9414u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B941Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B942Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B948Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B94A0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B94B0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B94D8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B94E8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B94F0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B94F8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B94FCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9514u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9528u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9544u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9550u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9558u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9568u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9590u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B95A0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B95A8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B95B0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B95B4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B95CCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B95D8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B95E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B95ECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9608u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9618u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9620u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9628u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9630u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B964Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B965Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9664u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B966Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9670u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B967Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B968Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9698u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B96A0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B96A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B96B0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B96BCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B96C4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B96F4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9748u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9760u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9768u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B97CCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9810u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9858u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B989Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B98A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B98B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B98C0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B98C8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B98DCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B98E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B991Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9924u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B992Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B994Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9960u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B996Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B997Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9988u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B99A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B99B4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B99C8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B99E0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9A20u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9A28u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9A40u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9A48u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9A4Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9A54u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9A5Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9A7Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9A90u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9A9Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9AACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9AB8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9AD4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9AE4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9AF8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9B10u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9B50u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9B58u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9B70u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9B78u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9B7Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9B84u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9B8Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9BACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9BC0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9BCCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9BDCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9BE8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9C04u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9C14u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9C28u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9C40u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9C80u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9C88u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9CA0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9CA8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9CACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9CB4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9CBCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9CDCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9CF0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9CFCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9D0Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9D18u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9D34u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9D44u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9D58u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9D68u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9DA8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9DB0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9DC8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9DD0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9DE0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9DF0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9DF8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9E24u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9E4Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9E5Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9E70u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9E80u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9EACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9EB4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9ED8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9EE0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9EE8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9EF0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9EF8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9F18u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9F2Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9F7Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9F84u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9F8Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9FB0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9FBCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9FC0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9FF8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA01Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA024u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA03Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA048u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA050u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA068u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA074u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA080u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA08Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA098u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA0A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA0ACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA0BCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA0C4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA0D0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA0DCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA0E8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA0F4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA100u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA108u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA118u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA120u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA12Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA134u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA13Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA144u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA14Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA158u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA164u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA174u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA180u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA18Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA198u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA1A8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA1B4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA1C0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA1CCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA1D8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA1E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA1ECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA1FCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA204u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA214u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA21Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA22Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA234u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA240u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA248u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA250u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA258u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA264u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA270u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA27Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA284u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA290u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA29Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA2A8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA2B0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA2BCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA2C8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA2D4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA2DCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA2E8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA2F4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA300u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA308u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA314u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA320u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA334u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA33Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA344u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA35Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA3A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA3ACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA3BCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA3C4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA3CCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA3D4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA3DCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA3E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA3ECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA3F8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA404u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA41Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA438u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA440u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA46Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA474u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA48Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA494u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA49Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA4B4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA4F8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA508u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA510u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA518u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA520u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA528u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA530u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA564u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA56Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA5A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA5D4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA5E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA5F4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA604u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA60Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA614u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA620u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA628u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA65Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA674u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA67Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA6B0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA6C8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA6D0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA6E0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA6F8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA72Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA73Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA748u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA758u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA760u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA768u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA774u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA77Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA788u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA7A0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA7D4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA7DCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA804u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA824u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA82Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA830u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA838u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA858u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA860u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA864u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA870u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA880u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA888u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA89Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA8B0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA8B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA8E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA908u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA910u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA914u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA91Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA940u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA948u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA94Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA954u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA964u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA96Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA97Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA9B4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA9BCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA9C8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA9E0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAA14u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAA1Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAA34u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAA4Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAA68u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAA80u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAA98u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAAB4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAACCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAAD8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAAECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAB08u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAB2Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAB38u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAB4Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAB58u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAB68u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAB6Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAB74u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAB8Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BABA4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BABB0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BABC0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BABD0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BABD8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BABF8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC10u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC2Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC54u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC60u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC74u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC80u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC90u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC98u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BACA0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BACB8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BACC0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BACD4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BACDCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BACF4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAD10u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAD30u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAD3Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAD54u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAD68u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAD70u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAD80u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAD9Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BADA4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BADB0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BADE4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAE00u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAE18u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAE2Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAE34u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAE4Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAE80u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAE98u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAEB4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAEC0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAEDCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAEE8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAF08u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAF14u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAF30u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAF3Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAF58u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAF64u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAF74u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAF88u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAF98u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAFACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAFBCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAFD0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAFE0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAFF4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB004u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB018u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB028u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB03Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB04Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB060u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB070u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB084u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB094u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB0A8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB0B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB0CCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB0DCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB0F0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB100u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB114u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB124u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB138u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB148u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB15Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB16Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB180u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB190u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB1A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB1B4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB1C8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB1D8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB1ECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB1FCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB210u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB220u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB234u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB244u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB258u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB268u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB27Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB28Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB2A0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB2B0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB2C4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB2D4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB2E8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB2F8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB30Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB31Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB330u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB340u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB354u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB364u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB378u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB388u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB39Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB3ACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB3C0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB3D0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB3E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB3F4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB408u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB418u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB42Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB43Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB450u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB460u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB474u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB484u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB498u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB4A8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB4BCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB4C4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB4CCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB4D4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB4DCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB4E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB4F0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB520u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB560u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB570u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB584u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB59Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB5A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB5ACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB5B4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB5CCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB5D4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB5DCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB5E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB5F0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB5F8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB610u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB618u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB628u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB634u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB648u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB650u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB658u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB664u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB670u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB688u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB690u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB6A8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB6B0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB6BCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB6C8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB6E0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB6E8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB6F0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB6F8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB700u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB708u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB720u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB728u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB734u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB73Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB754u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB76Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB794u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB79Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB7B4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB7BCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB7C4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB7D8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB7E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB7ECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB804u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB80Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB830u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB838u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB84Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB858u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB860u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB878u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB884u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB88Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB8A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB8B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB8C8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB8D0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB8D8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB8F0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB8F8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB904u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB910u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB928u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB930u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB948u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB954u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB960u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB96Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB970u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB978u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB984u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB988u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB990u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB99Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB9A0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB9A8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB9C0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB9E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB9ECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBA04u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBA10u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBA18u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBA2Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBA34u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBA4Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBA58u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBA64u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBA70u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBA78u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBA80u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBA88u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBA90u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBA98u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBAA0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBAA8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBAB0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBAB4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBACCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBAD4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBAE4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBAECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBB04u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBB44u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBB4Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBB58u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBB5Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBB64u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBB68u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBB74u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBB80u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBB9Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBBACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBBB0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBBBCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBBCCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBBE4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBBECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBBF4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBC04u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBC20u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBC30u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBC40u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBC50u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBC60u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBC6Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBC7Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBC84u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBCA8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBCB8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBCC4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBCD4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBCE8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBCF4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBD00u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBD08u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBD24u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBD2Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBD3Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBD48u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBD50u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBD64u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBD74u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBD80u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBD90u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBDA4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBDB0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBDBCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBDCCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBDD4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBDE0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBDE8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBDF4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBDFCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBE14u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBE38u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBE44u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBE50u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBE68u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBE70u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBE7Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBE84u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBE8Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBE9Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBEA4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBEACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBEB0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBEB8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBEC0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBEC8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBECCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBED4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBEDCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBEE4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBEE8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBEFCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBF08u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBF14u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBF2Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBF38u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBF44u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBF4Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBF5Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBF68u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBF70u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBF78u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBF88u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBF94u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBFA4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBFB4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBFC0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBFCCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBFDCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBFE4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBFECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBFF8u, &recomp_unit_0109, "recomp_unit_0109");
}
} // namespace psprecomp
