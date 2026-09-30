#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0042[4095] = {
    1, 2, 0, 3, 0, 0, 4, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 7, 0, 8, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 13, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 18, 0, 0, 19,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 22, 0, 0, 0, 23, 0, 0, 24, 0, 0, 0, 25, 0, 26, 0, 0, 0, 0,
    27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0, 0, 31, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 34, 0, 35,
    0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 40, 0, 0, 0, 41, 0, 0, 42, 0, 0,
    0, 43, 0, 44, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 49, 0, 0, 0, 50, 0,
    0, 51, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 57, 0, 0, 58, 0,
    0, 0, 59, 0, 0, 60, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 66,
    0, 0, 67, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 74, 0, 75, 0, 0, 76, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 83, 0, 84, 0, 0, 85, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 90, 0, 0, 91,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 93, 0, 0, 94, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 97, 0, 98, 0, 0, 0, 0,
    99, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 0, 103, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 106, 0, 107,
    0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 0, 112, 0, 0, 0, 113, 0, 0, 114, 0, 0,
    0, 115, 0, 116, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 0, 121, 0, 0, 0, 122, 0,
    0, 123, 0, 0, 0, 124, 0, 125, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 129, 0, 0, 130, 0,
    0, 0, 131, 0, 0, 132, 0, 0, 0, 133, 0, 134, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 138,
    0, 0, 139, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 142, 0, 143, 0, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 146, 0, 147, 0, 0, 148, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 157, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0, 160, 0, 161, 0, 0, 0, 0, 162, 0, 0, 163,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 165, 0, 0, 166, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 169, 0, 170, 0, 0, 0, 0,
    171, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 174, 0, 0, 175, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 178, 0, 179,
    0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 183, 0, 0, 184, 0, 0, 0, 185, 0, 0, 186, 0, 0,
    0, 187, 0, 188, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 192, 0, 0, 193, 0, 0, 0, 194, 0,
    0, 195, 0, 0, 0, 196, 0, 197, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 201, 0, 0, 202, 0,
    0, 0, 203, 0, 0, 204, 0, 0, 0, 205, 0, 206, 0, 0, 0, 0, 207, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 210,
    0, 0, 211, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 214, 0, 215, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 218, 0, 219, 0, 0, 220, 0, 0, 0, 221, 0, 0, 222, 0, 0, 0, 223, 0, 224, 0, 0, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 227, 0, 228, 0, 0, 229, 0, 0, 0, 230, 0, 0, 231, 0, 0, 0, 232, 0, 233, 0, 0, 0, 0, 234, 0, 0, 235,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 237, 0, 0, 238, 0, 0, 0, 239, 0, 0, 240, 0, 0, 0, 241, 0, 242, 0, 0, 0, 0,
    243, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 246, 0, 0, 247, 0, 0, 0, 248, 0, 0, 249, 0, 0, 0, 250, 0, 251,
    0, 0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 255, 0, 0, 256, 0, 0, 0, 257, 0, 0, 258, 0, 0,
    0, 259, 0, 260, 0, 0, 0, 0, 261, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 264, 0, 0, 265, 0, 0, 0, 266, 0,
    0, 267, 0, 0, 0, 268, 0, 269, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 273, 0, 0, 274, 0,
    0, 0, 275, 0, 0, 276, 0, 0, 0, 277, 0, 278, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 282,
    0, 0, 283, 0, 0, 0, 284, 0, 0, 285, 0, 0, 0, 286, 0, 287, 0, 0, 0, 0, 288, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 290, 0, 291, 0, 0, 292, 0, 0, 0, 293, 0, 0, 294, 0, 0, 0, 295, 0, 296, 0, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 299, 0, 300, 0, 0, 301, 0, 0, 0, 302, 0, 0, 303, 0, 0, 0, 304, 0, 305, 0, 0, 0, 0, 306, 0, 0, 307,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 309, 0, 0, 310, 0, 0, 0, 311, 0, 0, 312, 0, 0, 0, 313, 0, 314, 0, 0, 0, 0,
    315, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 318, 0, 0, 319, 0, 0, 0, 320, 0, 0, 321, 0, 0, 0, 322, 0, 323,
    0, 0, 0, 0, 324, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 327, 0, 0, 328, 0, 0, 0, 329, 0, 0, 330, 0, 0,
    0, 331, 0, 332, 0, 0, 0, 0, 333, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 336, 0, 0, 337, 0, 0, 0, 338, 0,
    0, 339, 0, 0, 0, 340, 0, 341, 0, 0, 0, 0, 342, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 345, 0, 0, 346, 0,
    0, 0, 347, 0, 0, 348, 0, 0, 0, 349, 0, 350, 0, 0, 0, 0, 351, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 354,
    0, 0, 355, 0, 0, 0, 356, 0, 0, 357, 0, 0, 0, 358, 0, 359, 0, 0, 0, 0, 360, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 362, 0, 363, 0, 0, 364, 0, 0, 0, 365, 0, 0, 366, 0, 0, 0, 367, 0, 368, 0, 0, 0, 0, 369, 0, 0, 370, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 371, 0, 372, 0, 0, 373, 0, 0, 0, 374, 0, 0, 375, 0, 0, 0, 376, 0, 377, 0, 0, 0, 0, 378, 0, 0, 379,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 381, 0, 0, 382, 0, 0, 0, 383, 0, 0, 384, 0, 0, 0, 385, 0, 386, 0, 387, 0, 0,
    0, 0, 0, 0, 0, 0, 388, 0, 389, 0, 390, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 394, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 397, 0, 0, 398, 0, 0,
    0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 401, 0, 0, 402,
    0, 403, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 407, 0, 0, 0, 0, 408, 0, 409,
    0, 0, 410, 0, 0, 0, 0, 411, 0, 412, 0, 0, 413, 0, 414, 0, 0, 415, 0, 0, 0, 0, 416, 0, 417, 0, 0, 418, 0, 419, 0, 0,
    0, 0, 420, 0, 0, 421, 0, 0, 0, 0, 0, 422, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 425, 0, 0, 0, 426, 0,
    0, 427, 0, 0, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 431, 0, 0, 0, 432, 433, 0, 0, 0,
    0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 436, 0, 0, 0, 0, 437, 0, 0, 438, 0, 0, 439, 0, 440, 441,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 443, 0, 0, 444, 0, 0,
    445, 0, 0, 446, 0, 447, 448, 0, 449, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 452, 0, 453, 0, 454, 0, 0, 455, 0,
    0, 0, 456, 0, 457, 0, 0, 458, 0, 0, 0, 0, 0, 459, 0, 460, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0,
    0, 0, 463, 0, 0, 464, 0, 465, 0, 466, 467, 0, 468, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0,
    0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0,
    0, 0, 0, 0, 474, 475, 476, 0, 477, 0, 0, 478, 0, 479, 480, 0, 0, 0, 481, 0, 0, 0, 482, 0, 483, 0, 484, 0, 0, 485, 0, 0,
    0, 0, 0, 0, 486, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 490, 0, 0, 0, 0, 491, 0, 492, 0, 493, 0, 494, 0, 0, 495, 496, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 500, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 502, 0, 0, 503, 0, 0, 0, 0, 0, 0, 504, 505, 506, 0, 507, 0, 0, 508, 0, 509, 510, 0,
    0, 0, 511, 0, 0, 0, 512, 0, 513, 0, 514, 0, 0, 515, 0, 516, 0, 517, 0, 518, 0, 0, 0, 0, 519, 0, 520, 0, 521, 0, 522, 0,
    0, 523, 0, 0, 0, 0, 0, 0, 524, 525, 526, 0, 527, 0, 0, 528, 0, 529, 530, 0, 0, 0, 531, 0, 0, 0, 532, 0, 533, 0, 534, 0,
    535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 537, 0, 0, 0, 0, 538, 0, 0, 0, 0, 539, 0, 540, 0, 0, 541, 0,
    542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 544, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 547, 0,
    548, 0, 0, 0, 549, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 552,
    0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0, 559, 0, 0, 560, 0, 0, 561, 0, 562, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0,
    0, 565, 0, 566, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 569, 0, 0, 0, 570, 571, 572, 0, 0, 0,
    573, 0, 0, 574, 0, 575, 0, 576, 0, 0, 577, 0, 0, 0, 578, 0, 579, 0, 0, 0, 580, 0, 0, 0, 0, 581, 0, 0, 0, 582, 0, 0,
    583, 0, 0, 0, 0, 584, 0, 0, 585, 0, 0, 586, 0, 587, 588, 0, 0, 0, 0, 0, 589, 0, 0, 0, 590, 0, 0, 0, 591, 592, 593, 0,
    0, 0, 594, 0, 595, 0, 596, 0, 597, 0, 598, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 600, 0, 601, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 602, 0, 603, 0, 0, 604, 0, 0, 0, 605, 0, 0, 0,
    0, 606, 0, 607, 0, 608, 0, 609, 0, 0, 610, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 611, 0,
    0, 612, 0, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0, 0, 614, 0, 0, 615, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 616, 0, 0, 617, 0, 0, 0, 618, 0, 619, 0, 0, 0, 0, 0, 0,
    0, 0, 620, 621, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 623, 0, 0, 0, 0, 0, 0,
    624, 0, 0, 0, 0, 625, 626, 0, 627, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 629, 0, 0, 0, 0, 630, 0, 0, 631,
    0, 0, 632, 0, 633, 634, 0, 0, 0, 635, 0, 0, 636, 0, 0, 0, 637, 0, 0, 0, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 639,
    640, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 641, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 642, 0, 0, 0,
    0, 0, 0, 0, 643, 0, 644, 645, 0, 0, 646, 0, 0, 647, 0, 648, 0, 649, 0, 650, 0, 0, 651, 0, 652, 0, 653, 0, 654, 0, 0, 655,
    0, 656, 0, 657, 0, 658, 0, 0, 659, 0, 660, 0, 661, 0, 662, 0, 0, 663, 0, 664, 0, 665, 0, 666, 0, 667, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 670, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 671, 0, 0, 0, 0, 0, 0, 0, 0, 0, 672, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 675, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 676, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 677, 0, 0, 0, 0, 0, 0, 0, 678, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    679, 0, 0, 0, 0, 0, 0, 0, 680, 0, 0, 0, 0, 0, 0, 0, 681, 0, 682, 0, 683, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 684, 0, 0, 0, 685, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0, 688, 0,
    689, 0, 690, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 691, 0, 0, 0, 692, 0, 0, 0, 0, 0, 693, 0, 0, 0, 0, 0,
    0, 0, 0, 694, 0, 0, 0, 695, 0, 0, 0, 696, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 697, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 698, 0, 0, 0, 699, 0, 0, 0, 700, 0, 0, 0, 0, 0, 0, 0, 0, 701, 0, 0, 0, 702,
    0, 0, 0, 703, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 704, 0, 705, 0, 706, 0, 707, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 708, 0, 0, 0, 709, 0, 0, 0, 0, 0, 710, 0, 0, 0, 0, 0, 0, 0, 0, 711, 0, 0, 0, 712, 0,
    0, 0, 713, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 714, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 715, 0, 0, 0, 716, 0, 0, 0, 0, 717, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 718, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 719, 0, 720, 0, 0, 0, 0, 0, 0, 721, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 722, 723, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 724, 0, 0, 725, 0, 726, 0, 727, 0, 728, 0, 0, 0, 0, 729, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 730,
    0, 0, 731, 0, 732, 0, 0, 733, 0, 0, 734, 0, 735, 0, 0, 736, 0, 0, 0, 0, 737, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 738,
    0, 0, 739, 0, 740, 0, 0, 0, 0, 741, 0, 0, 0, 0, 0, 742, 0, 0, 0, 0, 743, 0, 744, 745, 0, 0, 0, 0, 0, 0, 746, 0,
    0, 0, 747, 0, 748, 749, 0, 0, 0, 750, 0, 0, 0, 751, 0, 0, 752, 0, 0, 0, 0, 0, 0, 0, 0, 0, 753, 754, 0, 0, 0, 0,
    0, 0, 0, 0, 755, 756, 0, 0, 0, 0, 0, 0, 0, 0, 0, 757, 0, 0, 0, 0, 0, 0, 758, 0, 0, 759, 0, 760, 0, 0, 0, 0,
    761, 0, 0, 0, 0, 762, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 763, 0, 0, 0, 0, 0, 0, 764, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 765, 0, 0, 0, 766, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 767, 0, 0, 0, 768, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 769, 0, 770, 0, 0, 771, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 772, 0, 0, 773, 0, 774, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 775, 0, 0, 0, 0, 0, 0, 0, 0, 776, 0, 0, 777, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 778, 779, 0, 0, 0, 0, 0, 0, 0, 0, 780, 0, 781, 782, 0, 0, 0, 0, 0, 0, 0, 0, 0, 783, 784, 0, 0,
    0, 0, 0, 0, 0, 785, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 786, 0, 0, 0, 0, 0, 0, 787, 0, 788, 0, 0, 0, 0, 0, 0, 789, 0, 0, 0, 0, 0, 0, 0, 790, 791, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 792, 0, 0, 0, 0, 0, 0, 0, 793, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 794, 0, 0, 0, 0, 0, 795, 0, 0, 0, 0, 0,
    796, 0, 0, 0, 0, 0, 797, 0, 0, 0, 0, 0, 798, 0, 0, 0, 0, 0, 799, 0, 0, 0, 0, 0, 800, 0, 0, 0, 0, 0, 801, 0,
    0, 0, 0, 0, 802, 0, 0, 0, 0, 0, 803, 0, 0, 0, 0, 0, 804, 0, 0, 0, 0, 0, 805, 0, 0, 0, 0, 0, 806, 0, 0, 0,
    0, 0, 807, 0, 0, 0, 0, 0, 808, 0, 0, 0, 0, 0, 809, 0, 0, 810, 0, 0, 0, 0, 0, 0, 0, 811, 0, 0, 0, 0, 0, 812,
    0, 0, 0, 0, 0, 813, 0, 0, 0, 0, 0, 814, 0, 0, 0, 0, 0, 815, 0, 0, 0, 0, 0, 816, 0, 0, 0, 0, 0, 817, 0, 0,
    0, 0, 0, 818, 0, 0, 0, 0, 0, 819, 0, 0, 0, 0, 0, 820, 0, 0, 0, 0, 0, 821, 0, 0, 0, 0, 0, 822, 0, 0, 823,
};
void recomp_unit_0042_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088AC004u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0042[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088AC004;
    case 2u: goto L_088AC008;
    case 3u: goto L_088AC010;
    case 4u: goto L_088AC01C;
    case 5u: goto L_088AC02C;
    case 6u: goto L_088AC038;
    case 7u: goto L_088AC048;
    case 8u: goto L_088AC050;
    case 9u: goto L_088AC064;
    case 10u: goto L_088AC070;
    case 11u: goto L_088AC098;
    case 12u: goto L_088AC0A0;
    case 13u: goto L_088AC0AC;
    case 14u: goto L_088AC0BC;
    case 15u: goto L_088AC0C8;
    case 16u: goto L_088AC0D8;
    case 17u: goto L_088AC0E0;
    case 18u: goto L_088AC0F4;
    case 19u: goto L_088AC100;
    case 20u: goto L_088AC128;
    case 21u: goto L_088AC130;
    case 22u: goto L_088AC13C;
    case 23u: goto L_088AC14C;
    case 24u: goto L_088AC158;
    case 25u: goto L_088AC168;
    case 26u: goto L_088AC170;
    case 27u: goto L_088AC184;
    case 28u: goto L_088AC190;
    case 29u: goto L_088AC1B8;
    case 30u: goto L_088AC1C0;
    case 31u: goto L_088AC1CC;
    case 32u: goto L_088AC1DC;
    case 33u: goto L_088AC1E8;
    case 34u: goto L_088AC1F8;
    case 35u: goto L_088AC200;
    case 36u: goto L_088AC214;
    case 37u: goto L_088AC220;
    case 38u: goto L_088AC248;
    case 39u: goto L_088AC250;
    case 40u: goto L_088AC25C;
    case 41u: goto L_088AC26C;
    case 42u: goto L_088AC278;
    case 43u: goto L_088AC288;
    case 44u: goto L_088AC290;
    case 45u: goto L_088AC2A4;
    case 46u: goto L_088AC2B0;
    case 47u: goto L_088AC2D8;
    case 48u: goto L_088AC2E0;
    case 49u: goto L_088AC2EC;
    case 50u: goto L_088AC2FC;
    case 51u: goto L_088AC308;
    case 52u: goto L_088AC318;
    case 53u: goto L_088AC320;
    case 54u: goto L_088AC334;
    case 55u: goto L_088AC340;
    case 56u: goto L_088AC368;
    case 57u: goto L_088AC370;
    case 58u: goto L_088AC37C;
    case 59u: goto L_088AC38C;
    case 60u: goto L_088AC398;
    case 61u: goto L_088AC3A8;
    case 62u: goto L_088AC3B0;
    case 63u: goto L_088AC3C4;
    case 64u: goto L_088AC3D0;
    case 65u: goto L_088AC3F8;
    case 66u: goto L_088AC400;
    case 67u: goto L_088AC40C;
    case 68u: goto L_088AC41C;
    case 69u: goto L_088AC428;
    case 70u: goto L_088AC438;
    case 71u: goto L_088AC440;
    case 72u: goto L_088AC454;
    case 73u: goto L_088AC460;
    case 74u: goto L_088AC488;
    case 75u: goto L_088AC490;
    case 76u: goto L_088AC49C;
    case 77u: goto L_088AC4AC;
    case 78u: goto L_088AC4B8;
    case 79u: goto L_088AC4C8;
    case 80u: goto L_088AC4D0;
    case 81u: goto L_088AC4E4;
    case 82u: goto L_088AC4F0;
    case 83u: goto L_088AC518;
    case 84u: goto L_088AC520;
    case 85u: goto L_088AC52C;
    case 86u: goto L_088AC53C;
    case 87u: goto L_088AC548;
    case 88u: goto L_088AC558;
    case 89u: goto L_088AC560;
    case 90u: goto L_088AC574;
    case 91u: goto L_088AC580;
    case 92u: goto L_088AC5A8;
    case 93u: goto L_088AC5B0;
    case 94u: goto L_088AC5BC;
    case 95u: goto L_088AC5CC;
    case 96u: goto L_088AC5D8;
    case 97u: goto L_088AC5E8;
    case 98u: goto L_088AC5F0;
    case 99u: goto L_088AC604;
    case 100u: goto L_088AC610;
    case 101u: goto L_088AC638;
    case 102u: goto L_088AC640;
    case 103u: goto L_088AC64C;
    case 104u: goto L_088AC65C;
    case 105u: goto L_088AC668;
    case 106u: goto L_088AC678;
    case 107u: goto L_088AC680;
    case 108u: goto L_088AC694;
    case 109u: goto L_088AC6A0;
    case 110u: goto L_088AC6C8;
    case 111u: goto L_088AC6D0;
    case 112u: goto L_088AC6DC;
    case 113u: goto L_088AC6EC;
    case 114u: goto L_088AC6F8;
    case 115u: goto L_088AC708;
    case 116u: goto L_088AC710;
    case 117u: goto L_088AC724;
    case 118u: goto L_088AC730;
    case 119u: goto L_088AC758;
    case 120u: goto L_088AC760;
    case 121u: goto L_088AC76C;
    case 122u: goto L_088AC77C;
    case 123u: goto L_088AC788;
    case 124u: goto L_088AC798;
    case 125u: goto L_088AC7A0;
    case 126u: goto L_088AC7B4;
    case 127u: goto L_088AC7C0;
    case 128u: goto L_088AC7E8;
    case 129u: goto L_088AC7F0;
    case 130u: goto L_088AC7FC;
    case 131u: goto L_088AC80C;
    case 132u: goto L_088AC818;
    case 133u: goto L_088AC828;
    case 134u: goto L_088AC830;
    case 135u: goto L_088AC844;
    case 136u: goto L_088AC850;
    case 137u: goto L_088AC878;
    case 138u: goto L_088AC880;
    case 139u: goto L_088AC88C;
    case 140u: goto L_088AC89C;
    case 141u: goto L_088AC8A8;
    case 142u: goto L_088AC8B8;
    case 143u: goto L_088AC8C0;
    case 144u: goto L_088AC8D4;
    case 145u: goto L_088AC8E0;
    case 146u: goto L_088AC908;
    case 147u: goto L_088AC910;
    case 148u: goto L_088AC91C;
    case 149u: goto L_088AC92C;
    case 150u: goto L_088AC938;
    case 151u: goto L_088AC948;
    case 152u: goto L_088AC950;
    case 153u: goto L_088AC964;
    case 154u: goto L_088AC970;
    case 155u: goto L_088AC998;
    case 156u: goto L_088AC9A0;
    case 157u: goto L_088AC9AC;
    case 158u: goto L_088AC9BC;
    case 159u: goto L_088AC9C8;
    case 160u: goto L_088AC9D8;
    case 161u: goto L_088AC9E0;
    case 162u: goto L_088AC9F4;
    case 163u: goto L_088ACA00;
    case 164u: goto L_088ACA28;
    case 165u: goto L_088ACA30;
    case 166u: goto L_088ACA3C;
    case 167u: goto L_088ACA4C;
    case 168u: goto L_088ACA58;
    case 169u: goto L_088ACA68;
    case 170u: goto L_088ACA70;
    case 171u: goto L_088ACA84;
    case 172u: goto L_088ACA90;
    case 173u: goto L_088ACAB8;
    case 174u: goto L_088ACAC0;
    case 175u: goto L_088ACACC;
    case 176u: goto L_088ACADC;
    case 177u: goto L_088ACAE8;
    case 178u: goto L_088ACAF8;
    case 179u: goto L_088ACB00;
    case 180u: goto L_088ACB14;
    case 181u: goto L_088ACB20;
    case 182u: goto L_088ACB48;
    case 183u: goto L_088ACB50;
    case 184u: goto L_088ACB5C;
    case 185u: goto L_088ACB6C;
    case 186u: goto L_088ACB78;
    case 187u: goto L_088ACB88;
    case 188u: goto L_088ACB90;
    case 189u: goto L_088ACBA4;
    case 190u: goto L_088ACBB0;
    case 191u: goto L_088ACBD8;
    case 192u: goto L_088ACBE0;
    case 193u: goto L_088ACBEC;
    case 194u: goto L_088ACBFC;
    case 195u: goto L_088ACC08;
    case 196u: goto L_088ACC18;
    case 197u: goto L_088ACC20;
    case 198u: goto L_088ACC34;
    case 199u: goto L_088ACC40;
    case 200u: goto L_088ACC68;
    case 201u: goto L_088ACC70;
    case 202u: goto L_088ACC7C;
    case 203u: goto L_088ACC8C;
    case 204u: goto L_088ACC98;
    case 205u: goto L_088ACCA8;
    case 206u: goto L_088ACCB0;
    case 207u: goto L_088ACCC4;
    case 208u: goto L_088ACCD0;
    case 209u: goto L_088ACCF8;
    case 210u: goto L_088ACD00;
    case 211u: goto L_088ACD0C;
    case 212u: goto L_088ACD1C;
    case 213u: goto L_088ACD28;
    case 214u: goto L_088ACD38;
    case 215u: goto L_088ACD40;
    case 216u: goto L_088ACD54;
    case 217u: goto L_088ACD60;
    case 218u: goto L_088ACD88;
    case 219u: goto L_088ACD90;
    case 220u: goto L_088ACD9C;
    case 221u: goto L_088ACDAC;
    case 222u: goto L_088ACDB8;
    case 223u: goto L_088ACDC8;
    case 224u: goto L_088ACDD0;
    case 225u: goto L_088ACDE4;
    case 226u: goto L_088ACDF0;
    case 227u: goto L_088ACE18;
    case 228u: goto L_088ACE20;
    case 229u: goto L_088ACE2C;
    case 230u: goto L_088ACE3C;
    case 231u: goto L_088ACE48;
    case 232u: goto L_088ACE58;
    case 233u: goto L_088ACE60;
    case 234u: goto L_088ACE74;
    case 235u: goto L_088ACE80;
    case 236u: goto L_088ACEA8;
    case 237u: goto L_088ACEB0;
    case 238u: goto L_088ACEBC;
    case 239u: goto L_088ACECC;
    case 240u: goto L_088ACED8;
    case 241u: goto L_088ACEE8;
    case 242u: goto L_088ACEF0;
    case 243u: goto L_088ACF04;
    case 244u: goto L_088ACF10;
    case 245u: goto L_088ACF38;
    case 246u: goto L_088ACF40;
    case 247u: goto L_088ACF4C;
    case 248u: goto L_088ACF5C;
    case 249u: goto L_088ACF68;
    case 250u: goto L_088ACF78;
    case 251u: goto L_088ACF80;
    case 252u: goto L_088ACF94;
    case 253u: goto L_088ACFA0;
    case 254u: goto L_088ACFC8;
    case 255u: goto L_088ACFD0;
    case 256u: goto L_088ACFDC;
    case 257u: goto L_088ACFEC;
    case 258u: goto L_088ACFF8;
    case 259u: goto L_088AD008;
    case 260u: goto L_088AD010;
    case 261u: goto L_088AD024;
    case 262u: goto L_088AD030;
    case 263u: goto L_088AD058;
    case 264u: goto L_088AD060;
    case 265u: goto L_088AD06C;
    case 266u: goto L_088AD07C;
    case 267u: goto L_088AD088;
    case 268u: goto L_088AD098;
    case 269u: goto L_088AD0A0;
    case 270u: goto L_088AD0B4;
    case 271u: goto L_088AD0C0;
    case 272u: goto L_088AD0E8;
    case 273u: goto L_088AD0F0;
    case 274u: goto L_088AD0FC;
    case 275u: goto L_088AD10C;
    case 276u: goto L_088AD118;
    case 277u: goto L_088AD128;
    case 278u: goto L_088AD130;
    case 279u: goto L_088AD144;
    case 280u: goto L_088AD150;
    case 281u: goto L_088AD178;
    case 282u: goto L_088AD180;
    case 283u: goto L_088AD18C;
    case 284u: goto L_088AD19C;
    case 285u: goto L_088AD1A8;
    case 286u: goto L_088AD1B8;
    case 287u: goto L_088AD1C0;
    case 288u: goto L_088AD1D4;
    case 289u: goto L_088AD1E0;
    case 290u: goto L_088AD208;
    case 291u: goto L_088AD210;
    case 292u: goto L_088AD21C;
    case 293u: goto L_088AD22C;
    case 294u: goto L_088AD238;
    case 295u: goto L_088AD248;
    case 296u: goto L_088AD250;
    case 297u: goto L_088AD264;
    case 298u: goto L_088AD270;
    case 299u: goto L_088AD298;
    case 300u: goto L_088AD2A0;
    case 301u: goto L_088AD2AC;
    case 302u: goto L_088AD2BC;
    case 303u: goto L_088AD2C8;
    case 304u: goto L_088AD2D8;
    case 305u: goto L_088AD2E0;
    case 306u: goto L_088AD2F4;
    case 307u: goto L_088AD300;
    case 308u: goto L_088AD328;
    case 309u: goto L_088AD330;
    case 310u: goto L_088AD33C;
    case 311u: goto L_088AD34C;
    case 312u: goto L_088AD358;
    case 313u: goto L_088AD368;
    case 314u: goto L_088AD370;
    case 315u: goto L_088AD384;
    case 316u: goto L_088AD390;
    case 317u: goto L_088AD3B8;
    case 318u: goto L_088AD3C0;
    case 319u: goto L_088AD3CC;
    case 320u: goto L_088AD3DC;
    case 321u: goto L_088AD3E8;
    case 322u: goto L_088AD3F8;
    case 323u: goto L_088AD400;
    case 324u: goto L_088AD414;
    case 325u: goto L_088AD420;
    case 326u: goto L_088AD448;
    case 327u: goto L_088AD450;
    case 328u: goto L_088AD45C;
    case 329u: goto L_088AD46C;
    case 330u: goto L_088AD478;
    case 331u: goto L_088AD488;
    case 332u: goto L_088AD490;
    case 333u: goto L_088AD4A4;
    case 334u: goto L_088AD4B0;
    case 335u: goto L_088AD4D8;
    case 336u: goto L_088AD4E0;
    case 337u: goto L_088AD4EC;
    case 338u: goto L_088AD4FC;
    case 339u: goto L_088AD508;
    case 340u: goto L_088AD518;
    case 341u: goto L_088AD520;
    case 342u: goto L_088AD534;
    case 343u: goto L_088AD540;
    case 344u: goto L_088AD568;
    case 345u: goto L_088AD570;
    case 346u: goto L_088AD57C;
    case 347u: goto L_088AD58C;
    case 348u: goto L_088AD598;
    case 349u: goto L_088AD5A8;
    case 350u: goto L_088AD5B0;
    case 351u: goto L_088AD5C4;
    case 352u: goto L_088AD5D0;
    case 353u: goto L_088AD5F8;
    case 354u: goto L_088AD600;
    case 355u: goto L_088AD60C;
    case 356u: goto L_088AD61C;
    case 357u: goto L_088AD628;
    case 358u: goto L_088AD638;
    case 359u: goto L_088AD640;
    case 360u: goto L_088AD654;
    case 361u: goto L_088AD660;
    case 362u: goto L_088AD688;
    case 363u: goto L_088AD690;
    case 364u: goto L_088AD69C;
    case 365u: goto L_088AD6AC;
    case 366u: goto L_088AD6B8;
    case 367u: goto L_088AD6C8;
    case 368u: goto L_088AD6D0;
    case 369u: goto L_088AD6E4;
    case 370u: goto L_088AD6F0;
    case 371u: goto L_088AD718;
    case 372u: goto L_088AD720;
    case 373u: goto L_088AD72C;
    case 374u: goto L_088AD73C;
    case 375u: goto L_088AD748;
    case 376u: goto L_088AD758;
    case 377u: goto L_088AD760;
    case 378u: goto L_088AD774;
    case 379u: goto L_088AD780;
    case 380u: goto L_088AD7A8;
    case 381u: goto L_088AD7B0;
    case 382u: goto L_088AD7BC;
    case 383u: goto L_088AD7CC;
    case 384u: goto L_088AD7D8;
    case 385u: goto L_088AD7E8;
    case 386u: goto L_088AD7F0;
    case 387u: goto L_088AD7F8;
    case 388u: goto L_088AD81C;
    case 389u: goto L_088AD824;
    case 390u: goto L_088AD82C;
    case 391u: goto L_088AD834;
    case 392u: goto L_088AD844;
    case 393u: goto L_088AD868;
    case 394u: goto L_088AD890;
    case 395u: goto L_088AD898;
    case 396u: goto L_088AD8D0;
    case 397u: goto L_088AD8EC;
    case 398u: goto L_088AD8F8;
    case 399u: goto L_088AD91C;
    case 400u: goto L_088AD958;
    case 401u: goto L_088AD974;
    case 402u: goto L_088AD980;
    case 403u: goto L_088AD988;
    case 404u: goto L_088AD990;
    case 405u: goto L_088AD9C8;
    case 406u: goto L_088AD9D8;
    case 407u: goto L_088AD9E4;
    case 408u: goto L_088AD9F8;
    case 409u: goto L_088ADA00;
    case 410u: goto L_088ADA0C;
    case 411u: goto L_088ADA20;
    case 412u: goto L_088ADA28;
    case 413u: goto L_088ADA34;
    case 414u: goto L_088ADA3C;
    case 415u: goto L_088ADA48;
    case 416u: goto L_088ADA5C;
    case 417u: goto L_088ADA64;
    case 418u: goto L_088ADA70;
    case 419u: goto L_088ADA78;
    case 420u: goto L_088ADA8C;
    case 421u: goto L_088ADA98;
    case 422u: goto L_088ADAB0;
    case 423u: goto L_088ADAB8;
    case 424u: goto L_088ADAE4;
    case 425u: goto L_088ADAEC;
    case 426u: goto L_088ADAFC;
    case 427u: goto L_088ADB08;
    case 428u: goto L_088ADB1C;
    case 429u: goto L_088ADB30;
    case 430u: goto L_088ADB54;
    case 431u: goto L_088ADB60;
    case 432u: goto L_088ADB70;
    case 433u: goto L_088ADB74;
    case 434u: goto L_088ADB88;
    case 435u: goto L_088ADBB4;
    case 436u: goto L_088ADBC8;
    case 437u: goto L_088ADBDC;
    case 438u: goto L_088ADBE8;
    case 439u: goto L_088ADBF4;
    case 440u: goto L_088ADBFC;
    case 441u: goto L_088ADC00;
    case 442u: goto L_088ADC60;
    case 443u: goto L_088ADC6C;
    case 444u: goto L_088ADC78;
    case 445u: goto L_088ADC84;
    case 446u: goto L_088ADC90;
    case 447u: goto L_088ADC98;
    case 448u: goto L_088ADC9C;
    case 449u: goto L_088ADCA4;
    case 450u: goto L_088ADCB4;
    case 451u: goto L_088ADCD8;
    case 452u: goto L_088ADCE0;
    case 453u: goto L_088ADCE8;
    case 454u: goto L_088ADCF0;
    case 455u: goto L_088ADCFC;
    case 456u: goto L_088ADD0C;
    case 457u: goto L_088ADD14;
    case 458u: goto L_088ADD20;
    case 459u: goto L_088ADD38;
    case 460u: goto L_088ADD40;
    case 461u: goto L_088ADD54;
    case 462u: goto L_088ADD7C;
    case 463u: goto L_088ADD8C;
    case 464u: goto L_088ADD98;
    case 465u: goto L_088ADDA0;
    case 466u: goto L_088ADDA8;
    case 467u: goto L_088ADDAC;
    case 468u: goto L_088ADDB4;
    case 469u: goto L_088ADDB8;
    case 470u: goto L_088ADDE4;
    case 471u: goto L_088ADE08;
    case 472u: goto L_088ADE40;
    case 473u: goto L_088ADE78;
    case 474u: goto L_088ADE94;
    case 475u: goto L_088ADE98;
    case 476u: goto L_088ADE9C;
    case 477u: goto L_088ADEA4;
    case 478u: goto L_088ADEB0;
    case 479u: goto L_088ADEB8;
    case 480u: goto L_088ADEBC;
    case 481u: goto L_088ADECC;
    case 482u: goto L_088ADEDC;
    case 483u: goto L_088ADEE4;
    case 484u: goto L_088ADEEC;
    case 485u: goto L_088ADEF8;
    case 486u: goto L_088ADF14;
    case 487u: goto L_088ADF20;
    case 488u: goto L_088ADF58;
    case 489u: goto L_088ADF9C;
    case 490u: goto L_088ADFB0;
    case 491u: goto L_088ADFC4;
    case 492u: goto L_088ADFCC;
    case 493u: goto L_088ADFD4;
    case 494u: goto L_088ADFDC;
    case 495u: goto L_088ADFE8;
    case 496u: goto L_088ADFEC;
    case 497u: goto L_088AE038;
    case 498u: goto L_088AE048;
    case 499u: goto L_088AE06C;
    case 500u: goto L_088AE074;
    case 501u: goto L_088AE0A4;
    case 502u: goto L_088AE0AC;
    case 503u: goto L_088AE0B8;
    case 504u: goto L_088AE0D4;
    case 505u: goto L_088AE0D8;
    case 506u: goto L_088AE0DC;
    case 507u: goto L_088AE0E4;
    case 508u: goto L_088AE0F0;
    case 509u: goto L_088AE0F8;
    case 510u: goto L_088AE0FC;
    case 511u: goto L_088AE10C;
    case 512u: goto L_088AE11C;
    case 513u: goto L_088AE124;
    case 514u: goto L_088AE12C;
    case 515u: goto L_088AE138;
    case 516u: goto L_088AE140;
    case 517u: goto L_088AE148;
    case 518u: goto L_088AE150;
    case 519u: goto L_088AE164;
    case 520u: goto L_088AE16C;
    case 521u: goto L_088AE174;
    case 522u: goto L_088AE17C;
    case 523u: goto L_088AE188;
    case 524u: goto L_088AE1A4;
    case 525u: goto L_088AE1A8;
    case 526u: goto L_088AE1AC;
    case 527u: goto L_088AE1B4;
    case 528u: goto L_088AE1C0;
    case 529u: goto L_088AE1C8;
    case 530u: goto L_088AE1CC;
    case 531u: goto L_088AE1DC;
    case 532u: goto L_088AE1EC;
    case 533u: goto L_088AE1F4;
    case 534u: goto L_088AE1FC;
    case 535u: goto L_088AE204;
    case 536u: goto L_088AE22C;
    case 537u: goto L_088AE240;
    case 538u: goto L_088AE254;
    case 539u: goto L_088AE268;
    case 540u: goto L_088AE270;
    case 541u: goto L_088AE27C;
    case 542u: goto L_088AE284;
    case 543u: goto L_088AE2AC;
    case 544u: goto L_088AE2C0;
    case 545u: goto L_088AE2C4;
    case 546u: goto L_088AE2EC;
    case 547u: goto L_088AE2FC;
    case 548u: goto L_088AE304;
    case 549u: goto L_088AE314;
    case 550u: goto L_088AE31C;
    case 551u: goto L_088AE370;
    case 552u: goto L_088AE380;
    case 553u: goto L_088AE398;
    case 554u: goto L_088AE3AC;
    case 555u: goto L_088AE3D8;
    case 556u: goto L_088AE3E0;
    case 557u: goto L_088AE40C;
    case 558u: goto L_088AE448;
    case 559u: goto L_088AE454;
    case 560u: goto L_088AE460;
    case 561u: goto L_088AE46C;
    case 562u: goto L_088AE474;
    case 563u: goto L_088AE4B4;
    case 564u: goto L_088AE4FC;
    case 565u: goto L_088AE508;
    case 566u: goto L_088AE510;
    case 567u: goto L_088AE518;
    case 568u: goto L_088AE54C;
    case 569u: goto L_088AE55C;
    case 570u: goto L_088AE56C;
    case 571u: goto L_088AE570;
    case 572u: goto L_088AE574;
    case 573u: goto L_088AE584;
    case 574u: goto L_088AE590;
    case 575u: goto L_088AE598;
    case 576u: goto L_088AE5A0;
    case 577u: goto L_088AE5AC;
    case 578u: goto L_088AE5BC;
    case 579u: goto L_088AE5C4;
    case 580u: goto L_088AE5D4;
    case 581u: goto L_088AE5E8;
    case 582u: goto L_088AE5F8;
    case 583u: goto L_088AE604;
    case 584u: goto L_088AE618;
    case 585u: goto L_088AE624;
    case 586u: goto L_088AE630;
    case 587u: goto L_088AE638;
    case 588u: goto L_088AE63C;
    case 589u: goto L_088AE654;
    case 590u: goto L_088AE664;
    case 591u: goto L_088AE674;
    case 592u: goto L_088AE678;
    case 593u: goto L_088AE67C;
    case 594u: goto L_088AE68C;
    case 595u: goto L_088AE694;
    case 596u: goto L_088AE69C;
    case 597u: goto L_088AE6A4;
    case 598u: goto L_088AE6AC;
    case 599u: goto L_088AE6B4;
    case 600u: goto L_088AE708;
    case 601u: goto L_088AE710;
    case 602u: goto L_088AE750;
    case 603u: goto L_088AE758;
    case 604u: goto L_088AE764;
    case 605u: goto L_088AE774;
    case 606u: goto L_088AE788;
    case 607u: goto L_088AE790;
    case 608u: goto L_088AE798;
    case 609u: goto L_088AE7A0;
    case 610u: goto L_088AE7AC;
    case 611u: goto L_088AE7FC;
    case 612u: goto L_088AE808;
    case 613u: goto L_088AE828;
    case 614u: goto L_088AE83C;
    case 615u: goto L_088AE848;
    case 616u: goto L_088AE8C4;
    case 617u: goto L_088AE8D0;
    case 618u: goto L_088AE8E0;
    case 619u: goto L_088AE8E8;
    case 620u: goto L_088AE90C;
    case 621u: goto L_088AE910;
    case 622u: goto L_088AE95C;
    case 623u: goto L_088AE968;
    case 624u: goto L_088AE984;
    case 625u: goto L_088AE998;
    case 626u: goto L_088AE99C;
    case 627u: goto L_088AE9A4;
    case 628u: goto L_088AE9D4;
    case 629u: goto L_088AE9E0;
    case 630u: goto L_088AE9F4;
    case 631u: goto L_088AEA00;
    case 632u: goto L_088AEA0C;
    case 633u: goto L_088AEA14;
    case 634u: goto L_088AEA18;
    case 635u: goto L_088AEA28;
    case 636u: goto L_088AEA34;
    case 637u: goto L_088AEA44;
    case 638u: goto L_088AEA5C;
    case 639u: goto L_088AEA80;
    case 640u: goto L_088AEA84;
    case 641u: goto L_088AEAB4;
    case 642u: goto L_088AEAF4;
    case 643u: goto L_088AEB14;
    case 644u: goto L_088AEB1C;
    case 645u: goto L_088AEB20;
    case 646u: goto L_088AEB2C;
    case 647u: goto L_088AEB38;
    case 648u: goto L_088AEB40;
    case 649u: goto L_088AEB48;
    case 650u: goto L_088AEB50;
    case 651u: goto L_088AEB5C;
    case 652u: goto L_088AEB64;
    case 653u: goto L_088AEB6C;
    case 654u: goto L_088AEB74;
    case 655u: goto L_088AEB80;
    case 656u: goto L_088AEB88;
    case 657u: goto L_088AEB90;
    case 658u: goto L_088AEB98;
    case 659u: goto L_088AEBA4;
    case 660u: goto L_088AEBAC;
    case 661u: goto L_088AEBB4;
    case 662u: goto L_088AEBBC;
    case 663u: goto L_088AEBC8;
    case 664u: goto L_088AEBD0;
    case 665u: goto L_088AEBD8;
    case 666u: goto L_088AEBE0;
    case 667u: goto L_088AEBE8;
    case 668u: goto L_088AEC28;
    case 669u: goto L_088AEC58;
    case 670u: goto L_088AEC90;
    case 671u: goto L_088AECC0;
    case 672u: goto L_088AECE8;
    case 673u: goto L_088AED14;
    case 674u: goto L_088AED34;
    case 675u: goto L_088AED60;
    case 676u: goto L_088AED88;
    case 677u: goto L_088AEDB8;
    case 678u: goto L_088AEDD8;
    case 679u: goto L_088AEE04;
    case 680u: goto L_088AEE24;
    case 681u: goto L_088AEE44;
    case 682u: goto L_088AEE4C;
    case 683u: goto L_088AEE54;
    case 684u: goto L_088AEE88;
    case 685u: goto L_088AEE98;
    case 686u: goto L_088AEEAC;
    case 687u: goto L_088AEEF4;
    case 688u: goto L_088AEEFC;
    case 689u: goto L_088AEF04;
    case 690u: goto L_088AEF0C;
    case 691u: goto L_088AEF44;
    case 692u: goto L_088AEF54;
    case 693u: goto L_088AEF6C;
    case 694u: goto L_088AEF90;
    case 695u: goto L_088AEFA0;
    case 696u: goto L_088AEFB0;
    case 697u: goto L_088AEFF0;
    case 698u: goto L_088AF02C;
    case 699u: goto L_088AF03C;
    case 700u: goto L_088AF04C;
    case 701u: goto L_088AF070;
    case 702u: goto L_088AF080;
    case 703u: goto L_088AF090;
    case 704u: goto L_088AF0D4;
    case 705u: goto L_088AF0DC;
    case 706u: goto L_088AF0E4;
    case 707u: goto L_088AF0EC;
    case 708u: goto L_088AF120;
    case 709u: goto L_088AF130;
    case 710u: goto L_088AF148;
    case 711u: goto L_088AF16C;
    case 712u: goto L_088AF17C;
    case 713u: goto L_088AF18C;
    case 714u: goto L_088AF1DC;
    case 715u: goto L_088AF20C;
    case 716u: goto L_088AF21C;
    case 717u: goto L_088AF230;
    case 718u: goto L_088AF268;
    case 719u: goto L_088AF298;
    case 720u: goto L_088AF2A0;
    case 721u: goto L_088AF2BC;
    case 722u: goto L_088AF2E8;
    case 723u: goto L_088AF2EC;
    case 724u: goto L_088AF31C;
    case 725u: goto L_088AF328;
    case 726u: goto L_088AF330;
    case 727u: goto L_088AF338;
    case 728u: goto L_088AF340;
    case 729u: goto L_088AF354;
    case 730u: goto L_088AF380;
    case 731u: goto L_088AF38C;
    case 732u: goto L_088AF394;
    case 733u: goto L_088AF3A0;
    case 734u: goto L_088AF3AC;
    case 735u: goto L_088AF3B4;
    case 736u: goto L_088AF3C0;
    case 737u: goto L_088AF3D4;
    case 738u: goto L_088AF400;
    case 739u: goto L_088AF40C;
    case 740u: goto L_088AF414;
    case 741u: goto L_088AF428;
    case 742u: goto L_088AF440;
    case 743u: goto L_088AF454;
    case 744u: goto L_088AF45C;
    case 745u: goto L_088AF460;
    case 746u: goto L_088AF47C;
    case 747u: goto L_088AF48C;
    case 748u: goto L_088AF494;
    case 749u: goto L_088AF498;
    case 750u: goto L_088AF4A8;
    case 751u: goto L_088AF4B8;
    case 752u: goto L_088AF4C4;
    case 753u: goto L_088AF4EC;
    case 754u: goto L_088AF4F0;
    case 755u: goto L_088AF514;
    case 756u: goto L_088AF518;
    case 757u: goto L_088AF540;
    case 758u: goto L_088AF55C;
    case 759u: goto L_088AF568;
    case 760u: goto L_088AF570;
    case 761u: goto L_088AF584;
    case 762u: goto L_088AF598;
    case 763u: goto L_088AF63C;
    case 764u: goto L_088AF658;
    case 765u: goto L_088AF690;
    case 766u: goto L_088AF6A0;
    case 767u: goto L_088AF6E0;
    case 768u: goto L_088AF6F0;
    case 769u: goto L_088AF718;
    case 770u: goto L_088AF720;
    case 771u: goto L_088AF72C;
    case 772u: goto L_088AF768;
    case 773u: goto L_088AF774;
    case 774u: goto L_088AF77C;
    case 775u: goto L_088AF7BC;
    case 776u: goto L_088AF7E0;
    case 777u: goto L_088AF7EC;
    case 778u: goto L_088AF818;
    case 779u: goto L_088AF81C;
    case 780u: goto L_088AF840;
    case 781u: goto L_088AF848;
    case 782u: goto L_088AF84C;
    case 783u: goto L_088AF874;
    case 784u: goto L_088AF878;
    case 785u: goto L_088AF898;
    case 786u: goto L_088AF908;
    case 787u: goto L_088AF924;
    case 788u: goto L_088AF92C;
    case 789u: goto L_088AF948;
    case 790u: goto L_088AF968;
    case 791u: goto L_088AF96C;
    case 792u: goto L_088AF994;
    case 793u: goto L_088AF9B4;
    case 794u: goto L_088AFD54;
    case 795u: goto L_088AFD6C;
    case 796u: goto L_088AFD84;
    case 797u: goto L_088AFD9C;
    case 798u: goto L_088AFDB4;
    case 799u: goto L_088AFDCC;
    case 800u: goto L_088AFDE4;
    case 801u: goto L_088AFDFC;
    case 802u: goto L_088AFE14;
    case 803u: goto L_088AFE2C;
    case 804u: goto L_088AFE44;
    case 805u: goto L_088AFE5C;
    case 806u: goto L_088AFE74;
    case 807u: goto L_088AFE8C;
    case 808u: goto L_088AFEA4;
    case 809u: goto L_088AFEBC;
    case 810u: goto L_088AFEC8;
    case 811u: goto L_088AFEE8;
    case 812u: goto L_088AFF00;
    case 813u: goto L_088AFF18;
    case 814u: goto L_088AFF30;
    case 815u: goto L_088AFF48;
    case 816u: goto L_088AFF60;
    case 817u: goto L_088AFF78;
    case 818u: goto L_088AFF90;
    case 819u: goto L_088AFFA8;
    case 820u: goto L_088AFFC0;
    case 821u: goto L_088AFFD8;
    case 822u: goto L_088AFFF0;
    case 823u: goto L_088AFFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088AC004:
    ctx.gpr[18] = (ctx.gpr[21] | 0u);
    goto L_088AC008;
L_088AC008:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AC01C;
      }
      goto L_088AC010;
    }
L_088AC010:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AC01C;
L_088AC01C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AC02Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 237u, 0x088A90A8u>(ctx, &aot_mem) && ctx.pc == 0x088AC02Cu) goto L_088AC02C;
    return;
L_088AC02C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC050;
      }
      goto L_088AC038;
    }
L_088AC038:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AC050;
      }
      goto L_088AC048;
    }
L_088AC048:
    ctx.gpr[31] = (0x088AC050u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088AC050u) goto L_088AC050;
    return;
L_088AC050:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AC064u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-6936))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088AC064u) goto L_088AC064;
    return;
L_088AC064:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AC098;
      }
      goto L_088AC070;
    }
L_088AC070:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9540));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9524));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2189u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26996));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AC098;
L_088AC098:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AC0AC;
      }
      goto L_088AC0A0;
    }
L_088AC0A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AC0AC;
L_088AC0AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AC0BCu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 237u, 0x088A90A8u>(ctx, &aot_mem) && ctx.pc == 0x088AC0BCu) goto L_088AC0BC;
    return;
L_088AC0BC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC0E0;
      }
      goto L_088AC0C8;
    }
L_088AC0C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AC0E0;
      }
      goto L_088AC0D8;
    }
L_088AC0D8:
    ctx.gpr[31] = (0x088AC0E0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088AC0E0u) goto L_088AC0E0;
    return;
L_088AC0E0:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AC0F4u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7116))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088AC0F4u) goto L_088AC0F4;
    return;
L_088AC0F4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AC128;
      }
      goto L_088AC100;
    }
L_088AC100:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9540));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9524));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2181u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(15468));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AC128;
L_088AC128:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AC13C;
      }
      goto L_088AC130;
    }
L_088AC130:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AC13C;
L_088AC13C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AC14Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 237u, 0x088A90A8u>(ctx, &aot_mem) && ctx.pc == 0x088AC14Cu) goto L_088AC14C;
    return;
L_088AC14C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC170;
      }
      goto L_088AC158;
    }
L_088AC158:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AC170;
      }
      goto L_088AC168;
    }
L_088AC168:
    ctx.gpr[31] = (0x088AC170u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088AC170u) goto L_088AC170;
    return;
L_088AC170:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AC184u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7111))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088AC184u) goto L_088AC184;
    return;
L_088AC184:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AC1B8;
      }
      goto L_088AC190;
    }
L_088AC190:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9540));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9524));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2181u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1424));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AC1B8;
L_088AC1B8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AC1CC;
      }
      goto L_088AC1C0;
    }
L_088AC1C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AC1CC;
L_088AC1CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AC1DCu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 237u, 0x088A90A8u>(ctx, &aot_mem) && ctx.pc == 0x088AC1DCu) goto L_088AC1DC;
    return;
L_088AC1DC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC200;
      }
      goto L_088AC1E8;
    }
L_088AC1E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AC200;
      }
      goto L_088AC1F8;
    }
L_088AC1F8:
    ctx.gpr[31] = (0x088AC200u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088AC200u) goto L_088AC200;
    return;
L_088AC200:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AC214u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7117))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088AC214u) goto L_088AC214;
    return;
L_088AC214:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AC248;
      }
      goto L_088AC220;
    }
L_088AC220:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9540));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9524));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2181u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-328));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AC248;
L_088AC248:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AC25C;
      }
      goto L_088AC250;
    }
L_088AC250:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AC25C;
L_088AC25C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AC26Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 237u, 0x088A90A8u>(ctx, &aot_mem) && ctx.pc == 0x088AC26Cu) goto L_088AC26C;
    return;
L_088AC26C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC290;
      }
      goto L_088AC278;
    }
L_088AC278:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AC290;
      }
      goto L_088AC288;
    }
L_088AC288:
    ctx.gpr[31] = (0x088AC290u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088AC290u) goto L_088AC290;
    return;
L_088AC290:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AC2A4u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7113))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088AC2A4u) goto L_088AC2A4;
    return;
L_088AC2A4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AC2D8;
      }
      goto L_088AC2B0;
    }
L_088AC2B0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9540));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9524));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2181u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(844));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AC2D8;
L_088AC2D8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AC2EC;
      }
      goto L_088AC2E0;
    }
L_088AC2E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AC2EC;
L_088AC2EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AC2FCu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 237u, 0x088A90A8u>(ctx, &aot_mem) && ctx.pc == 0x088AC2FCu) goto L_088AC2FC;
    return;
L_088AC2FC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC320;
      }
      goto L_088AC308;
    }
L_088AC308:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AC320;
      }
      goto L_088AC318;
    }
L_088AC318:
    ctx.gpr[31] = (0x088AC320u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088AC320u) goto L_088AC320;
    return;
L_088AC320:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AC334u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7114))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088AC334u) goto L_088AC334;
    return;
L_088AC334:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AC368;
      }
      goto L_088AC340;
    }
L_088AC340:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9540));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9524));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2181u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(68));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AC368;
L_088AC368:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AC37C;
      }
      goto L_088AC370;
    }
L_088AC370:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AC37C;
L_088AC37C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AC38Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 237u, 0x088A90A8u>(ctx, &aot_mem) && ctx.pc == 0x088AC38Cu) goto L_088AC38C;
    return;
L_088AC38C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC3B0;
      }
      goto L_088AC398;
    }
L_088AC398:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AC3B0;
      }
      goto L_088AC3A8;
    }
L_088AC3A8:
    ctx.gpr[31] = (0x088AC3B0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088AC3B0u) goto L_088AC3B0;
    return;
L_088AC3B0:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AC3C4u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7727))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088AC3C4u) goto L_088AC3C4;
    return;
L_088AC3C4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AC3F8;
      }
      goto L_088AC3D0;
    }
L_088AC3D0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9540));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9524));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2179u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17632));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AC3F8;
L_088AC3F8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AC40C;
      }
      goto L_088AC400;
    }
L_088AC400:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AC40C;
L_088AC40C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AC41Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 237u, 0x088A90A8u>(ctx, &aot_mem) && ctx.pc == 0x088AC41Cu) goto L_088AC41C;
    return;
L_088AC41C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC440;
      }
      goto L_088AC428;
    }
L_088AC428:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AC440;
      }
      goto L_088AC438;
    }
L_088AC438:
    ctx.gpr[31] = (0x088AC440u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088AC440u) goto L_088AC440;
    return;
L_088AC440:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AC454u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-6935))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088AC454u) goto L_088AC454;
    return;
L_088AC454:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AC488;
      }
      goto L_088AC460;
    }
L_088AC460:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9540));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9524));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2188u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(196));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AC488;
L_088AC488:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AC49C;
      }
      goto L_088AC490;
    }
L_088AC490:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AC49C;
L_088AC49C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AC4ACu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 237u, 0x088A90A8u>(ctx, &aot_mem) && ctx.pc == 0x088AC4ACu) goto L_088AC4AC;
    return;
L_088AC4AC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC4D0;
      }
      goto L_088AC4B8;
    }
L_088AC4B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AC4D0;
      }
      goto L_088AC4C8;
    }
L_088AC4C8:
    ctx.gpr[31] = (0x088AC4D0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088AC4D0u) goto L_088AC4D0;
    return;
L_088AC4D0:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AC4E4u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7126))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088AC4E4u) goto L_088AC4E4;
    return;
L_088AC4E4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AC518;
      }
      goto L_088AC4F0;
    }
L_088AC4F0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9540));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9524));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2181u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(556));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AC518;
L_088AC518:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AC52C;
      }
      goto L_088AC520;
    }
L_088AC520:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AC52C;
L_088AC52C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AC53Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 237u, 0x088A90A8u>(ctx, &aot_mem) && ctx.pc == 0x088AC53Cu) goto L_088AC53C;
    return;
L_088AC53C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC560;
      }
      goto L_088AC548;
    }
L_088AC548:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AC560;
      }
      goto L_088AC558;
    }
L_088AC558:
    ctx.gpr[31] = (0x088AC560u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088AC560u) goto L_088AC560;
    return;
L_088AC560:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AC574u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7110))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088AC574u) goto L_088AC574;
    return;
L_088AC574:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AC5A8;
      }
      goto L_088AC580;
    }
L_088AC580:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9540));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9524));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2181u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2160));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AC5A8;
L_088AC5A8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AC5BC;
      }
      goto L_088AC5B0;
    }
L_088AC5B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AC5BC;
L_088AC5BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AC5CCu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 237u, 0x088A90A8u>(ctx, &aot_mem) && ctx.pc == 0x088AC5CCu) goto L_088AC5CC;
    return;
L_088AC5CC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC5F0;
      }
      goto L_088AC5D8;
    }
L_088AC5D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AC5F0;
      }
      goto L_088AC5E8;
    }
L_088AC5E8:
    ctx.gpr[31] = (0x088AC5F0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088AC5F0u) goto L_088AC5F0;
    return;
L_088AC5F0:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AC604u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7115))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088AC604u) goto L_088AC604;
    return;
L_088AC604:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AC638;
      }
      goto L_088AC610;
    }
L_088AC610:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9540));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9524));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2181u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2748));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AC638;
L_088AC638:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AC64C;
      }
      goto L_088AC640;
    }
L_088AC640:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AC64C;
L_088AC64C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AC65Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 237u, 0x088A90A8u>(ctx, &aot_mem) && ctx.pc == 0x088AC65Cu) goto L_088AC65C;
    return;
L_088AC65C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC680;
      }
      goto L_088AC668;
    }
L_088AC668:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AC680;
      }
      goto L_088AC678;
    }
L_088AC678:
    ctx.gpr[31] = (0x088AC680u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088AC680u) goto L_088AC680;
    return;
L_088AC680:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AC694u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7120))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088AC694u) goto L_088AC694;
    return;
L_088AC694:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AC6C8;
      }
      goto L_088AC6A0;
    }
L_088AC6A0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9540));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9524));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2181u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17368));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AC6C8;
L_088AC6C8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AC6DC;
      }
      goto L_088AC6D0;
    }
L_088AC6D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AC6DC;
L_088AC6DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AC6ECu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 237u, 0x088A90A8u>(ctx, &aot_mem) && ctx.pc == 0x088AC6ECu) goto L_088AC6EC;
    return;
L_088AC6EC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC710;
      }
      goto L_088AC6F8;
    }
L_088AC6F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AC710;
      }
      goto L_088AC708;
    }
L_088AC708:
    ctx.gpr[31] = (0x088AC710u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088AC710u) goto L_088AC710;
    return;
L_088AC710:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AC724u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-6952))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088AC724u) goto L_088AC724;
    return;
L_088AC724:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AC758;
      }
      goto L_088AC730;
    }
L_088AC730:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9540));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9524));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2187u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19652));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AC758;
L_088AC758:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AC76C;
      }
      goto L_088AC760;
    }
L_088AC760:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AC76C;
L_088AC76C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AC77Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 237u, 0x088A90A8u>(ctx, &aot_mem) && ctx.pc == 0x088AC77Cu) goto L_088AC77C;
    return;
L_088AC77C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC7A0;
      }
      goto L_088AC788;
    }
L_088AC788:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AC7A0;
      }
      goto L_088AC798;
    }
L_088AC798:
    ctx.gpr[31] = (0x088AC7A0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088AC7A0u) goto L_088AC7A0;
    return;
L_088AC7A0:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AC7B4u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-6951))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088AC7B4u) goto L_088AC7B4;
    return;
L_088AC7B4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AC7E8;
      }
      goto L_088AC7C0;
    }
L_088AC7C0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9540));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9524));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2187u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19528));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AC7E8;
L_088AC7E8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AC7FC;
      }
      goto L_088AC7F0;
    }
L_088AC7F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AC7FC;
L_088AC7FC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AC80Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 237u, 0x088A90A8u>(ctx, &aot_mem) && ctx.pc == 0x088AC80Cu) goto L_088AC80C;
    return;
L_088AC80C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC830;
      }
      goto L_088AC818;
    }
L_088AC818:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AC830;
      }
      goto L_088AC828;
    }
L_088AC828:
    ctx.gpr[31] = (0x088AC830u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088AC830u) goto L_088AC830;
    return;
L_088AC830:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AC844u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-6968))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088AC844u) goto L_088AC844;
    return;
L_088AC844:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AC878;
      }
      goto L_088AC850;
    }
L_088AC850:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9540));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9524));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2187u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19136));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AC878;
L_088AC878:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AC88C;
      }
      goto L_088AC880;
    }
L_088AC880:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AC88C;
L_088AC88C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AC89Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 237u, 0x088A90A8u>(ctx, &aot_mem) && ctx.pc == 0x088AC89Cu) goto L_088AC89C;
    return;
L_088AC89C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC8C0;
      }
      goto L_088AC8A8;
    }
L_088AC8A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AC8C0;
      }
      goto L_088AC8B8;
    }
L_088AC8B8:
    ctx.gpr[31] = (0x088AC8C0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088AC8C0u) goto L_088AC8C0;
    return;
L_088AC8C0:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AC8D4u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-6934))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088AC8D4u) goto L_088AC8D4;
    return;
L_088AC8D4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AC908;
      }
      goto L_088AC8E0;
    }
L_088AC8E0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9540));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9524));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2194u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22828));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AC908;
L_088AC908:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AC91C;
      }
      goto L_088AC910;
    }
L_088AC910:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AC91C;
L_088AC91C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AC92Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 237u, 0x088A90A8u>(ctx, &aot_mem) && ctx.pc == 0x088AC92Cu) goto L_088AC92C;
    return;
L_088AC92C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC950;
      }
      goto L_088AC938;
    }
L_088AC938:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AC950;
      }
      goto L_088AC948;
    }
L_088AC948:
    ctx.gpr[31] = (0x088AC950u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088AC950u) goto L_088AC950;
    return;
L_088AC950:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AC964u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-6933))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088AC964u) goto L_088AC964;
    return;
L_088AC964:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AC998;
      }
      goto L_088AC970;
    }
L_088AC970:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9540));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9524));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2194u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-23116));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AC998;
L_088AC998:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AC9AC;
      }
      goto L_088AC9A0;
    }
L_088AC9A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AC9AC;
L_088AC9AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AC9BCu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 237u, 0x088A90A8u>(ctx, &aot_mem) && ctx.pc == 0x088AC9BCu) goto L_088AC9BC;
    return;
L_088AC9BC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC9E0;
      }
      goto L_088AC9C8;
    }
L_088AC9C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AC9E0;
      }
      goto L_088AC9D8;
    }
L_088AC9D8:
    ctx.gpr[31] = (0x088AC9E0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088AC9E0u) goto L_088AC9E0;
    return;
L_088AC9E0:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AC9F4u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-6932))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088AC9F4u) goto L_088AC9F4;
    return;
L_088AC9F4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088ACA28;
      }
      goto L_088ACA00;
    }
L_088ACA00:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9540));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9524));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2194u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21820));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088ACA28;
L_088ACA28:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088ACA3C;
      }
      goto L_088ACA30;
    }
L_088ACA30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088ACA3C;
L_088ACA3C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088ACA4Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 237u, 0x088A90A8u>(ctx, &aot_mem) && ctx.pc == 0x088ACA4Cu) goto L_088ACA4C;
    return;
L_088ACA4C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ACA70;
      }
      goto L_088ACA58;
    }
L_088ACA58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088ACA70;
      }
      goto L_088ACA68;
    }
L_088ACA68:
    ctx.gpr[31] = (0x088ACA70u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088ACA70u) goto L_088ACA70;
    return;
L_088ACA70:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088ACA84u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-6931))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088ACA84u) goto L_088ACA84;
    return;
L_088ACA84:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088ACAB8;
      }
      goto L_088ACA90;
    }
L_088ACA90:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9540));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9524));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2212u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26756));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088ACAB8;
L_088ACAB8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088ACACC;
      }
      goto L_088ACAC0;
    }
L_088ACAC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088ACACC;
L_088ACACC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088ACADCu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 237u, 0x088A90A8u>(ctx, &aot_mem) && ctx.pc == 0x088ACADCu) goto L_088ACADC;
    return;
L_088ACADC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ACB00;
      }
      goto L_088ACAE8;
    }
L_088ACAE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088ACB00;
      }
      goto L_088ACAF8;
    }
L_088ACAF8:
    ctx.gpr[31] = (0x088ACB00u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088ACB00u) goto L_088ACB00;
    return;
L_088ACB00:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088ACB14u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7128))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088ACB14u) goto L_088ACB14;
    return;
L_088ACB14:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088ACB48;
      }
      goto L_088ACB20;
    }
L_088ACB20:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9540));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9524));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2181u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4492));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088ACB48;
L_088ACB48:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088ACB5C;
      }
      goto L_088ACB50;
    }
L_088ACB50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088ACB5C;
L_088ACB5C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088ACB6Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 237u, 0x088A90A8u>(ctx, &aot_mem) && ctx.pc == 0x088ACB6Cu) goto L_088ACB6C;
    return;
L_088ACB6C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ACB90;
      }
      goto L_088ACB78;
    }
L_088ACB78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088ACB90;
      }
      goto L_088ACB88;
    }
L_088ACB88:
    ctx.gpr[31] = (0x088ACB90u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088ACB90u) goto L_088ACB90;
    return;
L_088ACB90:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088ACBA4u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7800))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088ACBA4u) goto L_088ACBA4;
    return;
L_088ACBA4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088ACBD8;
      }
      goto L_088ACBB0;
    }
L_088ACBB0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9540));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9524));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1988));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088ACBD8;
L_088ACBD8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088ACBEC;
      }
      goto L_088ACBE0;
    }
L_088ACBE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088ACBEC;
L_088ACBEC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088ACBFCu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 237u, 0x088A90A8u>(ctx, &aot_mem) && ctx.pc == 0x088ACBFCu) goto L_088ACBFC;
    return;
L_088ACBFC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ACC20;
      }
      goto L_088ACC08;
    }
L_088ACC08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088ACC20;
      }
      goto L_088ACC18;
    }
L_088ACC18:
    ctx.gpr[31] = (0x088ACC20u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088ACC20u) goto L_088ACC20;
    return;
L_088ACC20:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088ACC34u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-6930))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088ACC34u) goto L_088ACC34;
    return;
L_088ACC34:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088ACC68;
      }
      goto L_088ACC40;
    }
L_088ACC40:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9540));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9524));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1564));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088ACC68;
L_088ACC68:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088ACC7C;
      }
      goto L_088ACC70;
    }
L_088ACC70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088ACC7C;
L_088ACC7C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088ACC8Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 237u, 0x088A90A8u>(ctx, &aot_mem) && ctx.pc == 0x088ACC8Cu) goto L_088ACC8C;
    return;
L_088ACC8C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ACCB0;
      }
      goto L_088ACC98;
    }
L_088ACC98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088ACCB0;
      }
      goto L_088ACCA8;
    }
L_088ACCA8:
    ctx.gpr[31] = (0x088ACCB0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088ACCB0u) goto L_088ACCB0;
    return;
L_088ACCB0:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088ACCC4u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-6929))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088ACCC4u) goto L_088ACCC4;
    return;
L_088ACCC4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088ACCF8;
      }
      goto L_088ACCD0;
    }
L_088ACCD0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9540));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9524));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1184));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088ACCF8;
L_088ACCF8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088ACD0C;
      }
      goto L_088ACD00;
    }
L_088ACD00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088ACD0C;
L_088ACD0C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088ACD1Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 237u, 0x088A90A8u>(ctx, &aot_mem) && ctx.pc == 0x088ACD1Cu) goto L_088ACD1C;
    return;
L_088ACD1C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ACD40;
      }
      goto L_088ACD28;
    }
L_088ACD28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088ACD40;
      }
      goto L_088ACD38;
    }
L_088ACD38:
    ctx.gpr[31] = (0x088ACD40u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088ACD40u) goto L_088ACD40;
    return;
L_088ACD40:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088ACD54u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-6928))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088ACD54u) goto L_088ACD54;
    return;
L_088ACD54:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088ACD88;
      }
      goto L_088ACD60;
    }
L_088ACD60:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9540));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9524));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2209u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13164));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088ACD88;
L_088ACD88:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088ACD9C;
      }
      goto L_088ACD90;
    }
L_088ACD90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088ACD9C;
L_088ACD9C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088ACDACu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 237u, 0x088A90A8u>(ctx, &aot_mem) && ctx.pc == 0x088ACDACu) goto L_088ACDAC;
    return;
L_088ACDAC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ACDD0;
      }
      goto L_088ACDB8;
    }
L_088ACDB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088ACDD0;
      }
      goto L_088ACDC8;
    }
L_088ACDC8:
    ctx.gpr[31] = (0x088ACDD0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088ACDD0u) goto L_088ACDD0;
    return;
L_088ACDD0:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088ACDE4u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-6927))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088ACDE4u) goto L_088ACDE4;
    return;
L_088ACDE4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088ACE18;
      }
      goto L_088ACDF0;
    }
L_088ACDF0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9540));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9524));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2209u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13112));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088ACE18;
L_088ACE18:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088ACE2C;
      }
      goto L_088ACE20;
    }
L_088ACE20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088ACE2C;
L_088ACE2C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088ACE3Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 237u, 0x088A90A8u>(ctx, &aot_mem) && ctx.pc == 0x088ACE3Cu) goto L_088ACE3C;
    return;
L_088ACE3C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ACE60;
      }
      goto L_088ACE48;
    }
L_088ACE48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088ACE60;
      }
      goto L_088ACE58;
    }
L_088ACE58:
    ctx.gpr[31] = (0x088ACE60u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088ACE60u) goto L_088ACE60;
    return;
L_088ACE60:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088ACE74u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-6926))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088ACE74u) goto L_088ACE74;
    return;
L_088ACE74:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088ACEA8;
      }
      goto L_088ACE80;
    }
L_088ACE80:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9540));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9524));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2189u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17784));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088ACEA8;
L_088ACEA8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088ACEBC;
      }
      goto L_088ACEB0;
    }
L_088ACEB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088ACEBC;
L_088ACEBC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088ACECCu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 237u, 0x088A90A8u>(ctx, &aot_mem) && ctx.pc == 0x088ACECCu) goto L_088ACECC;
    return;
L_088ACECC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ACEF0;
      }
      goto L_088ACED8;
    }
L_088ACED8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088ACEF0;
      }
      goto L_088ACEE8;
    }
L_088ACEE8:
    ctx.gpr[31] = (0x088ACEF0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088ACEF0u) goto L_088ACEF0;
    return;
L_088ACEF0:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088ACF04u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-6956))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088ACF04u) goto L_088ACF04;
    return;
L_088ACF04:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088ACF38;
      }
      goto L_088ACF10;
    }
L_088ACF10:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9540));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9524));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2187u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18964));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088ACF38;
L_088ACF38:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088ACF4C;
      }
      goto L_088ACF40;
    }
L_088ACF40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088ACF4C;
L_088ACF4C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088ACF5Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 237u, 0x088A90A8u>(ctx, &aot_mem) && ctx.pc == 0x088ACF5Cu) goto L_088ACF5C;
    return;
L_088ACF5C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ACF80;
      }
      goto L_088ACF68;
    }
L_088ACF68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088ACF80;
      }
      goto L_088ACF78;
    }
L_088ACF78:
    ctx.gpr[31] = (0x088ACF80u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088ACF80u) goto L_088ACF80;
    return;
L_088ACF80:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088ACF94u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-6965))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088ACF94u) goto L_088ACF94;
    return;
L_088ACF94:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088ACFC8;
      }
      goto L_088ACFA0;
    }
L_088ACFA0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9540));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9524));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2187u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18880));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088ACFC8;
L_088ACFC8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088ACFDC;
      }
      goto L_088ACFD0;
    }
L_088ACFD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088ACFDC;
L_088ACFDC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088ACFECu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 237u, 0x088A90A8u>(ctx, &aot_mem) && ctx.pc == 0x088ACFECu) goto L_088ACFEC;
    return;
L_088ACFEC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD010;
      }
      goto L_088ACFF8;
    }
L_088ACFF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AD010;
      }
      goto L_088AD008;
    }
L_088AD008:
    ctx.gpr[31] = (0x088AD010u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088AD010u) goto L_088AD010;
    return;
L_088AD010:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AD024u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-6964))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088AD024u) goto L_088AD024;
    return;
L_088AD024:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AD058;
      }
      goto L_088AD030;
    }
L_088AD030:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9540));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9524));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2187u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18816));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AD058;
L_088AD058:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AD06C;
      }
      goto L_088AD060;
    }
L_088AD060:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AD06C;
L_088AD06C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AD07Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 237u, 0x088A90A8u>(ctx, &aot_mem) && ctx.pc == 0x088AD07Cu) goto L_088AD07C;
    return;
L_088AD07C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD0A0;
      }
      goto L_088AD088;
    }
L_088AD088:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AD0A0;
      }
      goto L_088AD098;
    }
L_088AD098:
    ctx.gpr[31] = (0x088AD0A0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088AD0A0u) goto L_088AD0A0;
    return;
L_088AD0A0:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AD0B4u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-6963))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088AD0B4u) goto L_088AD0B4;
    return;
L_088AD0B4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AD0E8;
      }
      goto L_088AD0C0;
    }
L_088AD0C0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9540));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9524));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2187u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18696));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AD0E8;
L_088AD0E8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AD0FC;
      }
      goto L_088AD0F0;
    }
L_088AD0F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AD0FC;
L_088AD0FC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AD10Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 237u, 0x088A90A8u>(ctx, &aot_mem) && ctx.pc == 0x088AD10Cu) goto L_088AD10C;
    return;
L_088AD10C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD130;
      }
      goto L_088AD118;
    }
L_088AD118:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AD130;
      }
      goto L_088AD128;
    }
L_088AD128:
    ctx.gpr[31] = (0x088AD130u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088AD130u) goto L_088AD130;
    return;
L_088AD130:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AD144u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-6962))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088AD144u) goto L_088AD144;
    return;
L_088AD144:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AD178;
      }
      goto L_088AD150;
    }
L_088AD150:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9540));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9524));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2187u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18444));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AD178;
L_088AD178:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AD18C;
      }
      goto L_088AD180;
    }
L_088AD180:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AD18C;
L_088AD18C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AD19Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 237u, 0x088A90A8u>(ctx, &aot_mem) && ctx.pc == 0x088AD19Cu) goto L_088AD19C;
    return;
L_088AD19C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD1C0;
      }
      goto L_088AD1A8;
    }
L_088AD1A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AD1C0;
      }
      goto L_088AD1B8;
    }
L_088AD1B8:
    ctx.gpr[31] = (0x088AD1C0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088AD1C0u) goto L_088AD1C0;
    return;
L_088AD1C0:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AD1D4u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-6961))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088AD1D4u) goto L_088AD1D4;
    return;
L_088AD1D4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AD208;
      }
      goto L_088AD1E0;
    }
L_088AD1E0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9540));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9524));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2187u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18284));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AD208;
L_088AD208:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AD21C;
      }
      goto L_088AD210;
    }
L_088AD210:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AD21C;
L_088AD21C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AD22Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 237u, 0x088A90A8u>(ctx, &aot_mem) && ctx.pc == 0x088AD22Cu) goto L_088AD22C;
    return;
L_088AD22C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD250;
      }
      goto L_088AD238;
    }
L_088AD238:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AD250;
      }
      goto L_088AD248;
    }
L_088AD248:
    ctx.gpr[31] = (0x088AD250u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088AD250u) goto L_088AD250;
    return;
L_088AD250:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AD264u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-6960))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088AD264u) goto L_088AD264;
    return;
L_088AD264:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AD298;
      }
      goto L_088AD270;
    }
L_088AD270:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9540));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9524));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2187u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18144));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AD298;
L_088AD298:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AD2AC;
      }
      goto L_088AD2A0;
    }
L_088AD2A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AD2AC;
L_088AD2AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AD2BCu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 237u, 0x088A90A8u>(ctx, &aot_mem) && ctx.pc == 0x088AD2BCu) goto L_088AD2BC;
    return;
L_088AD2BC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD2E0;
      }
      goto L_088AD2C8;
    }
L_088AD2C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AD2E0;
      }
      goto L_088AD2D8;
    }
L_088AD2D8:
    ctx.gpr[31] = (0x088AD2E0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088AD2E0u) goto L_088AD2E0;
    return;
L_088AD2E0:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AD2F4u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-6959))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088AD2F4u) goto L_088AD2F4;
    return;
L_088AD2F4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AD328;
      }
      goto L_088AD300;
    }
L_088AD300:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9540));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9524));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2187u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-17712));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AD328;
L_088AD328:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AD33C;
      }
      goto L_088AD330;
    }
L_088AD330:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AD33C;
L_088AD33C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AD34Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 237u, 0x088A90A8u>(ctx, &aot_mem) && ctx.pc == 0x088AD34Cu) goto L_088AD34C;
    return;
L_088AD34C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD370;
      }
      goto L_088AD358;
    }
L_088AD358:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AD370;
      }
      goto L_088AD368;
    }
L_088AD368:
    ctx.gpr[31] = (0x088AD370u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088AD370u) goto L_088AD370;
    return;
L_088AD370:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AD384u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-6958))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088AD384u) goto L_088AD384;
    return;
L_088AD384:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AD3B8;
      }
      goto L_088AD390;
    }
L_088AD390:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9540));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9524));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2187u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-17552));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AD3B8;
L_088AD3B8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AD3CC;
      }
      goto L_088AD3C0;
    }
L_088AD3C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AD3CC;
L_088AD3CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AD3DCu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 237u, 0x088A90A8u>(ctx, &aot_mem) && ctx.pc == 0x088AD3DCu) goto L_088AD3DC;
    return;
L_088AD3DC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD400;
      }
      goto L_088AD3E8;
    }
L_088AD3E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AD400;
      }
      goto L_088AD3F8;
    }
L_088AD3F8:
    ctx.gpr[31] = (0x088AD400u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088AD400u) goto L_088AD400;
    return;
L_088AD400:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AD414u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-6925))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088AD414u) goto L_088AD414;
    return;
L_088AD414:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AD448;
      }
      goto L_088AD420;
    }
L_088AD420:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9540));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9524));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-732));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AD448;
L_088AD448:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AD45C;
      }
      goto L_088AD450;
    }
L_088AD450:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AD45C;
L_088AD45C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AD46Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 237u, 0x088A90A8u>(ctx, &aot_mem) && ctx.pc == 0x088AD46Cu) goto L_088AD46C;
    return;
L_088AD46C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD490;
      }
      goto L_088AD478;
    }
L_088AD478:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AD490;
      }
      goto L_088AD488;
    }
L_088AD488:
    ctx.gpr[31] = (0x088AD490u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088AD490u) goto L_088AD490;
    return;
L_088AD490:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AD4A4u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-6924))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088AD4A4u) goto L_088AD4A4;
    return;
L_088AD4A4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AD4D8;
      }
      goto L_088AD4B0;
    }
L_088AD4B0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9540));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9524));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2200u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(9360));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AD4D8;
L_088AD4D8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AD4EC;
      }
      goto L_088AD4E0;
    }
L_088AD4E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AD4EC;
L_088AD4EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AD4FCu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 237u, 0x088A90A8u>(ctx, &aot_mem) && ctx.pc == 0x088AD4FCu) goto L_088AD4FC;
    return;
L_088AD4FC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD520;
      }
      goto L_088AD508;
    }
L_088AD508:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AD520;
      }
      goto L_088AD518;
    }
L_088AD518:
    ctx.gpr[31] = (0x088AD520u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088AD520u) goto L_088AD520;
    return;
L_088AD520:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AD534u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-6923))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088AD534u) goto L_088AD534;
    return;
L_088AD534:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AD568;
      }
      goto L_088AD540;
    }
L_088AD540:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9540));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9524));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2211u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23384));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AD568;
L_088AD568:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AD57C;
      }
      goto L_088AD570;
    }
L_088AD570:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AD57C;
L_088AD57C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AD58Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 237u, 0x088A90A8u>(ctx, &aot_mem) && ctx.pc == 0x088AD58Cu) goto L_088AD58C;
    return;
L_088AD58C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD5B0;
      }
      goto L_088AD598;
    }
L_088AD598:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AD5B0;
      }
      goto L_088AD5A8;
    }
L_088AD5A8:
    ctx.gpr[31] = (0x088AD5B0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088AD5B0u) goto L_088AD5B0;
    return;
L_088AD5B0:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AD5C4u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-6922))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088AD5C4u) goto L_088AD5C4;
    return;
L_088AD5C4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AD5F8;
      }
      goto L_088AD5D0;
    }
L_088AD5D0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9540));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9524));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2211u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23484));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AD5F8;
L_088AD5F8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AD60C;
      }
      goto L_088AD600;
    }
L_088AD600:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AD60C;
L_088AD60C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AD61Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 237u, 0x088A90A8u>(ctx, &aot_mem) && ctx.pc == 0x088AD61Cu) goto L_088AD61C;
    return;
L_088AD61C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD640;
      }
      goto L_088AD628;
    }
L_088AD628:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AD640;
      }
      goto L_088AD638;
    }
L_088AD638:
    ctx.gpr[31] = (0x088AD640u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088AD640u) goto L_088AD640;
    return;
L_088AD640:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AD654u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-6921))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088AD654u) goto L_088AD654;
    return;
L_088AD654:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AD688;
      }
      goto L_088AD660;
    }
L_088AD660:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9540));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9524));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2194u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12004));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AD688;
L_088AD688:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AD69C;
      }
      goto L_088AD690;
    }
L_088AD690:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AD69C;
L_088AD69C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AD6ACu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 237u, 0x088A90A8u>(ctx, &aot_mem) && ctx.pc == 0x088AD6ACu) goto L_088AD6AC;
    return;
L_088AD6AC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD6D0;
      }
      goto L_088AD6B8;
    }
L_088AD6B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AD6D0;
      }
      goto L_088AD6C8;
    }
L_088AD6C8:
    ctx.gpr[31] = (0x088AD6D0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088AD6D0u) goto L_088AD6D0;
    return;
L_088AD6D0:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AD6E4u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-6967))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088AD6E4u) goto L_088AD6E4;
    return;
L_088AD6E4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AD718;
      }
      goto L_088AD6F0;
    }
L_088AD6F0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9540));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9524));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2187u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19396));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AD718;
L_088AD718:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AD72C;
      }
      goto L_088AD720;
    }
L_088AD720:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AD72C;
L_088AD72C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AD73Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 237u, 0x088A90A8u>(ctx, &aot_mem) && ctx.pc == 0x088AD73Cu) goto L_088AD73C;
    return;
L_088AD73C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD760;
      }
      goto L_088AD748;
    }
L_088AD748:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AD760;
      }
      goto L_088AD758;
    }
L_088AD758:
    ctx.gpr[31] = (0x088AD760u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088AD760u) goto L_088AD760;
    return;
L_088AD760:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AD774u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-6966))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088AD774u) goto L_088AD774;
    return;
L_088AD774:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AD7A8;
      }
      goto L_088AD780;
    }
L_088AD780:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9540));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9524));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2187u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19328));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AD7A8;
L_088AD7A8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AD7BC;
      }
      goto L_088AD7B0;
    }
L_088AD7B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AD7BC;
L_088AD7BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AD7CCu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 237u, 0x088A90A8u>(ctx, &aot_mem) && ctx.pc == 0x088AD7CCu) goto L_088AD7CC;
    return;
L_088AD7CC:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD7F0;
      }
      goto L_088AD7D8;
    }
L_088AD7D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AD7F0;
      }
      goto L_088AD7E8;
    }
L_088AD7E8:
    ctx.gpr[31] = (0x088AD7F0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088AD7F0u) goto L_088AD7F0;
    return;
L_088AD7F0:
    ctx.gpr[31] = (0x088AD7F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 647u, 0x08877F54u>(ctx, &aot_mem) && ctx.pc == 0x088AD7F8u) goto L_088AD7F8;
    return;
L_088AD7F8:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16657), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16658), static_cast<std::uint8_t>(0u));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16662), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[31] = (0x088AD81Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 456u, 0x089EE7B8u>(ctx, &aot_mem) && ctx.pc == 0x088AD81Cu) goto L_088AD81C;
    return;
L_088AD81C:
    ctx.gpr[31] = (0x088AD824u);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 455u, 0x089EE7ACu>(ctx, &aot_mem) && ctx.pc == 0x088AD824u) goto L_088AD824;
    return;
L_088AD824:
    ctx.gpr[31] = (0x088AD82Cu);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(172));
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 145u, 0x08AB8A48u>(ctx, &aot_mem) && ctx.pc == 0x088AD82Cu) goto L_088AD82C;
    return;
L_088AD82C:
    ctx.gpr[31] = (0x088AD834u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(204));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 461u, 0x089D1C84u>(ctx, &aot_mem) && ctx.pc == 0x088AD834u) goto L_088AD834;
    return;
L_088AD834:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(116));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x088AD844u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 57u, 0x089C0478u>(ctx, &aot_mem) && ctx.pc == 0x088AD844u) goto L_088AD844;
    return;
L_088AD844:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(225), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(224), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x088AD868u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 91u, 0x088A84CCu>(ctx, &aot_mem) && ctx.pc == 0x088AD868u) goto L_088AD868;
    return;
L_088AD868:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x088AD890u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 618u, 0x088AAB9Cu>(ctx, &aot_mem) && ctx.pc == 0x088AD890u) goto L_088AD890;
    return;
L_088AD890:
    ctx.gpr[31] = (0x088AD898u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 571u, 0x088AA918u>(ctx, &aot_mem) && ctx.pc == 0x088AD898u) goto L_088AD898;
    return;
L_088AD898:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7788), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (0u | 100u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(260), ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(268), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(269), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29200), 0u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22912)));
    ctx.gpr[31] = (0x088AD8D0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 280u, 0x08A7D76Cu>(ctx, &aot_mem) && ctx.pc == 0x088AD8D0u) goto L_088AD8D0;
    return;
L_088AD8D0:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_088AD8F8;
      }
      goto L_088AD8EC;
    }
L_088AD8EC:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088AD8F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x088AD8F8u) goto L_088AD8F8;
    return;
L_088AD8F8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AD91C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    ctx.gpr[31] = (0x088AD958u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4856));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 443u, 0x088A6FC8u>(ctx, &aot_mem) && ctx.pc == 0x088AD958u) goto L_088AD958;
    return;
L_088AD958:
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6920), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[31] = (0x088AD974u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 132u, 0x08974980u>(ctx, &aot_mem) && ctx.pc == 0x088AD974u) goto L_088AD974;
    return;
L_088AD974:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[31] = (0x088AD980u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(-30316), static_cast<std::uint8_t>(ctx.gpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 3u, 0x08938078u>(ctx, &aot_mem) && ctx.pc == 0x088AD980u) goto L_088AD980;
    return;
L_088AD980:
    ctx.gpr[31] = (0x088AD988u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(172));
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 237u, 0x08AB91ACu>(ctx, &aot_mem) && ctx.pc == 0x088AD988u) goto L_088AD988;
    return;
L_088AD988:
    ctx.gpr[31] = (0x088AD990u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(204));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 498u, 0x089D1EFCu>(ctx, &aot_mem) && ctx.pc == 0x088AD990u) goto L_088AD990;
    return;
L_088AD990:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(-30316), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(244)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[22] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[30] = (2227u << 16u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[23] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AD9F8;
      }
      goto L_088AD9C8;
    }
L_088AD9C8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD9E4;
      }
      goto L_088AD9D8;
    }
L_088AD9D8:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(244)));
    goto L_088AD9E4;
L_088AD9E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD9C8;
      }
      goto L_088AD9F8;
    }
L_088AD9F8:
    ctx.gpr[31] = (0x088ADA00u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 555u, 0x088AA860u>(ctx, &aot_mem) && ctx.pc == 0x088ADA00u) goto L_088ADA00;
    return;
L_088ADA00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6948)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ADA3C;
      }
      goto L_088ADA0C;
    }
L_088ADA0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088ADA34;
      }
      goto L_088ADA20;
    }
L_088ADA20:
    ctx.gpr[31] = (0x088ADA28u);
    // nop
    ctx.pc = 0x08B0BCCCu;
    return;
L_088ADA28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6948)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
      if (branch_taken) {
          goto L_088ADA3C;
      }
      goto L_088ADA34;
    }
L_088ADA34:
    ctx.gpr[31] = (0x088ADA3Cu);
    // nop
    ctx.pc = 0x08B0BD1Cu;
    return;
L_088ADA3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-6944)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ADA78;
      }
      goto L_088ADA48;
    }
L_088ADA48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088ADA70;
      }
      goto L_088ADA5C;
    }
L_088ADA5C:
    ctx.gpr[31] = (0x088ADA64u);
    // nop
    ctx.pc = 0x08B0BCCCu;
    return;
L_088ADA64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-6944)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
      if (branch_taken) {
          goto L_088ADA78;
      }
      goto L_088ADA70;
    }
L_088ADA70:
    ctx.gpr[31] = (0x088ADA78u);
    // nop
    ctx.pc = 0x08B0BD1Cu;
    return;
L_088ADA78:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-6944), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-6948), 0u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[31] = (0x088ADA8Cu);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(116));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 6u, 0x089C00C4u>(ctx, &aot_mem) && ctx.pc == 0x088ADA8Cu) goto L_088ADA8C;
    return;
L_088ADA8C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ADB74;
      }
      goto L_088ADA98;
    }
L_088ADA98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ADB74;
      }
      goto L_088ADAB0;
    }
L_088ADAB0:
    ctx.gpr[31] = (0x088ADAB8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 234u, 0x0886D91Cu>(ctx, &aot_mem) && ctx.pc == 0x088ADAB8u) goto L_088ADAB8;
    return;
L_088ADAB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(148)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[17] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (2225u << 16u);
      if (branch_taken) {
          goto L_088ADB54;
      }
      goto L_088ADAE4;
    }
L_088ADAE4:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4884));
    goto L_088ADAEC;
L_088ADAEC:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(148)));
        goto L_088ADB30;
    }
    goto L_088ADAFC;
L_088ADAFC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088ADB08u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 443u, 0x088A6FC8u>(ctx, &aot_mem) && ctx.pc == 0x088ADB08u) goto L_088ADB08;
    return;
L_088ADB08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088ADB1Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 701u, 0x088AB128u>(ctx, &aot_mem) && ctx.pc == 0x088ADB1Cu) goto L_088ADB1C;
    return;
L_088ADB1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(148)));
    goto L_088ADB30;
L_088ADB30:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[17] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088ADAEC;
      }
      goto L_088ADB54;
    }
L_088ADB54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x088ADB60u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 139u, 0x0886D278u>(ctx, &aot_mem) && ctx.pc == 0x088ADB60u) goto L_088ADB60;
    return;
L_088ADB60:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x088ADB70u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26208));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x088ADB70u) goto L_088ADB70;
    return;
L_088ADB70:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(100), 0u);
    goto L_088ADB74;
L_088ADB74:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(225), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x088ADB88u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 302u, 0x089E1AFCu>(ctx, &aot_mem) && ctx.pc == 0x088ADB88u) goto L_088ADB88;
    return;
L_088ADB88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(156), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[6] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
      if (branch_taken) {
          goto L_088ADBC8;
      }
      goto L_088ADBB4;
    }
L_088ADBB4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(148), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088ADBDC;
      }
      goto L_088ADBC8;
    }
L_088ADBC8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(144));
    ctx.gpr[31] = (0x088ADBDCu);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 674u, 0x08AFEF38u>(ctx, &aot_mem) && ctx.pc == 0x088ADBDCu) goto L_088ADBDC;
    return;
L_088ADBDC:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x088ADBE8u);
    ctx.gpr[4] = (0u | 112u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088ADBE8u) goto L_088ADBE8;
    return;
L_088ADBE8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088ADC00;
      }
      goto L_088ADBF4;
    }
L_088ADBF4:
    ctx.gpr[31] = (0x088ADBFCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 696u, 0x088AB064u>(ctx, &aot_mem) && ctx.pc == 0x088ADBFCu) goto L_088ADBFC;
    return;
L_088ADBFC:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_088ADC00;
L_088ADC00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (0u | 30u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(84), 0u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(88), static_cast<std::uint16_t>(ctx.gpr[21]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(156), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(132), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(228), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 131u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(54), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x088ADC60u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 33u, 0x08968250u>(ctx, &aot_mem) && ctx.pc == 0x088ADC60u) goto L_088ADC60;
    return;
L_088ADC60:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x088ADC6Cu);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7728), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 303u, 0x08879C64u>(ctx, &aot_mem) && ctx.pc == 0x088ADC6Cu) goto L_088ADC6C;
    return;
L_088ADC6C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_088ADCA4;
      }
      goto L_088ADC78;
    }
L_088ADC78:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x088ADC84u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088ADC84u) goto L_088ADC84;
    return;
L_088ADC84:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ADC9C;
      }
      goto L_088ADC90;
    }
L_088ADC90:
    ctx.gpr[31] = (0x088ADC98u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x088ADC98u) goto L_088ADC98;
    return;
L_088ADC98:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_088ADC9C;
L_088ADC9C:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_088ADCA4;
L_088ADCA4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088ADCB4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4904));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x088ADCB4u) goto L_088ADCB4;
    return;
L_088ADCB4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x088ADCD8u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 495u, 0x0887AFFCu>(ctx, &aot_mem) && ctx.pc == 0x088ADCD8u) goto L_088ADCD8;
    return;
L_088ADCD8:
    ctx.gpr[31] = (0x088ADCE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 294u, 0x0883D760u>(ctx, &aot_mem) && ctx.pc == 0x088ADCE0u) goto L_088ADCE0;
    return;
L_088ADCE0:
    ctx.gpr[31] = (0x088ADCE8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 618u, 0x088AAB9Cu>(ctx, &aot_mem) && ctx.pc == 0x088ADCE8u) goto L_088ADCE8;
    return;
L_088ADCE8:
    ctx.gpr[31] = (0x088ADCF0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 567u, 0x088AA8E4u>(ctx, &aot_mem) && ctx.pc == 0x088ADCF0u) goto L_088ADCF0;
    return;
L_088ADCF0:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x088ADCFCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 144u, 0x08AA4BC8u>(ctx, &aot_mem) && ctx.pc == 0x088ADCFCu) goto L_088ADCFC;
    return;
L_088ADCFC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[31] = (0x088ADD0Cu);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 514u, 0x089C62E8u>(ctx, &aot_mem) && ctx.pc == 0x088ADD0Cu) goto L_088ADD0C;
    return;
L_088ADD0C:
    ctx.gpr[31] = (0x088ADD14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 526u, 0x089C63D0u>(ctx, &aot_mem) && ctx.pc == 0x088ADD14u) goto L_088ADD14;
    return;
L_088ADD14:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x088ADD20u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x088ADD20u) goto L_088ADD20;
    return;
L_088ADD20:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(260), ctx.gpr[21]);
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29364), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x088ADD38u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7788), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 166u, 0x0893CDC4u>(ctx, &aot_mem) && ctx.pc == 0x088ADD38u) goto L_088ADD38;
    return;
L_088ADD38:
    ctx.gpr[31] = (0x088ADD40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 150u, 0x08914BF4u>(ctx, &aot_mem) && ctx.pc == 0x088ADD40u) goto L_088ADD40;
    return;
L_088ADD40:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088ADD54u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 386u, 0x088EE7ACu>(ctx, &aot_mem) && ctx.pc == 0x088ADD54u) goto L_088ADD54;
    return;
L_088ADD54:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ADE08;
      }
      goto L_088ADD7C;
    }
L_088ADD7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088ADDB8;
      }
      goto L_088ADD8C;
    }
L_088ADD8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ADDAC;
      }
      goto L_088ADD98;
    }
L_088ADD98:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_088ADDAC;
    }
    goto L_088ADDA0;
L_088ADDA0:
    ctx.gpr[31] = (0x088ADDA8u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x088ADDA8u) goto L_088ADDA8;
    return;
L_088ADDA8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_088ADDAC;
L_088ADDAC:
    ctx.gpr[31] = (0x088ADDB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x088ADDB4u) goto L_088ADDB4;
    return;
L_088ADDB4:
    ctx.gpr[4] = (0u | 1u);
    goto L_088ADDB8;
L_088ADDB8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088ADDE4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x088ADDE4u) goto L_088ADDE4;
    return;
L_088ADDE4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(848), 0u);
    goto L_088ADE08;
L_088ADE08:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-25519), static_cast<std::uint8_t>(0u));
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
L_088ADE40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088ADE98;
      }
      goto L_088ADE78;
    }
L_088ADE78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088ADE9C;
      }
      goto L_088ADE94;
    }
L_088ADE94:
    ctx.gpr[4] = (0u | 1u);
    goto L_088ADE98;
L_088ADE98:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_088ADE9C;
L_088ADE9C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (2230u << 16u);
      if (branch_taken) {
          goto L_088ADFD4;
      }
      goto L_088ADEA4;
    }
L_088ADEA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
        goto L_088ADEBC;
    }
    goto L_088ADEB0;
L_088ADEB0:
    ctx.gpr[31] = (0x088ADEB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x088ADEB8u) goto L_088ADEB8;
    return;
L_088ADEB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    goto L_088ADEBC;
L_088ADEBC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088ADEDC;
      }
      goto L_088ADECC;
    }
L_088ADECC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088ADEE4;
      }
      goto L_088ADEDC;
    }
L_088ADEDC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_088ADEE4;
L_088ADEE4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088ADFD4;
      }
      goto L_088ADEEC;
    }
L_088ADEEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ADFD4;
      }
      goto L_088ADEF8;
    }
L_088ADEF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ADFD4;
      }
      goto L_088ADF14;
    }
L_088ADF14:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(225)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ADFD4;
      }
      goto L_088ADF20;
    }
L_088ADF20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(88));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(72), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(72))))));
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088ADFCC;
      }
      goto L_088ADF58;
    }
L_088ADF58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(220)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(228)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(228), ctx.gpr[6]);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x088ADF9Cu);
    ctx.gpr[19] = (ctx.gpr[6] + static_cast<std::uint32_t>(4912));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 4u, 0x088A8030u>(ctx, &aot_mem) && ctx.pc == 0x088ADF9Cu) goto L_088ADF9C;
    return;
L_088ADF9C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088ADFB0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 861u, 0x088ABC60u>(ctx, &aot_mem) && ctx.pc == 0x088ADFB0u) goto L_088ADFB0;
    return;
L_088ADFB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_088ADFDC;
      }
      goto L_088ADFC4;
    }
L_088ADFC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_088ADFEC;
      }
      goto L_088ADFCC;
    }
L_088ADFCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AE3E0;
      }
      goto L_088ADFD4;
    }
L_088ADFD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AE3E0;
      }
      goto L_088ADFDC;
    }
L_088ADFDC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x088ADFE8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x088ADFE8u) goto L_088ADFE8;
    return;
L_088ADFE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    goto L_088ADFEC;
L_088ADFEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(100));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AE0A4;
      }
      goto L_088AE038;
    }
L_088AE038:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AE06C;
      }
      goto L_088AE048;
    }
L_088AE048:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(80));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(96))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x088AE06Cu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088AE06Cu) goto L_088AE06C;
    return;
L_088AE06C:
    ctx.gpr[31] = (0x088AE074u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 881u, 0x08AFBCACu>(ctx, &aot_mem) && ctx.pc == 0x088AE074u) goto L_088AE074;
    return;
L_088AE074:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[2] ^ ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AE038;
      }
      goto L_088AE0A4;
    }
L_088AE0A4:
    ctx.gpr[31] = (0x088AE0ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088AF268;
L_088AE0AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088AE0D8;
      }
      goto L_088AE0B8;
    }
L_088AE0B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088AE0DC;
      }
      goto L_088AE0D4;
    }
L_088AE0D4:
    ctx.gpr[4] = (0u | 1u);
    goto L_088AE0D8;
L_088AE0D8:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_088AE0DC;
L_088AE0DC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AE16C;
      }
      goto L_088AE0E4;
    }
L_088AE0E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
        goto L_088AE0FC;
    }
    goto L_088AE0F0;
L_088AE0F0:
    ctx.gpr[31] = (0x088AE0F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x088AE0F8u) goto L_088AE0F8;
    return;
L_088AE0F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    goto L_088AE0FC;
L_088AE0FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088AE11C;
      }
      goto L_088AE10C;
    }
L_088AE10C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088AE124;
      }
      goto L_088AE11C;
    }
L_088AE11C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_088AE124;
L_088AE124:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AE16C;
      }
      goto L_088AE12C;
    }
L_088AE12C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(225)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AE16C;
      }
      goto L_088AE138;
    }
L_088AE138:
    ctx.gpr[31] = (0x088AE140u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(172));
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 222u, 0x08AB90F0u>(ctx, &aot_mem) && ctx.pc == 0x088AE140u) goto L_088AE140;
    return;
L_088AE140:
    ctx.gpr[31] = (0x088AE148u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(204));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 503u, 0x089D1F64u>(ctx, &aot_mem) && ctx.pc == 0x088AE148u) goto L_088AE148;
    return;
L_088AE148:
    ctx.gpr[31] = (0x088AE150u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 812u, 0x08997BF0u>(ctx, &aot_mem) && ctx.pc == 0x088AE150u) goto L_088AE150;
    return;
L_088AE150:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    ctx.gpr[18] = (2232u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(5992));
      if (branch_taken) {
          goto L_088AE174;
      }
      goto L_088AE164;
    }
L_088AE164:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AE17C;
      }
      goto L_088AE16C;
    }
L_088AE16C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AE3E0;
      }
      goto L_088AE174;
    }
L_088AE174:
    ctx.gpr[31] = (0x088AE17Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_088AD91C;
L_088AE17C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088AE1A8;
      }
      goto L_088AE188;
    }
L_088AE188:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088AE1AC;
      }
      goto L_088AE1A4;
    }
L_088AE1A4:
    ctx.gpr[4] = (0u | 1u);
    goto L_088AE1A8;
L_088AE1A8:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_088AE1AC;
L_088AE1AC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AE1FC;
      }
      goto L_088AE1B4;
    }
L_088AE1B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
        goto L_088AE1CC;
    }
    goto L_088AE1C0;
L_088AE1C0:
    ctx.gpr[31] = (0x088AE1C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x088AE1C8u) goto L_088AE1C8;
    return;
L_088AE1C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    goto L_088AE1CC;
L_088AE1CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088AE1EC;
      }
      goto L_088AE1DC;
    }
L_088AE1DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088AE1F4;
      }
      goto L_088AE1EC;
    }
L_088AE1EC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_088AE1F4;
L_088AE1F4:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
        goto L_088AE204;
    }
    goto L_088AE1FC;
L_088AE1FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AE3E0;
      }
      goto L_088AE204;
    }
L_088AE204:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (17658u << 16u);
      if (branch_taken) {
          goto L_088AE2EC;
      }
      goto L_088AE22C;
    }
L_088AE22C:
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[16] + static_cast<std::uint32_t>(116));
    ctx.gpr[4] = (17786u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_088AE240;
L_088AE240:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
        goto L_088AE2C4;
    }
    goto L_088AE254;
L_088AE254:
    ctx.gpr[19] = (0u | 32768u);
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088AE268u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 646u, 0x088A7DB8u>(ctx, &aot_mem) && ctx.pc == 0x088AE268u) goto L_088AE268;
    return;
L_088AE268:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AE2AC;
      }
      goto L_088AE270;
    }
L_088AE270:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088AE27Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 646u, 0x088A7DB8u>(ctx, &aot_mem) && ctx.pc == 0x088AE27Cu) goto L_088AE27C;
    return;
L_088AE27C:
    ctx.gpr[31] = (0x088AE284u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 111u, 0x08A34AF8u>(ctx, &aot_mem) && ctx.pc == 0x088AE284u) goto L_088AE284;
    return;
L_088AE284:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[22];
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_088AE2AC;
L_088AE2AC:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088AE2C0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 11u, 0x089C012Cu>(ctx, &aot_mem) && ctx.pc == 0x088AE2C0u) goto L_088AE2C0;
    return;
L_088AE2C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    goto L_088AE2C4;
L_088AE2C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088AE240;
      }
      goto L_088AE2EC;
    }
L_088AE2EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088AE2FCu);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 646u, 0x088A7DB8u>(ctx, &aot_mem) && ctx.pc == 0x088AE2FCu) goto L_088AE2FC;
    return;
L_088AE2FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AE370;
      }
      goto L_088AE304;
    }
L_088AE304:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x088AE314u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 646u, 0x088A7DB8u>(ctx, &aot_mem) && ctx.pc == 0x088AE314u) goto L_088AE314;
    return;
L_088AE314:
    ctx.gpr[31] = (0x088AE31Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 111u, 0x08A34AF8u>(ctx, &aot_mem) && ctx.pc == 0x088AE31Cu) goto L_088AE31C;
    return;
L_088AE31C:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (17658u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (17786u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[13];
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[31] = (0x088AE370u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(116));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 33u, 0x089C0278u>(ctx, &aot_mem) && ctx.pc == 0x088AE370u) goto L_088AE370;
    return;
L_088AE370:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(33)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AE3D8;
      }
      goto L_088AE380;
    }
L_088AE380:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AE3D8;
      }
      goto L_088AE398;
    }
L_088AE398:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
      if (branch_taken) {
          goto L_088AE3D8;
      }
      goto L_088AE3AC;
    }
L_088AE3AC:
    ctx.gpr[4] = (0u | 30u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6955)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088AE3D8u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 135u, 0x088A879Cu>(ctx, &aot_mem) && ctx.pc == 0x088AE3D8u) goto L_088AE3D8;
    return;
L_088AE3D8:
    ctx.gpr[31] = (0x088AE3E0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 643u, 0x0886FCE8u>(ctx, &aot_mem) && ctx.pc == 0x088AE3E0u) goto L_088AE3E0;
    return;
L_088AE3E0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AE40C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-368));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[31]);
    ctx.gpr[31] = (0x088AE448u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4940));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 443u, 0x088A6FC8u>(ctx, &aot_mem) && ctx.pc == 0x088AE448u) goto L_088AE448;
    return;
L_088AE448:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AE474;
      }
      goto L_088AE454;
    }
L_088AE454:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088AE460u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4964));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 443u, 0x088A6FC8u>(ctx, &aot_mem) && ctx.pc == 0x088AE460u) goto L_088AE460;
    return;
L_088AE460:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x088AE46Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    goto L_088AD91C;
L_088AE46C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088AEA84;
      }
      goto L_088AE474;
    }
L_088AE474:
    ctx.gpr[4] = (0u | 216u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7063)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (18766u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17999));
    ctx.gpr[22] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[22]));
    ctx.gpr[7] = (2224u << 16u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(ctx.gpr[22]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[6] = (0u | 12u);
    ctx.gpr[31] = (0x088AE4B4u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-12980));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 341u, 0x08AF5A1Cu>(ctx, &aot_mem) && ctx.pc == 0x088AE4B4u) goto L_088AE4B4;
    return;
L_088AE4B4:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5008));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21008));
    ctx.gpr[5] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5696));
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5048));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(264));
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[4]);
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[20] = (2230u << 16u);
    goto L_088AE4FC;
L_088AE4FC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20648)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(120));
      if (branch_taken) {
          goto L_088AE518;
      }
      goto L_088AE508;
    }
L_088AE508:
    ctx.gpr[31] = (0x088AE510u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA4BCu>(ctx, &aot_mem) && ctx.pc == 0x088AE510u) goto L_088AE510;
    return;
L_088AE510:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20648)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(120));
    goto L_088AE518;
L_088AE518:
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(224), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(225), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(226), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(227), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(228), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(229), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088AE570;
      }
      goto L_088AE54C;
    }
L_088AE54C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_088AE574;
    }
    goto L_088AE55C;
L_088AE55C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088AE574;
      }
      goto L_088AE56C;
    }
L_088AE56C:
    ctx.gpr[4] = (0u | 1u);
    goto L_088AE570;
L_088AE570:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_088AE574;
L_088AE574:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AE758;
      }
      goto L_088AE584;
    }
L_088AE584:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20652)));
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[17]);
        goto L_088AE5A0;
    }
    goto L_088AE590;
L_088AE590:
    ctx.gpr[31] = (0x088AE598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x088AE598u) goto L_088AE598;
    return;
L_088AE598:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20652)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[17]);
    goto L_088AE5A0;
L_088AE5A0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(232));
    ctx.gpr[31] = (0x088AE5ACu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 222u, 0x08A08E2Cu>(ctx, &aot_mem) && ctx.pc == 0x088AE5ACu) goto L_088AE5AC;
    return;
L_088AE5AC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088AE5BCu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.pc = 0x08B0B724u;
    return;
L_088AE5BC:
    ctx.gpr[31] = (0x088AE5C4u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x088AE5C4u) goto L_088AE5C4;
    return;
L_088AE5C4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088AE5D4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x088AE5D4u) goto L_088AE5D4;
    return;
L_088AE5D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088AE5E8u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 443u, 0x088A6FC8u>(ctx, &aot_mem) && ctx.pc == 0x088AE5E8u) goto L_088AE5E8;
    return;
L_088AE5E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
      if (branch_taken) {
          goto L_088AE604;
      }
      goto L_088AE5F8;
    }
L_088AE5F8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088AE604u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x088AE604u) goto L_088AE604;
    return;
L_088AE604:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088AE624;
      }
      goto L_088AE618;
    }
L_088AE618:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[31] = (0x088AE624u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x088AE624u) goto L_088AE624;
    return;
L_088AE624:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20648)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088AE63C;
      }
      goto L_088AE630;
    }
L_088AE630:
    ctx.gpr[31] = (0x088AE638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA4BCu>(ctx, &aot_mem) && ctx.pc == 0x088AE638u) goto L_088AE638;
    return;
L_088AE638:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20648)));
    goto L_088AE63C;
L_088AE63C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(120));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20652)));
      if (branch_taken) {
          goto L_088AE678;
      }
      goto L_088AE654;
    }
L_088AE654:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[4] = (ctx.gpr[7] & 255u);
        goto L_088AE67C;
    }
    goto L_088AE664;
L_088AE664:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[7] & 255u);
      if (branch_taken) {
          goto L_088AE67C;
      }
      goto L_088AE674;
    }
L_088AE674:
    ctx.gpr[7] = (0u | 1u);
    goto L_088AE678;
L_088AE678:
    ctx.gpr[4] = (ctx.gpr[7] & 255u);
    goto L_088AE67C;
L_088AE67C:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AE694;
      }
      goto L_088AE68C;
    }
L_088AE68C:
    ctx.gpr[17] = (ctx.gpr[22] | 0u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    goto L_088AE694;
L_088AE694:
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
        goto L_088AE6AC;
    }
    goto L_088AE69C;
L_088AE69C:
    ctx.gpr[31] = (0x088AE6A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x088AE6A4u) goto L_088AE6A4;
    return;
L_088AE6A4:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    goto L_088AE6AC;
L_088AE6AC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_088AE710;
      }
      goto L_088AE6B4;
    }
L_088AE6B4:
    ctx.gpr[4] = (0u | 255u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(248), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(249), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(250), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(251), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(252), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(253), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(248), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(250), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[8] = (0u | 3u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(252), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(254), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(248));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AE708u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 373u, 0x0886E368u>(ctx, &aot_mem) && ctx.pc == 0x088AE708u) goto L_088AE708;
    return;
L_088AE708:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AE750;
      }
      goto L_088AE710;
    }
L_088AE710:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(34));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[1]));
    rt.memory().aot_store_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(43), 0u);
    goto L_088AE750;
L_088AE750:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
      if (branch_taken) {
          goto L_088AE764;
      }
      goto L_088AE758;
    }
L_088AE758:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[31] = (0x088AE764u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 443u, 0x088A6FC8u>(ctx, &aot_mem) && ctx.pc == 0x088AE764u) goto L_088AE764;
    return;
L_088AE764:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_088AE4FC;
      }
      goto L_088AE774;
    }
L_088AE774:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(ctx.gpr[22]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[22]));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20652)));
    if (ctx.gpr[22] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
        goto L_088AE798;
    }
    goto L_088AE788;
L_088AE788:
    ctx.gpr[31] = (0x088AE790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x088AE790u) goto L_088AE790;
    return;
L_088AE790:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    goto L_088AE798;
L_088AE798:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_088AE910;
      }
      goto L_088AE7A0;
    }
L_088AE7A0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (0x088AE7ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 585u, 0x0886F898u>(ctx, &aot_mem) && ctx.pc == 0x088AE7ACu) goto L_088AE7AC;
    return;
L_088AE7AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[16]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[9] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_088AE7FC;
    }
    goto L_088AE7FC;
L_088AE7FC:
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), 0u);
      if (branch_taken) {
          goto L_088AE828;
      }
      goto L_088AE808;
    }
L_088AE808:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(288), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(289), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(148), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_088AE848;
      }
      goto L_088AE828;
    }
L_088AE828:
    ctx.gpr[6] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(284));
    ctx.gpr[31] = (0x088AE83Cu);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(144));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 674u, 0x08AFEF38u>(ctx, &aot_mem) && ctx.pc == 0x088AE83Cu) goto L_088AE83C;
    return;
L_088AE83C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_088AE848;
L_088AE848:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(100));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] ^ ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[4]);
    ctx.gpr[4] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AE90C;
      }
      goto L_088AE8C4;
    }
L_088AE8C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AE8E0;
      }
      goto L_088AE8D0;
    }
L_088AE8D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    goto L_088AE8E0;
L_088AE8E0:
    ctx.gpr[31] = (0x088AE8E8u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 881u, 0x08AFBCACu>(ctx, &aot_mem) && ctx.pc == 0x088AE8E8u) goto L_088AE8E8;
    return;
L_088AE8E8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] ^ ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[4]);
    ctx.gpr[4] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AE8C4;
      }
      goto L_088AE90C;
    }
L_088AE90C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    goto L_088AE910;
L_088AE910:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[4] >> 30u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[16] - ctx.gpr[4]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[9] = (ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
        goto L_088AE95C;
    }
    goto L_088AE95C;
L_088AE95C:
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), 0u);
      if (branch_taken) {
          goto L_088AE984;
      }
      goto L_088AE968;
    }
L_088AE968:
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(296), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(297), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(148), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_088AE99C;
      }
      goto L_088AE984;
    }
L_088AE984:
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(144));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(292));
    ctx.gpr[31] = (0x088AE998u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 674u, 0x08AFEF38u>(ctx, &aot_mem) && ctx.pc == 0x088AE998u) goto L_088AE998;
    return;
L_088AE998:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    goto L_088AE99C;
L_088AE99C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    goto L_088AE9A4;
L_088AE9A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[7] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_088AE9D4;
    }
    goto L_088AE9D4;
L_088AE9D4:
    ctx.gpr[4] = (ctx.gpr[16] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AEA34;
      }
      goto L_088AE9E0;
    }
L_088AE9E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AEA28;
      }
      goto L_088AE9F4;
    }
L_088AE9F4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x088AEA00u);
    ctx.gpr[4] = (0u | 112u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088AEA00u) goto L_088AEA00;
    return;
L_088AEA00:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_088AEA18;
      }
      goto L_088AEA0C;
    }
L_088AEA0C:
    ctx.gpr[31] = (0x088AEA14u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 696u, 0x088AB064u>(ctx, &aot_mem) && ctx.pc == 0x088AEA14u) goto L_088AEA14;
    return;
L_088AEA14:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_088AEA18;
L_088AEA18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    goto L_088AEA28;
L_088AEA28:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088AE9A4;
      }
      goto L_088AEA34;
    }
L_088AEA34:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x088AEA44u);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(116));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 57u, 0x089C0478u>(ctx, &aot_mem) && ctx.pc == 0x088AEA44u) goto L_088AEA44;
    return;
L_088AEA44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(5088));
    ctx.gpr[31] = (0x088AEA5Cu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 443u, 0x088A6FC8u>(ctx, &aot_mem) && ctx.pc == 0x088AEA5Cu) goto L_088AEA5C;
    return;
L_088AEA5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-6955)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x088AEA80u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 248u, 0x0886DA2Cu>(ctx, &aot_mem) && ctx.pc == 0x088AEA80u) goto L_088AEA80;
    return;
L_088AEA80:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_088AEA84;
L_088AEA84:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AEAB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    ctx.gpr[31] = (0x088AEAF4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 338u, 0x089655E4u>(ctx, &aot_mem) && ctx.pc == 0x088AEAF4u) goto L_088AEAF4;
    return;
L_088AEAF4:
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20156)));
    ctx.gpr[5] = (16800u << 16u);
    ctx.gpr[19] = (0u | 1u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[18] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (2228u << 16u);
      if (branch_taken) {
          goto L_088AEB20;
      }
      goto L_088AEB14;
    }
L_088AEB14:
    ctx.gpr[31] = (0x088AEB1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 444u, 0x08AFDDC0u>(ctx, &aot_mem) && ctx.pc == 0x088AEB1Cu) goto L_088AEB1C;
    return;
L_088AEB1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20156)));
    goto L_088AEB20;
L_088AEB20:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x088AEB2Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 41u, 0x089502F0u>(ctx, &aot_mem) && ctx.pc == 0x088AEB2Cu) goto L_088AEB2C;
    return;
L_088AEB2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20156)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_088AEB48;
      }
      goto L_088AEB38;
    }
L_088AEB38:
    ctx.gpr[31] = (0x088AEB40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 444u, 0x08AFDDC0u>(ctx, &aot_mem) && ctx.pc == 0x088AEB40u) goto L_088AEB40;
    return;
L_088AEB40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20156)));
    ctx.gpr[5] = (0u | 2u);
    goto L_088AEB48;
L_088AEB48:
    ctx.gpr[31] = (0x088AEB50u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 41u, 0x089502F0u>(ctx, &aot_mem) && ctx.pc == 0x088AEB50u) goto L_088AEB50;
    return;
L_088AEB50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20156)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_088AEB6C;
      }
      goto L_088AEB5C;
    }
L_088AEB5C:
    ctx.gpr[31] = (0x088AEB64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 444u, 0x08AFDDC0u>(ctx, &aot_mem) && ctx.pc == 0x088AEB64u) goto L_088AEB64;
    return;
L_088AEB64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20156)));
    ctx.gpr[5] = (0u | 3u);
    goto L_088AEB6C;
L_088AEB6C:
    ctx.gpr[31] = (0x088AEB74u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 41u, 0x089502F0u>(ctx, &aot_mem) && ctx.pc == 0x088AEB74u) goto L_088AEB74;
    return;
L_088AEB74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20156)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_088AEB90;
      }
      goto L_088AEB80;
    }
L_088AEB80:
    ctx.gpr[31] = (0x088AEB88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 444u, 0x08AFDDC0u>(ctx, &aot_mem) && ctx.pc == 0x088AEB88u) goto L_088AEB88;
    return;
L_088AEB88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20156)));
    ctx.gpr[5] = (0u | 4u);
    goto L_088AEB90;
L_088AEB90:
    ctx.gpr[31] = (0x088AEB98u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 41u, 0x089502F0u>(ctx, &aot_mem) && ctx.pc == 0x088AEB98u) goto L_088AEB98;
    return;
L_088AEB98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20156)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u | 5u);
      if (branch_taken) {
          goto L_088AEBB4;
      }
      goto L_088AEBA4;
    }
L_088AEBA4:
    ctx.gpr[31] = (0x088AEBACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 444u, 0x08AFDDC0u>(ctx, &aot_mem) && ctx.pc == 0x088AEBACu) goto L_088AEBAC;
    return;
L_088AEBAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20156)));
    ctx.gpr[5] = (0u | 5u);
    goto L_088AEBB4;
L_088AEBB4:
    ctx.gpr[31] = (0x088AEBBCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 41u, 0x089502F0u>(ctx, &aot_mem) && ctx.pc == 0x088AEBBCu) goto L_088AEBBC;
    return;
L_088AEBBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20156)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u | 15u);
      if (branch_taken) {
          goto L_088AEBD8;
      }
      goto L_088AEBC8;
    }
L_088AEBC8:
    ctx.gpr[31] = (0x088AEBD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 444u, 0x08AFDDC0u>(ctx, &aot_mem) && ctx.pc == 0x088AEBD0u) goto L_088AEBD0;
    return;
L_088AEBD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20156)));
    ctx.gpr[5] = (0u | 15u);
    goto L_088AEBD8;
L_088AEBD8:
    ctx.gpr[31] = (0x088AEBE0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 41u, 0x089502F0u>(ctx, &aot_mem) && ctx.pc == 0x088AEBE0u) goto L_088AEBE0;
    return;
L_088AEBE0:
    ctx.gpr[31] = (0x088AEBE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 302u, 0x089E1AFCu>(ctx, &aot_mem) && ctx.pc == 0x088AEBE8u) goto L_088AEBE8;
    return;
L_088AEBE8:
    ctx.gpr[6] = (17448u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 32768u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[6] = (50280u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (ctx.gpr[6] | 16384u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    ctx.gpr[6] = (17122u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(502)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x088AEC28u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 238u, 0x089E1650u>(ctx, &aot_mem) && ctx.pc == 0x088AEC28u) goto L_088AEC28;
    return;
L_088AEC28:
    ctx.gpr[6] = (17463u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-30860)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (ctx.gpr[6] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
    ctx.gpr[6] = (16920u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(506)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x088AEC58u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 238u, 0x089E1650u>(ctx, &aot_mem) && ctx.pc == 0x088AEC58u) goto L_088AEC58;
    return;
L_088AEC58:
    ctx.gpr[6] = (17449u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (ctx.gpr[6] | 16384u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-30860)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16948u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(512)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(510)));
    ctx.gpr[6] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x088AEC90u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 238u, 0x089E1650u>(ctx, &aot_mem) && ctx.pc == 0x088AEC90u) goto L_088AEC90;
    return;
L_088AEC90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-30860)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (16936u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[7] = (16968u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(516)));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(514)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x088AECC0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 238u, 0x089E1650u>(ctx, &aot_mem) && ctx.pc == 0x088AECC0u) goto L_088AECC0;
    return;
L_088AECC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-30860)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (16940u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(520)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(518)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x088AECE8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 238u, 0x089E1650u>(ctx, &aot_mem) && ctx.pc == 0x088AECE8u) goto L_088AECE8;
    return;
L_088AECE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-30860)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (16944u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(524)));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(522)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x088AED14u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 238u, 0x089E1650u>(ctx, &aot_mem) && ctx.pc == 0x088AED14u) goto L_088AED14;
    return;
L_088AED14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-30860)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(528)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(526)));
    ctx.gpr[31] = (0x088AED34u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 238u, 0x089E1650u>(ctx, &aot_mem) && ctx.pc == 0x088AED34u) goto L_088AED34;
    return;
L_088AED34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-30860)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (17419u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (ctx.gpr[6] | 32768u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(532)));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(530)));
    ctx.gpr[31] = (0x088AED60u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 238u, 0x089E1650u>(ctx, &aot_mem) && ctx.pc == 0x088AED60u) goto L_088AED60;
    return;
L_088AED60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-30860)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (17401u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(536)));
    ctx.gpr[6] = (16880u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(534)));
    ctx.gpr[31] = (0x088AED88u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 238u, 0x089E1650u>(ctx, &aot_mem) && ctx.pc == 0x088AED88u) goto L_088AED88;
    return;
L_088AED88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-30860)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (17418u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 49152u);
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(538)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(540)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x088AEDB8u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 238u, 0x089E1650u>(ctx, &aot_mem) && ctx.pc == 0x088AEDB8u) goto L_088AEDB8;
    return;
L_088AEDB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-30860)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(544)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(542)));
    ctx.gpr[31] = (0x088AEDD8u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 238u, 0x089E1650u>(ctx, &aot_mem) && ctx.pc == 0x088AEDD8u) goto L_088AEDD8;
    return;
L_088AEDD8:
    ctx.gpr[5] = (17419u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-30860)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (ctx.gpr[5] | 16384u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(548)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x088AEE04u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(546)));
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 238u, 0x089E1650u>(ctx, &aot_mem) && ctx.pc == 0x088AEE04u) goto L_088AEE04;
    return;
L_088AEE04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-30860)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(552)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(550)));
    ctx.gpr[31] = (0x088AEE24u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 238u, 0x089E1650u>(ctx, &aot_mem) && ctx.pc == 0x088AEE24u) goto L_088AEE24;
    return;
L_088AEE24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-30860)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(556)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(554)));
    ctx.gpr[31] = (0x088AEE44u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 238u, 0x089E1650u>(ctx, &aot_mem) && ctx.pc == 0x088AEE44u) goto L_088AEE44;
    return;
L_088AEE44:
    ctx.gpr[31] = (0x088AEE4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 87u, 0x088A84ACu>(ctx, &aot_mem) && ctx.pc == 0x088AEE4Cu) goto L_088AEE4C;
    return;
L_088AEE4C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AEEFC;
      }
      goto L_088AEE54;
    }
L_088AEE54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(500)));
    ctx.gpr[4] = (17527u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 15778u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (50155u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 58262u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16550u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x088AEE88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 669u, 0x088AAE54u>(ctx, &aot_mem) && ctx.pc == 0x088AEE88u) goto L_088AEE88;
    return;
L_088AEE88:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088AEE98u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 686u, 0x088AAFA8u>(ctx, &aot_mem) && ctx.pc == 0x088AEE98u) goto L_088AEE98;
    return;
L_088AEE98:
    ctx.gpr[6] = (17076u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x088AEEACu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 689u, 0x088AAFE8u>(ctx, &aot_mem) && ctx.pc == 0x088AEEACu) goto L_088AEEAC;
    return;
L_088AEEAC:
    ctx.gpr[6] = (50183u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 29491u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (49870u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 13107u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[6] = (49999u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[6] = (49957u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (49504u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16704u << 16u);
    ctx.gpr[31] = (0x088AEEF4u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 606u, 0x08976BFCu>(ctx, &aot_mem) && ctx.pc == 0x088AEEF4u) goto L_088AEEF4;
    return;
L_088AEEF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AF230;
      }
      goto L_088AEEFC;
    }
L_088AEEFC:
    ctx.gpr[31] = (0x088AEF04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 87u, 0x088A84ACu>(ctx, &aot_mem) && ctx.pc == 0x088AEF04u) goto L_088AEF04;
    return;
L_088AEF04:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[19];
    ctx.gpr[6] = (50375u << 16u);
      if (branch_taken) {
          goto L_088AF0DC;
      }
      goto L_088AEF0C;
    }
L_088AEF0C:
    ctx.gpr[6] = (ctx.gpr[6] | 17252u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[6] = (16757u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (ctx.gpr[6] | 39322u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(500)));
    ctx.gpr[6] = (17202u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (ctx.gpr[6] | 2687u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088AEF44u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 669u, 0x088AAE54u>(ctx, &aot_mem) && ctx.pc == 0x088AEF44u) goto L_088AEF44;
    return;
L_088AEF44:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088AEF54u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 686u, 0x088AAFA8u>(ctx, &aot_mem) && ctx.pc == 0x088AEF54u) goto L_088AEF54;
    return;
L_088AEF54:
    ctx.gpr[6] = (17204u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088AEF6Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 689u, 0x088AAFE8u>(ctx, &aot_mem) && ctx.pc == 0x088AEF6Cu) goto L_088AEF6C;
    return;
L_088AEF6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-30860)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (17211u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (ctx.gpr[6] | 2687u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x088AEF90u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(500)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 669u, 0x088AAE54u>(ctx, &aot_mem) && ctx.pc == 0x088AEF90u) goto L_088AEF90;
    return;
L_088AEF90:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088AEFA0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 686u, 0x088AAFA8u>(ctx, &aot_mem) && ctx.pc == 0x088AEFA0u) goto L_088AEFA0;
    return;
L_088AEFA0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x088AEFB0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 689u, 0x088AAFE8u>(ctx, &aot_mem) && ctx.pc == 0x088AEFB0u) goto L_088AEFB0;
    return;
L_088AEFB0:
    ctx.gpr[6] = (17199u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (50379u << 16u);
    ctx.gpr[6] = (17210u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | 49152u);
    ctx.gpr[6] = (50372u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[18] = (2228u << 16u);
    ctx.gpr[6] = (49608u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-26612)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x088AEFF0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 606u, 0x08976BFCu>(ctx, &aot_mem) && ctx.pc == 0x088AEFF0u) goto L_088AEFF0;
    return;
L_088AEFF0:
    ctx.gpr[6] = (49882u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 13894u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[6] = (16681u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (ctx.gpr[6] | 39322u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(500)));
    ctx.gpr[6] = (17248u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (ctx.gpr[6] | 2687u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088AF02Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 669u, 0x088AAE54u>(ctx, &aot_mem) && ctx.pc == 0x088AF02Cu) goto L_088AF02C;
    return;
L_088AF02C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088AF03Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 686u, 0x088AAFA8u>(ctx, &aot_mem) && ctx.pc == 0x088AF03Cu) goto L_088AF03C;
    return;
L_088AF03C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x088AF04Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 689u, 0x088AAFE8u>(ctx, &aot_mem) && ctx.pc == 0x088AF04Cu) goto L_088AF04C;
    return;
L_088AF04C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-30860)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (17257u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (ctx.gpr[6] | 2687u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x088AF070u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(500)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 669u, 0x088AAE54u>(ctx, &aot_mem) && ctx.pc == 0x088AF070u) goto L_088AF070;
    return;
L_088AF070:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088AF080u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 686u, 0x088AAFA8u>(ctx, &aot_mem) && ctx.pc == 0x088AF080u) goto L_088AF080;
    return;
L_088AF080:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x088AF090u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 689u, 0x088AAFE8u>(ctx, &aot_mem) && ctx.pc == 0x088AF090u) goto L_088AF090;
    return;
L_088AF090:
    ctx.gpr[6] = (17415u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 29491u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (49870u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 13107u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (17231u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[6] = (49957u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (49504u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16704u << 16u);
    ctx.gpr[31] = (0x088AF0D4u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 606u, 0x08976BFCu>(ctx, &aot_mem) && ctx.pc == 0x088AF0D4u) goto L_088AF0D4;
    return;
L_088AF0D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AF230;
      }
      goto L_088AF0DC;
    }
L_088AF0DC:
    ctx.gpr[31] = (0x088AF0E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 87u, 0x088A84ACu>(ctx, &aot_mem) && ctx.pc == 0x088AF0E4u) goto L_088AF0E4;
    return;
L_088AF0E4:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088AF230;
      }
      goto L_088AF0EC;
    }
L_088AF0EC:
    ctx.gpr[6] = (16644u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[6] = (50216u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(500)));
    ctx.gpr[6] = (50238u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088AF120u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 669u, 0x088AAE54u>(ctx, &aot_mem) && ctx.pc == 0x088AF120u) goto L_088AF120;
    return;
L_088AF120:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088AF130u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 686u, 0x088AAFA8u>(ctx, &aot_mem) && ctx.pc == 0x088AF130u) goto L_088AF130;
    return;
L_088AF130:
    ctx.gpr[6] = (17076u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088AF148u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 689u, 0x088AAFE8u>(ctx, &aot_mem) && ctx.pc == 0x088AF148u) goto L_088AF148;
    return;
L_088AF148:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-30860)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (50240u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (ctx.gpr[6] | 14746u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x088AF16Cu);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(500)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 669u, 0x088AAE54u>(ctx, &aot_mem) && ctx.pc == 0x088AF16Cu) goto L_088AF16C;
    return;
L_088AF16C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088AF17Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 686u, 0x088AAFA8u>(ctx, &aot_mem) && ctx.pc == 0x088AF17Cu) goto L_088AF17C;
    return;
L_088AF17C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x088AF18Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 689u, 0x088AAFE8u>(ctx, &aot_mem) && ctx.pc == 0x088AF18Cu) goto L_088AF18C;
    return;
L_088AF18C:
    ctx.gpr[5] = (50241u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 62259u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (49552u << 16u);
    ctx.gpr[5] = (50203u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (50254u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 49152u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (16840u << 16u);
    ctx.gpr[5] = (50235u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | 34406u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[31] = (0x088AF1DCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 606u, 0x08976BFCu>(ctx, &aot_mem) && ctx.pc == 0x088AF1DCu) goto L_088AF1DC;
    return;
L_088AF1DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[6] = (49560u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(498)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (50086u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17080u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 64225u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x088AF20Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 669u, 0x088AAE54u>(ctx, &aot_mem) && ctx.pc == 0x088AF20Cu) goto L_088AF20C;
    return;
L_088AF20C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088AF21Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 686u, 0x088AAFA8u>(ctx, &aot_mem) && ctx.pc == 0x088AF21Cu) goto L_088AF21C;
    return;
L_088AF21C:
    ctx.gpr[6] = (17249u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x088AF230u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 689u, 0x088AAFE8u>(ctx, &aot_mem) && ctx.pc == 0x088AF230u) goto L_088AF230;
    return;
L_088AF230:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AF268:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6972), 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(225)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088AF2A0;
      }
      goto L_088AF298;
    }
L_088AF298:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AF994;
      }
      goto L_088AF2A0;
    }
L_088AF2A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(116));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(96));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x088AF2BCu);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[6]));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 57u, 0x089C0478u>(ctx, &aot_mem) && ctx.pc == 0x088AF2BCu) goto L_088AF2BC;
    return;
L_088AF2BC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u | 28u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
        goto L_088AF518;
    }
    goto L_088AF2E8;
L_088AF2E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    goto L_088AF2EC;
L_088AF2EC:
    ctx.gpr[5] = (ctx.gpr[18] << 5u);
    ctx.gpr[6] = (ctx.gpr[18] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(136)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(10000) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
        goto L_088AF4F0;
    }
    goto L_088AF31C;
L_088AF31C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x088AF328u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 267u, 0x0886DBA8u>(ctx, &aot_mem) && ctx.pc == 0x088AF328u) goto L_088AF328;
    return;
L_088AF328:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_088AF380;
      }
      goto L_088AF330;
    }
L_088AF330:
    ctx.gpr[31] = (0x088AF338u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 415u, 0x08A5A1C0u>(ctx, &aot_mem) && ctx.pc == 0x088AF338u) goto L_088AF338;
    return;
L_088AF338:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AF380;
      }
      goto L_088AF340;
    }
L_088AF340:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(66), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x088AF354u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 406u, 0x08A5A114u>(ctx, &aot_mem) && ctx.pc == 0x088AF354u) goto L_088AF354;
    return;
L_088AF354:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(112))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(66))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(68), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(68))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 421 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
        goto L_088AF4F0;
    }
    goto L_088AF380;
L_088AF380:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x088AF38Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 267u, 0x0886DBA8u>(ctx, &aot_mem) && ctx.pc == 0x088AF38Cu) goto L_088AF38C;
    return;
L_088AF38C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AF3A0;
      }
      goto L_088AF394;
    }
L_088AF394:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088AF3A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5112));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 443u, 0x088A6FC8u>(ctx, &aot_mem) && ctx.pc == 0x088AF3A0u) goto L_088AF3A0;
    return;
L_088AF3A0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088AF3ACu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 415u, 0x08A5A1C0u>(ctx, &aot_mem) && ctx.pc == 0x088AF3ACu) goto L_088AF3AC;
    return;
L_088AF3AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AF3C0;
      }
      goto L_088AF3B4;
    }
L_088AF3B4:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088AF3C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5152));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 443u, 0x088A6FC8u>(ctx, &aot_mem) && ctx.pc == 0x088AF3C0u) goto L_088AF3C0;
    return;
L_088AF3C0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(70), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x088AF3D4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 406u, 0x08A5A114u>(ctx, &aot_mem) && ctx.pc == 0x088AF3D4u) goto L_088AF3D4;
    return;
L_088AF3D4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(116))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(70))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(72), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(72))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 421 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AF40C;
      }
      goto L_088AF400;
    }
L_088AF400:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088AF40Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5188));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 443u, 0x088A6FC8u>(ctx, &aot_mem) && ctx.pc == 0x088AF40Cu) goto L_088AF40C;
    return;
L_088AF40C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AF47C;
      }
      goto L_088AF414;
    }
L_088AF414:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088AF428u);
    ctx.gpr[17] = (ctx.gpr[6] + static_cast<std::uint32_t>(5240));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 406u, 0x08A5A114u>(ctx, &aot_mem) && ctx.pc == 0x088AF428u) goto L_088AF428;
    return;
L_088AF428:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[2]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(124))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(120), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x088AF440u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(120))))));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 443u, 0x088A6FC8u>(ctx, &aot_mem) && ctx.pc == 0x088AF440u) goto L_088AF440;
    return;
L_088AF440:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(225), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20652)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AF460;
      }
      goto L_088AF454;
    }
L_088AF454:
    ctx.gpr[31] = (0x088AF45Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x088AF45Cu) goto L_088AF45C;
    return;
L_088AF45C:
    ctx.gpr[4] = (2230u << 16u);
    goto L_088AF460;
L_088AF460:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AF994;
      }
      goto L_088AF47C;
    }
L_088AF47C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20652)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AF498;
      }
      goto L_088AF48C;
    }
L_088AF48C:
    ctx.gpr[31] = (0x088AF494u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x088AF494u) goto L_088AF494;
    return;
L_088AF494:
    ctx.gpr[4] = (2230u << 16u);
    goto L_088AF498;
L_088AF498:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
        goto L_088AF4F0;
    }
    goto L_088AF4A8;
L_088AF4A8:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AF4B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5312));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 443u, 0x088A6FC8u>(ctx, &aot_mem) && ctx.pc == 0x088AF4B8u) goto L_088AF4B8;
    return;
L_088AF4B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088AF4C4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 336u, 0x088A9714u>(ctx, &aot_mem) && ctx.pc == 0x088AF4C4u) goto L_088AF4C4;
    return;
L_088AF4C4:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6967)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(34));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088AF4ECu);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 135u, 0x088A879Cu>(ctx, &aot_mem) && ctx.pc == 0x088AF4ECu) goto L_088AF4EC;
    return;
L_088AF4EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    goto L_088AF4F0;
L_088AF4F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u | 28u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
        goto L_088AF2EC;
    }
    goto L_088AF514;
L_088AF514:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    goto L_088AF518;
L_088AF518:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AF994;
      }
      goto L_088AF540;
    }
L_088AF540:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(0u));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_088AF968;
      }
      goto L_088AF55C;
    }
L_088AF55C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x088AF568u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 267u, 0x0886DBA8u>(ctx, &aot_mem) && ctx.pc == 0x088AF568u) goto L_088AF568;
    return;
L_088AF568:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
        goto L_088AF96C;
    }
    goto L_088AF570;
L_088AF570:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    if (ctx.gpr[20] != ctx.gpr[4]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(220)));
        goto L_088AF598;
    }
    goto L_088AF584;
L_088AF584:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088AF72C;
      }
      goto L_088AF598;
    }
L_088AF598:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(96));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(42))))));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(98));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (ctx.gpr[20] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 45788u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u | 4u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(40))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(38))))));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(42))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(84))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(38))))));
        goto L_088AF658;
    }
    goto L_088AF63C;
L_088AF63C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(38))))));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(86))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(38))))));
    goto L_088AF658;
L_088AF658:
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(90), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(90))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(42))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(94), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(94))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(40))))));
        goto L_088AF6A0;
    }
    goto L_088AF690;
L_088AF690:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(42))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(40))))));
    goto L_088AF6A0;
L_088AF6A0:
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(96), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(96))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(42))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(100), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(100))))));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(42))))));
        goto L_088AF6F0;
    }
    goto L_088AF6E0;
L_088AF6E0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(42))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(42))))));
    goto L_088AF6F0;
L_088AF6F0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(40))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(102), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(102))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AF720;
      }
      goto L_088AF718;
    }
L_088AF718:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(40))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_088AF720;
L_088AF720:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(42))))));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(96));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_088AF72C;
L_088AF72C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(100));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088AF968;
      }
      goto L_088AF768;
    }
L_088AF768:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x088AF774u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 881u, 0x08AFBCACu>(ctx, &aot_mem) && ctx.pc == 0x088AF774u) goto L_088AF774;
    return;
L_088AF774:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088AF948;
      }
      goto L_088AF77C;
    }
L_088AF77C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(42))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(56))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(106), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(106))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2232u << 16u);
      if (branch_taken) {
          goto L_088AF948;
      }
      goto L_088AF7BC;
    }
L_088AF7BC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AF92C;
      }
      goto L_088AF7E0;
    }
L_088AF7E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AF92C;
      }
      goto L_088AF7EC;
    }
L_088AF7EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (0u | 28u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
        goto L_088AF878;
    }
    goto L_088AF818;
L_088AF818:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    goto L_088AF81C;
L_088AF81C:
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
        goto L_088AF84C;
    }
    goto L_088AF840;
L_088AF840:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_088AF878;
      }
      goto L_088AF848;
    }
L_088AF848:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    goto L_088AF84C;
L_088AF84C:
    ctx.gpr[6] = (0u | 28u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
        goto L_088AF81C;
    }
    goto L_088AF874;
L_088AF874:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    goto L_088AF878;
L_088AF878:
    ctx.gpr[6] = (0u | 28u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088AF92C;
      }
      goto L_088AF898;
    }
L_088AF898:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[7] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (ctx.gpr[7] << 2u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 45788u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(58))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(60))))));
    ctx.gpr[31] = (0x088AF908u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 48u, 0x08AC4628u>(ctx, &aot_mem) && ctx.pc == 0x088AF908u) goto L_088AF908;
    return;
L_088AF908:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(42))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x088AF924u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088AF924u) goto L_088AF924;
    return;
L_088AF924:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AF948;
      }
      goto L_088AF92C;
    }
L_088AF92C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(42))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x088AF948u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088AF948u) goto L_088AF948;
    return;
L_088AF948:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AF768;
      }
      goto L_088AF968;
    }
L_088AF968:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    goto L_088AF96C;
L_088AF96C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AF540;
      }
      goto L_088AF994;
    }
L_088AF994:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AF9B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6968), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6968)));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[6] = (2232u << 16u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-6967), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(6264));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5392));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-6967)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[7] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-6966), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5404));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-6966)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[7] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-6965), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5416));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-6965)));
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[7] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-6964), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5436));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-6964)));
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[7] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-6963), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5452));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-6963)));
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[7] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-6962), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5468));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-6962)));
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[7] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-6961), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5488));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-6961)));
    ctx.gpr[5] = (0u | 11u);
    ctx.gpr[7] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-6960), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5520));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-6960)));
    ctx.gpr[5] = (0u | 12u);
    ctx.gpr[7] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-6959), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5540));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-6959)));
    ctx.gpr[5] = (0u | 13u);
    ctx.gpr[7] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-6958), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5552));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-6958)));
    ctx.gpr[5] = (0u | 14u);
    ctx.gpr[7] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-6957), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5568));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-6957)));
    ctx.gpr[5] = (0u | 15u);
    ctx.gpr[7] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-6956), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5584));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-6956)));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[7] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-6955), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5596));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-6955)));
    ctx.gpr[5] = (0u | 17u);
    ctx.gpr[7] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-6954), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[8] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16364)));
    ctx.gpr[8] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[15] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[8] = (16014u << 16u);
    ctx.gpr[9] = (2227u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | 14571u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(16368), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[12] = ctx.fpr[15] / ctx.fpr[12];
    ctx.gpr[10] = (2227u << 16u);
    ctx.gpr[9] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(16376), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(16376)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[9] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[8] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(16380), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5612));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(16384), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-6954)));
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[7] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-6953), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5624));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16360)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-6953)));
    ctx.gpr[7] = (0u | 19u);
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(-6952), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16372), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(5636));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-6952)));
    ctx.gpr[5] = (0u | 20u);
    ctx.gpr[7] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-6951), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5644));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-6951)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(5656));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16388)));
    ctx.gpr[4] = (15744u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16392), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16400)));
    ctx.gpr[4] = (16281u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16268u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(16420));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16408), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16416), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16396)));
    ctx.gpr[6] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16404), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16412), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 210u);
    ctx.gpr[5] = (0u | 77u);
    ctx.gpr[6] = (0u | 155u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x088AFD54u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x088AFD54u) goto L_088AFD54;
    return;
L_088AFD54:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (0u | 174u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088AFD6Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x088AFD6Cu) goto L_088AFD6C;
    return;
L_088AFD6C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088AFD84u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x088AFD84u) goto L_088AFD84;
    return;
L_088AFD84:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x088AFD9Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x088AFD9Cu) goto L_088AFD9C;
    return;
L_088AFD9C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088AFDB4u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x088AFDB4u) goto L_088AFDB4;
    return;
L_088AFDB4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x088AFDCCu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x088AFDCCu) goto L_088AFDCC;
    return;
L_088AFDCC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (0u | 119u);
    ctx.gpr[6] = (0u | 119u);
    ctx.gpr[7] = (0u | 119u);
    ctx.gpr[31] = (0x088AFDE4u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x088AFDE4u) goto L_088AFDE4;
    return;
L_088AFDE4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x088AFDFCu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x088AFDFCu) goto L_088AFDFC;
    return;
L_088AFDFC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 15u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x088AFE14u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x088AFE14u) goto L_088AFE14;
    return;
L_088AFE14:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 240u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088AFE2Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x088AFE2Cu) goto L_088AFE2C;
    return;
L_088AFE2C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 240u);
    ctx.gpr[31] = (0x088AFE44u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x088AFE44u) goto L_088AFE44;
    return;
L_088AFE44:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(44));
    ctx.gpr[5] = (0u | 15u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088AFE5Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x088AFE5Cu) goto L_088AFE5C;
    return;
L_088AFE5C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 15u);
    ctx.gpr[31] = (0x088AFE74u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x088AFE74u) goto L_088AFE74;
    return;
L_088AFE74:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.gpr[5] = (0u | 240u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x088AFE8Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x088AFE8Cu) goto L_088AFE8C;
    return;
L_088AFE8C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(56));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 15u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x088AFEA4u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x088AFEA4u) goto L_088AFEA4;
    return;
L_088AFEA4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(60));
    ctx.gpr[5] = (0u | 15u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x088AFEBCu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x088AFEBCu) goto L_088AFEBC;
    return;
L_088AFEBC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x088AFEC8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16532));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x088AFEC8u) goto L_088AFEC8;
    return;
L_088AFEC8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(16484));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 174u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088AFEE8u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x088AFEE8u) goto L_088AFEE8;
    return;
L_088AFEE8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (0u | 77u);
    ctx.gpr[6] = (0u | 155u);
    ctx.gpr[7] = (0u | 210u);
    ctx.gpr[31] = (0x088AFF00u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x088AFF00u) goto L_088AFF00;
    return;
L_088AFF00:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (0u | 75u);
    ctx.gpr[6] = (0u | 151u);
    ctx.gpr[7] = (0u | 75u);
    ctx.gpr[31] = (0x088AFF18u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x088AFF18u) goto L_088AFF18;
    return;
L_088AFF18:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (0u | 217u);
    ctx.gpr[6] = (0u | 174u);
    ctx.gpr[7] = (0u | 87u);
    ctx.gpr[31] = (0x088AFF30u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x088AFF30u) goto L_088AFF30;
    return;
L_088AFF30:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (0u | 252u);
    ctx.gpr[6] = (0u | 116u);
    ctx.gpr[7] = (0u | 186u);
    ctx.gpr[31] = (0x088AFF48u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x088AFF48u) goto L_088AFF48;
    return;
L_088AFF48:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (0u | 151u);
    ctx.gpr[6] = (0u | 82u);
    ctx.gpr[7] = (0u | 197u);
    ctx.gpr[31] = (0x088AFF60u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x088AFF60u) goto L_088AFF60;
    return;
L_088AFF60:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (0u | 240u);
    ctx.gpr[6] = (0u | 158u);
    ctx.gpr[7] = (0u | 147u);
    ctx.gpr[31] = (0x088AFF78u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x088AFF78u) goto L_088AFF78;
    return;
L_088AFF78:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 153u);
    ctx.gpr[7] = (0u | 51u);
    ctx.gpr[31] = (0x088AFF90u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x088AFF90u) goto L_088AFF90;
    return;
L_088AFF90:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 227u);
    ctx.gpr[7] = (0u | 79u);
    ctx.gpr[31] = (0x088AFFA8u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x088AFFA8u) goto L_088AFFA8;
    return;
L_088AFFA8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (0u | 174u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088AFFC0u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x088AFFC0u) goto L_088AFFC0;
    return;
L_088AFFC0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x088AFFD8u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x088AFFD8u) goto L_088AFFD8;
    return;
L_088AFFD8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(44));
    ctx.gpr[5] = (0u | 153u);
    ctx.gpr[6] = (0u | 153u);
    ctx.gpr[7] = (0u | 153u);
    ctx.gpr[31] = (0x088AFFF0u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x088AFFF0u) goto L_088AFFF0;
    return;
L_088AFFF0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x088AFFFCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16544));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x088AFFFCu) goto L_088AFFFC;
    return;
L_088AFFFC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.pc = 0x088B0000u; return;
}

void recomp_unit_0042(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0042_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_42(Runtime &runtime) {
    runtime.register_generated_unit(42u, 0x088AC000u, 16384u, &recomp_unit_0042, &recomp_unit_0042_entry);
    runtime.register_function(0x088AC004u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC008u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC010u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC01Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC02Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC038u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC048u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC050u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC064u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC070u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC098u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC0A0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC0ACu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC0BCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC0C8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC0D8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC0E0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC0F4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC100u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC128u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC130u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC13Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC14Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC158u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC168u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC170u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC184u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC190u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC1B8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC1C0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC1CCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC1DCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC1E8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC1F8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC200u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC214u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC220u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC248u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC250u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC25Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC26Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC278u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC288u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC290u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC2A4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC2B0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC2D8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC2E0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC2ECu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC2FCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC308u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC318u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC320u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC334u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC340u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC368u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC370u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC37Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC38Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC398u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC3A8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC3B0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC3C4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC3D0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC3F8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC400u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC40Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC41Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC428u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC438u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC440u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC454u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC460u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC488u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC490u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC49Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC4ACu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC4B8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC4C8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC4D0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC4E4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC4F0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC518u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC520u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC52Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC53Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC548u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC558u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC560u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC574u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC580u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC5A8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC5B0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC5BCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC5CCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC5D8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC5E8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC5F0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC604u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC610u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC638u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC640u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC64Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC65Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC668u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC678u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC680u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC694u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC6A0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC6C8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC6D0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC6DCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC6ECu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC6F8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC708u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC710u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC724u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC730u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC758u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC760u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC76Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC77Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC788u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC798u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC7A0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC7B4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC7C0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC7E8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC7F0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC7FCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC80Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC818u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC828u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC830u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC844u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC850u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC878u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC880u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC88Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC89Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC8A8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC8B8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC8C0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC8D4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC8E0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC908u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC910u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC91Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC92Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC938u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC948u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC950u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC964u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC970u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC998u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC9A0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC9ACu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC9BCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC9C8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC9D8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC9E0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC9F4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACA00u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACA28u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACA30u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACA3Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACA4Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACA58u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACA68u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACA70u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACA84u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACA90u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACAB8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACAC0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACACCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACADCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACAE8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACAF8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACB00u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACB14u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACB20u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACB48u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACB50u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACB5Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACB6Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACB78u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACB88u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACB90u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACBA4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACBB0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACBD8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACBE0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACBECu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACBFCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACC08u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACC18u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACC20u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACC34u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACC40u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACC68u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACC70u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACC7Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACC8Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACC98u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACCA8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACCB0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACCC4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACCD0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACCF8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACD00u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACD0Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACD1Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACD28u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACD38u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACD40u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACD54u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACD60u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACD88u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACD90u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACD9Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACDACu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACDB8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACDC8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACDD0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACDE4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACDF0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACE18u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACE20u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACE2Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACE3Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACE48u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACE58u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACE60u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACE74u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACE80u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACEA8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACEB0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACEBCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACECCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACED8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACEE8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACEF0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACF04u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACF10u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACF38u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACF40u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACF4Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACF5Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACF68u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACF78u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACF80u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACF94u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACFA0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACFC8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACFD0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACFDCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACFECu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACFF8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD008u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD010u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD024u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD030u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD058u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD060u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD06Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD07Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD088u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD098u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD0A0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD0B4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD0C0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD0E8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD0F0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD0FCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD10Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD118u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD128u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD130u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD144u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD150u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD178u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD180u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD18Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD19Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD1A8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD1B8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD1C0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD1D4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD1E0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD208u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD210u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD21Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD22Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD238u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD248u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD250u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD264u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD270u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD298u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD2A0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD2ACu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD2BCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD2C8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD2D8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD2E0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD2F4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD300u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD328u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD330u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD33Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD34Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD358u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD368u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD370u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD384u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD390u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD3B8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD3C0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD3CCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD3DCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD3E8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD3F8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD400u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD414u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD420u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD448u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD450u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD45Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD46Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD478u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD488u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD490u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD4A4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD4B0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD4D8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD4E0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD4ECu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD4FCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD508u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD518u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD520u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD534u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD540u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD568u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD570u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD57Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD58Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD598u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD5A8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD5B0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD5C4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD5D0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD5F8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD600u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD60Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD61Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD628u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD638u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD640u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD654u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD660u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD688u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD690u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD69Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD6ACu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD6B8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD6C8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD6D0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD6E4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD6F0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD718u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD720u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD72Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD73Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD748u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD758u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD760u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD774u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD780u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD7A8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD7B0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD7BCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD7CCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD7D8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD7E8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD7F0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD7F8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD81Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD824u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD82Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD834u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD844u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD868u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD890u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD898u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD8D0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD8ECu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD8F8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD91Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD958u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD974u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD980u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD988u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD990u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD9C8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD9D8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD9E4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD9F8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADA00u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADA0Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADA20u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADA28u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADA34u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADA3Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADA48u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADA5Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADA64u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADA70u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADA78u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADA8Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADA98u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADAB0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADAB8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADAE4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADAECu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADAFCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADB08u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADB1Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADB30u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADB54u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADB60u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADB70u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADB74u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADB88u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADBB4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADBC8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADBDCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADBE8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADBF4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADBFCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADC00u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADC60u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADC6Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADC78u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADC84u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADC90u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADC98u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADC9Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADCA4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADCB4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADCD8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADCE0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADCE8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADCF0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADCFCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADD0Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADD14u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADD20u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADD38u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADD40u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADD54u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADD7Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADD8Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADD98u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADDA0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADDA8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADDACu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADDB4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADDB8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADDE4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADE08u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADE40u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADE78u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADE94u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADE98u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADE9Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADEA4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADEB0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADEB8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADEBCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADECCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADEDCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADEE4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADEECu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADEF8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADF14u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADF20u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADF58u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADF9Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADFB0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADFC4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADFCCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADFD4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADFDCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADFE8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADFECu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE038u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE048u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE06Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE074u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE0A4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE0ACu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE0B8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE0D4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE0D8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE0DCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE0E4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE0F0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE0F8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE0FCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE10Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE11Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE124u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE12Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE138u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE140u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE148u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE150u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE164u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE16Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE174u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE17Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE188u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE1A4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE1A8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE1ACu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE1B4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE1C0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE1C8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE1CCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE1DCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE1ECu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE1F4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE1FCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE204u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE22Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE240u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE254u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE268u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE270u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE27Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE284u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE2ACu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE2C0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE2C4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE2ECu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE2FCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE304u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE314u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE31Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE370u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE380u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE398u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE3ACu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE3D8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE3E0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE40Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE448u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE454u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE460u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE46Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE474u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE4B4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE4FCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE508u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE510u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE518u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE54Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE55Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE56Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE570u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE574u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE584u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE590u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE598u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE5A0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE5ACu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE5BCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE5C4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE5D4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE5E8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE5F8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE604u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE618u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE624u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE630u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE638u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE63Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE654u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE664u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE674u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE678u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE67Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE68Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE694u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE69Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE6A4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE6ACu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE6B4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE708u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE710u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE750u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE758u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE764u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE774u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE788u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE790u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE798u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE7A0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE7ACu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE7FCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE808u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE828u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE83Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE848u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE8C4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE8D0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE8E0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE8E8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE90Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE910u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE95Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE968u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE984u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE998u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE99Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE9A4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE9D4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE9E0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE9F4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEA00u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEA0Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEA14u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEA18u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEA28u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEA34u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEA44u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEA5Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEA80u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEA84u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEAB4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEAF4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEB14u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEB1Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEB20u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEB2Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEB38u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEB40u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEB48u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEB50u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEB5Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEB64u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEB6Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEB74u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEB80u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEB88u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEB90u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEB98u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEBA4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEBACu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEBB4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEBBCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEBC8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEBD0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEBD8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEBE0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEBE8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEC28u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEC58u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEC90u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AECC0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AECE8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AED14u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AED34u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AED60u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AED88u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEDB8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEDD8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEE04u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEE24u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEE44u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEE4Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEE54u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEE88u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEE98u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEEACu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEEF4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEEFCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEF04u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEF0Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEF44u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEF54u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEF6Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEF90u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEFA0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEFB0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEFF0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF02Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF03Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF04Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF070u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF080u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF090u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF0D4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF0DCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF0E4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF0ECu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF120u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF130u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF148u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF16Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF17Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF18Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF1DCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF20Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF21Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF230u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF268u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF298u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF2A0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF2BCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF2E8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF2ECu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF31Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF328u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF330u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF338u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF340u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF354u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF380u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF38Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF394u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF3A0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF3ACu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF3B4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF3C0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF3D4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF400u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF40Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF414u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF428u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF440u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF454u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF45Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF460u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF47Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF48Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF494u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF498u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF4A8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF4B8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF4C4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF4ECu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF4F0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF514u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF518u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF540u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF55Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF568u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF570u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF584u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF598u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF63Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF658u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF690u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF6A0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF6E0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF6F0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF718u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF720u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF72Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF768u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF774u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF77Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF7BCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF7E0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF7ECu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF818u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF81Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF840u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF848u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF84Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF874u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF878u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF898u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF908u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF924u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF92Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF948u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF968u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF96Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF994u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF9B4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFD54u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFD6Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFD84u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFD9Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFDB4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFDCCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFDE4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFDFCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFE14u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFE2Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFE44u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFE5Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFE74u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFE8Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFEA4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFEBCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFEC8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFEE8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFF00u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFF18u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFF30u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFF48u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFF60u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFF78u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFF90u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFFA8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFFC0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFFD8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFFF0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFFFCu, &recomp_unit_0042, "recomp_unit_0042");
}
} // namespace psprecomp
