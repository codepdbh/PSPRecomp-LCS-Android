#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0033[4094] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 5, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 6, 0, 7, 0, 8, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 12, 0,
    0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 27, 0, 0, 0, 28, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    30, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 35, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0,
    0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    48, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0,
    0, 53, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0,
    58, 59, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 65, 0, 0, 66, 0, 0, 67,
    0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0,
    0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 83, 0, 0, 84, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 87, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0,
    0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 102,
    0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 108, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 111, 0, 112, 0, 0, 0, 113, 0, 0, 114, 0, 115, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 117, 0, 118, 0, 0, 0, 119, 0, 0, 120, 0, 121, 0, 122, 0, 0, 0, 123, 0, 0, 124, 0, 125, 0, 126, 0, 0,
    0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 130, 0, 131, 0, 0, 0, 132,
    0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 137, 0, 138, 0, 0, 139, 0, 140, 0,
    141, 0, 142, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 146, 0, 0, 0, 147, 148, 0, 149, 0, 0, 0, 0, 150, 0, 0, 151,
    0, 0, 0, 152, 153, 0, 0, 0, 0, 0, 154, 0, 155, 0, 156, 0, 157, 0, 158, 0, 0, 159, 0, 160, 0, 0, 0, 161, 0, 0, 162, 0,
    0, 0, 163, 0, 164, 0, 165, 0, 166, 0, 167, 0, 168, 0, 169, 0, 170, 0, 171, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174,
    0, 175, 0, 176, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 179, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 183, 0, 0,
    0, 0, 0, 0, 184, 0, 185, 186, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 190, 0, 191, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 194, 0, 0, 195, 0, 0, 196, 197, 0, 198, 199, 0, 0,
    0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 203, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 206, 0, 0,
    0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0,
    0, 0, 210, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0,
    216, 0, 0, 0, 217, 0, 218, 0, 0, 0, 219, 0, 220, 0, 0, 0, 221, 0, 0, 0, 222, 0, 223, 0, 0, 0, 224, 225, 0, 0, 0, 0,
    226, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 228, 0, 229, 0, 230, 0, 231, 0, 0, 0, 232, 0, 233, 0, 234, 0, 235, 236, 0, 237, 0, 0, 238, 0, 239, 0, 240, 0, 0, 241,
    0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 245, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 250, 0, 0, 251, 0, 252, 0, 253, 0, 0, 254, 0, 255, 0, 256, 0, 0, 0,
    257, 0, 258, 0, 0, 259, 0, 260, 0, 0, 261, 0, 262, 0, 0, 263, 0, 264, 0, 0, 265, 0, 266, 0, 0, 0, 0, 267, 0, 0, 268, 0,
    0, 269, 0, 270, 271, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 278,
    0, 279, 0, 0, 0, 280, 281, 0, 282, 0, 0, 0, 283, 0, 284, 0, 285, 0, 286, 0, 287, 0, 0, 0, 288, 289, 0, 0, 0, 290, 291, 0,
    292, 0, 0, 0, 293, 294, 0, 0, 0, 295, 296, 0, 297, 0, 0, 0, 298, 299, 0, 0, 0, 300, 301, 0, 302, 0, 0, 0, 303, 304, 0, 0,
    0, 305, 306, 0, 307, 0, 0, 0, 308, 0, 309, 0, 310, 0, 311, 0, 312, 0, 0, 313, 0, 0, 0, 314, 0, 315, 0, 0, 0, 0, 316, 0,
    317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 320, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 323, 0, 324, 0,
    325, 0, 326, 0, 0, 327, 0, 0, 328, 0, 0, 329, 0, 0, 330, 0, 0, 331, 0, 332, 0, 333, 0, 334, 0, 335, 0, 0, 336, 0, 0, 0,
    337, 0, 0, 0, 338, 0, 339, 0, 340, 0, 341, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 344, 0, 345, 0, 346, 0, 347, 0, 0, 348, 0,
    0, 0, 349, 0, 0, 0, 350, 0, 351, 0, 352, 0, 353, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 356, 0, 357, 0, 358, 0, 359, 0, 360,
    0, 361, 0, 362, 0, 0, 0, 363, 0, 0, 364, 0, 365, 0, 366, 0, 367, 0, 0, 368, 0, 0, 369, 0, 0, 370, 0, 0, 371, 0, 372, 0,
    0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 375, 0, 376, 0, 377, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 380,
    0, 381, 382, 0, 0, 0, 383, 0, 384, 0, 0, 385, 0, 386, 0, 387, 0, 388, 0, 0, 0, 389, 0, 390, 0, 0, 0, 391, 0, 0, 392, 0,
    393, 0, 394, 0, 0, 0, 0, 0, 395, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 398, 0, 0,
    0, 399, 0, 400, 0, 401, 0, 0, 402, 403, 0, 0, 404, 0, 0, 0, 0, 0, 405, 0, 406, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0,
    0, 0, 408, 0, 0, 0, 409, 0, 0, 410, 0, 0, 411, 0, 0, 412, 413, 0, 414, 415, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 417, 0,
    0, 0, 418, 0, 0, 419, 0, 0, 420, 0, 0, 0, 0, 0, 421, 0, 0, 422, 0, 0, 423, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 425,
    0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 0, 429, 0, 430, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 433, 434, 0, 0, 0,
    0, 435, 0, 436, 0, 437, 0, 0, 438, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 440, 0, 0, 0, 441, 0, 0, 442, 0, 0, 0, 443,
    0, 0, 444, 0, 0, 0, 445, 0, 0, 446, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 448, 0, 0, 449, 0, 0, 450, 0, 0, 0, 451,
    0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 453, 0, 454, 0, 0, 0, 0, 455, 456, 0, 457, 0, 458, 0, 0, 0, 459, 0, 460, 0, 461, 0,
    462, 0, 463, 0, 464, 0, 0, 0, 465, 0, 466, 0, 0, 0, 467, 0, 0, 0, 468, 0, 469, 0, 470, 0, 0, 0, 471, 0, 472, 0, 0, 0,
    473, 474, 0, 475, 0, 476, 0, 0, 0, 477, 0, 478, 0, 0, 0, 479, 0, 0, 0, 480, 0, 481, 0, 482, 0, 0, 0, 483, 0, 484, 0, 0,
    0, 485, 486, 0, 487, 0, 488, 0, 0, 0, 489, 0, 490, 0, 0, 0, 491, 0, 0, 0, 492, 0, 493, 0, 494, 0, 0, 0, 495, 0, 496, 0,
    0, 0, 497, 498, 0, 499, 0, 500, 0, 0, 0, 501, 0, 502, 0, 0, 0, 503, 0, 0, 0, 504, 0, 505, 0, 506, 0, 0, 0, 507, 0, 508,
    0, 0, 0, 509, 510, 0, 511, 0, 512, 0, 0, 0, 0, 0, 513, 0, 0, 0, 514, 0, 515, 0, 516, 0, 517, 0, 0, 518, 0, 0, 519, 0,
    0, 520, 0, 0, 521, 0, 0, 522, 0, 523, 0, 0, 0, 0, 524, 0, 525, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0,
    0, 0, 528, 0, 529, 0, 0, 530, 0, 531, 0, 532, 0, 0, 0, 0, 533, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 539, 0,
    0, 0, 0, 540, 0, 0, 0, 0, 541, 0, 0, 542, 0, 0, 0, 543, 0, 0, 544, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 546, 0, 547,
    0, 0, 548, 0, 549, 0, 0, 550, 0, 551, 0, 0, 0, 0, 0, 0, 552, 0, 0, 553, 0, 0, 0, 554, 0, 0, 0, 0, 555, 0, 0, 556,
    0, 0, 0, 0, 557, 0, 558, 0, 0, 0, 0, 559, 0, 560, 0, 0, 561, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0,
    0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 566, 0, 567, 0, 0, 568, 0, 569, 0, 0, 0, 0, 0, 570, 0, 0, 571, 0, 572,
    0, 0, 0, 0, 573, 0, 0, 574, 0, 575, 0, 0, 576, 0, 0, 0, 577, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0,
    0, 580, 0, 0, 0, 0, 581, 0, 582, 0, 583, 0, 584, 0, 0, 0, 585, 0, 0, 0, 586, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 588,
    0, 589, 0, 590, 0, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 0, 594, 0, 0,
    595, 0, 0, 596, 597, 0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 600, 0, 601, 0, 602, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 605, 0, 0, 606, 0, 0, 0, 607, 0, 0, 0, 608, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 0, 0, 0, 0, 610, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 611, 0,
    612, 0, 613, 0, 0, 614, 615, 0, 616, 0, 0, 0, 0, 617, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 620, 0, 621, 0, 0, 0, 0, 0, 622, 0, 0, 0,
    0, 0, 0, 0, 0, 623, 0, 0, 0, 624, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 0, 0, 0, 0, 0, 626, 0, 0, 627, 0, 0,
    0, 0, 0, 0, 628, 0, 0, 629, 0, 0, 0, 0, 0, 0, 0, 0, 0, 630, 0, 0, 0, 631, 0, 0, 0, 632, 0, 0, 0, 633, 0, 0,
    634, 0, 0, 635, 0, 0, 636, 637, 0, 638, 639, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 0, 0, 641, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 642, 0, 643, 0, 0, 0, 0, 644, 0, 0, 645, 0, 0, 0, 646,
    0, 0, 0, 0, 0, 647, 0, 648, 0, 649, 0, 650, 0, 651, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0, 653, 0, 0, 654, 0, 0, 0, 0,
    0, 0, 0, 0, 655, 0, 656, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 658, 0, 0, 0, 0, 659, 0, 660, 0, 0, 661, 0, 0, 0, 662, 0, 0, 663, 0, 0, 0, 664, 0, 0,
    0, 665, 0, 0, 0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 0, 0, 0, 0, 667, 0, 0, 0, 0, 0, 0, 0, 0, 0, 668, 0, 669, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 670, 671, 0, 0, 0, 0, 0, 672, 0, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 674, 0, 0, 0, 0, 675, 0, 676, 0, 0, 0, 677, 0, 0, 0, 678, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 680, 0, 681, 0,
    682, 0, 0, 683, 0, 0, 0, 684, 0, 0, 0, 685, 0, 0, 0, 686, 0, 0, 687, 0, 0, 0, 688, 0, 0, 0, 689, 0, 0, 690, 0, 0,
    0, 691, 0, 0, 692, 0, 0, 0, 693, 0, 0, 0, 694, 0, 0, 0, 0, 695, 0, 0, 0, 696, 0, 0, 0, 697, 0, 0, 0, 698, 0, 699,
    0, 0, 0, 700, 0, 0, 0, 701, 0, 702, 0, 703, 0, 0, 704, 0, 705, 0, 0, 0, 706, 0, 0, 707, 0, 708, 709, 0, 0, 710, 0, 0,
    711, 0, 712, 0, 713, 0, 0, 0, 0, 0, 0, 0, 714, 0, 0, 715, 0, 0, 716, 0, 0, 0, 717, 0, 0, 0, 718, 0, 0, 0, 0, 0,
    0, 719, 0, 0, 720, 0, 0, 0, 0, 0, 721, 0, 0, 0, 722, 0, 0, 0, 723, 0, 0, 724, 0, 0, 725, 0, 0, 726, 727, 0, 728, 729,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 730, 0, 731, 0, 0, 0, 0, 732, 0, 0, 0, 0, 733, 734, 0, 0, 735, 0, 0, 0, 736,
    0, 0, 0, 737, 0, 0, 0, 738, 0, 0, 739, 0, 0, 0, 740, 0, 0, 0, 741, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    742, 0, 0, 743, 0, 0, 0, 744, 0, 0, 0, 745, 0, 0, 0, 0, 0, 0, 0, 746, 0, 747, 0, 748, 0, 749, 0, 750, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 751, 0, 0, 0, 0, 752, 0, 753, 0, 754, 755, 0, 756, 0, 0, 0, 0, 0, 757,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 758, 0, 0, 759, 0, 760, 0, 0, 0, 0, 0, 0, 761, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 762, 0, 763, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 764, 0, 0, 0, 765, 0, 0, 0, 0, 766, 0, 0, 0, 0, 0, 767, 0, 768, 0, 0, 769, 0, 0, 770, 0, 0, 771, 772, 0, 0, 773,
    0, 0, 774, 0, 775, 0, 776, 0, 0, 0, 0, 777, 0, 0, 0, 778, 0, 0, 779, 0, 0, 780, 0, 0, 781, 0, 0, 782, 0, 783, 0, 0,
    784, 0, 0, 0, 785, 0, 0, 786, 0, 0, 787, 0, 0, 788, 789, 0, 790, 791, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 792, 0, 0, 0, 0, 793, 0, 0, 794, 0, 0, 795, 0, 796, 0, 0, 0, 797, 0, 0, 798, 0, 0, 799, 0, 0,
    0, 800, 0, 801, 0, 0, 0, 802, 0, 0, 0, 803, 0, 804, 0, 0, 0, 805, 0, 806, 0, 807, 0, 808, 0, 0, 809, 0, 0, 810, 0, 0,
    811, 812, 0, 0, 813, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 814, 0, 0, 0, 0, 0, 815, 0, 0, 0, 0, 816, 0, 0, 0, 0,
    817, 0, 0, 0, 0, 0, 0, 0, 0, 818, 0, 0, 0, 0, 819, 0, 0, 820, 0, 821, 0, 0, 822, 0, 823, 0, 0, 0, 0, 0, 0, 0,
    0, 824, 0, 0, 825, 0, 826, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 827, 0, 828, 0, 0, 0, 829, 0, 0, 830, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 831, 0, 832, 0, 0, 0, 0, 0, 0, 833, 0, 0, 834, 0, 0, 0, 0, 835, 0, 0, 0, 0, 836,
    0, 837, 0, 0, 0, 838, 0, 0, 0, 839, 0, 0, 0, 840, 0, 0, 841, 0, 0, 0, 842, 0, 843, 0, 0, 0, 0, 844, 0, 0, 0, 845,
    0, 846, 0, 0, 0, 847, 0, 848, 0, 0, 0, 849, 0, 0, 0, 850, 0, 0, 0, 0, 851, 0, 0, 0, 852, 0, 853, 0, 0, 0, 854, 0,
    0, 0, 0, 0, 855, 0, 0, 0, 856, 0, 0, 0, 0, 857, 0, 0, 858, 0, 0, 0, 0, 859, 0, 0, 860, 0, 861, 0, 0, 862, 0, 0,
    0, 863, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 864, 0, 865, 0, 0, 0, 866, 0, 867, 0, 868, 0, 869, 0, 870, 0, 0, 0, 871, 0,
    0, 0, 0, 0, 872, 0, 0, 0, 873, 0, 0, 0, 874, 0, 0, 0, 875, 0, 0, 0, 876, 0, 0, 877, 0, 0, 878, 0, 879, 0, 880, 0,
    881, 0, 0, 0, 882, 0, 0, 0, 883, 0, 884, 885, 0, 886, 0, 0, 0, 887, 0, 888, 889, 0, 890, 0, 0, 0, 891, 892, 0, 893, 0, 894,
    0, 0, 0, 0, 0, 895, 0, 0, 0, 896, 0, 0, 0, 897, 0, 0, 0, 898, 0, 899, 0, 0, 0, 0, 0, 0, 900, 0, 901, 0, 0, 0,
    0, 0, 0, 902, 0, 903, 904, 0, 905, 0, 0, 906, 0, 0, 907, 0, 0, 908, 0, 0, 0, 909, 910, 0, 911, 0, 0, 912, 0, 0, 0, 913,
    914, 0, 915, 0, 0, 916, 0, 0, 0, 917, 0, 918, 0, 919, 920, 0, 0, 0, 921, 0, 922, 0, 0, 923, 0, 0, 0, 0, 0, 0, 0, 924,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 925, 0,
    0, 0, 926, 0, 927, 0, 0, 0, 928, 0, 0, 0, 929, 0, 0, 930, 0, 0, 931, 0, 0, 932, 933, 0, 934, 935, 0, 0, 0, 936, 0, 0,
    0, 937, 0, 0, 0, 938, 0, 0, 939, 0, 0, 0, 940, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 941, 0, 0, 0, 0, 0, 0,
    942, 0, 0, 943, 0, 0, 0, 944, 945, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 946, 0, 0, 0, 0, 0, 0, 947, 0,
    0, 0, 948, 0, 949, 0, 0, 0, 950, 951, 0, 0, 952, 0, 0, 0, 953, 0, 0, 0, 954, 0, 0, 955, 0, 956, 0, 0, 0, 957,
};
void recomp_unit_0033_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08888000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0033[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08888000;
    case 2u: goto L_0888800C;
    case 3u: goto L_08888058;
    case 4u: goto L_08888060;
    case 5u: goto L_08888078;
    case 6u: goto L_08888114;
    case 7u: goto L_0888811C;
    case 8u: goto L_08888124;
    case 9u: goto L_08888128;
    case 10u: goto L_08888140;
    case 11u: goto L_0888816C;
    case 12u: goto L_08888178;
    case 13u: goto L_0888818C;
    case 14u: goto L_088881A8;
    case 15u: goto L_088881B8;
    case 16u: goto L_088881D4;
    case 17u: goto L_088881E4;
    case 18u: goto L_08888220;
    case 19u: goto L_08888228;
    case 20u: goto L_08888230;
    case 21u: goto L_0888825C;
    case 22u: goto L_08888264;
    case 23u: goto L_0888829C;
    case 24u: goto L_088882A4;
    case 25u: goto L_088882D0;
    case 26u: goto L_088882E0;
    case 27u: goto L_088882E4;
    case 28u: goto L_088882F4;
    case 29u: goto L_08888330;
    case 30u: goto L_08888380;
    case 31u: goto L_08888388;
    case 32u: goto L_088883A0;
    case 33u: goto L_08888438;
    case 34u: goto L_08888440;
    case 35u: goto L_08888448;
    case 36u: goto L_0888844C;
    case 37u: goto L_08888464;
    case 38u: goto L_08888490;
    case 39u: goto L_0888849C;
    case 40u: goto L_088884B0;
    case 41u: goto L_088884CC;
    case 42u: goto L_088884DC;
    case 43u: goto L_088884F8;
    case 44u: goto L_08888508;
    case 45u: goto L_08888544;
    case 46u: goto L_0888854C;
    case 47u: goto L_08888554;
    case 48u: goto L_08888580;
    case 49u: goto L_08888588;
    case 50u: goto L_088885C0;
    case 51u: goto L_088885C8;
    case 52u: goto L_088885F4;
    case 53u: goto L_08888604;
    case 54u: goto L_08888608;
    case 55u: goto L_08888618;
    case 56u: goto L_08888654;
    case 57u: goto L_08888678;
    case 58u: goto L_08888680;
    case 59u: goto L_08888684;
    case 60u: goto L_0888868C;
    case 61u: goto L_088886AC;
    case 62u: goto L_088886B8;
    case 63u: goto L_088886C8;
    case 64u: goto L_088886D8;
    case 65u: goto L_088886E4;
    case 66u: goto L_088886F0;
    case 67u: goto L_088886FC;
    case 68u: goto L_08888704;
    case 69u: goto L_08888714;
    case 70u: goto L_0888872C;
    case 71u: goto L_0888873C;
    case 72u: goto L_08888750;
    case 73u: goto L_0888875C;
    case 74u: goto L_088887A4;
    case 75u: goto L_088887BC;
    case 76u: goto L_088887D0;
    case 77u: goto L_088887E4;
    case 78u: goto L_088887EC;
    case 79u: goto L_08888810;
    case 80u: goto L_08888820;
    case 81u: goto L_0888882C;
    case 82u: goto L_08888844;
    case 83u: goto L_08888884;
    case 84u: goto L_08888890;
    case 85u: goto L_088888A0;
    case 86u: goto L_088888AC;
    case 87u: goto L_088888BC;
    case 88u: goto L_088888C4;
    case 89u: goto L_088888DC;
    case 90u: goto L_088888F0;
    case 91u: goto L_08888904;
    case 92u: goto L_0888890C;
    case 93u: goto L_08888930;
    case 94u: goto L_08888940;
    case 95u: goto L_0888894C;
    case 96u: goto L_08888964;
    case 97u: goto L_088889A4;
    case 98u: goto L_088889B4;
    case 99u: goto L_088889C4;
    case 100u: goto L_088889E0;
    case 101u: goto L_088889F4;
    case 102u: goto L_088889FC;
    case 103u: goto L_08888A10;
    case 104u: goto L_08888A3C;
    case 105u: goto L_08888A48;
    case 106u: goto L_08888A58;
    case 107u: goto L_08888A64;
    case 108u: goto L_08888A74;
    case 109u: goto L_08888B04;
    case 110u: goto L_08888B1C;
    case 111u: goto L_08888B9C;
    case 112u: goto L_08888BA4;
    case 113u: goto L_08888BB4;
    case 114u: goto L_08888BC0;
    case 115u: goto L_08888BC8;
    case 116u: goto L_08888BD0;
    case 117u: goto L_08888C14;
    case 118u: goto L_08888C1C;
    case 119u: goto L_08888C2C;
    case 120u: goto L_08888C38;
    case 121u: goto L_08888C40;
    case 122u: goto L_08888C48;
    case 123u: goto L_08888C58;
    case 124u: goto L_08888C64;
    case 125u: goto L_08888C6C;
    case 126u: goto L_08888C74;
    case 127u: goto L_08888C94;
    case 128u: goto L_08888CCC;
    case 129u: goto L_08888CDC;
    case 130u: goto L_08888CE4;
    case 131u: goto L_08888CEC;
    case 132u: goto L_08888CFC;
    case 133u: goto L_08888D14;
    case 134u: goto L_08888D28;
    case 135u: goto L_08888D3C;
    case 136u: goto L_08888D50;
    case 137u: goto L_08888D5C;
    case 138u: goto L_08888D64;
    case 139u: goto L_08888D70;
    case 140u: goto L_08888D78;
    case 141u: goto L_08888D80;
    case 142u: goto L_08888D88;
    case 143u: goto L_08888D90;
    case 144u: goto L_08888DA4;
    case 145u: goto L_08888DB8;
    case 146u: goto L_08888DC0;
    case 147u: goto L_08888DD0;
    case 148u: goto L_08888DD4;
    case 149u: goto L_08888DDC;
    case 150u: goto L_08888DF0;
    case 151u: goto L_08888DFC;
    case 152u: goto L_08888E0C;
    case 153u: goto L_08888E10;
    case 154u: goto L_08888E28;
    case 155u: goto L_08888E30;
    case 156u: goto L_08888E38;
    case 157u: goto L_08888E40;
    case 158u: goto L_08888E48;
    case 159u: goto L_08888E54;
    case 160u: goto L_08888E5C;
    case 161u: goto L_08888E6C;
    case 162u: goto L_08888E78;
    case 163u: goto L_08888E88;
    case 164u: goto L_08888E90;
    case 165u: goto L_08888E98;
    case 166u: goto L_08888EA0;
    case 167u: goto L_08888EA8;
    case 168u: goto L_08888EB0;
    case 169u: goto L_08888EB8;
    case 170u: goto L_08888EC0;
    case 171u: goto L_08888EC8;
    case 172u: goto L_08888ED0;
    case 173u: goto L_08888EEC;
    case 174u: goto L_08888EFC;
    case 175u: goto L_08888F04;
    case 176u: goto L_08888F0C;
    case 177u: goto L_08888F18;
    case 178u: goto L_08888F28;
    case 179u: goto L_08888F38;
    case 180u: goto L_08888F40;
    case 181u: goto L_08888F50;
    case 182u: goto L_08888F6C;
    case 183u: goto L_08888F74;
    case 184u: goto L_08888F90;
    case 185u: goto L_08888F98;
    case 186u: goto L_08888F9C;
    case 187u: goto L_08888FA4;
    case 188u: goto L_08888FB8;
    case 189u: goto L_08888FD8;
    case 190u: goto L_08889018;
    case 191u: goto L_08889020;
    case 192u: goto L_08889030;
    case 193u: goto L_08889040;
    case 194u: goto L_0888904C;
    case 195u: goto L_08889058;
    case 196u: goto L_08889064;
    case 197u: goto L_08889068;
    case 198u: goto L_08889070;
    case 199u: goto L_08889074;
    case 200u: goto L_08889094;
    case 201u: goto L_088890B4;
    case 202u: goto L_088890C0;
    case 203u: goto L_088890C8;
    case 204u: goto L_088890D8;
    case 205u: goto L_088890E4;
    case 206u: goto L_088890F4;
    case 207u: goto L_0888910C;
    case 208u: goto L_08889160;
    case 209u: goto L_08889170;
    case 210u: goto L_08889188;
    case 211u: goto L_08889190;
    case 212u: goto L_088891C0;
    case 213u: goto L_088891C4;
    case 214u: goto L_088891E0;
    case 215u: goto L_088891F0;
    case 216u: goto L_08889200;
    case 217u: goto L_08889210;
    case 218u: goto L_08889218;
    case 219u: goto L_08889228;
    case 220u: goto L_08889230;
    case 221u: goto L_08889240;
    case 222u: goto L_08889250;
    case 223u: goto L_08889258;
    case 224u: goto L_08889268;
    case 225u: goto L_0888926C;
    case 226u: goto L_08889280;
    case 227u: goto L_088892A4;
    case 228u: goto L_08889308;
    case 229u: goto L_08889310;
    case 230u: goto L_08889318;
    case 231u: goto L_08889320;
    case 232u: goto L_08889330;
    case 233u: goto L_08889338;
    case 234u: goto L_08889340;
    case 235u: goto L_08889348;
    case 236u: goto L_0888934C;
    case 237u: goto L_08889354;
    case 238u: goto L_08889360;
    case 239u: goto L_08889368;
    case 240u: goto L_08889370;
    case 241u: goto L_0888937C;
    case 242u: goto L_08889388;
    case 243u: goto L_088893A8;
    case 244u: goto L_088893B8;
    case 245u: goto L_088893C0;
    case 246u: goto L_088893D0;
    case 247u: goto L_088893E0;
    case 248u: goto L_08889420;
    case 249u: goto L_08889430;
    case 250u: goto L_08889438;
    case 251u: goto L_08889444;
    case 252u: goto L_0888944C;
    case 253u: goto L_08889454;
    case 254u: goto L_08889460;
    case 255u: goto L_08889468;
    case 256u: goto L_08889470;
    case 257u: goto L_08889480;
    case 258u: goto L_08889488;
    case 259u: goto L_08889494;
    case 260u: goto L_0888949C;
    case 261u: goto L_088894A8;
    case 262u: goto L_088894B0;
    case 263u: goto L_088894BC;
    case 264u: goto L_088894C4;
    case 265u: goto L_088894D0;
    case 266u: goto L_088894D8;
    case 267u: goto L_088894EC;
    case 268u: goto L_088894F8;
    case 269u: goto L_08889504;
    case 270u: goto L_0888950C;
    case 271u: goto L_08889510;
    case 272u: goto L_08889518;
    case 273u: goto L_0888952C;
    case 274u: goto L_08889540;
    case 275u: goto L_08889550;
    case 276u: goto L_08889568;
    case 277u: goto L_08889578;
    case 278u: goto L_0888957C;
    case 279u: goto L_08889584;
    case 280u: goto L_08889594;
    case 281u: goto L_08889598;
    case 282u: goto L_088895A0;
    case 283u: goto L_088895B0;
    case 284u: goto L_088895B8;
    case 285u: goto L_088895C0;
    case 286u: goto L_088895C8;
    case 287u: goto L_088895D0;
    case 288u: goto L_088895E0;
    case 289u: goto L_088895E4;
    case 290u: goto L_088895F4;
    case 291u: goto L_088895F8;
    case 292u: goto L_08889600;
    case 293u: goto L_08889610;
    case 294u: goto L_08889614;
    case 295u: goto L_08889624;
    case 296u: goto L_08889628;
    case 297u: goto L_08889630;
    case 298u: goto L_08889640;
    case 299u: goto L_08889644;
    case 300u: goto L_08889654;
    case 301u: goto L_08889658;
    case 302u: goto L_08889660;
    case 303u: goto L_08889670;
    case 304u: goto L_08889674;
    case 305u: goto L_08889684;
    case 306u: goto L_08889688;
    case 307u: goto L_08889690;
    case 308u: goto L_088896A0;
    case 309u: goto L_088896A8;
    case 310u: goto L_088896B0;
    case 311u: goto L_088896B8;
    case 312u: goto L_088896C0;
    case 313u: goto L_088896CC;
    case 314u: goto L_088896DC;
    case 315u: goto L_088896E4;
    case 316u: goto L_088896F8;
    case 317u: goto L_08889700;
    case 318u: goto L_08889718;
    case 319u: goto L_08889740;
    case 320u: goto L_08889744;
    case 321u: goto L_08889750;
    case 322u: goto L_08889764;
    case 323u: goto L_08889770;
    case 324u: goto L_08889778;
    case 325u: goto L_08889780;
    case 326u: goto L_08889788;
    case 327u: goto L_08889794;
    case 328u: goto L_088897A0;
    case 329u: goto L_088897AC;
    case 330u: goto L_088897B8;
    case 331u: goto L_088897C4;
    case 332u: goto L_088897CC;
    case 333u: goto L_088897D4;
    case 334u: goto L_088897DC;
    case 335u: goto L_088897E4;
    case 336u: goto L_088897F0;
    case 337u: goto L_08889800;
    case 338u: goto L_08889810;
    case 339u: goto L_08889818;
    case 340u: goto L_08889820;
    case 341u: goto L_08889828;
    case 342u: goto L_08889834;
    case 343u: goto L_08889844;
    case 344u: goto L_08889854;
    case 345u: goto L_0888985C;
    case 346u: goto L_08889864;
    case 347u: goto L_0888986C;
    case 348u: goto L_08889878;
    case 349u: goto L_08889888;
    case 350u: goto L_08889898;
    case 351u: goto L_088898A0;
    case 352u: goto L_088898A8;
    case 353u: goto L_088898B0;
    case 354u: goto L_088898BC;
    case 355u: goto L_088898CC;
    case 356u: goto L_088898DC;
    case 357u: goto L_088898E4;
    case 358u: goto L_088898EC;
    case 359u: goto L_088898F4;
    case 360u: goto L_088898FC;
    case 361u: goto L_08889904;
    case 362u: goto L_0888990C;
    case 363u: goto L_0888991C;
    case 364u: goto L_08889928;
    case 365u: goto L_08889930;
    case 366u: goto L_08889938;
    case 367u: goto L_08889940;
    case 368u: goto L_0888994C;
    case 369u: goto L_08889958;
    case 370u: goto L_08889964;
    case 371u: goto L_08889970;
    case 372u: goto L_08889978;
    case 373u: goto L_08889990;
    case 374u: goto L_088899B8;
    case 375u: goto L_088899C0;
    case 376u: goto L_088899C8;
    case 377u: goto L_088899D0;
    case 378u: goto L_088899E0;
    case 379u: goto L_088899F0;
    case 380u: goto L_088899FC;
    case 381u: goto L_08889A04;
    case 382u: goto L_08889A08;
    case 383u: goto L_08889A18;
    case 384u: goto L_08889A20;
    case 385u: goto L_08889A2C;
    case 386u: goto L_08889A34;
    case 387u: goto L_08889A3C;
    case 388u: goto L_08889A44;
    case 389u: goto L_08889A54;
    case 390u: goto L_08889A5C;
    case 391u: goto L_08889A6C;
    case 392u: goto L_08889A78;
    case 393u: goto L_08889A80;
    case 394u: goto L_08889A88;
    case 395u: goto L_08889AA0;
    case 396u: goto L_08889AA8;
    case 397u: goto L_08889AEC;
    case 398u: goto L_08889AF4;
    case 399u: goto L_08889B04;
    case 400u: goto L_08889B0C;
    case 401u: goto L_08889B14;
    case 402u: goto L_08889B20;
    case 403u: goto L_08889B24;
    case 404u: goto L_08889B30;
    case 405u: goto L_08889B48;
    case 406u: goto L_08889B50;
    case 407u: goto L_08889B68;
    case 408u: goto L_08889B88;
    case 409u: goto L_08889B98;
    case 410u: goto L_08889BA4;
    case 411u: goto L_08889BB0;
    case 412u: goto L_08889BBC;
    case 413u: goto L_08889BC0;
    case 414u: goto L_08889BC8;
    case 415u: goto L_08889BCC;
    case 416u: goto L_08889BDC;
    case 417u: goto L_08889BF8;
    case 418u: goto L_08889C08;
    case 419u: goto L_08889C14;
    case 420u: goto L_08889C20;
    case 421u: goto L_08889C38;
    case 422u: goto L_08889C44;
    case 423u: goto L_08889C50;
    case 424u: goto L_08889C58;
    case 425u: goto L_08889C7C;
    case 426u: goto L_08889C88;
    case 427u: goto L_08889C98;
    case 428u: goto L_08889CA8;
    case 429u: goto L_08889CB8;
    case 430u: goto L_08889CC0;
    case 431u: goto L_08889CCC;
    case 432u: goto L_08889CDC;
    case 433u: goto L_08889CEC;
    case 434u: goto L_08889CF0;
    case 435u: goto L_08889D04;
    case 436u: goto L_08889D0C;
    case 437u: goto L_08889D14;
    case 438u: goto L_08889D20;
    case 439u: goto L_08889D38;
    case 440u: goto L_08889D50;
    case 441u: goto L_08889D60;
    case 442u: goto L_08889D6C;
    case 443u: goto L_08889D7C;
    case 444u: goto L_08889D88;
    case 445u: goto L_08889D98;
    case 446u: goto L_08889DA4;
    case 447u: goto L_08889DBC;
    case 448u: goto L_08889DD4;
    case 449u: goto L_08889DE0;
    case 450u: goto L_08889DEC;
    case 451u: goto L_08889DFC;
    case 452u: goto L_08889E08;
    case 453u: goto L_08889E28;
    case 454u: goto L_08889E30;
    case 455u: goto L_08889E44;
    case 456u: goto L_08889E48;
    case 457u: goto L_08889E50;
    case 458u: goto L_08889E58;
    case 459u: goto L_08889E68;
    case 460u: goto L_08889E70;
    case 461u: goto L_08889E78;
    case 462u: goto L_08889E80;
    case 463u: goto L_08889E88;
    case 464u: goto L_08889E90;
    case 465u: goto L_08889EA0;
    case 466u: goto L_08889EA8;
    case 467u: goto L_08889EB8;
    case 468u: goto L_08889EC8;
    case 469u: goto L_08889ED0;
    case 470u: goto L_08889ED8;
    case 471u: goto L_08889EE8;
    case 472u: goto L_08889EF0;
    case 473u: goto L_08889F00;
    case 474u: goto L_08889F04;
    case 475u: goto L_08889F0C;
    case 476u: goto L_08889F14;
    case 477u: goto L_08889F24;
    case 478u: goto L_08889F2C;
    case 479u: goto L_08889F3C;
    case 480u: goto L_08889F4C;
    case 481u: goto L_08889F54;
    case 482u: goto L_08889F5C;
    case 483u: goto L_08889F6C;
    case 484u: goto L_08889F74;
    case 485u: goto L_08889F84;
    case 486u: goto L_08889F88;
    case 487u: goto L_08889F90;
    case 488u: goto L_08889F98;
    case 489u: goto L_08889FA8;
    case 490u: goto L_08889FB0;
    case 491u: goto L_08889FC0;
    case 492u: goto L_08889FD0;
    case 493u: goto L_08889FD8;
    case 494u: goto L_08889FE0;
    case 495u: goto L_08889FF0;
    case 496u: goto L_08889FF8;
    case 497u: goto L_0888A008;
    case 498u: goto L_0888A00C;
    case 499u: goto L_0888A014;
    case 500u: goto L_0888A01C;
    case 501u: goto L_0888A02C;
    case 502u: goto L_0888A034;
    case 503u: goto L_0888A044;
    case 504u: goto L_0888A054;
    case 505u: goto L_0888A05C;
    case 506u: goto L_0888A064;
    case 507u: goto L_0888A074;
    case 508u: goto L_0888A07C;
    case 509u: goto L_0888A08C;
    case 510u: goto L_0888A090;
    case 511u: goto L_0888A098;
    case 512u: goto L_0888A0A0;
    case 513u: goto L_0888A0B8;
    case 514u: goto L_0888A0C8;
    case 515u: goto L_0888A0D0;
    case 516u: goto L_0888A0D8;
    case 517u: goto L_0888A0E0;
    case 518u: goto L_0888A0EC;
    case 519u: goto L_0888A0F8;
    case 520u: goto L_0888A104;
    case 521u: goto L_0888A110;
    case 522u: goto L_0888A11C;
    case 523u: goto L_0888A124;
    case 524u: goto L_0888A138;
    case 525u: goto L_0888A140;
    case 526u: goto L_0888A154;
    case 527u: goto L_0888A178;
    case 528u: goto L_0888A188;
    case 529u: goto L_0888A190;
    case 530u: goto L_0888A19C;
    case 531u: goto L_0888A1A4;
    case 532u: goto L_0888A1AC;
    case 533u: goto L_0888A1C0;
    case 534u: goto L_0888A1D0;
    case 535u: goto L_0888A204;
    case 536u: goto L_0888A22C;
    case 537u: goto L_0888A244;
    case 538u: goto L_0888A264;
    case 539u: goto L_0888A278;
    case 540u: goto L_0888A28C;
    case 541u: goto L_0888A2A0;
    case 542u: goto L_0888A2AC;
    case 543u: goto L_0888A2BC;
    case 544u: goto L_0888A2C8;
    case 545u: goto L_0888A2DC;
    case 546u: goto L_0888A2F4;
    case 547u: goto L_0888A2FC;
    case 548u: goto L_0888A308;
    case 549u: goto L_0888A310;
    case 550u: goto L_0888A31C;
    case 551u: goto L_0888A324;
    case 552u: goto L_0888A340;
    case 553u: goto L_0888A34C;
    case 554u: goto L_0888A35C;
    case 555u: goto L_0888A370;
    case 556u: goto L_0888A37C;
    case 557u: goto L_0888A390;
    case 558u: goto L_0888A398;
    case 559u: goto L_0888A3AC;
    case 560u: goto L_0888A3B4;
    case 561u: goto L_0888A3C0;
    case 562u: goto L_0888A3C8;
    case 563u: goto L_0888A3F8;
    case 564u: goto L_0888A404;
    case 565u: goto L_0888A428;
    case 566u: goto L_0888A434;
    case 567u: goto L_0888A43C;
    case 568u: goto L_0888A448;
    case 569u: goto L_0888A450;
    case 570u: goto L_0888A468;
    case 571u: goto L_0888A474;
    case 572u: goto L_0888A47C;
    case 573u: goto L_0888A490;
    case 574u: goto L_0888A49C;
    case 575u: goto L_0888A4A4;
    case 576u: goto L_0888A4B0;
    case 577u: goto L_0888A4C0;
    case 578u: goto L_0888A4D8;
    case 579u: goto L_0888A570;
    case 580u: goto L_0888A584;
    case 581u: goto L_0888A598;
    case 582u: goto L_0888A5A0;
    case 583u: goto L_0888A5A8;
    case 584u: goto L_0888A5B0;
    case 585u: goto L_0888A5C0;
    case 586u: goto L_0888A5D0;
    case 587u: goto L_0888A5E0;
    case 588u: goto L_0888A5FC;
    case 589u: goto L_0888A604;
    case 590u: goto L_0888A60C;
    case 591u: goto L_0888A620;
    case 592u: goto L_0888A63C;
    case 593u: goto L_0888A668;
    case 594u: goto L_0888A674;
    case 595u: goto L_0888A680;
    case 596u: goto L_0888A68C;
    case 597u: goto L_0888A690;
    case 598u: goto L_0888A698;
    case 599u: goto L_0888A6C8;
    case 600u: goto L_0888A6D4;
    case 601u: goto L_0888A6DC;
    case 602u: goto L_0888A6E4;
    case 603u: goto L_0888A730;
    case 604u: goto L_0888A760;
    case 605u: goto L_0888A78C;
    case 606u: goto L_0888A798;
    case 607u: goto L_0888A7A8;
    case 608u: goto L_0888A7B8;
    case 609u: goto L_0888A7CC;
    case 610u: goto L_0888A7F4;
    case 611u: goto L_0888A8F8;
    case 612u: goto L_0888A900;
    case 613u: goto L_0888A908;
    case 614u: goto L_0888A914;
    case 615u: goto L_0888A918;
    case 616u: goto L_0888A920;
    case 617u: goto L_0888A934;
    case 618u: goto L_0888A948;
    case 619u: goto L_0888A974;
    case 620u: goto L_0888A9D0;
    case 621u: goto L_0888A9D8;
    case 622u: goto L_0888A9F0;
    case 623u: goto L_0888AA14;
    case 624u: goto L_0888AA24;
    case 625u: goto L_0888AA40;
    case 626u: goto L_0888AA68;
    case 627u: goto L_0888AA74;
    case 628u: goto L_0888AA90;
    case 629u: goto L_0888AA9C;
    case 630u: goto L_0888AAC4;
    case 631u: goto L_0888AAD4;
    case 632u: goto L_0888AAE4;
    case 633u: goto L_0888AAF4;
    case 634u: goto L_0888AB00;
    case 635u: goto L_0888AB0C;
    case 636u: goto L_0888AB18;
    case 637u: goto L_0888AB1C;
    case 638u: goto L_0888AB24;
    case 639u: goto L_0888AB28;
    case 640u: goto L_0888AB68;
    case 641u: goto L_0888AB74;
    case 642u: goto L_0888ABC4;
    case 643u: goto L_0888ABCC;
    case 644u: goto L_0888ABE0;
    case 645u: goto L_0888ABEC;
    case 646u: goto L_0888ABFC;
    case 647u: goto L_0888AC14;
    case 648u: goto L_0888AC1C;
    case 649u: goto L_0888AC24;
    case 650u: goto L_0888AC2C;
    case 651u: goto L_0888AC34;
    case 652u: goto L_0888AC4C;
    case 653u: goto L_0888AC60;
    case 654u: goto L_0888AC6C;
    case 655u: goto L_0888AC90;
    case 656u: goto L_0888AC98;
    case 657u: goto L_0888ACB0;
    case 658u: goto L_0888AD20;
    case 659u: goto L_0888AD34;
    case 660u: goto L_0888AD3C;
    case 661u: goto L_0888AD48;
    case 662u: goto L_0888AD58;
    case 663u: goto L_0888AD64;
    case 664u: goto L_0888AD74;
    case 665u: goto L_0888AD84;
    case 666u: goto L_0888ADA8;
    case 667u: goto L_0888ADC8;
    case 668u: goto L_0888ADF0;
    case 669u: goto L_0888ADF8;
    case 670u: goto L_0888AE20;
    case 671u: goto L_0888AE24;
    case 672u: goto L_0888AE3C;
    case 673u: goto L_0888AE5C;
    case 674u: goto L_0888AE88;
    case 675u: goto L_0888AE9C;
    case 676u: goto L_0888AEA4;
    case 677u: goto L_0888AEB4;
    case 678u: goto L_0888AEC4;
    case 679u: goto L_0888AED4;
    case 680u: goto L_0888AEF0;
    case 681u: goto L_0888AEF8;
    case 682u: goto L_0888AF00;
    case 683u: goto L_0888AF0C;
    case 684u: goto L_0888AF1C;
    case 685u: goto L_0888AF2C;
    case 686u: goto L_0888AF3C;
    case 687u: goto L_0888AF48;
    case 688u: goto L_0888AF58;
    case 689u: goto L_0888AF68;
    case 690u: goto L_0888AF74;
    case 691u: goto L_0888AF84;
    case 692u: goto L_0888AF90;
    case 693u: goto L_0888AFA0;
    case 694u: goto L_0888AFB0;
    case 695u: goto L_0888AFC4;
    case 696u: goto L_0888AFD4;
    case 697u: goto L_0888AFE4;
    case 698u: goto L_0888AFF4;
    case 699u: goto L_0888AFFC;
    case 700u: goto L_0888B00C;
    case 701u: goto L_0888B01C;
    case 702u: goto L_0888B024;
    case 703u: goto L_0888B02C;
    case 704u: goto L_0888B038;
    case 705u: goto L_0888B040;
    case 706u: goto L_0888B050;
    case 707u: goto L_0888B05C;
    case 708u: goto L_0888B064;
    case 709u: goto L_0888B068;
    case 710u: goto L_0888B074;
    case 711u: goto L_0888B080;
    case 712u: goto L_0888B088;
    case 713u: goto L_0888B090;
    case 714u: goto L_0888B0B0;
    case 715u: goto L_0888B0BC;
    case 716u: goto L_0888B0C8;
    case 717u: goto L_0888B0D8;
    case 718u: goto L_0888B0E8;
    case 719u: goto L_0888B104;
    case 720u: goto L_0888B110;
    case 721u: goto L_0888B128;
    case 722u: goto L_0888B138;
    case 723u: goto L_0888B148;
    case 724u: goto L_0888B154;
    case 725u: goto L_0888B160;
    case 726u: goto L_0888B16C;
    case 727u: goto L_0888B170;
    case 728u: goto L_0888B178;
    case 729u: goto L_0888B17C;
    case 730u: goto L_0888B1AC;
    case 731u: goto L_0888B1B4;
    case 732u: goto L_0888B1C8;
    case 733u: goto L_0888B1DC;
    case 734u: goto L_0888B1E0;
    case 735u: goto L_0888B1EC;
    case 736u: goto L_0888B1FC;
    case 737u: goto L_0888B20C;
    case 738u: goto L_0888B21C;
    case 739u: goto L_0888B228;
    case 740u: goto L_0888B238;
    case 741u: goto L_0888B248;
    case 742u: goto L_0888B280;
    case 743u: goto L_0888B28C;
    case 744u: goto L_0888B29C;
    case 745u: goto L_0888B2AC;
    case 746u: goto L_0888B2CC;
    case 747u: goto L_0888B2D4;
    case 748u: goto L_0888B2DC;
    case 749u: goto L_0888B2E4;
    case 750u: goto L_0888B2EC;
    case 751u: goto L_0888B334;
    case 752u: goto L_0888B348;
    case 753u: goto L_0888B350;
    case 754u: goto L_0888B358;
    case 755u: goto L_0888B35C;
    case 756u: goto L_0888B364;
    case 757u: goto L_0888B37C;
    case 758u: goto L_0888B3C0;
    case 759u: goto L_0888B3CC;
    case 760u: goto L_0888B3D4;
    case 761u: goto L_0888B3F0;
    case 762u: goto L_0888B438;
    case 763u: goto L_0888B440;
    case 764u: goto L_0888B484;
    case 765u: goto L_0888B494;
    case 766u: goto L_0888B4A8;
    case 767u: goto L_0888B4C0;
    case 768u: goto L_0888B4C8;
    case 769u: goto L_0888B4D4;
    case 770u: goto L_0888B4E0;
    case 771u: goto L_0888B4EC;
    case 772u: goto L_0888B4F0;
    case 773u: goto L_0888B4FC;
    case 774u: goto L_0888B508;
    case 775u: goto L_0888B510;
    case 776u: goto L_0888B518;
    case 777u: goto L_0888B52C;
    case 778u: goto L_0888B53C;
    case 779u: goto L_0888B548;
    case 780u: goto L_0888B554;
    case 781u: goto L_0888B560;
    case 782u: goto L_0888B56C;
    case 783u: goto L_0888B574;
    case 784u: goto L_0888B580;
    case 785u: goto L_0888B590;
    case 786u: goto L_0888B59C;
    case 787u: goto L_0888B5A8;
    case 788u: goto L_0888B5B4;
    case 789u: goto L_0888B5B8;
    case 790u: goto L_0888B5C0;
    case 791u: goto L_0888B5C4;
    case 792u: goto L_0888B618;
    case 793u: goto L_0888B62C;
    case 794u: goto L_0888B638;
    case 795u: goto L_0888B644;
    case 796u: goto L_0888B64C;
    case 797u: goto L_0888B65C;
    case 798u: goto L_0888B668;
    case 799u: goto L_0888B674;
    case 800u: goto L_0888B684;
    case 801u: goto L_0888B68C;
    case 802u: goto L_0888B69C;
    case 803u: goto L_0888B6AC;
    case 804u: goto L_0888B6B4;
    case 805u: goto L_0888B6C4;
    case 806u: goto L_0888B6CC;
    case 807u: goto L_0888B6D4;
    case 808u: goto L_0888B6DC;
    case 809u: goto L_0888B6E8;
    case 810u: goto L_0888B6F4;
    case 811u: goto L_0888B700;
    case 812u: goto L_0888B704;
    case 813u: goto L_0888B710;
    case 814u: goto L_0888B740;
    case 815u: goto L_0888B758;
    case 816u: goto L_0888B76C;
    case 817u: goto L_0888B780;
    case 818u: goto L_0888B7A4;
    case 819u: goto L_0888B7B8;
    case 820u: goto L_0888B7C4;
    case 821u: goto L_0888B7CC;
    case 822u: goto L_0888B7D8;
    case 823u: goto L_0888B7E0;
    case 824u: goto L_0888B804;
    case 825u: goto L_0888B810;
    case 826u: goto L_0888B818;
    case 827u: goto L_0888B844;
    case 828u: goto L_0888B84C;
    case 829u: goto L_0888B85C;
    case 830u: goto L_0888B868;
    case 831u: goto L_0888B8A4;
    case 832u: goto L_0888B8AC;
    case 833u: goto L_0888B8C8;
    case 834u: goto L_0888B8D4;
    case 835u: goto L_0888B8E8;
    case 836u: goto L_0888B8FC;
    case 837u: goto L_0888B904;
    case 838u: goto L_0888B914;
    case 839u: goto L_0888B924;
    case 840u: goto L_0888B934;
    case 841u: goto L_0888B940;
    case 842u: goto L_0888B950;
    case 843u: goto L_0888B958;
    case 844u: goto L_0888B96C;
    case 845u: goto L_0888B97C;
    case 846u: goto L_0888B984;
    case 847u: goto L_0888B994;
    case 848u: goto L_0888B99C;
    case 849u: goto L_0888B9AC;
    case 850u: goto L_0888B9BC;
    case 851u: goto L_0888B9D0;
    case 852u: goto L_0888B9E0;
    case 853u: goto L_0888B9E8;
    case 854u: goto L_0888B9F8;
    case 855u: goto L_0888BA10;
    case 856u: goto L_0888BA20;
    case 857u: goto L_0888BA34;
    case 858u: goto L_0888BA40;
    case 859u: goto L_0888BA54;
    case 860u: goto L_0888BA60;
    case 861u: goto L_0888BA68;
    case 862u: goto L_0888BA74;
    case 863u: goto L_0888BA84;
    case 864u: goto L_0888BAB0;
    case 865u: goto L_0888BAB8;
    case 866u: goto L_0888BAC8;
    case 867u: goto L_0888BAD0;
    case 868u: goto L_0888BAD8;
    case 869u: goto L_0888BAE0;
    case 870u: goto L_0888BAE8;
    case 871u: goto L_0888BAF8;
    case 872u: goto L_0888BB10;
    case 873u: goto L_0888BB20;
    case 874u: goto L_0888BB30;
    case 875u: goto L_0888BB40;
    case 876u: goto L_0888BB50;
    case 877u: goto L_0888BB5C;
    case 878u: goto L_0888BB68;
    case 879u: goto L_0888BB70;
    case 880u: goto L_0888BB78;
    case 881u: goto L_0888BB80;
    case 882u: goto L_0888BB90;
    case 883u: goto L_0888BBA0;
    case 884u: goto L_0888BBA8;
    case 885u: goto L_0888BBAC;
    case 886u: goto L_0888BBB4;
    case 887u: goto L_0888BBC4;
    case 888u: goto L_0888BBCC;
    case 889u: goto L_0888BBD0;
    case 890u: goto L_0888BBD8;
    case 891u: goto L_0888BBE8;
    case 892u: goto L_0888BBEC;
    case 893u: goto L_0888BBF4;
    case 894u: goto L_0888BBFC;
    case 895u: goto L_0888BC14;
    case 896u: goto L_0888BC24;
    case 897u: goto L_0888BC34;
    case 898u: goto L_0888BC44;
    case 899u: goto L_0888BC4C;
    case 900u: goto L_0888BC68;
    case 901u: goto L_0888BC70;
    case 902u: goto L_0888BC8C;
    case 903u: goto L_0888BC94;
    case 904u: goto L_0888BC98;
    case 905u: goto L_0888BCA0;
    case 906u: goto L_0888BCAC;
    case 907u: goto L_0888BCB8;
    case 908u: goto L_0888BCC4;
    case 909u: goto L_0888BCD4;
    case 910u: goto L_0888BCD8;
    case 911u: goto L_0888BCE0;
    case 912u: goto L_0888BCEC;
    case 913u: goto L_0888BCFC;
    case 914u: goto L_0888BD00;
    case 915u: goto L_0888BD08;
    case 916u: goto L_0888BD14;
    case 917u: goto L_0888BD24;
    case 918u: goto L_0888BD2C;
    case 919u: goto L_0888BD34;
    case 920u: goto L_0888BD38;
    case 921u: goto L_0888BD48;
    case 922u: goto L_0888BD50;
    case 923u: goto L_0888BD5C;
    case 924u: goto L_0888BD7C;
    case 925u: goto L_0888BDF8;
    case 926u: goto L_0888BE08;
    case 927u: goto L_0888BE10;
    case 928u: goto L_0888BE20;
    case 929u: goto L_0888BE30;
    case 930u: goto L_0888BE3C;
    case 931u: goto L_0888BE48;
    case 932u: goto L_0888BE54;
    case 933u: goto L_0888BE58;
    case 934u: goto L_0888BE60;
    case 935u: goto L_0888BE64;
    case 936u: goto L_0888BE74;
    case 937u: goto L_0888BE84;
    case 938u: goto L_0888BE94;
    case 939u: goto L_0888BEA0;
    case 940u: goto L_0888BEB0;
    case 941u: goto L_0888BEE4;
    case 942u: goto L_0888BF00;
    case 943u: goto L_0888BF0C;
    case 944u: goto L_0888BF1C;
    case 945u: goto L_0888BF20;
    case 946u: goto L_0888BF5C;
    case 947u: goto L_0888BF78;
    case 948u: goto L_0888BF88;
    case 949u: goto L_0888BF90;
    case 950u: goto L_0888BFA0;
    case 951u: goto L_0888BFA4;
    case 952u: goto L_0888BFB0;
    case 953u: goto L_0888BFC0;
    case 954u: goto L_0888BFD0;
    case 955u: goto L_0888BFDC;
    case 956u: goto L_0888BFE4;
    case 957u: goto L_0888BFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08888000:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888800C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-304));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[31]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(240), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08888058u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 745u, 0x08A2F69Cu>(ctx, &aot_mem) && ctx.pc == 0x08888058u) goto L_08888058;
    return;
L_08888058:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888811C;
      }
      goto L_08888060;
    }
L_08888060:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1772)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888811C;
      }
      goto L_08888078;
    }
L_08888078:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(628)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[23] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_08888124;
      }
      goto L_08888114;
    }
L_08888114:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888128;
      }
      goto L_0888811C;
    }
L_0888811C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088882F4;
      }
      goto L_08888124;
    }
L_08888124:
    ctx.gpr[23] = (0u | 10u);
    goto L_08888128;
L_08888128:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088882E4;
      }
      goto L_08888140;
    }
L_08888140:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-464));
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    goto L_0888816C;
L_0888816C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08888178u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x08888178u) goto L_08888178;
    return;
L_08888178:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0888818Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 431u, 0x088A6D9Cu>(ctx, &aot_mem) && ctx.pc == 0x0888818Cu) goto L_0888818C;
    return;
L_0888818C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_088881A8;
    }
    goto L_088881A8;
L_088881A8:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088881E4;
      }
      goto L_088881B8;
    }
L_088881B8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_088881D4;
    }
    goto L_088881D4;
L_088881D4:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088882D0;
      }
      goto L_088881E4;
    }
L_088881E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
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
          goto L_08888228;
      }
      goto L_08888220;
    }
L_08888220:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08888228;
L_08888228:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088882D0;
      }
      goto L_08888230;
    }
L_08888230:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x0888825Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 328u, 0x088C5AA4u>(ctx, &aot_mem) && ctx.pc == 0x0888825Cu) goto L_0888825C;
    return;
L_0888825C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088882D0;
      }
      goto L_08888264;
    }
L_08888264:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x0888829Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 65u, 0x088C83A8u>(ctx, &aot_mem) && ctx.pc == 0x0888829Cu) goto L_0888829C;
    return;
L_0888829C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088882D0;
      }
      goto L_088882A4;
    }
L_088882A4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(240), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(104));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088882D0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088882D0u) goto L_088882D0;
    return;
L_088882D0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888816C;
      }
      goto L_088882E0;
    }
L_088882E0:
    ctx.gpr[4] = (2230u << 16u);
    goto L_088882E4;
L_088882E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3000));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1772), ctx.gpr[4]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    goto L_088882F4;
L_088882F4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08888330:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-304));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[31]);
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(240), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08888380u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 745u, 0x08A2F69Cu>(ctx, &aot_mem) && ctx.pc == 0x08888380u) goto L_08888380;
    return;
L_08888380:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08888440;
      }
      goto L_08888388;
    }
L_08888388:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1772)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08888440;
      }
      goto L_088883A0;
    }
L_088883A0:
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
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
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[7] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[23] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[7]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[23]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_08888448;
      }
      goto L_08888438;
    }
L_08888438:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888844C;
      }
      goto L_08888440;
    }
L_08888440:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08888618;
      }
      goto L_08888448;
    }
L_08888448:
    ctx.gpr[23] = (0u | 10u);
    goto L_0888844C;
L_0888844C:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08888608;
      }
      goto L_08888464;
    }
L_08888464:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-464));
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    goto L_08888490;
L_08888490:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x0888849Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x0888849Cu) goto L_0888849C;
    return;
L_0888849C:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088884B0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 431u, 0x088A6D9Cu>(ctx, &aot_mem) && ctx.pc == 0x088884B0u) goto L_088884B0;
    return;
L_088884B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_088884CC;
    }
    goto L_088884CC;
L_088884CC:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08888508;
      }
      goto L_088884DC;
    }
L_088884DC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_088884F8;
    }
    goto L_088884F8;
L_088884F8:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088885F4;
      }
      goto L_08888508;
    }
L_08888508:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
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
          goto L_0888854C;
      }
      goto L_08888544;
    }
L_08888544:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0888854C;
L_0888854C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088885F4;
      }
      goto L_08888554;
    }
L_08888554:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x08888580u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 328u, 0x088C5AA4u>(ctx, &aot_mem) && ctx.pc == 0x08888580u) goto L_08888580;
    return;
L_08888580:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088885F4;
      }
      goto L_08888588;
    }
L_08888588:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x088885C0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 65u, 0x088C83A8u>(ctx, &aot_mem) && ctx.pc == 0x088885C0u) goto L_088885C0;
    return;
L_088885C0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088885F4;
      }
      goto L_088885C8;
    }
L_088885C8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(240), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(104));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088885F4u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088885F4u) goto L_088885F4;
    return;
L_088885F4:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08888490;
      }
      goto L_08888604;
    }
L_08888604:
    ctx.gpr[4] = (2230u << 16u);
    goto L_08888608;
L_08888608:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3000));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1772), ctx.gpr[4]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    goto L_08888618;
L_08888618:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08888654:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[6] << (ctx.gpr[5] & 31u));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(418)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888680;
      }
      goto L_08888678;
    }
L_08888678:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08888684;
      }
      goto L_08888680;
    }
L_08888680:
    ctx.gpr[2] = (0u | 0u);
    goto L_08888684;
L_08888684:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888868C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0888872C;
      }
      goto L_088886AC;
    }
L_088886AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088886C8;
      }
      goto L_088886B8;
    }
L_088886B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0888872C;
      }
      goto L_088886C8;
    }
L_088886C8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[5] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_088886F0;
      }
      goto L_088886D8;
    }
L_088886D8:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088886E4u);
    ctx.gpr[6] = (0u | 96u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x088886E4u) goto L_088886E4;
    return;
L_088886E4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
      if (branch_taken) {
          goto L_08888704;
      }
      goto L_088886F0;
    }
L_088886F0:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088886FCu);
    ctx.gpr[6] = (0u | 95u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x088886FCu) goto L_088886FC;
    return;
L_088886FC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    goto L_08888704;
L_08888704:
    ctx.gpr[5] = (0u | 18u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(592), ctx.gpr[5]);
    ctx.gpr[31] = (0x08888714u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 667u, 0x0889F3D8u>(ctx, &aot_mem) && ctx.pc == 0x08888714u) goto L_08888714;
    return;
L_08888714:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1336), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    ctx.gpr[5] = (2203u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(31072));
    ctx.gpr[31] = (0x0888872Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 47u, 0x088B43E0u>(ctx, &aot_mem) && ctx.pc == 0x0888872Cu) goto L_0888872C;
    return;
L_0888872C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888873C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x08888750u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x08888750u) goto L_08888750;
    return;
L_08888750:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888875C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-464));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(364)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088888C4;
      }
      goto L_088887A4;
    }
L_088887A4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_088887D0;
      }
      goto L_088887BC;
    }
L_088887BC:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088887D0;
L_088887D0:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(112));
        goto L_088887EC;
    }
    goto L_088887E4;
L_088887E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_088887EC;
      }
      goto L_088887EC;
    }
L_088887EC:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
      if (branch_taken) {
          goto L_0888882C;
      }
      goto L_08888810;
    }
L_08888810:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.gpr[31] = (0x08888820u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08888820u) goto L_08888820;
    return;
L_08888820:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0888882C;
L_0888882C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08888844u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 110u, 0x0888483Cu>(ctx, &aot_mem) && ctx.pc == 0x08888844u) goto L_08888844;
    return;
L_08888844:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(15724)));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(15724)));
    ctx.gpr[31] = (0x08888884u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(208));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x08888884u) goto L_08888884;
    return;
L_08888884:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_088888AC;
      }
      goto L_08888890;
    }
L_08888890:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.gpr[31] = (0x088888A0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x088888A0u) goto L_088888A0;
    return;
L_088888A0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088888AC;
L_088888AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x088888BCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 519u, 0x08A0695Cu>(ctx, &aot_mem) && ctx.pc == 0x088888BCu) goto L_088888BC;
    return;
L_088888BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888A74;
      }
      goto L_088888C4;
    }
L_088888C4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088888F0;
      }
      goto L_088888DC;
    }
L_088888DC:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088888F0;
L_088888F0:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(112));
        goto L_0888890C;
    }
    goto L_08888904;
L_08888904:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_0888890C;
      }
      goto L_0888890C;
    }
L_0888890C:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
      if (branch_taken) {
          goto L_0888894C;
      }
      goto L_08888930;
    }
L_08888930:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(321));
    ctx.gpr[31] = (0x08888940u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08888940u) goto L_08888940;
    return;
L_08888940:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(321)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0888894C;
L_0888894C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08888964u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 110u, 0x0888483Cu>(ctx, &aot_mem) && ctx.pc == 0x08888964u) goto L_08888964;
    return;
L_08888964:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(15724)));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
        goto L_088889C4;
    }
    goto L_088889A4;
L_088889A4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    ctx.gpr[31] = (0x088889B4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x088889B4u) goto L_088889B4;
    return;
L_088889B4:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    goto L_088889C4;
L_088889C4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(520));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(15)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 3u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088889FC;
      }
      goto L_088889E0;
    }
L_088889E0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(15724)));
    ctx.gpr[31] = (0x088889F4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x088889F4u) goto L_088889F4;
    return;
L_088889F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888A3C;
      }
      goto L_088889FC;
    }
L_088889FC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(15724)));
    ctx.gpr[31] = (0x08888A10u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x08888A10u) goto L_08888A10;
    return;
L_08888A10:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08888A3C;
L_08888A3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08888A64;
      }
      goto L_08888A48;
    }
L_08888A48:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(353));
    ctx.gpr[31] = (0x08888A58u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08888A58u) goto L_08888A58;
    return;
L_08888A58:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(353)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08888A64;
L_08888A64:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08888A74u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 519u, 0x08A0695Cu>(ctx, &aot_mem) && ctx.pc == 0x08888A74u) goto L_08888A74;
    return;
L_08888A74:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888B1C;
      }
      goto L_08888B04;
    }
L_08888B04:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08888B1C;
L_08888B1C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16153u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x08888B9Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 328u, 0x088C5AA4u>(ctx, &aot_mem) && ctx.pc == 0x08888B9Cu) goto L_08888B9C;
    return;
L_08888B9C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08888BD0;
      }
      goto L_08888BA4;
    }
L_08888BA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888C40;
      }
      goto L_08888BB4;
    }
L_08888BB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888C40;
      }
      goto L_08888BC0;
    }
L_08888BC0:
    ctx.gpr[31] = (0x08888BC8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08888BC8u) goto L_08888BC8;
    return;
L_08888BC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888C40;
      }
      goto L_08888BD0;
    }
L_08888BD0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
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
    ctx.gpr[5] = (16153u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x08888C14u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 65u, 0x088C83A8u>(ctx, &aot_mem) && ctx.pc == 0x08888C14u) goto L_08888C14;
    return;
L_08888C14:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888C48;
      }
      goto L_08888C1C;
    }
L_08888C1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888C40;
      }
      goto L_08888C2C;
    }
L_08888C2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888C40;
      }
      goto L_08888C38;
    }
L_08888C38:
    ctx.gpr[31] = (0x08888C40u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08888C40u) goto L_08888C40;
    return;
L_08888C40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08888C74;
      }
      goto L_08888C48;
    }
L_08888C48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888C6C;
      }
      goto L_08888C58;
    }
L_08888C58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888C6C;
      }
      goto L_08888C64;
    }
L_08888C64:
    ctx.gpr[31] = (0x08888C6Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08888C6Cu) goto L_08888C6C;
    return;
L_08888C6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08888C74;
      }
      goto L_08888C74;
    }
L_08888C74:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08888C94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(836)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08888CE4;
      }
      goto L_08888CCC;
    }
L_08888CCC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
      if (branch_taken) {
          goto L_08888CEC;
      }
      goto L_08888CDC;
    }
L_08888CDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888D64;
      }
      goto L_08888CE4;
    }
L_08888CE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888FB8;
      }
      goto L_08888CEC;
    }
L_08888CEC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888DFC;
      }
      goto L_08888CFC;
    }
L_08888CFC:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(712)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08888D14:
    ctx.gpr[20] = (0u | 2u);
    ctx.gpr[18] = (0u | 5u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888DFC;
      }
      goto L_08888D28;
    }
L_08888D28:
    ctx.gpr[20] = (0u | 3u);
    ctx.gpr[18] = (0u | 5u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888DFC;
      }
      goto L_08888D3C;
    }
L_08888D3C:
    ctx.gpr[20] = (0u | 4u);
    ctx.gpr[18] = (0u | 10u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888DFC;
      }
      goto L_08888D50;
    }
L_08888D50:
    ctx.gpr[20] = (0u | 5u);
    ctx.gpr[18] = (0u | 10u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(508)));
    goto L_08888D5C;
L_08888D5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888DFC;
      }
      goto L_08888D64;
    }
L_08888D64:
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 15u);
      if (branch_taken) {
          goto L_08888DDC;
      }
      goto L_08888D70;
    }
L_08888D70:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 12u);
      if (branch_taken) {
          goto L_08888D90;
      }
      goto L_08888D78;
    }
L_08888D78:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 11u);
      if (branch_taken) {
          goto L_08888DF0;
      }
      goto L_08888D80;
    }
L_08888D80:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08888DA4;
      }
      goto L_08888D88;
    }
L_08888D88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888DFC;
      }
      goto L_08888D90;
    }
L_08888D90:
    ctx.gpr[20] = (0u | 2u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888DFC;
      }
      goto L_08888DA4;
    }
L_08888DA4:
    ctx.gpr[20] = (0u | 3u);
    ctx.gpr[18] = (0u | 4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888DC0;
      }
      goto L_08888DB8;
    }
L_08888DB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08888DD4;
      }
      goto L_08888DC0;
    }
L_08888DC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08888DD4;
      }
      goto L_08888DD0;
    }
L_08888DD0:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    goto L_08888DD4;
L_08888DD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888DFC;
      }
      goto L_08888DDC;
    }
L_08888DDC:
    ctx.gpr[20] = (0u | 4u);
    ctx.gpr[18] = (0u | 2u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(512)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888DFC;
      }
      goto L_08888DF0;
    }
L_08888DF0:
    ctx.gpr[20] = (0u | 5u);
    ctx.gpr[18] = (0u | 8u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(516)));
    goto L_08888DFC;
L_08888DFC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888E10;
      }
      goto L_08888E0C;
    }
L_08888E0C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    goto L_08888E10;
L_08888E10:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08888E40;
      }
      goto L_08888E28;
    }
L_08888E28:
    ctx.gpr[31] = (0x08888E30u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x08888E30u) goto L_08888E30;
    return;
L_08888E30:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
        goto L_08888E48;
    }
    goto L_08888E38;
L_08888E38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888E88;
      }
      goto L_08888E40;
    }
L_08888E40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888FB8;
      }
      goto L_08888E48;
    }
L_08888E48:
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 8u);
      if (branch_taken) {
          goto L_08888E88;
      }
      goto L_08888E54;
    }
L_08888E54:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08888E88;
      }
      goto L_08888E5C;
    }
L_08888E5C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08888E88;
      }
      goto L_08888E6C;
    }
L_08888E6C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(596)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08888EB8;
      }
      goto L_08888E78;
    }
L_08888E78:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 164u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08888EB8;
      }
      goto L_08888E88;
    }
L_08888E88:
    ctx.gpr[31] = (0x08888E90u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 402u, 0x088525D8u>(ctx, &aot_mem) && ctx.pc == 0x08888E90u) goto L_08888E90;
    return;
L_08888E90:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08888EB0;
      }
      goto L_08888E98;
    }
L_08888E98:
    ctx.gpr[31] = (0x08888EA0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x08888EA0u) goto L_08888EA0;
    return;
L_08888EA0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08888EC0;
      }
      goto L_08888EA8;
    }
L_08888EA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888EEC;
      }
      goto L_08888EB0;
    }
L_08888EB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888FB8;
      }
      goto L_08888EB8;
    }
L_08888EB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888FB8;
      }
      goto L_08888EC0;
    }
L_08888EC0:
    ctx.gpr[31] = (0x08888EC8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x08888EC8u) goto L_08888EC8;
    return;
L_08888EC8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08888EEC;
      }
      goto L_08888ED0;
    }
L_08888ED0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[5] = (ctx.gpr[5] & 7u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08888F04;
      }
      goto L_08888EEC;
    }
L_08888EEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 56u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(542)));
        goto L_08888F0C;
    }
    goto L_08888EFC;
L_08888EFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888FB8;
      }
      goto L_08888F04;
    }
L_08888F04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888FB8;
      }
      goto L_08888F0C;
    }
L_08888F0C:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08888FB8;
      }
      goto L_08888F18;
    }
L_08888F18:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(543)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08888FB8;
      }
      goto L_08888F28;
    }
L_08888F28:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08888FB8;
      }
      goto L_08888F38;
    }
L_08888F38:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888FB8;
      }
      goto L_08888F40;
    }
L_08888F40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08888FB8;
      }
      goto L_08888F50;
    }
L_08888F50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(232));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08888F6Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08888F6Cu) goto L_08888F6C;
    return;
L_08888F6C:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
        goto L_08888F9C;
    }
    goto L_08888F74;
L_08888F74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(240));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08888F90u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08888F90u) goto L_08888F90;
    return;
L_08888F90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888FB8;
      }
      goto L_08888F98;
    }
L_08888F98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    goto L_08888F9C;
L_08888F9C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08888FB8;
      }
      goto L_08888FA4;
    }
L_08888FA4:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08888FB8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_08888FD8;
L_08888FB8:
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
L_08888FD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[8] = (0u | 24u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[8];
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08889020;
      }
      goto L_08889018;
    }
L_08889018:
    ctx.gpr[31] = (0x08889020u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 716u, 0x0899FA68u>(ctx, &aot_mem) && ctx.pc == 0x08889020u) goto L_08889020;
    return;
L_08889020:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1328), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(1328));
    ctx.gpr[31] = (0x08889030u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08889030u) goto L_08889030;
    return;
L_08889030:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 56u);
      if (branch_taken) {
          goto L_08889074;
      }
      goto L_08889040;
    }
L_08889040:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889068;
      }
      goto L_0888904C;
    }
L_0888904C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(912), 0u);
        goto L_08889068;
    }
    goto L_08889058;
L_08889058:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x08889064u);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x08889064u) goto L_08889064;
    return;
L_08889064:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(912), 0u);
    goto L_08889068;
L_08889068:
    ctx.gpr[31] = (0x08889070u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x08889070u) goto L_08889070;
    return;
L_08889070:
    ctx.gpr[4] = (0u | 56u);
    goto L_08889074;
L_08889074:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(599), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1328)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1332), ctx.gpr[4]);
    ctx.gpr[31] = (0x08889094u);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(1332));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08889094u) goto L_08889094;
    return;
L_08889094:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1328)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(541)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(541), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088890C8;
      }
      goto L_088890B4;
    }
L_088890B4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088890C0u);
    ctx.gpr[5] = (0u | 110u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x088890C0u) goto L_088890C0;
    return;
L_088890C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088890F4;
      }
      goto L_088890C8;
    }
L_088890C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(660)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088890F4;
      }
      goto L_088890D8;
    }
L_088890D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088890F4;
      }
      goto L_088890E4;
    }
L_088890E4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 121u);
    ctx.gpr[31] = (0x088890F4u);
    ctx.gpr[6] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 236u, 0x0899D964u>(ctx, &aot_mem) && ctx.pc == 0x088890F4u) goto L_088890F4;
    return;
L_088890F4:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0888910Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 469u, 0x0888E3CCu>(ctx, &aot_mem) && ctx.pc == 0x0888910Cu) goto L_0888910C;
    return;
L_0888910C:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(542)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(542), static_cast<std::uint8_t>(ctx.gpr[5]));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(768));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(600));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(840), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08889170;
      }
      goto L_08889160;
    }
L_08889160:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889190;
      }
      goto L_08889170;
    }
L_08889170:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08889188u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 51u, 0x08890338u>(ctx, &aot_mem) && ctx.pc == 0x08889188u) goto L_08889188;
    return;
L_08889188:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889280;
      }
      goto L_08889190;
    }
L_08889190:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16524u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16512u << 16u);
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088891C4;
      }
      goto L_088891C0;
    }
L_088891C0:
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_088891C4;
L_088891C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088891F0;
      }
      goto L_088891E0;
    }
L_088891E0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08889230;
      }
      goto L_088891F0;
    }
L_088891F0:
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08889218;
      }
      goto L_08889200;
    }
L_08889200:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08889210u);
    ctx.gpr[6] = (0u | 70u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x08889210u) goto L_08889210;
    return;
L_08889210:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0888926C;
      }
      goto L_08889218;
    }
L_08889218:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08889228u);
    ctx.gpr[6] = (0u | 69u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x08889228u) goto L_08889228;
    return;
L_08889228:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0888926C;
      }
      goto L_08889230;
    }
L_08889230:
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08889258;
      }
      goto L_08889240;
    }
L_08889240:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08889250u);
    ctx.gpr[6] = (0u | 86u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x08889250u) goto L_08889250;
    return;
L_08889250:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0888926C;
      }
      goto L_08889258;
    }
L_08889258:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08889268u);
    ctx.gpr[6] = (0u | 85u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x08889268u) goto L_08889268;
    return;
L_08889268:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
    goto L_0888926C;
L_0888926C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(748)));
    ctx.gpr[5] = (2185u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(824));
    ctx.gpr[31] = (0x08889280u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 47u, 0x088B43E0u>(ctx, &aot_mem) && ctx.pc == 0x08889280u) goto L_08889280;
    return;
L_08889280:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088892A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[31]);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[4]);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08889308u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 10u, 0x088A00B4u>(ctx, &aot_mem) && ctx.pc == 0x08889308u) goto L_08889308;
    return;
L_08889308:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
      if (branch_taken) {
          goto L_088893C0;
      }
      goto L_08889310;
    }
L_08889310:
    ctx.gpr[31] = (0x08889318u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x08889318u) goto L_08889318;
    return;
L_08889318:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888934C;
      }
      goto L_08889320;
    }
L_08889320:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08889340;
      }
      goto L_08889330;
    }
L_08889330:
    ctx.gpr[31] = (0x08889338u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 44u, 0x088A02F8u>(ctx, &aot_mem) && ctx.pc == 0x08889338u) goto L_08889338;
    return;
L_08889338:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0888934C;
      }
      goto L_08889340;
    }
L_08889340:
    ctx.gpr[31] = (0x08889348u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 50u, 0x088A0350u>(ctx, &aot_mem) && ctx.pc == 0x08889348u) goto L_08889348;
    return;
L_08889348:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    goto L_0888934C;
L_0888934C:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_088893C0;
      }
      goto L_08889354;
    }
L_08889354:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088893B8;
      }
      goto L_08889360;
    }
L_08889360:
    ctx.gpr[31] = (0x08889368u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x08889368u) goto L_08889368;
    return;
L_08889368:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888937C;
      }
      goto L_08889370;
    }
L_08889370:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088893B8;
      }
      goto L_0888937C;
    }
L_0888937C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088893B8;
      }
      goto L_08889388;
    }
L_08889388:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1772), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(420)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088893B8;
      }
      goto L_088893A8;
    }
L_088893A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    goto L_088893B8;
L_088893B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A1D0;
      }
      goto L_088893C0;
    }
L_088893C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 60u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888A1D0;
      }
      goto L_088893D0;
    }
L_088893D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888A1D0;
      }
      goto L_088893E0;
    }
L_088893E0:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[30] = (0u | 5u);
      if (branch_taken) {
          goto L_0888952C;
      }
      goto L_08889420;
    }
L_08889420:
    ctx.gpr[18] = (0u | 15u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08889470;
      }
      goto L_08889430;
    }
L_08889430:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889454;
      }
      goto L_08889438;
    }
L_08889438:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0888944C;
      }
      goto L_08889444;
    }
L_08889444:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 8u);
      if (branch_taken) {
          goto L_0888952C;
      }
      goto L_0888944C;
    }
L_0888944C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 18u);
      if (branch_taken) {
          goto L_0888952C;
      }
      goto L_08889454;
    }
L_08889454:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08889468;
      }
      goto L_08889460;
    }
L_08889460:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 16u);
      if (branch_taken) {
          goto L_0888952C;
      }
      goto L_08889468;
    }
L_08889468:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 15u);
      if (branch_taken) {
          goto L_0888952C;
      }
      goto L_08889470;
    }
L_08889470:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889488;
      }
      goto L_08889480;
    }
L_08889480:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 15u);
      if (branch_taken) {
          goto L_0888952C;
      }
      goto L_08889488;
    }
L_08889488:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0888949C;
      }
      goto L_08889494;
    }
L_08889494:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 15u);
      if (branch_taken) {
          goto L_0888952C;
      }
      goto L_0888949C;
    }
L_0888949C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088894B0;
      }
      goto L_088894A8;
    }
L_088894A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 11u);
      if (branch_taken) {
          goto L_0888952C;
      }
      goto L_088894B0;
    }
L_088894B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(512)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088894C4;
      }
      goto L_088894BC;
    }
L_088894BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 16u);
      if (branch_taken) {
          goto L_0888952C;
      }
      goto L_088894C4;
    }
L_088894C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(516)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088894D8;
      }
      goto L_088894D0;
    }
L_088894D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 12u);
      if (branch_taken) {
          goto L_0888952C;
      }
      goto L_088894D8;
    }
L_088894D8:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(544)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_0888952C;
      }
      goto L_088894EC;
    }
L_088894EC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08889518;
      }
      goto L_088894F8;
    }
L_088894F8:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888950C;
      }
      goto L_08889504;
    }
L_08889504:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 12u);
      if (branch_taken) {
          goto L_08889510;
      }
      goto L_0888950C;
    }
L_0888950C:
    ctx.gpr[18] = (0u | 16u);
    goto L_08889510;
L_08889510:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888952C;
      }
      goto L_08889518;
    }
L_08889518:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(544)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088894EC;
      }
      goto L_0888952C;
    }
L_0888952C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_088895A0;
      }
      goto L_08889540;
    }
L_08889540:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(-8));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(11) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889688;
      }
      goto L_08889550;
    }
L_08889550:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(752)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08889568:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(542)));
    ctx.gpr[5] = (ctx.gpr[5] & 5u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888957C;
      }
      goto L_08889578;
    }
L_08889578:
    ctx.gpr[4] = (0u | 1u);
    goto L_0888957C;
L_0888957C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889688;
      }
      goto L_08889584;
    }
L_08889584:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(542)));
    ctx.gpr[5] = (ctx.gpr[5] & 10u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889598;
      }
      goto L_08889594;
    }
L_08889594:
    ctx.gpr[4] = (0u | 1u);
    goto L_08889598;
L_08889598:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889688;
      }
      goto L_088895A0;
    }
L_088895A0:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 15u);
      if (branch_taken) {
          goto L_08889600;
      }
      goto L_088895B0;
    }
L_088895B0:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 12u);
      if (branch_taken) {
          goto L_088895D0;
      }
      goto L_088895B8;
    }
L_088895B8:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 11u);
      if (branch_taken) {
          goto L_08889660;
      }
      goto L_088895C0;
    }
L_088895C0:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08889630;
      }
      goto L_088895C8;
    }
L_088895C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889688;
      }
      goto L_088895D0;
    }
L_088895D0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(542)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088895E4;
      }
      goto L_088895E0;
    }
L_088895E0:
    ctx.gpr[4] = (0u | 1u);
    goto L_088895E4;
L_088895E4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(543)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088895F8;
      }
      goto L_088895F4;
    }
L_088895F4:
    ctx.gpr[21] = (0u | 1u);
    goto L_088895F8;
L_088895F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889688;
      }
      goto L_08889600;
    }
L_08889600:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(542)));
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889614;
      }
      goto L_08889610;
    }
L_08889610:
    ctx.gpr[4] = (0u | 1u);
    goto L_08889614;
L_08889614:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(543)));
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889628;
      }
      goto L_08889624;
    }
L_08889624:
    ctx.gpr[21] = (0u | 1u);
    goto L_08889628;
L_08889628:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889688;
      }
      goto L_08889630;
    }
L_08889630:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(542)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889644;
      }
      goto L_08889640;
    }
L_08889640:
    ctx.gpr[4] = (0u | 1u);
    goto L_08889644;
L_08889644:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(543)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889658;
      }
      goto L_08889654;
    }
L_08889654:
    ctx.gpr[21] = (0u | 1u);
    goto L_08889658;
L_08889658:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889688;
      }
      goto L_08889660;
    }
L_08889660:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(542)));
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889674;
      }
      goto L_08889670;
    }
L_08889670:
    ctx.gpr[4] = (0u | 1u);
    goto L_08889674;
L_08889674:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(543)));
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889688;
      }
      goto L_08889684;
    }
L_08889684:
    ctx.gpr[21] = (0u | 1u);
    goto L_08889688;
L_08889688:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088896A0;
      }
      goto L_08889690;
    }
L_08889690:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088896B0;
      }
      goto L_088896A0;
    }
L_088896A0:
    if (ctx.gpr[21] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
        goto L_088896C0;
    }
    goto L_088896A8;
L_088896A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088896DC;
      }
      goto L_088896B0;
    }
L_088896B0:
    ctx.gpr[31] = (0x088896B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 535u, 0x08886BB0u>(ctx, &aot_mem) && ctx.pc == 0x088896B8u) goto L_088896B8;
    return;
L_088896B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A1D0;
      }
      goto L_088896C0;
    }
L_088896C0:
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088896F8;
      }
      goto L_088896CC;
    }
L_088896CC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088896F8;
      }
      goto L_088896DC;
    }
L_088896DC:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08889700;
      }
      goto L_088896E4;
    }
L_088896E4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08889744;
      }
      goto L_088896F8;
    }
L_088896F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A1D0;
      }
      goto L_08889700;
    }
L_08889700:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08889718u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 469u, 0x0888E3CCu>(ctx, &aot_mem) && ctx.pc == 0x08889718u) goto L_08889718;
    return;
L_08889718:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(304));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08889740u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08889740u) goto L_08889740;
    return;
L_08889740:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08889744;
L_08889744:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[22]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08889A08;
      }
      goto L_08889750;
    }
L_08889750:
    ctx.gpr[22] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[30];
    ctx.gpr[19] = (0u | 16u);
      if (branch_taken) {
          goto L_088897B8;
      }
      goto L_08889764;
    }
L_08889764:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[19];
    ctx.gpr[6] = (0u | 15u);
      if (branch_taken) {
          goto L_088897A0;
      }
      goto L_08889770;
    }
L_08889770:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 12u);
      if (branch_taken) {
          goto L_08889794;
      }
      goto L_08889778;
    }
L_08889778:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 11u);
      if (branch_taken) {
          goto L_088897AC;
      }
      goto L_08889780;
    }
L_08889780:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088898EC;
      }
      goto L_08889788;
    }
L_08889788:
    ctx.gpr[18] = (0u | 15u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088898EC;
      }
      goto L_08889794;
    }
L_08889794:
    ctx.gpr[18] = (0u | 11u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088898EC;
      }
      goto L_088897A0;
    }
L_088897A0:
    ctx.gpr[18] = (0u | 12u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088898EC;
      }
      goto L_088897AC;
    }
L_088897AC:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088898EC;
      }
      goto L_088897B8;
    }
L_088897B8:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[19];
    ctx.gpr[6] = (0u | 15u);
      if (branch_taken) {
          goto L_08889828;
      }
      goto L_088897C4;
    }
L_088897C4:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 12u);
      if (branch_taken) {
          goto L_088897E4;
      }
      goto L_088897CC;
    }
L_088897CC:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 11u);
      if (branch_taken) {
          goto L_088898B0;
      }
      goto L_088897D4;
    }
L_088897D4:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0888986C;
      }
      goto L_088897DC;
    }
L_088897DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088898EC;
      }
      goto L_088897E4;
    }
L_088897E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08889818;
      }
      goto L_088897F0;
    }
L_088897F0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(542)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08889818;
      }
      goto L_08889800;
    }
L_08889800:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(543)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08889818;
      }
      goto L_08889810;
    }
L_08889810:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 11u);
      if (branch_taken) {
          goto L_08889820;
      }
      goto L_08889818;
    }
L_08889818:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(508)));
    goto L_08889820;
L_08889820:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088898EC;
      }
      goto L_08889828;
    }
L_08889828:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(516)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888985C;
      }
      goto L_08889834;
    }
L_08889834:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(542)));
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888985C;
      }
      goto L_08889844;
    }
L_08889844:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(543)));
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888985C;
      }
      goto L_08889854;
    }
L_08889854:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 12u);
      if (branch_taken) {
          goto L_08889864;
      }
      goto L_0888985C;
    }
L_0888985C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(516)));
    goto L_08889864;
L_08889864:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088898EC;
      }
      goto L_0888986C;
    }
L_0888986C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088898A0;
      }
      goto L_08889878;
    }
L_08889878:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(542)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088898A0;
      }
      goto L_08889888;
    }
L_08889888:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(543)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088898A0;
      }
      goto L_08889898;
    }
L_08889898:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 15u);
      if (branch_taken) {
          goto L_088898A8;
      }
      goto L_088898A0;
    }
L_088898A0:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    goto L_088898A8;
L_088898A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088898EC;
      }
      goto L_088898B0;
    }
L_088898B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(512)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088898E4;
      }
      goto L_088898BC;
    }
L_088898BC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(542)));
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088898E4;
      }
      goto L_088898CC;
    }
L_088898CC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(543)));
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088898E4;
      }
      goto L_088898DC;
    }
L_088898DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_088898EC;
      }
      goto L_088898E4;
    }
L_088898E4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(512)));
    goto L_088898EC;
L_088898EC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889978;
      }
      goto L_088898F4;
    }
L_088898F4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889970;
      }
      goto L_088898FC;
    }
L_088898FC:
    ctx.gpr[31] = (0x08889904u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x08889904u) goto L_08889904;
    return;
L_08889904:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888991C;
      }
      goto L_0888990C;
    }
L_0888990C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08889970;
      }
      goto L_0888991C;
    }
L_0888991C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    ctx.gpr[5] = (0u | 15u);
      if (branch_taken) {
          goto L_08889958;
      }
      goto L_08889928;
    }
L_08889928:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 12u);
      if (branch_taken) {
          goto L_0888994C;
      }
      goto L_08889930;
    }
L_08889930:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 11u);
      if (branch_taken) {
          goto L_08889964;
      }
      goto L_08889938;
    }
L_08889938:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08889978;
      }
      goto L_08889940;
    }
L_08889940:
    ctx.gpr[18] = (0u | 15u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889978;
      }
      goto L_0888994C;
    }
L_0888994C:
    ctx.gpr[18] = (0u | 11u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889978;
      }
      goto L_08889958;
    }
L_08889958:
    ctx.gpr[18] = (0u | 12u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889978;
      }
      goto L_08889964;
    }
L_08889964:
    ctx.gpr[18] = (0u | 16u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889978;
      }
      goto L_08889970;
    }
L_08889970:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A1D0;
      }
      goto L_08889978;
    }
L_08889978:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08889990u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 469u, 0x0888E3CCu>(ctx, &aot_mem) && ctx.pc == 0x08889990u) goto L_08889990;
    return;
L_08889990:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(304));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x088899B8u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088899B8u) goto L_088899B8;
    return;
L_088899B8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08889A04;
      }
      goto L_088899C0;
    }
L_088899C0:
    ctx.gpr[31] = (0x088899C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088899C8u) goto L_088899C8;
    return;
L_088899C8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088899E0;
      }
      goto L_088899D0;
    }
L_088899D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088899FC;
      }
      goto L_088899E0;
    }
L_088899E0:
    ctx.gpr[18] = (ctx.gpr[22] | 0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1260), static_cast<std::uint16_t>(ctx.gpr[22]));
    ctx.gpr[31] = (0x088899F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 620u, 0x0889B67Cu>(ctx, &aot_mem) && ctx.pc == 0x088899F0u) goto L_088899F0;
    return;
L_088899F0:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08889A04;
      }
      goto L_088899FC;
    }
L_088899FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A1D0;
      }
      goto L_08889A04;
    }
L_08889A04:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    goto L_08889A08;
L_08889A08:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08889AF4;
      }
      goto L_08889A18;
    }
L_08889A18:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_08889AF4;
      }
      goto L_08889A20;
    }
L_08889A20:
    ctx.gpr[4] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 11u);
      if (branch_taken) {
          goto L_08889A34;
      }
      goto L_08889A2C;
    }
L_08889A2C:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08889AF4;
      }
      goto L_08889A34;
    }
L_08889A34:
    ctx.gpr[31] = (0x08889A3Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x08889A3Cu) goto L_08889A3C;
    return;
L_08889A3C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08889AF4;
      }
      goto L_08889A44;
    }
L_08889A44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08889AF4;
      }
      goto L_08889A54;
    }
L_08889A54:
    ctx.gpr[31] = (0x08889A5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08889A5Cu) goto L_08889A5C;
    return;
L_08889A5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 60u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08889A80;
      }
      goto L_08889A6C;
    }
L_08889A6C:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08889A88;
      }
      goto L_08889A78;
    }
L_08889A78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889AF4;
      }
      goto L_08889A80;
    }
L_08889A80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A1D0;
      }
      goto L_08889A88;
    }
L_08889A88:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08889AA0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 469u, 0x0888E3CCu>(ctx, &aot_mem) && ctx.pc == 0x08889AA0u) goto L_08889AA0;
    return;
L_08889AA0:
    ctx.gpr[31] = (0x08889AA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08889AA8u) goto L_08889AA8;
    return;
L_08889AA8:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (16056u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20972u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08889AF4;
      }
      goto L_08889AEC;
    }
L_08889AEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A1D0;
      }
      goto L_08889AF4;
    }
L_08889AF4:
    ctx.gpr[20] = (0u | 11u);
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[19] = (0u | 8u);
      if (branch_taken) {
          goto L_08889B24;
      }
      goto L_08889B04;
    }
L_08889B04:
    ctx.gpr[31] = (0x08889B0Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 828u, 0x0889FD44u>(ctx, &aot_mem) && ctx.pc == 0x08889B0Cu) goto L_08889B0C;
    return;
L_08889B0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889B24;
      }
      goto L_08889B14;
    }
L_08889B14:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1260), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[31] = (0x08889B20u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 620u, 0x0889B67Cu>(ctx, &aot_mem) && ctx.pc == 0x08889B20u) goto L_08889B20;
    return;
L_08889B20:
    ctx.gpr[21] = (0u | 1u);
    goto L_08889B24;
L_08889B24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08889B50;
      }
      goto L_08889B30;
    }
L_08889B30:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), ctx.gpr[19]);
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(860), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08889B48u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x08889B48u) goto L_08889B48;
    return;
L_08889B48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889B68;
      }
      goto L_08889B50;
    }
L_08889B50:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(860), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08889B68u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x08889B68u) goto L_08889B68;
    return;
L_08889B68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1328), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1328));
    ctx.gpr[31] = (0x08889B88u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08889B88u) goto L_08889B88;
    return;
L_08889B88:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1260), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    ctx.gpr[4] = (0u | 60u);
      if (branch_taken) {
          goto L_08889BCC;
      }
      goto L_08889B98;
    }
L_08889B98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889BC0;
      }
      goto L_08889BA4;
    }
L_08889BA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_08889BC0;
    }
    goto L_08889BB0;
L_08889BB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x08889BBCu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x08889BBCu) goto L_08889BBC;
    return;
L_08889BBC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_08889BC0;
L_08889BC0:
    ctx.gpr[31] = (0x08889BC8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x08889BC8u) goto L_08889BC8;
    return;
L_08889BC8:
    ctx.gpr[4] = (0u | 60u);
    goto L_08889BCC;
L_08889BCC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889C08;
      }
      goto L_08889BDC;
    }
L_08889BDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889C08;
      }
      goto L_08889BF8;
    }
L_08889BF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    ctx.gpr[5] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08889C08;
L_08889C08:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08889C14u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 765u, 0x08887C88u>(ctx, &aot_mem) && ctx.pc == 0x08889C14u) goto L_08889C14;
    return;
L_08889C14:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08889C20u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x08889C20u) goto L_08889C20;
    return;
L_08889C20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    ctx.gpr[6] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08889C38u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x08889C38u) goto L_08889C38;
    return;
L_08889C38:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889C58;
      }
      goto L_08889C44;
    }
L_08889C44:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08889C50u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 712u, 0x089B6D08u>(ctx, &aot_mem) && ctx.pc == 0x08889C50u) goto L_08889C50;
    return;
L_08889C50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A154;
      }
      goto L_08889C58;
    }
L_08889C58:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (48972u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08889D14;
      }
      goto L_08889C7C;
    }
L_08889C7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08889D14;
      }
      goto L_08889C88;
    }
L_08889C88:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08889CA8;
      }
      goto L_08889C98;
    }
L_08889C98:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08889CC0;
      }
      goto L_08889CA8;
    }
L_08889CA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08889CB8u);
    ctx.gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08889CB8u) goto L_08889CB8;
    return;
L_08889CB8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08889CF0;
      }
      goto L_08889CC0;
    }
L_08889CC0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08889CDC;
      }
      goto L_08889CCC;
    }
L_08889CCC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08889CF0;
      }
      goto L_08889CDC;
    }
L_08889CDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08889CECu);
    ctx.gpr[6] = (0u | 129u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08889CECu) goto L_08889CEC;
    return;
L_08889CEC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
    goto L_08889CF0;
L_08889CF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    ctx.gpr[5] = (2203u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27912));
    ctx.gpr[31] = (0x08889D04u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 47u, 0x088B43E0u>(ctx, &aot_mem) && ctx.pc == 0x08889D04u) goto L_08889D04;
    return;
L_08889D04:
    ctx.gpr[31] = (0x08889D0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 262u, 0x089A528Cu>(ctx, &aot_mem) && ctx.pc == 0x08889D0Cu) goto L_08889D0C;
    return;
L_08889D0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A154;
      }
      goto L_08889D14;
    }
L_08889D14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08889E58;
      }
      goto L_08889D20;
    }
L_08889D20:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(11) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889DA4;
      }
      goto L_08889D38;
    }
L_08889D38:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(800)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08889D50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1012)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08889D60u);
    ctx.gpr[6] = (0u | 196u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08889D60u) goto L_08889D60;
    return;
L_08889D60:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889DA4;
      }
      goto L_08889D6C;
    }
L_08889D6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1012)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08889D7Cu);
    ctx.gpr[6] = (0u | 194u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08889D7Cu) goto L_08889D7C;
    return;
L_08889D7C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889DA4;
      }
      goto L_08889D88;
    }
L_08889D88:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1012)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08889D98u);
    ctx.gpr[6] = (0u | 195u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08889D98u) goto L_08889D98;
    return;
L_08889D98:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889DA4;
      }
      goto L_08889DA4;
    }
L_08889DA4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(11) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889DEC;
      }
      goto L_08889DBC;
    }
L_08889DBC:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(848)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08889DD4:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889DEC;
      }
      goto L_08889DE0;
    }
L_08889DE0:
    ctx.gpr[4] = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889DEC;
      }
      goto L_08889DEC;
    }
L_08889DEC:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[6] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08889E30;
      }
      goto L_08889DFC;
    }
L_08889DFC:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08889E30;
      }
      goto L_08889E08;
    }
L_08889E08:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(543)));
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(543), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    ctx.gpr[5] = (2185u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10540));
    ctx.gpr[31] = (0x08889E28u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 47u, 0x088B43E0u>(ctx, &aot_mem) && ctx.pc == 0x08889E28u) goto L_08889E28;
    return;
L_08889E28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889E48;
      }
      goto L_08889E30;
    }
L_08889E30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    ctx.gpr[5] = (2202u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(15236));
    ctx.gpr[31] = (0x08889E44u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 47u, 0x088B43E0u>(ctx, &aot_mem) && ctx.pc == 0x08889E44u) goto L_08889E44;
    return;
L_08889E44:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08889E48;
L_08889E48:
    ctx.gpr[31] = (0x08889E50u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 262u, 0x089A528Cu>(ctx, &aot_mem) && ctx.pc == 0x08889E50u) goto L_08889E50;
    return;
L_08889E50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A154;
      }
      goto L_08889E58;
    }
L_08889E58:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[18] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[5] = (0u | 15u);
      if (branch_taken) {
          goto L_08889F0C;
      }
      goto L_08889E68;
    }
L_08889E68:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 12u);
      if (branch_taken) {
          goto L_08889E88;
      }
      goto L_08889E70;
    }
L_08889E70:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888A014;
      }
      goto L_08889E78;
    }
L_08889E78:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08889F90;
      }
      goto L_08889E80;
    }
L_08889E80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A098;
      }
      goto L_08889E88;
    }
L_08889E88:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889EA8;
      }
      goto L_08889E90;
    }
L_08889E90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08889EA0u);
    ctx.gpr[6] = (0u | 130u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08889EA0u) goto L_08889EA0;
    return;
L_08889EA0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08889F04;
      }
      goto L_08889EA8;
    }
L_08889EA8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889ED0;
      }
      goto L_08889EB8;
    }
L_08889EB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08889EC8u);
    ctx.gpr[6] = (0u | 182u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08889EC8u) goto L_08889EC8;
    return;
L_08889EC8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08889F04;
      }
      goto L_08889ED0;
    }
L_08889ED0:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889EF0;
      }
      goto L_08889ED8;
    }
L_08889ED8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08889EE8u);
    ctx.gpr[6] = (0u | 83u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08889EE8u) goto L_08889EE8;
    return;
L_08889EE8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08889F04;
      }
      goto L_08889EF0;
    }
L_08889EF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08889F00u);
    ctx.gpr[6] = (0u | 82u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08889F00u) goto L_08889F00;
    return;
L_08889F00:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
    goto L_08889F04;
L_08889F04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A098;
      }
      goto L_08889F0C;
    }
L_08889F0C:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889F2C;
      }
      goto L_08889F14;
    }
L_08889F14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08889F24u);
    ctx.gpr[6] = (0u | 130u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08889F24u) goto L_08889F24;
    return;
L_08889F24:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08889F88;
      }
      goto L_08889F2C;
    }
L_08889F2C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889F54;
      }
      goto L_08889F3C;
    }
L_08889F3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08889F4Cu);
    ctx.gpr[6] = (0u | 173u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08889F4Cu) goto L_08889F4C;
    return;
L_08889F4C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08889F88;
      }
      goto L_08889F54;
    }
L_08889F54:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889F74;
      }
      goto L_08889F5C;
    }
L_08889F5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08889F6Cu);
    ctx.gpr[6] = (0u | 83u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08889F6Cu) goto L_08889F6C;
    return;
L_08889F6C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08889F88;
      }
      goto L_08889F74;
    }
L_08889F74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08889F84u);
    ctx.gpr[6] = (0u | 82u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08889F84u) goto L_08889F84;
    return;
L_08889F84:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
    goto L_08889F88;
L_08889F88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A098;
      }
      goto L_08889F90;
    }
L_08889F90:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889FB0;
      }
      goto L_08889F98;
    }
L_08889F98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08889FA8u);
    ctx.gpr[6] = (0u | 131u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08889FA8u) goto L_08889FA8;
    return;
L_08889FA8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0888A00C;
      }
      goto L_08889FB0;
    }
L_08889FB0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889FD8;
      }
      goto L_08889FC0;
    }
L_08889FC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08889FD0u);
    ctx.gpr[6] = (0u | 182u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08889FD0u) goto L_08889FD0;
    return;
L_08889FD0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0888A00C;
      }
      goto L_08889FD8;
    }
L_08889FD8:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889FF8;
      }
      goto L_08889FE0;
    }
L_08889FE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08889FF0u);
    ctx.gpr[6] = (0u | 123u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08889FF0u) goto L_08889FF0;
    return;
L_08889FF0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0888A00C;
      }
      goto L_08889FF8;
    }
L_08889FF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0888A008u);
    ctx.gpr[6] = (0u | 122u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x0888A008u) goto L_0888A008;
    return;
L_0888A008:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
    goto L_0888A00C;
L_0888A00C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A098;
      }
      goto L_0888A014;
    }
L_0888A014:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A034;
      }
      goto L_0888A01C;
    }
L_0888A01C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0888A02Cu);
    ctx.gpr[6] = (0u | 131u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x0888A02Cu) goto L_0888A02C;
    return;
L_0888A02C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0888A090;
      }
      goto L_0888A034;
    }
L_0888A034:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A05C;
      }
      goto L_0888A044;
    }
L_0888A044:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0888A054u);
    ctx.gpr[6] = (0u | 177u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x0888A054u) goto L_0888A054;
    return;
L_0888A054:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0888A090;
      }
      goto L_0888A05C;
    }
L_0888A05C:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A07C;
      }
      goto L_0888A064;
    }
L_0888A064:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0888A074u);
    ctx.gpr[6] = (0u | 123u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x0888A074u) goto L_0888A074;
    return;
L_0888A074:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0888A090;
      }
      goto L_0888A07C;
    }
L_0888A07C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0888A08Cu);
    ctx.gpr[6] = (0u | 122u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x0888A08Cu) goto L_0888A08C;
    return;
L_0888A08C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
    goto L_0888A090;
L_0888A090:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A098;
      }
      goto L_0888A098;
    }
L_0888A098:
    ctx.gpr[31] = (0x0888A0A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 262u, 0x089A528Cu>(ctx, &aot_mem) && ctx.pc == 0x0888A0A0u) goto L_0888A0A0;
    return;
L_0888A0A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[23]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888A11C;
      }
      goto L_0888A0B8;
    }
L_0888A0B8:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[6] = (0u | 15u);
      if (branch_taken) {
          goto L_0888A0F8;
      }
      goto L_0888A0C8;
    }
L_0888A0C8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 12u);
      if (branch_taken) {
          goto L_0888A0EC;
      }
      goto L_0888A0D0;
    }
L_0888A0D0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0888A104;
      }
      goto L_0888A0D8;
    }
L_0888A0D8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_0888A110;
      }
      goto L_0888A0E0;
    }
L_0888A0E0:
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A110;
      }
      goto L_0888A0EC;
    }
L_0888A0EC:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A110;
      }
      goto L_0888A0F8;
    }
L_0888A0F8:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A110;
      }
      goto L_0888A104;
    }
L_0888A104:
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A110;
      }
      goto L_0888A110;
    }
L_0888A110:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(543)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(543), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0888A11C;
L_0888A11C:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A140;
      }
      goto L_0888A124;
    }
L_0888A124:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    ctx.gpr[5] = (2202u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(15236));
    ctx.gpr[31] = (0x0888A138u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 47u, 0x088B43E0u>(ctx, &aot_mem) && ctx.pc == 0x0888A138u) goto L_0888A138;
    return;
L_0888A138:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A154;
      }
      goto L_0888A140;
    }
L_0888A140:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    ctx.gpr[5] = (2185u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10540));
    ctx.gpr[31] = (0x0888A154u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 47u, 0x088B43E0u>(ctx, &aot_mem) && ctx.pc == 0x0888A154u) goto L_0888A154;
    return;
L_0888A154:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (65528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A188;
      }
      goto L_0888A178;
    }
L_0888A178:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_0888A188;
L_0888A188:
    ctx.gpr[31] = (0x0888A190u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 215u, 0x0899D83Cu>(ctx, &aot_mem) && ctx.pc == 0x0888A190u) goto L_0888A190;
    return;
L_0888A190:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0888A1D0;
      }
      goto L_0888A19C;
    }
L_0888A19C:
    ctx.gpr[31] = (0x0888A1A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x0888A1A4u) goto L_0888A1A4;
    return;
L_0888A1A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-497));
      if (branch_taken) {
          goto L_0888A1C0;
      }
      goto L_0888A1AC;
    }
L_0888A1AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] | 208u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0888A1D0;
      }
      goto L_0888A1C0;
    }
L_0888A1C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_0888A1D0;
L_0888A1D0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888A204:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(748)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0888A620;
      }
      goto L_0888A22C;
    }
L_0888A22C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48))))));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (0u | 196u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0888A310;
      }
      goto L_0888A244;
    }
L_0888A244:
    ctx.gpr[4] = (16051u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 206u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888A2A0;
      }
      goto L_0888A264;
    }
L_0888A264:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 207u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888A2A0;
      }
      goto L_0888A278;
    }
L_0888A278:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 202u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888A2A0;
      }
      goto L_0888A28C;
    }
L_0888A28C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 208u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888A2AC;
      }
      goto L_0888A2A0;
    }
L_0888A2A0:
    ctx.gpr[4] = (16140u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0888A2AC;
L_0888A2AC:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888A2FC;
      }
      goto L_0888A2BC;
    }
L_0888A2BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A2FC;
      }
      goto L_0888A2C8;
    }
L_0888A2C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888A2FC;
      }
      goto L_0888A2DC;
    }
L_0888A2DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888A2F4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 77u, 0x08A407CCu>(ctx, &aot_mem) && ctx.pc == 0x0888A2F4u) goto L_0888A2F4;
    return;
L_0888A2F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A308;
      }
      goto L_0888A2FC;
    }
L_0888A2FC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888A308u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 201u, 0x0888D060u>(ctx, &aot_mem) && ctx.pc == 0x0888A308u) goto L_0888A308;
    return;
L_0888A308:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A620;
      }
      goto L_0888A310;
    }
L_0888A310:
    ctx.gpr[4] = (0u | 130u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 131u);
      if (branch_taken) {
          goto L_0888A324;
      }
      goto L_0888A31C;
    }
L_0888A31C:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0888A3C8;
      }
      goto L_0888A324;
    }
L_0888A324:
    ctx.gpr[4] = (15759u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888A3B4;
      }
      goto L_0888A340;
    }
L_0888A340:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A3B4;
      }
      goto L_0888A34C;
    }
L_0888A34C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A370;
      }
      goto L_0888A35C;
    }
L_0888A35C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A3B4;
      }
      goto L_0888A370;
    }
L_0888A370:
    ctx.gpr[4] = (0u | 130u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0888A398;
      }
      goto L_0888A37C;
    }
L_0888A37C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 45u);
    ctx.gpr[6] = (0u | 15u);
    ctx.gpr[31] = (0x0888A390u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 428u, 0x088226F8u>(ctx, &aot_mem) && ctx.pc == 0x0888A390u) goto L_0888A390;
    return;
L_0888A390:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A3C0;
      }
      goto L_0888A398;
    }
L_0888A398:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 45u);
    ctx.gpr[6] = (0u | 11u);
    ctx.gpr[31] = (0x0888A3ACu);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 428u, 0x088226F8u>(ctx, &aot_mem) && ctx.pc == 0x0888A3ACu) goto L_0888A3AC;
    return;
L_0888A3AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A3C0;
      }
      goto L_0888A3B4;
    }
L_0888A3B4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888A3C0u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 201u, 0x0888D060u>(ctx, &aot_mem) && ctx.pc == 0x0888A3C0u) goto L_0888A3C0;
    return;
L_0888A3C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A620;
      }
      goto L_0888A3C8;
    }
L_0888A3C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(224));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(48))))));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0888A3F8u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888A3F8u) goto L_0888A3F8;
    return;
L_0888A3F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A4B0;
      }
      goto L_0888A404;
    }
L_0888A404:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (48972u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888A43C;
      }
      goto L_0888A428;
    }
L_0888A428:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888A434u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 201u, 0x0888D060u>(ctx, &aot_mem) && ctx.pc == 0x0888A434u) goto L_0888A434;
    return;
L_0888A434:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A4B0;
      }
      goto L_0888A43C;
    }
L_0888A43C:
    ctx.gpr[4] = (0u | 124u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 84u);
      if (branch_taken) {
          goto L_0888A468;
      }
      goto L_0888A448;
    }
L_0888A448:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (16025u << 16u);
      if (branch_taken) {
          goto L_0888A468;
      }
      goto L_0888A450;
    }
L_0888A450:
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888A47C;
      }
      goto L_0888A468;
    }
L_0888A468:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888A474u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 201u, 0x0888D060u>(ctx, &aot_mem) && ctx.pc == 0x0888A474u) goto L_0888A474;
    return;
L_0888A474:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A4B0;
      }
      goto L_0888A47C;
    }
L_0888A47C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 164u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888A4A4;
      }
      goto L_0888A490;
    }
L_0888A490:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888A49Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 201u, 0x0888D060u>(ctx, &aot_mem) && ctx.pc == 0x0888A49Cu) goto L_0888A49C;
    return;
L_0888A49C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A4B0;
      }
      goto L_0888A4A4;
    }
L_0888A4A4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888A4B0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 201u, 0x0888D060u>(ctx, &aot_mem) && ctx.pc == 0x0888A4B0u) goto L_0888A4B0;
    return;
L_0888A4B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 60u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888A620;
      }
      goto L_0888A4C0;
    }
L_0888A4C0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A598;
      }
      goto L_0888A4D8;
    }
L_0888A4D8:
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[5] = (15651u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 55051u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888A584;
      }
      goto L_0888A570;
    }
L_0888A570:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1828)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A598;
      }
      goto L_0888A584;
    }
L_0888A584:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888A4D8;
      }
      goto L_0888A598;
    }
L_0888A598:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A620;
      }
      goto L_0888A5A0;
    }
L_0888A5A0:
    ctx.gpr[31] = (0x0888A5A8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x0888A5A8u) goto L_0888A5A8;
    return;
L_0888A5A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A5E0;
      }
      goto L_0888A5B0;
    }
L_0888A5B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888A5E0;
      }
      goto L_0888A5C0;
    }
L_0888A5C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888A5E0;
      }
      goto L_0888A5D0;
    }
L_0888A5D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888A620;
      }
      goto L_0888A5E0;
    }
L_0888A5E0:
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888A620;
      }
      goto L_0888A5FC;
    }
L_0888A5FC:
    ctx.gpr[31] = (0x0888A604u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x0888A604u) goto L_0888A604;
    return;
L_0888A604:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A620;
      }
      goto L_0888A60C;
    }
L_0888A60C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1000u);
    ctx.gpr[6] = (0u | 25u);
    ctx.gpr[31] = (0x0888A620u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 98u, 0x089A0734u>(ctx, &aot_mem) && ctx.pc == 0x0888A620u) goto L_0888A620;
    return;
L_0888A620:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888A63C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-288));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[31]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[7] = (0u | 11u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0888A698;
      }
      goto L_0888A668;
    }
L_0888A668:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A690;
      }
      goto L_0888A674;
    }
L_0888A674:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), 0u);
        goto L_0888A690;
    }
    goto L_0888A680;
L_0888A680:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x0888A68Cu);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x0888A68Cu) goto L_0888A68C;
    return;
L_0888A68C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), 0u);
    goto L_0888A690;
L_0888A690:
    ctx.gpr[31] = (0x0888A698u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x0888A698u) goto L_0888A698;
    return;
L_0888A698:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(744)));
    ctx.gpr[6] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x0888A6C8u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x0888A6C8u) goto L_0888A6C8;
    return;
L_0888A6C8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0888A6D4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 765u, 0x08887C88u>(ctx, &aot_mem) && ctx.pc == 0x0888A6D4u) goto L_0888A6D4;
    return;
L_0888A6D4:
    ctx.gpr[31] = (0x0888A6DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 824u, 0x0889FD00u>(ctx, &aot_mem) && ctx.pc == 0x0888A6DCu) goto L_0888A6DC;
    return;
L_0888A6DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A798;
      }
      goto L_0888A6E4;
    }
L_0888A6E4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888A730u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 110u, 0x0888483Cu>(ctx, &aot_mem) && ctx.pc == 0x0888A730u) goto L_0888A730;
    return;
L_0888A730:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 11u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(1260), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x0888A760u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 712u, 0x089B6D08u>(ctx, &aot_mem) && ctx.pc == 0x0888A760u) goto L_0888A760;
    return;
L_0888A760:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1296), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1296));
    ctx.gpr[31] = (0x0888A78Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x0888A78Cu) goto L_0888A78C;
    return;
L_0888A78C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1264), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A9F0;
      }
      goto L_0888A798;
    }
L_0888A798:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1000));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888A934;
      }
      goto L_0888A7A8;
    }
L_0888A7A8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888A920;
      }
      goto L_0888A7B8;
    }
L_0888A7B8:
    ctx.gpr[4] = (0u | 11u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(1260), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x0888A7CCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 712u, 0x089B6D08u>(ctx, &aot_mem) && ctx.pc == 0x0888A7CCu) goto L_0888A7CC;
    return;
L_0888A7CC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0888A7F4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x0888A7F4u) goto L_0888A7F4;
    return;
L_0888A7F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
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
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (16261u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A908;
      }
      goto L_0888A8F8;
    }
L_0888A8F8:
    ctx.gpr[31] = (0x0888A900u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 620u, 0x0889B67Cu>(ctx, &aot_mem) && ctx.pc == 0x0888A900u) goto L_0888A900;
    return;
L_0888A900:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A918;
      }
      goto L_0888A908;
    }
L_0888A908:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1332), ctx.gpr[16]);
    ctx.gpr[31] = (0x0888A914u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 620u, 0x0889B67Cu>(ctx, &aot_mem) && ctx.pc == 0x0888A914u) goto L_0888A914;
    return;
L_0888A914:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1332), 0u);
    goto L_0888A918;
L_0888A918:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888AA24;
      }
      goto L_0888A920;
    }
L_0888A920:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0888A934;
L_0888A934:
    ctx.gpr[4] = (0u | 11u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(1260), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x0888A948u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 712u, 0x089B6D08u>(ctx, &aot_mem) && ctx.pc == 0x0888A948u) goto L_0888A948;
    return;
L_0888A948:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1296), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1296));
    ctx.gpr[31] = (0x0888A974u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x0888A974u) goto L_0888A974;
    return;
L_0888A974:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1264), ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16409u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x0888A9D0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 95u, 0x088C06D4u>(ctx, &aot_mem) && ctx.pc == 0x0888A9D0u) goto L_0888A9D0;
    return;
L_0888A9D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A9F0;
      }
      goto L_0888A9D8;
    }
L_0888A9D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (16261u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0888A9F0;
L_0888A9F0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0888AA14u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x0888AA14u) goto L_0888AA14;
    return;
L_0888AA14:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_0888AA24;
L_0888AA24:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888AA40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-480));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(420)));
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0888ABCC;
      }
      goto L_0888AA68;
    }
L_0888AA68:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0888AA74u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-264));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 109u, 0x08884810u>(ctx, &aot_mem) && ctx.pc == 0x0888AA74u) goto L_0888AA74;
    return;
L_0888AA74:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (ctx.gpr[5] << 24u);
    ctx.gpr[31] = (0x0888AA90u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 168u, 0x088A8A20u>(ctx, &aot_mem) && ctx.pc == 0x0888AA90u) goto L_0888AA90;
    return;
L_0888AA90:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888ABC4;
      }
      goto L_0888AA9C;
    }
L_0888AA9C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888ABC4;
      }
      goto L_0888AAC4;
    }
L_0888AAC4:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-236));
    ctx.gpr[31] = (0x0888AAD4u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 109u, 0x08884810u>(ctx, &aot_mem) && ctx.pc == 0x0888AAD4u) goto L_0888AAD4;
    return;
L_0888AAD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1332), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888ABC4;
      }
      goto L_0888AAE4;
    }
L_0888AAE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 50u);
      if (branch_taken) {
          goto L_0888AB28;
      }
      goto L_0888AAF4;
    }
L_0888AAF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888AB1C;
      }
      goto L_0888AB00;
    }
L_0888AB00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_0888AB1C;
    }
    goto L_0888AB0C;
L_0888AB0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x0888AB18u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x0888AB18u) goto L_0888AB18;
    return;
L_0888AB18:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_0888AB1C;
L_0888AB1C:
    ctx.gpr[31] = (0x0888AB24u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x0888AB24u) goto L_0888AB24;
    return;
L_0888AB24:
    ctx.gpr[4] = (0u | 50u);
    goto L_0888AB28;
L_0888AB28:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1336), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1412), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] << 9u);
    ctx.gpr[4] = (ctx.gpr[6] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888AB68u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 725u, 0x08887A68u>(ctx, &aot_mem) && ctx.pc == 0x0888AB68u) goto L_0888AB68;
    return;
L_0888AB68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x0888AB74u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 193u, 0x088A1304u>(ctx, &aot_mem) && ctx.pc == 0x0888AB74u) goto L_0888AB74;
    return;
L_0888AB74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(420)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(420), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(324), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] << 9u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x0888ABC4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 369u, 0x088EE5C0u>(ctx, &aot_mem) && ctx.pc == 0x0888ABC4u) goto L_0888ABC4;
    return;
L_0888ABC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B3D4;
      }
      goto L_0888ABCC;
    }
L_0888ABCC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(15760));
    ctx.gpr[31] = (0x0888ABE0u);
    ctx.gpr[6] = (0u | 30u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x0888ABE0u) goto L_0888ABE0;
    return;
L_0888ABE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B3D4;
      }
      goto L_0888ABEC;
    }
L_0888ABEC:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[31] = (0x0888ABFCu);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(429))))));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 650u, 0x088A7DE8u>(ctx, &aot_mem) && ctx.pc == 0x0888ABFCu) goto L_0888ABFC;
    return;
L_0888ABFC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 68u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 65u);
      if (branch_taken) {
          goto L_0888B090;
      }
      goto L_0888AC14;
    }
L_0888AC14:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 66u);
      if (branch_taken) {
          goto L_0888B090;
      }
      goto L_0888AC1C;
    }
L_0888AC1C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 193u);
      if (branch_taken) {
          goto L_0888B090;
      }
      goto L_0888AC24;
    }
L_0888AC24:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 120u);
      if (branch_taken) {
          goto L_0888B090;
      }
      goto L_0888AC2C;
    }
L_0888AC2C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888B090;
      }
      goto L_0888AC34;
    }
L_0888AC34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(448)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0888AC60;
      }
      goto L_0888AC4C;
    }
L_0888AC4C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0888AC60;
L_0888AC60:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x0888AC6Cu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(464));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 481u, 0x08A05DFCu>(ctx, &aot_mem) && ctx.pc == 0x0888AC6Cu) goto L_0888AC6C;
    return;
L_0888AC6C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(112));
        goto L_0888AC98;
    }
    goto L_0888AC90;
L_0888AC90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_0888AC98;
      }
      goto L_0888AC98;
    }
L_0888AC98:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888ACB0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 393u, 0x0899E3A4u>(ctx, &aot_mem) && ctx.pc == 0x0888ACB0u) goto L_0888ACB0;
    return;
L_0888ACB0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0888AD20u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 509u, 0x08A0654Cu>(ctx, &aot_mem) && ctx.pc == 0x0888AD20u) goto L_0888AD20;
    return;
L_0888AD20:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(544)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888AD34u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 519u, 0x08A0695Cu>(ctx, &aot_mem) && ctx.pc == 0x0888AD34u) goto L_0888AD34;
    return;
L_0888AD34:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B02C;
      }
      goto L_0888AD3C;
    }
L_0888AD3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(432)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0888AEB4;
      }
      goto L_0888AD48;
    }
L_0888AD48:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888AEB4;
      }
      goto L_0888AD58;
    }
L_0888AD58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_0888AD84;
    }
    goto L_0888AD64;
L_0888AD64:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    ctx.gpr[31] = (0x0888AD74u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x0888AD74u) goto L_0888AD74;
    return;
L_0888AD74:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_0888AD84;
L_0888AD84:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888AEA4;
      }
      goto L_0888ADA8;
    }
L_0888ADA8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(432), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888ADF8;
      }
      goto L_0888ADC8;
    }
L_0888ADC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x0888ADF0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x0888ADF0u) goto L_0888ADF0;
    return;
L_0888ADF0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0888AE24;
      }
      goto L_0888ADF8;
    }
L_0888ADF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(580)));
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (17096u << 16u);
    ctx.gpr[31] = (0x0888AE20u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x0888AE20u) goto L_0888AE20;
    return;
L_0888AE20:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
    goto L_0888AE24;
L_0888AE24:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-176));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x0888AE3Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 109u, 0x08884810u>(ctx, &aot_mem) && ctx.pc == 0x0888AE3Cu) goto L_0888AE3C;
    return;
L_0888AE3C:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 193u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888AE88;
      }
      goto L_0888AE5C;
    }
L_0888AE5C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
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
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888AE88u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x0888AE88u) goto L_0888AE88;
    return;
L_0888AE88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    ctx.gpr[5] = (2184u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24388));
    ctx.gpr[31] = (0x0888AE9Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 47u, 0x088B43E0u>(ctx, &aot_mem) && ctx.pc == 0x0888AE9Cu) goto L_0888AE9C;
    return;
L_0888AE9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888AEB4;
      }
      goto L_0888AEA4;
    }
L_0888AEA4:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888AD58;
      }
      goto L_0888AEB4;
    }
L_0888AEB4:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-132));
    ctx.gpr[31] = (0x0888AEC4u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(422)));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 109u, 0x08884810u>(ctx, &aot_mem) && ctx.pc == 0x0888AEC4u) goto L_0888AEC4;
    return;
L_0888AEC4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(422)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888AF48;
      }
      goto L_0888AED4;
    }
L_0888AED4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(422)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(422), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(422)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 111 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888AF00;
      }
      goto L_0888AEF0;
    }
L_0888AEF0:
    ctx.gpr[31] = (0x0888AEF8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 193u, 0x0888502Cu>(ctx, &aot_mem) && ctx.pc == 0x0888AEF8u) goto L_0888AEF8;
    return;
L_0888AEF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B040;
      }
      goto L_0888AF00;
    }
L_0888AF00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_0888AF2C;
    }
    goto L_0888AF0C;
L_0888AF0C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.gpr[31] = (0x0888AF1Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x0888AF1Cu) goto L_0888AF1C;
    return;
L_0888AF1C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_0888AF2C;
L_0888AF2C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(181)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888B040;
      }
      goto L_0888AF3C;
    }
L_0888AF3C:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(422), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0888B040;
      }
      goto L_0888AF48;
    }
L_0888AF48:
    ctx.gpr[18] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-116));
      if (branch_taken) {
          goto L_0888AF74;
      }
      goto L_0888AF58;
    }
L_0888AF58:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(417));
    ctx.gpr[31] = (0x0888AF68u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x0888AF68u) goto L_0888AF68;
    return;
L_0888AF68:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(417)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0888AF74;
L_0888AF74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(181)));
    ctx.gpr[31] = (0x0888AF84u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 109u, 0x08884810u>(ctx, &aot_mem) && ctx.pc == 0x0888AF84u) goto L_0888AF84;
    return;
L_0888AF84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_0888AFB0;
    }
    goto L_0888AF90;
L_0888AF90:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(418));
    ctx.gpr[31] = (0x0888AFA0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x0888AFA0u) goto L_0888AFA0;
    return;
L_0888AFA0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(418)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_0888AFB0;
L_0888AFB0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    ctx.gpr[18] = (ctx.gpr[5] ^ 55u);
    ctx.gpr[18] = (ctx.gpr[18] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_0888AFE4;
    }
    goto L_0888AFC4;
L_0888AFC4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(419));
    ctx.gpr[31] = (0x0888AFD4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x0888AFD4u) goto L_0888AFD4;
    return;
L_0888AFD4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(419)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_0888AFE4;
L_0888AFE4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(181)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888AFFC;
      }
      goto L_0888AFF4;
    }
L_0888AFF4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B024;
      }
      goto L_0888AFFC;
    }
L_0888AFFC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(422)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888B01C;
      }
      goto L_0888B00C;
    }
L_0888B00C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(422)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(422), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0888B024;
      }
      goto L_0888B01C;
    }
L_0888B01C:
    ctx.gpr[31] = (0x0888B024u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 193u, 0x0888502Cu>(ctx, &aot_mem) && ctx.pc == 0x0888B024u) goto L_0888B024;
    return;
L_0888B024:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B040;
      }
      goto L_0888B02C;
    }
L_0888B02C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0888B038u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-88));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 109u, 0x08884810u>(ctx, &aot_mem) && ctx.pc == 0x0888B038u) goto L_0888B038;
    return;
L_0888B038:
    ctx.gpr[31] = (0x0888B040u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 193u, 0x0888502Cu>(ctx, &aot_mem) && ctx.pc == 0x0888B040u) goto L_0888B040;
    return;
L_0888B040:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
        goto L_0888B068;
    }
    goto L_0888B050;
L_0888B050:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
        goto L_0888B068;
    }
    goto L_0888B05C;
L_0888B05C:
    ctx.gpr[31] = (0x0888B064u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x0888B064u) goto L_0888B064;
    return;
L_0888B064:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    goto L_0888B068;
L_0888B068:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B088;
      }
      goto L_0888B074;
    }
L_0888B074:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B088;
      }
      goto L_0888B080;
    }
L_0888B080:
    ctx.gpr[31] = (0x0888B088u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x0888B088u) goto L_0888B088;
    return;
L_0888B088:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B3D4;
      }
      goto L_0888B090;
    }
L_0888B090:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(429))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (ctx.gpr[6] << 24u);
    ctx.gpr[31] = (0x0888B0B0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 168u, 0x088A8A20u>(ctx, &aot_mem) && ctx.pc == 0x0888B0B0u) goto L_0888B0B0;
    return;
L_0888B0B0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B1B4;
      }
      goto L_0888B0BC;
    }
L_0888B0BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
        goto L_0888B0E8;
    }
    goto L_0888B0C8;
L_0888B0C8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(420));
    ctx.gpr[31] = (0x0888B0D8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x0888B0D8u) goto L_0888B0D8;
    return;
L_0888B0D8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(420)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    goto L_0888B0E8;
L_0888B0E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888B1B4;
      }
      goto L_0888B104;
    }
L_0888B104:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0888B110u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-52));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 109u, 0x08884810u>(ctx, &aot_mem) && ctx.pc == 0x0888B110u) goto L_0888B110;
    return;
L_0888B110:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888B128u);
    ctx.gpr[5] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 144u, 0x089B07D0u>(ctx, &aot_mem) && ctx.pc == 0x0888B128u) goto L_0888B128;
    return;
L_0888B128:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[31] = (0x0888B138u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 129u, 0x088A86F8u>(ctx, &aot_mem) && ctx.pc == 0x0888B138u) goto L_0888B138;
    return;
L_0888B138:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 55u);
      if (branch_taken) {
          goto L_0888B17C;
      }
      goto L_0888B148;
    }
L_0888B148:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B170;
      }
      goto L_0888B154;
    }
L_0888B154:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_0888B170;
    }
    goto L_0888B160;
L_0888B160:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x0888B16Cu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x0888B16Cu) goto L_0888B16C;
    return;
L_0888B16C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_0888B170;
L_0888B170:
    ctx.gpr[31] = (0x0888B178u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x0888B178u) goto L_0888B178;
    return;
L_0888B178:
    ctx.gpr[4] = (0u | 55u);
    goto L_0888B17C;
L_0888B17C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[31] = (0x0888B1ACu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 419u, 0x089D6E20u>(ctx, &aot_mem) && ctx.pc == 0x0888B1ACu) goto L_0888B1AC;
    return;
L_0888B1AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B3D4;
      }
      goto L_0888B1B4;
    }
L_0888B1B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 193u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888B2EC;
      }
      goto L_0888B1C8;
    }
L_0888B1C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 120u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888B2EC;
      }
      goto L_0888B1DC;
    }
L_0888B1DC:
    ctx.gpr[18] = (0u | 0u);
    goto L_0888B1E0;
L_0888B1E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_0888B20C;
    }
    goto L_0888B1EC;
L_0888B1EC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(421));
    ctx.gpr[31] = (0x0888B1FCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x0888B1FCu) goto L_0888B1FC;
    return;
L_0888B1FC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(421)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_0888B20C;
L_0888B20C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(214)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B2E4;
      }
      goto L_0888B21C;
    }
L_0888B21C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_0888B248;
    }
    goto L_0888B228;
L_0888B228:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(422));
    ctx.gpr[31] = (0x0888B238u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x0888B238u) goto L_0888B238;
    return;
L_0888B238:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(422)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_0888B248;
L_0888B248:
    ctx.gpr[5] = (ctx.gpr[18] << 3u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(432)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888B2DC;
      }
      goto L_0888B280;
    }
L_0888B280:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_0888B2AC;
    }
    goto L_0888B28C;
L_0888B28C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(423));
    ctx.gpr[31] = (0x0888B29Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x0888B29Cu) goto L_0888B29C;
    return;
L_0888B29C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(423)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_0888B2AC;
L_0888B2AC:
    ctx.gpr[5] = (ctx.gpr[18] << 3u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x0888B2CCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 28u, 0x088B4280u>(ctx, &aot_mem) && ctx.pc == 0x0888B2CCu) goto L_0888B2CC;
    return;
L_0888B2CC:
    ctx.gpr[31] = (0x0888B2D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 303u, 0x088859F0u>(ctx, &aot_mem) && ctx.pc == 0x0888B2D4u) goto L_0888B2D4;
    return;
L_0888B2D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B3D4;
      }
      goto L_0888B2DC;
    }
L_0888B2DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0888B1E0;
      }
      goto L_0888B2E4;
    }
L_0888B2E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B3D4;
      }
      goto L_0888B2EC;
    }
L_0888B2EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(752)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(756)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0888B350;
      }
      goto L_0888B334;
    }
L_0888B334:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888B350;
      }
      goto L_0888B348;
    }
L_0888B348:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0888B35C;
      }
      goto L_0888B350;
    }
L_0888B350:
    ctx.gpr[31] = (0x0888B358u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x0888B358u) goto L_0888B358;
    return;
L_0888B358:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0888B35C;
L_0888B35C:
    ctx.gpr[31] = (0x0888B364u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 490u, 0x08A05FD4u>(ctx, &aot_mem) && ctx.pc == 0x0888B364u) goto L_0888B364;
    return;
L_0888B364:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0888B37Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 110u, 0x0888483Cu>(ctx, &aot_mem) && ctx.pc == 0x0888B37Cu) goto L_0888B37C;
    return;
L_0888B37C:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B3D4;
      }
      goto L_0888B3C0;
    }
L_0888B3C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B3D4;
      }
      goto L_0888B3CC;
    }
L_0888B3CC:
    ctx.gpr[31] = (0x0888B3D4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x0888B3D4u) goto L_0888B3D4;
    return;
L_0888B3D4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(460)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888B3F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    ctx.gpr[19] = (ctx.gpr[7] & 255u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[20] = (0u | 57u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[20];
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0888B710;
      }
      goto L_0888B438;
    }
L_0888B438:
    ctx.gpr[31] = (0x0888B440u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 262u, 0x089A528Cu>(ctx, &aot_mem) && ctx.pc == 0x0888B440u) goto L_0888B440;
    return;
L_0888B440:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888B484u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x0888B484u) goto L_0888B484;
    return;
L_0888B484:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1328), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1328));
    ctx.gpr[31] = (0x0888B494u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x0888B494u) goto L_0888B494;
    return;
L_0888B494:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    ctx.gpr[21] = (0u | 5u);
    ctx.gpr[22] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    ctx.gpr[23] = (0u | 11u);
      if (branch_taken) {
          goto L_0888B4EC;
      }
      goto L_0888B4A8;
    }
L_0888B4A8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1332))))));
    ctx.gpr[4] = (ctx.gpr[4] | 128u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1332), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 19u);
      if (branch_taken) {
          goto L_0888B4D4;
      }
      goto L_0888B4C0;
    }
L_0888B4C0:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0888B4E0;
      }
      goto L_0888B4C8;
    }
L_0888B4C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888B4E0;
      }
      goto L_0888B4D4;
    }
L_0888B4D4:
    ctx.gpr[4] = (0u | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1260), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0888B4F0;
      }
      goto L_0888B4E0;
    }
L_0888B4E0:
    ctx.gpr[4] = (0u | 15u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1260), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0888B4F0;
      }
      goto L_0888B4EC;
    }
L_0888B4EC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1260), static_cast<std::uint16_t>(ctx.gpr[18]));
    goto L_0888B4F0;
L_0888B4F0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_0888B53C;
      }
      goto L_0888B4FC;
    }
L_0888B4FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-497));
      if (branch_taken) {
          goto L_0888B52C;
      }
      goto L_0888B508;
    }
L_0888B508:
    ctx.gpr[31] = (0x0888B510u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x0888B510u) goto L_0888B510;
    return;
L_0888B510:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B52C;
      }
      goto L_0888B518;
    }
L_0888B518:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] | 208u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0888B53C;
      }
      goto L_0888B52C;
    }
L_0888B52C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_0888B53C;
L_0888B53C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888B548u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 765u, 0x08887C88u>(ctx, &aot_mem) && ctx.pc == 0x0888B548u) goto L_0888B548;
    return;
L_0888B548:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888B554u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x0888B554u) goto L_0888B554;
    return;
L_0888B554:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_0888B574;
      }
      goto L_0888B560;
    }
L_0888B560:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888B56Cu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 201u, 0x0888D060u>(ctx, &aot_mem) && ctx.pc == 0x0888B56Cu) goto L_0888B56C;
    return;
L_0888B56C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B580;
      }
      goto L_0888B574;
    }
L_0888B574:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888B580u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 201u, 0x0888D060u>(ctx, &aot_mem) && ctx.pc == 0x0888B580u) goto L_0888B580;
    return;
L_0888B580:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    if (ctx.gpr[4] != ctx.gpr[23]) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[20]);
        goto L_0888B5C4;
    }
    goto L_0888B590;
L_0888B590:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B5B8;
      }
      goto L_0888B59C;
    }
L_0888B59C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_0888B5B8;
    }
    goto L_0888B5A8;
L_0888B5A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x0888B5B4u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x0888B5B4u) goto L_0888B5B4;
    return;
L_0888B5B4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_0888B5B8;
L_0888B5B8:
    ctx.gpr[31] = (0x0888B5C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x0888B5C0u) goto L_0888B5C0;
    return;
L_0888B5C0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[20]);
    goto L_0888B5C4;
L_0888B5C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (65528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[19] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] << 12u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0888B618u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x0888B618u) goto L_0888B618;
    return;
L_0888B618:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x0888B62Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x0888B62Cu) goto L_0888B62C;
    return;
L_0888B62C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888B644;
      }
      goto L_0888B638;
    }
L_0888B638:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888B644u);
    ctx.gpr[5] = (0u | 123u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x0888B644u) goto L_0888B644;
    return;
L_0888B644:
    ctx.gpr[31] = (0x0888B64Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 215u, 0x0899D83Cu>(ctx, &aot_mem) && ctx.pc == 0x0888B64Cu) goto L_0888B64C;
    return;
L_0888B64C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_0888B6B4;
      }
      goto L_0888B65C;
    }
L_0888B65C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_0888B684;
      }
      goto L_0888B668;
    }
L_0888B668:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_0888B684;
      }
      goto L_0888B674;
    }
L_0888B674:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[6] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0888B68C;
      }
      goto L_0888B684;
    }
L_0888B684:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 5u);
      if (branch_taken) {
          goto L_0888B704;
      }
      goto L_0888B68C;
    }
L_0888B68C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[6] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0888B6AC;
      }
      goto L_0888B69C;
    }
L_0888B69C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[6] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0888B704;
      }
      goto L_0888B6AC;
    }
L_0888B6AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 10u);
      if (branch_taken) {
          goto L_0888B704;
      }
      goto L_0888B6B4;
    }
L_0888B6B4:
    ctx.gpr[16] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888B6F4;
      }
      goto L_0888B6C4;
    }
L_0888B6C4:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[22];
    ctx.gpr[5] = (0u | 12u);
      if (branch_taken) {
          goto L_0888B6E8;
      }
      goto L_0888B6CC;
    }
L_0888B6CC:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888B700;
      }
      goto L_0888B6D4;
    }
L_0888B6D4:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_0888B704;
      }
      goto L_0888B6DC;
    }
L_0888B6DC:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B704;
      }
      goto L_0888B6E8;
    }
L_0888B6E8:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B704;
      }
      goto L_0888B6F4;
    }
L_0888B6F4:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B704;
      }
      goto L_0888B700;
    }
L_0888B700:
    ctx.gpr[4] = (0u | 8u);
    goto L_0888B704;
L_0888B704:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(543)));
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(543), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0888B710;
L_0888B710:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888B740:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(748)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0888B8AC;
      }
      goto L_0888B758;
    }
L_0888B758:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888B7A4;
      }
      goto L_0888B76C;
    }
L_0888B76C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B7A4;
      }
      goto L_0888B780;
    }
L_0888B780:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (16307u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888B7CC;
      }
      goto L_0888B7A4;
    }
L_0888B7A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 193u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888B7E0;
      }
      goto L_0888B7B8;
    }
L_0888B7B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888B7C4u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 201u, 0x0888D060u>(ctx, &aot_mem) && ctx.pc == 0x0888B7C4u) goto L_0888B7C4;
    return;
L_0888B7C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B844;
      }
      goto L_0888B7CC;
    }
L_0888B7CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    ctx.gpr[31] = (0x0888B7D8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 119u, 0x089B860Cu>(ctx, &aot_mem) && ctx.pc == 0x0888B7D8u) goto L_0888B7D8;
    return;
L_0888B7D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BA74;
      }
      goto L_0888B7E0;
    }
L_0888B7E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (16307u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888B818;
      }
      goto L_0888B804;
    }
L_0888B804:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888B810u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 201u, 0x0888D060u>(ctx, &aot_mem) && ctx.pc == 0x0888B810u) goto L_0888B810;
    return;
L_0888B810:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B844;
      }
      goto L_0888B818;
    }
L_0888B818:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888B844u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 201u, 0x0888D060u>(ctx, &aot_mem) && ctx.pc == 0x0888B844u) goto L_0888B844;
    return;
L_0888B844:
    ctx.gpr[31] = (0x0888B84Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 126u, 0x088849C4u>(ctx, &aot_mem) && ctx.pc == 0x0888B84Cu) goto L_0888B84C;
    return;
L_0888B84C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 38u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888B8A4;
      }
      goto L_0888B85C;
    }
L_0888B85C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B8A4;
      }
      goto L_0888B868;
    }
L_0888B868:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(224));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(15792)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0888B8A4u);
    ctx.gpr[6] = (0u | 169u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888B8A4u) goto L_0888B8A4;
    return;
L_0888B8A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BA74;
      }
      goto L_0888B8AC;
    }
L_0888B8AC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2048), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    ctx.gpr[6] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x0888B8C8u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x0888B8C8u) goto L_0888B8C8;
    return;
L_0888B8C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B904;
      }
      goto L_0888B8D4;
    }
L_0888B8D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888B904;
      }
      goto L_0888B8E8;
    }
L_0888B8E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1012)));
    ctx.gpr[31] = (0x0888B8FCu);
    ctx.gpr[6] = (0u | 193u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x0888B8FCu) goto L_0888B8FC;
    return;
L_0888B8FC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0888BA20;
      }
      goto L_0888B904;
    }
L_0888B904:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[4] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0888B924;
      }
      goto L_0888B914;
    }
L_0888B914:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[6] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0888B99C;
      }
      goto L_0888B924;
    }
L_0888B924:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (ctx.gpr[5] & 4096u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B958;
      }
      goto L_0888B934;
    }
L_0888B934:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0888B958;
      }
      goto L_0888B940;
    }
L_0888B940:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0888B950u);
    ctx.gpr[6] = (0u | 68u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x0888B950u) goto L_0888B950;
    return;
L_0888B950:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0888BA20;
      }
      goto L_0888B958;
    }
L_0888B958:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B984;
      }
      goto L_0888B96C;
    }
L_0888B96C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0888B97Cu);
    ctx.gpr[6] = (0u | 66u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x0888B97Cu) goto L_0888B97C;
    return;
L_0888B97C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0888BA20;
      }
      goto L_0888B984;
    }
L_0888B984:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0888B994u);
    ctx.gpr[6] = (0u | 65u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x0888B994u) goto L_0888B994;
    return;
L_0888B994:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0888BA20;
      }
      goto L_0888B99C;
    }
L_0888B99C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888B9BC;
      }
      goto L_0888B9AC;
    }
L_0888B9AC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888BA20;
      }
      goto L_0888B9BC;
    }
L_0888B9BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B9E8;
      }
      goto L_0888B9D0;
    }
L_0888B9D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0888B9E0u);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x0888B9E0u) goto L_0888B9E0;
    return;
L_0888B9E0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0888BA20;
      }
      goto L_0888B9E8;
    }
L_0888B9E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0888B9F8u);
    ctx.gpr[6] = (0u | 63u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x0888B9F8u) goto L_0888B9F8;
    return;
L_0888B9F8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BA20;
      }
      goto L_0888BA10;
    }
L_0888BA10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] | 64u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_0888BA20;
L_0888BA20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    ctx.gpr[5] = (2204u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31220));
    ctx.gpr[31] = (0x0888BA34u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 47u, 0x088B43E0u>(ctx, &aot_mem) && ctx.pc == 0x0888BA34u) goto L_0888BA34;
    return;
L_0888BA34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BA68;
      }
      goto L_0888BA40;
    }
L_0888BA40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888BA68;
      }
      goto L_0888BA54;
    }
L_0888BA54:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888BA60u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 201u, 0x0888D060u>(ctx, &aot_mem) && ctx.pc == 0x0888BA60u) goto L_0888BA60;
    return;
L_0888BA60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BA74;
      }
      goto L_0888BA68;
    }
L_0888BA68:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888BA74u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 201u, 0x0888D060u>(ctx, &aot_mem) && ctx.pc == 0x0888BA74u) goto L_0888BA74;
    return;
L_0888BA74:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888BA84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0888BAB0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 479u, 0x0897AFF4u>(ctx, &aot_mem) && ctx.pc == 0x0888BAB0u) goto L_0888BAB0;
    return;
L_0888BAB0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888BAD0;
      }
      goto L_0888BAB8;
    }
L_0888BAB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    ctx.gpr[19] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[19];
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
      if (branch_taken) {
          goto L_0888BAE8;
      }
      goto L_0888BAC8;
    }
L_0888BAC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BB5C;
      }
      goto L_0888BAD0;
    }
L_0888BAD0:
    ctx.gpr[31] = (0x0888BAD8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x0888BAD8u) goto L_0888BAD8;
    return;
L_0888BAD8:
    ctx.gpr[31] = (0x0888BAE0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 535u, 0x08886BB0u>(ctx, &aot_mem) && ctx.pc == 0x0888BAE0u) goto L_0888BAE0;
    return;
L_0888BAE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BD5C;
      }
      goto L_0888BAE8;
    }
L_0888BAE8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BB50;
      }
      goto L_0888BAF8;
    }
L_0888BAF8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(896)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888BB10:
    ctx.gpr[20] = (0u | 2u);
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BBEC;
      }
      goto L_0888BB20;
    }
L_0888BB20:
    ctx.gpr[20] = (0u | 4u);
    ctx.gpr[18] = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BBEC;
      }
      goto L_0888BB30;
    }
L_0888BB30:
    ctx.gpr[20] = (0u | 3u);
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BBEC;
      }
      goto L_0888BB40;
    }
L_0888BB40:
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    ctx.gpr[18] = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BBEC;
      }
      goto L_0888BB50;
    }
L_0888BB50:
    ctx.gpr[18] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BBEC;
      }
      goto L_0888BB5C;
    }
L_0888BB5C:
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 15u);
      if (branch_taken) {
          goto L_0888BBB4;
      }
      goto L_0888BB68;
    }
L_0888BB68:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 12u);
      if (branch_taken) {
          goto L_0888BB90;
      }
      goto L_0888BB70;
    }
L_0888BB70:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 11u);
      if (branch_taken) {
          goto L_0888BBD8;
      }
      goto L_0888BB78;
    }
L_0888BB78:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888BBE8;
      }
      goto L_0888BB80;
    }
L_0888BB80:
    ctx.gpr[20] = (0u | 3u);
    ctx.gpr[18] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BBEC;
      }
      goto L_0888BB90;
    }
L_0888BB90:
    ctx.gpr[20] = (0u | 2u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(544)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0888BBA8;
      }
      goto L_0888BBA0;
    }
L_0888BBA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_0888BBAC;
      }
      goto L_0888BBA8;
    }
L_0888BBA8:
    ctx.gpr[18] = (0u | 3u);
    goto L_0888BBAC;
L_0888BBAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BBEC;
      }
      goto L_0888BBB4;
    }
L_0888BBB4:
    ctx.gpr[20] = (0u | 4u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(544)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0888BBCC;
      }
      goto L_0888BBC4;
    }
L_0888BBC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 2u);
      if (branch_taken) {
          goto L_0888BBD0;
      }
      goto L_0888BBCC;
    }
L_0888BBCC:
    ctx.gpr[18] = (0u | 3u);
    goto L_0888BBD0;
L_0888BBD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BBEC;
      }
      goto L_0888BBD8;
    }
L_0888BBD8:
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    ctx.gpr[18] = (0u | 8u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BBEC;
      }
      goto L_0888BBE8;
    }
L_0888BBE8:
    ctx.gpr[18] = (0u | 0u);
    goto L_0888BBEC;
L_0888BBEC:
    ctx.gpr[31] = (0x0888BBF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x0888BBF4u) goto L_0888BBF4;
    return;
L_0888BBF4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BD50;
      }
      goto L_0888BBFC;
    }
L_0888BBFC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888BD50;
      }
      goto L_0888BC14;
    }
L_0888BC14:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(542)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888BD50;
      }
      goto L_0888BC24;
    }
L_0888BC24:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(543)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888BD50;
      }
      goto L_0888BC34;
    }
L_0888BC34:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888BD50;
      }
      goto L_0888BC44;
    }
L_0888BC44:
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
        goto L_0888BC98;
    }
    goto L_0888BC4C;
L_0888BC4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(232));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0888BC68u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888BC68u) goto L_0888BC68;
    return;
L_0888BC68:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
        goto L_0888BC98;
    }
    goto L_0888BC70;
L_0888BC70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(240));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0888BC8Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888BC8Cu) goto L_0888BC8C;
    return;
L_0888BC8C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BD50;
      }
      goto L_0888BC94;
    }
L_0888BC94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    goto L_0888BC98;
L_0888BC98:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888BD50;
      }
      goto L_0888BCA0;
    }
L_0888BCA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[19];
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
      if (branch_taken) {
          goto L_0888BD34;
      }
      goto L_0888BCAC;
    }
L_0888BCAC:
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 16u);
      if (branch_taken) {
          goto L_0888BCD8;
      }
      goto L_0888BCB8;
    }
L_0888BCB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (0u | 16u);
        goto L_0888BCD8;
    }
    goto L_0888BCC4;
L_0888BCC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (ctx.gpr[5] & 1024u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888BD24;
      }
      goto L_0888BCD4;
    }
L_0888BCD4:
    ctx.gpr[5] = (0u | 16u);
    goto L_0888BCD8;
L_0888BCD8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 12u);
      if (branch_taken) {
          goto L_0888BD00;
      }
      goto L_0888BCE0;
    }
L_0888BCE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(512)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (0u | 12u);
        goto L_0888BD00;
    }
    goto L_0888BCEC;
L_0888BCEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (ctx.gpr[5] & 1024u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888BD24;
      }
      goto L_0888BCFC;
    }
L_0888BCFC:
    ctx.gpr[5] = (0u | 12u);
    goto L_0888BD00;
L_0888BD00:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0888BD38;
      }
      goto L_0888BD08;
    }
L_0888BD08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(516)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0888BD38;
      }
      goto L_0888BD14;
    }
L_0888BD14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (ctx.gpr[5] & 1024u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0888BD38;
      }
      goto L_0888BD24;
    }
L_0888BD24:
    ctx.gpr[31] = (0x0888BD2Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 618u, 0x0888F080u>(ctx, &aot_mem) && ctx.pc == 0x0888BD2Cu) goto L_0888BD2C;
    return;
L_0888BD2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BD5C;
      }
      goto L_0888BD34;
    }
L_0888BD34:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    goto L_0888BD38;
L_0888BD38:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0888BD48u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_0888BD7C;
L_0888BD48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BD5C;
      }
      goto L_0888BD50;
    }
L_0888BD50:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888BD5Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x0888BD5Cu) goto L_0888BD5C;
    return;
L_0888BD5C:
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
L_0888BD7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[22] = (0u | 11u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(542)));
    ctx.gpr[7] = (ctx.gpr[8] | ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(542), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    ctx.gpr[8] = (65535u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(32767));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(404), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[8] = (0u | 24u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0888BE10;
      }
      goto L_0888BDF8;
    }
L_0888BDF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 25u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888BE10;
      }
      goto L_0888BE08;
    }
L_0888BE08:
    ctx.gpr[31] = (0x0888BE10u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 716u, 0x0899FA68u>(ctx, &aot_mem) && ctx.pc == 0x0888BE10u) goto L_0888BE10;
    return;
L_0888BE10:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1328), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(1328));
    ctx.gpr[31] = (0x0888BE20u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x0888BE20u) goto L_0888BE20;
    return;
L_0888BE20:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(1260), static_cast<std::uint16_t>(ctx.gpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    ctx.gpr[4] = (0u | 58u);
      if (branch_taken) {
          goto L_0888BE64;
      }
      goto L_0888BE30;
    }
L_0888BE30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BE58;
      }
      goto L_0888BE3C;
    }
L_0888BE3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(912), 0u);
        goto L_0888BE58;
    }
    goto L_0888BE48;
L_0888BE48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x0888BE54u);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x0888BE54u) goto L_0888BE54;
    return;
L_0888BE54:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(912), 0u);
    goto L_0888BE58;
L_0888BE58:
    ctx.gpr[31] = (0x0888BE60u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x0888BE60u) goto L_0888BE60;
    return;
L_0888BE60:
    ctx.gpr[4] = (0u | 58u);
    goto L_0888BE64;
L_0888BE64:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(1260)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_0888BEA0;
      }
      goto L_0888BE74;
    }
L_0888BE74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888BEA0;
      }
      goto L_0888BE84;
    }
L_0888BE84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888BEA0;
      }
      goto L_0888BE94;
    }
L_0888BE94:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(599), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0888BEA0;
L_0888BEA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1328)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1332), ctx.gpr[4]);
    ctx.gpr[31] = (0x0888BEB0u);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(1332));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x0888BEB0u) goto L_0888BEB0;
    return;
L_0888BEB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1328)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(541)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(541), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0888BEE4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 469u, 0x0888E3CCu>(ctx, &aot_mem) && ctx.pc == 0x0888BEE4u) goto L_0888BEE4;
    return;
L_0888BEE4:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888BF0C;
      }
      goto L_0888BF00;
    }
L_0888BF00:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    goto L_0888BF0C;
L_0888BF0C:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888BF20;
      }
      goto L_0888BF1C;
    }
L_0888BF1C:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_0888BF20;
L_0888BF20:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(768));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(600));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(840), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888BFC0;
      }
      goto L_0888BF5C;
    }
L_0888BF5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (128u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (17096u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_0888BF90;
      }
      goto L_0888BF78;
    }
L_0888BF78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0888BF88u);
    ctx.gpr[6] = (0u | 97u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x0888BF88u) goto L_0888BF88;
    return;
L_0888BF88:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0888BFA4;
      }
      goto L_0888BF90;
    }
L_0888BF90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0888BFA0u);
    ctx.gpr[6] = (0u | 110u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x0888BFA0u) goto L_0888BFA0;
    return;
L_0888BFA0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
    goto L_0888BFA4;
L_0888BFA4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x0888BFB0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 890u, 0x089B7960u>(ctx, &aot_mem) && ctx.pc == 0x0888BFB0u) goto L_0888BFB0;
    return;
L_0888BFB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 15u, 0x0888C0C8u>(ctx, &aot_mem); return;
      }
      goto L_0888BFC0;
    }
L_0888BFC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888BFE4;
      }
      goto L_0888BFD0;
    }
L_0888BFD0:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x0888BFDCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 51u, 0x08890338u>(ctx, &aot_mem) && ctx.pc == 0x0888BFDCu) goto L_0888BFDC;
    return;
L_0888BFDC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 15u, 0x0888C0C8u>(ctx, &aot_mem); return;
      }
      goto L_0888BFE4;
    }
L_0888BFE4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 2u, 0x0888C008u>(ctx, &aot_mem); return;
      }
      goto L_0888BFF4;
    }
L_0888BFF4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x0888C000u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 51u, 0x08890338u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0033(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0033_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_33(Runtime &runtime) {
    runtime.register_generated_unit(33u, 0x08888000u, 16384u, &recomp_unit_0033, &recomp_unit_0033_entry);
    runtime.register_function(0x08888000u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888800Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888058u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888060u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888078u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888114u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888811Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888124u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888128u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888140u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888816Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888178u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888818Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088881A8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088881B8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088881D4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088881E4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888220u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888228u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888230u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888825Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888264u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888829Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088882A4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088882D0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088882E0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088882E4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088882F4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888330u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888380u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888388u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088883A0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888438u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888440u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888448u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888844Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888464u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888490u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888849Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088884B0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088884CCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088884DCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088884F8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888508u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888544u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888854Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888554u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888580u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888588u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088885C0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088885C8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088885F4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888604u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888608u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888618u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888654u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888678u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888680u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888684u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888868Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088886ACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088886B8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088886C8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088886D8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088886E4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088886F0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088886FCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888704u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888714u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888872Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888873Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888750u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888875Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088887A4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088887BCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088887D0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088887E4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088887ECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888810u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888820u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888882Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888844u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888884u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888890u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088888A0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088888ACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088888BCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088888C4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088888DCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088888F0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888904u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888890Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888930u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888940u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888894Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888964u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088889A4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088889B4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088889C4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088889E0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088889F4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088889FCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888A10u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888A3Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888A48u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888A58u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888A64u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888A74u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888B04u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888B1Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888B9Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888BA4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888BB4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888BC0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888BC8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888BD0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888C14u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888C1Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888C2Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888C38u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888C40u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888C48u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888C58u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888C64u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888C6Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888C74u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888C94u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888CCCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888CDCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888CE4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888CECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888CFCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888D14u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888D28u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888D3Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888D50u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888D5Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888D64u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888D70u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888D78u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888D80u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888D88u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888D90u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888DA4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888DB8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888DC0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888DD0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888DD4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888DDCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888DF0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888DFCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888E0Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888E10u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888E28u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888E30u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888E38u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888E40u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888E48u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888E54u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888E5Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888E6Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888E78u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888E88u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888E90u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888E98u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888EA0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888EA8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888EB0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888EB8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888EC0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888EC8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888ED0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888EECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888EFCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888F04u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888F0Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888F18u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888F28u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888F38u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888F40u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888F50u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888F6Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888F74u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888F90u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888F98u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888F9Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888FA4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888FB8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888FD8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889018u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889020u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889030u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889040u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888904Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889058u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889064u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889068u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889070u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889074u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889094u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088890B4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088890C0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088890C8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088890D8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088890E4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088890F4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888910Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889160u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889170u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889188u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889190u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088891C0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088891C4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088891E0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088891F0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889200u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889210u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889218u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889228u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889230u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889240u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889250u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889258u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889268u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888926Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889280u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088892A4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889308u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889310u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889318u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889320u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889330u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889338u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889340u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889348u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888934Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889354u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889360u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889368u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889370u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888937Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889388u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088893A8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088893B8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088893C0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088893D0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088893E0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889420u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889430u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889438u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889444u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888944Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889454u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889460u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889468u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889470u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889480u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889488u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889494u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888949Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088894A8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088894B0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088894BCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088894C4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088894D0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088894D8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088894ECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088894F8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889504u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888950Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889510u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889518u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888952Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889540u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889550u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889568u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889578u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888957Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889584u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889594u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889598u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088895A0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088895B0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088895B8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088895C0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088895C8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088895D0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088895E0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088895E4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088895F4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088895F8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889600u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889610u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889614u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889624u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889628u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889630u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889640u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889644u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889654u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889658u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889660u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889670u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889674u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889684u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889688u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889690u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088896A0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088896A8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088896B0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088896B8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088896C0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088896CCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088896DCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088896E4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088896F8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889700u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889718u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889740u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889744u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889750u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889764u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889770u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889778u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889780u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889788u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889794u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088897A0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088897ACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088897B8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088897C4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088897CCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088897D4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088897DCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088897E4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088897F0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889800u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889810u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889818u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889820u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889828u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889834u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889844u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889854u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888985Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889864u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888986Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889878u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889888u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889898u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088898A0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088898A8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088898B0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088898BCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088898CCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088898DCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088898E4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088898ECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088898F4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088898FCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889904u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888990Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888991Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889928u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889930u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889938u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889940u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888994Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889958u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889964u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889970u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889978u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889990u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088899B8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088899C0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088899C8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088899D0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088899E0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088899F0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088899FCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889A04u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889A08u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889A18u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889A20u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889A2Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889A34u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889A3Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889A44u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889A54u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889A5Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889A6Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889A78u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889A80u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889A88u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889AA0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889AA8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889AECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889AF4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889B04u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889B0Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889B14u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889B20u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889B24u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889B30u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889B48u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889B50u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889B68u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889B88u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889B98u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889BA4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889BB0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889BBCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889BC0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889BC8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889BCCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889BDCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889BF8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889C08u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889C14u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889C20u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889C38u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889C44u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889C50u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889C58u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889C7Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889C88u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889C98u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889CA8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889CB8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889CC0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889CCCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889CDCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889CECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889CF0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889D04u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889D0Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889D14u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889D20u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889D38u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889D50u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889D60u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889D6Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889D7Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889D88u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889D98u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889DA4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889DBCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889DD4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889DE0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889DECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889DFCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889E08u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889E28u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889E30u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889E44u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889E48u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889E50u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889E58u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889E68u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889E70u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889E78u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889E80u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889E88u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889E90u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889EA0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889EA8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889EB8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889EC8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889ED0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889ED8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889EE8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889EF0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889F00u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889F04u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889F0Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889F14u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889F24u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889F2Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889F3Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889F4Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889F54u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889F5Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889F6Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889F74u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889F84u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889F88u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889F90u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889F98u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889FA8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889FB0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889FC0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889FD0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889FD8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889FE0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889FF0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889FF8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A008u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A00Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A014u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A01Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A02Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A034u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A044u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A054u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A05Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A064u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A074u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A07Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A08Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A090u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A098u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A0A0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A0B8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A0C8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A0D0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A0D8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A0E0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A0ECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A0F8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A104u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A110u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A11Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A124u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A138u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A140u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A154u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A178u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A188u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A190u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A19Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A1A4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A1ACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A1C0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A1D0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A204u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A22Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A244u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A264u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A278u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A28Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A2A0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A2ACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A2BCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A2C8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A2DCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A2F4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A2FCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A308u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A310u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A31Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A324u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A340u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A34Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A35Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A370u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A37Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A390u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A398u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A3ACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A3B4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A3C0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A3C8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A3F8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A404u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A428u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A434u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A43Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A448u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A450u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A468u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A474u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A47Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A490u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A49Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A4A4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A4B0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A4C0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A4D8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A570u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A584u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A598u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A5A0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A5A8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A5B0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A5C0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A5D0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A5E0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A5FCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A604u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A60Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A620u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A63Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A668u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A674u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A680u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A68Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A690u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A698u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A6C8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A6D4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A6DCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A6E4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A730u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A760u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A78Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A798u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A7A8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A7B8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A7CCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A7F4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A8F8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A900u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A908u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A914u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A918u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A920u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A934u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A948u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A974u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A9D0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A9D8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A9F0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AA14u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AA24u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AA40u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AA68u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AA74u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AA90u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AA9Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AAC4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AAD4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AAE4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AAF4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AB00u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AB0Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AB18u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AB1Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AB24u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AB28u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AB68u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AB74u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ABC4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ABCCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ABE0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ABECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ABFCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AC14u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AC1Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AC24u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AC2Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AC34u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AC4Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AC60u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AC6Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AC90u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AC98u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ACB0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AD20u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AD34u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AD3Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AD48u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AD58u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AD64u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AD74u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AD84u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ADA8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ADC8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ADF0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ADF8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AE20u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AE24u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AE3Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AE5Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AE88u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AE9Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AEA4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AEB4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AEC4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AED4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AEF0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AEF8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AF00u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AF0Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AF1Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AF2Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AF3Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AF48u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AF58u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AF68u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AF74u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AF84u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AF90u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AFA0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AFB0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AFC4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AFD4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AFE4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AFF4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AFFCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B00Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B01Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B024u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B02Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B038u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B040u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B050u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B05Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B064u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B068u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B074u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B080u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B088u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B090u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B0B0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B0BCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B0C8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B0D8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B0E8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B104u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B110u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B128u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B138u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B148u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B154u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B160u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B16Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B170u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B178u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B17Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B1ACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B1B4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B1C8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B1DCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B1E0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B1ECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B1FCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B20Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B21Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B228u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B238u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B248u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B280u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B28Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B29Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B2ACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B2CCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B2D4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B2DCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B2E4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B2ECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B334u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B348u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B350u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B358u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B35Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B364u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B37Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B3C0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B3CCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B3D4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B3F0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B438u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B440u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B484u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B494u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B4A8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B4C0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B4C8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B4D4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B4E0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B4ECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B4F0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B4FCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B508u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B510u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B518u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B52Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B53Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B548u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B554u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B560u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B56Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B574u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B580u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B590u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B59Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B5A8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B5B4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B5B8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B5C0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B5C4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B618u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B62Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B638u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B644u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B64Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B65Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B668u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B674u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B684u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B68Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B69Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B6ACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B6B4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B6C4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B6CCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B6D4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B6DCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B6E8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B6F4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B700u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B704u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B710u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B740u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B758u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B76Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B780u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B7A4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B7B8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B7C4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B7CCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B7D8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B7E0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B804u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B810u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B818u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B844u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B84Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B85Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B868u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B8A4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B8ACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B8C8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B8D4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B8E8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B8FCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B904u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B914u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B924u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B934u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B940u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B950u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B958u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B96Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B97Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B984u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B994u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B99Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B9ACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B9BCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B9D0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B9E0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B9E8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B9F8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BA10u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BA20u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BA34u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BA40u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BA54u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BA60u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BA68u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BA74u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BA84u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BAB0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BAB8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BAC8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BAD0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BAD8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BAE0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BAE8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BAF8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BB10u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BB20u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BB30u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BB40u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BB50u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BB5Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BB68u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BB70u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BB78u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BB80u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BB90u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BBA0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BBA8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BBACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BBB4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BBC4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BBCCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BBD0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BBD8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BBE8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BBECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BBF4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BBFCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BC14u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BC24u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BC34u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BC44u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BC4Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BC68u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BC70u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BC8Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BC94u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BC98u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BCA0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BCACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BCB8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BCC4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BCD4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BCD8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BCE0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BCECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BCFCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BD00u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BD08u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BD14u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BD24u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BD2Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BD34u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BD38u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BD48u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BD50u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BD5Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BD7Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BDF8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BE08u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BE10u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BE20u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BE30u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BE3Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BE48u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BE54u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BE58u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BE60u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BE64u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BE74u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BE84u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BE94u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BEA0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BEB0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BEE4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BF00u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BF0Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BF1Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BF20u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BF5Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BF78u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BF88u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BF90u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BFA0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BFA4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BFB0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BFC0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BFD0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BFDCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BFE4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BFF4u, &recomp_unit_0033, "recomp_unit_0033");
}
} // namespace psprecomp
